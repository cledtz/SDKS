#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0xE0 - 0x28)
// Class MetasoundEngine.MetasoundGeneratorHandle
class UMetasoundGeneratorHandle : public UObject
{
public:
	uint8                                        Pad_2153[0xB8];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMetasoundGeneratorHandle* GetDefaultObj();

	bool WatchOutput(class FName OutputName, FDelegateProperty_& OnOutputValueChanged, class FName AnalyzerName, class FName AnalyzerOutputName);
	void OnOutputValueChangedMulticast__DelegateSignature(class FName Name, struct FMetaSoundOutput& Output);
	class UMetasoundGeneratorHandle* CreateMetaSoundGeneratorHandle(class UAudioComponent* OnComponent);
	bool ApplyParameterPack(class UMetasoundParameterPack* Pack);
};

// 0x0 (0x28 - 0x28)
// Class MetasoundEngine.MetasoundOutputBlueprintAccess
class UMetasoundOutputBlueprintAccess : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMetasoundOutputBlueprintAccess* GetDefaultObj();

	bool IsTime(struct FMetaSoundOutput& Output);
	bool IsString(struct FMetaSoundOutput& Output);
	bool IsInt32(struct FMetaSoundOutput& Output);
	bool IsFloat(struct FMetaSoundOutput& Output);
	bool IsBool(struct FMetaSoundOutput& Output);
	float GetTimeSeconds(struct FMetaSoundOutput& Output, bool* Success);
	class FString GetString(struct FMetaSoundOutput& Output, bool* Success);
	int32 GetInt32(struct FMetaSoundOutput& Output, bool* Success);
	float GetFloat(struct FMetaSoundOutput& Output, bool* Success);
	bool GetBool(struct FMetaSoundOutput& Output, bool* Success);
};

// 0x10 (0x50 - 0x40)
// Class MetasoundEngine.MetaSoundOutputSubsystem
class UMetaSoundOutputSubsystem : public UTickableWorldSubsystem
{
public:
	TArray<class UMetasoundGeneratorHandle*>     TrackedGenerators;                                 // 0x40(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMetaSoundOutputSubsystem* GetDefaultObj();

	bool WatchOutput(class UAudioComponent* AudioComponent, class FName OutputName, FDelegateProperty_& OnOutputValueChanged, class FName AnalyzerName, class FName AnalyzerOutputName);
};

// 0x48 (0x78 - 0x30)
// Class MetasoundEngine.MetaSoundSettings
class UMetaSoundSettings : public UDeveloperSettings
{
public:
	bool                                         bAutoUpdateEnabled;                                // 0x30(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21AD[0x7];                                     // Fixing Size After Last Property 
	TArray<struct FMetasoundFrontendClassName>   AutoUpdateDenylist;                                // 0x38(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FDefaultMetaSoundAssetAutoUpdateSettings> AutoUpdateAssetDenylist;                           // 0x48(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                         bAutoUpdateLogWarningOnDroppedConnection;          // 0x58(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21AF[0x7];                                     // Fixing Size After Last Property 
	TArray<struct FDirectoryPath>                DirectoriesToRegister;                             // 0x60(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	int32                                        DenyListCacheChangeID;                             // 0x70(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21B2[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMetaSoundSettings* GetDefaultObj();

};

// 0x0 (0x60 - 0x60)
// Class MetasoundEngine.MetasoundEditorGraphBase
class UMetasoundEditorGraphBase : public UEdGraph
{
public:

	static class UClass* StaticClass();
	static class UMetasoundEditorGraphBase* GetDefaultObj();

};

// 0x328 (0x350 - 0x28)
// Class MetasoundEngine.MetaSoundPatch
class UMetaSoundPatch : public UObject
{
public:
	uint8                                        Pad_21BB[0x70];                                    // Fixing Size After Last Property 
	struct FMetasoundFrontendDocument            RootMetaSoundDocument;                             // 0x98(0x1B8)(Edit, Protected, NativeAccessSpecifierProtected)
	TSet<class FString>                          ReferencedAssetClassKeys;                          // 0x250(0x50)(Protected, NativeAccessSpecifierProtected)
	TSet<class UObject*>                         ReferencedAssetClassObjects;                       // 0x2A0(0x50)(Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TSet<struct FSoftObjectPath>                 ReferenceAssetClassCache;                          // 0x2F0(0x50)(Protected, NativeAccessSpecifierProtected)
	struct FGuid                                 AssetClassID;                                      // 0x340(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMetaSoundPatch* GetDefaultObj();

};

