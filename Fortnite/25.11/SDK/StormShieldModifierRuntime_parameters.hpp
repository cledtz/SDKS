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
// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.UpdateProxyCenterAndRadius
struct AFortAthenaMutator_SplitStorm_UpdateProxyCenterAndRadius_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.StartProxyUpdateTimer
struct AFortAthenaMutator_SplitStorm_StartProxyUpdateTimer_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.SetSafeZoneProxyPhase
struct AFortAthenaMutator_SplitStorm_SetSafeZoneProxyPhase_Params
{
public:
	enum class ESplitStormProxyPhase             NewPhase;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.SetProxyRadius
struct AFortAthenaMutator_SplitStorm_SetProxyRadius_Params
{
public:
	float                                        NewRadius;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.SetProxyCenter
struct AFortAthenaMutator_SplitStorm_SetProxyCenter_Params
{
public:
	struct FVector                               NewCenter;                                         // 0x0(0x18)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.OnSafeZonePhaseChanged
struct AFortAthenaMutator_SplitStorm_OnSafeZonePhaseChanged_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.OnSafeZoneIndicatorSpawned
struct AFortAthenaMutator_SplitStorm_OnSafeZoneIndicatorSpawned_Params
{
public:
	class AFortSafeZoneIndicator*                SafeZoneIndicator;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function StormShieldModifierRuntime.FortAthenaMutator_SplitStorm.OnRep_CurrentProxyCircle
struct AFortAthenaMutator_SplitStorm_OnRep_CurrentProxyCircle_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
