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

// 0x10 (0x38 - 0x28)
// Class Procedural.ProceduralParameterModifier
class UProceduralParameterModifier : public UObject
{
public:
	bool                                         bEnabled;                                          // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86CA[0x3];                                     // Fixing Size After Last Property..
	float                                        Contribution;                                      // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EProceduralParameterModifierBlendMode BlendMode;                                         // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86CB[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralParameterModifier");
		return Clss;
	}

	float GetContribution();
};

// 0x0 (0x38 - 0x38)
// Class Procedural.ProceduralDensityModifier
class UProceduralDensityModifier : public UProceduralParameterModifier
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralDensityModifier");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class Procedural.ProceduralDataMap
class UProceduralDataMap : public UObject
{
public:
	bool                                         bUseRemapCurve;                                    // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86CC[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralDataMap");
		return Clss;
	}

};

// 0x88 (0xB8 - 0x30)
// Class Procedural.ProceduralFloatDataMap
class UProceduralFloatDataMap : public UProceduralDataMap
{
public:
	struct FProceduralRemapFloatCurve            RemapCurve;                                        // 0x30(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralFloatDataMap");
		return Clss;
	}

};

// 0x8 (0xC0 - 0xB8)
// Class Procedural.ProceduralLandscapeLayerMap
class UProceduralLandscapeLayerMap : public UProceduralFloatDataMap
{
public:
	class FName                                  LandscapeLayerName;                                // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LandscapeEditLayerName;                            // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralLandscapeLayerMap");
		return Clss;
	}

};

// 0x0 (0x38 - 0x38)
// Class Procedural.ProceduralRotationModifier
class UProceduralRotationModifier : public UProceduralParameterModifier
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralRotationModifier");
		return Clss;
	}

};

// 0x0 (0x38 - 0x38)
// Class Procedural.ProceduralScaleModifier
class UProceduralScaleModifier : public UProceduralParameterModifier
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralScaleModifier");
		return Clss;
	}

};

// 0x40 (0xF8 - 0xB8)
// Class Procedural.ProceduralTextureFloatMap
class UProceduralTextureFloatMap : public UProceduralFloatDataMap
{
public:
	enum class EProceduralTextureColorChannel    Channel;                                           // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86CD[0x7];                                     // Fixing Size After Last Property..
	struct FProceduralTextureSource              Source;                                            // 0xC0(0x38)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralTextureFloatMap");
		return Clss;
	}

};

// 0x208 (0x238 - 0x30)
// Class Procedural.ProceduralVectorDataMap
class UProceduralVectorDataMap : public UProceduralDataMap
{
public:
	struct FProceduralRemapVectorCurve           RemapCurve;                                        // 0x30(0x208)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralVectorDataMap");
		return Clss;
	}

};

// 0x38 (0x270 - 0x238)
// Class Procedural.ProceduralTextureVectorMap
class UProceduralTextureVectorMap : public UProceduralVectorDataMap
{
public:
	struct FProceduralTextureSource              Source;                                            // 0x238(0x38)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralTextureVectorMap");
		return Clss;
	}

};

// 0x8 (0xC0 - 0xB8)
// Class Procedural.ProceduralVertexColorMap
class UProceduralVertexColorMap : public UProceduralFloatDataMap
{
public:
	enum class EProceduralTextureColorChannel    Channel;                                           // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86CE[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralVertexColorMap");
		return Clss;
	}

};

