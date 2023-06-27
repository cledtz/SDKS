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

// 0x10 (0x630 - 0x620)
// Class Landscape.ControlPointMeshComponent
class UControlPointMeshComponent : public UStaticMeshComponent
{
public:
	float                                        VirtualTextureMainPassMaxDrawDistance;             // 0x620(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A14[0xC];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlPointMeshComponent");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Landscape.LandscapeSplineInterface
class ULandscapeSplineInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeSplineInterface");
		return Clss;
	}

};

// 0x368 (0x5F0 - 0x288)
// Class Landscape.LandscapeProxy
class ALandscapeProxy : public APartitionActor
{
public:
	uint8                                        Pad_1A19[0x8];                                     // Fixing Size After Last Property..
	class ULandscapeSplinesComponent*            SplineComponent;                                   // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                 LandscapeGuid;                                     // 0x298(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A1A[0x10];                                    // Fixing Size After Last Property..
	bool                                         bEnableNanite;                                     // 0x2B8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A1B[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FLandscapePerLODMaterialOverride> PerLODOverrideMaterials;                           // 0x2C0(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FIntPoint                             LandscapeSectionOffset;                            // 0x2D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLODLevel;                                       // 0x2D8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ComponentScreenSizeToUseSubSections;               // 0x2DC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LOD0ScreenSize;                                    // 0x2E0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LOD0DistributionSetting;                           // 0x2E4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LODDistributionSetting;                            // 0x2E8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StaticLightingLOD;                                 // 0x2EC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                     DefaultPhysMaterial;                               // 0x2F0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StreamingDistanceMultiplier;                       // 0x2F8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A1C[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    LandscapeMaterial;                                 // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A1D[0x20];                                    // Fixing Size After Last Property..
	class UMaterialInterface*                    LandscapeHoleMaterial;                             // 0x328(0x8)(Edit, ZeroConstructor, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class URuntimeVirtualTexture*>        RuntimeVirtualTextures;                            // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bSetCreateRuntimeVirtualTextureVolumes;            // 0x340(0x1)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVirtualTextureRenderWithQuad;                     // 0x341(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVirtualTextureRenderWithQuadHQ;                   // 0x342(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A1E[0x1];                                     // Fixing Size After Last Property..
	int32                                        VirtualTextureNumLods;                             // 0x344(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VirtualTextureLodBias;                             // 0x348(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;                      // 0x34C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A1F[0x3];                                     // Fixing Size After Last Property..
	float                                        NegativeZBoundsExtension;                          // 0x350(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositiveZBoundsExtension;                          // 0x354(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ULandscapeComponent*>           LandscapeComponents;                               // 0x358(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                               // 0x368(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                 // 0x378(0x10)(ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	class ULandscapeNaniteComponent*             NaniteComponent;                                   // 0x388(0x8)(ExportObject, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A20[0x64];                                    // Fixing Size After Last Property..
	bool                                         bHasLandscapeGrass;                                // 0x3F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A21[0x3];                                     // Fixing Size After Last Property..
	float                                        StaticLightingResolution;                          // 0x3F8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CastShadow : 1;                                    // Mask: 0x1, PropSize: 0x10x3FC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCastDynamicShadow : 1;                            // Mask: 0x2, PropSize: 0x10x3FC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCastStaticShadow : 1;                             // Mask: 0x4, PropSize: 0x10x3FC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCastContactShadow : 1;                            // Mask: 0x8, PropSize: 0x10x3FC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1AF : 4;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_1A22[0x3];                                     // Fixing Size After Last Property..
	uint8                                        bCastFarShadow : 1;                                // Mask: 0x1, PropSize: 0x10x400(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1B0 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_1A23[0x3];                                     // Fixing Size After Last Property..
	uint8                                        bCastHiddenShadow : 1;                             // Mask: 0x1, PropSize: 0x10x404(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1B1 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_1A24[0x3];                                     // Fixing Size After Last Property..
	uint8                                        bCastShadowAsTwoSided : 1;                         // Mask: 0x1, PropSize: 0x10x408(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1B2 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_1A25[0x3];                                     // Fixing Size After Last Property..
	uint8                                        bAffectDistanceFieldLighting : 1;                  // Mask: 0x1, PropSize: 0x10x40C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1B3 : 7;                                    // Fixing Bit-Field Size..
	struct FLightingChannels                     LightingChannels;                                  // 0x40D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A26[0x2];                                     // Fixing Size After Last Property..
	uint8                                        bUseMaterialPositionOffsetInStaticLighting : 1;    // Mask: 0x1, PropSize: 0x10x410(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRenderCustomDepth : 1;                            // Mask: 0x2, PropSize: 0x10x410(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1B4 : 6;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_1A27[0x3];                                     // Fixing Size After Last Property..
	enum class ERendererStencilMask              CustomDepthStencilWriteMask;                       // 0x414(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A28[0x3];                                     // Fixing Size After Last Property..
	int32                                        CustomDepthStencilValue;                           // 0x418(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LDMaxDrawDistance;                                 // 0x41C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLightmassPrimitiveSettings           LightmassSettings;                                 // 0x420(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        CollisionMipLevel;                                 // 0x438(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SimpleCollisionMipLevel;                           // 0x43C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A29[0x8];                                     // Fixing Size After Last Property..
	struct FBodyInstance                         BodyInstance;                                      // 0x448(0x188)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        bGenerateOverlapEvents : 1;                        // Mask: 0x1, PropSize: 0x10x5D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bBakeMaterialPositionOffsetIntoCollision : 1;      // Mask: 0x2, PropSize: 0x10x5D0(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1B5 : 6;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_1A2A[0x3];                                     // Fixing Size After Last Property..
	int32                                        ComponentSizeQuads;                                // 0x5D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubsectionSizeQuads;                               // 0x5D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumSubsections;                                    // 0x5DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsedForNavigation : 1;                            // Mask: 0x1, PropSize: 0x10x5E0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFillCollisionUnderLandscapeForNavmesh : 1;        // Mask: 0x2, PropSize: 0x10x5E0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1B6 : 6;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_1A2B[0x3];                                     // Fixing Size After Last Property..
	enum class ENavDataGatheringMode             NavigationGeometryGatheringMode;                   // 0x5E4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseDynamicMaterialInstance;                       // 0x5E5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLandscapeForCullingInvisibleHLODVertices;      // 0x5E6(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasLayersContent;                                 // 0x5E7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCompressedHeightmapStorage;                    // 0x5E8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A2C[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeProxy");
		return Clss;
	}

	void SetVirtualTextureRenderPassType(enum class ERuntimeVirtualTextureMainPassType InType);
	void SetLandscapeMaterialVectorParameterValue(class FName ParameterName, const struct FLinearColor& Value);
	void SetLandscapeMaterialTextureParameterValue(class FName ParameterName, class UTexture* Value);
	void SetLandscapeMaterialScalarParameterValue(class FName ParameterName, float Value);
	bool LandscapeExportHeightmapToRenderTarget(class UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies);
	class ALandscape* GetLandscapeActor();
	void EditorSetLandscapeMaterial(class UMaterialInterface* NewLandscapeMaterial);
	void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32 NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer, class FName EditLayerName);
	void ChangeLODDistanceFactor(float InLODDistanceFactor);
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);
};

