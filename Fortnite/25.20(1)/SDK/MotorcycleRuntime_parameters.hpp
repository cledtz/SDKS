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
struct UFortMotorcycleVehicle_ServerEjectAllPlayers_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.OnRep_IsBoostAttacking
struct UFortMotorcycleVehicle_OnRep_IsBoostAttacking_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.OnPlayerWeaponChanged
struct UFortMotorcycleVehicle_OnPlayerWeaponChanged_Params
{
public:
	class UFortWeapon*                           InNewWeapon;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortWeapon*                           InPrevWeapon;                                      // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// DelegateFunction MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleWheelie__DelegateSignature
struct UFortMotorcycleVehicle_MotorcycleWheelie__DelegateSignature_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// DelegateFunction MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleSuperSlidingChanged__DelegateSignature
struct UFortMotorcycleVehicle_MotorcycleSuperSlidingChanged__DelegateSignature_Params
{
public:
	bool                                         bIsSuperSliding;                                   // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// DelegateFunction MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleStoppie__DelegateSignature
struct UFortMotorcycleVehicle_MotorcycleStoppie__DelegateSignature_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// DelegateFunction MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleStartAirTrick__DelegateSignature
struct UFortMotorcycleVehicle_MotorcycleStartAirTrick__DelegateSignature_Params
{
public:
	enum class EFortMotorcycleAirTrickType       TrickType;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// DelegateFunction MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleJump__DelegateSignature
struct UFortMotorcycleVehicle_MotorcycleJump__DelegateSignature_Params
{
public:
	float                                        JumpChargeFactor;                                  // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleInventoryMode__DelegateSignature
struct UFortMotorcycleVehicle_MotorcycleInventoryMode__DelegateSignature_Params
{
public:
	bool                                         IsInInventoryMode;                                 // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// DelegateFunction MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleChargingJump__DelegateSignature
struct UFortMotorcycleVehicle_MotorcycleChargingJump__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// DelegateFunction MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleAirTrick__DelegateSignature
struct UFortMotorcycleVehicle_MotorcycleAirTrick__DelegateSignature_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.IsSuperSliding
struct UFortMotorcycleVehicle_IsSuperSliding_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.IsPowerSliding
struct UFortMotorcycleVehicle_IsPowerSliding_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.IsInInventoryMode
struct UFortMotorcycleVehicle_IsInInventoryMode_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.GetSurfaceTypeVehicleOn
struct UFortMotorcycleVehicle_GetSurfaceTypeVehicleOn_Params
{
public:
	enum class EPhysicalSurface                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.GetLeanAngleDegrees
struct UFortMotorcycleVehicle_GetLeanAngleDegrees_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.GetAverageSpringNormal
struct UFortMotorcycleVehicle_GetAverageSpringNormal_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.ChangeBoostAttackState
struct UFortMotorcycleVehicle_ChangeBoostAttackState_Params
{
public:
	bool                                         bNewIsBoostAttacking;                              // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnStartWheelie
struct UFortMotorcycleVehicle_BP_OnStartWheelie_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnStartStoppie
struct UFortMotorcycleVehicle_BP_OnStartStoppie_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnStartChargingJump
struct UFortMotorcycleVehicle_BP_OnStartChargingJump_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnStartAirTrick
struct UFortMotorcycleVehicle_BP_OnStartAirTrick_Params
{
public:
	enum class EFortMotorcycleAirTrickType       TrickType;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnReleaseWheelie
struct UFortMotorcycleVehicle_BP_OnReleaseWheelie_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnReleaseStoppie
struct UFortMotorcycleVehicle_BP_OnReleaseStoppie_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnLandWheelie
struct UFortMotorcycleVehicle_BP_OnLandWheelie_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnLandStoppie
struct UFortMotorcycleVehicle_BP_OnLandStoppie_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnJump
struct UFortMotorcycleVehicle_BP_OnJump_Params
{
public:
	float                                        JumpChargeFactor;                                  // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnFinishAirTrick
struct UFortMotorcycleVehicle_BP_OnFinishAirTrick_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnFailWheelie
struct UFortMotorcycleVehicle_BP_OnFailWheelie_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnChargingJump
struct UFortMotorcycleVehicle_BP_OnChargingJump_Params
{
public:
	float                                        JumpChargeFactor;                                  // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnCancelChargingJump
struct UFortMotorcycleVehicle_BP_OnCancelChargingJump_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
