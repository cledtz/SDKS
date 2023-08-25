#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MotionTrajectory.CharacterTrajectoryComponent
// (None)

class UClass* UCharacterTrajectoryComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharacterTrajectoryComponent");

	return Clss;
}


// CharacterTrajectoryComponent MotionTrajectory.Default__CharacterTrajectoryComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCharacterTrajectoryComponent* UCharacterTrajectoryComponent::GetDefaultObj()
{
	static class UCharacterTrajectoryComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacterTrajectoryComponent*>(UCharacterTrajectoryComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MotionTrajectory.CharacterTrajectoryComponent.UpdateTrajectory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCharacterTrajectoryComponent::UpdateTrajectory(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterTrajectoryComponent", "UpdateTrajectory");

	Params::UCharacterTrajectoryComponent_UpdateTrajectory_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MotionTrajectory.CharacterTrajectoryComponent.OnMovementUpdated
// (Final, Native, Protected, HasDefaults)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OldLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OldVelocity                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCharacterTrajectoryComponent::OnMovementUpdated(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterTrajectoryComponent", "OnMovementUpdated");

	Params::UCharacterTrajectoryComponent_OnMovementUpdated_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.OldLocation = OldLocation;
	Parms.OldVelocity = OldVelocity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MotionTrajectory.CharacterTrajectoryComponent.GetFacingFromMeshComponent
// (Native, Event, Public, HasDefaults, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComponent                                                    (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UCharacterTrajectoryComponent::GetFacingFromMeshComponent(class USkeletalMeshComponent* MeshComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterTrajectoryComponent", "GetFacingFromMeshComponent");

	Params::UCharacterTrajectoryComponent_GetFacingFromMeshComponent_Params Parms{};

	Parms.MeshComponent = MeshComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MotionTrajectory.CharacterMovementTrajectoryLibrary
// (None)

class UClass* UCharacterMovementTrajectoryLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharacterMovementTrajectoryLibrary");

	return Clss;
}


// CharacterMovementTrajectoryLibrary MotionTrajectory.Default__CharacterMovementTrajectoryLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UCharacterMovementTrajectoryLibrary* UCharacterMovementTrajectoryLibrary::GetDefaultObj()
{
	static class UCharacterMovementTrajectoryLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacterMovementTrajectoryLibrary*>(UCharacterMovementTrajectoryLibrary::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterMovementTrajectoryLibrary", "StepCharacterMovementGroundPrediction");

	Params::UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Params Parms{};

	Parms.InDeltaTime = InDeltaTime;
	Parms.InVelocity = InVelocity;
	Parms.InAcceleration = InAcceleration;
	Parms.InCharacterMovementComponent = InCharacterMovementComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutVelocity != nullptr)
		*OutVelocity = Parms.OutVelocity;

}

}


