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


// Function VolumetricRegion.VolumetricRegionNativeComponent.RefreshTrackedActors
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UPlayspaceComponent_SpatialActorTracker*InPlaySpaceComponent_SpatialActorTracker                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVolumetricRegionNativeComponent::RefreshTrackedActors(class UPlayspaceComponent_SpatialActorTracker* InPlaySpaceComponent_SpatialActorTracker)
{
	static auto Func = Class->GetFunction("VolumetricRegionNativeComponent", "RefreshTrackedActors");

	Params::UVolumetricRegionNativeComponent_RefreshTrackedActors_Params Parms;

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
