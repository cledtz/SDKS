#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xF8 - 0xE8)
// Class InterchangePipelines.InterchangeGenericCommonMeshesProperties
class UInterchangeGenericCommonMeshesProperties : public UInterchangePipelineBase
{
public:
	enum class EInterchangeForceMeshType         ForceAllMeshAsType;                                // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImportLods;                                       // 0xE9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBakeMeshes;                                       // 0xEA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterchangeVertexColorImportOption VertexColorImportOption;                           // 0xEB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                VertexOverrideColor;                               // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecomputeNormals;                                 // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecomputeTangents;                                // 0xF1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseMikkTSpace;                                    // 0xF2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bComputeWeightedNormals;                           // 0xF3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseHighPrecisionTangentBasis;                     // 0xF4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseFullPrecisionUVs;                              // 0xF5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseBackwardsCompatibleF16TruncUVs;                // 0xF6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRemoveDegenerates;                                // 0xF7(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInterchangeGenericCommonMeshesProperties* GetDefaultObj();

};

// 0x10 (0xF8 - 0xE8)
// Class InterchangePipelines.InterchangeGenericCommonSkeletalMeshesAndAnimationsProperties
class UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties : public UInterchangePipelineBase
{
public:
	bool                                         bImportOnlyAnimations;                             // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EFF[0x3];                                     // Fixing Size After Last Property 
	TWeakObjectPtr<class USkeleton>              Skeleton;                                          // 0xEC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImportMeshesInBoneHierarchy;                      // 0xF4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseT0AsRefPose;                                   // 0xF5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bConvertStaticsWithMorphTargetsToSkeletals;        // 0xF6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F00[0x1];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties* GetDefaultObj();

};

// 0x58 (0x88 - 0x30)
// Class InterchangePipelines.GLTFPipelineSettings
class UGLTFPipelineSettings : public UDeveloperSettings
{
public:
	TMap<class FString, struct FSoftObjectPath>  MaterialParents;                                   // 0x30(0x50)(Edit, Config, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F01[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGLTFPipelineSettings* GetDefaultObj();

};

