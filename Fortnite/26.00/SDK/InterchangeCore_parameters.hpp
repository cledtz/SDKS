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

// 0x8 (0x8 - 0x0)
// Function InterchangeCore.InterchangeFactoryBase.GetFactoryClass
struct UInterchangeFactoryBase_GetFactoryClass_Params
{
public:
	class UClass*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeSourceData.SetFilename
struct UInterchangeSourceData_SetFilename_Params
{
public:
	class FString                                InFilename;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C8E[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeSourceData.GetFilename
struct UInterchangeSourceData_GetFilename_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangePipelineBase.ScriptedSetReimportSourceIndex
struct UInterchangePipelineBase_ScriptedSetReimportSourceIndex_Params
{
public:
	class UClass*                                ReimportObjectClass;                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SourceFileIndex;                                   // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CA7[0x4];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangePipelineBase.ScriptedExecutePreImportPipeline
struct UInterchangePipelineBase_ScriptedExecutePreImportPipeline_Params
{
public:
	class UInterchangeBaseNodeContainer*         BaseNodeContainer;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UInterchangeSourceData*>        SourceDatas;                                       // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function InterchangeCore.InterchangePipelineBase.ScriptedExecutePostImportPipeline
struct UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Params
{
public:
	class UInterchangeBaseNodeContainer*         BaseNodeContainer;                                 // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FactoryNodeKey;                                    // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               CreatedAsset;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAReimport;                                      // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CB2[0x7];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function InterchangeCore.InterchangePipelineBase.ScriptedExecutePostFactoryPipeline
struct UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Params
{
public:
	class UInterchangeBaseNodeContainer*         BaseNodeContainer;                                 // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FactoryNodeKey;                                    // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               CreatedAsset;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAReimport;                                      // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CBE[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangePipelineBase.ScriptedExecutePipeline
struct UInterchangePipelineBase_ScriptedExecutePipeline_Params
{
public:
	class UInterchangeBaseNodeContainer*         BaseNodeContainer;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UInterchangeSourceData*>        SourceDatas;                                       // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeCore.InterchangePipelineBase.ScriptedExecuteExportPipeline
struct UInterchangePipelineBase_ScriptedExecuteExportPipeline_Params
{
public:
	class UInterchangeBaseNodeContainer*         BaseNodeContainer;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeCore.InterchangePipelineBase.ScriptedCanExecuteOnAnyThread
struct UInterchangePipelineBase_ScriptedCanExecuteOnAnyThread_Params
{
public:
	enum class EInterchangePipelineTask          PipelineTask;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeCore.InterchangePipelineBase.FindOrAddPropertyStates
struct UInterchangePipelineBase_FindOrAddPropertyStates_Params
{
public:
	class FName                                  PropertyPath;                                      // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterchangePipelinePropertyStates    ReturnValue;                                       // 0x4(0x3)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CDE[0x1];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeCore.InterchangePipelineBase.DoesPropertyStatesExist
struct UInterchangePipelineBase_DoesPropertyStatesExist_Params
{
public:
	class FName                                  PropertyPath;                                      // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CE5[0x3];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.SetParentUid
struct UInterchangeBaseNode_SetParentUid_Params
{
public:
	class FString                                ParentUid;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D0B[0x7];                                     // Fixing Size Of Struct
};

// 0x2 (0x2 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.SetEnabled
struct UInterchangeBaseNode_SetEnabled_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.SetDisplayLabel
struct UInterchangeBaseNode_SetDisplayLabel_Params
{
public:
	class FString                                DisplayName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D16[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.SetAssetName
struct UInterchangeBaseNode_SetAssetName_Params
{
public:
	class FString                                AssetName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D19[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.RemoveTargetNodeUid
struct UInterchangeBaseNode_RemoveTargetNodeUid_Params
{
public:
	class FString                                AssetUid;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D1C[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.RemoveAttribute
struct UInterchangeBaseNode_RemoveAttribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D1F[0x7];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.IsEnabled
struct UInterchangeBaseNode_IsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.InitializeNode
struct UInterchangeBaseNode_InitializeNode_Params
{
public:
	class FString                                UniqueID;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayLabel;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterchangeNodeContainerType     NodeContainerType;                                 // 0x20(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D20[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.GetVector2Attribute
struct UInterchangeBaseNode_GetVector2Attribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2f                             OutValue;                                          // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D29[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.GetUniqueID
struct UInterchangeBaseNode_GetUniqueID_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.GetTargetNodeUids
struct UInterchangeBaseNode_GetTargetNodeUids_Params
{
public:
	TArray<class FString>                        OutTargetAssets;                                   // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.GetTargetNodeCount
struct UInterchangeBaseNode_GetTargetNodeCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.GetStringAttribute
struct UInterchangeBaseNode_GetStringAttribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutValue;                                          // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D45[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.GetParentUid
struct UInterchangeBaseNode_GetParentUid_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.GetNodeContainerType
struct UInterchangeBaseNode_GetNodeContainerType_Params
{
public:
	enum class EInterchangeNodeContainerType     ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.GetLinearColorAttribute
struct UInterchangeBaseNode_GetLinearColorAttribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          OutValue;                                          // 0x10(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D58[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.GetInt32Attribute
struct UInterchangeBaseNode_GetInt32Attribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutValue;                                          // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D68[0x3];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.GetGuidAttribute
struct UInterchangeBaseNode_GetGuidAttribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 OutValue;                                          // 0x10(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D71[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.GetFloatAttribute
struct UInterchangeBaseNode_GetFloatAttribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutValue;                                          // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D74[0x3];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.GetDoubleAttribute
struct UInterchangeBaseNode_GetDoubleAttribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       OutValue;                                          // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D7D[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.GetDisplayLabel
struct UInterchangeBaseNode_GetDisplayLabel_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.GetBooleanAttribute
struct UInterchangeBaseNode_GetBooleanAttribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutValue;                                          // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D8A[0x6];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.GetAssetName
struct UInterchangeBaseNode_GetAssetName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.AddVector2Attribute
struct UInterchangeBaseNode_AddVector2Attribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2f                             Value;                                             // 0x10(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D93[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.AddTargetNodeUid
struct UInterchangeBaseNode_AddTargetNodeUid_Params
{
public:
	class FString                                AssetUid;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D9C[0x7];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.AddStringAttribute
struct UInterchangeBaseNode_AddStringAttribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DA1[0x7];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.AddLinearColorAttribute
struct UInterchangeBaseNode_AddLinearColorAttribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Value;                                             // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DA6[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.AddInt32Attribute
struct UInterchangeBaseNode_AddInt32Attribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x10(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DAB[0x3];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.AddGuidAttribute
struct UInterchangeBaseNode_AddGuidAttribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 Value;                                             // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DB1[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.AddFloatAttribute
struct UInterchangeBaseNode_AddFloatAttribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x10(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DB9[0x3];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.AddDoubleAttribute
struct UInterchangeBaseNode_AddDoubleAttribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Value;                                             // 0x10(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DBF[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.AddBooleanAttribute
struct UInterchangeBaseNode_AddBooleanAttribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Value;                                             // 0x10(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DC6[0x6];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function InterchangeCore.InterchangeBaseNodeContainer.SetNodeParentUid
struct UInterchangeBaseNodeContainer_SetNodeParentUid_Params
{
public:
	class FString                                NodeUniqueID;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NewParentNodeUid;                                  // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DD3[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeBaseNodeContainer.SaveToFile
struct UInterchangeBaseNodeContainer_SaveToFile_Params
{
public:
	class FString                                Filename;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function InterchangeCore.InterchangeBaseNodeContainer.ResetChildrenCache
struct UInterchangeBaseNodeContainer_ResetChildrenCache_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNodeContainer.ReplaceNode
struct UInterchangeBaseNodeContainer_ReplaceNode_Params
{
public:
	class FString                                NodeUniqueID;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeFactoryBaseNode*           NewNode;                                           // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeBaseNodeContainer.LoadFromFile
struct UInterchangeBaseNodeContainer_LoadFromFile_Params
{
public:
	class FString                                Filename;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNodeContainer.IsNodeUidValid
struct UInterchangeBaseNodeContainer_IsNodeUidValid_Params
{
public:
	class FString                                NodeUniqueID;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DDD[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeBaseNodeContainer.GetRoots
struct UInterchangeBaseNodeContainer_GetRoots_Params
{
public:
	TArray<class FString>                        RootNodes;                                         // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNodeContainer.GetNodes
struct UInterchangeBaseNodeContainer_GetNodes_Params
{
public:
	class UClass*                                ClassNode;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        OutNodes;                                          // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function InterchangeCore.InterchangeBaseNodeContainer.GetNodeChildrenUids
struct UInterchangeBaseNodeContainer_GetNodeChildrenUids_Params
{
public:
	class FString                                NodeUniqueID;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNodeContainer.GetNodeChildrenCount
struct UInterchangeBaseNodeContainer_GetNodeChildrenCount_Params
{
public:
	class FString                                NodeUniqueID;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DE8[0x4];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function InterchangeCore.InterchangeBaseNodeContainer.GetNodeChildren
struct UInterchangeBaseNodeContainer_GetNodeChildren_Params
{
public:
	class FString                                NodeUniqueID;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChildIndex;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DEC[0x4];                                     // Fixing Size After Last Property 
	class UInterchangeBaseNode*                  ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNodeContainer.GetNode
struct UInterchangeBaseNodeContainer_GetNode_Params
{
public:
	class FString                                NodeUniqueID;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeBaseNode*                  ReturnValue;                                       // 0x10(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNodeContainer.GetFactoryNode
struct UInterchangeBaseNodeContainer_GetFactoryNode_Params
{
public:
	class FString                                NodeUniqueID;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeFactoryBaseNode*           ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function InterchangeCore.InterchangeBaseNodeContainer.ComputeChildrenCache
struct UInterchangeBaseNodeContainer_ComputeChildrenCache_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNodeContainer.AddNode
struct UInterchangeBaseNodeContainer_AddNode_Params
{
public:
	class UInterchangeBaseNode*                  Node;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.UnsetSkipNodeImport
struct UInterchangeFactoryBaseNode_UnsetSkipNodeImport_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.UnsetForceNodeReimport
struct UInterchangeFactoryBaseNode_UnsetForceNodeReimport_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.ShouldSkipNodeImport
struct UInterchangeFactoryBaseNode_ShouldSkipNodeImport_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.ShouldForceNodeReimport
struct UInterchangeFactoryBaseNode_ShouldForceNodeReimport_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.SetSkipNodeImport
struct UInterchangeFactoryBaseNode_SetSkipNodeImport_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.SetReimportStrategyFlags
struct UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Params
{
public:
	enum class EReimportStrategyFlags            ReimportStrategyFlags;                             // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.SetForceNodeReimport
struct UInterchangeFactoryBaseNode_SetForceNodeReimport_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.SetCustomSubPath
struct UInterchangeFactoryBaseNode_SetCustomSubPath_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E24[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.SetCustomReferenceObject
struct UInterchangeFactoryBaseNode_SetCustomReferenceObject_Params
{
public:
	struct FSoftObjectPath                       AttributeValue;                                    // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E2C[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.RemoveFactoryDependencyUid
struct UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Params
{
public:
	class FString                                DependencyUid;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E32[0x7];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.GetReimportStrategyFlags
struct UInterchangeFactoryBaseNode_GetReimportStrategyFlags_Params
{
public:
	enum class EReimportStrategyFlags            ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.GetFactoryDependency
struct UInterchangeFactoryBaseNode_GetFactoryDependency_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E3E[0x4];                                     // Fixing Size After Last Property 
	class FString                                OutDependency;                                     // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.GetFactoryDependenciesCount
struct UInterchangeFactoryBaseNode_GetFactoryDependenciesCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.GetFactoryDependencies
struct UInterchangeFactoryBaseNode_GetFactoryDependencies_Params
{
public:
	TArray<class FString>                        OutDependencies;                                   // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.GetCustomSubPath
struct UInterchangeFactoryBaseNode_GetCustomSubPath_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E43[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.GetCustomReferenceObject
struct UInterchangeFactoryBaseNode_GetCustomReferenceObject_Params
{
public:
	struct FSoftObjectPath                       AttributeValue;                                    // 0x0(0x18)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E45[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.AddFactoryDependencyUid
struct UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Params
{
public:
	class FString                                DependencyUid;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E4A[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeSourceNode.SetCustomSourceTimelineStart
struct UInterchangeSourceNode_SetCustomSourceTimelineStart_Params
{
public:
	double                                       AttributeValue;                                    // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E53[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeSourceNode.SetCustomSourceTimelineEnd
struct UInterchangeSourceNode_SetCustomSourceTimelineEnd_Params
{
public:
	double                                       AttributeValue;                                    // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E56[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeCore.InterchangeSourceNode.SetCustomSourceFrameRateNumerator
struct UInterchangeSourceNode_SetCustomSourceFrameRateNumerator_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E5B[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeCore.InterchangeSourceNode.SetCustomSourceFrameRateDenominator
struct UInterchangeSourceNode_SetCustomSourceFrameRateDenominator_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E61[0x3];                                     // Fixing Size Of Struct
};

// 0x2 (0x2 - 0x0)
// Function InterchangeCore.InterchangeSourceNode.SetCustomImportUnusedMaterial
struct UInterchangeSourceNode_SetCustomImportUnusedMaterial_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeSourceNode.SetCustomAnimatedTimeStart
struct UInterchangeSourceNode_SetCustomAnimatedTimeStart_Params
{
public:
	double                                       AttributeValue;                                    // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E68[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeSourceNode.SetCustomAnimatedTimeEnd
struct UInterchangeSourceNode_SetCustomAnimatedTimeEnd_Params
{
public:
	double                                       AttributeValue;                                    // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E70[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function InterchangeCore.InterchangeSourceNode.InitializeSourceNode
struct UInterchangeSourceNode_InitializeSourceNode_Params
{
public:
	class FString                                UniqueID;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayLabel;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeSourceNode.GetCustomSourceTimelineStart
struct UInterchangeSourceNode_GetCustomSourceTimelineStart_Params
{
public:
	double                                       AttributeValue;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E76[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeSourceNode.GetCustomSourceTimelineEnd
struct UInterchangeSourceNode_GetCustomSourceTimelineEnd_Params
{
public:
	double                                       AttributeValue;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E7B[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeCore.InterchangeSourceNode.GetCustomSourceFrameRateNumerator
struct UInterchangeSourceNode_GetCustomSourceFrameRateNumerator_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E7F[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function InterchangeCore.InterchangeSourceNode.GetCustomSourceFrameRateDenominator
struct UInterchangeSourceNode_GetCustomSourceFrameRateDenominator_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E81[0x3];                                     // Fixing Size Of Struct
};

// 0x2 (0x2 - 0x0)
// Function InterchangeCore.InterchangeSourceNode.GetCustomImportUnusedMaterial
struct UInterchangeSourceNode_GetCustomImportUnusedMaterial_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeSourceNode.GetCustomAnimatedTimeStart
struct UInterchangeSourceNode_GetCustomAnimatedTimeStart_Params
{
public:
	double                                       AttributeValue;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E87[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeSourceNode.GetCustomAnimatedTimeEnd
struct UInterchangeSourceNode_GetCustomAnimatedTimeEnd_Params
{
public:
	double                                       AttributeValue;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E8B[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.RemoveUserDefinedAttribute
struct UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Params
{
public:
	class UInterchangeBaseNode*                  InterchangeNode;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserDefinedAttributeName;                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E95[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttributeInfos
struct UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Params
{
public:
	class UInterchangeBaseNode*                  InterchangeNode;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInterchangeUserDefinedAttributeInfo> UserDefinedAttributeInfos;                         // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Int32
struct UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Params
{
public:
	class UInterchangeBaseNode*                  InterchangeNode;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserDefinedAttributeName;                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutValue;                                          // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EA0[0x4];                                     // Fixing Size After Last Property 
	class FString                                OutPayloadKey;                                     // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EA1[0x7];                                     // Fixing Size Of Struct
};

// 0x40 (0x40 - 0x0)
// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_FString
struct UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Params
{
public:
	class UInterchangeBaseNode*                  InterchangeNode;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserDefinedAttributeName;                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutValue;                                          // 0x18(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutPayloadKey;                                     // 0x28(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EA5[0x7];                                     // Fixing Size Of Struct
};

// 0x38 (0x38 - 0x0)
// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Float
struct UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Params
{
public:
	class UInterchangeBaseNode*                  InterchangeNode;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserDefinedAttributeName;                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutValue;                                          // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EAF[0x4];                                     // Fixing Size After Last Property 
	class FString                                OutPayloadKey;                                     // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EB1[0x7];                                     // Fixing Size Of Struct
};

// 0x38 (0x38 - 0x0)
// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Double
struct UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Params
{
public:
	class UInterchangeBaseNode*                  InterchangeNode;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserDefinedAttributeName;                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       OutValue;                                          // 0x18(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutPayloadKey;                                     // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EB6[0x7];                                     // Fixing Size Of Struct
};

// 0x38 (0x38 - 0x0)
// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Boolean
struct UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Params
{
public:
	class UInterchangeBaseNode*                  InterchangeNode;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserDefinedAttributeName;                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutValue;                                          // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EBF[0x7];                                     // Fixing Size After Last Property 
	class FString                                OutPayloadKey;                                     // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EC2[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.DuplicateAllUserDefinedAttribute
struct UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Params
{
public:
	class UInterchangeBaseNode*                  InterchangeSourceNode;                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeBaseNode*                  InterchangeDestinationNode;                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddSourceNodeName;                                // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2ECA[0x7];                                     // Fixing Size Of Struct
};

// 0x38 (0x38 - 0x0)
// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Int32
struct UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Params
{
public:
	class UInterchangeBaseNode*                  InterchangeNode;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserDefinedAttributeName;                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x18(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2ED1[0x4];                                     // Fixing Size After Last Property 
	class FString                                PayloadKey;                                        // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2ED2[0x7];                                     // Fixing Size Of Struct
};

// 0x40 (0x40 - 0x0)
// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_FString
struct UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Params
{
public:
	class UInterchangeBaseNode*                  InterchangeNode;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserDefinedAttributeName;                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PayloadKey;                                        // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EDB[0x7];                                     // Fixing Size Of Struct
};

// 0x38 (0x38 - 0x0)
// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Float
struct UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Params
{
public:
	class UInterchangeBaseNode*                  InterchangeNode;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserDefinedAttributeName;                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x18(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EE1[0x4];                                     // Fixing Size After Last Property 
	class FString                                PayloadKey;                                        // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EE2[0x7];                                     // Fixing Size Of Struct
};

// 0x38 (0x38 - 0x0)
// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Double
struct UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Params
{
public:
	class UInterchangeBaseNode*                  InterchangeNode;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserDefinedAttributeName;                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Value;                                             // 0x18(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PayloadKey;                                        // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EEA[0x7];                                     // Fixing Size Of Struct
};

// 0x38 (0x38 - 0x0)
// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Boolean
struct UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Params
{
public:
	class UInterchangeBaseNode*                  InterchangeNode;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserDefinedAttributeName;                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Value;                                             // 0x18(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EF1[0x7];                                     // Fixing Size After Last Property 
	class FString                                PayloadKey;                                        // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EF2[0x7];                                     // Fixing Size Of Struct
};

}
}


