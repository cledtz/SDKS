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

// 0x0 (0x0 - 0x0)
// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.UpdateProxyCenterAndRadius
struct UFortAthenaMutator_SplitStorm_UpdateProxyCenterAndRadius_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.StartProxyUpdateTimer
struct UFortAthenaMutator_SplitStorm_StartProxyUpdateTimer_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.SetSafeZoneProxyPhase
struct UFortAthenaMutator_SplitStorm_SetSafeZoneProxyPhase_Params
{
public:
	enum class ESplitStormProxyPhase             NewPhase;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.SetProxyRadius
struct UFortAthenaMutator_SplitStorm_SetProxyRadius_Params
{
public:
	float                                        NewRadius;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.SetProxyCenter
struct UFortAthenaMutator_SplitStorm_SetProxyCenter_Params
{
public:
	struct FVector                               NewCenter;                                         // 0x0(0x18)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.OnSafeZonePhaseChanged
struct UFortAthenaMutator_SplitStorm_OnSafeZonePhaseChanged_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.OnSafeZoneIndicatorSpawned
struct UFortAthenaMutator_SplitStorm_OnSafeZoneIndicatorSpawned_Params
{
public:
	struct FFortSafeZoneIndicatorUpdatedEvent    Event;                                             // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.OnRep_CurrentProxyCircle
struct UFortAthenaMutator_SplitStorm_OnRep_CurrentProxyCircle_Params
{
public:
};

}
}


