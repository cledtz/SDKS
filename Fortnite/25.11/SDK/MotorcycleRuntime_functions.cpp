#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function MotorcycleRuntime.FortMotorcycleVehicleAnimInstance.CollectConditionsFromDriver
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortMotorcycleVehicleAnimInstance::CollectConditionsFromDriver()
{
	static auto Func = Class->GetFunction("FortMotorcycleVehicleAnimInstance", "CollectConditionsFromDriver");

	Params::UFortMotorcycleVehicleAnimInstance_CollectConditionsFromDriver_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleStartWheelie
// (Final, Native, Public)
// Parameters:

void UFortPlayerAnimInstance_MotorcycleRider::HandleStartWheelie()
{
	static auto Func = Class->GetFunction("FortPlayerAnimInstance_MotorcycleRider", "HandleStartWheelie");

	Params::UFortPlayerAnimInstance_MotorcycleRider_HandleStartWheelie_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleStartStoppie
// (Final, Native, Public)
// Parameters:

void UFortPlayerAnimInstance_MotorcycleRider::HandleStartStoppie()
{
	static auto Func = Class->GetFunction("FortPlayerAnimInstance_MotorcycleRider", "HandleStartStoppie");

	Params::UFortPlayerAnimInstance_MotorcycleRider_HandleStartStoppie_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleStartChargingJump
// (Final, Native, Public)
// Parameters:

void UFortPlayerAnimInstance_MotorcycleRider::HandleStartChargingJump()
{
	static auto Func = Class->GetFunction("FortPlayerAnimInstance_MotorcycleRider", "HandleStartChargingJump");

	Params::UFortPlayerAnimInstance_MotorcycleRider_HandleStartChargingJump_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleStartAirTrick
// (Final, Native, Public)
// Parameters:
// enum class EFortMotorcycleAirTrickTypeTrickType                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAnimInstance_MotorcycleRider::HandleStartAirTrick(enum class EFortMotorcycleAirTrickType TrickType)
{
	static auto Func = Class->GetFunction("FortPlayerAnimInstance_MotorcycleRider", "HandleStartAirTrick");

	Params::UFortPlayerAnimInstance_MotorcycleRider_HandleStartAirTrick_Params Parms;

	Parms.TrickType = TrickType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleReleaseWheelie
// (Final, Native, Public)
// Parameters:

void UFortPlayerAnimInstance_MotorcycleRider::HandleReleaseWheelie()
{
	static auto Func = Class->GetFunction("FortPlayerAnimInstance_MotorcycleRider", "HandleReleaseWheelie");

	Params::UFortPlayerAnimInstance_MotorcycleRider_HandleReleaseWheelie_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleReleaseStoppie
// (Final, Native, Public)
// Parameters:

void UFortPlayerAnimInstance_MotorcycleRider::HandleReleaseStoppie()
{
	static auto Func = Class->GetFunction("FortPlayerAnimInstance_MotorcycleRider", "HandleReleaseStoppie");

	Params::UFortPlayerAnimInstance_MotorcycleRider_HandleReleaseStoppie_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleJump
// (Final, Native, Public)
// Parameters:
// float                              InJumpChargeFactor                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAnimInstance_MotorcycleRider::HandleJump(float InJumpChargeFactor)
{
	static auto Func = Class->GetFunction("FortPlayerAnimInstance_MotorcycleRider", "HandleJump");

	Params::UFortPlayerAnimInstance_MotorcycleRider_HandleJump_Params Parms;

	Parms.InJumpChargeFactor = InJumpChargeFactor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleFinishAirTrick
// (Final, Native, Public)
// Parameters:

void UFortPlayerAnimInstance_MotorcycleRider::HandleFinishAirTrick()
{
	static auto Func = Class->GetFunction("FortPlayerAnimInstance_MotorcycleRider", "HandleFinishAirTrick");

	Params::UFortPlayerAnimInstance_MotorcycleRider_HandleFinishAirTrick_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleChargingJump
// (Final, Native, Public)
// Parameters:
// float                              InJumpChargeFactor                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAnimInstance_MotorcycleRider::HandleChargingJump(float InJumpChargeFactor)
{
	static auto Func = Class->GetFunction("FortPlayerAnimInstance_MotorcycleRider", "HandleChargingJump");

	Params::UFortPlayerAnimInstance_MotorcycleRider_HandleChargingJump_Params Parms;

	Parms.InJumpChargeFactor = InJumpChargeFactor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleCancelChargingJump
// (Final, Native, Public)
// Parameters:

void UFortPlayerAnimInstance_MotorcycleRider::HandleCancelChargingJump()
{
	static auto Func = Class->GetFunction("FortPlayerAnimInstance_MotorcycleRider", "HandleCancelChargingJump");

	Params::UFortPlayerAnimInstance_MotorcycleRider_HandleCancelChargingJump_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.CollapsedAimYawSmoothed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAnimInstance_MotorcycleRider::CollapsedAimYawSmoothed(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("FortPlayerAnimInstance_MotorcycleRider", "CollapsedAimYawSmoothed");

	Params::UFortPlayerAnimInstance_MotorcycleRider_CollapsedAimYawSmoothed_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.CalculateNoiseAlpha
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortPlayerAnimInstance_MotorcycleRider::CalculateNoiseAlpha()
{
	static auto Func = Class->GetFunction("FortPlayerAnimInstance_MotorcycleRider", "CalculateNoiseAlpha");

	Params::UFortPlayerAnimInstance_MotorcycleRider_CalculateNoiseAlpha_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.AnimNotify_JumpEntered
// (Final, Native, Public)
// Parameters:

void UFortPlayerAnimInstance_MotorcycleRider::AnimNotify_JumpEntered()
{
	static auto Func = Class->GetFunction("FortPlayerAnimInstance_MotorcycleRider", "AnimNotify_JumpEntered");

	Params::UFortPlayerAnimInstance_MotorcycleRider_AnimNotify_JumpEntered_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MotorcycleRuntime.FortMotorcycleVehicle.ServerEjectAllPlayers
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:

void AFortMotorcycleVehicle::ServerEjectAllPlayers()
{
	static auto Func = Class->GetFunction("FortMotorcycleVehicle", "ServerEjectAllPlayers");

	Params::AFortMotorcycleVehicle_ServerEjectAllPlayers_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MotorcycleRuntime.FortMotorcycleVehicle.OnRep_IsBoostAttacking
// (Final, Native, Protected)
// Parameters:

void AFortMotorcycleVehicle::OnRep_IsBoostAttacking()
{
	static auto Func = Class->GetFunction("FortMotorcycleVehicle", "OnRep_IsBoostAttacking");

	Params::AFortMotorcycleVehicle_OnRep_IsBoostAttacking_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MotorcycleRuntime.FortMotorcycleVehicle.OnPlayerWeaponChanged
// (Final, Native, Public)
// Parameters:
// class AFortWeapon*                 InNewWeapon                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortWeapon*                 InPrevWeapon                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortMotorcycleVehicle::OnPlayerWeaponChanged(class AFortWeapon* InNewWeapon, class AFortWeapon* InPrevWeapon)
{
	static auto Func = Class->GetFunction("FortMotorcycleVehicle", "OnPlayerWeaponChanged");

	Params::AFortMotorcycleVehicle_OnPlayerWeaponChanged_Params Parms;

	Parms.InNewWeapon = InNewWeapon;
	Parms.InPrevWeapon = InPrevWeapon;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleWheelie__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void AFortMotorcycleVehicle::MotorcycleWheelie__DelegateSignature()
{
	static auto Func = Class->GetFunction("FortMotorcycleVehicle", "MotorcycleWheelie__DelegateSignature");

	Params::AFortMotorcycleVehicle_MotorcycleWheelie__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleSuperSlidingChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bIsSuperSliding                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortMotorcycleVehicle::MotorcycleSuperSlidingChanged__DelegateSignature(bool bIsSuperSliding)
{
	static auto Func = Class->GetFunction("FortMotorcycleVehicle", "MotorcycleSuperSlidingChanged__DelegateSignature");

	Params::AFortMotorcycleVehicle_MotorcycleSuperSlidingChanged__DelegateSignature_Params Parms;

	Parms.bIsSuperSliding = bIsSuperSliding;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleStoppie__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void AFortMotorcycleVehicle::MotorcycleStoppie__DelegateSignature()
{
	static auto Func = Class->GetFunction("FortMotorcycleVehicle", "MotorcycleStoppie__DelegateSignature");

	Params::AFortMotorcycleVehicle_MotorcycleStoppie__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleStartAirTrick__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// enum class EFortMotorcycleAirTrickTypeTrickType                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortMotorcycleVehicle::MotorcycleStartAirTrick__DelegateSignature(enum class EFortMotorcycleAirTrickType TrickType)
{
	static auto Func = Class->GetFunction("FortMotorcycleVehicle", "MotorcycleStartAirTrick__DelegateSignature");

	Params::AFortMotorcycleVehicle_MotorcycleStartAirTrick__DelegateSignature_Params Parms;

	Parms.TrickType = TrickType;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleJump__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float                              JumpChargeFactor                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortMotorcycleVehicle::MotorcycleJump__DelegateSignature(float JumpChargeFactor)
{
	static auto Func = Class->GetFunction("FortMotorcycleVehicle", "MotorcycleJump__DelegateSignature");

	Params::AFortMotorcycleVehicle_MotorcycleJump__DelegateSignature_Params Parms;

	Parms.JumpChargeFactor = JumpChargeFactor;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleInventoryMode__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               IsInInventoryMode                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortMotorcycleVehicle::MotorcycleInventoryMode__DelegateSignature(bool IsInInventoryMode)
{
	static auto Func = Class->GetFunction("FortMotorcycleVehicle", "MotorcycleInventoryMode__DelegateSignature");

	Params::AFortMotorcycleVehicle_MotorcycleInventoryMode__DelegateSignature_Params Parms;

	Parms.IsInInventoryMode = IsInInventoryMode;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleChargingJump__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void AFortMotorcycleVehicle::MotorcycleChargingJump__DelegateSignature()
{
	static auto Func = Class->GetFunction("FortMotorcycleVehicle", "MotorcycleChargingJump__DelegateSignature");

	Params::AFortMotorcycleVehicle_MotorcycleChargingJump__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleAirTrick__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void AFortMotorcycleVehicle::MotorcycleAirTrick__DelegateSignature()
{
	static auto Func = Class->GetFunction("FortMotorcycleVehicle", "MotorcycleAirTrick__DelegateSignature");

	Params::AFortMotorcycleVehicle_MotorcycleAirTrick__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MotorcycleRuntime.FortMotorcycleVehicle.IsSuperSliding
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortMotorcycleVehicle::IsSuperSliding()
{
	static auto Func = Class->GetFunction("FortMotorcycleVehicle", "IsSuperSliding");

	Params::AFortMotorcycleVehicle_IsSuperSliding_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MotorcycleRuntime.FortMotorcycleVehicle.IsPowerSliding
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortMotorcycleVehicle::IsPowerSliding()
{
	static auto Func = Class->GetFunction("FortMotorcycleVehicle", "IsPowerSliding");

	Params::AFortMotorcycleVehicle_IsPowerSliding_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MotorcycleRuntime.FortMotorcycleVehicle.IsInInventoryMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortMotorcycleVehicle::IsInInventoryMode()
{
	static auto Func = Class->GetFunction("FortMotorcycleVehicle", "IsInInventoryMode");

	Params::AFortMotorcycleVehicle_IsInInventoryMode_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MotorcycleRuntime.FortMotorcycleVehicle.GetSurfaceTypeVehicleOn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EPhysicalSurface        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EPhysicalSurface AFortMotorcycleVehicle::GetSurfaceTypeVehicleOn()
{
	static auto Func = Class->GetFunction("FortMotorcycleVehicle", "GetSurfaceTypeVehicleOn");

	Params::AFortMotorcycleVehicle_GetSurfaceTypeVehicleOn_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MotorcycleRuntime.FortMotorcycleVehicle.GetLeanAngleDegrees
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortMotorcycleVehicle::GetLeanAngleDegrees()
{
	static auto Func = Class->GetFunction("FortMotorcycleVehicle", "GetLeanAngleDegrees");

	Params::AFortMotorcycleVehicle_GetLeanAngleDegrees_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MotorcycleRuntime.FortMotorcycleVehicle.GetAverageSpringNormal
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector AFortMotorcycleVehicle::GetAverageSpringNormal()
{
	static auto Func = Class->GetFunction("FortMotorcycleVehicle", "GetAverageSpringNormal");

	Params::AFortMotorcycleVehicle_GetAverageSpringNormal_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MotorcycleRuntime.FortMotorcycleVehicle.ChangeBoostAttackState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewIsBoostAttacking                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortMotorcycleVehicle::ChangeBoostAttackState(bool bNewIsBoostAttacking)
{
	static auto Func = Class->GetFunction("FortMotorcycleVehicle", "ChangeBoostAttackState");

	Params::AFortMotorcycleVehicle_ChangeBoostAttackState_Params Parms;

	Parms.bNewIsBoostAttacking = bNewIsBoostAttacking;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnStartWheelie
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortMotorcycleVehicle::BP_OnStartWheelie()
{
	static auto Func = Class->GetFunction("FortMotorcycleVehicle", "BP_OnStartWheelie");

	Params::AFortMotorcycleVehicle_BP_OnStartWheelie_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnStartStoppie
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortMotorcycleVehicle::BP_OnStartStoppie()
{
	static auto Func = Class->GetFunction("FortMotorcycleVehicle", "BP_OnStartStoppie");

	Params::AFortMotorcycleVehicle_BP_OnStartStoppie_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnStartChargingJump
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortMotorcycleVehicle::BP_OnStartChargingJump()
{
	static auto Func = Class->GetFunction("FortMotorcycleVehicle", "BP_OnStartChargingJump");

	Params::AFortMotorcycleVehicle_BP_OnStartChargingJump_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnStartAirTrick
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortMotorcycleAirTrickTypeTrickType                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortMotorcycleVehicle::BP_OnStartAirTrick(enum class EFortMotorcycleAirTrickType TrickType)
{
	static auto Func = Class->GetFunction("FortMotorcycleVehicle", "BP_OnStartAirTrick");

	Params::AFortMotorcycleVehicle_BP_OnStartAirTrick_Params Parms;

	Parms.TrickType = TrickType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnReleaseWheelie
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortMotorcycleVehicle::BP_OnReleaseWheelie()
{
	static auto Func = Class->GetFunction("FortMotorcycleVehicle", "BP_OnReleaseWheelie");

	Params::AFortMotorcycleVehicle_BP_OnReleaseWheelie_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnReleaseStoppie
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortMotorcycleVehicle::BP_OnReleaseStoppie()
{
	static auto Func = Class->GetFunction("FortMotorcycleVehicle", "BP_OnReleaseStoppie");

	Params::AFortMotorcycleVehicle_BP_OnReleaseStoppie_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnLandWheelie
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortMotorcycleVehicle::BP_OnLandWheelie()
{
	static auto Func = Class->GetFunction("FortMotorcycleVehicle", "BP_OnLandWheelie");

	Params::AFortMotorcycleVehicle_BP_OnLandWheelie_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnLandStoppie
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortMotorcycleVehicle::BP_OnLandStoppie()
{
	static auto Func = Class->GetFunction("FortMotorcycleVehicle", "BP_OnLandStoppie");

	Params::AFortMotorcycleVehicle_BP_OnLandStoppie_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnJump
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              JumpChargeFactor                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortMotorcycleVehicle::BP_OnJump(float JumpChargeFactor)
{
	static auto Func = Class->GetFunction("FortMotorcycleVehicle", "BP_OnJump");

	Params::AFortMotorcycleVehicle_BP_OnJump_Params Parms;

	Parms.JumpChargeFactor = JumpChargeFactor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnFinishAirTrick
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortMotorcycleVehicle::BP_OnFinishAirTrick()
{
	static auto Func = Class->GetFunction("FortMotorcycleVehicle", "BP_OnFinishAirTrick");

	Params::AFortMotorcycleVehicle_BP_OnFinishAirTrick_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnFailWheelie
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortMotorcycleVehicle::BP_OnFailWheelie()
{
	static auto Func = Class->GetFunction("FortMotorcycleVehicle", "BP_OnFailWheelie");

	Params::AFortMotorcycleVehicle_BP_OnFailWheelie_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnChargingJump
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              JumpChargeFactor                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortMotorcycleVehicle::BP_OnChargingJump(float JumpChargeFactor)
{
	static auto Func = Class->GetFunction("FortMotorcycleVehicle", "BP_OnChargingJump");

	Params::AFortMotorcycleVehicle_BP_OnChargingJump_Params Parms;

	Parms.JumpChargeFactor = JumpChargeFactor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MotorcycleRuntime.FortMotorcycleVehicle.BP_OnCancelChargingJump
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortMotorcycleVehicle::BP_OnCancelChargingJump()
{
	static auto Func = Class->GetFunction("FortMotorcycleVehicle", "BP_OnCancelChargingJump");

	Params::AFortMotorcycleVehicle_BP_OnCancelChargingJump_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
