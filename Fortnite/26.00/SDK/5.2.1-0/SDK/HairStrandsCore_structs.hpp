#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EOptimusGroomExecDomain : uint8
{
	None                           = 0,
	ControlPoint                   = 1,
	Curve                          = 2,
	EOptimusGroomExecDomain_MAX    = 3,
};

enum class EGroomCacheImportType : uint8
{
	None                           = 0,
	Strands                        = 1,
	Guides                         = 2,
	All                            = 3,
	EGroomCacheImportType_MAX      = 4,
};

enum class EHairAtlasTextureType : uint8
{
	Depth                          = 0,
	Tangent                        = 1,
	Attribute                      = 2,
	Coverage                       = 3,
	AuxilaryData                   = 4,
	Material                       = 5,
	EHairAtlasTextureType_MAX      = 6,
};

enum class EHairCardsClusterType : uint8
{
	Low                            = 0,
	High                           = 1,
	EHairCardsClusterType_MAX      = 2,
};

enum class EHairCardsGenerationType : uint8
{
	CardsCount                     = 0,
	UseGuides                      = 1,
	EHairCardsGenerationType_MAX   = 2,
};

enum class EHairCardsSourceType : uint8
{
	Procedural                     = 0,
	Imported                       = 1,
	EHairCardsSourceType_MAX       = 2,
};

enum class EHairInterpolationQuality : uint8
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Unknown                        = 3,
	EHairInterpolationQuality_MAX  = 4,
};

enum class EHairInterpolationWeight : uint8
{
	Parametric                     = 0,
	Root                           = 1,
	Index                          = 2,
	Distance                       = 3,
	Unknown                        = 4,
	EHairInterpolationWeight_MAX   = 5,
};

enum class EGroomGeometryType : uint8
{
	Strands                        = 0,
	Cards                          = 1,
	Meshes                         = 2,
	EGroomGeometryType_MAX         = 3,
};

enum class EGroomBindingType : uint8
{
	NoneBinding                    = 0,
	Rigid                          = 1,
	Skinning                       = 2,
	EGroomBindingType_MAX          = 3,
};

enum class EGroomOverrideType : uint8
{
	Auto                           = 0,
	Enable                         = 1,
	Disable                        = 2,
	EGroomOverrideType_MAX         = 3,
};

enum class EGroomNiagaraSolvers : uint8
{
	None                           = 0,
	CosseratRods                   = 2,
	AngularSprings                 = 4,
	CustomSolver                   = 8,
	EGroomNiagaraSolvers_MAX       = 9,
};

enum class EGroomStrandsSize : uint8
{
	None                           = 0,
	Size2                          = 2,
	Size4                          = 4,
	Size8                          = 8,
	Size16                         = 16,
	Size32                         = 32,
	EGroomStrandsSize_MAX          = 33,
};

enum class EGroomInterpolationType : uint8
{
	None                           = 0,
	RigidTransform                 = 2,
	OffsetTransform                = 4,
	SmoothTransform                = 8,
	EGroomInterpolationType_MAX    = 9,
};

enum class EGroomBindingMeshType : uint8
{
	SkeletalMesh                   = 0,
	GeometryCache                  = 1,
	EGroomBindingMeshType_MAX      = 2,
};

enum class EGroomCacheAttributes : uint8
{
	None                           = 0,
	Position                       = 1,
	Width                          = 2,
	Color                          = 4,
	PositionWidth                  = 3,
	PositionColor                  = 5,
	WidthColor                     = 5,
	PositionWidthColor             = 7,
	EGroomCacheAttributes_MAX      = 8,
};

enum class EGroomCacheType : uint8
{
	None                           = 0,
	Strands                        = 1,
	Guides                         = 2,
	EGroomCacheType_MAX            = 3,
};

enum class EGroomBasisType : uint8
{
	NoBasis                        = 0,
	BezierBasis                    = 1,
	BsplineBasis                   = 2,
	CatmullromBasis                = 3,
	HermiteBasis                   = 4,
	PowerBasis                     = 5,
	EGroomBasisType_MAX            = 6,
};

