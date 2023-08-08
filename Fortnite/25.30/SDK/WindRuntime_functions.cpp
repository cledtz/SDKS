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


// Function WindRuntime.WindCheatManager.ReleaseBalloonOnSelf
// (Final, BlueprintAuthorityOnly, Exec, Native, Public, Const)
// Parameters:
// int32                              NumBalloons                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWindCheatManager::ReleaseBalloonOnSelf(int32 NumBalloons)
{
	static auto Func = Class->GetFunction("WindCheatManager", "ReleaseBalloonOnSelf");

	Params::UWindCheatManager_ReleaseBalloonOnSelf_Params Parms;

	Parms.NumBalloons = NumBalloons;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function WindRuntime.WindCheatManager.InflateBalloonOnSelf
// (Final, BlueprintAuthorityOnly, Exec, Native, Public, Const)
// Parameters:
// int32                              NumBalloons                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWindCheatManager::InflateBalloonOnSelf(int32 NumBalloons)
{
	static auto Func = Class->GetFunction("WindCheatManager", "InflateBalloonOnSelf");

	Params::UWindCheatManager_InflateBalloonOnSelf_Params Parms;

	Parms.NumBalloons = NumBalloons;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function WindRuntime.WindField.SetActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsActive                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWindField::SetActive(bool bInIsActive)
{
	static auto Func = Class->GetFunction("WindField", "SetActive");

	Params::UWindField_SetActive_Params Parms;

	Parms.bInIsActive = bInIsActive;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function WindRuntime.WindField.RemoveIgnoredActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWindField::RemoveIgnoredActor(class UActor* Actor)
{
	static auto Func = Class->GetFunction("WindField", "RemoveIgnoredActor");

	Params::UWindField_RemoveIgnoredActor_Params Parms;

	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function WindRuntime.WindField.RemoveCollider
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UShapeComponent*             ShapeComponent                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWindField::RemoveCollider(class UShapeComponent* ShapeComponent)
{
	static auto Func = Class->GetFunction("WindField", "RemoveCollider");

	Params::UWindField_RemoveCollider_Params Parms;

	Parms.ShapeComponent = ShapeComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function WindRuntime.WindField.OnEndOverlap
// (Native, Protected)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      Other                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWindField::OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class UActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static auto Func = Class->GetFunction("WindField", "OnEndOverlap");

	Params::UWindField_OnEndOverlap_Params Parms;

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function WindRuntime.WindField.OnBeginOverlap
// (Native, Protected, HasOutParams)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      Other                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UWindField::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class UActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static auto Func = Class->GetFunction("WindField", "OnBeginOverlap");

	Params::UWindField_OnBeginOverlap_Params Parms;

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function WindRuntime.WindField.AddIgnoredActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWindField::AddIgnoredActor(class UActor* Actor)
{
	static auto Func = Class->GetFunction("WindField", "AddIgnoredActor");

	Params::UWindField_AddIgnoredActor_Params Parms;

	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function WindRuntime.WindField.AddCollider
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UShapeComponent*             ShapeComponent                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWindField::AddCollider(class UShapeComponent* ShapeComponent)
{
	static auto Func = Class->GetFunction("WindField", "AddCollider");

	Params::UWindField_AddCollider_Params Parms;

	Parms.ShapeComponent = ShapeComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function WindRuntime.WindSplineComponent.OnRep_TargetData
// (Final, Native, Protected)
// Parameters:

void UWindSplineComponent::OnRep_TargetData()
{
	static auto Func = Class->GetFunction("WindSplineComponent", "OnRep_TargetData");

	Params::UWindSplineComponent_OnRep_TargetData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function WindRuntime.WindSplineComponent.OnRep_Blockages
// (Final, Native, Protected)
// Parameters:

void UWindSplineComponent::OnRep_Blockages()
{
	static auto Func = Class->GetFunction("WindSplineComponent", "OnRep_Blockages");

	Params::UWindSplineComponent_OnRep_Blockages_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function WindRuntime.WindSplineComponent.HandleSafeZoneUpdated
// (Final, Native, Protected)
// Parameters:

void UWindSplineComponent::HandleSafeZoneUpdated()
{
	static auto Func = Class->GetFunction("WindSplineComponent", "HandleSafeZoneUpdated");

	Params::UWindSplineComponent_HandleSafeZoneUpdated_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function WindRuntime.WindSplineComponent.GetWindDataAtLocation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector                     InTargetLocation                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutDirection                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutAttenuation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWindSplineComponent::GetWindDataAtLocation(struct FVector& InTargetLocation, struct FVector* OutDirection, float* OutAttenuation)
{
	static auto Func = Class->GetFunction("WindSplineComponent", "GetWindDataAtLocation");

	Params::UWindSplineComponent_GetWindDataAtLocation_Params Parms;

	Parms.InTargetLocation = InTargetLocation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutDirection != nullptr)
		*OutDirection = Parms.OutDirection;

	if (OutAttenuation != nullptr)
		*OutAttenuation = Parms.OutAttenuation;

}


// Function WindRuntime.WindSplineComponent.GetTargetingRadius
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWindSplineComponent::GetTargetingRadius()
{
	static auto Func = Class->GetFunction("WindSplineComponent", "GetTargetingRadius");

	Params::UWindSplineComponent_GetTargetingRadius_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function WindRuntime.WindSplineComponent.GetClosestActiveLocations
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector                     InTargetLocation                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsClosestPointActive                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ClosestPointOnSpline                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             ClosestActiveLocations                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UWindSplineComponent::GetClosestActiveLocations(struct FVector& InTargetLocation, bool* bIsClosestPointActive, struct FVector* ClosestPointOnSpline, TArray<struct FVector>* ClosestActiveLocations)
{
	static auto Func = Class->GetFunction("WindSplineComponent", "GetClosestActiveLocations");

	Params::UWindSplineComponent_GetClosestActiveLocations_Params Parms;

	Parms.InTargetLocation = InTargetLocation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (bIsClosestPointActive != nullptr)
		*bIsClosestPointActive = Parms.bIsClosestPointActive;

	if (ClosestPointOnSpline != nullptr)
		*ClosestPointOnSpline = Parms.ClosestPointOnSpline;

	if (ClosestActiveLocations != nullptr)
		*ClosestActiveLocations = Parms.ClosestActiveLocations;

}


// Function WindRuntime.WindSplineComponent.Enable
// (Final, Native, Protected)
// Parameters:

void UWindSplineComponent::Enable()
{
	static auto Func = Class->GetFunction("WindSplineComponent", "Enable");

	Params::UWindSplineComponent_Enable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function WindRuntime.WindSplineComponent.Disable
// (Final, Native, Protected)
// Parameters:

void UWindSplineComponent::Disable()
{
	static auto Func = Class->GetFunction("WindSplineComponent", "Disable");

	Params::UWindSplineComponent_Disable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
