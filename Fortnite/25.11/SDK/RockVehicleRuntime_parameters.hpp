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

// 0xC (0xC - 0x0)
// Function RockVehicleRuntime.FortCheatManager_RockVehicle.RockVehicleSetVelocity
struct UFortCheatManager_RockVehicle_RockVehicleSetVelocity_Params
{
public:
	float                                        X;                                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Y;                                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Z;                                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function RockVehicleRuntime.FortCheatManager_RockVehicle.RockVehicleSetRotation
struct UFortCheatManager_RockVehicle_RockVehicleSetRotation_Params
{
public:
	float                                        Pitch;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Yaw;                                               // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Roll;                                              // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function RockVehicleRuntime.FortCheatManager_RockVehicle.RockVehicleSetLocation
struct UFortCheatManager_RockVehicle_RockVehicleSetLocation_Params
{
public:
	float                                        X;                                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Y;                                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Z;                                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function RockVehicleRuntime.FortCheatManager_RockVehicle.RockVehicleSetBalboaVelocity
struct UFortCheatManager_RockVehicle_RockVehicleSetBalboaVelocity_Params
{
public:
	float                                        X;                                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Y;                                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Z;                                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function RockVehicleRuntime.RockVehicle.ServerToggleFreeCam
struct ARockVehicle_ServerToggleFreeCam_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function RockVehicleRuntime.RockVehicle.ServerSetLegacyDamageValues
struct ARockVehicle_ServerSetLegacyDamageValues_Params
{
public:
	bool                                         bDamageFriendlyVehicles;                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDamageOtherVehicles;                              // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDamageOwnVehicle;                                 // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDamageAllowedFromOtherVehicle;                    // 0x3(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction RockVehicleRuntime.RockVehicle.RockFreeCamToggledDelegate__DelegateSignature
struct ARockVehicle_RockFreeCamToggledDelegate__DelegateSignature_Params
{
public:
	bool                                         bFreeCam;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0xE8 - 0x0)
// DelegateFunction RockVehicleRuntime.RockVehicle.OnSpringImpact__DelegateSignature
struct ARockVehicle_OnSpringImpact__DelegateSignature_Params
{
public:
	class FName                                  Socket;                                            // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ImpactSpeed;                                       // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            OutHit;                                            // 0x8(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function RockVehicleRuntime.RockVehicle.OnRep_FreeLookCamera
struct ARockVehicle_OnRep_FreeLookCamera_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function RockVehicleRuntime.RockVehicle.GetThrottleState
struct ARockVehicle_GetThrottleState_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function RockVehicleRuntime.RockVehicle.GetDriverInput
struct ARockVehicle_GetDriverInput_Params
{
public:
	struct FFortAthenaVehicleInputState          ReturnValue;                                       // 0x0(0x40)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RockVehicleRuntime.RockVehicle.GetCurrentRockRuntimeConfigOverrides
struct ARockVehicle_GetCurrentRockRuntimeConfigOverrides_Params
{
public:
	struct FRockRuntimeConfigOverrides           ReturnValue;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RockVehicleRuntime.RockVehicleAbility.GetVehicle
struct URockVehicleAbility_GetVehicle_Params
{
public:
	class ARockVehicle*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RockVehicleRuntime.RockVehicleAbility.GetInactiveSeconds
struct URockVehicleAbility_GetInactiveSeconds_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RockVehicleRuntime.RockVehicleAbility.GetActiveSeconds
struct URockVehicleAbility_GetActiveSeconds_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RockVehicleRuntime.RockVehicleBoostTank.OnRep_SecondsRemaining
struct URockVehicleBoostTank_OnRep_SecondsRemaining_Params
{
public:
	float                                        PrevValue;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RockVehicleRuntime.RockVehicleBoostTank.IsBoostFull
struct URockVehicleBoostTank_IsBoostFull_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RockVehicleRuntime.RockVehicleBoostTank.HasBoost
struct URockVehicleBoostTank_HasBoost_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RockVehicleRuntime.RockVehicleBoostTank.GiveBoost
struct URockVehicleBoostTank_GiveBoost_Params
{
public:
	float                                        Seconds;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RockVehicleRuntime.RockVehicleBoostTank.GetPercentRemaining
struct URockVehicleBoostTank_GetPercentRemaining_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RockVehicleRuntime.RockVehicleBoostTank.GetMaxBoostInSeconds
struct URockVehicleBoostTank_GetMaxBoostInSeconds_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RockVehicleRuntime.RockVehicleAbility_GroundTrails.SetEnabled
struct URockVehicleAbility_GroundTrails_SetEnabled_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RockVehicleRuntime.RockVehicleAbility_GroundTrails.OnSurfaceChanged
struct URockVehicleAbility_GroundTrails_OnSurfaceChanged_Params
{
public:
	enum class EPhysicalSurface                  NewSurface;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RockVehicleRuntime.RockVehicleAnalyticsComponent.OnSupersonicStart
struct URockVehicleAnalyticsComponent_OnSupersonicStart_Params
{
public:
	class UActorComponent*                       InComp;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInReset;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_839F[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function RockVehicleRuntime.RockVehicleAnalyticsComponent.OnSupersonicEnd
struct URockVehicleAnalyticsComponent_OnSupersonicEnd_Params
{
public:
	class UActorComponent*                       InComp;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RockVehicleRuntime.RockVehicleAnalyticsComponent.OnPawnExitedSeat
struct URockVehicleAnalyticsComponent_OnPawnExitedSeat_Params
{
public:
	FInterfaceProperty_                          InVehicle;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPawn*                             InPlayerPawn;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InSeatIndex;                                       // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83A0[0x4];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// Function RockVehicleRuntime.RockVehicleAnalyticsComponent.OnPawnEnteredSeat
struct URockVehicleAnalyticsComponent_OnPawnEnteredSeat_Params
{
public:
	FInterfaceProperty_                          InVehicle;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPawn*                             InPlayerPawn;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InSeatIndex;                                       // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83A1[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function RockVehicleRuntime.RockVehicleAnalyticsComponent.OnJumped
struct URockVehicleAnalyticsComponent_OnJumped_Params
{
public:
	class UActorComponent*                       InComp;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInReset;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83A2[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function RockVehicleRuntime.RockVehicleAnalyticsComponent.OnDoubleJumped
struct URockVehicleAnalyticsComponent_OnDoubleJumped_Params
{
public:
	class UActorComponent*                       InComp;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInReset;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83A3[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function RockVehicleRuntime.RockVehicleAnalyticsComponent.OnDodged
struct URockVehicleAnalyticsComponent_OnDodged_Params
{
public:
	class UActorComponent*                       InComp;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInReset;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83A4[0x7];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// Function RockVehicleRuntime.RockVehicleAudioController.SetSurfaceTypeParam
struct ARockVehicleAudioController_SetSurfaceTypeParam_Params
{
public:
	float                                        NewSurfaceParam;                                   // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RockVehicleRuntime.RockVehicleAudioController.SetBoosting
struct ARockVehicleAudioController_SetBoosting_Params
{
public:
	bool                                         bNewBoosting;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RockVehicleRuntime.RockVehicleAudioController.OnInAirUpdated
struct ARockVehicleAudioController_OnInAirUpdated_Params
{
public:
	bool                                         bNewInAir;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RockVehicleRuntime.RockVehicleAudioController.GetMotorSimComponent
struct ARockVehicleAudioController_GetMotorSimComponent_Params
{
public:
	class UAudioMotorModelComponent*             ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RockVehicleRuntime.StreamingRadioPlayerComponent_Rock.VehicleExploded
struct UStreamingRadioPlayerComponent_Rock_VehicleExploded_Params
{
public:
	class AController*                           LastDamageInstigator;                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortAthenaVehicle*                    Vehicle;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
