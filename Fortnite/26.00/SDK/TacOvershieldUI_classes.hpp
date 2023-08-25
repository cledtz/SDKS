#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x320 - 0x310)
// Class TacOvershieldUI.TacOvershieldPlayerInfoWidget
class UTacOvershieldPlayerInfoWidget : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_1D28[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UTacOvershieldPlayerInfoWidget* GetDefaultObj();

	void OnPlayerStateSet(class UFortPlayerStateAthena* InPlayerState);
	void OnOvershieldStateChanged(float Overshield, float OvershieldMax);
};

}


