#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class KatanaGameplayRuntime.FortKatanaLayerAnimInstance
// (None)

class UClass* UFortKatanaLayerAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortKatanaLayerAnimInstance");

	return Clss;
}


// FortKatanaLayerAnimInstance KatanaGameplayRuntime.Default__FortKatanaLayerAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortKatanaLayerAnimInstance* UFortKatanaLayerAnimInstance::GetDefaultObj()
{
	static class UFortKatanaLayerAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortKatanaLayerAnimInstance*>(UFortKatanaLayerAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class KatanaGameplayRuntime.FortKatanaWeaponAnimInstance
// (None)

class UClass* UFortKatanaWeaponAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortKatanaWeaponAnimInstance");

	return Clss;
}


// FortKatanaWeaponAnimInstance KatanaGameplayRuntime.Default__FortKatanaWeaponAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortKatanaWeaponAnimInstance* UFortKatanaWeaponAnimInstance::GetDefaultObj()
{
	static class UFortKatanaWeaponAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortKatanaWeaponAnimInstance*>(UFortKatanaWeaponAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class KatanaGameplayRuntime.KatanaTargetingComponent
// (None)

class UClass* UKatanaTargetingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KatanaTargetingComponent");

	return Clss;
}


// KatanaTargetingComponent KatanaGameplayRuntime.Default__KatanaTargetingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UKatanaTargetingComponent* UKatanaTargetingComponent::GetDefaultObj()
{
	static class UKatanaTargetingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UKatanaTargetingComponent*>(UKatanaTargetingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function KatanaGameplayRuntime.KatanaTargetingComponent.PerformPrimaryAttackTargeting
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// enum class EFortKatanaPrimaryAttackVariationAttackVariation                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UKatanaTargetingComponent::PerformPrimaryAttackTargeting(enum class EFortKatanaPrimaryAttackVariation AttackVariation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KatanaTargetingComponent", "PerformPrimaryAttackTargeting");

	Params::UKatanaTargetingComponent_PerformPrimaryAttackTargeting_Params Parms{};

	Parms.AttackVariation = AttackVariation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function KatanaGameplayRuntime.KatanaTargetingComponent.PerformDashTargeting
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FFortKatanaDashTargetingInfoOutDashTargetingInfo                                             (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UKatanaTargetingComponent::PerformDashTargeting(struct FFortKatanaDashTargetingInfo* OutDashTargetingInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KatanaTargetingComponent", "PerformDashTargeting");

	Params::UKatanaTargetingComponent_PerformDashTargeting_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutDashTargetingInfo != nullptr)
		*OutDashTargetingInfo = Parms.OutDashTargetingInfo;

	return Parms.ReturnValue;

}


// Class KatanaGameplayRuntime.AbilityTask_ApplyRootMotion_KatanaDashForce
// (None)

class UClass* UAbilityTask_ApplyRootMotion_KatanaDashForce::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_ApplyRootMotion_KatanaDashForce");

	return Clss;
}


// AbilityTask_ApplyRootMotion_KatanaDashForce KatanaGameplayRuntime.Default__AbilityTask_ApplyRootMotion_KatanaDashForce
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_ApplyRootMotion_KatanaDashForce* UAbilityTask_ApplyRootMotion_KatanaDashForce::GetDefaultObj()
{
	static class UAbilityTask_ApplyRootMotion_KatanaDashForce* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_ApplyRootMotion_KatanaDashForce*>(UAbilityTask_ApplyRootMotion_KatanaDashForce::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_ApplyRootMotion_KatanaDashForce", "ApplyRootMotion_KatanaDashForce");

	Params::UAbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce_Params Parms{};

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

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


