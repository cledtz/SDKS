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

// 0x330 (0x660 - 0x330)
// Class MidMatchBunkerGameplayRuntime.FortAthenaMutator_MidMatchBunkerGameplay
class AFortAthenaMutator_MidMatchBunkerGameplay : public AFortAthenaMutator
{
public:
	struct FGameplayTag                          BunkerKeycardPlayerCarrierSpecialActorTag;         // 0x330(0x4)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8085[0xC];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           BunkerKeycardFriendlyCarrierBrush;                 // 0x340(0xC0)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                           BunkerKeycardEnemyCarrierBrush;                    // 0x400(0xC0)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                           BunkerKeycardLocalPlayerCarrierBrush;              // 0x4C0(0xC0)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bHotfixRenderBunkerKeycardLocalPlayerCarrier;      // 0x580(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bHotfixRenderBunkerKeycardEnemyCarrier;            // 0x5A8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        HotfixBunkerKeycardEnemyCarrierRenderDistance2D;   // 0x5D0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bHotfixRenderBunkerKeycardFriendlyCarrier;         // 0x5F8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        HotfixBunkerKeycardFriendlyCarrierRenderDistance2D; // 0x620(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                        BunkerKeycardEnemyCarrierRenderDistance2D;         // 0x648(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BunkerKeycardFriendlyCarrierRenderDistance2D;      // 0x64C(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bRenderBunkerKeycardLocalPlayerCarrier;            // 0x650(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8086[0xF];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaMutator_MidMatchBunkerGameplay");
		return Clss;
	}

	void OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
