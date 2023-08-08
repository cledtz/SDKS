#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x40 - 0x30)
// Class VKEditGameplay.VKEditGameplayAssetsToCook
class UVKEditGameplayAssetsToCook : public UPrimaryDataAsset
{
public:
	TArray<TSoftObjectPtr<class UObject>>        Assets;                                            // 0x30(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VKEditGameplayAssetsToCook");
		return Clss;
	}

};

// 0x18 (0x110 - 0xF8)
// Class VKEditGameplay.PlayspaceComponent_PlaysetRootSpawner
class UPlayspaceComponent_PlaysetRootSpawner : public UFortPlayspaceComponent
{
public:
	uint8                                        Pad_595D[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayspaceComponent_PlaysetRootSpawner");
		return Clss;
	}

};

// 0x0 (0x1E8 - 0x1E8)
// Class VKEditGameplay.PlayspaceComponent_VKEditCreativeToolsPermission
class UPlayspaceComponent_VKEditCreativeToolsPermission : public UPlayspaceComponent_CreativeToolsPermission
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayspaceComponent_VKEditCreativeToolsPermission");
		return Clss;
	}

};

// 0x100 (0x798 - 0x698)
// Class VKEditGameplay.VKEditPlayspace
class UVKEditPlayspace : public UFortPlayspace
{
public:
	uint8                                        Pad_5960[0x20];                                    // Fixing Size After Last Property
	TSoftClassPtr<class UFortMinigameSettingsBuilding> EditorOnlyMinigameSettingsMachineClassToSpawn;     // 0x6B8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UFortWorldManager>       EditorOnlyWorldManagerClassToSpawn;                // 0x6E0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortLevelStreamComponent*             LevelStreamComponent;                              // 0x708(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortProjectEditComponent*             ProjectEditComponent;                              // 0x710(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPlayspaceComponent_PlayStopPauseManager* PlayStopPauseManager;                              // 0x718(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPlayspaceComponent_EditConnectionManager* EditConnectionManager;                             // 0x720(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPlayspaceComponent_LiveEdit*          LiveEditComponent;                                 // 0x728(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPlayspaceComponent_VKEditCreativeToolsPermission* CreativeToolsPermission;                           // 0x730(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPlayspaceComponent_CreativeLoadingStateProxy* CreativeLoadingStateProxy;                         // 0x738(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPlayspaceComponent_SpatialGameplay*   SpatialGameplayComponent;                          // 0x740(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortVolumeObjectTrackingComponent*    ObjectTrackingComponent;                           // 0x748(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPlayspaceComponent_DeviceTracking*    DeviceTrackerComponent;                            // 0x750(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPlayspaceComponent_CreativeInventory* CreativeInventoryComponent;                        // 0x758(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPlayspaceComponent_ActorMemoryTracker* ActorMemoryTrackerComponent;                       // 0x760(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortCreativeDynamicXpComponent*       FortCreativeDynamicXp;                             // 0x768(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPlayspaceComponent_CreativeModifyEmotes* CreativeModifyEmotesComponent;                     // 0x770(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortPlayspaceComponent_WorldTimeOfDayOverride* WorldTimeOfDayOverrideComponent;                   // 0x778(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortPlayspaceComponent_NaniteSettingsOverride* NaniteSettingsOverrideComponent;                   // 0x780(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPlayspaceComponent_PlaysetRootSpawner* PlaysetRootSpawnerComponent;                       // 0x788(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPlayspaceComponent_PlayerPawnOverrides* PlayerPawnOverridesComponent;                      // 0x790(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VKEditPlayspace");
		return Clss;
	}

	void OnClientActivatedContent(struct FUniqueNetIdRepl& ClientNetId);
};

// 0x88 (0x180 - 0xF8)
// Class VKEditGameplay.PlayspaceComponent_EditConnectionManager
class UPlayspaceComponent_EditConnectionManager : public UFortPlayspaceComponent
{
public:
	uint8                                        Pad_5967[0x60];                                    // Fixing Size After Last Property
	int32                                        EditConnections;                                   // 0x158(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVkEditStatus                     VkEditStatus;                                      // 0x15C(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5969[0x3];                                     // Fixing Size After Last Property
	struct FGameplayTagContainer                 UITagsToHide;                                      // 0x160(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayspaceComponent_EditConnectionManager");
		return Clss;
	}

	void OnRep_VkEditStatus();
	void OnRep_EditConnections();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
