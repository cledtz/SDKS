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

// 0x38 (0x348 - 0x310)
// Class SpecialEventGameplayUI.FortGameplayCinematicHostWidget
class UFortGameplayCinematicHostWidget : public UFortHUDElementWidget
{
public:
	class FName                                  IntroWidgetEntryName;                              // 0x310(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8578[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FCinematicWidgetData>          WidgetEntries;                                     // 0x318(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UAthenaLoadingScreenItemDefinition*    LoadingScreenDefinition;                           // 0x328(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8579[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGameplayCinematicHostWidget");
		return Clss;
	}

};

// 0x20 (0x418 - 0x3F8)
// Class SpecialEventGameplayUI.FortGameplayCinematicWidget
class UFortGameplayCinematicWidget : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_857A[0x8];                                     // Fixing Size After Last Property..
	bool                                         bSkipCinematics;                                   // 0x400(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_857B[0x17];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGameplayCinematicWidget");
		return Clss;
	}

	void OnStartCinematic();
	void OnCinematicFinished();
};

// 0x20 (0x418 - 0x3F8)
// Class SpecialEventGameplayUI.FortGameplayIntroPanelWidget
class UFortGameplayIntroPanelWidget : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_857C[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGameplayIntroPanelWidget");
		return Clss;
	}

	void OnWaitingForReadyForGameplay();
	void OnWaitingForPawn();
	void OnWaitingForMinTime();
	void OnStartIntro();
	void OnIntroFinished();
};

// 0x20 (0x2C8 - 0x2A8)
// Class SpecialEventGameplayUI.SpecialEventCursorWidget
class USpecialEventCursorWidget : public UUserWidget
{
public:
	uint8                                        Pad_857F[0x8];                                     // Fixing Size After Last Property..
	bool                                         bAutomaticallyChangeVisibility;                    // 0x2B0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8580[0x7];                                     // Fixing Size After Last Property..
	class USpecialEventCursorPawnComponent*      CursorPawnComponent;                               // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8581[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpecialEventCursorWidget");
		return Clss;
	}

	void OnViewportLocationChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, struct FVector2D& NormalizedLocation, struct FVector2D& ViewportLocation);
	void OnDesiredVisibilityChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, struct FGameplayTag& CursorModeTag, bool bShouldBeVisible);
	void OnCursorModeChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, struct FGameplayTag& NewCursorModeTag, struct FGameplayTag& OldCursorModeTag);
	struct FGameplayTagContainer GetCursorModeTags();
	void BP_OnDesiredVisibilityChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, struct FGameplayTag& CursorModeTag, bool bShouldBeVisible);
	void BP_OnCursorModeChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, struct FGameplayTag& NewCursorModeTag, struct FGameplayTag& OldCursorModeTag);
};

// 0x20 (0x330 - 0x310)
// Class SpecialEventGameplayUI.SpecialEventPlayerInfoWidget
class USpecialEventPlayerInfoWidget : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_8582[0x8];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnRepresentedPlayerStateChanged;                   // 0x318(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_8583[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpecialEventPlayerInfoWidget");
		return Clss;
	}

	class AFortPlayerStateAthena* GetRepresentedPlayerState();
};

// 0x0 (0x28 - 0x28)
// Class SpecialEventGameplayUI.SpecialEventUILibrary
class USpecialEventUILibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpecialEventUILibrary");
		return Clss;
	}

	void HideFrontEndStateWidget(class UObject* WorldContextObject, bool bNewlyHidden);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
