#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PropManipulation.PropManipulationNativeComponent
// (None)

class UClass* UPropManipulationNativeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropManipulationNativeComponent");

	return Clss;
}


// PropManipulationNativeComponent PropManipulation.Default__PropManipulationNativeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPropManipulationNativeComponent* UPropManipulationNativeComponent::GetDefaultObj()
{
	static class UPropManipulationNativeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropManipulationNativeComponent*>(UPropManipulationNativeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function PropManipulation.PropManipulationNativeComponent.SetControlledObjectsVisibilityAndCollision
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TArray<class UBuildingSMActor*>    InObjectsOfControl                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               InNewVisibility                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPropManipulationNativeComponent::SetControlledObjectsVisibilityAndCollision(const TArray<class UBuildingSMActor*>& InObjectsOfControl, bool InNewVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropManipulationNativeComponent", "SetControlledObjectsVisibilityAndCollision");

	Params::UPropManipulationNativeComponent_SetControlledObjectsVisibilityAndCollision_Params Parms{};

	Parms.InObjectsOfControl = InObjectsOfControl;
	Parms.InNewVisibility = InNewVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PropManipulation.PropManipulationNativeComponent.RefreshTrackedActors
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UPlayspaceComponent_SpatialActorTracker*InPlaySpaceComponent_SpatialActorTracker                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPropManipulationNativeComponent::RefreshTrackedActors(class UPlayspaceComponent_SpatialActorTracker* InPlaySpaceComponent_SpatialActorTracker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropManipulationNativeComponent", "RefreshTrackedActors");

	Params::UPropManipulationNativeComponent_RefreshTrackedActors_Params Parms{};

	Parms.InPlaySpaceComponent_SpatialActorTracker = InPlaySpaceComponent_SpatialActorTracker;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


