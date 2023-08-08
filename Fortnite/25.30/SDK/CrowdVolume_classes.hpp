#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2E0 - 0x2A0)
// Class CrowdVolume.CrowdSpawner
class UCrowdSpawner : public USceneComponent
{
public:
	uint8                                        Pad_4A12[0x40];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CrowdSpawner");
		return Clss;
	}

	void SpawnCrowd(int32 Width, int32 Depth, int32 Height, int32 Precision, int32 CharacterScaleRandomness, int32 CharacterAngleRandomness, int32 Density);
	void RefreshTrackedActors(class UPlayspaceComponent_SpatialActorTracker* InPlaySpaceComponent_SpatialActorTracker);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
