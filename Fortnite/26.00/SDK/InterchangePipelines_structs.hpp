#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EInterchangeForceMeshType : uint8
{
	IFMT_None                      = 0,
	IFMT_StaticMesh                = 1,
	IFMT_SkeletalMesh              = 2,
	IFMT_MAX                       = 3,
};

enum class EInterchangeVertexColorImportOption : uint8
{
	IVCIO_Replace                  = 0,
	IVCIO_Ignore                   = 1,
	IVCIO_Override                 = 2,
	IVCIO_MAX                      = 3,
};

enum class EInterchangeMaterialXShaders : uint8
{
	StandardSurface                = 0,
	StandardSurfaceTransmission    = 1,
	SurfaceUnlit                   = 2,
	UsdPreviewSurface              = 3,
	MaxShaderCount                 = 4,
	EInterchangeMaterialXShaders_MAX = 5,
};

enum class EInterchangeAnimationRange : uint8
{
	Timeline                       = 0,
	Animated                       = 1,
	SetRange                       = 2,
	MAX                            = 3,
};

enum class EInterchangeMaterialImportOption : uint8
{
	ImportAsMaterials              = 0,
	ImportAsMaterialInstances      = 1,
	EInterchangeMaterialImportOption_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct InterchangePipelines.InterchangeLodSceneNodeContainer
struct FInterchangeLodSceneNodeContainer
{
public:
	TArray<class UInterchangeSceneNode*>         SceneNodes;                                        // 0x0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct InterchangePipelines.InterchangeMeshInstance
struct FInterchangeMeshInstance
{
public:
	class FString                                MeshInstanceUid;                                   // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeSceneNode*                 LodGroupNode;                                      // 0x10(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReferenceSkinnedMesh;                             // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReferenceMorphTarget;                             // 0x19(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasMorphTargets;                                  // 0x1A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F50[0x5];                                     // Fixing Size After Last Property 
	TMap<int32, struct FInterchangeLodSceneNodeContainer> SceneNodePerLodIndex;                              // 0x20(0x50)(Edit, NativeAccessSpecifierPublic)
	TArray<class FString>                        ReferencingMeshGeometryUids;                       // 0x70(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct InterchangePipelines.InterchangeMeshGeometry
struct FInterchangeMeshGeometry
{
public:
	class FString                                MeshUid;                                           // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeMeshNode*                  MeshNode;                                          // 0x10(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ReferencingMeshInstanceUids;                       // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        AttachedSocketUids;                                // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x5 (0x5 - 0x0)
// ScriptStruct InterchangePipelines.InterchangePipelineMeshesUtilitiesContext
struct FInterchangePipelineMeshesUtilitiesContext
{
public:
	bool                                         bConvertStaticMeshToSkeletalMesh;                  // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bConvertSkeletalMeshToStaticMesh;                  // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bConvertStaticsWithMorphTargetsToSkeletals;        // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImportMeshesInBoneHierarchy;                      // 0x3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bQueryGeometryOnlyIfNoInstance;                    // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


