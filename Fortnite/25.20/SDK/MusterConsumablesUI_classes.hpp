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

// 0x10 (0x320 - 0x310)
// Class MusterConsumablesUI.EnergyDrinkStaminaBarOverlayWidget
class UEnergyDrinkStaminaBarOverlayWidget : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_3B10[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnergyDrinkStaminaBarOverlayWidget");
		return Clss;
	}

	void OnPlayerStateSet(class AFortPlayerStateAthena* InPlayerState);
	void OnPlayerDeadStateChanged(class AFortPlayerStateAthena* PlayerState, bool bIsDead);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