// 0x1B0 (0x1E0 - 0x30)
// Class MetasoundEngine.MetaSoundAssetSubsystem
class UMetaSoundAssetSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_21C4[0x8];                                     // Fixing Size After Last Property 
	TArray<struct FMetaSoundAsyncAssetDependencies> LoadingDependencies;                               // 0x38(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_21C6[0x198];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMetaSoundAssetSubsystem* GetDefaultObj();

	void UnregisterAssetClassesInDirectories(TArray<struct FMetaSoundAssetDirectory>& Directories);
	void RegisterAssetClassesInDirectories(TArray<struct FMetaSoundAssetDirectory>& Directories);
};

// 0x38 (0x60 - 0x28)
// Class MetasoundEngine.MetaSoundBuilderBase
class UMetaSoundBuilderBase : public UObject
{
public:
	struct FMetaSoundFrontendDocumentBuilder     Builder;                                           // 0x28(0x30)(Protected, NativeAccessSpecifierProtected)
	bool                                         bIsAttached;                                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_22D0[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMetaSoundBuilderBase* GetDefaultObj();

	void SetNodeInputDefault(struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, struct FMetasoundFrontendLiteral& Literal, enum class EMetaSoundBuilderResult* OutResult);
	void SetGraphInputDefault(class FName InputName, struct FMetasoundFrontendLiteral& Literal, enum class EMetaSoundBuilderResult* OutResult);
	void RemoveNodeInputDefault(struct FMetaSoundBuilderNodeInputHandle& InputHandle, enum class EMetaSoundBuilderResult* OutResult);
	void RemoveNode(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult* OutResult);
	void RemoveInterface(class FName InterfaceName, enum class EMetaSoundBuilderResult* OutResult);
	void RemoveGraphOutput(class FName Name, enum class EMetaSoundBuilderResult* OutResult);
	void RemoveGraphInput(class FName Name, enum class EMetaSoundBuilderResult* OutResult);
	bool NodesAreConnected(struct FMetaSoundBuilderNodeOutputHandle& OutputHandle, struct FMetaSoundBuilderNodeInputHandle& InputHandle);
	bool NodeOutputIsConnected(struct FMetaSoundBuilderNodeOutputHandle& OutputHandle);
	bool NodeInputIsConnected(struct FMetaSoundBuilderNodeInputHandle& InputHandle);
	bool IsPreset();
	bool InterfaceIsDeclared(class FName InterfaceName);
	class UObject* GetReferencedPresetAsset();
	void GetNodeOutputData(struct FMetaSoundBuilderNodeOutputHandle& OutputHandle, class FName* Name, class FName* DataType, enum class EMetaSoundBuilderResult* OutResult);
	struct FMetasoundFrontendLiteral GetNodeInputDefault(struct FMetaSoundBuilderNodeInputHandle& InputHandle, enum class EMetaSoundBuilderResult* OutResult);
	void GetNodeInputData(struct FMetaSoundBuilderNodeInputHandle& InputHandle, class FName* Name, class FName* DataType, enum class EMetaSoundBuilderResult* OutResult);
	struct FMetasoundFrontendLiteral GetNodeInputClassDefault(struct FMetaSoundBuilderNodeInputHandle& InputHandle, enum class EMetaSoundBuilderResult* OutResult);
	TArray<struct FMetaSoundBuilderNodeOutputHandle> FindNodeOutputsByDataType(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult* OutResult, class FName DataType);
	TArray<struct FMetaSoundBuilderNodeOutputHandle> FindNodeOutputs(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult* OutResult);
	struct FMetaSoundNodeHandle FindNodeOutputParent(struct FMetaSoundBuilderNodeOutputHandle& OutputHandle, enum class EMetaSoundBuilderResult* OutResult);
	struct FMetaSoundBuilderNodeOutputHandle FindNodeOutputByName(struct FMetaSoundNodeHandle& NodeHandle, class FName OutputName, enum class EMetaSoundBuilderResult* OutResult);
	TArray<struct FMetaSoundBuilderNodeInputHandle> FindNodeInputsByDataType(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult* OutResult, class FName DataType);
	TArray<struct FMetaSoundBuilderNodeInputHandle> FindNodeInputs(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult* OutResult);
	struct FMetaSoundNodeHandle FindNodeInputParent(struct FMetaSoundBuilderNodeInputHandle& InputHandle, enum class EMetaSoundBuilderResult* OutResult);
	struct FMetaSoundBuilderNodeInputHandle FindNodeInputByName(struct FMetaSoundNodeHandle& NodeHandle, class FName InputName, enum class EMetaSoundBuilderResult* OutResult);
	struct FMetasoundFrontendVersion FindNodeClassVersion(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult* OutResult);
	TArray<struct FMetaSoundNodeHandle> FindInterfaceOutputNodes(class FName InterfaceName, enum class EMetaSoundBuilderResult* OutResult);
	TArray<struct FMetaSoundNodeHandle> FindInterfaceInputNodes(class FName InterfaceName, enum class EMetaSoundBuilderResult* OutResult);
	struct FMetaSoundNodeHandle FindGraphOutputNode(class FName OutputName, enum class EMetaSoundBuilderResult* OutResult);
	struct FMetaSoundNodeHandle FindGraphInputNode(class FName InputName, enum class EMetaSoundBuilderResult* OutResult);
	void DisconnectNodesByInterfaceBindings(struct FMetaSoundNodeHandle& FromNodeHandle, struct FMetaSoundNodeHandle& ToNodeHandle, enum class EMetaSoundBuilderResult* OutResult);
	void DisconnectNodes(struct FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, enum class EMetaSoundBuilderResult* OutResult);
	void DisconnectNodeOutput(struct FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, enum class EMetaSoundBuilderResult* OutResult);
	void DisconnectNodeInput(struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, enum class EMetaSoundBuilderResult* OutResult);
	void ConvertToPreset(TScriptInterface<class UMetaSoundDocumentInterface>& ReferencedNodeClass, enum class EMetaSoundBuilderResult* OutResult);
	void ConvertFromPreset(enum class EMetaSoundBuilderResult* OutResult);
	bool ContainsNodeOutput(struct FMetaSoundBuilderNodeOutputHandle& Output);
	bool ContainsNodeInput(struct FMetaSoundBuilderNodeInputHandle& Input);
	bool ContainsNode(struct FMetaSoundNodeHandle& Node);
	void ConnectNodesByInterfaceBindings(struct FMetaSoundNodeHandle& FromNodeHandle, struct FMetaSoundNodeHandle& ToNodeHandle, enum class EMetaSoundBuilderResult* OutResult);
	void ConnectNodes(struct FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, enum class EMetaSoundBuilderResult* OutResult);
	void ConnectNodeOutputToGraphOutput(class FName GraphOutputName, struct FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, enum class EMetaSoundBuilderResult* OutResult);
	TArray<struct FMetaSoundBuilderNodeInputHandle> ConnectNodeOutputsToMatchingGraphInterfaceOutputs(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult* OutResult);
	void ConnectNodeInputToGraphInput(class FName GraphInputName, struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, enum class EMetaSoundBuilderResult* OutResult);
	TArray<struct FMetaSoundBuilderNodeOutputHandle> ConnectNodeInputsToMatchingGraphInterfaceInputs(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult* OutResult);
	struct FMetaSoundNodeHandle AddNodeByClassName(struct FMetasoundFrontendClassName& ClassName, int32 MajorVersion, enum class EMetaSoundBuilderResult* OutResult);
	struct FMetaSoundNodeHandle AddNode(TScriptInterface<class UMetaSoundDocumentInterface>& NodeClass, enum class EMetaSoundBuilderResult* OutResult);
	void AddInterface(class FName InterfaceName, enum class EMetaSoundBuilderResult* OutResult);
	struct FMetaSoundBuilderNodeInputHandle AddGraphOutputNode(class FName Name, class FName DataType, const struct FMetasoundFrontendLiteral& DefaultValue, enum class EMetaSoundBuilderResult* OutResult, bool bIsConstructorOutput);
	struct FMetaSoundBuilderNodeOutputHandle AddGraphInputNode(class FName Name, class FName DataType, const struct FMetasoundFrontendLiteral& DefaultValue, enum class EMetaSoundBuilderResult* OutResult, bool bIsConstructorInput);
};

// 0x0 (0x60 - 0x60)
// Class MetasoundEngine.MetaSoundPatchBuilder
class UMetaSoundPatchBuilder : public UMetaSoundBuilderBase
{
public:

