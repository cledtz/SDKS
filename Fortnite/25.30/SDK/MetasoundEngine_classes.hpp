#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

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
	uint8                                        Pad_2C15[0xB8];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MetasoundGeneratorHandle");
		return Clss;
	}

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MetasoundOutputBlueprintAccess");
		return Clss;
	}

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MetaSoundOutputSubsystem");
		return Clss;
	}

	bool WatchOutput(class UAudioComponent* AudioComponent, class FName OutputName, FDelegateProperty_& OnOutputValueChanged, class FName AnalyzerName, class FName AnalyzerOutputName);
};

// 0x48 (0x78 - 0x30)
// Class MetasoundEngine.MetaSoundSettings
class UMetaSoundSettings : public UDeveloperSettings
{
public:
	bool                                         bAutoUpdateEnabled;                                // 0x30(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C43[0x7];                                     // Fixing Size After Last Property
	TArray<struct FMetasoundFrontendClassName>   AutoUpdateDenylist;                                // 0x38(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FDefaultMetaSoundAssetAutoUpdateSettings> AutoUpdateAssetDenylist;                           // 0x48(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                         bAutoUpdateLogWarningOnDroppedConnection;          // 0x58(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C45[0x7];                                     // Fixing Size After Last Property
	TArray<struct FDirectoryPath>                DirectoriesToRegister;                             // 0x60(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	int32                                        DenyListCacheChangeID;                             // 0x70(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C46[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MetaSoundSettings");
		return Clss;
	}

};

// 0x0 (0x60 - 0x60)
// Class MetasoundEngine.MetasoundEditorGraphBase
class UMetasoundEditorGraphBase : public UEdGraph
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MetasoundEditorGraphBase");
		return Clss;
	}

};

// 0x328 (0x350 - 0x28)
// Class MetasoundEngine.MetaSoundPatch
class UMetaSoundPatch : public UObject
{
public:
	uint8                                        Pad_2C48[0x70];                                    // Fixing Size After Last Property
	struct FMetasoundFrontendDocument            RootMetaSoundDocument;                             // 0x98(0x1B8)(Edit, Protected, NativeAccessSpecifierProtected)
	TSet<class FString>                          ReferencedAssetClassKeys;                          // 0x250(0x50)(Protected, NativeAccessSpecifierProtected)
	TSet<class UObject*>                         ReferencedAssetClassObjects;                       // 0x2A0(0x50)(Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TSet<struct FSoftObjectPath>                 ReferenceAssetClassCache;                          // 0x2F0(0x50)(Protected, NativeAccessSpecifierProtected)
	struct FGuid                                 AssetClassID;                                      // 0x340(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MetaSoundPatch");
		return Clss;
	}

};

// 0x1B0 (0x1E0 - 0x30)
// Class MetasoundEngine.MetaSoundAssetSubsystem
class UMetaSoundAssetSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_2C56[0x8];                                     // Fixing Size After Last Property
	TArray<struct FMetaSoundAsyncAssetDependencies> LoadingDependencies;                               // 0x38(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2C57[0x198];                                   // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MetaSoundAssetSubsystem");
		return Clss;
	}

	void UnregisterAssetClassesInDirectories(TArray<struct FMetaSoundAssetDirectory>& Directories);
	void RegisterAssetClassesInDirectories(TArray<struct FMetaSoundAssetDirectory>& Directories);
};

// 0x18 (0x40 - 0x28)
// Class MetasoundEngine.MetaSoundBuilderBase
class UMetaSoundBuilderBase : public UObject
{
public:
	struct FMetaSoundFrontendDocumentBuilder     Builder;                                           // 0x28(0x18)(Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MetaSoundBuilderBase");
		return Clss;
	}

	void SetNodeInputDefault(struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, struct FMetasoundFrontendLiteral& Literal, enum class EMetaSoundBuilderResult* OutResult);
	void RemoveNode(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult* OutResult);
	void RemoveInterface(class FName InterfaceName, enum class EMetaSoundBuilderResult* OutResult);
	void RemoveGraphOutput(class FName Name, enum class EMetaSoundBuilderResult* OutResult);
	void RemoveGraphInput(class FName Name, enum class EMetaSoundBuilderResult* OutResult);
	bool NodesAreConnected(struct FMetaSoundBuilderNodeOutputHandle& OutputHandle, struct FMetaSoundBuilderNodeInputHandle& InputHandle);
	bool NodeOutputIsConnected(struct FMetaSoundBuilderNodeOutputHandle& OutputHandle);
	bool NodeInputIsConnected(struct FMetaSoundBuilderNodeInputHandle& InputHandle);
	bool InterfaceIsDeclared(class FName InterfaceName);
	void GetNodeOutputData(struct FMetaSoundBuilderNodeOutputHandle& OutputHandle, class FName* Name, class FName* DataType, enum class EMetaSoundBuilderResult* OutResult);
	void GetNodeInputData(struct FMetaSoundBuilderNodeInputHandle& InputHandle, class FName* Name, class FName* DataType, enum class EMetaSoundBuilderResult* OutResult);
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
	bool ContainsNodeOutput(struct FMetaSoundBuilderNodeOutputHandle& Output);
	bool ContainsNodeInput(struct FMetaSoundBuilderNodeInputHandle& Input);
	bool ContainsNode(struct FMetaSoundNodeHandle& Node);
	void ConnectNodesByInterfaceBindings(struct FMetaSoundNodeHandle& FromNodeHandle, struct FMetaSoundNodeHandle& ToNodeHandle, enum class EMetaSoundBuilderResult* OutResult);
	void ConnectNodes(struct FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, enum class EMetaSoundBuilderResult* OutResult);
	void ConnectNodeOutputToGraphOutput(class FName GraphOutputName, struct FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, enum class EMetaSoundBuilderResult* OutResult);
	TArray<struct FMetaSoundBuilderNodeInputHandle> ConnectNodeOutputsToMatchingGraphInterfaceOutputs(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult* OutResult);
	void ConnectNodeInputToGraphInput(class FName GraphInputName, struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, enum class EMetaSoundBuilderResult* OutResult);
	TArray<struct FMetaSoundBuilderNodeOutputHandle> ConnectNodeInputsToMatchingGraphInterfaceInputs(struct FMetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult* OutResult);
	struct FMetaSoundNodeHandle AddNode(TScriptInterface<class UMetaSoundDocumentInterface>& NodeClass, enum class EMetaSoundBuilderResult* OutResult);
	void AddInterface(class FName InterfaceName, enum class EMetaSoundBuilderResult* OutResult);
	struct FMetaSoundBuilderNodeInputHandle AddGraphOutputNode(class FName Name, class FName DataType, const struct FMetasoundFrontendLiteral& DefaultValue, enum class EMetaSoundBuilderResult* OutResult, bool bIsConstructorInput);
	struct FMetaSoundBuilderNodeOutputHandle AddGraphInputNode(class FName Name, class FName DataType, const struct FMetasoundFrontendLiteral& DefaultValue, enum class EMetaSoundBuilderResult* OutResult, bool bIsConstructorInput);
};

