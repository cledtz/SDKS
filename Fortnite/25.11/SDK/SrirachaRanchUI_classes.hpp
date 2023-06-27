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

// 0x10 (0x130 - 0x120)
// Class SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio
class UFortMobileActionButtonBehavior_ToggleRadio : public UFortMobileActionButtonBehavior
{
public:
	class UPaperSprite*                          ToggleRadioOffSprite;                              // 0x120(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7D1B[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMobileActionButtonBehavior_ToggleRadio");
		return Clss;
	}

	void HandleRadioStopped(class UStreamingRadioPlayerComponent* Radio, const struct FAthenaRadioStation& Source);
	void HandleRadioPlaying(class UStreamingRadioPlayerComponent* Radio, const struct FAthenaRadioStation& Source);
};

// 0x50 (0x360 - 0x310)
// Class SrirachaRanchUI.RadioPlayerWidgetBase
class URadioPlayerWidgetBase : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_7D1C[0x40];                                    // Fixing Size After Last Property..
	struct FFortPrioritizedWidgetData            PriorityData;                                      // 0x350(0x2)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_7D1D[0x6];                                     // Fixing Size After Last Property..
	class UStreamingRadioPlayerComponent*        LastValidComp;                                     // 0x358(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RadioPlayerWidgetBase");
		return Clss;
	}

	void SetControllable(bool bCanControl);
	void OnSourcePlaying(class UStreamingRadioPlayerComponent* Radio, const struct FAthenaRadioStation& Source);
	void OnSourceFinished(class UStreamingRadioPlayerComponent* Radio, const struct FAthenaRadioStation& Source);
	void OnShouldShowDueToEntrance();
	void OnRadioStopped(class UStreamingRadioPlayerComponent* Radio, const struct FAthenaRadioStation& LastSource);
	void OnLoadingNewSource(class UStreamingRadioPlayerComponent* Radio, const struct FAthenaRadioStation& Source);
	void OnFailedToOpenSource(class UStreamingRadioPlayerComponent* Radio, const struct FAthenaRadioStation& Source);
	void OnDisconnectFromComp();
	void OnControllerGainedNewFortPawn(class AFortPawn* FortPawn);
	void NativeExitedVehicle();
	void NativeEnteredVehicle();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
