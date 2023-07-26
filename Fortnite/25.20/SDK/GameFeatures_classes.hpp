#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class GameFeatures.GameFeatureStateChangeObserver
class UGameFeatureStateChangeObserver : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameFeatureStateChangeObserver");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class GameFeatures.GameFeatureAction
class UGameFeatureAction : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameFeatureAction");
		return Clss;
	}

};

// 0x38 (0x60 - 0x28)
// Class GameFeatures.GameFeatureAction_AddCheats
class UGameFeatureAction_AddCheats : public UGameFeatureAction
{
public:
	TArray<TSoftClassPtr<class UCheatManagerExtension>> CheatManagers;                                     // 0x28(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bLoadCheatManagersAsync;                           // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EEF[0xF];                                     // Fixing Size After Last Property..
	TArray<TWeakObjectPtr<class UCheatManagerExtension>> SpawnedCheatManagers;                              // 0x48(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EF0[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameFeatureAction_AddCheats");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class GameFeatures.GameFeatureAction_AddChunkOverride
class UGameFeatureAction_AddChunkOverride : public UGameFeatureAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameFeatureAction_AddChunkOverride");
		return Clss;
	}

};

// 0x60 (0x88 - 0x28)
// Class GameFeatures.GameFeatureAction_AddComponents
class UGameFeatureAction_AddComponents : public UGameFeatureAction
{
public:
	TArray<struct FGameFeatureComponentEntry>    ComponentList;                                     // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EF1[0x50];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameFeatureAction_AddComponents");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class GameFeatures.GameFeatureAction_AddWPContent
class UGameFeatureAction_AddWPContent : public UGameFeatureAction
{
public:
	class UContentBundleDescriptor*              ContentBundleDescriptor;                           // 0x28(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EF2[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameFeatureAction_AddWPContent");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class GameFeatures.GameFeatureAction_DataRegistry
class UGameFeatureAction_DataRegistry : public UGameFeatureAction
{
public:
	TArray<TSoftObjectPtr<class UDataRegistry>>  RegistriesToAdd;                                   // 0x28(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                         bPreloadInEditor;                                  // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EF3[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameFeatureAction_DataRegistry");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class GameFeatures.GameFeatureAction_DataRegistrySource
class UGameFeatureAction_DataRegistrySource : public UGameFeatureAction
{
public:
	TArray<struct FDataRegistrySourceToAdd>      SourcesToAdd;                                      // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                         bPreloadInEditor;                                  // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EF4[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameFeatureAction_DataRegistrySource");
		return Clss;
	}

};

// 0x20 (0x50 - 0x30)
// Class GameFeatures.GameFeatureData
class UGameFeatureData : public UPrimaryDataAsset
{
public:
	TArray<class UGameFeatureAction*>            Actions;                                           // 0x30(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<struct FPrimaryAssetTypeInfo>         PrimaryAssetTypesToScan;                           // 0x40(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameFeatureData");
		return Clss;
	}

	void GetPluginName(class UGameFeatureData* GFD, class FString* PluginName);
};

// 0x1C0 (0x1E8 - 0x28)
// Class GameFeatures.GameFeaturePluginStateMachine
class UGameFeaturePluginStateMachine : public UObject
{
public:
	uint8                                        Pad_1EF5[0x8];                                     // Fixing Size After Last Property..
	struct FGameFeaturePluginStateMachineProperties StateProperties;                                   // 0x30(0xC8)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EF6[0xF0];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameFeaturePluginStateMachine");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class GameFeatures.GameFeaturesProjectPolicies
class UGameFeaturesProjectPolicies : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameFeaturesProjectPolicies");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class GameFeatures.DefaultGameFeaturesProjectPolicies
class UDefaultGameFeaturesProjectPolicies : public UGameFeaturesProjectPolicies
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DefaultGameFeaturesProjectPolicies");
		return Clss;
	}

};

// 0x120 (0x150 - 0x30)
// Class GameFeatures.GameFeaturesSubsystem
class UGameFeaturesSubsystem : public UEngineSubsystem
{
public:
	TMap<class FString, class UGameFeaturePluginStateMachine*> GameFeaturePluginStateMachines;                    // 0x30(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UGameFeaturePluginStateMachine*> TerminalGameFeaturePluginStateMachines;            // 0x80(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EF7[0xA0];                                    // Fixing Size After Last Property..
	TArray<class UObject*>                       Observers;                                         // 0x130(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UGameFeaturesProjectPolicies*          GameSpecificPolicies;                              // 0x140(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EF8[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameFeaturesSubsystem");
		return Clss;
	}

};

// 0x68 (0x98 - 0x30)
// Class GameFeatures.GameFeaturesSubsystemSettings
class UGameFeaturesSubsystemSettings : public UDeveloperSettings
{
public:
	struct FSoftClassPath                        GameFeaturesManagerClassName;                      // 0x30(0x18)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        EnabledPlugins;                                    // 0x48(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FString>                        DisabledPlugins;                                   // 0x58(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FString>                        AdditionalPluginMetadataKeys;                      // 0x68(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EF9[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameFeaturesSubsystemSettings");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
