using System;
using System.Collections.Generic;
using System.IO;
using System.IO.Pipes;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using WebSocketSharp;

namespace FortTimeMachine.Client
{
    class Program
    {
        static bool _isConnected;

        static WebSocket _socket;

        static BinaryReader _reader;
        static BinaryWriter _writer;

        static void Main(string[] args)
        {
            Console.WriteLine("FortTimeMachine.Client by Cyuubi, do not distribute!");
            Console.WriteLine();

            Console.WriteLine("You must enter an address, which will be used for connecting to the game server.");
            Console.Write("- Address: ");

            var address = Console.ReadLine();

            Console.WriteLine();

            _socket = new WebSocket($"ws://{address}");
            _socket.OnOpen += OnOpen;
            _socket.OnClose += OnClose;
            _socket.OnError += OnError;
            _socket.OnMessage += OnMessage;

            Task.Factory.StartNew(() =>
            {
                var server = new NamedPipeServerStream("FortTimeMachine");

                server.WaitForConnection();

                _reader = new BinaryReader(server);
                _writer = new BinaryWriter(server);

                while (true)
                {
                    var id = _reader.ReadByte();

                    switch (id)
                    {
                        case 0: // PipeClient_Connect
                            {
                                Console.WriteLine("PipeClient_Connect");

                                if (string.IsNullOrEmpty(address) || _isConnected)
                                {
                                    _writer.Write((byte)3); // PipeServer_HasFailed
                                    _writer.Flush();
                                    return;
                                }

                                _socket.Connect();
                            }
                            break;

                        default:
                            {
                                if (!_isConnected)
                                    return;

                                // TODO: This is a really shitty hackjob, but it works for now.
                                var bytes = _reader.ReadBytes(short.MaxValue);
                                var array = new byte[bytes.Length + 1];

                                bytes.CopyTo(array, 1);

                                array[0] = id;

                                _socket.Send(bytes);
                            }
                            break;
                    }
                }
            });

            Console.ReadKey();
        }

        static void OnOpen(object sender, EventArgs e)
        {
            _isConnected = true;

            _writer.Write((byte)1); // PipeServer_HasConnected
            _writer.Flush();
        }

        static void OnClose(object sender, CloseEventArgs e)
        {
            _isConnected = false;

            _writer.Write((byte)2); // PipeServer_HasDisconnected
            _writer.Flush();
        }

        static void OnError(object sender, WebSocketSharp.ErrorEventArgs e)
        {
            if (_socket.IsAlive)
                _socket.Close();

            _writer.Write((byte)3); // PipeServer_HasFailed
            _writer.Flush();
        }

        static void OnMessage(object sender, MessageEventArgs e)
        {
            Console.WriteLine($"RECV {e.RawData[0]}");

            _writer.Write(e.RawData);
            _writer.Flush();
        }
    }
}
