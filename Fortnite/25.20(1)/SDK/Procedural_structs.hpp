#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EProceduralParameterModifierBlendMode : uint8
{
	Min                            = 0,
	Max                            = 1,
	Additive                       = 2,
	Subtractive                    = 3,
	Multiply                       = 4,
	Interpolate                    = 5,
};

enum class EProceduralRotationFormat : uint8
{
	VectorXAxis                    = 0,
	VectorXAxisNegative            = 1,
	VectorYAxis                    = 2,
	VectorYAxisNegative            = 3,
	VectorZAxis                    = 4,
	VectorZAxisNegative            = 5,
	Vector2DXAxis                  = 6,
	Vector2DXAxisNegative          = 7,
	Vector2DYAxis                  = 8,
	Vector2DYAxisNegative          = 9,
	Vector2DZAxis                  = 10,
	Vector2DZAxisNegative          = 11,
	RangedRotator                  = 12,
	EProceduralRotationFormat_MAX  = 13,
};

enum class EProceduralTextureColorChannel : uint8
{
	Red                            = 0,
	Green                          = 1,
	Blue                           = 2,
	Alpha                          = 3,
	EProceduralTextureColorChannel_MAX = 4,
};

enum class EProceduralScatterContentPivotMode : uint8
{
	UsePivot                       = 0,
	UseBoundingBoxCenter           = 1,
	UseBoundingBoxBottomCenter     = 2,
	UseFootprintBoundingBoxBottomCenter = 3,
	EProceduralScatterContentPivotMode_MAX = 4,
};

enum class EProceduralScatterTileRandomGenerator : uint8
{
	PseudoRandom                   = 0,
	HaltonSequence                 = 1,
	EProceduralScatterTileRandomGenerator_MAX = 2,
};

enum class EProceduralScatterMethod : uint8
{
	Density                        = 0,
	SourcePoints                   = 1,
	Grid                           = 2,
	EProceduralScatterMethod_MAX   = 3,
};

enum class EProceduralScatterStaticMeshMode : uint8
{
	FromStaticMesh                 = 0,
	FromActor                      = 1,
	EProceduralScatterStaticMeshMode_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0xB0 - 0x0)
