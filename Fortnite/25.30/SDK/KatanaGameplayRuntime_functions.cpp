#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function KatanaGameplayRuntime.KatanaTargetingComponent.PerformPrimaryAttackTargeting
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// enum class EFortKatanaPrimaryAttackVariationAttackVariation                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UKatanaTargetingComponent::PerformPrimaryAttackTargeting(enum class EFortKatanaPrimaryAttackVariation AttackVariation)
{
	static auto Func = Class->GetFunction("KatanaTargetingComponent", "PerformPrimaryAttackTargeting");

	Params::UKatanaTargetingComponent_PerformPrimaryAttackTargeting_Params Parms;

	Parms.AttackVariation = AttackVariation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function KatanaGameplayRuntime.KatanaTargetingComponent.PerformDashTargeting
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FFortKatanaDashTargetingInfoOutDashTargetingInfo                                             (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UKatanaTargetingComponent::PerformDashTargeting(struct FFortKatanaDashTargetingInfo* OutDashTargetingInfo)
{
	static auto Func = Class->GetFunction("KatanaTargetingComponent", "PerformDashTargeting");

	Params::UKatanaTargetingComponent_PerformDashTargeting_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutDashTargetingInfo != nullptr)
		*OutDashTargetingInfo = Parms.OutDashTargetingInfo;

	return Parms.ReturnValue;

}


// Function KatanaGameplayRuntime.AbilityTask_ApplyRootMotion_KatanaDashForce.ApplyRootMotion_KatanaDashForce
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            InOwningAbility                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InTaskInstanceName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InTargetLocation                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InDuration                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InHeightAboveGround                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInSetNewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           InMovementMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInRestrictSpeedToExpected                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveVector*                InPathOffsetCurve                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERootMotionFinishVelocityModeInVelocityOnFinishMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InSetVelocityOnFinish                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InClampVelocityOnFinish                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_ApplyRootMotion_KatanaDashForce*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_ApplyRootMotion_KatanaDashForce* UAbilityTask_ApplyRootMotion_KatanaDashForce::ApplyRootMotion_KatanaDashForce(class UGameplayAbility* InOwningAbility, class FName InTaskInstanceName, const struct FVector& InTargetLocation, float InDuration, float InHeightAboveGround, bool bInSetNewMovementMode, enum class EMovementMode InMovementMode, bool bInRestrictSpeedToExpected, class UCurveVector* InPathOffsetCurve, enum class ERootMotionFinishVelocityMode InVelocityOnFinishMode, const struct FVector& InSetVelocityOnFinish, float InClampVelocityOnFinish)
{
	static auto Func = Class->GetFunction("AbilityTask_ApplyRootMotion_KatanaDashForce", "ApplyRootMotion_KatanaDashForce");

	Params::UAbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce_Params Parms;

	Parms.InOwningAbility = InOwningAbility;
	Parms.InTaskInstanceName = InTaskInstanceName;
	Parms.InTargetLocation = InTargetLocation;
	Parms.InDuration = InDuration;
	Parms.InHeightAboveGround = InHeightAboveGround;
	Parms.bInSetNewMovementMode = bInSetNewMovementMode;
	Parms.InMovementMode = InMovementMode;
	Parms.bInRestrictSpeedToExpected = bInRestrictSpeedToExpected;
	Parms.InPathOffsetCurve = InPathOffsetCurve;
	Parms.InVelocityOnFinishMode = InVelocityOnFinishMode;
	Parms.InSetVelocityOnFinish = InSetVelocityOnFinish;
	Parms.InClampVelocityOnFinish = InClampVelocityOnFinish;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