enum class EGroomCurveType : uint8
{
	Cubic                          = 0,
	Linear                         = 1,
	VariableOrder                  = 2,
	EGroomCurveType_MAX            = 3,
};

enum class EFollicleMaskChannel : uint8
{
	R                              = 0,
	G                              = 1,
	B                              = 2,
	A                              = 3,
	EFollicleMaskChannel_MAX       = 4,
};

enum class EStrandsTexturesTraceType : uint8
{
	TraceInside                    = 0,
	TraceOuside                    = 1,
	TraceBidirectional             = 2,
	EStrandsTexturesTraceType_MAX  = 3,
};

enum class EStrandsTexturesMeshType : uint8
{
	Static                         = 0,
	Skeletal                       = 1,
	EStrandsTexturesMeshType_MAX   = 2,
};

enum class EGroomInterpolationQuality : uint8
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Unknown                        = 3,
	EGroomInterpolationQuality_MAX = 4,
};

enum class EGroomInterpolationWeight : uint8
{
	Parametric                     = 0,
	Root                           = 1,
	Index                          = 2,
	Unknown                        = 3,
	EGroomInterpolationWeight_MAX  = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct HairStrandsCore.GroomConversionSettings
struct FGroomConversionSettings
{
public:
	struct FVector                               Rotation;                                          // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct HairStrandsCore.GroomCacheImportSettings
struct FGroomCacheImportSettings
{
public:
	bool                                         bImportGroomCache;                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGroomCacheImportType             ImportType;                                        // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_773[0x2];                                      // Fixing Size After Last Property 
	int32                                        FrameStart;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameEnd;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipEmptyFrames;                                  // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImportGroomAsset;                                 // 0xD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_776[0x2];                                      // Fixing Size After Last Property 
	struct FSoftObjectPath                       GroomAsset;                                        // 0x10(0x20)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideConversionSettings;                       // 0x30(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_779[0x7];                                      // Fixing Size After Last Property 
	struct FGroomConversionSettings              ConversionSettings;                                // 0x38(0x30)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupDesc
struct FHairGroupDesc
{
public:
	float                                        HairLength;                                        // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HairWidth;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HairWidth_Override;                                // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_77C[0x3];                                      // Fixing Size After Last Property 
	float                                        HairRootScale;                                     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HairRootScale_Override;                            // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_77F[0x3];                                      // Fixing Size After Last Property 
	float                                        HairTipScale;                                      // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HairTipScale_Override;                             // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_781[0x3];                                      // Fixing Size After Last Property 
	float                                        HairShadowDensity;                                 // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HairShadowDensity_Override;                        // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_784[0x3];                                      // Fixing Size After Last Property 
	float                                        HairRaytracingRadiusScale;                         // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HairRaytracingRadiusScale_Override;                // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseHairRaytracingGeometry;                        // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseHairRaytracingGeometry_Override;               // 0x2A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_786[0x1];                                      // Fixing Size After Last Property 
	float                                        LODBias;                                           // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseStableRasterization;                           // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseStableRasterization_Override;                  // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScatterSceneLighting;                             // 0x32(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScatterSceneLighting_Override;                    // 0x33(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSupportVoxelization;                              // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSupportVoxelization_Override;                     // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_78C[0x2];                                      // Fixing Size After Last Property 
	float                                        HairLengthScale;                                   // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HairLengthScale_Override;                          // 0x3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_78D[0x3];                                      // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupInfo
struct FHairGroupInfo
{
public:
	int32                                        GroupID;                                           // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  GroupName;                                         // 0x4(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumCurves;                                         // 0xC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumGuides;                                         // 0x10(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumCurveVertices;                                  // 0x14(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumGuideVertices;                                  // 0x18(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxCurveLength;                                    // 0x1C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxImportedWidth;                                  // 0x20(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GroupCardsID;                                      // 0x24(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupsMaterial
struct FHairGroupsMaterial
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotName;                                          // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x2C - 0x28)
// ScriptStruct HairStrandsCore.HairGroupInfoWithVisibility
struct FHairGroupInfoWithVisibility : public FHairGroupInfo
{
public:
	bool                                         bIsVisible;                                        // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_790[0x3];                                      // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct HairStrandsCore.HairCardsClusterSettings
struct FHairCardsClusterSettings
{
public:
	float                                        ClusterDecimation;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHairCardsClusterType             Type;                                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseGuide;                                         // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_793[0x2];                                      // Fixing Size Of Struct
};

// 0x1C (0x1C - 0x0)
// ScriptStruct HairStrandsCore.HairCardsGeometrySettings
struct FHairCardsGeometrySettings
{
public:
	enum class EHairCardsGenerationType          GenerationType;                                    // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_795[0x3];                                      // Fixing Size After Last Property 
	int32                                        CardsCount;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHairCardsClusterType             ClusterType;                                       // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_797[0x3];                                      // Fixing Size After Last Property 
	float                                        MinSegmentLength;                                  // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularThreshold;                                  // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinCardsLength;                                    // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxCardsLength;                                    // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct HairStrandsCore.HairCardsTextureSettings
struct FHairCardsTextureSettings
{
public:
	int32                                        AtlasMaxResolution;                                // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PixelPerCentimeters;                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LengthTextureCount;                                // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DensityTextureCount;                               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupsProceduralCards
struct FHairGroupsProceduralCards
{
public:
	struct FHairCardsClusterSettings             ClusterSettings;                                   // 0x0(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	struct FHairCardsGeometrySettings            GeometrySettings;                                  // 0x8(0x1C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHairCardsTextureSettings             TextureSettings;                                   // 0x24(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupCardsInfo
struct FHairGroupCardsInfo
{
public:
	int32                                        NumCards;                                          // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumCardVertices;                                   // 0x4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupCardsTextures
struct FHairGroupCardsTextures
{
public:
	class UTexture2D*                            DepthTexture;                                      // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            CoverageTexture;                                   // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            TangentTexture;                                    // 0x10(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            AttributeTexture;                                  // 0x18(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            AuxilaryDataTexture;                               // 0x20(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            MaterialTexture;                                   // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C0[0x8];                                      // Fixing Size Of Struct
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupsCardsSourceDescription
struct FHairGroupsCardsSourceDescription
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MaterialSlotName;                                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHairCardsSourceType              SourceType;                                        // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C4[0x7];                                      // Fixing Size After Last Property 
	class UStaticMesh*                           ProceduralMesh;                                    // 0x18(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProceduralMeshKey;                                 // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           ImportedMesh;                                      // 0x30(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHairGroupsProceduralCards            ProceduralSettings;                                // 0x38(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHairGroupCardsTextures               Textures;                                          // 0x70(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        GroupIndex;                                        // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LODIndex;                                          // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHairGroupCardsInfo                   CardsInfo;                                         // 0xB0(0x8)(Edit, Transient, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                ImportedMeshKey;                                   // 0xB8(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct HairStrandsCore.HairLODSettings
struct FHairLODSettings
{
public:
	float                                        CurveDecimation;                                   // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VertexDecimation;                                  // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularThreshold;                                  // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScreenSize;                                        // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThicknessScale;                                    // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisible;                                          // 0x14(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGroomGeometryType                GeometryType;                                      // 0x15(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGroomBindingType                 BindingType;                                       // 0x16(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGroomOverrideType                Simulation;                                        // 0x17(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGroomOverrideType                GlobalInterpolation;                               // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C2[0x3];                                      // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct HairStrandsCore.HairDecimationSettings
struct FHairDecimationSettings
{
public:
	float                                        CurveDecimation;                                   // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VertexDecimation;                                  // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct HairStrandsCore.HairInterpolationSettings
struct FHairInterpolationSettings
{
public:
	bool                                         bOverrideGuides;                                   // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C3[0x3];                                      // Fixing Size After Last Property 
	float                                        HairToGuideDensity;                                // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHairInterpolationQuality         InterpolationQuality;                              // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHairInterpolationWeight          InterpolationDistance;                             // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRandomizeGuide;                                   // 0xA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseUniqueGuide;                                   // 0xB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct HairStrandsCore.HairDeformationSettings
struct FHairDeformationSettings
{
public:
	bool                                         bCanEditRigging;                                   // 0x0(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableRigging;                                    // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C4[0x2];                                      // Fixing Size After Last Property 
	int32                                        NumCurves;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumPoints;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupsInterpolation
struct FHairGroupsInterpolation
{
public:
	struct FHairDecimationSettings               DecimationSettings;                                // 0x0(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHairInterpolationSettings            InterpolationSettings;                             // 0x8(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHairDeformationSettings              RiggingSettings;                                   // 0x14(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupsLOD
struct FHairGroupsLOD
{
public:
	TArray<struct FHairLODSettings>              LODs;                                              // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        ClusterWorldSize;                                  // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClusterScreenSizeScale;                            // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupsMeshesSourceDescription
struct FHairGroupsMeshesSourceDescription
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MaterialSlotName;                                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           ImportedMesh;                                      // 0x10(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHairGroupCardsTextures               Textures;                                          // 0x18(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        GroupIndex;                                        // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LODIndex;                                          // 0x54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ImportedMeshKey;                                   // 0x58(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct HairStrandsCore.HairSolverSettings
struct FHairSolverSettings
{
public:
	bool                                         EnableSimulation;                                  // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGroomNiagaraSolvers              NiagaraSolver;                                     // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C9[0x6];                                      // Fixing Size After Last Property 
	TSoftObjectPtr<class UNiagaraSystem>         CustomSystem;                                      // 0x8(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GravityPreloading;                                 // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubSteps;                                          // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IterationCount;                                    // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8CA[0x4];                                      // Fixing Size Of Struct
};

// 0x38 (0x38 - 0x0)
// ScriptStruct HairStrandsCore.HairExternalForces
struct FHairExternalForces
{
public:
	struct FVector                               GravityVector;                                     // 0x0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AirDrag;                                           // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8CC[0x4];                                      // Fixing Size After Last Property 
	struct FVector                               AirVelocity;                                       // 0x20(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct HairStrandsCore.HairBendConstraint
struct FHairBendConstraint
{
public:
	bool                                         SolveBend;                                         // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ProjectBend;                                       // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D4[0x2];                                      // Fixing Size After Last Property 
	float                                        BendDamping;                                       // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BendStiffness;                                     // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D6[0x4];                                      // Fixing Size After Last Property 
	struct FRuntimeFloatCurve                    BendScale;                                         // 0x10(0x88)(Edit, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct HairStrandsCore.HairStretchConstraint
struct FHairStretchConstraint
{
public:
	bool                                         SolveStretch;                                      // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ProjectStretch;                                    // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8DB[0x2];                                      // Fixing Size After Last Property 
	float                                        StretchDamping;                                    // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StretchStiffness;                                  // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8DE[0x4];                                      // Fixing Size After Last Property 
	struct FRuntimeFloatCurve                    StretchScale;                                      // 0x10(0x88)(Edit, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct HairStrandsCore.HairCollisionConstraint
struct FHairCollisionConstraint
{
public:
	bool                                         SolveCollision;                                    // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ProjectCollision;                                  // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8DF[0x2];                                      // Fixing Size After Last Property 
	float                                        StaticFriction;                                    // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        KineticFriction;                                   // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StrandsViscosity;                                  // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntVector                            GridDimension;                                     // 0x10(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionRadius;                                   // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    RadiusScale;                                       // 0x20(0x88)(Edit, NativeAccessSpecifierPublic)
};

// 0x1D8 (0x1D8 - 0x0)
// ScriptStruct HairStrandsCore.HairMaterialConstraints
struct FHairMaterialConstraints
{
public:
	struct FHairBendConstraint                   BendConstraint;                                    // 0x0(0x98)(Edit, NativeAccessSpecifierPublic)
	struct FHairStretchConstraint                StretchConstraint;                                 // 0x98(0x98)(Edit, NativeAccessSpecifierPublic)
	struct FHairCollisionConstraint              CollisionConstraint;                               // 0x130(0xA8)(Edit, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct HairStrandsCore.HairStrandsParameters
struct FHairStrandsParameters
{
public:
	enum class EGroomStrandsSize                 StrandsSize;                                       // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E2[0x3];                                      // Fixing Size After Last Property 
	float                                        StrandsDensity;                                    // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StrandsSmoothing;                                  // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StrandsThickness;                                  // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    ThicknessScale;                                    // 0x10(0x88)(Edit, NativeAccessSpecifierPublic)
};

// 0x2F0 (0x2F0 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupsPhysics
struct FHairGroupsPhysics
{
public:
	struct FHairSolverSettings                   SolverSettings;                                    // 0x0(0x48)(Edit, NativeAccessSpecifierPublic)
	struct FHairExternalForces                   ExternalForces;                                    // 0x48(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHairMaterialConstraints              MaterialConstraints;                               // 0x80(0x1D8)(Edit, NativeAccessSpecifierPublic)
	struct FHairStrandsParameters                StrandsParameters;                                 // 0x258(0x98)(Edit, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct HairStrandsCore.HairSimulationSolver
struct FHairSimulationSolver
{
public:
	bool                                         bEnableSimulation;                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct HairStrandsCore.HairSimulationForces
struct FHairSimulationForces
{
public:
	struct FVector                               GravityVector;                                     // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AirDrag;                                           // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_901[0x4];                                      // Fixing Size After Last Property 
	struct FVector                               AirVelocity;                                       // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct HairStrandsCore.HairSimulationConstraints
struct FHairSimulationConstraints
{
public:
	float                                        BendDamping;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BendStiffness;                                     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StretchDamping;                                    // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StretchStiffness;                                  // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaticFriction;                                    // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        KineticFriction;                                   // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StrandsViscosity;                                  // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionRadius;                                   // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct HairStrandsCore.HairSimulationSetup
struct FHairSimulationSetup
{
public:
	bool                                         bResetSimulation;                                  // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebugSimulation;                                  // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocalSimulation;                                  // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_905[0x1];                                      // Fixing Size After Last Property 
	float                                        LinearVelocityScale;                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularVelocityScale;                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_906[0x4];                                      // Fixing Size After Last Property 
	class FString                                LocalBone;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, Interp, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TeleportDistance;                                  // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_907[0x4];                                      // Fixing Size Of Struct
};

// 0x90 (0x90 - 0x0)
// ScriptStruct HairStrandsCore.HairSimulationSettings
struct FHairSimulationSettings
{
public:
	bool                                         bOverrideSettings;                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_909[0x7];                                      // Fixing Size After Last Property 
	struct FHairSimulationSetup                  SimulationSetup;                                   // 0x8(0x28)(Edit, BlueprintVisible, Interp, NativeAccessSpecifierPublic)
	struct FHairSimulationSolver                 SolverSettings;                                    // 0x30(0x1)(Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_90A[0x7];                                      // Fixing Size After Last Property 
	struct FHairSimulationForces                 ExternalForces;                                    // 0x38(0x38)(Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	struct FHairSimulationConstraints            MaterialConstraints;                               // 0x70(0x20)(Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct HairStrandsCore.HairGeometrySettings
struct FHairGeometrySettings
{
public:
	float                                        HairWidth;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HairRootScale;                                     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HairTipScale;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct HairStrandsCore.HairShadowSettings
struct FHairShadowSettings
{
public:
	float                                        HairShadowDensity;                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HairRaytracingRadiusScale;                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseHairRaytracingGeometry;                        // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVoxelize;                                         // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_91D[0x2];                                      // Fixing Size Of Struct
};

// 0x2 (0x2 - 0x0)
// ScriptStruct HairStrandsCore.HairAdvancedRenderingSettings
struct FHairAdvancedRenderingSettings
{
public:
	bool                                         bUseStableRasterization;                           // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScatterSceneLighting;                             // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupsRendering
struct FHairGroupsRendering
{
public:
	class FName                                  MaterialSlotName;                                  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Material;                                          // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHairGeometrySettings                 GeometrySettings;                                  // 0x10(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHairShadowSettings                   ShadowSettings;                                    // 0x1C(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHairAdvancedRenderingSettings        AdvancedSettings;                                  // 0x28(0x2)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_923[0x6];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct HairStrandsCore.GoomBindingGroupInfo
struct FGoomBindingGroupInfo
{
public:
	int32                                        RenRootCount;                                      // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RenLODCount;                                       // 0x4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SimRootCount;                                      // 0x8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SimLODCount;                                       // 0xC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct HairStrandsCore.GroomAnimationInfo
struct FGroomAnimationInfo
{
public:
	uint32                                       NumFrames;                                         // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondsPerFrame;                                   // 0x4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndTime;                                           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartFrame;                                        // 0x14(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EndFrame;                                          // 0x18(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGroomCacheAttributes             Attributes;                                        // 0x1C(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_92C[0x3];                                      // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// ScriptStruct HairStrandsCore.GroomCacheInfo
struct FGroomCacheInfo
{
public:
	int32                                        Version;                                           // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGroomCacheType                   Type;                                              // 0x4(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_92E[0x3];                                      // Fixing Size After Last Property 
	struct FGroomAnimationInfo                   AnimationInfo;                                     // 0x8(0x20)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct HairStrandsCore.FollicleMaskOptions
struct FFollicleMaskOptions
{
public:
	class UGroomAsset*                           Groom;                                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFollicleMaskChannel              Channel;                                           // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_93D[0x7];                                      // Fixing Size Of Struct
};

// 0x3C (0x3C - 0x0)
// ScriptStruct HairStrandsCore.GroomHairGroupPreview
struct FGroomHairGroupPreview
{
public:
	class FName                                  GroupName;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GroupID;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurveCount;                                        // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GuideCount;                                        // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasRootUV;                                        // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasClumpID;                                       // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasColor;                                         // 0x16(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasRoughness;                                     // 0x17(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasAO;                                            // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasPrecomputedWeights;                            // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_948[0x2];                                      // Fixing Size After Last Property 
	struct FHairGroupsInterpolation              InterpolationSettings;                             // 0x1C(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct HairStrandsCore.GroomBuildSettings
struct FGroomBuildSettings
{
public:
	bool                                         bOverrideGuides;                                   // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_94F[0x3];                                      // Fixing Size After Last Property 
	float                                        HairToGuideDensity;                                // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGroomInterpolationQuality        InterpolationQuality;                              // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGroomInterpolationWeight         InterpolationDistance;                             // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRandomizeGuide;                                   // 0xA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseUniqueGuide;                                   // 0xB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct HairStrandsCore.MovieSceneGroomCacheParams
struct FMovieSceneGroomCacheParams
{
public:
	class UGroomCache*                           GroomCache;                                        // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          FirstLoopStartFrameOffset;                         // 0x8(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          StartFrameOffset;                                  // 0xC(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          EndFrameOffset;                                    // 0x10(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReverse : 1;                                      // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_957[0x7];                                      // Fixing Size Of Struct
};

// 0x8 (0x28 - 0x20)
// ScriptStruct HairStrandsCore.MovieSceneGroomCacheSectionTemplateParameters
struct FMovieSceneGroomCacheSectionTemplateParameters : public FMovieSceneGroomCacheParams
{
public:
	struct FFrameNumber                          SectionStartTime;                                  // 0x20(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          SectionEndTime;                                    // 0x24(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x48 - 0x20)
// ScriptStruct HairStrandsCore.MovieSceneGroomCacheSectionTemplate
struct FMovieSceneGroomCacheSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneGroomCacheSectionTemplateParameters Params;                                            // 0x20(0x28)(NoDestructor, NativeAccessSpecifierPublic)
};

}


