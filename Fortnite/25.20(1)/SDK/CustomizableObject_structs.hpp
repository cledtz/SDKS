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

enum class EUpdateResult : uint8
{
	Success                        = 0,
	Error                          = 1,
	ErrorOptimized                 = 2,
	ErrorReplaced                  = 3,
	ErrorDiscarded                 = 4,
	EUpdateResult_MAX              = 5,
};

enum class EMutableParameterType : uint8
{
	None                           = 0,
	Bool                           = 1,
	Int                            = 2,
	Float                          = 3,
	Color                          = 4,
	Projector                      = 5,
	Texture                        = 6,
	EMutableParameterType_MAX      = 7,
};

enum class ECustomizableObjectGroupType : uint8
{
	COGT_TOGGLE                    = 0,
	COGT_ALL                       = 1,
	COGT_ONE                       = 2,
	COGT_ONE_OR_NONE               = 3,
	COGT_MAX                       = 4,
};

enum class EMutableCompileMeshType : uint8
{
	Full                           = 0,
	Local                          = 1,
	LocalAndChildren               = 2,
	AddWorkingSetNoChildren        = 3,
	AddWorkingSetAndChildren       = 4,
	EMutableCompileMeshType_MAX    = 5,
};

enum class ECustomizableObjectProjectorType : uint8
{
	Planar                         = 0,
	Cylindrical                    = 1,
	Wrapping                       = 2,
	ECustomizableObjectProjectorType_MAX = 3,
};

enum class ECustomizableObjectRelevancy : uint8
{
	All                            = 0,
	ClientOnly                     = 1,
	ECustomizableObjectRelevancy_MAX = 2,
};

enum class ECustomizableObjectNumBoneInfluences : uint8
{
	Four                           = 4,
	Eight                          = 8,
	Twelve                         = 12,
	ECustomizableObjectNumBoneInfluences_MAX = 13,
};

