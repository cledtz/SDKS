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
// Function SidewaysCodeRuntime.SidewaysCheatManager.SetSidewaysState
struct USidewaysCheatManager_SetSidewaysState_Params
{
public:
	enum class ESidewaysState                    SidewaysState;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SidewaysCodeRuntime.SidewaysStateComponent.SetSidewaysState
struct USidewaysStateComponent_SetSidewaysState_Params
{
public:
	enum class ESidewaysState                    NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38D1[0x7];                                     // Fixing Size After Last Property 
	class USidewaysPlayspace*                    NewSidewaysPlayspace;                              // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SidewaysCodeRuntime.SidewaysStateComponent.OnRep_SidewaysState
struct USidewaysStateComponent_OnRep_SidewaysState_Params
{
public:
	enum class ESidewaysState                    LastSidewaysState;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SidewaysCodeRuntime.SidewaysStateComponent.OnRep_SidewaysPlayspace
struct USidewaysStateComponent_OnRep_SidewaysPlayspace_Params
{
public:
	class USidewaysPlayspace*                    NewSidewaysPlayspace;                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SidewaysCodeRuntime.SidewaysStateComponent.HandleSidewaysStateChanged
struct USidewaysStateComponent_HandleSidewaysStateChanged_Params
{
public:
	class USidewaysPlayspace*                    NewSidewaysPlayspace;                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESidewaysState                    OldState;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESidewaysState                    NewState;                                          // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38DE[0x6];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// Function SidewaysCodeRuntime.SidewaysStateComponent.GetSidewaysState
struct USidewaysStateComponent_GetSidewaysState_Params
{
public:
	enum class ESidewaysState                    ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SidewaysCodeRuntime.SidewaysLibrary.GetSidewaysStateComponent
struct USidewaysLibrary_GetSidewaysStateComponent_Params
{
public:
	class UActor*                                Owner;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USidewaysStateComponent*               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SidewaysCodeRuntime.SidewaysPlayspace.RefreshActorsInSideways
struct USidewaysPlayspace_RefreshActorsInSideways_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SidewaysCodeRuntime.SidewaysPlayspace.NotifySizeChanged
struct USidewaysPlayspace_NotifySizeChanged_Params
{
public:
};

}
}


