#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function PingQoS.PingQoSSubsystem.Update
struct UPingQoSSubsystem_Update_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PingQoS.PingQoSSubsystem.Recv
struct UPingQoSSubsystem_Recv_Params
{
public:
	TArray<struct FPingQoSInfo>                  ResultInfos;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PingQoS.PingQoSSubsystem.Init
struct UPingQoSSubsystem_Init_Params
{
public:
	TArray<struct FPingQoSInfo>                  SetInfo;                                           // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

}
}


