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

        static void Main(string[] args)
        {
            Console.WriteLine("FortTimeMachine.Client by Cyuubi, do not distribute!");
            Console.WriteLine();

            Console.WriteLine("You must enter an address, which will be used for connecting to the game server.");
            Console.Write("- Address: ");

            var address = Console.ReadLine();

            Task.Factory.StartNew(() =>
            {
                var server = new NamedPipeServerStream("FortTimeMachine");

                server.WaitForConnection();

                using (var reader = new BinaryReader(server))
                using (var writer = new BinaryWriter(server))
                {
                    while (true)
                    {
                        var id = reader.ReadByte();

                        switch (id)
                        {
                            case 0: // PipeClient_Connect
                                {
                                    if (string.IsNullOrEmpty(address) || _isConnected)
                                    {
                                        writer.Write((byte)3); // PipeServer_HasFailed
                                        return;
                                    }

                                    _socket = new WebSocket($"ws://{address}");
                                    _socket.OnMessage += (sender, e) => writer.Write(e.RawData);
                                    _socket.OnClose += (sender, e) => writer.Write((byte)2); // PipeServer_HasDisconnected
                                    _socket.OnError += (sender, e) => writer.Write((byte)3); // PipeServer_HasFailed

                                    _socket.Connect();

                                    if (_socket.IsAlive)
                                    {
                                        _isConnected = true;

                                        writer.Write((byte)1); // PipeServer_HasConnected
                                    }
                                    else
                                        writer.Write((byte)3); // PipeServer_HasFailed
                                }
                                break;

                            default:
                                {
                                    if (!_isConnected)
                                        return;

                                    // TODO: This is a really shitty hackjob, but it works for now.
                                    var bytes = reader.ReadBytes(short.MaxValue);
                                    var array = new byte[bytes.Length + 1];

                                    bytes.CopyTo(array, 1);

                                    array[0] = id;

                                    _socket.Send(bytes);
                                }
                                break;
                        }
                    }
                }
            });
        }
    }
}
