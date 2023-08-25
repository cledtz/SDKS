#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x5 (0x5 - 0x0)
// Function InterchangePipelines.InterchangePipelineMeshesUtilities.SetContext
struct UInterchangePipelineMeshesUtilities_SetContext_Params
{
public:
	struct FInterchangePipelineMeshesUtilitiesContext Context;                                           // 0x0(0x5)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangePipelines.InterchangePipelineMeshesUtilities.IsValidMeshInstanceUid
struct UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Params
{
public:
	class FString                                MeshInstanceUid;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F38[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangePipelines.InterchangePipelineMeshesUtilities.IsValidMeshGeometryUid
struct UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Params
{
public:
	class FString                                MeshGeometryUid;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F3A[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetMeshInstanceSkeletonRootUid
struct UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Params
{
public:
	class FString                                MeshInstanceUid;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetMeshInstanceByUid
struct UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Params
{
public:
	class FString                                MeshInstanceUid;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterchangeMeshInstance              ReturnValue;                                       // 0x10(0x80)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetMeshGeometrySkeletonRootUid
struct UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Params
{
public:
	class FString                                MeshGeometryUid;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetMeshGeometryByUid
struct UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Params
{
public:
	class FString                                MeshGeometryUid;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterchangeMeshGeometry              ReturnValue;                                       // 0x10(0x38)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllStaticMeshInstance
struct UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Params
{
public:
	TArray<class FString>                        MeshInstanceUids;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllStaticMeshGeometry
struct UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Params
{
public:
	TArray<class FString>                        MeshGeometryUids;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllSkinnedMeshInstance
struct UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Params
{
public:
	TArray<class FString>                        MeshInstanceUids;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllSkinnedMeshGeometry
struct UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Params
{
public:
	TArray<class FString>                        MeshGeometryUids;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllMeshInstanceUidsUsingMeshGeometryUid
struct UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Params
{
public:
	class FString                                MeshGeometryUid;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        MeshInstanceUids;                                  // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllMeshInstanceUids
struct UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Params
{
public:
	TArray<class FString>                        MeshInstanceUids;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllMeshGeometryNotInstanced
struct UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Params
{
public:
	TArray<class FString>                        MeshGeometryUids;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllMeshGeometry
struct UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Params
{
public:
	TArray<class FString>                        MeshGeometryUids;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangePipelines.InterchangePipelineMeshesUtilities.CreateInterchangePipelineMeshesUtilities
struct UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Params
{
public:
	class UInterchangeBaseNodeContainer*         BaseNodeContainer;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangePipelineMeshesUtilities*   ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