	static class UClass* StaticClass();
	static class UMetaSoundPatchBuilder* GetDefaultObj();

	TScriptInterface<class UMetaSoundDocumentInterface> Build(class UObject* Parent, struct FMetaSoundBuilderOptions& Options);
};

// 0x8 (0x68 - 0x60)
// Class MetasoundEngine.MetaSoundSourceBuilder
class UMetaSoundSourceBuilder : public UMetaSoundBuilderBase
{
public:
	uint8                                        Pad_22EB[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMetaSoundSourceBuilder* GetDefaultObj();

	void SetFormat(enum class EMetaSoundOutputAudioFormat OutputFormat, enum class EMetaSoundBuilderResult* OutResult);
	bool GetLiveUpdatesEnabled();
	TScriptInterface<class UMetaSoundDocumentInterface> Build(class UObject* Parent, struct FMetaSoundBuilderOptions& Options);
	void Audition(class UObject* Parent, class UAudioComponent* AudioComponent, FDelegateProperty_ OnCreateGenerator, bool bLiveUpdatesEnabled);
};

// 0xA8 (0xD8 - 0x30)
// Class MetasoundEngine.MetaSoundBuilderSubsystem
class UMetaSoundBuilderSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_236E[0x8];                                     // Fixing Size After Last Property 
	TMap<class FName, class UMetaSoundBuilderBase*> NamedBuilders;                                     // 0x38(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<class FName, TWeakObjectPtr<class UMetaSoundBuilderBase>> AssetBuilders;                                     // 0x88(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMetaSoundBuilderSubsystem* GetDefaultObj();

