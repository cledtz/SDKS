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

// 0x2C (0x2C - 0x0)
// Function AudioMotorSim.AudioMotorModelComponent.Update
struct UAudioMotorModelComponent_Update_Params
{
public:
	struct FAudioMotorSimInputContext            Input;                                             // 0x0(0x2C)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AudioMotorSim.AudioMotorModelComponent.StopOutput
struct UAudioMotorModelComponent_StopOutput_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AudioMotorSim.AudioMotorModelComponent.StartOutput
struct UAudioMotorModelComponent_StartOutput_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AudioMotorSim.AudioMotorModelComponent.Reset
struct UAudioMotorModelComponent_Reset_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function AudioMotorSim.AudioMotorModelComponent.RemoveMotorSimComponent
struct UAudioMotorModelComponent_RemoveMotorSimComponent_Params
{
public:
	FInterfaceProperty_                          InComponent;                                       // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioMotorSim.AudioMotorModelComponent.RemoveMotorAudioComponent
struct UAudioMotorModelComponent_RemoveMotorAudioComponent_Params
{
public:
	FInterfaceProperty_                          InComponent;                                       // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function AudioMotorSim.AudioMotorModelComponent.GetRuntimeInfo
struct UAudioMotorModelComponent_GetRuntimeInfo_Params
{
public:
	struct FAudioMotorSimRuntimeContext          ReturnValue;                                       // 0x0(0x14)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AudioMotorSim.AudioMotorModelComponent.GetRpm
struct UAudioMotorModelComponent_GetRpm_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AudioMotorSim.AudioMotorModelComponent.GetGear
struct UAudioMotorModelComponent_GetGear_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// Function AudioMotorSim.AudioMotorModelComponent.GetCachedInputData
struct UAudioMotorModelComponent_GetCachedInputData_Params
{
public:
	struct FAudioMotorSimInputContext            ReturnValue;                                       // 0x0(0x2C)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AudioMotorSim.AudioMotorModelComponent.AddMotorSimComponent
struct UAudioMotorModelComponent_AddMotorSimComponent_Params
{
public:
	FInterfaceProperty_                          InComponent;                                       // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SortOrder;                                         // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C90[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function AudioMotorSim.AudioMotorModelComponent.AddMotorAudioComponent
struct UAudioMotorModelComponent_AddMotorAudioComponent_Params
{
public:
	FInterfaceProperty_                          InComponent;                                       // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AudioMotorSim.AudioMotorSim.Reset
struct UAudioMotorSim_Reset_Params
{
public:
};

// 0x44 (0x44 - 0x0)
// Function AudioMotorSim.AudioMotorSimComponent.BP_Update
struct UAudioMotorSimComponent_BP_Update_Params
{
public:
	struct FAudioMotorSimInputContext            Input;                                             // 0x0(0x2C)(Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FAudioMotorSimRuntimeContext          RuntimeInfo;                                       // 0x2C(0x14)(Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C92[0x3];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function AudioMotorSim.AudioMotorSimComponent.BP_Reset
struct UAudioMotorSimComponent_BP_Reset_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
