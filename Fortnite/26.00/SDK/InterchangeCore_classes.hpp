#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class InterchangeCore.InterchangeFactoryBase
class UInterchangeFactoryBase : public UObject
{
public:
	class UInterchangeResultsContainer*          Results;                                           // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInterchangeFactoryBase* GetDefaultObj();

	class UClass* GetFactoryClass();
};

// 0x28 (0x50 - 0x28)
// Class InterchangeCore.InterchangeSourceData
class UInterchangeSourceData : public UObject
{
public:
	class FString                                Filename;                                          // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2C94[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeSourceData* GetDefaultObj();

	bool SetFilename(const class FString& InFilename);
	class FString GetFilename();
};

// 0x0 (0x28 - 0x28)
// Class InterchangeCore.InterchangeWriterBase
class UInterchangeWriterBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UInterchangeWriterBase* GetDefaultObj();

};

// 0xC0 (0xE8 - 0x28)
// Class InterchangeCore.InterchangePipelineBase
class UInterchangePipelineBase : public UObject
{
public:
	uint8                                        Pad_2CE6[0x8];                                     // Fixing Size After Last Property 
	class UInterchangeResultsContainer*          Results;                                           // 0x30(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, struct FInterchangePipelinePropertyStates> PropertiesStates;                                  // 0x38(0x50)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2CE9[0x60];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangePipelineBase* GetDefaultObj();

	void ScriptedSetReimportSourceIndex(class UClass* ReimportObjectClass, int32 SourceFileIndex);
	void ScriptedExecutePreImportPipeline(class UInterchangeBaseNodeContainer* BaseNodeContainer, TArray<class UInterchangeSourceData*>& SourceDatas);
	void ScriptedExecutePostImportPipeline(class UInterchangeBaseNodeContainer* BaseNodeContainer, const class FString& FactoryNodeKey, class UObject* CreatedAsset, bool bIsAReimport);
	void ScriptedExecutePostFactoryPipeline(class UInterchangeBaseNodeContainer* BaseNodeContainer, const class FString& FactoryNodeKey, class UObject* CreatedAsset, bool bIsAReimport);
	void ScriptedExecutePipeline(class UInterchangeBaseNodeContainer* BaseNodeContainer, TArray<class UInterchangeSourceData*>& SourceDatas);
	void ScriptedExecuteExportPipeline(class UInterchangeBaseNodeContainer* BaseNodeContainer);
	bool ScriptedCanExecuteOnAnyThread(enum class EInterchangePipelineTask PipelineTask);
	struct FInterchangePipelinePropertyStates FindOrAddPropertyStates(class FName PropertyPath);
	bool DoesPropertyStatesExist(class FName PropertyPath);
};

// 0x38 (0x60 - 0x28)
// Class InterchangeCore.InterchangeResult
class UInterchangeResult : public UObject
{
public:
	class FString                                SourceAssetName;                                   // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DestinationAssetName;                              // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UObject>                   AssetType;                                         // 0x48(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InterchangeKey;                                    // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInterchangeResult* GetDefaultObj();

};

// 0x0 (0x60 - 0x60)
// Class InterchangeCore.InterchangeResultSuccess
class UInterchangeResultSuccess : public UInterchangeResult
{
public:

	static class UClass* StaticClass();
	static class UInterchangeResultSuccess* GetDefaultObj();

};

// 0x0 (0x60 - 0x60)
// Class InterchangeCore.InterchangeResultWarning
class UInterchangeResultWarning : public UInterchangeResult
{
public:

	static class UClass* StaticClass();
	static class UInterchangeResultWarning* GetDefaultObj();

};

// 0x0 (0x60 - 0x60)
// Class InterchangeCore.InterchangeResultError
class UInterchangeResultError : public UInterchangeResult
{
public:

	static class UClass* StaticClass();
	static class UInterchangeResultError* GetDefaultObj();

};

// 0x18 (0x78 - 0x60)
// Class InterchangeCore.InterchangeResultWarning_Generic
class UInterchangeResultWarning_Generic : public UInterchangeResultWarning
{
public:
	class FText                                  Text;                                              // 0x60(0x18)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInterchangeResultWarning_Generic* GetDefaultObj();

};

// 0x18 (0x78 - 0x60)
// Class InterchangeCore.InterchangeResultError_Generic
class UInterchangeResultError_Generic : public UInterchangeResultError
{
public:
	class FText                                  Text;                                              // 0x60(0x18)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInterchangeResultError_Generic* GetDefaultObj();

};

// 0x0 (0x60 - 0x60)
// Class InterchangeCore.InterchangeResultError_ReimportFail
class UInterchangeResultError_ReimportFail : public UInterchangeResultError
{
public:

	static class UClass* StaticClass();
	static class UInterchangeResultError_ReimportFail* GetDefaultObj();

};

