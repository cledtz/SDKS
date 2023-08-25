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

// 0x58 (0x58 - 0x0)
// Function AudioWorldization.AudioWorldizationSubsystem.SetWorldizationSettings
struct UAudioWorldizationSubsystem_SetWorldizationSettings_Params
{
public:
	struct FAudioWorldizationSettings            InSettings;                                        // 0x0(0x58)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AudioWorldization.AudioWorldizationSubsystem.SetEnabled
struct UAudioWorldizationSubsystem_SetEnabled_Params
{
public:
	bool                                         bNewEnabled;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AudioWorldization.AudioWorldizationSubsystem.SetDefaultSettings
struct UAudioWorldizationSubsystem_SetDefaultSettings_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function AudioWorldization.AudioWorldizationSubsystem.RemoveWorldizationSettings
struct UAudioWorldizationSubsystem_RemoveWorldizationSettings_Params
{
public:
	class FName                                  InIdentifier;                                      // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AudioWorldization.AudioWorldizationSubsystem.GetTraceResults
struct UAudioWorldizationSubsystem_GetTraceResults_Params
{
public:
	TArray<struct FAudioSphereTraceResult>       ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AudioWorldization.AudioWorldizationSubsystem.GetEnclosureFactor
struct UAudioWorldizationSubsystem_GetEnclosureFactor_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AudioWorldization.AudioWorldizationSubsystem.GetAverageTraceDistance
struct UAudioWorldizationSubsystem_GetAverageTraceDistance_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


