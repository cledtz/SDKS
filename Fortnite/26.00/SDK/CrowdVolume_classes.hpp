#pragma once

// Dumped with Dumper-7!


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
	uint8                                        Pad_997[0x40];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCrowdSpawner* GetDefaultObj();

	void SpawnCrowd(int32 Width, int32 Depth, int32 Height, int32 Precision, int32 CharacterScaleRandomness, int32 CharacterAngleRandomness, int32 Density);
	void RefreshTrackedActors(class UPlayspaceComponent_SpatialActorTracker* InPlaySpaceComponent_SpatialActorTracker);
};

}