// 0x0 (0x5F0 - 0x5F0)
// Class Landscape.Landscape
class ALandscape : public ALandscapeProxy
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Landscape");
		return Clss;
	}

	void RenderHeightmap(struct FTransform& InWorldTransform, struct FBox2D& InExtents, class UTextureRenderTarget2D* OutRenderTarget);
};

// 0x0 (0xC8 - 0xC8)
// Class Landscape.LandscapeLODStreamingProxy_DEPRECATED
class ULandscapeLODStreamingProxy_DEPRECATED : public UStreamableRenderAsset
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeLODStreamingProxy_DEPRECATED");
		return Clss;
	}

};

// 0x1E8 (0x750 - 0x568)
// Class Landscape.LandscapeComponent
class ULandscapeComponent : public UPrimitiveComponent
{
public:
	int32                                        SectionBaseX;                                      // 0x568(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SectionBaseY;                                      // 0x56C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ComponentSizeQuads;                                // 0x570(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubsectionSizeQuads;                               // 0x574(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumSubsections;                                    // 0x578(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A2F[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    OverrideMaterial;                                  // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    OverrideHoleMaterial;                              // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInstanceConstant*>     MaterialInstances;                                 // 0x590(0x10)(ZeroConstructor, TextExportTransient, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UMaterialInstanceDynamic*>      MaterialInstancesDynamic;                          // 0x5A0(0x10)(ZeroConstructor, Transient, TextExportTransient, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<int8>                                 LODIndexToMaterialIndex;                           // 0x5B0(0x10)(ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic)
	class UTexture2D*                            XYOffsetmapTexture;                                // 0x5C0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A30[0x8];                                     // Fixing Size After Last Property..
	struct FVector4                              WeightmapScaleBias;                                // 0x5D0(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeightmapSubsectionOffset;                         // 0x5F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A31[0xC];                                     // Fixing Size After Last Property..
	struct FVector4                              HeightmapScaleBias;                                // 0x600(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox                                  CachedLocalBox;                                    // 0x620(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class ULandscapeHeightfieldCollisionComponent* CollisionComponentRef;                             // 0x658(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUserTriggeredChangeRequested;                     // 0x660(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bNaniteActive;                                     // 0x661(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A32[0x6];                                     // Fixing Size After Last Property..
	class UTexture2D*                            HeightmapTexture;                                  // 0x668(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations;                         // 0x670(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UTexture2D*>                    WeightmapTextures;                                 // 0x680(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FLandscapePerLODMaterialOverride> PerLODOverrideMaterials;                           // 0x690(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FGuid                                 MapBuildDataId;                                    // 0x6A0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CollisionMipLevel;                                 // 0x6B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SimpleCollisionMipLevel;                           // 0x6B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NegativeZBoundsExtension;                          // 0x6B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositiveZBoundsExtension;                          // 0x6BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaticLightingResolution;                          // 0x6C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ForcedLOD;                                         // 0x6C4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LODBias;                                           // 0x6C8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 StateId;                                           // 0x6CC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A33[0x24];                                    // Fixing Size After Last Property..
	class UMaterialInterface*                    MobileMaterialInterface;                           // 0x700(0x8)(ZeroConstructor, Deprecated, NoDestructor, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            MobileMaterialInterfaces;                          // 0x708(0x10)(ZeroConstructor, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                    MobileWeightmapTextures;                           // 0x718(0x10)(ZeroConstructor, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A34[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeComponent");
		return Clss;
	}

	void SetLODBias(int32 InLODBias);
	void SetForcedLOD(int32 InForcedLOD);
	class UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32 InIndex);
	float EditorGetPaintLayerWeightByNameAtLocation(struct FVector& InLocation, class FName InPaintLayerName);
	float EditorGetPaintLayerWeightAtLocation(struct FVector& InLocation, class ULandscapeLayerInfoObject* PaintLayer);
};

