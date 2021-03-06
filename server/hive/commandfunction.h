//
// Created by IntelliJ IDEA.
// User: AppleTree
// Date: 17/3/26
// Time: 下午4:48
// To change this template use File | Settings | File Templates.
//

#ifndef __hive__commandfunction__
#define __hive__commandfunction__

#include "core.h"

NS_HIVE_BEGIN

void onCommandPing(Accept* pAccept, Packet* pPacket, uint32 command);
void onCommandPong(Accept* pAccept, Packet* pPacket, uint32 command);
void onCommandRegister(Accept* pAccept, Packet* pPacket, uint32 command);
void onCommandResponse(Accept* pAccept, Packet* pPacket, uint32 command);
void onCommandHiveRegister(Accept* pAccept, Packet* pPacket, uint32 command);
void onCommandHiveResponse(Accept* pAccept, Packet* pPacket, uint32 command);
void onCommandDispatchByHandle(Accept* pAccept, Packet* pPacket, uint32 command);
void onCommandBeeRegister(Accept* pAccept, Packet* pPacket, uint32 command);
void onCommandBeeResponse(Accept* pAccept, Packet* pPacket, uint32 command);
void onCommandBeeOnline(Accept* pAccept, Packet* pPacket, uint32 command);
void onCommandBeeOffline(Accept* pAccept, Packet* pPacket, uint32 command);
void onCommandBroadcast(Accept* pAccept, Packet* pPacket, uint32 command);
void onCommandBroadcastBegin(Accept* pAccept, Packet* pPacket, uint32 command);
void onCommandBroadcastOnline(Accept* pAccept, Packet* pPacket, uint32 command);
void onCommandBroadcastOnlineBegin(Accept* pAccept, Packet* pPacket, uint32 command);

NS_HIVE_END

#endif
