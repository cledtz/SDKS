#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EInterchangePipelineConfigurationDialogResult : uint8
{
	Cancel                         = 0,
	Import                         = 1,
	ImportAll                      = 2,
	EInterchangePipelineConfigurationDialogResult_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct InterchangeEngine.InterchangeFilePickerParameters
struct FInterchangeFilePickerParameters
{
public:
	bool                                         bAllowMultipleFiles;                               // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_529F[0x7];                                     // Fixing Size After Last Property 
	class FText                                  Title;                                             // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FString                                DefaultPath;                                       // 0x20(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct InterchangeEngine.InterchangeStackInfo
struct FInterchangeStackInfo
{
public:
	class FName                                  StackName;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52A1[0x4];                                     // Fixing Size After Last Property 
	TArray<class UInterchangePipelineBase*>      Pipelines;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct InterchangeEngine.InterchangeTranslatorPipelines
struct FInterchangeTranslatorPipelines
{
public:
	TSoftClassPtr<class UInterchangeTranslatorBase> Translator;                                        // 0x0(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>               Pipelines;                                         // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct InterchangeEngine.InterchangePipelineStack
struct FInterchangePipelineStack
{
public:
	TArray<struct FSoftObjectPath>               Pipelines;                                         // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FInterchangeTranslatorPipelines> PerTranslatorPipelines;                            // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct InterchangeEngine.InterchangeImportSettings
struct FInterchangeImportSettings
{
public:
	TMap<class FName, struct FInterchangePipelineStack> PipelineStacks;                                    // 0x0(0x50)(Edit, NativeAccessSpecifierPublic)
	class FName                                  DefaultPipelineStack;                              // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52A4[0x4];                                     // Fixing Size After Last Property 
	TSoftClassPtr<class UInterchangePipelineConfigurationBase> PipelineConfigurationDialogClass;                  // 0x58(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowPipelineStacksConfigurationDialog;            // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52A5[0x7];                                     // Fixing Size Of Struct
};

// 0xA0 (0x120 - 0x80)
// ScriptStruct InterchangeEngine.InterchangeContentImportSettings
struct FInterchangeContentImportSettings : public FInterchangeImportSettings
{
public:
	TMap<enum class EInterchangeTranslatorAssetType, class FName> DefaultPipelineStackOverride;                      // 0x80(0x50)(Edit, NativeAccessSpecifierPublic)
	TMap<enum class EInterchangeTranslatorAssetType, bool> ShowPipelineStacksConfigurationDialogOverride;     // 0xD0(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct InterchangeEngine.PropertyData
struct FPropertyData
{
public:
	uint8                                        Pad_52A7[0x18];                                    // Fixing Size Of Struct
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct InterchangeEngine.ImportAssetParameters
struct FImportAssetParameters
{
public:
	class UObject*                               ReimportAsset;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReimportSourceIndex;                               // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAutomated;                                      // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFollowRedirectors;                                // 0xD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52A8[0x2];                                     // Fixing Size After Last Property 
	TArray<struct FSoftObjectPath>               OverridePipelines;                                 // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnAssetDone;                                       // 0x20(0xC)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52AA[0x14];                                    // Fixing Size After Last Property 
	FDelegateProperty_                           OnAssetsImportDone;                                // 0x40(0xC)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52AB[0x14];                                    // Fixing Size After Last Property 
	FDelegateProperty_                           OnSceneObjectDone;                                 // 0x60(0xC)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52AC[0x14];                                    // Fixing Size After Last Property 
	FDelegateProperty_                           OnSceneImportDone;                                 // 0x80(0xC)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52AD[0x14];                                    // Fixing Size Of Struct
};

}


