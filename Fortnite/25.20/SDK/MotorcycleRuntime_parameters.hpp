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
// Function MotorcycleRuntime.FortMotorcycleVehicleAnimInstance.CollectConditionsFromDriver
struct UFortMotorcycleVehicleAnimInstance_CollectConditionsFromDriver_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleStartWheelie
struct UFortPlayerAnimInstance_MotorcycleRider_HandleStartWheelie_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleStartStoppie
struct UFortPlayerAnimInstance_MotorcycleRider_HandleStartStoppie_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleStartChargingJump
struct UFortPlayerAnimInstance_MotorcycleRider_HandleStartChargingJump_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleStartAirTrick
struct UFortPlayerAnimInstance_MotorcycleRider_HandleStartAirTrick_Params
{
public:
	enum class EFortMotorcycleAirTrickType       TrickType;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleReleaseWheelie
struct UFortPlayerAnimInstance_MotorcycleRider_HandleReleaseWheelie_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleReleaseStoppie
struct UFortPlayerAnimInstance_MotorcycleRider_HandleReleaseStoppie_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleJump
struct UFortPlayerAnimInstance_MotorcycleRider_HandleJump_Params
{
public:
	float                                        InJumpChargeFactor;                                // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleFinishAirTrick
struct UFortPlayerAnimInstance_MotorcycleRider_HandleFinishAirTrick_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleChargingJump
struct UFortPlayerAnimInstance_MotorcycleRider_HandleChargingJump_Params
{
public:
	float                                        InJumpChargeFactor;                                // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleCancelChargingJump
struct UFortPlayerAnimInstance_MotorcycleRider_HandleCancelChargingJump_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.CollapsedAimYawSmoothed
struct UFortPlayerAnimInstance_MotorcycleRider_CollapsedAimYawSmoothed_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.CalculateNoiseAlpha
struct UFortPlayerAnimInstance_MotorcycleRider_CalculateNoiseAlpha_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.AnimNotify_JumpEntered
struct UFortPlayerAnimInstance_MotorcycleRider_AnimNotify_JumpEntered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.ServerEjectAllPlayers
struct AFortMotorcycleVehicle_ServerEjectAllPlayers_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.OnRep_IsBoostAttacking
struct AFortMotorcycleVehicle_OnRep_IsBoostAttacking_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.OnPlayerWeaponChanged
struct AFortMotorcycleVehicle_OnPlayerWeaponChanged_Params
{
public:
	class AFortWeapon*                           InNewWeapon;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortWeapon*                           InPrevWeapon;                                      // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// DelegateFunction MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleWheelie__DelegateSignature
struct AFortMotorcycleVehicle_MotorcycleWheelie__DelegateSignature_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// DelegateFunction MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleSuperSlidingChanged__DelegateSignature
struct AFortMotorcycleVehicle_MotorcycleSuperSlidingChanged__DelegateSignature_Params
{
public:
	bool                                         bIsSuperSliding;                                   // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// DelegateFunction MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleStoppie__DelegateSignature
struct AFortMotorcycleVehicle_MotorcycleStoppie__DelegateSignature_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// DelegateFunction MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleStartAirTrick__DelegateSignature
struct AFortMotorcycleVehicle_MotorcycleStartAirTrick__DelegateSignature_Params
{
public:
	enum class EFortMotorcycleAirTrickType       TrickType;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// DelegateFunction MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleJump__DelegateSignature
struct AFortMotorcycleVehicle_MotorcycleJump__DelegateSignature_Params
{
public:
	float                                        JumpChargeFactor;                                  // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleInventoryMode__DelegateSignature
struct AFortMotorcycleVehicle_MotorcycleInventoryMode__DelegateSignature_Params
{
public:
	bool                                         IsInInventoryMode;                                 // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// DelegateFunction MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleChargingJump__DelegateSignature
struct AFortMotorcycleVehicle_MotorcycleChargingJump__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// DelegateFunction MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleAirTrick__DelegateSignature
struct AFortMotorcycleVehicle_MotorcycleAirTrick__DelegateSignature_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.IsSuperSliding
struct AFortMotorcycleVehicle_IsSuperSliding_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.IsPowerSliding
struct AFortMotorcycleVehicle_IsPowerSliding_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.IsInInventoryMode
struct AFortMotorcycleVehicle_IsInInventoryMode_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.GetSurfaceTypeVehicleOn
struct AFortMotorcycleVehicle_GetSurfaceTypeVehicleOn_Params
{
public:
	enum class EPhysicalSurface                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.GetLeanAngleDegrees
struct AFortMotorcycleVehicle_GetLeanAngleDegrees_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.GetAverageSpringNormal
struct AFortMotorcycleVehicle_GetAverageSpringNormal_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.ChangeBoostAttackState
struct AFortMotorcycleVehicle_ChangeBoostAttackState_Params
{
public:
	bool                                         bNewIsBoostAttacking;                              // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnStartWheelie
struct AFortMotorcycleVehicle_BP_OnStartWheelie_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnStartStoppie
struct AFortMotorcycleVehicle_BP_OnStartStoppie_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnStartChargingJump
struct AFortMotorcycleVehicle_BP_OnStartChargingJump_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnStartAirTrick
struct AFortMotorcycleVehicle_BP_OnStartAirTrick_Params
{
public:
	enum class EFortMotorcycleAirTrickType       TrickType;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnReleaseWheelie
struct AFortMotorcycleVehicle_BP_OnReleaseWheelie_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnReleaseStoppie
struct AFortMotorcycleVehicle_BP_OnReleaseStoppie_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnLandWheelie
struct AFortMotorcycleVehicle_BP_OnLandWheelie_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnLandStoppie
struct AFortMotorcycleVehicle_BP_OnLandStoppie_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnJump
struct AFortMotorcycleVehicle_BP_OnJump_Params
{
public:
	float                                        JumpChargeFactor;                                  // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnFinishAirTrick
struct AFortMotorcycleVehicle_BP_OnFinishAirTrick_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnFailWheelie
struct AFortMotorcycleVehicle_BP_OnFailWheelie_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnChargingJump
struct AFortMotorcycleVehicle_BP_OnChargingJump_Params
{
public:
	float                                        JumpChargeFactor;                                  // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnCancelChargingJump
struct AFortMotorcycleVehicle_BP_OnCancelChargingJump_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
