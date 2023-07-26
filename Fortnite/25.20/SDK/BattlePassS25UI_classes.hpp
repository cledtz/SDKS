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

// 0x0 (0x590 - 0x590)
// Class BattlePassS25UI.BattlePassBulkBuyPageS25
class UBattlePassBulkBuyPageS25 : public UFortBattlePassBulkBuyPageBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BattlePassBulkBuyPageS25");
		return Clss;
	}

};

// 0x68 (0x5B0 - 0x548)
// Class BattlePassS25UI.BattlePassLandingPageS25
class UBattlePassLandingPageS25 : public UBattlePassLandingPageBase
{
public:
	class UBattlePassLandingPageButton*          Button_Rewards;                                    // 0x548(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBattlePassLandingPageButton*          Button_CharacterCustomizer;                        // 0x550(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBattlePassLandingPageButton*          Button_BonusRewards;                               // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBattlePassLandingPageButton*          Button_Quests;                                     // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBattlePassLandingPageButton*          Button_JoinSubscription;                           // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBattlePassLandingPageButton*          Button_WeeklyRewards;                              // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Text_SeasonNumber;                                 // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAthenaSeasonItemData_BattleStar*      SeasonData_BattleStar;                             // 0x580(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7DEF[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BattlePassLandingPageS25");
		return Clss;
	}

	void OnBattlePassSubscriptionAllowed(bool bSubscriptionAllowed);
};

// 0xA0 (0x5B0 - 0x510)
// Class BattlePassS25UI.BattlePassRewardPageS25
class UBattlePassRewardPageS25 : public UBattlePassRewardPageBase
{
public:
	TSubclassOf<class UFortBattlePassRewardTrack> RewardsTrackClass;                                 // 0x510(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBattlePassTile*                   FocusedReward;                                     // 0x518(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortBattlePassRewardTrack*>    TrackPages;                                        // 0x520(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7DF1[0x4];                                     // Fixing Size After Last Property..
	enum class ERewardPageType                   RewardPageType;                                    // 0x534(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7DF2[0x3];                                     // Fixing Size After Last Property..
	int32                                        HoldTileTooltip_ClaimedRewardsToHide;              // 0x538(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        HoldTileTooltip_ClaimedBattlePassToHide;           // 0x53C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        HoldTileTooltip_RequiredBattleStarsToShow;         // 0x540(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LevelRequirementUnlockTooltip_RequiredLevel;       // 0x544(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ClaimAllRewardsTooltip_RequiredLevelToShow;        // 0x548(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7DF3[0x4];                                     // Fixing Size After Last Property..
	class UCommonAnimatedSwitcher*               Switcher_RewardTracks;                             // 0x550(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBattlePassTutorialTooltipS25*     TutorialTooltip_LevelRequirementUnlock;            // 0x558(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBattlePassTutorialTooltipS25*     TutorialTooltip_ClaimAllRewards;                   // 0x560(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBattlePassTutorialTooltipS25*     TutorialTooltip_HoldTile;                          // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaSeasonItemData_BattleStar*      SeasonData_BattleStar;                             // 0x570(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBattlePassBulkBuyInputData*           BulkBuyInputData;                                  // 0x578(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_NextPage;                                   // 0x580(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_PreviousPage;                               // 0x588(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7DF4[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BattlePassRewardPageS25");
		return Clss;
	}

	void OnPageChanged(int32 PageNumber, int32 RewardPageTotal);
	void OnLoadingScreenSelectedChanged(bool bIsSelected);
	void OnInputMethodChanged(enum class ECommonInputType InputType);
	void OnInitForPageType(enum class ERewardPageType InRewardPageType);
	class UWidget* HandleRewardTracksBoundaryNavigation(enum class EUINavigation InNavigation);
	struct FVaultWorldBackgroundData GetRewardPageBackgroundData();
};

