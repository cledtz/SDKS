#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary
// (None)

class UClass* UAnimCharacterMovementLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimCharacterMovementLibrary");

	return Clss;
}


// AnimCharacterMovementLibrary AnimationLocomotionLibraryRuntime.Default__AnimCharacterMovementLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimCharacterMovementLibrary* UAnimCharacterMovementLibrary::GetDefaultObj()
{
	static class UAnimCharacterMovementLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimCharacterMovementLibrary*>(UAnimCharacterMovementLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary.PredictGroundMovementStopLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Velocity                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseSeparateBrakingFriction                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              BrakingFriction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              GroundFriction                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              BrakingFrictionFactor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              BrakingDecelerationWalking                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UAnimCharacterMovementLibrary::PredictGroundMovementStopLocation(struct FVector& Velocity, bool bUseSeparateBrakingFriction, float BrakingFriction, float GroundFriction, float BrakingFrictionFactor, float BrakingDecelerationWalking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimCharacterMovementLibrary", "PredictGroundMovementStopLocation");

	Params::UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Params Parms{};

	Parms.Velocity = Velocity;
	Parms.bUseSeparateBrakingFriction = bUseSeparateBrakingFriction;
	Parms.BrakingFriction = BrakingFriction;
	Parms.GroundFriction = GroundFriction;
	Parms.BrakingFrictionFactor = BrakingFrictionFactor;
	Parms.BrakingDecelerationWalking = BrakingDecelerationWalking;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary.PredictGroundMovementPivotLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Acceleration                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Velocity                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              GroundFriction                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UAnimCharacterMovementLibrary::PredictGroundMovementPivotLocation(struct FVector& Acceleration, struct FVector& Velocity, float GroundFriction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimCharacterMovementLibrary", "PredictGroundMovementPivotLocation");

	Params::UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Params Parms{};

	Parms.Acceleration = Acceleration;
	Parms.Velocity = Velocity;
	Parms.GroundFriction = GroundFriction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary
// (None)

class UClass* UAnimDistanceMatchingLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimDistanceMatchingLibrary");

	return Clss;
}


// AnimDistanceMatchingLibrary AnimationLocomotionLibraryRuntime.Default__AnimDistanceMatchingLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimDistanceMatchingLibrary* UAnimDistanceMatchingLibrary::GetDefaultObj()
{
	static class UAnimDistanceMatchingLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimDistanceMatchingLibrary*>(UAnimDistanceMatchingLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.SetPlayrateToMatchSpeed
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              SpeedToMatch                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   PlayRateClamp                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSequencePlayerReference    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSequencePlayerReference UAnimDistanceMatchingLibrary::SetPlayrateToMatchSpeed(struct FSequencePlayerReference& SequencePlayer, float SpeedToMatch, const struct FVector2D& PlayRateClamp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimDistanceMatchingLibrary", "SetPlayrateToMatchSpeed");

	Params::UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.SpeedToMatch = SpeedToMatch;
	Parms.PlayRateClamp = PlayRateClamp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.DistanceMatchToTarget
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              DistanceToTarget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        DistanceCurveName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSequenceEvaluatorReference ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSequenceEvaluatorReference UAnimDistanceMatchingLibrary::DistanceMatchToTarget(struct FSequenceEvaluatorReference& SequenceEvaluator, float DistanceToTarget, class FName DistanceCurveName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimDistanceMatchingLibrary", "DistanceMatchToTarget");

	Params::UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Params Parms{};

	Parms.SequenceEvaluator = SequenceEvaluator;
	Parms.DistanceToTarget = DistanceToTarget;
	Parms.DistanceCurveName = DistanceCurveName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.AdvanceTimeByDistanceMatching
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              DistanceTraveled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        DistanceCurveName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   PlayRateClamp                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSequenceEvaluatorReference ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSequenceEvaluatorReference UAnimDistanceMatchingLibrary::AdvanceTimeByDistanceMatching(struct FAnimUpdateContext& UpdateContext, struct FSequenceEvaluatorReference& SequenceEvaluator, float DistanceTraveled, class FName DistanceCurveName, const struct FVector2D& PlayRateClamp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimDistanceMatchingLibrary", "AdvanceTimeByDistanceMatching");

	Params::UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Params Parms{};

	Parms.UpdateContext = UpdateContext;
	Parms.SequenceEvaluator = SequenceEvaluator;
	Parms.DistanceTraveled = DistanceTraveled;
	Parms.DistanceCurveName = DistanceCurveName;
	Parms.PlayRateClamp = PlayRateClamp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


