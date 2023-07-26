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
// Function HoagieRuntime.FortHoagieAudioController.Update
struct AFortHoagieAudioController_Update_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function HoagieRuntime.FortHoagieAudioController.CacheHoagieVehicle
struct AFortHoagieAudioController_CacheHoagieVehicle_Params
{
public:
	class AFortHoagieVehicle*                    InVehicle;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function HoagieRuntime.FortHoagieAudioController.CacheAudioComponents
struct AFortHoagieAudioController_CacheAudioComponents_Params
{
public:
	class UFortLayeredAudioComponent*            InEngine;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortLayeredAudioComponent*            InRotor;                                           // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.UpdateHoagieAnimBP
struct AFortHoagieVehicle_UpdateHoagieAnimBP_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.UpdateDamageStateNative
struct AFortHoagieVehicle_UpdateDamageStateNative_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.ShowCooldownCue
struct AFortHoagieVehicle_ShowCooldownCue_Params
{
public:
	class AFortPlayerPawn*                       Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E1A[0x4];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.SetTailRotorRotation
struct AFortHoagieVehicle_SetTailRotorRotation_Params
{
public:
	float                                        Degrees;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.SetRotorWashActive
struct AFortHoagieVehicle_SetRotorWashActive_Params
{
public:
	bool                                         bActive;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.SetMainRotorRotation
struct AFortHoagieVehicle_SetMainRotorRotation_Params
{
public:
	float                                        Degrees;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.ServerUpdateControlState
struct AFortHoagieVehicle_ServerUpdateControlState_Params
{
public:
	struct FReplicatedHeliControlState           InControlState;                                    // 0x0(0x30)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnTickRotors
struct AFortHoagieVehicle_OnTickRotors_Params
{
public:
	float                                        RotorAngleDegrees;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnStartupEnd
struct AFortHoagieVehicle_OnStartupEnd_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnStartupBegin
struct AFortHoagieVehicle_OnStartupBegin_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnRotorsStop
struct AFortHoagieVehicle_OnRotorsStop_Params
{
public:
};

// 0xE0 (0xE0 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnRotorDamagePlayer
struct AFortHoagieVehicle_OnRotorDamagePlayer_Params
{
public:
	struct FHitResult                            Impact;                                            // 0x0(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealtOuter
struct AFortHoagieVehicle_OnRotorDamageDealtOuter_Params
{
public:
	struct FHitResult                            Impact;                                            // 0x0(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealtInner
struct AFortHoagieVehicle_OnRotorDamageDealtInner_Params
{
public:
	struct FHitResult                            Impact;                                            // 0x0(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xE8 (0xE8 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealt
struct AFortHoagieVehicle_OnRotorDamageDealt_Params
{
public:
	struct FHitResult                            Impact;                                            // 0x0(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bInner;                                            // 0xE0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E1B[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnRep_HoagieState
struct AFortHoagieVehicle_OnRep_HoagieState_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnRep_ControlState
struct AFortHoagieVehicle_OnRep_ControlState_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnRefueledFromEmpty
struct AFortHoagieVehicle_OnRefueledFromEmpty_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnImpactWhileCritical
struct AFortHoagieVehicle_OnImpactWhileCritical_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnImpactOtherHoagie
struct AFortHoagieVehicle_OnImpactOtherHoagie_Params
{
public:
	struct FVector                               HitLocation;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NormalImpulse;                                     // 0x18(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnCritRotor
struct AFortHoagieVehicle_OnCritRotor_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E1C[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               ImpactLocation;                                    // 0x8(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                           DamageInstigator;                                  // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMainRotor;                                        // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E1D[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnBoostStarted
struct AFortHoagieVehicle_OnBoostStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnBoostReady
struct AFortHoagieVehicle_OnBoostReady_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnBoostFinished
struct AFortHoagieVehicle_OnBoostFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnBoostFailed
struct AFortHoagieVehicle_OnBoostFailed_Params
{
public:
};

// 0xE0 (0xE0 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.MulticastRotorImpulse
struct AFortHoagieVehicle_MulticastRotorImpulse_Params
{
public:
	struct FHitResult                            RotorHit;                                          // 0x0(0xE0)(ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.IsStartingUp
struct AFortHoagieVehicle_IsStartingUp_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.IsShuttingDown
struct AFortHoagieVehicle_IsShuttingDown_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.IsScrapingBottom
struct AFortHoagieVehicle_IsScrapingBottom_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.HoagieOnDisabledChanged
struct AFortHoagieVehicle_HoagieOnDisabledChanged_Params
{
public:
	bool                                         bDisabled;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetVerticalSpeedKmh
struct AFortHoagieVehicle_GetVerticalSpeedKmh_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetThrustDirection
struct AFortHoagieVehicle_GetThrustDirection_Params
{
public:
	bool                                         bWorldSpace;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E1E[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetStrafeAlpha
struct AFortHoagieVehicle_GetStrafeAlpha_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetSteerAlpha
struct AFortHoagieVehicle_GetSteerAlpha_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetShutdownTimeLeft
struct AFortHoagieVehicle_GetShutdownTimeLeft_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetRotorSpeedPercent
struct AFortHoagieVehicle_GetRotorSpeedPercent_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetRotorSpeed
struct AFortHoagieVehicle_GetRotorSpeed_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetRotorCenterPosition
struct AFortHoagieVehicle_GetRotorCenterPosition_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetRotorAngleDegrees
struct AFortHoagieVehicle_GetRotorAngleDegrees_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetMaxBoostCooldown
struct AFortHoagieVehicle_GetMaxBoostCooldown_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetMaxAltitude
struct AFortHoagieVehicle_GetMaxAltitude_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetLiftAlpha
struct AFortHoagieVehicle_GetLiftAlpha_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetIsEngineOn
struct AFortHoagieVehicle_GetIsEngineOn_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetForwardAlpha
struct AFortHoagieVehicle_GetForwardAlpha_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetDistanceToGround
struct AFortHoagieVehicle_GetDistanceToGround_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetBoostTimeLeft
struct AFortHoagieVehicle_GetBoostTimeLeft_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetBoostDuration
struct AFortHoagieVehicle_GetBoostDuration_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetBoostDirection
struct AFortHoagieVehicle_GetBoostDirection_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetBoostCooldown
struct AFortHoagieVehicle_GetBoostCooldown_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetAltitude
struct AFortHoagieVehicle_GetAltitude_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
