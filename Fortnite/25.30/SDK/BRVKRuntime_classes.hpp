#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x58 - 0x30)
// Class BRVKRuntime.FortBRVKLoadingData
class UFortBRVKLoadingData : public UPrimaryDataAsset
{
public:
	uint8                                        Pad_400D[0x8];                                     // Fixing Size After Last Property
	class FString                                VKProjectGUID;                                     // 0x38(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplacesPlaceHolderContent;                       // 0x48(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4010[0x3];                                     // Fixing Size After Last Property
	class FName                                  FoundationToReplaceTag;                            // 0x4C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplaceWithCalendarEventInstead;                  // 0x50(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4012[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBRVKLoadingData");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class BRVKRuntime.FortBRVKDADAssetManager
class UFortBRVKDADAssetManager : public UObject
{
public:
	uint8                                        Pad_4013[0x8];                                     // Fixing Size After Last Property
	TArray<class UObject*>                       BRVKAssetDataInstances;                            // 0x30(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBRVKDADAssetManager");
		return Clss;
	}

};

// 0x40 (0x68 - 0x28)
// Class BRVKRuntime.FortBRVKGameFeatureAction_HotfixableAddToPlaylist
class UFortBRVKGameFeatureAction_HotfixableAddToPlaylist : public UGameFeatureAction
{
public:
	struct FGameplayTagContainer                 BRPlaylistTags;                                    // 0x28(0x20)(Edit, Config, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 BRPlaylistTagsToExclude;                           // 0x48(0x20)(Edit, Config, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBRVKGameFeatureAction_HotfixableAddToPlaylist");
		return Clss;
	}

};

// 0x28 (0x50 - 0x28)
// Class BRVKRuntime.FortBRVKGameFeatureAction_LoadVKProject
class UFortBRVKGameFeatureAction_LoadVKProject : public UGameFeatureAction
{
public:
	class UFortBRVKLoadingData*                  VKLoadingData;                                     // 0x28(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4016[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBRVKGameFeatureAction_LoadVKProject");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class BRVKRuntime.FortBRVKGameFeatureAction_RegisterContentErrorHandler
class UFortBRVKGameFeatureAction_RegisterContentErrorHandler : public UGameFeatureAction
{
public:
	uint8                                        Pad_4017[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBRVKGameFeatureAction_RegisterContentErrorHandler");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class BRVKRuntime.FortBRVKGameFeatureObserver
class UFortBRVKGameFeatureObserver : public UGameFeatureAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBRVKGameFeatureObserver");
		return Clss;
	}

};

// 0x10 (0x6A8 - 0x698)
// Class BRVKRuntime.FortBRVKPlayspace
class UFortBRVKPlayspace : public UFortPlayspace
{
public:
	class UFortLevelStreamComponent*             LevelStreamComponent;                              // 0x698(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortProjectPlayComponent*             ProjectPlayComponent;                              // 0x6A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBRVKPlayspace");
		return Clss;
	}

};

// 0x30 (0x4C0 - 0x490)
// Class BRVKRuntime.FortBRVKTheBlockMutator
class UFortBRVKTheBlockMutator : public UFortAthenaMutator_GameModeBase
{
public:
	bool                                         bContentIsReadyOrFailed;                           // 0x490(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_401B[0x27];                                    // Fixing Size After Last Property
	class UFortGameStateComponent_BattleRoyaleGamePhaseLogic* CachedGamePhaseLogic;                              // 0x4B8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBRVKTheBlockMutator");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
