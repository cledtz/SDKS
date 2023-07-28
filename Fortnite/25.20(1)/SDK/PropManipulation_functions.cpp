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


// Function PropManipulation.PropManipulationNativeComponent.SetControlledObjectsVisibilityAndCollision
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TArray<class UBuildingSMActor*>    InObjectsOfControl                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               InNewVisibility                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPropManipulationNativeComponent::SetControlledObjectsVisibilityAndCollision(const TArray<class UBuildingSMActor*>& InObjectsOfControl, bool InNewVisibility)
{
	static auto Func = Class->GetFunction("PropManipulationNativeComponent", "SetControlledObjectsVisibilityAndCollision");

	Params::UPropManipulationNativeComponent_SetControlledObjectsVisibilityAndCollision_Params Parms;

	Parms.InObjectsOfControl = InObjectsOfControl;
	Parms.InNewVisibility = InNewVisibility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PropManipulation.PropManipulationNativeComponent.RefreshTrackedActors
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UPlayspaceComponent_SpatialActorTracker*InPlaySpaceComponent_SpatialActorTracker                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPropManipulationNativeComponent::RefreshTrackedActors(class UPlayspaceComponent_SpatialActorTracker* InPlaySpaceComponent_SpatialActorTracker)
{
	static auto Func = Class->GetFunction("PropManipulationNativeComponent", "RefreshTrackedActors");

	Params::UPropManipulationNativeComponent_RefreshTrackedActors_Params Parms;

	Parms.InPlaySpaceComponent_SpatialActorTracker = InPlaySpaceComponent_SpatialActorTracker;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
