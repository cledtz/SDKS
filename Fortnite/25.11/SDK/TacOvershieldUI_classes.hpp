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
// Class TacOvershieldUI.TacOvershieldPlayerInfoWidget
class UTacOvershieldPlayerInfoWidget : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_1A72[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TacOvershieldPlayerInfoWidget");
		return Clss;
	}

	void OnPlayerStateSet(class AFortPlayerStateAthena* InPlayerState);
	void OnOvershieldStateChanged(float Overshield, float OvershieldMax);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