// 0x1D8 (0x200 - 0x28)
// Class Procedural.HISMBuilderSettings
class UHISMBuilderSettings : public UObject
{
public:
	enum class EComponentMobility                Mobility;                                          // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86CF[0x3];                                     // Fixing Size After Last Property..
	struct FInt32Interval                        CullDistance;                                      // 0x2C(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LODDistanceScale;                                  // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCastShadow : 1;                                   // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectDynamicIndirectLighting : 1;                // Mask: 0x2, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectDistanceFieldLighting : 1;                  // Mask: 0x4, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCastDynamicShadow : 1;                            // Mask: 0x8, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCastStaticShadow : 1;                             // Mask: 0x10, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCastShadowAsTwoSided : 1;                         // Mask: 0x20, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReceivesDecals : 1;                               // Mask: 0x40, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideLightMapRes : 1;                          // Mask: 0x80, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86D0[0x3];                                     // Fixing Size After Last Property..
	int32                                        OverriddenLightMapRes;                             // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELightmapType                     LightmapType;                                      // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86D1[0x3];                                     // Fixing Size After Last Property..
	uint8                                        bUseAsOccluder : 1;                                // Mask: 0x1, PropSize: 0x10x44(0x1)(Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_44B : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_86D2[0x3];                                     // Fixing Size After Last Property..
	struct FBodyInstance                         BodyInstance;                                      // 0x48(0x188)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EHasCustomNavigableGeometry       CustomNavigableGeometry;                           // 0x1D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLightingChannels                     LightingChannels;                                  // 0x1D1(0x1)(Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_86D3[0x2];                                     // Fixing Size After Last Property..
	uint8                                        bRenderCustomDepth : 1;                            // Mask: 0x1, PropSize: 0x10x1D4(0x1)(Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_44C : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_86D4[0x3];                                     // Fixing Size After Last Property..
	enum class ERendererStencilMask              CustomDepthStencilWriteMask;                       // 0x1D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86D5[0x3];                                     // Fixing Size After Last Property..
	int32                                        CustomDepthStencilValue;                           // 0x1DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TranslucencySortPriority;                          // 0x1E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableDensityScaling : 1;                         // Mask: 0x1, PropSize: 0x10x1E4(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_44D : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_86D6[0x3];                                     // Fixing Size After Last Property..
	TArray<class URuntimeVirtualTexture*>        RuntimeVirtualTextures;                            // 0x1E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	int32                                        VirtualTextureCullMips;                            // 0x1F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;                      // 0x1FC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86D7[0x3];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HISMBuilderSettings");
		return Clss;
	}

	void SetOverriddenLightMapRes(int32 Value);
	int32 GetOverriddenLightMapRes();
};

// 0x0 (0x38 - 0x38)
// Class Procedural.ProceduralContentVariationsWeightsModifier
class UProceduralContentVariationsWeightsModifier : public UProceduralParameterModifier
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralContentVariationsWeightsModifier");
		return Clss;
	}

};

// 0x10 (0x48 - 0x38)
// Class Procedural.ProceduralContentVariationsWeightsMapModifier
class UProceduralContentVariationsWeightsMapModifier : public UProceduralContentVariationsWeightsModifier
{
public:
	TArray<struct FProceduralContentVariationMap> VariationsMaps;                                    // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralContentVariationsWeightsMapModifier");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class Procedural.ProceduralGenerator
class UProceduralGenerator : public UObject
{
public:
	struct FProceduralDebugSettings              DebugSettings;                                     // 0x28(0xC)(Edit, BlueprintVisible, Transient, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_86D8[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralGenerator");
		return Clss;
	}

};

// 0x10 (0x48 - 0x38)
// Class Procedural.ProceduralCustomGenerator
class UProceduralCustomGenerator : public UProceduralGenerator
{
public:
	TSubclassOf<class UProceduralGeneratorContext> GeneratorContextClass;                             // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UProceduralGeneratorContext*           GeneratorContext;                                  // 0x40(0x8)(Edit, ZeroConstructor, NoClear, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralCustomGenerator");
		return Clss;
	}

};

// 0x8 (0x40 - 0x38)
// Class Procedural.ProceduralDensityMapModifier
class UProceduralDensityMapModifier : public UProceduralDensityModifier
{
public:
	class UProceduralFloatDataMap*               Map;                                               // 0x38(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralDensityMapModifier");
		return Clss;
	}

};

// 0x10 (0x2D8 - 0x2C8)
// Class Procedural.ProceduralGenerationBlockingVolume
class AProceduralGenerationBlockingVolume : public AVolume
{
public:
	TArray<class AProceduralGenerationVolume*>   BlockedVolumes;                                    // 0x2C8(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralGenerationBlockingVolume");
		return Clss;
	}

};

// 0x30 (0xD0 - 0xA0)
// Class Procedural.ProceduralGenerationComponent
class UProceduralGenerationComponent : public UActorComponent
{
public:
	class UProceduralGenerator*                  Generator;                                         // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowDebugVisualization;                           // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86D9[0x3];                                     // Fixing Size After Last Property..
	struct FGuid                                 ProceduralGenerationGuid;                          // 0xAC(0x10)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_86DA[0x4];                                     // Fixing Size After Last Property..
	class AVolume*                               GenerationVolume;                                  // 0xC0(0x8)(ZeroConstructor, DuplicateTransient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UProceduralGenerationContext*          GenerationContext;                                 // 0xC8(0x8)(ZeroConstructor, DuplicateTransient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralGenerationComponent");
		return Clss;
	}

};

