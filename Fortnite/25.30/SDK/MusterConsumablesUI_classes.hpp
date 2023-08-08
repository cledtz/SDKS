#pragma once

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
	uint8                                        Pad_5439[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnergyDrinkStaminaBarOverlayWidget");
		return Clss;
	}

	void OnPlayerStateSet(class UFortPlayerStateAthena* InPlayerState);
	void OnPlayerDeadStateChanged(class UFortPlayerStateAthena* PlayerState, bool bIsDead);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