// 0x18 (0x78 - 0x60)
// Class InterchangeCore.InterchangeResultDisplay_Generic
class UInterchangeResultDisplay_Generic : public UInterchangeResultSuccess
{
public:
	class FText                                  Text;                                              // 0x60(0x18)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInterchangeResultDisplay_Generic* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class InterchangeCore.InterchangeResultsContainer
class UInterchangeResultsContainer : public UObject
{
public:
	uint8                                        Pad_2D01[0x28];                                    // Fixing Size After Last Property 
	TArray<class UInterchangeResult*>            Results;                                           // 0x50(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UInterchangeResultsContainer* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class InterchangeCore.InterchangeTranslatorBase
class UInterchangeTranslatorBase : public UObject
{
public:
	class UInterchangeResultsContainer*          Results;                                           // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeSourceData*                SourceData;                                        // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInterchangeTranslatorBase* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class InterchangeCore.InterchangeBaseNode
class UInterchangeBaseNode : public UObject
{
public:
	uint8                                        Pad_2DC7[0x38];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeBaseNode* GetDefaultObj();

	bool SetParentUid(const class FString& ParentUid);
	bool SetEnabled(bool bIsEnabled);
	bool SetDisplayLabel(const class FString& DisplayName);
	bool SetAssetName(const class FString& AssetName);
	bool RemoveTargetNodeUid(const class FString& AssetUid);
	bool RemoveAttribute(const class FString& NodeAttributeKey);
	bool IsEnabled();
	void InitializeNode(const class FString& UniqueID, const class FString& DisplayLabel, enum class EInterchangeNodeContainerType NodeContainerType);
	bool GetVector2Attribute(const class FString& NodeAttributeKey, struct FVector2f* OutValue);
	class FString GetUniqueID();
	void GetTargetNodeUids(TArray<class FString>* OutTargetAssets);
	int32 GetTargetNodeCount();
	bool GetStringAttribute(const class FString& NodeAttributeKey, class FString* OutValue);
	class FString GetParentUid();
	enum class EInterchangeNodeContainerType GetNodeContainerType();
	bool GetLinearColorAttribute(const class FString& NodeAttributeKey, struct FLinearColor* OutValue);
	bool GetInt32Attribute(const class FString& NodeAttributeKey, int32* OutValue);
	bool GetGuidAttribute(const class FString& NodeAttributeKey, struct FGuid* OutValue);
	bool GetFloatAttribute(const class FString& NodeAttributeKey, float* OutValue);
	bool GetDoubleAttribute(const class FString& NodeAttributeKey, double* OutValue);
	class FString GetDisplayLabel();
	bool GetBooleanAttribute(const class FString& NodeAttributeKey, bool* OutValue);
	class FString GetAssetName();
	bool AddVector2Attribute(const class FString& NodeAttributeKey, struct FVector2f& Value);
	bool AddTargetNodeUid(const class FString& AssetUid);
	bool AddStringAttribute(const class FString& NodeAttributeKey, const class FString& Value);
	bool AddLinearColorAttribute(const class FString& NodeAttributeKey, struct FLinearColor& Value);
	bool AddInt32Attribute(const class FString& NodeAttributeKey, int32& Value);
	bool AddGuidAttribute(const class FString& NodeAttributeKey, struct FGuid& Value);
	bool AddFloatAttribute(const class FString& NodeAttributeKey, float& Value);
	bool AddDoubleAttribute(const class FString& NodeAttributeKey, double& Value);
	bool AddBooleanAttribute(const class FString& NodeAttributeKey, bool& Value);
};

// 0xA0 (0xC8 - 0x28)
// Class InterchangeCore.InterchangeBaseNodeContainer
class UInterchangeBaseNodeContainer : public UObject
{
public:
	TMap<class FString, class UInterchangeBaseNode*> Nodes;                                             // 0x28(0x50)(Edit, EditConst, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2E06[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeBaseNodeContainer* GetDefaultObj();

	bool SetNodeParentUid(const class FString& NodeUniqueID, const class FString& NewParentNodeUid);
	void SaveToFile(const class FString& Filename);
	void ResetChildrenCache();
	void ReplaceNode(const class FString& NodeUniqueID, class UInterchangeFactoryBaseNode* NewNode);
	void LoadFromFile(const class FString& Filename);
	bool IsNodeUidValid(const class FString& NodeUniqueID);
	void GetRoots(TArray<class FString>* RootNodes);
	void GetNodes(class UClass* ClassNode, TArray<class FString>* OutNodes);
	TArray<class FString> GetNodeChildrenUids(const class FString& NodeUniqueID);
	int32 GetNodeChildrenCount(const class FString& NodeUniqueID);
	class UInterchangeBaseNode* GetNodeChildren(const class FString& NodeUniqueID, int32 ChildIndex);
	class UInterchangeBaseNode* GetNode(const class FString& NodeUniqueID);
	class UInterchangeFactoryBaseNode* GetFactoryNode(const class FString& NodeUniqueID);
	void ComputeChildrenCache();
	class FString AddNode(class UInterchangeBaseNode* Node);
};

// 0xE0 (0x140 - 0x60)
// Class InterchangeCore.InterchangeFactoryBaseNode
class UInterchangeFactoryBaseNode : public UInterchangeBaseNode
{
public:
	uint8                                        Pad_2E4B[0xE0];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeFactoryBaseNode* GetDefaultObj();

