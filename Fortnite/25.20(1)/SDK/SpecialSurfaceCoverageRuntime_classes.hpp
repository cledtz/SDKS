#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

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
	uint8                                        Pad_44DC[0x68];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGameStateComponent_SurfaceCoverageMap");
		return Clss;
	}

	bool UpdateCoverageMap(class UObject* WorldContextObject, class UTextureRenderTarget2D* SpecialSurfaceRenderTarget, struct FVector& InTopLeftWorldCoordinate, struct FVector& InBottomRightWorldCoordinate, float CoverageThreshold, float DebugDrawDuration);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
