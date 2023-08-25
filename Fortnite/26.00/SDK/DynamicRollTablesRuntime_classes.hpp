#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x1A0 - 0xA8)
// Class DynamicRollTablesRuntime.FortControllerComponent_DynamicRollPlayerComponent
class UFortControllerComponent_DynamicRollPlayerComponent : public UFortControllerComponent
{
public:
	TSubclassOf<class UFortGamestateComponent_DynamicRollTableManager> AssociatedManagerClass;                            // 0xA8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        Enabled;                                           // 0xB0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UFortGamestateComponent_DynamicRollTableManager* TableManager;                                      // 0xD8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3620[0x64];                                    // Fixing Size After Last Property 
	struct FRandomStream                         SeededRNG;                                         // 0x144(0x8)(ZeroConstructor, Transient, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3621[0x54];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortControllerComponent_DynamicRollPlayerComponent* GetDefaultObj();

	TArray<struct FFortDynamicRollResult> AuthorityRollChoices(int32 NumChoices, TArray<class UFortItemDefinition*>& IgnoreItems);
};

// 0x238 (0x2D8 - 0xA0)
// Class DynamicRollTablesRuntime.FortGamestateComponent_DynamicRollTableManager
class UFortGamestateComponent_DynamicRollTableManager : public UFortGameStateComponent
{
public:
	uint8                                        Pad_3631[0x30];                                    // Fixing Size After Last Property 
	struct FDataRegistryType                     DataRegistryType_BaseWeights;                      // 0xD0(0x4)(ZeroConstructor, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataRegistryType                     DataRegistryType_WeightModifiers;                  // 0xD4(0x4)(ZeroConstructor, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        Enabled;                                           // 0xD8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3632[0x1D8];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortGamestateComponent_DynamicRollTableManager* GetDefaultObj();

	void HandlePlaylistDataReady(class UFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
};

}


