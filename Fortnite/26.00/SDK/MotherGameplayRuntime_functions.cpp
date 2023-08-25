#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MotherGameplayRuntime.GravityGunTargetTrackingComponent
// (None)

class UClass* UGravityGunTargetTrackingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GravityGunTargetTrackingComponent");

	return Clss;
}


// GravityGunTargetTrackingComponent MotherGameplayRuntime.Default__GravityGunTargetTrackingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGravityGunTargetTrackingComponent* UGravityGunTargetTrackingComponent::GetDefaultObj()
{
	static class UGravityGunTargetTrackingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGravityGunTargetTrackingComponent*>(UGravityGunTargetTrackingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MotherGameplayRuntime.GravityGunTargetTrackingComponent.IsValidTarget
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// class UActor*                      OwningPlayer                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      PotentialTarget                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       ReasonForFailure                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGravityGunTargetTrackingComponent::IsValidTarget(class UActor* OwningPlayer, class UActor* PotentialTarget, struct FGameplayTagContainer* ReasonForFailure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GravityGunTargetTrackingComponent", "IsValidTarget");

	Params::UGravityGunTargetTrackingComponent_IsValidTarget_Params Parms{};

	Parms.OwningPlayer = OwningPlayer;
	Parms.PotentialTarget = PotentialTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReasonForFailure != nullptr)
		*ReasonForFailure = Parms.ReasonForFailure;

	return Parms.ReturnValue;

}


// Function MotherGameplayRuntime.GravityGunTargetTrackingComponent.FindTargetProjectile
// (Final, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UActor*                      OwningPlayer                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TraceStart                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TraceEnd                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TargetingRadius                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGravityGunTargetTrackingComponent::FindTargetProjectile(class UActor* OwningPlayer, struct FVector& TraceStart, struct FVector& TraceEnd, float TargetingRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GravityGunTargetTrackingComponent", "FindTargetProjectile");

	Params::UGravityGunTargetTrackingComponent_FindTargetProjectile_Params Parms{};

	Parms.OwningPlayer = OwningPlayer;
	Parms.TraceStart = TraceStart;
	Parms.TraceEnd = TraceEnd;
	Parms.TargetingRadius = TargetingRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MotherGameplayRuntime.GravityGunTargetTrackingComponent.FindTargetActor
// (Final, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UActor*                      OwningPlayer                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TraceStart                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TraceEnd                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGravityGunTargetTrackingComponent::FindTargetActor(class UActor* OwningPlayer, struct FVector& TraceStart, struct FVector& TraceEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GravityGunTargetTrackingComponent", "FindTargetActor");

	Params::UGravityGunTargetTrackingComponent_FindTargetActor_Params Parms{};

	Parms.OwningPlayer = OwningPlayer;
	Parms.TraceStart = TraceStart;
	Parms.TraceEnd = TraceEnd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MotherGameplayRuntime.FortCabbageIglooVehicle
// (Actor, Pawn)

class UClass* UFortCabbageIglooVehicle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCabbageIglooVehicle");

	return Clss;
}


// FortCabbageIglooVehicle MotherGameplayRuntime.Default__FortCabbageIglooVehicle
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCabbageIglooVehicle* UFortCabbageIglooVehicle::GetDefaultObj()
{
	static class UFortCabbageIglooVehicle* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCabbageIglooVehicle*>(UFortCabbageIglooVehicle::StaticClass()->DefaultObject);

	return Default;
}


// Class MotherGameplayRuntime.FortBaseAnimInstance_CageSaddle
// (None)

class UClass* UFortBaseAnimInstance_CageSaddle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBaseAnimInstance_CageSaddle");

	return Clss;
}


// FortBaseAnimInstance_CageSaddle MotherGameplayRuntime.Default__FortBaseAnimInstance_CageSaddle
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBaseAnimInstance_CageSaddle* UFortBaseAnimInstance_CageSaddle::GetDefaultObj()
{
	static class UFortBaseAnimInstance_CageSaddle* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBaseAnimInstance_CageSaddle*>(UFortBaseAnimInstance_CageSaddle::StaticClass()->DefaultObject);

	return Default;
}


// Class MotherGameplayRuntime.FortGameplayCueNotifyLoop_Goop
// (Actor)

class UClass* UFortGameplayCueNotifyLoop_Goop::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameplayCueNotifyLoop_Goop");

	return Clss;
}


// FortGameplayCueNotifyLoop_Goop MotherGameplayRuntime.Default__FortGameplayCueNotifyLoop_Goop
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameplayCueNotifyLoop_Goop* UFortGameplayCueNotifyLoop_Goop::GetDefaultObj()
{
	static class UFortGameplayCueNotifyLoop_Goop* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameplayCueNotifyLoop_Goop*>(UFortGameplayCueNotifyLoop_Goop::StaticClass()->DefaultObject);

	return Default;
}


// Class MotherGameplayRuntime.PropGunFunctionLibrary
// (None)

class UClass* UPropGunFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropGunFunctionLibrary");

	return Clss;
}