	bool UnsetSkipNodeImport();
	bool UnsetForceNodeReimport();
	bool ShouldSkipNodeImport();
	bool ShouldForceNodeReimport();
	bool SetSkipNodeImport();
	bool SetReimportStrategyFlags(enum class EReimportStrategyFlags& ReimportStrategyFlags);
	bool SetForceNodeReimport();
	bool SetCustomSubPath(const class FString& AttributeValue);
	bool SetCustomReferenceObject(struct FSoftObjectPath& AttributeValue);
	bool RemoveFactoryDependencyUid(const class FString& DependencyUid);
	enum class EReimportStrategyFlags GetReimportStrategyFlags();
	void GetFactoryDependency(int32 Index, class FString* OutDependency);
	int32 GetFactoryDependenciesCount();
	void GetFactoryDependencies(TArray<class FString>* OutDependencies);
	bool GetCustomSubPath(class FString* AttributeValue);
	bool GetCustomReferenceObject(struct FSoftObjectPath* AttributeValue);
	bool AddFactoryDependencyUid(const class FString& DependencyUid);
};

// 0x70 (0xD0 - 0x60)
// Class InterchangeCore.InterchangeSourceNode
class UInterchangeSourceNode : public UInterchangeBaseNode
{
public:
	uint8                                        Pad_2E8D[0x70];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeSourceNode* GetDefaultObj();

	bool SetCustomSourceTimelineStart(double& AttributeValue);
	bool SetCustomSourceTimelineEnd(double& AttributeValue);
	bool SetCustomSourceFrameRateNumerator(int32& AttributeValue);
	bool SetCustomSourceFrameRateDenominator(int32& AttributeValue);
	bool SetCustomImportUnusedMaterial(bool& AttributeValue);
	bool SetCustomAnimatedTimeStart(double& AttributeValue);
	bool SetCustomAnimatedTimeEnd(double& AttributeValue);
	void InitializeSourceNode(const class FString& UniqueID, const class FString& DisplayLabel);
	bool GetCustomSourceTimelineStart(double* AttributeValue);
	bool GetCustomSourceTimelineEnd(double* AttributeValue);
	bool GetCustomSourceFrameRateNumerator(int32* AttributeValue);
	bool GetCustomSourceFrameRateDenominator(int32* AttributeValue);
	bool GetCustomImportUnusedMaterial(bool* AttributeValue);
	bool GetCustomAnimatedTimeStart(double* AttributeValue);
	bool GetCustomAnimatedTimeEnd(double* AttributeValue);
};

// 0x0 (0x28 - 0x28)
// Class InterchangeCore.InterchangeUserDefinedAttributesAPI
class UInterchangeUserDefinedAttributesAPI : public UObject
{
public:

	static class UClass* StaticClass();
	static class UInterchangeUserDefinedAttributesAPI* GetDefaultObj();

	bool RemoveUserDefinedAttribute(class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName);
	void GetUserDefinedAttributeInfos(class UInterchangeBaseNode* InterchangeNode, TArray<struct FInterchangeUserDefinedAttributeInfo>* UserDefinedAttributeInfos);
	bool GetUserDefinedAttribute_Int32(class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName, int32* OutValue, class FString* OutPayloadKey);
	bool GetUserDefinedAttribute_FString(class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName, class FString* OutValue, class FString* OutPayloadKey);
	bool GetUserDefinedAttribute_Float(class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName, float* OutValue, class FString* OutPayloadKey);
	bool GetUserDefinedAttribute_Double(class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName, double* OutValue, class FString* OutPayloadKey);
	bool GetUserDefinedAttribute_Boolean(class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName, bool* OutValue, class FString* OutPayloadKey);
	void DuplicateAllUserDefinedAttribute(class UInterchangeBaseNode* InterchangeSourceNode, class UInterchangeBaseNode* InterchangeDestinationNode, bool bAddSourceNodeName);
	bool CreateUserDefinedAttribute_Int32(class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName, int32& Value, const class FString& PayloadKey);
	bool CreateUserDefinedAttribute_FString(class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName, const class FString& Value, const class FString& PayloadKey);
	bool CreateUserDefinedAttribute_Float(class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName, float& Value, const class FString& PayloadKey);
	bool CreateUserDefinedAttribute_Double(class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName, double& Value, const class FString& PayloadKey);
	bool CreateUserDefinedAttribute_Boolean(class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName, bool& Value, const class FString& PayloadKey);
};

}


