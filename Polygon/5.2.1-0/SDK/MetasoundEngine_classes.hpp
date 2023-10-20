#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x70 - 0x28)
// Class MetasoundEngine.MetasoundGeneratorHandle
class UMetasoundGeneratorHandle : public UObject
{
public:
	class UAudioComponent*                       AudioComponent;                                    // 0x28(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1C26[0x8];                                     // Fixing Size After Last Property 
	class UMetaSoundSource*                      CachedMetasoundSource;                             // 0x38(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1C27[0x30];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMetasoundGeneratorHandle* GetDefaultObj();

	class UMetasoundGeneratorHandle* CreateMetaSoundGeneratorHandle(class UAudioComponent* OnComponent);
	bool ApplyParameterPack(class UMetasoundParameterPack* Pack);
};

// 0x48 (0x80 - 0x38)
// Class MetasoundEngine.MetaSoundSettings
class UMetaSoundSettings : public UDeveloperSettings
{
public:
	bool                                         bAutoUpdateEnabled;                                // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C2E[0x7];                                     // Fixing Size After Last Property 
	TArray<struct FMetasoundFrontendClassName>   AutoUpdateDenylist;                                // 0x40(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FDefaultMetaSoundAssetAutoUpdateSettings> AutoUpdateAssetDenylist;                           // 0x50(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                         bAutoUpdateLogWarningOnDroppedConnection;          // 0x60(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C32[0x7];                                     // Fixing Size After Last Property 
	TArray<struct FDirectoryPath>                DirectoriesToRegister;                             // 0x68(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	int32                                        DenyListCacheChangeID;                             // 0x78(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C33[0x4];                                     // Fixing Size Of Struct

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

// 0x330 (0x358 - 0x28)
// Class MetasoundEngine.MetaSoundPatch
class UMetaSoundPatch : public UObject
{
public:
	uint8                                        Pad_1C3F[0x68];                                    // Fixing Size After Last Property 
	struct FMetasoundFrontendDocument            RootMetaSoundDocument;                             // 0x90(0x1C8)(Edit, Protected, NativeAccessSpecifierProtected)
	TSet<class FString>                          ReferencedAssetClassKeys;                          // 0x258(0x50)(Protected, NativeAccessSpecifierProtected)
	TSet<class UObject*>                         ReferencedAssetClassObjects;                       // 0x2A8(0x50)(Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TSet<struct FSoftObjectPath>                 ReferenceAssetClassCache;                          // 0x2F8(0x50)(Protected, NativeAccessSpecifierProtected)
	struct FGuid                                 AssetClassID;                                      // 0x348(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMetaSoundPatch* GetDefaultObj();

};

// 0x1B0 (0x1E0 - 0x30)
// Class MetasoundEngine.MetaSoundAssetSubsystem
class UMetaSoundAssetSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_1C4F[0x8];                                     // Fixing Size After Last Property 
	TArray<struct FMetaSoundAsyncAssetDependencies> LoadingDependencies;                               // 0x38(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1C50[0x198];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMetaSoundAssetSubsystem* GetDefaultObj();

	void UnregisterAssetClassesInDirectories(TArray<struct FMetaSoundAssetDirectory>& Directories);
	void RegisterAssetClassesInDirectories(TArray<struct FMetaSoundAssetDirectory>& Directories);
};

// 0x3A0 (0x840 - 0x4A0)
// Class MetasoundEngine.MetaSoundSource
class UMetaSoundSource : public USoundWaveProcedural
{
public:
	uint8                                        Pad_1C57[0x68];                                    // Fixing Size After Last Property 
	struct FMetasoundFrontendDocument            RootMetaSoundDocument;                             // 0x508(0x1C8)(Edit, Protected, NativeAccessSpecifierProtected)
	TSet<class FString>                          ReferencedAssetClassKeys;                          // 0x6D0(0x50)(Protected, NativeAccessSpecifierProtected)
	TSet<class UObject*>                         ReferencedAssetClassObjects;                       // 0x720(0x50)(Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TSet<struct FSoftObjectPath>                 ReferenceAssetClassCache;                          // 0x770(0x50)(Protected, NativeAccessSpecifierProtected)
	enum class EMetasoundSourceAudioFormat       OutputFormat;                                      // 0x7C0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C5C[0x3];                                     // Fixing Size After Last Property 
	struct FGuid                                 AssetClassID;                                      // 0x7C4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C5D[0x6C];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMetaSoundSource* GetDefaultObj();

};

}


