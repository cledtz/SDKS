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


// Function MotherGameplayRuntime.GravityGunTargetTrackingComponent.IsValidTarget
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// class UActor*                      OwningPlayer                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      PotentialTarget                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       ReasonForFailure                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGravityGunTargetTrackingComponent::IsValidTarget(class UActor* OwningPlayer, class UActor* PotentialTarget, struct FGameplayTagContainer* ReasonForFailure)
{
	static auto Func = Class->GetFunction("GravityGunTargetTrackingComponent", "IsValidTarget");

	Params::UGravityGunTargetTrackingComponent_IsValidTarget_Params Parms;

	Parms.OwningPlayer = OwningPlayer;
	Parms.PotentialTarget = PotentialTarget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("GravityGunTargetTrackingComponent", "FindTargetProjectile");

	Params::UGravityGunTargetTrackingComponent_FindTargetProjectile_Params Parms;

	Parms.OwningPlayer = OwningPlayer;
	Parms.TraceStart = TraceStart;
	Parms.TraceEnd = TraceEnd;
	Parms.TargetingRadius = TargetingRadius;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("GravityGunTargetTrackingComponent", "FindTargetActor");

	Params::UGravityGunTargetTrackingComponent_FindTargetActor_Params Parms;

	Parms.OwningPlayer = OwningPlayer;
	Parms.TraceStart = TraceStart;
	Parms.TraceEnd = TraceEnd;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("PropGunFunctionLibrary", "UpdatePropPreviewPosition");

	Params::UPropGunFunctionLibrary_UpdatePropPreviewPosition_Params Parms;

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

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MotherGameplayRuntime.PropGunFunctionLibrary.UpdatePropIndexEventState
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// class UActor*                      ContextActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPaddleGingerPropData       Payload                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UPropGunFunctionLibrary::UpdatePropIndexEventState(class UActor* ContextActor, struct FPaddleGingerPropData& Payload)
{
	static auto Func = Class->GetFunction("PropGunFunctionLibrary", "UpdatePropIndexEventState");

	Params::UPropGunFunctionLibrary_UpdatePropIndexEventState_Params Parms;

	Parms.ContextActor = ContextActor;
	Parms.Payload = Payload;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MotherGameplayRuntime.PropGunFunctionLibrary.UpdatePropActivatedEventState
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// class UActor*                      ContextActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPaddleGingerPropActivatedDataPayload                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UPropGunFunctionLibrary::UpdatePropActivatedEventState(class UActor* ContextActor, struct FPaddleGingerPropActivatedData& Payload)
{
	static auto Func = Class->GetFunction("PropGunFunctionLibrary", "UpdatePropActivatedEventState");

	Params::UPropGunFunctionLibrary_UpdatePropActivatedEventState_Params Parms;

	Parms.ContextActor = ContextActor;
	Parms.Payload = Payload;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MotherGameplayRuntime.PropGunFunctionLibrary.ClearPropIndexEventState
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UActor*                      ContextActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPropGunFunctionLibrary::ClearPropIndexEventState(class UActor* ContextActor)
{
	static auto Func = Class->GetFunction("PropGunFunctionLibrary", "ClearPropIndexEventState");

	Params::UPropGunFunctionLibrary_ClearPropIndexEventState_Params Parms;

	Parms.ContextActor = ContextActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MotherGameplayRuntime.PropGunFunctionLibrary.ClearPropActivatedEventState
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UActor*                      ContextActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPropGunFunctionLibrary::ClearPropActivatedEventState(class UActor* ContextActor)
{
	static auto Func = Class->GetFunction("PropGunFunctionLibrary", "ClearPropActivatedEventState");

	Params::UPropGunFunctionLibrary_ClearPropActivatedEventState_Params Parms;

	Parms.ContextActor = ContextActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp.UpdateAimEndPoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UReactorGradeGameplayCue_ChargeUp::UpdateAimEndPoint()
{
	static auto Func = Class->GetFunction("ReactorGradeGameplayCue_ChargeUp", "UpdateAimEndPoint");

	Params::UReactorGradeGameplayCue_ChargeUp_UpdateAimEndPoint_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp.OnEndPointUpdated
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                     FoundPoint                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UReactorGradeGameplayCue_ChargeUp::OnEndPointUpdated(struct FVector& FoundPoint)
{
	static auto Func = Class->GetFunction("ReactorGradeGameplayCue_ChargeUp", "OnEndPointUpdated");

	Params::UReactorGradeGameplayCue_ChargeUp_OnEndPointUpdated_Params Parms;

	Parms.FoundPoint = FoundPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp.GetFoundEndPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UReactorGradeGameplayCue_ChargeUp::GetFoundEndPoint()
{
	static auto Func = Class->GetFunction("ReactorGradeGameplayCue_ChargeUp", "GetFoundEndPoint");

	Params::UReactorGradeGameplayCue_ChargeUp_GetFoundEndPoint_Params Parms;


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
