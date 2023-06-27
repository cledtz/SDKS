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


// Function MotionTrajectory.CharacterTrajectoryComponent.UpdateTrajectory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCharacterTrajectoryComponent::UpdateTrajectory(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("CharacterTrajectoryComponent", "UpdateTrajectory");

	Params::UCharacterTrajectoryComponent_UpdateTrajectory_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MotionTrajectory.CharacterTrajectoryComponent.OnMovementUpdated
// (Final, Native, Protected, HasDefaults)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OldLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OldVelocity                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCharacterTrajectoryComponent::OnMovementUpdated(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity)
{
	static auto Func = Class->GetFunction("CharacterTrajectoryComponent", "OnMovementUpdated");

	Params::UCharacterTrajectoryComponent_OnMovementUpdated_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.OldLocation = OldLocation;
	Parms.OldVelocity = OldVelocity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MotionTrajectory.CharacterMovementTrajectoryLibrary.StepCharacterMovementGroundPrediction
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              InDeltaTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InVelocity                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InAcceleration                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCharacterMovementComponent* InCharacterMovementComponent                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutVelocity                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCharacterMovementTrajectoryLibrary::StepCharacterMovementGroundPrediction(float InDeltaTime, struct FVector& InVelocity, struct FVector& InAcceleration, class UCharacterMovementComponent* InCharacterMovementComponent, struct FVector* OutVelocity)
{
	static auto Func = Class->GetFunction("CharacterMovementTrajectoryLibrary", "StepCharacterMovementGroundPrediction");

	Params::UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Params Parms;

	Parms.InDeltaTime = InDeltaTime;
	Parms.InVelocity = InVelocity;
	Parms.InAcceleration = InAcceleration;
	Parms.InCharacterMovementComponent = InCharacterMovementComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutVelocity != nullptr)
		*OutVelocity = Parms.OutVelocity;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
