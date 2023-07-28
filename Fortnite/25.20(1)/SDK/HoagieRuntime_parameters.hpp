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
struct UFortHoagieAudioController_Update_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function HoagieRuntime.FortHoagieAudioController.CacheHoagieVehicle
struct UFortHoagieAudioController_CacheHoagieVehicle_Params
{
public:
	class UFortHoagieVehicle*                    InVehicle;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function HoagieRuntime.FortHoagieAudioController.CacheAudioComponents
struct UFortHoagieAudioController_CacheAudioComponents_Params
{
public:
	class UFortLayeredAudioComponent*            InEngine;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortLayeredAudioComponent*            InRotor;                                           // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.UpdateHoagieAnimBP
struct UFortHoagieVehicle_UpdateHoagieAnimBP_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.UpdateDamageStateNative
struct UFortHoagieVehicle_UpdateDamageStateNative_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.ShowCooldownCue
struct UFortHoagieVehicle_ShowCooldownCue_Params
{
public:
	class UFortPlayerPawn*                       Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D68[0x4];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.SetTailRotorRotation
struct UFortHoagieVehicle_SetTailRotorRotation_Params
{
public:
	float                                        Degrees;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.SetRotorWashActive
struct UFortHoagieVehicle_SetRotorWashActive_Params
{
public:
	bool                                         bActive;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.SetMainRotorRotation
struct UFortHoagieVehicle_SetMainRotorRotation_Params
{
public:
	float                                        Degrees;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.ServerUpdateControlState
struct UFortHoagieVehicle_ServerUpdateControlState_Params
{
public:
	struct FReplicatedHeliControlState           InControlState;                                    // 0x0(0x30)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnTickRotors
struct UFortHoagieVehicle_OnTickRotors_Params
{
public:
	float                                        RotorAngleDegrees;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnStartupEnd
struct UFortHoagieVehicle_OnStartupEnd_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnStartupBegin
struct UFortHoagieVehicle_OnStartupBegin_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnRotorsStop
struct UFortHoagieVehicle_OnRotorsStop_Params
{
public:
};

// 0xE0 (0xE0 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnRotorDamagePlayer
struct UFortHoagieVehicle_OnRotorDamagePlayer_Params
{
public:
	struct FHitResult                            Impact;                                            // 0x0(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealtOuter
struct UFortHoagieVehicle_OnRotorDamageDealtOuter_Params
{
public:
	struct FHitResult                            Impact;                                            // 0x0(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealtInner
struct UFortHoagieVehicle_OnRotorDamageDealtInner_Params
{
public:
	struct FHitResult                            Impact;                                            // 0x0(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xE8 (0xE8 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealt
struct UFortHoagieVehicle_OnRotorDamageDealt_Params
{
public:
	struct FHitResult                            Impact;                                            // 0x0(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bInner;                                            // 0xE0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D69[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnRep_HoagieState
struct UFortHoagieVehicle_OnRep_HoagieState_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnRep_ControlState
struct UFortHoagieVehicle_OnRep_ControlState_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnRefueledFromEmpty
struct UFortHoagieVehicle_OnRefueledFromEmpty_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnImpactWhileCritical
struct UFortHoagieVehicle_OnImpactWhileCritical_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnImpactOtherHoagie
struct UFortHoagieVehicle_OnImpactOtherHoagie_Params
{
public:
	struct FVector                               HitLocation;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NormalImpulse;                                     // 0x18(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnCritRotor
struct UFortHoagieVehicle_OnCritRotor_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D6A[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               ImpactLocation;                                    // 0x8(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UController*                           DamageInstigator;                                  // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageCauser;                                      // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMainRotor;                                        // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D6B[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnBoostStarted
struct UFortHoagieVehicle_OnBoostStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnBoostReady
struct UFortHoagieVehicle_OnBoostReady_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnBoostFinished
struct UFortHoagieVehicle_OnBoostFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.OnBoostFailed
struct UFortHoagieVehicle_OnBoostFailed_Params
{
public:
};

// 0xE0 (0xE0 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.MulticastRotorImpulse
struct UFortHoagieVehicle_MulticastRotorImpulse_Params
{
public:
	struct FHitResult                            RotorHit;                                          // 0x0(0xE0)(ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.IsStartingUp
struct UFortHoagieVehicle_IsStartingUp_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.IsShuttingDown
struct UFortHoagieVehicle_IsShuttingDown_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.IsScrapingBottom
struct UFortHoagieVehicle_IsScrapingBottom_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.HoagieOnDisabledChanged
struct UFortHoagieVehicle_HoagieOnDisabledChanged_Params
{
public:
	bool                                         bDisabled;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetVerticalSpeedKmh
struct UFortHoagieVehicle_GetVerticalSpeedKmh_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetThrustDirection
struct UFortHoagieVehicle_GetThrustDirection_Params
{
public:
	bool                                         bWorldSpace;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D6C[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetStrafeAlpha
struct UFortHoagieVehicle_GetStrafeAlpha_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetSteerAlpha
struct UFortHoagieVehicle_GetSteerAlpha_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetShutdownTimeLeft
struct UFortHoagieVehicle_GetShutdownTimeLeft_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetRotorSpeedPercent
struct UFortHoagieVehicle_GetRotorSpeedPercent_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetRotorSpeed
struct UFortHoagieVehicle_GetRotorSpeed_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetRotorCenterPosition
struct UFortHoagieVehicle_GetRotorCenterPosition_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetRotorAngleDegrees
struct UFortHoagieVehicle_GetRotorAngleDegrees_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetMaxBoostCooldown
struct UFortHoagieVehicle_GetMaxBoostCooldown_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetMaxAltitude
struct UFortHoagieVehicle_GetMaxAltitude_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetLiftAlpha
struct UFortHoagieVehicle_GetLiftAlpha_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetIsEngineOn
struct UFortHoagieVehicle_GetIsEngineOn_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetForwardAlpha
struct UFortHoagieVehicle_GetForwardAlpha_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetDistanceToGround
struct UFortHoagieVehicle_GetDistanceToGround_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetBoostTimeLeft
struct UFortHoagieVehicle_GetBoostTimeLeft_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetBoostDuration
struct UFortHoagieVehicle_GetBoostDuration_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetBoostDirection
struct UFortHoagieVehicle_GetBoostDirection_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetBoostCooldown
struct UFortHoagieVehicle_GetBoostCooldown_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HoagieRuntime.FortHoagieVehicle.GetAltitude
struct UFortHoagieVehicle_GetAltitude_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