enum class ECustomizableObjectCompilationState : uint8
{
	None                           = 0,
	InProgress                     = 1,
	Completed                      = 2,
	Failed                         = 3,
	ECustomizableObjectCompilationState_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// ScriptStruct CustomizableObject.UpdateContext
struct FUpdateContext
{
public:
	enum class EUpdateResult                     UpdateResult;                                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CustomizableObject.GeneratedTexture
struct FGeneratedTexture
{
public:
	int32                                        ID;                                                // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1507[0x4];                                     // Fixing Size After Last Property..
	class FString                                Name;                                              // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                              Texture;                                           // 0x18(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CustomizableObject.GeneratedMaterial
struct FGeneratedMaterial
{
public:
	TArray<struct FGeneratedTexture>             Textures;                                          // 0x0(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct CustomizableObject.ReferencedPhysicsAssets
struct FReferencedPhysicsAssets
{
public:
	uint8                                        Pad_1508[0x10];                                    // Fixing Size After Last Property..
	TArray<class UPhysicsAsset*>                 PhysicsAssetsToMerge;                              // 0x10(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_1509[0x10];                                    // Fixing Size After Last Property..
	TArray<class UPhysicsAsset*>                 AdditionalPhysicsAssets;                           // 0x30(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct CustomizableObject.ReferencedSkeletons
struct FReferencedSkeletons
{
public:
	uint8                                        Pad_150A[0x8];                                     // Fixing Size After Last Property..
	TArray<uint16>                               SkeletonIds;                                       // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USkeleton*>                     SkeletonsToMerge;                                  // 0x18(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct CustomizableObject.CustomizableInstanceComponentData
struct FCustomizableInstanceComponentData
{
public:
	uint8                                        Pad_150B[0x8];                                     // Fixing Size After Last Property..
	TMap<class FName, TSoftClassPtr<class UAnimInstance>> AnimSlotToBP;                                      // 0x8(0x50)(Edit, EditFixedSize, Transient, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FReferencedSkeletons                  Skeletons;                                         // 0x58(0x28)(Transient, NativeAccessSpecifierPublic)
	struct FReferencedPhysicsAssets              PhysicsAssets;                                     // 0x80(0x40)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_150C[0x20];                                    // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CustomizableObject.AnimInstanceOverridePhysicsAsset
struct FAnimInstanceOverridePhysicsAsset
{
public:
	int32                                        PropertyIndex;                                     // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_150D[0x4];                                     // Fixing Size After Last Property..
	class UPhysicsAsset*                         PhysicsAsset;                                      // 0x8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CustomizableObject.AnimBpGeneratedPhysicsAssets
struct FAnimBpGeneratedPhysicsAssets
{
public:
	TArray<struct FAnimInstanceOverridePhysicsAsset> AnimInstancePropertyIndexAndPhysicsAssets;         // 0x0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct CustomizableObject.CustomizableObjectClothConfigData
struct FCustomizableObjectClothConfigData
{
public:
	class FString                                ClassPath;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ConfigName;                                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_150E[0x4];                                     // Fixing Size After Last Property..
	TArray<uint8>                                ConfigBytes;                                       // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct CustomizableObject.CustomizableObjectClothingAssetData
struct FCustomizableObjectClothingAssetData
{
public:
	TArray<struct FClothLODDataCommon>           LodData;                                           // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                LodMap;                                            // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          UsedBoneNames;                                     // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                UsedBoneIndices;                                   // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ReferenceBoneIndex;                                // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_150F[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FCustomizableObjectClothConfigData> ConfigsData;                                       // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                PhysicsAssetPath;                                  // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 OriginalAssetGuid;                                 // 0x6C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1510[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CustomizableObject.CustomizableObjectExtensionData
struct FCustomizableObjectExtensionData
{
public:
	struct FInstancedStruct                      Data;                                              // 0x0(0x10)(NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct CustomizableObject.CustomizableObjectBoolParameterValue
struct FCustomizableObjectBoolParameterValue
{
public:
	class FString                                ParameterName;                                     // 0x0(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ParameterValue;                                    // 0x10(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1511[0x7];                                     // Fixing Size After Last Property..
	class FString                                UID;                                               // 0x18(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct CustomizableObject.CustomizableObjectIntParameterValue
struct FCustomizableObjectIntParameterValue
{
public:
	class FString                                ParameterName;                                     // 0x0(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ParameterValueName;                                // 0x10(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UID;                                               // 0x20(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ParameterRangeValueNames;                          // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct CustomizableObject.CustomizableObjectFloatParameterValue
struct FCustomizableObjectFloatParameterValue
{
public:
	class FString                                ParameterName;                                     // 0x0(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ParameterValue;                                    // 0x10(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1512[0x4];                                     // Fixing Size After Last Property..
	class FString                                UID;                                               // 0x18(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                ParameterRangeValues;                              // 0x28(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct CustomizableObject.CustomizableObjectTextureParameterValue
struct FCustomizableObjectTextureParameterValue
{
public:
	class FString                                ParameterName;                                     // 0x0(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ParameterValue;                                    // 0x10(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UID;                                               // 0x20(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ParameterRangeValues;                              // 0x30(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct CustomizableObject.CustomizableObjectVectorParameterValue
struct FCustomizableObjectVectorParameterValue
{
public:
	class FString                                ParameterName;                                     // 0x0(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ParameterValue;                                    // 0x10(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UID;                                               // 0x20(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct CustomizableObject.CustomizableObjectProjector
struct FCustomizableObjectProjector
{
public:
	struct FVector3f                             Position;                                          // 0x0(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector3f                             Direction;                                         // 0xC(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector3f                             Up;                                                // 0x18(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector3f                             Scale;                                             // 0x24(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECustomizableObjectProjectorType  ProjectionType;                                    // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1513[0x3];                                     // Fixing Size After Last Property..
	float                                        Angle;                                             // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct CustomizableObject.CustomizableObjectProjectorParameterValue
struct FCustomizableObjectProjectorParameterValue
{
public:
	class FString                                ParameterName;                                     // 0x0(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCustomizableObjectProjector          Value;                                             // 0x10(0x38)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UID;                                               // 0x48(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableObjectProjector>  RangeValues;                                       // 0x58(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct CustomizableObject.MutableParamUIMetadata
struct FMutableParamUIMetadata
{
public:
	class FString                                ObjectFriendlyName;                                // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UISectionName;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UIOrder;                                           // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1514[0x4];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class UTexture2D>             UIThumbnail;                                       // 0x28(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           ExtraInformation;                                  // 0x50(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<class FString, TSoftObjectPtr<class UObject>> ExtraAssets;                                       // 0xA0(0x50)(Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                        MinimumValue;                                      // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumValue;                                      // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// ScriptStruct CustomizableObject.IntegerParameterUIData
struct FIntegerParameterUIData
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMutableParamUIMetadata               ParamUIMetadata;                                   // 0x10(0xF8)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x178 (0x178 - 0x0)
// ScriptStruct CustomizableObject.ParameterUIData
struct FParameterUIData
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMutableParamUIMetadata               ParamUIMetadata;                                   // 0x10(0xF8)(BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EMutableParameterType             Type;                                              // 0x108(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1515[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FIntegerParameterUIData>       ArrayIntegerParameterOption;                       // 0x110(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ECustomizableObjectGroupType      IntegerParameterGroupType;                         // 0x120(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureCompressionStrategy       TextureCompressionStrategy;                        // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLiveUpdateMode;                                   // 0x122(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReuseInstanceTextures;                            // 0x123(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1516[0x4];                                     // Fixing Size After Last Property..
	TMap<class FString, class FString>           ForcedParameterValues;                             // 0x128(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CustomizableObject.FParameterOptionsTags
struct FFParameterOptionsTags
{
public:
	TArray<class FString>                        Tags;                                              // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct CustomizableObject.ParameterTags
struct FParameterTags
{
public:
	TArray<class FString>                        Tags;                                              // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FString, struct FFParameterOptionsTags> ParameterOptions;                                  // 0x10(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct CustomizableObject.ProfileParameterDat
struct FProfileParameterDat
{
public:
	class FString                                ProfileName;                                       // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableObjectBoolParameterValue> BoolParameters;                                    // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableObjectIntParameterValue> IntParameters;                                     // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableObjectFloatParameterValue> FloatParameters;                                   // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableObjectTextureParameterValue> TextureParameters;                                 // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableObjectVectorParameterValue> VectorParameters;                                  // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableObjectProjectorParameterValue> ProjectorParameters;                               // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct CustomizableObject.CompilationOptions
struct FCompilationOptions
{
public:
	bool                                         bTextureCompression;                               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1517[0x3];                                     // Fixing Size After Last Property..
	int32                                        OptimizationLevel;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseDiskCompilation;                               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1518[0x27];                                    // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CustomizableObject.MutableModelImageProperties
struct FMutableModelImageProperties
{
public:
	class FString                                TextureParameterName;                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureFilter                    Filter;                                            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1519[0x3];                                     // Fixing Size After Last Property..
	uint8                                        SRGB : 1;                                          // Mask: 0x1, PropSize: 0x10x14(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        FlipGreenChannel : 1;                              // Mask: 0x2, PropSize: 0x10x14(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_198 : 6;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_151A[0x3];                                     // Fixing Size After Last Property..
	int32                                        LODBias;                                           // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureGroup                     LODGroup;                                          // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureAddress                   AddressX;                                          // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureAddress                   AddressY;                                          // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_151B[0x1];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CustomizableObject.MutableModelParameterValue
struct FMutableModelParameterValue
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_151C[0x4];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// ScriptStruct CustomizableObject.MutableModelParameterProperties
struct FMutableModelParameterProperties
{
public:
	uint8                                        Pad_151D[0x10];                                    // Fixing Size After Last Property..
	enum class EMutableParameterType             Type;                                              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_151E[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FMutableModelParameterValue>   PossibleValues;                                    // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CustomizableObject.MaskOutTexture
struct FMaskOutTexture
{
public:
	int32                                        SizeX;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        SizeY;                                             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<uint32>                               Data;                                              // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct CustomizableObject.AnimBpOverridePhysicsAssetsInfo
struct FAnimBpOverridePhysicsAssetsInfo
{
public:
	TSoftClassPtr<class UAnimInstance>           AnimInstanceClass;                                 // 0x0(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPhysicsAsset>          SourceAsset;                                       // 0x28(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PropertyIndex;                                     // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_151F[0x4];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CustomizableObject.MorphTargetInfo
struct FMorphTargetInfo
{
public:
	class FName                                  Name;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LodNum;                                            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CustomizableObject.MorphTargetVertexData
struct FMorphTargetVertexData
{
public:
	struct FVector3f                             PositionDelta;                                     // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector3f                             TangentZDelta;                                     // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MorphIndex;                                        // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1520[0x4];                                     // Fixing Size Of Struct..
};

// 0x40 (0x40 - 0x0)
// ScriptStruct CustomizableObject.CustomizableObjectMeshToMeshVertData
struct FCustomizableObjectMeshToMeshVertData
{
public:
	float                                        PositionBaryCoordsAndDist[0x4];                    // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalBaryCoordsAndDist[0x4];                      // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TangentBaryCoordsAndDist[0x4];                     // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       SourceMeshVertIndices[0x4];                        // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        SourceAssetIndex;                                  // 0x3C(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        SourceAssetLodIndex;                               // 0x3E(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CustomizableObject.MutableSkinWeightProfileInfo
struct FMutableSkinWeightProfileInfo
{
public:
	class FName                                  Name;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DefaultProfile;                                    // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         DefaultProfileFromLODIndex;                        // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1521[0x2];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CustomizableObject.MutableStreamableBlock
struct FMutableStreamableBlock
{
public:
	uint16                                       FileIndex;                                         // 0x0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1522[0x6];                                     // Fixing Size After Last Property..
	uint64                                       Offset;                                            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       Size;                                              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1523[0x4];                                     // Fixing Size Of Struct..
};

// 0xC (0xC - 0x0)
// ScriptStruct CustomizableObject.MutableRefLODInfo
struct FMutableRefLODInfo
{
public:
	float                                        ScreenSize;                                        // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LODHysteresis;                                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSupportUniformlyDistributedSampling;              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowCPUAccess;                                   // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1524[0x2];                                     // Fixing Size Of Struct..
};

// 0x2 (0x2 - 0x0)
// ScriptStruct CustomizableObject.MutableRefLODRenderData
struct FMutableRefLODRenderData
{
public:
	bool                                         bIsLODOptional;                                    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStreamedDataInlined;                              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CustomizableObject.MutableRefLODData
struct FMutableRefLODData
{
public:
	struct FMutableRefLODInfo                    LODInfo;                                           // 0x0(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	struct FMutableRefLODRenderData              RenderData;                                        // 0xC(0x2)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1525[0x2];                                     // Fixing Size Of Struct..
};

// 0x58 (0x58 - 0x0)
// ScriptStruct CustomizableObject.MutableRefSocket
struct FMutableRefSocket
{
public:
	class FName                                  SocketName;                                        // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RelativeLocation;                                  // 0x8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RelativeRotation;                                  // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               RelativeScale;                                     // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceAlwaysAnimated;                              // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1526[0x3];                                     // Fixing Size After Last Property..
	int32                                        Priority;                                          // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CustomizableObject.MutableRefSkeletalMeshSettings
struct FMutableRefSkeletalMeshSettings
{
public:
	bool                                         bEnablePerPolyCollision;                           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1527[0x3];                                     // Fixing Size After Last Property..
	float                                        DefaultUVChannelDensity;                           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CustomizableObject.MutableRefAssetUserData
struct FMutableRefAssetUserData
{
public:
	class UAssetUserData*                        AssetUserData;                                     // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// ScriptStruct CustomizableObject.MutableRefSkeletalMeshData
struct FMutableRefSkeletalMeshData
{
public:
	class USkeletalMesh*                         SkeletalMesh;                                      // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       SkeletalMeshAssetPath;                             // 0x8(0x18)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMutableRefLODData>            LodData;                                           // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMutableRefSocket>             Sockets;                                           // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBoxSphereBounds                      Bounds;                                            // 0x40(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMutableRefSkeletalMeshSettings       Settings;                                          // 0x78(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeleton>              Skeleton;                                          // 0x80(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPhysicsAsset>          PhysicsAsset;                                      // 0xA8(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UAnimInstance>           PostProcessAnimInst;                               // 0xD0(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPhysicsAsset>          ShadowPhysicsAsset;                                // 0xF8(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMutableRefAssetUserData>      AssetUserData;                                     // 0x120(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CustomizableObject.MutableLODSettings
struct FMutableLODSettings
{
public:
	int32                                        NumLODsInRoot;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FirstLODAvailable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLODStreamingEnabled;                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1528[0x3];                                     // Fixing Size After Last Property..
	uint32                                       NumLODsToStream;                                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CustomizableObject.CustomizableObjectIdPair
struct FCustomizableObjectIdPair
{
public:
	class FString                                CustomizableObjectGroupName;                       // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CustomizableObjectName;                            // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct CustomizableObject.CustomizableObjectIdentifier
struct FCustomizableObjectIdentifier
{
public:
	class FString                                CustomizableObjectGroupName;                       // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                CustomizableObjectName;                            // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                Guid;                                              // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct CustomizableObject.MultilayerProjectorLayer
struct FMultilayerProjectorLayer
{
public:
	uint8                                        Pad_1529[0x80];                                    // Fixing Size Of Struct..
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct CustomizableObject.MultilayerProjector
struct FMultilayerProjector
{
public:
	class FName                                  ParamName;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_152A[0x4];                                     // Fixing Size After Last Property..
	TMap<class FName, int32>                     VirtualLayersMapping;                              // 0x8(0x50)(NativeAccessSpecifierPrivate)
	TMap<class FName, int32>                     VirtualLayersOrder;                                // 0x58(0x50)(NativeAccessSpecifierPrivate)
	TMap<class FName, struct FMultilayerProjectorLayer> DisableVirtualLayers;                              // 0xA8(0x50)(NativeAccessSpecifierPrivate)
};

// 0x128 (0x128 - 0x0)
// ScriptStruct CustomizableObject.CustomizableObjectInstanceDescriptor
struct FCustomizableObjectInstanceDescriptor
{
public:
	class UCustomizableObject*                   CustomizableObject;                                // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FCustomizableObjectBoolParameterValue> BoolParameters;                                    // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FCustomizableObjectIntParameterValue> IntParameters;                                     // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FCustomizableObjectFloatParameterValue> FloatParameters;                                   // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FCustomizableObjectTextureParameterValue> TextureParameters;                                 // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FCustomizableObjectVectorParameterValue> VectorParameters;                                  // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FCustomizableObjectProjectorParameterValue> ProjectorParameters;                               // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_152B[0x70];                                    // Fixing Size After Last Property..
	TMap<class FName, struct FMultilayerProjector> MultilayerProjectors;                              // 0xD8(0x50)(NativeAccessSpecifierPrivate)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct CustomizableObject.CustomizableObjectStreamedExtensionData
struct FCustomizableObjectStreamedExtensionData
{
public:
	TSoftObjectPtr<class UCustomizableObjectExtensionDataContainer> ContainerPath;                                     // 0x0(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCustomizableObjectExtensionDataContainer* Container;                                         // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CustomizableObject.PendingReleaseSkeletalMeshInfo
struct FPendingReleaseSkeletalMeshInfo
{
public:
	class USkeletalMesh*                         SkeletalMesh;                                      // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Timestamp;                                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x88 - 0x80)
// ScriptStruct CustomizableObject.MultilayerProjectorVirtualLayer
struct FMultilayerProjectorVirtualLayer : public FMultilayerProjectorLayer
{
public:
	uint8                                        Pad_152C[0x8];                                     // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