// 0x10 (0xF8 - 0xE8)
// Class InterchangePipelines.InterchangeGLTFPipeline
class UInterchangeGLTFPipeline : public UInterchangePipelineBase
{
public:
	uint8                                        Pad_1F07[0x8];                                     // Fixing Size After Last Property 
	bool                                         bUseGLTFMaterialInstanceLibrary;                   // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F08[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeGLTFPipeline* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class InterchangePipelines.MaterialXPipelineSettings
class UMaterialXPipelineSettings : public UDeveloperSettings
{
public:
	TMap<enum class EInterchangeMaterialXShaders, struct FSoftObjectPath> PredefinedSurfaceShaders;                          // 0x30(0x50)(Edit, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMaterialXPipelineSettings* GetDefaultObj();

};

// 0x8 (0xF0 - 0xE8)
// Class InterchangePipelines.InterchangeMaterialXPipeline
class UInterchangeMaterialXPipeline : public UInterchangePipelineBase
{
public:
	uint8                                        Pad_1F0B[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeMaterialXPipeline* GetDefaultObj();

};

// 0x70 (0x158 - 0xE8)
// Class InterchangePipelines.InterchangeGenericAnimationPipeline
class UInterchangeGenericAnimationPipeline : public UInterchangePipelineBase
{
public:
	TWeakObjectPtr<class UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties> CommonSkeletalMeshesAndAnimationsProperties;       // 0xE8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UInterchangeGenericCommonMeshesProperties> CommonMeshesProperties;                            // 0xF0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImportAnimations;                                 // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImportBoneTracks;                                 // 0xF9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterchangeAnimationRange        AnimationRange;                                    // 0xFA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F0C[0x1];                                     // Fixing Size After Last Property 
	struct FInt32Interval                        FrameImportRange;                                  // 0xFC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUse30HzToBakeBoneAnimation;                       // 0x104(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F0D[0x3];                                     // Fixing Size After Last Property 
	int32                                        CustomBoneAnimationSampleRate;                     // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToClosestFrameBoundary;                       // 0x10C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImportCustomAttribute;                            // 0x10D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddCurveMetadataToSkeleton;                       // 0x10E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetMaterialDriveParameterOnCustomAttribute;       // 0x10F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        MaterialCurveSuffixes;                             // 0x110(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bRemoveCurveRedundantKeys;                         // 0x120(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoNotImportCurveWithZero;                         // 0x121(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeleteExistingNonCurveCustomAttributes;           // 0x122(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeleteExistingCustomAttributeCurves;              // 0x123(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeleteExistingMorphTargetCurves;                  // 0x124(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F16[0x3];                                     // Fixing Size After Last Property 
	class FString                                SourceAnimationName;                               // 0x128(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSceneImport;                                      // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F17[0x1F];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeGenericAnimationPipeline* GetDefaultObj();

};

// 0x90 (0x178 - 0xE8)
// Class InterchangePipelines.InterchangeGenericAssetsPipeline
class UInterchangeGenericAssetsPipeline : public UInterchangePipelineBase
{
public:
	enum class EReimportStrategyFlags            ReimportStrategy;                                  // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseSourceNameForAsset;                            // 0xE9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F1C[0x6];                                     // Fixing Size After Last Property 
	class FString                                AssetName;                                         // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ImportOffsetTranslation;                           // 0x100(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ImportOffsetRotation;                              // 0x118(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ImportOffsetUniformScale;                          // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F1E[0x4];                                     // Fixing Size After Last Property 
	class UInterchangeGenericCommonMeshesProperties* CommonMeshesProperties;                            // 0x138(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties* CommonSkeletalMeshesAndAnimationsProperties;       // 0x140(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeGenericMeshPipeline*       MeshPipeline;                                      // 0x148(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeGenericAnimationPipeline*  AnimationPipeline;                                 // 0x150(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeGenericMaterialPipeline*   MaterialPipeline;                                  // 0x158(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F20[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeGenericAssetsPipeline* GetDefaultObj();

};

// 0x90 (0x178 - 0xE8)
// Class InterchangePipelines.InterchangeGenericMaterialPipeline
class UInterchangeGenericMaterialPipeline : public UInterchangePipelineBase
{
public:
	bool                                         bImportMaterials;                                  // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F24[0x7];                                     // Fixing Size After Last Property 
	class FString                                AssetName;                                         // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterchangeMaterialImportOption  MaterialImport;                                    // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F26[0x7];                                     // Fixing Size After Last Property 
	struct FSoftObjectPath                       ParentMaterial;                                    // 0x108(0x18)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeGenericTexturePipeline*    TexturePipeline;                                   // 0x120(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeBaseNodeContainer*         BaseNodeContainer;                                 // 0x128(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F27[0x48];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeGenericMaterialPipeline* GetDefaultObj();

};

// 0xD0 (0x1B8 - 0xE8)
// Class InterchangePipelines.InterchangeGenericMeshPipeline
class UInterchangeGenericMeshPipeline : public UInterchangePipelineBase
{
public:
	TWeakObjectPtr<class UInterchangeGenericCommonMeshesProperties> CommonMeshesProperties;                            // 0xE8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties> CommonSkeletalMeshesAndAnimationsProperties;       // 0xF0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImportStaticMeshes;                               // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCombineStaticMeshes;                              // 0xF9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F2A[0x2];                                     // Fixing Size After Last Property 
	class FName                                  LODGroup;                                          // 0xFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImportCollision;                                  // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImportCollisionAccordingToMeshName;               // 0x101(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOneConvexHullPerUCX;                              // 0x102(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBuildNanite;                                      // 0x103(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBuildReversedIndexBuffer;                         // 0x104(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerateLightmapUVs;                              // 0x105(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerateDistanceFieldAsIfTwoSided;                // 0x106(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSupportFaceRemap;                                 // 0x107(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinLightmapResolution;                             // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SrcLightmapIndex;                                  // 0x10C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DstLightmapIndex;                                  // 0x110(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F2B[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               BuildScale3D;                                      // 0x118(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceFieldResolutionScale;                      // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UStaticMesh>            DistanceFieldReplacementMesh;                      // 0x134(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLumenMeshCards;                                 // 0x13C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImportSkeletalMeshes;                             // 0x140(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterchangeSkeletalMeshContentType SkeletalMeshImportContentType;                     // 0x141(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterchangeSkeletalMeshContentType LastSkeletalMeshImportContentType;                 // 0x142(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCombineSkeletalMeshes;                            // 0x143(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImportMorphTargets;                               // 0x144(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateSkeletonReferencePose;                      // 0x145(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCreatePhysicsAsset;                               // 0x146(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F2D[0x1];                                     // Fixing Size After Last Property 
	TWeakObjectPtr<class UPhysicsAsset>          PhysicsAsset;                                      // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseHighPrecisionSkinWeights;                      // 0x150(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F2E[0x3];                                     // Fixing Size After Last Property 
	float                                        ThresholdPosition;                                 // 0x154(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThresholdTangentNormal;                            // 0x158(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThresholdUV;                                       // 0x15C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MorphThresholdPosition;                            // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BoneInfluenceLimit;                                // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F2F[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeGenericMeshPipeline* GetDefaultObj();

};

// 0x10 (0xF8 - 0xE8)
// Class InterchangePipelines.InterchangeGenericLevelPipeline
class UInterchangeGenericLevelPipeline : public UInterchangePipelineBase
{
public:
	enum class EReimportStrategyFlags            ReimportPropertyStrategy;                          // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeleteMissingActors;                              // 0xE9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceReimportDeletedActors;                       // 0xEA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceReimportDeletedAssets;                       // 0xEB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeleteMissingAssets;                              // 0xEC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsePhysicalInsteadOfStandardPerspectiveCamera;    // 0xED(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F33[0xA];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeGenericLevelPipeline* GetDefaultObj();

};

// 0x58 (0x140 - 0xE8)
// Class InterchangePipelines.InterchangeGenericTexturePipeline
class UInterchangeGenericTexturePipeline : public UInterchangePipelineBase
{
public:
	bool                                         bImportTextures;                                   // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F35[0x7];                                     // Fixing Size After Last Property 
	class FString                                AssetName;                                         // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowNonPowerOfTwo;                               // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F36[0x7];                                     // Fixing Size After Last Property 
	class UInterchangeBaseNodeContainer*         BaseNodeContainer;                                 // 0x108(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F37[0x30];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeGenericTexturePipeline* GetDefaultObj();

};

// 0x100 (0x128 - 0x28)
// Class InterchangePipelines.InterchangePipelineMeshesUtilities
class UInterchangePipelineMeshesUtilities : public UObject
{
public:
	uint8                                        Pad_1F4B[0x100];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangePipelineMeshesUtilities* GetDefaultObj();

