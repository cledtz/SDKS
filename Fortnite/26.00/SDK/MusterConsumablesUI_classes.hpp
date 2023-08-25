#pragma once

// Dumped with Dumper-7!


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
	uint8                                        Pad_3091[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEnergyDrinkStaminaBarOverlayWidget* GetDefaultObj();

	void OnPlayerStateSet(class UFortPlayerStateAthena* InPlayerState);
	void OnPlayerDeadStateChanged(class UFortPlayerStateAthena* PlayerState, bool bIsDead);
};

}