// 0x0 (0x288 - 0x288)
// Class Landscape.LandscapeGizmoActor
class ALandscapeGizmoActor : public AActor
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeGizmoActor");
		return Clss;
	}

};

// 0x50 (0x2D8 - 0x288)
// Class Landscape.LandscapeGizmoActiveActor
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:
	uint8                                        Pad_1A35[0x50];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeGizmoActiveActor");
		return Clss;
	}

};

// 0x8 (0x570 - 0x568)
// Class Landscape.LandscapeGizmoRenderComponent
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_1A36[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeGizmoRenderComponent");
		return Clss;
	}

};

// 0x38 (0x60 - 0x28)
// Class Landscape.LandscapeGrassType
class ULandscapeGrassType : public UObject
{
public:
	TArray<struct FGrassVariety>                 GrassVarieties;                                    // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bEnableDensityScaling : 1;                         // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1B7 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_1A37[0x7];                                     // Fixing Size After Last Property..
	class UStaticMesh*                           GrassMesh;                                         // 0x40(0x8)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GrassDensity;                                      // 0x48(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlacementJitter;                                   // 0x4C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartCullDistance;                                 // 0x50(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EndCullDistance;                                   // 0x54(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RandomRotation;                                    // 0x58(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AlignToSurface;                                    // 0x59(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A38[0x6];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeGrassType");
		return Clss;
	}

};

// 0xE8 (0x650 - 0x568)
// Class Landscape.LandscapeHeightfieldCollisionComponent
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeLayerInfoObject*>     ComponentLayerInfos;                               // 0x568(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	int32                                        SectionBaseX;                                      // 0x578(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SectionBaseY;                                      // 0x57C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CollisionSizeQuads;                                // 0x580(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionScale;                                    // 0x584(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SimpleCollisionSizeQuads;                          // 0x588(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A39[0x4];                                     // Fixing Size After Last Property..
	TArray<uint8>                                CollisionQuadFlags;                                // 0x590(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGuid                                 HeightfieldGuid;                                   // 0x5A0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox                                  CachedLocalBox;                                    // 0x5B0(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class ULandscapeComponent*                   RenderComponentRef;                                // 0x5E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A3A[0x10];                                    // Fixing Size After Last Property..
	TArray<class UPhysicalMaterial*>             CookedPhysicalMaterials;                           // 0x600(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A3B[0x40];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeHeightfieldCollisionComponent");
		return Clss;
	}

	class ULandscapeComponent* GetRenderComponent();
};

