#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x338 - 0x310)
// Class KeysAndLocksUI.KeyPlayerInfoWidget
class UKeyPlayerInfoWidget : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_F04[0x8];                                      // Fixing Size After Last Property 
	struct FGameplayTag                          KeyStatusTag;                                      // 0x318(0x4)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F05[0x1C];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UKeyPlayerInfoWidget* GetDefaultObj();

	void OnKeyStatusActivated(class UFortPlayerStateAthena* InPlayerState, bool bActivated);
	void HandleGameplayTagEvent(const struct FGameplayTag& UpdatedTag, int32 TagCount);
};

}