// 0x4D8 (0xDC0 - 0x8E8)
// Class BattlePassS25UI.BattlePassScreenS25
class UBattlePassScreenS25 : public UBattlePassScreenBase
{
public:
	TSubclassOf<class UFortBattlePassPurchaseResourcesWidget> ResourcePurchaseScreenClass;                       // 0x8E8(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7DFD[0x8];                                     // Fixing Size After Last Property..
	class UCommonButtonBase*                     Button_Close;                                      // 0x8F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonLegacy*                   Button_TouchClose;                                 // 0x900(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_ToggleViewDetails;                          // 0x908(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_ReplayTrailer;                              // 0x910(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_ReplayTrailer_Mobile;                       // 0x918(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_ShowAbout;                                  // 0x920(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_ShowAbout_Mobile;                           // 0x928(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_ShowAboutCustomization;                     // 0x930(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_ShowAboutCustomization_Mobile;              // 0x938(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_BulkBuyRewards;                             // 0x940(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_PageComplete;                               // 0x948(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_GiftBattlePass;                             // 0x950(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonVisibilitySwitcher*             VisibilitySwitcher_PlatformBasedButtons;           // 0x958(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortBattlePassResourcesWidgetBase*    BattlePassCurrencyPanel;                           // 0x960(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAthenaExclusiveRewardBanner*          AthenaExclusiveRewardBanner;                       // 0x968(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Text_Description;                                  // 0x970(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Text_ItemName;                                     // 0x978(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAthenaRewardItemTypeRarityTag*        ItemRewardTag;                                     // 0x980(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Text_SetDetails;                                   // 0x988(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetSwitcher*                       Switcher_PrerequisiteInfo;                         // 0x990(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Text_Prerequisite;                                 // 0x998(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               Widget_PrerequisiteProgress;                       // 0x9A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               Widget_LevelUpMessageFree;                         // 0x9A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               Widget_LevelUpMessagePremium;                      // 0x9B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               Widget_CustomResourceMessage;                      // 0x9B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetSwitcher*                       Switcher_PrimaryAction;                            // 0x9C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCTAButton*                        Button_BuyLevels;                                  // 0x9C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCTAButton*                        Button_BuyBattlePass;                              // 0x9D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCTAButton*                        Button_ClaimReward;                                // 0x9D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_ViewQuests;                                 // 0x9E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_PreviewLoadingScreen;                       // 0x9E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               Tag_RequiresBP;                                    // 0x9F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               Tag_PageLocked;                                    // 0x9F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               Tag_BaseItem;                                      // 0xA00(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               Tag_Prerequisite;                                  // 0xA08(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               Tag_CompletePage;                                  // 0xA10(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               Tag_NotEnough_Currency;                            // 0xA18(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               Tag_Cost;                                          // 0xA20(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               Tag_Owned;                                         // 0xA28(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               Tag_Delayed;                                       // 0xA30(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          QuestCategoryParentTag;                            // 0xA38(0x4)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7DFE[0x4];                                     // Fixing Size After Last Property..
	TSubclassOf<class UAthenaLoadingScreenPreviewPanel> PreviewLoadingScreenWidgetClass;                   // 0xA40(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7DFF[0x58];                                    // Fixing Size After Last Property..
	class UAthenaSeasonItemData_BattleStar*      SeasonData_BattleStar;                             // 0xAA0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAthenaSeasonItemEntryBase*            CurrentSelectedEntry;                              // 0xAA8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<enum class EBattlePassView>           SwitcherSubPageTypes;                              // 0xAB0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	class UCommonVisibilitySwitcher*             VisibilitySwitcher_SubPage;                        // 0xAC0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7E00[0x100];                                   // Fixing Size After Last Property..
	class UFortItemDefinition*                   SeasonalBaseCustomizationItem;                     // 0xBC8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasSubscription;                                  // 0xBD0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7E01[0x7];                                     // Fixing Size After Last Property..
	class UFortBattlePassTutorialTooltipS25*     TutorialTooltip_BattleStars;                       // 0xBD8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBattlePassTutorialTooltipS25*     TutorialTooltip_StylePoints;                       // 0xBE0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortSwipePanel*                       SwipePanel_Navigation;                             // 0xBE8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7E02[0x1D0];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BattlePassScreenS25");
		return Clss;
	}

	void OverviewShowAnimationFinished();
	void OnUpdateStatusBar(class FText& StatusText, enum class EBattlePassStatusBarTypeS25& BarType);
	void OnUpdateBattlePassRequiredBar(bool bPassRequiredVisible);
	void OnTransitionItemDetails(bool bTransitionForward);
	void OnSetWeeklyRewardsInfo(struct FTimespan& DelayTimespan, int32 AvailableRewards, int32 OwnedRewards, int32 TotalRewards, int32 AvailablePages, int32 CompletedPages, int32 TotalPages);
	void OnSetResourcePrice(int32 Cost, class UFortPersistentResourceItemDefinition* PersistentResource);
	void OnSetQuestRewardsInfo(struct FTimespan& DelayTimespan, int32 OwnedRewards, int32 TotalRewards, int32 CompletedPages, int32 TotalPages);
	void OnSetPrerequisiteInfo(class FText& Description, int32 CurrentAmount, int32 NeededAmount, enum class EBattlePassRewardPrerequisiteType PrerequisiteType, bool bShowPrerequisiteLock);
	void OnSetItemPrice(int32 Cost, enum class EBattlePassCurrencyType CurrencyType);
	void OnSetCrewInfo(bool bIsNextMonthRewards, class FText& MonthText, struct FTimespan& NextMonthlyRewardTimespan, class FText& CharacterDisplayName, class FText& CharacterDescription);
	void OnSetCoverPageData(class FText& Title, class FText& Description, bool bPageComplete);
	void OnSetBonusRewardsInfo(bool bIsUnlocked, int32 OwnedRewards, int32 TotalRewards, int32 CompletedPages, int32 TotalPages, int32 ClaimedOutfits, int32 TotalOutfits);
	void OnSetBaseRewardsInfo(int32 OwnedRewards, int32 TotalRewards, int32 CompletedPages, int32 TotalPages);
	void OnItemDelayed(const struct FTimespan& Delay);
	void OnInsufficientResource(class UFortPersistentResourceItemDefinition* PersistentResource);
	void OnInsufficientFunds(enum class EBattlePassCurrencyType CurrencyType);
	void OnBattlePassOwned();
	void OnBattlePassGiftingAllowed(bool bGiftingAllowed);
	bool IsSeasonalCustomizationItemOwned();
	void HandleSwitcherVisibilityShown();
	void HandleFullScreenMapToggled(bool bMapVisible);
	void HandleClaimRewardComplete(bool bSuccess, TArray<class FString>& OfferTemplateIdList);
	void GoBackOneScreen();
	struct FTimespan GetQuestPageDelay();
};