// 0x0 (0x40 - 0x40)
// Class MetasoundEngine.MetaSoundPatchBuilder
class UMetaSoundPatchBuilder : public UMetaSoundBuilderBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MetaSoundPatchBuilder");
		return Clss;
	}

	TScriptInterface<class UMetaSoundDocumentInterface> Build(class UObject* Parent, struct FMetaSoundBuilderOptions& Options);
};

// 0x8 (0x48 - 0x40)
// Class MetasoundEngine.MetaSoundSourceBuilder
class UMetaSoundSourceBuilder : public UMetaSoundBuilderBase
{
public:
	uint8                                        Pad_2CD5[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MetaSoundSourceBuilder");
		return Clss;
	}

	void SetFormat(enum class EMetaSoundOutputAudioFormat OutputFormat, enum class EMetaSoundBuilderResult* OutResult);
	TScriptInterface<class UMetaSoundDocumentInterface> Build(class UObject* Parent, struct FMetaSoundBuilderOptions& Options);
	void Audition(class UObject* Parent, class UAudioComponent* AudioComponent, FDelegateProperty_ OnCreateGenerator);
};

// 0xA0 (0xD0 - 0x30)
// Class MetasoundEngine.MetaSoundBuilderSubsystem
class UMetaSoundBuilderSubsystem : public UEngineSubsystem
{
public:
	TMap<class FName, class UMetaSoundPatchBuilder*> PatchBuilders;                                     // 0x30(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<class FName, class UMetaSoundSourceBuilder*> SourceBuilders;                                    // 0x80(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MetaSoundBuilderSubsystem");
		return Clss;
	}

	bool UnregisterSourceBuilder(class FName BuilderName);
	bool UnregisterPatchBuilder(class FName BuilderName);
	void RegisterSourceBuilder(class FName BuilderName, class UMetaSoundSourceBuilder* Builder);
	void RegisterPatchBuilder(class FName BuilderName, class UMetaSoundPatchBuilder* Builder);
	bool IsInterfaceRegistered(class FName InInterfaceName);
	class UMetaSoundSourceBuilder* FindSourceBuilder(class FName BuilderName);
	class UMetaSoundPatchBuilder* FindPatchBuilder(class FName BuilderName);
	struct FMetasoundFrontendLiteral CreateStringMetaSoundLiteral(const class FString& Value, class FName* DataType);
	struct FMetasoundFrontendLiteral CreateStringArrayMetaSoundLiteral(TArray<class FString>& Value, class FName* DataType);
	class UMetaSoundSourceBuilder* CreateSourceBuilder(class FName BuilderName, struct FMetaSoundBuilderNodeOutputHandle* OnPlayNodeOutput, struct FMetaSoundBuilderNodeInputHandle* OnFinishedNodeInput, TArray<struct FMetaSoundBuilderNodeInputHandle>* AudioOutNodeInputs, enum class EMetaSoundBuilderResult* OutResult, enum class EMetaSoundOutputAudioFormat OutputFormat, bool bIsOneShot);
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

// 0x3F0 (0x870 - 0x480)
// Class MetasoundEngine.MetaSoundSource
class UMetaSoundSource : public USoundWaveProcedural
{
public:
	uint8                                        Pad_2D4E[0x70];                                    // Fixing Size After Last Property
	struct FMetasoundFrontendDocument            RootMetaSoundDocument;                             // 0x4F0(0x1B8)(Edit, Protected, NativeAccessSpecifierProtected)
	TSet<class FString>                          ReferencedAssetClassKeys;                          // 0x6A8(0x50)(Protected, NativeAccessSpecifierProtected)
	TSet<class UObject*>                         ReferencedAssetClassObjects;                       // 0x6F8(0x50)(Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TSet<struct FSoftObjectPath>                 ReferenceAssetClassCache;                          // 0x748(0x50)(Protected, NativeAccessSpecifierProtected)
	enum class EMetaSoundOutputAudioFormat       OutputFormat;                                      // 0x798(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D52[0x3];                                     // Fixing Size After Last Property
	struct FGuid                                 AssetClassID;                                      // 0x79C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D53[0xC4];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MetaSoundSource");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
