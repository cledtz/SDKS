#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xA0 - 0xA0)
// Class VolumetricRegion.VolumetricRegionNativeComponent
class UVolumetricRegionNativeComponent : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class UVolumetricRegionNativeComponent* GetDefaultObj();

	void RefreshTrackedActors(class UPlayspaceComponent_SpatialActorTracker* InPlaySpaceComponent_SpatialActorTracker);
};

}