// 0x28 (0x50 - 0x28)
// Class Landscape.LandscapeLayerInfoObject
class ULandscapeLayerInfoObject : public UObject
{
public:
	class FName                                  LayerName;                                         // 0x28(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A3C[0x4];                                     // Fixing Size After Last Property..
	class UPhysicalMaterial*                     PhysMaterial;                                      // 0x30(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Hardness;                                          // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LayerUsageDebugColor;                              // 0x3C(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A3D[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeLayerInfoObject");
		return Clss;
	}

};

// 0x18 (0x248 - 0x230)
// Class Landscape.LandscapeMaterialInstanceConstant
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:
	TArray<struct FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo;                              // 0x230(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bIsLayerThumbnail : 1;                             // Mask: 0x1, PropSize: 0x10x240(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDisableTessellation : 1;                          // Mask: 0x2, PropSize: 0x10x240(0x1)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bMobile : 1;                                       // Mask: 0x4, PropSize: 0x10x240(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEditorToolUsage : 1;                              // Mask: 0x8, PropSize: 0x10x240(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A3E[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeMaterialInstanceConstant");
		return Clss;
	}

};

// 0x20 (0x670 - 0x650)
// Class Landscape.LandscapeMeshCollisionComponent
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
public:
	struct FGuid                                 MeshGuid;                                          // 0x650(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A3F[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeMeshCollisionComponent");
		return Clss;
	}

};

// 0x8 (0x290 - 0x288)
// Class Landscape.LandscapeMeshProxyActor
class ALandscapeMeshProxyActor : public AActor
{
public:
	class ULandscapeMeshProxyComponent*          LandscapeMeshProxyComponent;                       // 0x288(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeMeshProxyActor");
		return Clss;
	}

};

// 0x30 (0x650 - 0x620)
// Class Landscape.LandscapeMeshProxyComponent
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
public:
	struct FGuid                                 LandscapeGuid;                                     // 0x620(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FIntPoint>                     ProxyComponentBases;                               // 0x630(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	int8                                         ProxyLOD;                                          // 0x640(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A40[0xF];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeMeshProxyComponent");
		return Clss;
	}

};

// 0x70 (0xA0 - 0x30)
// Class Landscape.LandscapeSettings
class ULandscapeSettings : public UDeveloperSettings
{
public:
	int32                                        MaxNumberOfLayers;                                 // 0x30(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxComponents;                                     // 0x34(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MaxImageImportCacheSizeMegaBytes;                  // 0x38(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELandscapeDirtyingMode            LandscapeDirtyingMode;                             // 0x3C(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A41[0x3];                                     // Fixing Size After Last Property..
	int32                                        SideResolutionLimit;                               // 0x40(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A42[0x4];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class UMaterialInterface>     DefaultLandscapeMaterial;                          // 0x48(0x28)(Edit, Config, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class ULandscapeLayerInfoObject> DefaultLayerInfoObject;                            // 0x70(0x28)(Edit, Config, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRestrictiveMode;                                  // 0x98(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A43[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeSettings");
		return Clss;
	}

};

// 0x38 (0x5A0 - 0x568)
// Class Landscape.LandscapeSplinesComponent
class ULandscapeSplinesComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeSplineControlPoint*>  ControlPoints;                                     // 0x568(0x10)(ZeroConstructor, Protected, TextExportTransient, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class ULandscapeSplineSegment*>       Segments;                                          // 0x578(0x10)(ZeroConstructor, Protected, TextExportTransient, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UMeshComponent*>                CookedForeignMeshComponents;                       // 0x588(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, TextExportTransient, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A44[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeSplinesComponent");
		return Clss;
	}

	TArray<class USplineMeshComponent*> GetSplineMeshComponents();
};

