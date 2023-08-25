#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class WindRuntime.FortPlayerWindTunnelAnimInstance
// (None)

class UClass* UFortPlayerWindTunnelAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPlayerWindTunnelAnimInstance");

	return Clss;
}


// FortPlayerWindTunnelAnimInstance WindRuntime.Default__FortPlayerWindTunnelAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPlayerWindTunnelAnimInstance* UFortPlayerWindTunnelAnimInstance::GetDefaultObj()
{
	static class UFortPlayerWindTunnelAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPlayerWindTunnelAnimInstance*>(UFortPlayerWindTunnelAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class WindRuntime.WindCheatManager
// (None)

class UClass* UWindCheatManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WindCheatManager");

	return Clss;
}


// WindCheatManager WindRuntime.Default__WindCheatManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UWindCheatManager* UWindCheatManager::GetDefaultObj()
{
	static class UWindCheatManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UWindCheatManager*>(UWindCheatManager::StaticClass()->DefaultObject);

	return Default;
}


// Function WindRuntime.WindCheatManager.ReleaseBalloonOnSelf
// (Final, BlueprintAuthorityOnly, Exec, Native, Public, Const)
// Parameters:
// int32                              NumBalloons                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWindCheatManager::ReleaseBalloonOnSelf(int32 NumBalloons)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindCheatManager", "ReleaseBalloonOnSelf");

	Params::UWindCheatManager_ReleaseBalloonOnSelf_Params Parms{};

	Parms.NumBalloons = NumBalloons;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WindRuntime.WindCheatManager.InflateBalloonOnSelf
// (Final, BlueprintAuthorityOnly, Exec, Native, Public, Const)
// Parameters:
// int32                              NumBalloons                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWindCheatManager::InflateBalloonOnSelf(int32 NumBalloons)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindCheatManager", "InflateBalloonOnSelf");

	Params::UWindCheatManager_InflateBalloonOnSelf_Params Parms{};

	Parms.NumBalloons = NumBalloons;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class WindRuntime.WindField
// (Actor)

class UClass* UWindField::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WindField");

	return Clss;
}


// WindField WindRuntime.Default__WindField
// (Public, ClassDefaultObject, ArchetypeObject)

class UWindField* UWindField::GetDefaultObj()
{
	static class UWindField* Default = nullptr;

	if (!Default)
		Default = static_cast<UWindField*>(UWindField::StaticClass()->DefaultObject);

	return Default;
}


// Function WindRuntime.WindField.SetActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsActive                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWindField::SetActive(bool bInIsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindField", "SetActive");

	Params::UWindField_SetActive_Params Parms{};

	Parms.bInIsActive = bInIsActive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WindRuntime.WindField.RemoveIgnoredActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWindField::RemoveIgnoredActor(class UActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindField", "RemoveIgnoredActor");

	Params::UWindField_RemoveIgnoredActor_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WindRuntime.WindField.RemoveCollider
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UShapeComponent*             ShapeComponent                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWindField::RemoveCollider(class UShapeComponent* ShapeComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindField", "RemoveCollider");

	Params::UWindField_RemoveCollider_Params Parms{};

	Parms.ShapeComponent = ShapeComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindField", "OnEndOverlap");

	Params::UWindField_OnEndOverlap_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindField", "OnBeginOverlap");

	Params::UWindField_OnBeginOverlap_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WindRuntime.WindField.AddIgnoredActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWindField::AddIgnoredActor(class UActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindField", "AddIgnoredActor");

	Params::UWindField_AddIgnoredActor_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WindRuntime.WindField.AddCollider
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UShapeComponent*             ShapeComponent                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWindField::AddCollider(class UShapeComponent* ShapeComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindField", "AddCollider");

	Params::UWindField_AddCollider_Params Parms{};

	Parms.ShapeComponent = ShapeComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class WindRuntime.LinearWindField
// (Actor)

class UClass* ULinearWindField::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LinearWindField");

	return Clss;
}


// LinearWindField WindRuntime.Default__LinearWindField
// (Public, ClassDefaultObject, ArchetypeObject)

class ULinearWindField* ULinearWindField::GetDefaultObj()
{
	static class ULinearWindField* Default = nullptr;

	if (!Default)
		Default = static_cast<ULinearWindField*>(ULinearWindField::StaticClass()->DefaultObject);

	return Default;
}


// Class WindRuntime.RadialWindField
// (Actor)

class UClass* URadialWindField::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadialWindField");

	return Clss;
}


// RadialWindField WindRuntime.Default__RadialWindField
// (Public, ClassDefaultObject, ArchetypeObject)

class URadialWindField* URadialWindField::GetDefaultObj()
{
	static class URadialWindField* Default = nullptr;

	if (!Default)
		Default = static_cast<URadialWindField*>(URadialWindField::StaticClass()->DefaultObject);

	return Default;
}


// Class WindRuntime.WindSplineComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UWindSplineComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WindSplineComponent");

	return Clss;
}


// WindSplineComponent WindRuntime.Default__WindSplineComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWindSplineComponent* UWindSplineComponent::GetDefaultObj()
{
	static class UWindSplineComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWindSplineComponent*>(UWindSplineComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function WindRuntime.WindSplineComponent.OnRep_TargetData
// (Final, Native, Protected)
// Parameters:

void UWindSplineComponent::OnRep_TargetData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindSplineComponent", "OnRep_TargetData");

	Params::UWindSplineComponent_OnRep_TargetData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WindRuntime.WindSplineComponent.OnRep_Blockages
// (Final, Native, Protected)
// Parameters:

void UWindSplineComponent::OnRep_Blockages()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindSplineComponent", "OnRep_Blockages");

	Params::UWindSplineComponent_OnRep_Blockages_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WindRuntime.WindSplineComponent.HandleSafeZoneUpdated
// (Final, Native, Protected)
// Parameters:

void UWindSplineComponent::HandleSafeZoneUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindSplineComponent", "HandleSafeZoneUpdated");

	Params::UWindSplineComponent_HandleSafeZoneUpdated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WindRuntime.WindSplineComponent.GetWindDataAtLocation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector                     InTargetLocation                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutDirection                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutAttenuation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWindSplineComponent::GetWindDataAtLocation(struct FVector& InTargetLocation, struct FVector* OutDirection, float* OutAttenuation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindSplineComponent", "GetWindDataAtLocation");

	Params::UWindSplineComponent_GetWindDataAtLocation_Params Parms{};

	Parms.InTargetLocation = InTargetLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindSplineComponent", "GetTargetingRadius");

	Params::UWindSplineComponent_GetTargetingRadius_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindSplineComponent", "GetClosestActiveLocations");

	Params::UWindSplineComponent_GetClosestActiveLocations_Params Parms{};

	Parms.InTargetLocation = InTargetLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindSplineComponent", "Enable");

	Params::UWindSplineComponent_Enable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WindRuntime.WindSplineComponent.Disable
// (Final, Native, Protected)
// Parameters:

void UWindSplineComponent::Disable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindSplineComponent", "Disable");

	Params::UWindSplineComponent_Disable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


