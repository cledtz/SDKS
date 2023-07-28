#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x0 - 0x0)
// Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging
struct UReplicationGraphDebugActor_ServerStopDebugging_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging
struct UReplicationGraphDebugActor_ServerStartDebugging_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass
struct UReplicationGraphDebugActor_ServerSetPeriodFrameForClass_Params
{
public:
	class UClass*                                Class;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PeriodFrame;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_371C[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
struct UReplicationGraphDebugActor_ServerSetCullDistanceForClass_Params
{
public:
	class UClass*                                Class;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CullDistance;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_371D[0x4];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint
struct UReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances
struct UReplicationGraphDebugActor_ServerPrintCullDistances_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
struct UReplicationGraphDebugActor_ServerPrintAllActorInfo_Params
{
public:
	class FString                                Str;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo
struct UReplicationGraphDebugActor_ServerCellInfo_Params
{
public:
};

// 0x40 (0x40 - 0x0)
// Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
struct UReplicationGraphDebugActor_ClientCellInfo_Params
{
public:
	struct FVector                               CellLocation;                                      // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CellExtent;                                        // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UActor*>                        Actors;                                            // 0x30(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
