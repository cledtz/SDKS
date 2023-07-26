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

// 0x28 (0x338 - 0x310)
// Class KeysAndLocksUI.KeyPlayerInfoWidget
class UKeyPlayerInfoWidget : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_7F7D[0x8];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          KeyStatusTag;                                      // 0x318(0x4)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7F7E[0x1C];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("KeyPlayerInfoWidget");
		return Clss;
	}

	void OnKeyStatusActivated(class AFortPlayerStateAthena* InPlayerState, bool bActivated);
	void HandleGameplayTagEvent(const struct FGameplayTag& UpdatedTag, int32 TagCount);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
