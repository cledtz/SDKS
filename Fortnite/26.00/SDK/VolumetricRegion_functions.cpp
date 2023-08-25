#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VolumetricRegion.VolumetricRegionNativeComponent
// (None)

class UClass* UVolumetricRegionNativeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VolumetricRegionNativeComponent");

	return Clss;
}


// VolumetricRegionNativeComponent VolumetricRegion.Default__VolumetricRegionNativeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVolumetricRegionNativeComponent* UVolumetricRegionNativeComponent::GetDefaultObj()
{
	static class UVolumetricRegionNativeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVolumetricRegionNativeComponent*>(UVolumetricRegionNativeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function VolumetricRegion.VolumetricRegionNativeComponent.RefreshTrackedActors
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UPlayspaceComponent_SpatialActorTracker*InPlaySpaceComponent_SpatialActorTracker                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVolumetricRegionNativeComponent::RefreshTrackedActors(class UPlayspaceComponent_SpatialActorTracker* InPlaySpaceComponent_SpatialActorTracker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VolumetricRegionNativeComponent", "RefreshTrackedActors");

	Params::UVolumetricRegionNativeComponent_RefreshTrackedActors_Params Parms{};

	Parms.InPlaySpaceComponent_SpatialActorTracker = InPlaySpaceComponent_SpatialActorTracker;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