// 0xC8 (0xF0 - 0x28)
// Class Procedural.ProceduralGenerationContext
class UProceduralGenerationContext : public UObject
{
public:
	class UProceduralGeneratorContext*           GeneratorContext;                                  // 0x28(0x8)(ZeroConstructor, DuplicateTransient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UProceduralGeneratorContext*>   GeneratedContexts;                                 // 0x30(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UProceduralGeneratorContext*>   RegisteredContexts;                                // 0x40(0x10)(ZeroConstructor, DuplicateTransient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<struct FGuid, class UProceduralGeneratorContext*> GeneratorContexts;                                 // 0x50(0x50)(DuplicateTransient, Deprecated, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_86DB[0x50];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralGenerationContext");
		return Clss;
	}

	class AVolume* GetGenerationVolume();
	class UProceduralGenerationComponent* GetGenerationComponent();
};

// 0x8 (0x2D0 - 0x2C8)
// Class Procedural.ProceduralGenerationVolume
class AProceduralGenerationVolume : public AVolume
{
public:
	class UProceduralGenerationComponent*        ProceduralComponent;                               // 0x2C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralGenerationVolume");
		return Clss;
	}

	void Generate();
	void ClearGeneratedContent();
};

// 0x30 (0x58 - 0x28)
// Class Procedural.ProceduralGeneratorContext
class UProceduralGeneratorContext : public UObject
{
public:
	class UProceduralGenerator*                  Generator;                                         // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProceduralGenerationContext*          GenerationContext;                                 // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProceduralGeneratorContext*           OwnerContext;                                      // 0x38(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UObject*>                       GeneratedObjects;                                  // 0x40(0x10)(BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UProceduralPointCloud*                 ExportedPointCloud;                                // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralGeneratorContext");
		return Clss;
	}

	bool OnGenerate();
	void OnDrawVisualization();
	void OnClearGeneratedContent();
	void GetOrCreateGeneratorContext(class UProceduralGenerator* Generator, class UProceduralGeneratorContext** Context);
	TArray<class UProceduralGeneratorContext*> GetGeneratedContexts();
	bool Generate();
	void ClearGeneratedContent();
};

// 0x10 (0x48 - 0x38)
// Class Procedural.ProceduralGeneratorStack
class UProceduralGeneratorStack : public UProceduralGenerator
{
public:
	TArray<struct FProceduralGenerationStackElement> Generators;                                        // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralGeneratorStack");
		return Clss;
	}

};

// 0x0 (0x58 - 0x58)
// Class Procedural.ProceduralGeneratorStackContext
class UProceduralGeneratorStackContext : public UProceduralGeneratorContext
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralGeneratorStackContext");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class Procedural.ProceduralPointCloud
class UProceduralPointCloud : public UObject
{
public:
	TArray<struct FProceduralPointCloudPoint>    Points;                                            // 0x28(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralPointCloud");
		return Clss;
	}

	TArray<struct FProceduralPointCloudPoint> GetPointsByTag(class FName InTag);
	void Empty();
};

// 0x28 (0x60 - 0x38)
// Class Procedural.ProceduralRotationMapModifier
class UProceduralRotationMapModifier : public UProceduralRotationModifier
{
public:
	class UProceduralVectorDataMap*              Map;                                               // 0x38(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EProceduralRotationFormat         RotationFormat;                                    // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86DD[0x3];                                     // Fixing Size After Last Property..
	struct FFloatInterval                        Roll;                                              // 0x44(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                        Pitch;                                             // 0x4C(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                        Yaw;                                               // 0x54(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86DE[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralRotationMapModifier");
		return Clss;
	}

	void SetYawMin(float InValue);
	void SetYawMax(float InValue);
	void SetRollMin(float InValue);
	void SetRollMax(float InValue);
	void SetPitchMin(float InValue);
	void SetPitchMax(float InValue);
	float GetYawMin();
	float GetYawMax();
	float GetRollMin();
	float GetRollMax();
	float GetPitchMin();
	float GetPitchMax();
};

