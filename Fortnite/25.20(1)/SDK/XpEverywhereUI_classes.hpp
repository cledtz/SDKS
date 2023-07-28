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

// 0x70 (0x380 - 0x310)
// Class XpEverywhereUI.XpEverywhereAccoladesWidget
class UXpEverywhereAccoladesWidget : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_853A[0x60];                                    // Fixing Size After Last Property..
	struct FFortPrioritizedWidgetData            PrioritizationData;                                // 0x370(0x2)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_853B[0xE];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("XpEverywhereAccoladesWidget");
		return Clss;
	}

	void OpenWidget(class UFortAccoladeItemDefinition* AccoladeDef, int32 XpValue, class FText& DisplayName, TSoftObjectPtr<class UTexture2D>& AccoladeLargePreviewImageOverride, class FText& SimulatedName, class FText& SimulatedText, enum class EFortSimulatedXPSize SimulatedXpSize);
	void OnStompedByOtherWidget();
	void OnEventAdded();
	bool HasMoreXPEvents();
	void CloseWidget();
};

// 0xE0 (0x4D8 - 0x3F8)
// Class XpEverywhereUI.XpEverywhereBar
class UXpEverywhereBar : public UCommonActivatableWidget
{
public:
	bool                                         bXpBarAlwaysActive;                                // 0x3F8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_853C[0x7];                                     // Fixing Size After Last Property..
	class UFortSocialAvatarIcon*                 SocialAvatarIcon;                                  // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_853D[0xD0];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("XpEverywhereBar");
		return Clss;
	}

	void OnXpBarUpdated(int32 ShownXP, int32 ShownLevel, int32 NewDesiredXP, int32 NewDesiredLevel, int32 NewRemainingRestXP);
	void OnXpBarInitialized(int32 CurrentXP, int32 CurrentLevel, int32 CurrentRemainingRestXP);
	int32 GetTotalXpRequiredForLevel(int32 InLevel);
	void DoneUpdatingXpBar();
};

// 0x8 (0x400 - 0x3F8)
// Class XpEverywhereUI.XpEverywhereLevelUpWidget
class UXpEverywhereLevelUpWidget : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_853E[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("XpEverywhereLevelUpWidget");
		return Clss;
	}

	void OnShowWidget(int32 NewLevel);
	void DoneLevelingUp();
	void DisplayLevelUpRewards();
};

// 0x18 (0x328 - 0x310)
// Class XpEverywhereUI.XpEverywhereReticleWidget
class UXpEverywhereReticleWidget : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_8541[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("XpEverywhereReticleWidget");
		return Clss;
	}

	void UpdateXPSource(class FText& NewSourceText);
	void UpdateXPAmount(int32 NewAmount, class USoundCue* Cue, enum class EFortSimulatedXPSize SimulatedXpSize);
	void UpdateRestXP(int32 RestXpRemaining);
	void HandleProfileUpdated();
	void ForwardEvents();
};

// 0x90 (0x3A0 - 0x310)
// Class XpEverywhereUI.XpEverywhereRewardWidget
class UXpEverywhereRewardWidget : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_8542[0x48];                                    // Fixing Size After Last Property..
	TSubclassOf<class UFortNotificationEntry>    DefaultEntryClass;                                 // 0x358(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasPrioritizedWidgetFocus;                        // 0x360(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8543[0x7];                                     // Fixing Size After Last Property..
	class UFortNotificationEntry*                ActiveWidget;                                      // 0x368(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortNotificationEntry*>        WidgetQueue;                                       // 0x370(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UVerticalBox*                          NotificationUpdatesBox;                            // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FXpEverywhereNotificationWidgetClass> NotificationClassPoolData;                         // 0x388(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FFortPrioritizedWidgetData            PrioritizationData;                                // 0x398(0x2)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_8544[0x6];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("XpEverywhereRewardWidget");
		return Clss;
	}

	void HandleNotificationUpdateFinished();
};

// 0xC0 (0x160 - 0xA0)
// Class XpEverywhereUI.XpEverywhereUIComponent
class UXpEverywhereUIComponent : public UActorComponent
{
public:
	uint8                                        Pad_8545[0x90];                                    // Fixing Size After Last Property..
	struct FGameplayTagContainer                 XpEverywhereHiddenElementTags;                     // 0x130(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8546[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("XpEverywhereUIComponent");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