// 0x18 (0x5D8 - 0x5C0)
// Class BattlePassS25UI.FortBattlePassCustomSkinPageS25
class UFortBattlePassCustomSkinPageS25 : public UFortBattlePassCustomSkinPageBase
{
public:
	class FString                                ClaimBaseItemTooltip_ClaimCheckTemplateId;         // 0x5C0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortBattlePassTutorialTooltip*        TutorialTooltip_ClaimBaseItem;                     // 0x5D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBattlePassCustomSkinPageS25");
		return Clss;
	}

};

// 0x20 (0x300 - 0x2E0)
// Class BattlePassS25UI.FortBattlePassResourcesWidgetS25
class UFortBattlePassResourcesWidgetS25 : public UFortBattlePassResourcesWidgetBase
{
public:
	class UCommonTextBlock*                      Text_BattleStarsAmount;                            // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Text_StylePointsAmount;                            // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               Border_StylePointsRewardsTag;                      // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               Border_BattleStarsRewardsTag;                      // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBattlePassResourcesWidgetS25");
		return Clss;
	}

	void OnStylePointsRewardsSet(int32 Rewards);
	void OnBattleStarRewardsSet(int32 Rewards);
};

// 0x10 (0x2E0 - 0x2D0)
// Class BattlePassS25UI.FortBattlePassTutorialTooltipS25
class UFortBattlePassTutorialTooltipS25 : public UCommonUserWidget
{
public:
	class UCommonRichTextBlock*                  Text_Tooltip;                                      // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7E03[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBattlePassTutorialTooltipS25");
		return Clss;
	}

	void ShowTooltip();
	void SetText(class FText Text);
	void HideTooltip();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