// 0x28 (0x60 - 0x38)
// Class Procedural.ProceduralRotationNoiseModifier
class UProceduralRotationNoiseModifier : public UProceduralRotationModifier
{
public:
	uint8                                        bRandomRoll : 1;                                   // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_44E : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_86DF[0x3];                                     // Fixing Size After Last Property..
	struct FFloatInterval                        RandomRoll;                                        // 0x3C(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRandomPitch : 1;                                  // Mask: 0x1, PropSize: 0x10x44(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_44F : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_86E0[0x3];                                     // Fixing Size After Last Property..
	struct FFloatInterval                        RandomPitch;                                       // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRandomYaw : 1;                                    // Mask: 0x1, PropSize: 0x10x50(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_450 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_86E1[0x3];                                     // Fixing Size After Last Property..
	struct FFloatInterval                        RandomYaw;                                         // 0x54(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86E2[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralRotationNoiseModifier");
		return Clss;
	}

	void SetRandomYawMin(float InValue);
	void SetRandomYawMax(float InValue);
	void SetRandomRollMin(float InValue);
	void SetRandomRollMax(float InValue);
	void SetRandomPitchMin(float InValue);
	void SetRandomPitchMax(float InValue);
	float GetRandomYawMin();
	float GetRandomYawMax();
	float GetRandomRollMin();
	float GetRandomRollMax();
	float GetRandomPitchMin();
	float GetRandomPitchMax();
};

// 0x18 (0x50 - 0x38)
// Class Procedural.ProceduralScaleMapModifier
class UProceduralScaleMapModifier : public UProceduralScaleModifier
{
public:
	bool                                         bRemapScale;                                       // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86E3[0x3];                                     // Fixing Size After Last Property..
	struct FFloatInterval                        RemapScale;                                        // 0x3C(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86E4[0x4];                                     // Fixing Size After Last Property..
	class UProceduralFloatDataMap*               Map;                                               // 0x48(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralScaleMapModifier");
		return Clss;
	}

	void SetRemapScaleMin(float InValue);
	void SetRemapScaleMax(float InValue);
	float GetRemapScaleMin();
	float GetRemapScaleMax();
};

// 0x8 (0x40 - 0x38)
// Class Procedural.ProceduralScaleNoiseModifier
class UProceduralScaleNoiseModifier : public UProceduralScaleModifier
{
public:
	struct FFloatInterval                        Scale;                                             // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralScaleNoiseModifier");
		return Clss;
	}

	void SetScaleMin(float InValue);
	void SetScaleMax(float InValue);
	float GetScaleMin();
	float GetScaleMax();
};

// 0xC0 (0xE8 - 0x28)
// Class Procedural.ProceduralScatterContentVariation
class UProceduralScatterContentVariation : public UObject
{
public:
	float                                        Weight;                                            // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EProceduralScatterContentPivotMode PivotMode;                                         // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86E5[0x3];                                     // Fixing Size After Last Property..
	struct FVector                               AdditionalPivotOffset;                             // 0x30(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FootprintBoundingBoxRatio;                         // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86E6[0x4];                                     // Fixing Size After Last Property..
	TArray<class FName>                          SetActorTags;                                      // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_86E7[0x88];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralScatterContentVariation");
		return Clss;
	}

};

// 0x8 (0xF0 - 0xE8)
// Class Procedural.ProceduralScatterActorContentVariation
class UProceduralScatterActorContentVariation : public UProceduralScatterContentVariation
{
public:
	TSubclassOf<class AActor>                    ActorClass;                                        // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralScatterActorContentVariation");
		return Clss;
	}

};

// 0x40 (0x68 - 0x28)
// Class Procedural.ProceduralScatterContentSettings
class UProceduralScatterContentSettings : public UObject
{
public:
	TArray<class FName>                          SetActorTags;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UProceduralScatterContentVariation*> Variations;                                        // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_86E8[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralScatterContentSettings");
		return Clss;
	}

};

// 0x8 (0x70 - 0x68)
// Class Procedural.ProceduralScatterActorContentSettings
class UProceduralScatterActorContentSettings : public UProceduralScatterContentSettings
{
public:
	bool                                         bHideFromWorldOutliner;                            // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86E9[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralScatterActorContentSettings");
		return Clss;
	}

};