// 0xB0 (0xD8 - 0x28)
// Class Landscape.LandscapeSplineControlPoint
class ULandscapeSplineControlPoint : public UObject
{
public:
	struct FVector                               Location;                                          // 0x28(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x40(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Width;                                             // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LayerWidthRatio;                                   // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SideFalloff;                                       // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeftSideFalloffFactor;                             // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RightSideFalloffFactor;                            // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeftSideLayerFalloffFactor;                        // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RightSideLayerFalloffFactor;                       // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndFalloff;                                        // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLandscapeSplineConnection>    ConnectedSegments;                                 // 0x78(0x10)(ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic)
	TArray<struct FLandscapeSplineInterpPoint>   Points;                                            // 0x88(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FBox                                  Bounds;                                            // 0x98(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UControlPointMeshComponent*            LocalMeshComponent;                                // 0xD0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeSplineControlPoint");
		return Clss;
	}

};

// 0x90 (0xB8 - 0x28)
// Class Landscape.LandscapeSplineSegment
class ULandscapeSplineSegment : public UObject
{
public:
	struct FLandscapeSplineSegmentConnection     Connections[0x2];                                  // 0x28(0x20)(Edit, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	struct FInterpCurveVector                    SplineInfo;                                        // 0x48(0x18)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FLandscapeSplineInterpPoint>   Points;                                            // 0x60(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FBox                                  Bounds;                                            // 0x70(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<class USplineMeshComponent*>          LocalMeshComponents;                               // 0xA8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, TextExportTransient, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeSplineSegment");
		return Clss;
	}

};

// 0x28 (0x618 - 0x5F0)
// Class Landscape.LandscapeStreamingProxy
class ALandscapeStreamingProxy : public ALandscapeProxy
{
public:
	TSoftObjectPtr<class ALandscape>             LandscapeActorRef;                                 // 0x5F0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeStreamingProxy");
		return Clss;
	}

};

// 0x30 (0x58 - 0x28)
// Class Landscape.LandscapeWeightmapUsage
class ULandscapeWeightmapUsage : public UObject
{
public:
	class ULandscapeComponent*                   ChannelUsage[0x4];                                 // 0x28(0x20)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 LayerGuid;                                         // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeWeightmapUsage");
		return Clss;
	}

};

// 0x10 (0xC0 - 0xB0)
// Class Landscape.MaterialExpressionLandscapeGrassOutput
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FGrassInput>                   GrassTypes;                                        // 0xB0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MaterialExpressionLandscapeGrassOutput");
		return Clss;
	}

};

// 0x10 (0xC0 - 0xB0)
// Class Landscape.MaterialExpressionLandscapeLayerBlend
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:
	TArray<struct FLayerBlendInput>              Layers;                                            // 0xB0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MaterialExpressionLandscapeLayerBlend");
		return Clss;
	}

};

// 0x18 (0xC8 - 0xB0)
// Class Landscape.MaterialExpressionLandscapeLayerCoords
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
public:
	enum class ETerrainCoordMappingType          MappingType;                                       // 0xB0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELandscapeCustomizedCoordType     CustomUVType;                                      // 0xB1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A45[0x2];                                     // Fixing Size After Last Property..
	float                                        MappingScale;                                      // 0xB4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MappingRotation;                                   // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MappingPanU;                                       // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MappingPanV;                                       // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A46[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MaterialExpressionLandscapeLayerCoords");
		return Clss;
	}

};

// 0x8 (0x290 - 0x288)
// Class Landscape.ControlPointMeshActor
class AControlPointMeshActor : public AActor
{
public:
	class UControlPointMeshComponent*            ControlPointMeshComponent;                         // 0x288(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlPointMeshActor");
		return Clss;
	}

};

// 0x0 (0x288 - 0x288)
// Class Landscape.LandscapeBlueprintBrushBase
class ALandscapeBlueprintBrushBase : public AActor
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeBlueprintBrushBase");
		return Clss;
	}

	void RequestLandscapeUpdate(bool bInUserTriggered);
	class UTextureRenderTarget2D* RenderLayer(struct FLandscapeBrushParameters& InParameters);
	class UTextureRenderTarget2D* Render(bool InIsHeightmap, class UTextureRenderTarget2D* InCombinedResult, class FName& InWeightmapLayerName);
	void Initialize(struct FTransform& InLandscapeTransform, struct FIntPoint& InLandscapeSize, struct FIntPoint& InLandscapeRenderTargetSize);
	void GetBlueprintRenderDependencies(TArray<class UObject*>* OutStreamableAssets);
};

