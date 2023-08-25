#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x110 - 0xA8)
// Class SpecialSurfaceCoverageRuntime.FortGameStateComponent_SurfaceCoverageMap
class UFortGameStateComponent_SurfaceCoverageMap : public UFortGameStateComponent_SurfaceOverride
{
public:
	uint8                                        Pad_2240[0x68];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortGameStateComponent_SurfaceCoverageMap* GetDefaultObj();

	bool UpdateCoverageMap(class UObject* WorldContextObject, class UTextureRenderTarget2D* SpecialSurfaceRenderTarget, struct FVector& InTopLeftWorldCoordinate, struct FVector& InBottomRightWorldCoordinate, float CoverageThreshold, float DebugDrawDuration);
};

}