// PropGunFunctionLibrary MotherGameplayRuntime.Default__PropGunFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UPropGunFunctionLibrary* UPropGunFunctionLibrary::GetDefaultObj()
{
	static class UPropGunFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropGunFunctionLibrary*>(UPropGunFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MotherGameplayRuntime.PropGunFunctionLibrary.UpdatePropPreviewPosition
// (Final, Native, Static, Private, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*             PropPreviewComponent                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaTime                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   AttachPawn                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AttachSocket                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*      WeaponMesh                                                       (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     DesiredRelativeTransform                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinimumZOffset                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    RelativeRotation                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     CachedScale                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InterpSpeed                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPropGunFunctionLibrary::UpdatePropPreviewPosition(class USceneComponent* PropPreviewComponent, float DeltaTime, class UFortPawn* AttachPawn, class FName AttachSocket, class USkeletalMeshComponent* WeaponMesh, struct FVector& DesiredRelativeTransform, float MinimumZOffset, struct FRotator& RelativeRotation, struct FVector& CachedScale, float InterpSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropGunFunctionLibrary", "UpdatePropPreviewPosition");

	Params::UPropGunFunctionLibrary_UpdatePropPreviewPosition_Params Parms{};

	Parms.PropPreviewComponent = PropPreviewComponent;
	Parms.DeltaTime = DeltaTime;
	Parms.AttachPawn = AttachPawn;
	Parms.AttachSocket = AttachSocket;
	Parms.WeaponMesh = WeaponMesh;
	Parms.DesiredRelativeTransform = DesiredRelativeTransform;
	Parms.MinimumZOffset = MinimumZOffset;
	Parms.RelativeRotation = RelativeRotation;
	Parms.CachedScale = CachedScale;
	Parms.InterpSpeed = InterpSpeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MotherGameplayRuntime.PropGunFunctionLibrary.UpdatePropIndexEventState
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// class UActor*                      ContextActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPaddleGingerPropData       Payload                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UPropGunFunctionLibrary::UpdatePropIndexEventState(class UActor* ContextActor, struct FPaddleGingerPropData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropGunFunctionLibrary", "UpdatePropIndexEventState");

	Params::UPropGunFunctionLibrary_UpdatePropIndexEventState_Params Parms{};

	Parms.ContextActor = ContextActor;
	Parms.Payload = Payload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MotherGameplayRuntime.PropGunFunctionLibrary.UpdatePropActivatedEventState
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// class UActor*                      ContextActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPaddleGingerPropActivatedDataPayload                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UPropGunFunctionLibrary::UpdatePropActivatedEventState(class UActor* ContextActor, struct FPaddleGingerPropActivatedData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropGunFunctionLibrary", "UpdatePropActivatedEventState");

	Params::UPropGunFunctionLibrary_UpdatePropActivatedEventState_Params Parms{};

	Parms.ContextActor = ContextActor;
	Parms.Payload = Payload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MotherGameplayRuntime.PropGunFunctionLibrary.ClearPropIndexEventState
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UActor*                      ContextActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPropGunFunctionLibrary::ClearPropIndexEventState(class UActor* ContextActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropGunFunctionLibrary", "ClearPropIndexEventState");

	Params::UPropGunFunctionLibrary_ClearPropIndexEventState_Params Parms{};

	Parms.ContextActor = ContextActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MotherGameplayRuntime.PropGunFunctionLibrary.ClearPropActivatedEventState
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UActor*                      ContextActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPropGunFunctionLibrary::ClearPropActivatedEventState(class UActor* ContextActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropGunFunctionLibrary", "ClearPropActivatedEventState");

	Params::UPropGunFunctionLibrary_ClearPropActivatedEventState_Params Parms{};

	Parms.ContextActor = ContextActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp
// (Actor)

class UClass* UReactorGradeGameplayCue_ChargeUp::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReactorGradeGameplayCue_ChargeUp");

	return Clss;
}


// ReactorGradeGameplayCue_ChargeUp MotherGameplayRuntime.Default__ReactorGradeGameplayCue_ChargeUp
// (Public, ClassDefaultObject, ArchetypeObject)

class UReactorGradeGameplayCue_ChargeUp* UReactorGradeGameplayCue_ChargeUp::GetDefaultObj()
{
	static class UReactorGradeGameplayCue_ChargeUp* Default = nullptr;

	if (!Default)
		Default = static_cast<UReactorGradeGameplayCue_ChargeUp*>(UReactorGradeGameplayCue_ChargeUp::StaticClass()->DefaultObject);

	return Default;
}


// Function MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp.UpdateAimEndPoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UReactorGradeGameplayCue_ChargeUp::UpdateAimEndPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReactorGradeGameplayCue_ChargeUp", "UpdateAimEndPoint");

	Params::UReactorGradeGameplayCue_ChargeUp_UpdateAimEndPoint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp.OnEndPointUpdated
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                     FoundPoint                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UReactorGradeGameplayCue_ChargeUp::OnEndPointUpdated(struct FVector& FoundPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReactorGradeGameplayCue_ChargeUp", "OnEndPointUpdated");

	Params::UReactorGradeGameplayCue_ChargeUp_OnEndPointUpdated_Params Parms{};

	Parms.FoundPoint = FoundPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp.GetFoundEndPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UReactorGradeGameplayCue_ChargeUp::GetFoundEndPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReactorGradeGameplayCue_ChargeUp", "GetFoundEndPoint");

	Params::UReactorGradeGameplayCue_ChargeUp_GetFoundEndPoint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