// 0xA0 (0xD8 - 0x38)
// Class Procedural.ProceduralScatterGenerator
class UProceduralScatterGenerator : public UProceduralGenerator
{
public:
	enum class EProceduralScatterMethod          ScatterMethod;                                     // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86EA[0x3];                                     // Fixing Size After Last Property..
	struct FProceduralScatterTileSettings        TileSettings;                                      // 0x3C(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        RandomSeed;                                        // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumUniqueSourcePointPatterns;                      // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             GridSize;                                          // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             GridJitter;                                        // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GridRotation;                                      // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86EB[0x4];                                     // Fixing Size After Last Property..
	struct FVector2D                             GridOffset;                                        // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FProceduralScatterSettingsElement> ScatterSettingsElements;                           // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          BlockingActorTags;                                 // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bAllScatterPointsBlocking;                         // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocalDistribution;                                // 0xB1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86EC[0x6];                                     // Fixing Size After Last Property..
	TArray<class FName>                          BlockingScatterPointTags;                          // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FProceduralScatterDebugSettings       ScatterDebugSettings;                              // 0xC8(0xC)(Edit, BlueprintVisible, Transient, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_86ED[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralScatterGenerator");
		return Clss;
	}

};

// 0x328 (0x380 - 0x58)
// Class Procedural.ProceduralScatterGeneratorContext
class UProceduralScatterGeneratorContext : public UProceduralGeneratorContext
{
public:
	struct FScatteredPointCloud                  ScatteredPointCloud;                               // 0x58(0x10)(BlueprintVisible, BlueprintReadOnly, Transient, NonTransactional, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UProceduralScatterGeneratorTile*> UniqueTiles;                                       // 0x68(0x10)(ZeroConstructor, Transient, NonTransactional, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FSourcePointGenerator>         SourcePointGenerators;                             // 0x78(0x10)(ZeroConstructor, Transient, NonTransactional, NativeAccessSpecifierPrivate)
	TArray<struct FProceduralScatterProjectionPoint> ProjectionPointCloud;                              // 0x88(0x10)(ZeroConstructor, Transient, NonTransactional, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UProceduralPointCloud*                 SourcePointCloud;                                  // 0x98(0x8)(ZeroConstructor, Transient, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UProceduralPointCloud*                 BlockerPointCloud;                                 // 0xA0(0x8)(ZeroConstructor, Transient, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*              ProjectionVectorMaterial;                          // 0xA8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_86EE[0x2D0];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralScatterGeneratorContext");
		return Clss;
	}

};

// 0x140 (0x168 - 0x28)
// Class Procedural.ProceduralScatterGeneratorTile
class UProceduralScatterGeneratorTile : public UObject
{
public:
	class UProceduralScatterGenerator*           Generator;                                         // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FProceduralScatter2DPoint>     GeneratedPoints;                                   // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_86EF[0x128];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralScatterGeneratorTile");
		return Clss;
	}

};

// 0x1B0 (0x1D8 - 0x28)
// Class Procedural.ProceduralScatterSettings
class UProceduralScatterSettings : public UObject
{
public:
	class UProceduralScatterContentSettings*     Content;                                           // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bContentVariationsModifiersEnabled : 1;            // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_451 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_86F0[0x7];                                     // Fixing Size After Last Property..
	struct FProceduralContentVariationsModifiers ContentVariationsModifiers;                        // 0x38(0x10)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class FName>                          SetPointTags;                                      // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        CollisionRadius;                                   // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAutomaticCollisionRadius : 1;                     // Mask: 0x1, PropSize: 0x10x5C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseSphericalBoundsForAutomaticCollisionRadius : 1; // Mask: 0x2, PropSize: 0x10x5C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_452 : 6;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_86F1[0x3];                                     // Fixing Size After Last Property..
	float                                        AutomaticCollisionRadiusScaleFactor;               // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DistributionSeed;                                  // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDensityModifiersEnabled : 1;                      // Mask: 0x1, PropSize: 0x10x68(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_453 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_86F2[0x7];                                     // Fixing Size After Last Property..
	struct FProceduralDensityModifiers           DensityModifiers;                                  // 0x70(0x10)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        Density;                                           // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86F3[0x4];                                     // Fixing Size After Last Property..
	TArray<class FName>                          SourcePointTagIncludes;                            // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          SourcePointTagExcludes;                            // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          SourceActorTagIncludes;                            // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          SourceActorTagExcludes;                            // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          SourceComponentTagIncludes;                        // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          SourceComponentTagExcludes;                        // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFloatInterval                        SourcePointDistance;                               // 0xE8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseSourcePointExactNumber : 1;                    // Mask: 0x1, PropSize: 0x10xF0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_454 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_86F4[0x3];                                     // Fixing Size After Last Property..
	int32                                        SourcePointExactNumber;                            // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bScaleModifiersEnabled : 1;                        // Mask: 0x1, PropSize: 0x10xF8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_455 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_86F5[0x7];                                     // Fixing Size After Last Property..
	struct FProceduralScaleModifiers             ScaleModifiers;                                    // 0x100(0x20)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        bRotationModifiersEnabled : 1;                     // Mask: 0x1, PropSize: 0x10x120(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_456 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_86F6[0x7];                                     // Fixing Size After Last Property..
	struct FProceduralRotationModifiers          RotationModifiers;                                 // 0x128(0x10)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        bAlignToNormal : 1;                                // Mask: 0x1, PropSize: 0x10x138(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_457 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_86F7[0x3];                                     // Fixing Size After Last Property..
	float                                        AlignMaxAngle;                                     // 0x13C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FProceduralScatterTargetSurface       TargetSurface;                                     // 0x140(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        bDetectOverhangingLedge : 1;                       // Mask: 0x1, PropSize: 0x10x188(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_458 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_86F8[0x3];                                     // Fixing Size After Last Property..
	int32                                        OverhangingLedgeDetectionRayCount;                 // 0x18C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverhangingLedgeDetectionLength;                   // 0x190(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverhangingLedgeDetectionVerticalThreshold;        // 0x194(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverhangingLedgeDetectionRadiusScale;              // 0x198(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FilterMinimumScale;                                // 0x19C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverlapPriority;                                   // 0x1A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCollisionWithWorld : 1;                           // Mask: 0x1, PropSize: 0x10x1A4(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_459 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_86F9[0x3];                                     // Fixing Size After Last Property..
	struct FVector                               CollisionScale;                                    // 0x1A8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                DebugColor;                                        // 0x1C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86FA[0x14];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralScatterSettings");
		return Clss;
	}

	void SetSourcePointDistanceMin(float InValue);
	void SetSourcePointDistanceMax(float InValue);
	float GetSourcePointDistanceMin();
	float GetSourcePointDistanceMax();
};