	bool UnregisterSourceBuilder(class FName BuilderName);
	bool UnregisterPatchBuilder(class FName BuilderName);
	bool UnregisterBuilder(class FName BuilderName);
	void RegisterSourceBuilder(class FName BuilderName, class UMetaSoundSourceBuilder* Builder);
	void RegisterPatchBuilder(class FName BuilderName, class UMetaSoundPatchBuilder* Builder);
	void RegisterBuilder(class FName BuilderName, class UMetaSoundBuilderBase* Builder);
	bool IsInterfaceRegistered(class FName InInterfaceName);
	class UMetaSoundSourceBuilder* FindSourceBuilder(class FName BuilderName);
	class UMetaSoundPatchBuilder* FindPatchBuilder(class FName BuilderName);
	class UMetaSoundBuilderBase* FindBuilder(class FName BuilderName);
	struct FMetasoundFrontendLiteral CreateStringMetaSoundLiteral(const class FString& Value, class FName* DataType);
	struct FMetasoundFrontendLiteral CreateStringArrayMetaSoundLiteral(TArray<class FString>& Value, class FName* DataType);
	class UMetaSoundSourceBuilder* CreateSourcePresetBuilder(class FName BuilderName, TScriptInterface<class UMetaSoundDocumentInterface>& ReferencedSourceClass, enum class EMetaSoundBuilderResult* OutResult);
	class UMetaSoundSourceBuilder* CreateSourceBuilder(class FName BuilderName, struct FMetaSoundBuilderNodeOutputHandle* OnPlayNodeOutput, struct FMetaSoundBuilderNodeInputHandle* OnFinishedNodeInput, TArray<struct FMetaSoundBuilderNodeInputHandle>* AudioOutNodeInputs, enum class EMetaSoundBuilderResult* OutResult, enum class EMetaSoundOutputAudioFormat OutputFormat, bool bIsOneShot);
	class UMetaSoundPatchBuilder* CreatePatchPresetBuilder(class FName BuilderName, TScriptInterface<class UMetaSoundDocumentInterface>& ReferencedPatchClass, enum class EMetaSoundBuilderResult* OutResult);
	class UMetaSoundPatchBuilder* CreatePatchBuilder(class FName BuilderName, enum class EMetaSoundBuilderResult* OutResult);
	struct FMetasoundFrontendLiteral CreateObjectMetaSoundLiteral(class UObject* Value);
	struct FMetasoundFrontendLiteral CreateObjectArrayMetaSoundLiteral(TArray<class UObject*>& Value);
	struct FMetasoundFrontendLiteral CreateMetaSoundLiteralFromParam(struct FAudioParameter& Param);
	struct FMetasoundFrontendLiteral CreateIntMetaSoundLiteral(int32 Value, class FName* DataType);
	struct FMetasoundFrontendLiteral CreateIntArrayMetaSoundLiteral(TArray<int32>& Value, class FName* DataType);
	struct FMetasoundFrontendLiteral CreateFloatMetaSoundLiteral(float Value, class FName* DataType);
	struct FMetasoundFrontendLiteral CreateFloatArrayMetaSoundLiteral(TArray<float>& Value, class FName* DataType);
	struct FMetasoundFrontendLiteral CreateBoolMetaSoundLiteral(bool Value, class FName* DataType);
	struct FMetasoundFrontendLiteral CreateBoolArrayMetaSoundLiteral(TArray<bool>& Value, class FName* DataType);
};

// 0x400 (0x880 - 0x480)
// Class MetasoundEngine.MetaSoundSource
class UMetaSoundSource : public USoundWaveProcedural
{
public:
	uint8                                        Pad_2375[0x70];                                    // Fixing Size After Last Property 
	struct FMetasoundFrontendDocument            RootMetaSoundDocument;                             // 0x4F0(0x1B8)(Edit, Protected, NativeAccessSpecifierProtected)
	TSet<class FString>                          ReferencedAssetClassKeys;                          // 0x6A8(0x50)(Protected, NativeAccessSpecifierProtected)
	TSet<class UObject*>                         ReferencedAssetClassObjects;                       // 0x6F8(0x50)(Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TSet<struct FSoftObjectPath>                 ReferenceAssetClassCache;                          // 0x748(0x50)(Protected, NativeAccessSpecifierProtected)
	enum class EMetaSoundOutputAudioFormat       OutputFormat;                                      // 0x798(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2377[0x3];                                     // Fixing Size After Last Property 
	struct FGuid                                 AssetClassID;                                      // 0x79C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2378[0xD4];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMetaSoundSource* GetDefaultObj();

};

}


