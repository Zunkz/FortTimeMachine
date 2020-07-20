#ifndef PIPE_H
#define PIPE_H

/*
[-- Packet Format --]
00 - PipeClient_Connect
01 - PipeServer_HasConnected
02 - PipeServer_HasDisconnected
03 - PipeServer_HasFailed

10 - GameServer_Ping
11 - GameClient_Pong

12 - GameServer_Open
13 - GameClient_HasOpened
*/

class Pipe {
public:
};

#endif // PIPE_H
