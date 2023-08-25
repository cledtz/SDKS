#pragma once

// Dumped with Dumper-7!


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
	uint8                                        Pad_3D3C[0x60];                                    // Fixing Size After Last Property 
	struct FFortPrioritizedWidgetData            PrioritizationData;                                // 0x370(0x2)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D3E[0xE];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UXpEverywhereAccoladesWidget* GetDefaultObj();

	void OpenWidget(class UFortAccoladeItemDefinition* AccoladeDef, int32 XpValue, class FText& DisplayName, TSoftObjectPtr<class UTexture2D>& AccoladeLargePreviewImageOverride, class FText& SimulatedName, class FText& SimulatedText, enum class EFortSimulatedXPSize SimulatedXpSize);
	void OnStompedByOtherWidget();
	void OnEventAdded();
	bool HasMoreXPEvents();
	void CloseWidget();
};

// 0xD8 (0x4C0 - 0x3E8)
// Class XpEverywhereUI.XpEverywhereBar
class UXpEverywhereBar : public UCommonActivatableWidget
{
public:
	bool                                         bXpBarAlwaysActive;                                // 0x3E8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3D4C[0x7];                                     // Fixing Size After Last Property 
	class UFortSocialAvatarIcon*                 SocialAvatarIcon;                                  // 0x3F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3D4D[0xC8];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UXpEverywhereBar* GetDefaultObj();

	void OnXpBarUpdated(int32 ShownXP, int32 ShownLevel, int32 NewDesiredXP, int32 NewDesiredLevel, int32 NewRemainingRestXP);
	void OnXpBarInitialized(int32 CurrentXP, int32 CurrentLevel, int32 CurrentRemainingRestXP);
	int32 GetTotalXpRequiredForLevel(int32 InLevel);
	void DoneUpdatingXpBar();
};

// 0x8 (0x3F0 - 0x3E8)
// Class XpEverywhereUI.XpEverywhereLevelUpWidget
class UXpEverywhereLevelUpWidget : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_3D55[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UXpEverywhereLevelUpWidget* GetDefaultObj();

	void OnShowWidget(int32 NewLevel);
	void DoneLevelingUp();
	void DisplayLevelUpRewards();
};

// 0x18 (0x328 - 0x310)
// Class XpEverywhereUI.XpEverywhereReticleWidget
class UXpEverywhereReticleWidget : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_3D63[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UXpEverywhereReticleWidget* GetDefaultObj();

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
	uint8                                        Pad_3D66[0x48];                                    // Fixing Size After Last Property 
	TSubclassOf<class UFortNotificationEntry>    DefaultEntryClass;                                 // 0x358(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasPrioritizedWidgetFocus;                        // 0x360(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3D69[0x7];                                     // Fixing Size After Last Property 
	class UFortNotificationEntry*                ActiveWidget;                                      // 0x368(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortNotificationEntry*>        WidgetQueue;                                       // 0x370(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UVerticalBox*                          NotificationUpdatesBox;                            // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FXpEverywhereNotificationWidgetClass> NotificationClassPoolData;                         // 0x388(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FFortPrioritizedWidgetData            PrioritizationData;                                // 0x398(0x2)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3D6A[0x6];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UXpEverywhereRewardWidget* GetDefaultObj();

	void HandleNotificationUpdateFinished();
};

// 0xC0 (0x160 - 0xA0)
// Class XpEverywhereUI.XpEverywhereUIComponent
class UXpEverywhereUIComponent : public UActorComponent
{
public:
	uint8                                        Pad_3D6C[0x90];                                    // Fixing Size After Last Property 
	struct FGameplayTagContainer                 XpEverywhereHiddenElementTags;                     // 0x130(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D6D[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UXpEverywhereUIComponent* GetDefaultObj();

};

}