// ScriptStruct Procedural.ProceduralPointCloudPoint
struct FProceduralPointCloudPoint
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SurfaceNormal;                                     // 0x60(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               SurfaceObject;                                     // 0x78(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Object;                                            // 0x80(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ObjectVariation;                                   // 0x88(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_860D[0x4];                                     // Fixing Size After Last Property..
	TArray<class FName>                          Tags;                                              // 0x90(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        CollisionRadius;                                   // 0xA0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourcePointGeneratorIndex;                         // 0xA4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_860E[0x8];                                     // Fixing Size Of Struct..
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Procedural.ProceduralHitPoint
struct FProceduralHitPoint
{
public:
	bool                                         bIsTraceDone;                                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_860F[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               Position;                                          // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Normal;                                            // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UPrimitiveComponent>    Component;                                         // 0x38(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct Procedural.ProceduralScatterPoint
struct FProceduralScatterPoint
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8610[0x4];                                     // Fixing Size After Last Property..
	class UProceduralScatterSettings*            ScatterSettings;                                   // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VariationIdx;                                      // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8611[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               GenerationLocation;                                // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FProceduralHitPoint                   HitPoint;                                          // 0x60(0x40)(BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct Procedural.ProceduralScatterProjectionPoint
struct FProceduralScatterProjectionPoint
{
public:
	struct FVector                               GenerationLocation;                                // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8612[0x4];                                     // Fixing Size After Last Property..
	class UProceduralScatterSettings*            ScatterSettings;                                   // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VariationIdx;                                      // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8613[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               StartTrace;                                        // 0x48(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EndTrace;                                          // 0x60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FProceduralHitPoint                   HitPoint;                                          // 0x78(0x40)(NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_8614[0x8];                                     // Fixing Size Of Struct..
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Procedural.ProceduralTextureSource
struct FProceduralTextureSource
{
public:
	bool                                         bUseRenderTarget;                                  // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8615[0x7];                                     // Fixing Size After Last Property..
	class UTexture2D*                            Texture;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    RenderTargetMaterial;                              // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStretchToFit;                                     // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8616[0x3];                                     // Fixing Size After Last Property..
	float                                        TexelSize;                                         // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        XOffset;                                           // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YOffset;                                           // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Rotation;                                          // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8617[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Procedural.ProceduralContentVariationMap
struct FProceduralContentVariationMap
{
public:
	int32                                        VariationIndex;                                    // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8618[0x4];                                     // Fixing Size After Last Property..
	class UProceduralFloatDataMap*               Map;                                               // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8619[0x4];                                     // Fixing Size Of Struct..
};

// 0x88 (0x88 - 0x0)
// ScriptStruct Procedural.ProceduralRemapFloatCurve
struct FProceduralRemapFloatCurve
{
public:
	struct FRuntimeFloatCurve                    RemapCurve;                                        // 0x0(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x208 (0x208 - 0x0)
// ScriptStruct Procedural.ProceduralRemapVectorCurve
struct FProceduralRemapVectorCurve
{
public:
	struct FRuntimeCurveLinearColor              RemapCurve;                                        // 0x0(0x208)(Edit, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Procedural.ProceduralDebugSettings
struct FProceduralDebugSettings
{
public:
	bool                                         bShowDebugPointCloud;                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_861A[0x3];                                     // Fixing Size After Last Property..
	struct FColor                                DebugPointColor;                                   // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugCullingDistance;                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Procedural.ProceduralGenerationStackElement
struct FProceduralGenerationStackElement
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_861B[0x7];                                     // Fixing Size After Last Property..
	class UProceduralGenerator*                  Generator;                                         // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Procedural.ProceduralScatter2DPoint
struct FProceduralScatter2DPoint
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_861C[0x4];                                     // Fixing Size After Last Property..
	class UProceduralScatterSettings*            ScatterSettings;                                   // 0x20(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox2D                                MaxAABB;                                           // 0x28(0x28)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        CollisionRadius;                                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlocker;                                          // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_861D[0x3];                                     // Fixing Size After Last Property..
	int32                                        RandomNumber;                                      // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_861E[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Procedural.ProceduralScatterSettingsElement
struct FProceduralScatterSettingsElement
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_861F[0x7];                                     // Fixing Size After Last Property..
	class UProceduralScatterSettings*            ScatterSettings;                                   // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxPoints;                                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8620[0x4];                                     // Fixing Size Of Struct..
};

// 0xC (0xC - 0x0)
// ScriptStruct Procedural.ProceduralScatterDebugSettings
struct FProceduralScatterDebugSettings
{
public:
	bool                                         bShowDebugPlane;                                   // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowDebugTrace;                                   // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowDebugFootprint;                               // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowDebugHitNormal;                               // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowDebugPoints;                                  // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowDebugPivots;                                  // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8621[0x2];                                     // Fixing Size After Last Property..
	float                                        DebugMaxCullingDistance;                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Procedural.ProceduralScatterTileSettings
struct FProceduralScatterTileSettings
{
public:
	int32                                        NumUniqueTiles;                                    // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TileSize;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TileOverlapPercentage;                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumQuadTreeSize;                               // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EProceduralScatterTileRandomGenerator RandomGenerator;                                   // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8622[0x3];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Procedural.SourcePointGenerator
struct FSourcePointGenerator
{
public:
	uint8                                        Pad_8623[0x18];                                    // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Procedural.ScatteredPointCloud
struct FScatteredPointCloud
{
public:
	TArray<struct FProceduralScatterPoint>       Points;                                            // 0x0(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Procedural.ProceduralScatterTargetSurface
struct FProceduralScatterTargetSurface
{
public:
	bool                                         bAllowLandscape;                                   // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowBSP;                                         // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowStaticMesh;                                  // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowTranslucent;                                 // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8624[0x4];                                     // Fixing Size After Last Property..
	TArray<class FName>                          AllowedActorTags;                                  // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<class FName>                          DisallowedActorTags;                               // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<class FName>                          AllowedComponentTags;                              // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<class FName>                          DisallowedComponentTags;                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Procedural.ProceduralContentVariationsModifiers
struct FProceduralContentVariationsModifiers
{
public:
	TArray<class UProceduralContentVariationsWeightsModifier*> Modifiers;                                         // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Procedural.ProceduralDensityModifiers
struct FProceduralDensityModifiers
{
public:
	TArray<class UProceduralDensityModifier*>    Modifiers;                                         // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Procedural.ProceduralScaleModifiers
struct FProceduralScaleModifiers
{
public:
	bool                                         bRandomScaleEnabled;                               // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8625[0x3];                                     // Fixing Size After Last Property..
	struct FFloatInterval                        RandomScale;                                       // 0x4(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8626[0x4];                                     // Fixing Size After Last Property..
	TArray<class UProceduralScaleModifier*>      Modifiers;                                         // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Procedural.ProceduralRotationModifiers
struct FProceduralRotationModifiers
{
public:
	TArray<class UProceduralRotationModifier*>   Modifiers;                                         // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