// 0x0 (0x28 - 0x28)
// Class Landscape.LandscapeHLODBuilder
class ULandscapeHLODBuilder : public UHLODBuilder
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeHLODBuilder");
		return Clss;
	}

};

// 0x200 (0x228 - 0x28)
// Class Landscape.LandscapeInfo
class ULandscapeInfo : public UObject
{
public:
	TWeakObjectPtr<class ALandscape>             LandscapeActor;                                    // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 LandscapeGuid;                                     // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ComponentSizeQuads;                                // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubsectionSizeQuads;                               // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ComponentNumSubsections;                           // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A49[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               DrawScale;                                         // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A4A[0xB0];                                    // Fixing Size After Last Property..
	TArray<TWeakObjectPtr<class ALandscapeStreamingProxy>> StreamingProxies;                                  // 0x118(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A4B[0x100];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeInfo");
		return Clss;
	}

};

// 0x58 (0x80 - 0x28)
// Class Landscape.LandscapeInfoMap
class ULandscapeInfoMap : public UObject
{
public:
	uint8                                        Pad_1A4C[0x58];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeInfoMap");
		return Clss;
	}

};

// 0x20 (0x640 - 0x620)
// Class Landscape.LandscapeNaniteComponent
class ULandscapeNaniteComponent : public UStaticMeshComponent
{
public:
	struct FGuid                                 ProxyContentId;                                    // 0x620(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bEnabled;                                          // 0x630(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A4D[0xF];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeNaniteComponent");
		return Clss;
	}

};

// 0x18 (0x2A0 - 0x288)
// Class Landscape.LandscapeSplineActor
class ALandscapeSplineActor : public AActor
{
public:
	uint8                                        Pad_1A4E[0x8];                                     // Fixing Size After Last Property..
	struct FGuid                                 LandscapeGuid;                                     // 0x290(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeSplineActor");
		return Clss;
	}

};

// 0x10 (0x298 - 0x288)
// Class Landscape.LandscapeSplineMeshesActor
class ALandscapeSplineMeshesActor : public APartitionActor
{
public:
	TArray<class UStaticMeshComponent*>          StaticMeshComponents;                              // 0x288(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeSplineMeshesActor");
		return Clss;
	}

};

// 0x20 (0x60 - 0x40)
// Class Landscape.LandscapeSubsystem
class ULandscapeSubsystem : public UTickableWorldSubsystem
{
public:
	uint8                                        Pad_1A4F[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeSubsystem");
		return Clss;
	}

};

// 0x38 (0x60 - 0x28)
// Class Landscape.LandscapeTextureStorageProviderFactory
class ULandscapeTextureStorageProviderFactory : public UTextureAllMipDataProviderFactory
{
public:
	uint8                                        Pad_1A50[0x38];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeTextureStorageProviderFactory");
		return Clss;
	}

};

// 0x8 (0xB8 - 0xB0)
// Class Landscape.MaterialExpressionLandscapeLayerSample
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
public:
	class FName                                  ParameterName;                                     // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PreviewWeight;                                     // 0xB4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MaterialExpressionLandscapeLayerSample");
		return Clss;
	}

};

// 0x58 (0x108 - 0xB0)
// Class Landscape.MaterialExpressionLandscapeLayerSwitch
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                      LayerUsed;                                         // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      LayerNotUsed;                                      // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  ParameterName;                                     // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PreviewUsed : 1;                                   // Mask: 0x1, PropSize: 0x10x104(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A51[0x3];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MaterialExpressionLandscapeLayerSwitch");
		return Clss;
	}

};

// 0x70 (0x120 - 0xB0)
// Class Landscape.MaterialExpressionLandscapeLayerWeight
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
public:
	struct FExpressionInput                      Base;                                              // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      Layer;                                             // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  ParameterName;                                     // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PreviewWeight;                                     // 0x104(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ConstBase;                                         // 0x108(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MaterialExpressionLandscapeLayerWeight");
		return Clss;
	}

};

// 0x10 (0xC0 - 0xB0)
// Class Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
class UMaterialExpressionLandscapePhysicalMaterialOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FPhysicalMaterialInput>        Inputs;                                            // 0xB0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MaterialExpressionLandscapePhysicalMaterialOutput");
		return Clss;
	}

};

// 0x0 (0xB0 - 0xB0)
// Class Landscape.MaterialExpressionLandscapeVisibilityMask
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MaterialExpressionLandscapeVisibilityMask");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