// 0x80 (0x168 - 0xE8)
// Class Procedural.ProceduralScatterStaticMeshContentVariation
class UProceduralScatterStaticMeshContentVariation : public UProceduralScatterContentVariation
{
public:
	enum class EProceduralScatterStaticMeshMode  StaticMeshMode;                                    // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86FB[0x7];                                     // Fixing Size After Last Property..
	class UStaticMesh*                           Mesh;                                              // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                    ActorClass;                                        // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            OverrideMaterials;                                 // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic)
	class UHISMBuilderSettings*                  OverrideInstancingSettings;                        // 0x110(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, AdvancedDisplay, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86FC[0x50];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralScatterStaticMeshContentVariation");
		return Clss;
	}

};

// 0x18 (0x80 - 0x68)
// Class Procedural.ProceduralScatterStaticMeshContentSettings
class UProceduralScatterStaticMeshContentSettings : public UProceduralScatterContentSettings
{
public:
	TSubclassOf<class UFoliageInstancedStaticMeshComponent> ComponentClass;                                    // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ComponentTag;                                      // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86FD[0x4];                                     // Fixing Size After Last Property..
	class UHISMBuilderSettings*                  VariationsInstancingSettings;                      // 0x78(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoClear, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralScatterStaticMeshContentSettings");
		return Clss;
	}

};

// 0x10 (0xC8 - 0xB8)
// Class Procedural.ProceduralSurfaceHeightMap
class UProceduralSurfaceHeightMap : public UProceduralFloatDataMap
{
public:
	bool                                         bNormalizedHeight;                                 // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86FE[0x3];                                     // Fixing Size After Last Property..
	struct FFloatInterval                        HeightRange;                                       // 0xBC(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86FF[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralSurfaceHeightMap");
		return Clss;
	}

	void SetHeightRangeMin(float InValue);
	void SetHeightRangeMax(float InValue);
	float GetValue(float InHeight);
	float GetHeightRangeMin();
	float GetHeightRangeMax();
};

// 0x10 (0xC8 - 0xB8)
// Class Procedural.ProceduralSurfaceSlopeAngleMap
class UProceduralSurfaceSlopeAngleMap : public UProceduralFloatDataMap
{
public:
	bool                                         bNormalizedSlopeAngle;                             // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8700[0x3];                                     // Fixing Size After Last Property..
	struct FFloatInterval                        SlopeAngleRange;                                   // 0xBC(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8701[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralSurfaceSlopeAngleMap");
		return Clss;
	}

	void SetSlopeAngleRangeMin(float InValue);
	void SetSlopeAngleRangeMax(float InValue);
	float GetValue(float InSlopeAngle);
	float GetSlopeAngleRangeMin();
	float GetSlopeAngleRangeMax();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
