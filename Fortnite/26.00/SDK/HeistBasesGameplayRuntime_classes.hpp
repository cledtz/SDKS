#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x168 - 0xA0)
// Class HeistBasesGameplayRuntime.FortGameStateComponent_HeistDisplayCaseItemManager
class UFortGameStateComponent_HeistDisplayCaseItemManager : public UFortGameStateComponent
{
public:
	FMulticastInlineDelegateProperty_            OnDisplayCaseItemManagerReady;                     // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class UFortWorldItemDefinition*>      AllDisplayCaseItems;                               // 0xB0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A44[0xA8];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortGameStateComponent_HeistDisplayCaseItemManager* GetDefaultObj();

	bool IsDataReady();
	void HandlePlaylistDataReady(class UFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
	class UFortWorldItemDefinition* GetDisplayCaseItem(const struct FGameplayTag& DisplayCaseGroupTag);
};

// 0xD0 (0xC50 - 0xB80)
// Class HeistBasesGameplayRuntime.FortHeistDisplayCase
class UFortHeistDisplayCase : public UBuildingSMActor
{
public:
	uint8                                        Pad_3A52[0x8];                                     // Fixing Size After Last Property 
	bool                                         bReplicateLongInteractionDetails;                  // 0xB88(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCanBeMarked : 1;                                  // Mask: 0x1, PropSize: 0x10xB89(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bBlockMarking : 1;                                 // Mask: 0x2, PropSize: 0x10xB89(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_20A : 6;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_3A55[0x6];                                     // Fixing Size After Last Property 
	struct FMarkedActorDisplayInfo               MarkerDisplay;                                     // 0xB90(0xA8)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FVector                               MarkerPositionOffset;                              // 0xC38(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortHeistDisplayCase* GetDefaultObj();

	void OnServerNotifyStartDisplayCaseLongUse(class UFortPlayerPawn* InteractingPawn);
	void OnServerNotifyEndDisplayCaseLongUse(class UFortPlayerPawn* InteractingPawn);
};

}