	void SetContext(struct FInterchangePipelineMeshesUtilitiesContext& Context);
	bool IsValidMeshInstanceUid(const class FString& MeshInstanceUid);
	bool IsValidMeshGeometryUid(const class FString& MeshGeometryUid);
	class FString GetMeshInstanceSkeletonRootUid(const class FString& MeshInstanceUid);
	struct FInterchangeMeshInstance GetMeshInstanceByUid(const class FString& MeshInstanceUid);
	class FString GetMeshGeometrySkeletonRootUid(const class FString& MeshGeometryUid);
	struct FInterchangeMeshGeometry GetMeshGeometryByUid(const class FString& MeshGeometryUid);
	void GetAllStaticMeshInstance(TArray<class FString>* MeshInstanceUids);
	void GetAllStaticMeshGeometry(TArray<class FString>* MeshGeometryUids);
	void GetAllSkinnedMeshInstance(TArray<class FString>* MeshInstanceUids);
	void GetAllSkinnedMeshGeometry(TArray<class FString>* MeshGeometryUids);
	void GetAllMeshInstanceUidsUsingMeshGeometryUid(const class FString& MeshGeometryUid, TArray<class FString>* MeshInstanceUids);
	void GetAllMeshInstanceUids(TArray<class FString>* MeshInstanceUids);
	void GetAllMeshGeometryNotInstanced(TArray<class FString>* MeshGeometryUids);
	void GetAllMeshGeometry(TArray<class FString>* MeshGeometryUids);
	class UInterchangePipelineMeshesUtilities* CreateInterchangePipelineMeshesUtilities(class UInterchangeBaseNodeContainer* BaseNodeContainer);
};

}


