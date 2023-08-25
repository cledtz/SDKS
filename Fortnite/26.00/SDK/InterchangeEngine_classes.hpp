#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xA8 - 0xA8)
// Class InterchangeEngine.InterchangeBlueprintPipelineBase
class UInterchangeBlueprintPipelineBase : public UBlueprint
{
public:

	static class UClass* StaticClass();
	static class UInterchangeBlueprintPipelineBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InterchangeEngine.InterchangeFilePickerBase
class UInterchangeFilePickerBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UInterchangeFilePickerBase* GetDefaultObj();

	bool ScriptedFilePickerForTranslatorType(enum class EInterchangeTranslatorType TranslatorType, struct FInterchangeFilePickerParameters* Parameters, TArray<class FString>* OutFilenames);
	bool ScriptedFilePickerForTranslatorAssetType(enum class EInterchangeTranslatorAssetType TranslatorAssetType, struct FInterchangeFilePickerParameters* Parameters, TArray<class FString>* OutFilenames);
};

// 0x0 (0x28 - 0x28)
// Class InterchangeEngine.InterchangePipelineConfigurationBase
class UInterchangePipelineConfigurationBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UInterchangePipelineConfigurationBase* GetDefaultObj();

	enum class EInterchangePipelineConfigurationDialogResult ScriptedShowScenePipelineConfigurationDialog(TArray<struct FInterchangeStackInfo>* PipelineStacks, TArray<class UInterchangePipelineBase*>* OutPipelines, class UInterchangeSourceData* SourceData);
	enum class EInterchangePipelineConfigurationDialogResult ScriptedShowReimportPipelineConfigurationDialog(TArray<struct FInterchangeStackInfo>* PipelineStacks, TArray<class UInterchangePipelineBase*>* OutPipelines, class UInterchangeSourceData* SourceData);
	enum class EInterchangePipelineConfigurationDialogResult ScriptedShowPipelineConfigurationDialog(TArray<struct FInterchangeStackInfo>* PipelineStacks, TArray<class UInterchangePipelineBase*>* OutPipelines, class UInterchangeSourceData* SourceData);
};

// 0x1E8 (0x218 - 0x30)
// Class InterchangeEngine.InterchangeProjectSettings
class UInterchangeProjectSettings : public UDeveloperSettings
{
public:
	struct FInterchangeContentImportSettings     ContentImportSettings;                             // 0x30(0x120)(Edit, Config, NativeAccessSpecifierPublic)
	struct FInterchangeImportSettings            SceneImportSettings;                               // 0x150(0x80)(Edit, Config, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UInterchangeFilePickerBase> FilePickerClass;                                   // 0x1D0(0x20)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing; // 0x1F0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_523B[0x7];                                     // Fixing Size After Last Property 
	TSoftClassPtr<class UInterchangePipelineBase> GenericPipelineClass;                              // 0x1F8(0x20)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInterchangeProjectSettings* GetDefaultObj();

};

// 0x0 (0xE8 - 0xE8)
// Class InterchangeEngine.InterchangePythonPipelineBase
class UInterchangePythonPipelineBase : public UInterchangePipelineBase
{
public:

	static class UClass* StaticClass();
	static class UInterchangePythonPipelineBase* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class InterchangeEngine.InterchangePythonPipelineAsset
class UInterchangePythonPipelineAsset : public UObject
{
public:
	TSoftClassPtr<class UInterchangePythonPipelineBase> PythonClass;                                       // 0x28(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangePythonPipelineBase*        GeneratedPipeline;                                 // 0x48(0x8)(Edit, ZeroConstructor, Transient, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                JsonDefaultProperties;                             // 0x50(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInterchangePythonPipelineAsset* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class InterchangeEngine.InterchangeSceneImportAsset
class UInterchangeSceneImportAsset : public UObject
{
public:
	uint8                                        Pad_5240[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeSceneImportAsset* GetDefaultObj();

};

// 0x80 (0xA8 - 0x28)
// Class InterchangeEngine.InterchangeAssetImportData
class UInterchangeAssetImportData : public UAssetImportData
{
public:
	struct FSoftObjectPath                       SceneImportAsset;                                  // 0x28(0x18)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NodeUniqueID;                                      // 0x40(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeBaseNodeContainer*         NodeContainer;                                     // 0x50(0x8)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UObject*>                       Pipelines;                                         // 0x58(0x10)(ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UInterchangeBaseNodeContainer*         TransientNodeContainer;                            // 0x68(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UObject*>                       TransientPipelines;                                // 0x70(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_525C[0x28];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeAssetImportData* GetDefaultObj();

	void SetPipelines(TArray<class UObject*>& InPipelines);
	void SetNodeContainer(class UInterchangeBaseNodeContainer* InNodeContainer);
	class FString ScriptGetFirstFilename();
	TArray<class FString> ScriptExtractFilenames();
	TArray<class FString> ScriptExtractDisplayLabels();
	class UInterchangeBaseNode* GetStoredNode(const class FString& InNodeUniqueId);
	class UInterchangeFactoryBaseNode* GetStoredFactoryNode(const class FString& InNodeUniqueId);
	TArray<class UObject*> GetPipelines();
	int32 GetNumberOfPipelines();
	class UInterchangeBaseNodeContainer* GetNodeContainer();
};

// 0x10 (0x38 - 0x28)
// Class InterchangeEngine.InterchangePipelineStackOverride
class UInterchangePipelineStackOverride : public UObject
{
public:
	TArray<struct FSoftObjectPath>               OverridePipelines;                                 // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInterchangePipelineStackOverride* GetDefaultObj();

	void AddPythonPipeline(class UInterchangePythonPipelineBase* PipelineBase);
	void AddPipeline(class UInterchangePipelineBase* PipelineBase);
	void AddBlueprintPipeline(class UInterchangeBlueprintPipelineBase* PipelineBase);
};

// 0x1B8 (0x1E0 - 0x28)
// Class InterchangeEngine.InterchangeManager
class UInterchangeManager : public UObject
{
public:
	uint8                                        Pad_5297[0xB0];                                    // Fixing Size After Last Property 
	TSet<TSubclassOf<class UObject>>             RegisteredTranslatorsClass;                        // 0xD8(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<TSubclassOf<class UObject>, TSubclassOf<class UObject>> RegisteredFactoryClasses;                          // 0x128(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<TSubclassOf<class UObject>, class UInterchangeWriterBase*> RegisteredWriters;                                 // 0x178(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5298[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeManager* GetDefaultObj();

	bool ImportScene(const class FString& ContentPath, class UInterchangeSourceData* SourceData, struct FImportAssetParameters& ImportAssetParameters);
	bool ImportAsset(const class FString& ContentPath, class UInterchangeSourceData* SourceData, struct FImportAssetParameters& ImportAssetParameters);
	class UClass* GetRegisteredFactoryClass(class UClass* ClassToMake);
	class UInterchangeManager* GetInterchangeManagerScripted();
	bool ExportScene(class UObject* World, bool bIsAutomated);
	bool ExportAsset(class UObject* Asset, bool bIsAutomated);
	class UInterchangeSourceData* CreateSourceData(const class FString& InFilename);
};

// 0x0 (0x28 - 0x28)
// Class InterchangeEngine.InterchangeMeshUtilities
class UInterchangeMeshUtilities : public UObject
{
public:

	static class UClass* StaticClass();
	static class UInterchangeMeshUtilities* GetDefaultObj();

};

}


