#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class RocketRamGameplayRuntime.AbilityTask_ApplyRootMotion_RocketRam
// (None)

class UClass* UAbilityTask_ApplyRootMotion_RocketRam::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_ApplyRootMotion_RocketRam");

	return Clss;
}


// AbilityTask_ApplyRootMotion_RocketRam RocketRamGameplayRuntime.Default__AbilityTask_ApplyRootMotion_RocketRam
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_ApplyRootMotion_RocketRam* UAbilityTask_ApplyRootMotion_RocketRam::GetDefaultObj()
{
	static class UAbilityTask_ApplyRootMotion_RocketRam* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_ApplyRootMotion_RocketRam*>(UAbilityTask_ApplyRootMotion_RocketRam::StaticClass()->DefaultObject);

	return Default;
}


// Function RocketRamGameplayRuntime.AbilityTask_ApplyRootMotion_RocketRam.ApplyRootMotion_RocketRam
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            InOwningAbility                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InTaskInstanceName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InDuration                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InInitialDirection                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InEndingDirection                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InMinSpeed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InMaxSpeed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 InSpeedCurve                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InFloorTraceHeight                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveVector*                InPathOffsetCurve                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERootMotionFinishVelocityModeInVelocityOnFinishMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InSetVelocityOnFinish                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InClampVelocityOnFinish                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_ApplyRootMotion_RocketRam*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_ApplyRootMotion_RocketRam* UAbilityTask_ApplyRootMotion_RocketRam::ApplyRootMotion_RocketRam(class UGameplayAbility* InOwningAbility, class FName InTaskInstanceName, float InDuration, const struct FVector& InInitialDirection, const struct FVector& InEndingDirection, float InMinSpeed, float InMaxSpeed, class UCurveFloat* InSpeedCurve, float InFloorTraceHeight, class UCurveVector* InPathOffsetCurve, enum class ERootMotionFinishVelocityMode InVelocityOnFinishMode, const struct FVector& InSetVelocityOnFinish, float InClampVelocityOnFinish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_ApplyRootMotion_RocketRam", "ApplyRootMotion_RocketRam");

	Params::UAbilityTask_ApplyRootMotion_RocketRam_ApplyRootMotion_RocketRam_Params Parms{};

	Parms.InOwningAbility = InOwningAbility;
	Parms.InTaskInstanceName = InTaskInstanceName;
	Parms.InDuration = InDuration;
	Parms.InInitialDirection = InInitialDirection;
	Parms.InEndingDirection = InEndingDirection;
	Parms.InMinSpeed = InMinSpeed;
	Parms.InMaxSpeed = InMaxSpeed;
	Parms.InSpeedCurve = InSpeedCurve;
	Parms.InFloorTraceHeight = InFloorTraceHeight;
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


