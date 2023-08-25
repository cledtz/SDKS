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

// 0x50 (0x50 - 0x0)
// Function InterchangeEngine.InterchangeFilePickerBase.ScriptedFilePickerForTranslatorType
struct UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType_Params
{
public:
	enum class EInterchangeTranslatorType        TranslatorType;                                    // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5207[0x7];                                     // Fixing Size After Last Property 
	struct FInterchangeFilePickerParameters      Parameters;                                        // 0x8(0x30)(Parm, OutParm, NativeAccessSpecifierPublic)
	TArray<class FString>                        OutFilenames;                                      // 0x38(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5209[0x7];                                     // Fixing Size Of Struct
};

// 0x50 (0x50 - 0x0)
// Function InterchangeEngine.InterchangeFilePickerBase.ScriptedFilePickerForTranslatorAssetType
struct UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType_Params
{
public:
	enum class EInterchangeTranslatorAssetType   TranslatorAssetType;                               // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5214[0x7];                                     // Fixing Size After Last Property 
	struct FInterchangeFilePickerParameters      Parameters;                                        // 0x8(0x30)(Parm, OutParm, NativeAccessSpecifierPublic)
	TArray<class FString>                        OutFilenames;                                      // 0x38(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5216[0x7];                                     // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// Function InterchangeEngine.InterchangePipelineConfigurationBase.ScriptedShowScenePipelineConfigurationDialog
struct UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog_Params
{
public:
	TArray<struct FInterchangeStackInfo>         PipelineStacks;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UInterchangePipelineBase*>      OutPipelines;                                      // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UInterchangeSourceData*                SourceData;                                        // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterchangePipelineConfigurationDialogResult ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5229[0x7];                                     // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// Function InterchangeEngine.InterchangePipelineConfigurationBase.ScriptedShowReimportPipelineConfigurationDialog
struct UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog_Params
{
public:
	TArray<struct FInterchangeStackInfo>         PipelineStacks;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UInterchangePipelineBase*>      OutPipelines;                                      // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UInterchangeSourceData*                SourceData;                                        // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterchangePipelineConfigurationDialogResult ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5233[0x7];                                     // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// Function InterchangeEngine.InterchangePipelineConfigurationBase.ScriptedShowPipelineConfigurationDialog
struct UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog_Params
{
public:
	TArray<struct FInterchangeStackInfo>         PipelineStacks;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UInterchangePipelineBase*>      OutPipelines;                                      // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UInterchangeSourceData*                SourceData;                                        // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterchangePipelineConfigurationDialogResult ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5236[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function InterchangeEngine.InterchangeAssetImportData.SetPipelines
struct UInterchangeAssetImportData_SetPipelines_Params
{
public:
	TArray<class UObject*>                       InPipelines;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeEngine.InterchangeAssetImportData.SetNodeContainer
struct UInterchangeAssetImportData_SetNodeContainer_Params
{
public:
	class UInterchangeBaseNodeContainer*         InNodeContainer;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeEngine.InterchangeAssetImportData.ScriptGetFirstFilename
struct UInterchangeAssetImportData_ScriptGetFirstFilename_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeEngine.InterchangeAssetImportData.ScriptExtractFilenames
struct UInterchangeAssetImportData_ScriptExtractFilenames_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeEngine.InterchangeAssetImportData.ScriptExtractDisplayLabels
struct UInterchangeAssetImportData_ScriptExtractDisplayLabels_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeEngine.InterchangeAssetImportData.GetStoredNode
struct UInterchangeAssetImportData_GetStoredNode_Params
{
public:
	class FString                                InNodeUniqueId;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeBaseNode*                  ReturnValue;                                       // 0x10(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeEngine.InterchangeAssetImportData.GetStoredFactoryNode
struct UInterchangeAssetImportData_GetStoredFactoryNode_Params
{
public:
	class FString                                InNodeUniqueId;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeFactoryBaseNode*           ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeEngine.InterchangeAssetImportData.GetPipelines
struct UInterchangeAssetImportData_GetPipelines_Params
{
public:
	TArray<class UObject*>                       ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function InterchangeEngine.InterchangeAssetImportData.GetNumberOfPipelines
struct UInterchangeAssetImportData_GetNumberOfPipelines_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeEngine.InterchangeAssetImportData.GetNodeContainer
struct UInterchangeAssetImportData_GetNodeContainer_Params
{
public:
	class UInterchangeBaseNodeContainer*         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeEngine.InterchangePipelineStackOverride.AddPythonPipeline
struct UInterchangePipelineStackOverride_AddPythonPipeline_Params
{
public:
	class UInterchangePythonPipelineBase*        PipelineBase;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeEngine.InterchangePipelineStackOverride.AddPipeline
struct UInterchangePipelineStackOverride_AddPipeline_Params
{
public:
	class UInterchangePipelineBase*              PipelineBase;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeEngine.InterchangePipelineStackOverride.AddBlueprintPipeline
struct UInterchangePipelineStackOverride_AddBlueprintPipeline_Params
{
public:
	class UInterchangeBlueprintPipelineBase*     PipelineBase;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function InterchangeEngine.InterchangeManager.ImportScene
struct UInterchangeManager_ImportScene_Params
{
public:
	class FString                                ContentPath;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeSourceData*                SourceData;                                        // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FImportAssetParameters                ImportAssetParameters;                             // 0x18(0xA0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xB8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5274[0x7];                                     // Fixing Size Of Struct
};

// 0xC0 (0xC0 - 0x0)
// Function InterchangeEngine.InterchangeManager.ImportAsset
struct UInterchangeManager_ImportAsset_Params
{
public:
	class FString                                ContentPath;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeSourceData*                SourceData;                                        // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FImportAssetParameters                ImportAssetParameters;                             // 0x18(0xA0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xB8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_527C[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function InterchangeEngine.InterchangeManager.GetRegisteredFactoryClass
struct UInterchangeManager_GetRegisteredFactoryClass_Params
{
public:
	class UClass*                                ClassToMake;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                ReturnValue;                                       // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeEngine.InterchangeManager.GetInterchangeManagerScripted
struct UInterchangeManager_GetInterchangeManagerScripted_Params
{
public:
	class UInterchangeManager*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeEngine.InterchangeManager.ExportScene
struct UInterchangeManager_ExportScene_Params
{
public:
	class UObject*                               World;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAutomated;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_528C[0x6];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function InterchangeEngine.InterchangeManager.ExportAsset
struct UInterchangeManager_ExportAsset_Params
{
public:
	class UObject*                               Asset;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAutomated;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5290[0x6];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function InterchangeEngine.InterchangeManager.CreateSourceData
struct UInterchangeManager_CreateSourceData_Params
{
public:
	class FString                                InFilename;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeSourceData*                ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


