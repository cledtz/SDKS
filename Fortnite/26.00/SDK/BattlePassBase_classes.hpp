#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class BattlePassBase.BattlePassSubPageInterface
class UBattlePassSubPageInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UBattlePassSubPageInterface* GetDefaultObj();

	void OnEnterSubPage();
};

// 0x150 (0x538 - 0x3E8)
// Class BattlePassBase.BattlePassLandingPageBase
class UBattlePassLandingPageBase : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_3305[0x120];                                   // Fixing Size After Last Property 
	class UBattlePassLandingPageButton*          LastHoveredPageButton;                             // 0x508(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonGroupBase*                LandingPageButtonGroupBase;                        // 0x510(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3306[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UBattlePassLandingPageBase* GetDefaultObj();

};

// 0x280 (0x16F0 - 0x1470)
// Class BattlePassBase.BattlePassLandingPageButton
class UBattlePassLandingPageButton : public UCommonButtonBase
{
public:
	enum class EBattlePassView                   SubPageType;                                       // 0x1470(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBattlePassFeatures               FeatureType;                                       // 0x1471(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3314[0x6];                                     // Fixing Size After Last Property 
	struct FBattlePassLandingPageEntryPreviewInfo PreviewInfo;                                       // 0x1478(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	bool                                         bNeedsBattlePass;                                  // 0x1508(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3315[0x7];                                     // Fixing Size After Last Property 
	class UFortChallengeBundleScheduleDefinition* DelayQuestSchedule;                                // 0x1510(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        DelayDaysSinceSeasonStart;                         // 0x1518(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3316[0x4];                                     // Fixing Size After Last Property 
	class UFortItemDefinition*                   RequiredItem;                                      // 0x1520(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortBangWrapper_NUI*                  BangWrapper;                                       // 0x1528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUsesTelemetry;                                    // 0x1530(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3317[0x3];                                     // Fixing Size After Last Property 
	struct FIntPoint                             Telemetry_Size;                                    // 0x1534(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FIntPoint                             Telemetry_Position;                                // 0x153C(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3319[0x4];                                     // Fixing Size After Last Property 
	struct FBattlePassLandingPageButtonTexts     DefaultTexts;                                      // 0x1548(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FBattlePassLandingPageButtonTexts     DelayedTexts;                                      // 0x1590(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FBattlePassLandingPageButtonTexts     SubscribedTexts;                                   // 0x15D8(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FBattlePassLandingPageButtonDisplayBehaviorData DisplayBehaviorData;                               // 0x1620(0x18)(BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_331C[0xB8];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UBattlePassLandingPageButton* GetDefaultObj();

	void OnSubscriptionTextureLoaded(class UTexture2D* Texture);
	void OnSubscriptionOwnershipUpdated(bool bOwnsSubsciption);
	void OnShowDisplayDetails();
	void OnSetTileImageMaterial(class UMaterialInstance* Material);
	void OnDisplayDetailsUpdated(struct FBattlePassLandingPageButtonDisplayDetails& NewDisplayDetails);
	struct FBattlePassLandingPageButtonDisplayDetails GetBattlePassDisplayDetails();
};

// 0x118 (0x500 - 0x3E8)
// Class BattlePassBase.BattlePassRewardPageBase
class UBattlePassRewardPageBase : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_3320[0x118];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UBattlePassRewardPageBase* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class BattlePassBase.BattlePassUIGameFeatureAction
class UBattlePassUIGameFeatureAction : public UFortUIGameFeatureAction
{
public:
	TSoftClassPtr<class UBattlePassScreenBase>   BattlePassScreenClass;                             // 0x28(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UFortGlobalSeasonResourceWidget> BattlePassResourceWidgetClass;                     // 0x48(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UCommonActivatableWidget> BattlePassInfoModalClass;                          // 0x68(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UBattlePassUIGameFeatureAction* GetDefaultObj();

};

// 0xB8 (0x360 - 0x2A8)
// Class BattlePassBase.FortBattlePassCustomSkinCategoryTile
class UFortBattlePassCustomSkinCategoryTile : public UUserWidget
{
public:
	uint8                                        Pad_3330[0x20];                                    // Fixing Size After Last Property 
	class UProgressBar*                          ProgressBar;                                       // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortDynamicEntryBox*                  FortDynamicEntryBox_Items;                         // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URichTextBlock*                        Text_CategoryTitle;                                // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortBattlePassTile*                   PreviewedTile;                                     // 0x2E0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        OwnedRewards;                                      // 0x2E8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3335[0x74];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortBattlePassCustomSkinCategoryTile* GetDefaultObj();

	void SetPreviewedTile(int32 Index);
	void OnOwnedTilesUpdated(int32 CurrentlyOwnedRewards, int32 TotalRewards, float CategoryProgress);
	void OnLockedStateChanged(bool bCategoryLocked);
	void OnLockedProgressUpdated(int32 CurrentlyOwnedBeforeCategory, int32 TotalRewardsBeforeCategory, float LockedProgress);
	void FocusTile(int32 Index);
};

// 0x1C8 (0x5B0 - 0x3E8)
// Class BattlePassBase.FortBattlePassCustomSkinPageBase
class UFortBattlePassCustomSkinPageBase : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_333C[0x1A0];                                   // Fixing Size After Last Property 
	class UScrollBox*                            ScrollBox_Categories;                              // 0x588(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortDynamicEntryBox*                  FortDynamicEntryBox_Categories;                    // 0x590(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_333D[0x8];                                     // Fixing Size After Last Property 
	class UBattlePassEnabledInputData*           EquipEnabledData;                                  // 0x5A0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_333E[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortBattlePassCustomSkinPageBase* GetDefaultObj();

};

// 0x1A0 (0x588 - 0x3E8)
// Class BattlePassBase.FortBattlePassBulkBuyPageBase
class UFortBattlePassBulkBuyPageBase : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_3343[0x118];                                   // Fixing Size After Last Property 
	class UCommonButtonBase*                     Button_Addition;                                   // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_Subtraction;                                // 0x508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDynamicEntryBox*                      DynamicEntryBox_TilesEntries;                      // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonVisibilitySwitcher*             Switcher_BottomButtons;                            // 0x518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCTAButton*                        Button_BuyLevels;                                  // 0x520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCTAButton*                        Button_ClaimReward;                                // 0x528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               Widget_LevelUpMessagePremium;                      // 0x530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAthenaSeasonItemData_BattleStar*      SeasonData_BattleStar;                             // 0x538(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3346[0x18];                                    // Fixing Size After Last Property 
	class UAthenaSeasonItemDefinition*           SeasonItemDefinition;                              // 0x558(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBattlePassTile*                   FocusedReward;                                     // 0x560(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3349[0x18];                                    // Fixing Size After Last Property 
	class UScrollBox*                            ScrollBox_Pages;                                   // 0x580(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortBattlePassBulkBuyPageBase* GetDefaultObj();

	void OnRewardCountChanged(int32 Count);
	void OnPageRangeChanged(int32 FromPage, int32 ToPage);
	void OnCostChanged(int32 Cost);
	void HandleUserScrolled(float ScrollAmount);
};

// 0x10 (0x1480 - 0x1470)
// Class BattlePassBase.FortBattlePassCheckBoxButton
class UFortBattlePassCheckBoxButton : public UCommonButtonBase
{
public:
	uint8                                        Pad_334A[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortBattlePassCheckBoxButton* GetDefaultObj();

	void OnStateChanged(bool bNewIsChecked);
};

// 0x78 (0xA8 - 0x30)
// Class BattlePassBase.FortBattlePassContext
class UFortBattlePassContext : public UBlueprintContextBase
{
public:
	uint8                                        Pad_335C[0x8];                                     // Fixing Size After Last Property 
	TArray<class UFortPersistentResourceItemDefinition*> CustomizationPageSeasonalResources;                // 0x38(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UFortPersistentResourceItemDefinition*> AllSeasonalResources;                              // 0x48(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<enum class ERewardPageType, struct FSeasonalResourceList> RewardPageSeasonalResources;                       // 0x58(0x50)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortBattlePassContext* GetDefaultObj();

	TArray<struct FSeasonCurrencyMcpData> GetSeasonalCurrencies();
	class FText GetLevelPurchaseDisclaimerText();
	class FText GetDefaultDisclaimerText();
	class FText GetCurrentSeasonNumberAsText(bool bFullText);
	class FText GetCurrentChapterAsText(bool bFullText);
	bool CanPurchaseBattlePassLevel();
};

// 0x10 (0x2E0 - 0x2D0)
// Class BattlePassBase.FortBattlePassResourcesWidgetBase
class UFortBattlePassResourcesWidgetBase : public UFortGlobalSeasonResourceWidget
{
public:
	TSubclassOf<class UFortBattlePassResourceCounter> ResourceCounterClass;                              // 0x2D0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDynamicEntryBox*                      EntryBox_ResourceCounters;                         // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortBattlePassResourcesWidgetBase* GetDefaultObj();

	void ShowResourcesInfoModal();
	void OnShowMoreInfo(bool bShouldShowMoreInfo);
};

// 0x40 (0x320 - 0x2E0)
// Class BattlePassBase.FortBattlePassCurrencyPanel
class UFortBattlePassCurrencyPanel : public UFortBattlePassResourcesWidgetBase
{
public:
	class UHorizontalBox*                        HBox_BattleStarContainer;                          // 0x2E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_BattleStar;                                   // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                        HBox_CustomSkinContainer;                          // 0x2F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_CustomSkin;                                   // 0x2F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3367[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortBattlePassCurrencyPanel* GetDefaultObj();

};

// 0x48 (0x2F0 - 0x2A8)
// Class BattlePassBase.FortBattlePassDynamicIcon
class UFortBattlePassDynamicIcon : public UUserWidget
{
public:
	TSoftObjectPtr<class UObject>                BattlePassDefaultIcon;                             // 0x2A8(0x20)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UObject>                BattlePassOwnedIcon;                               // 0x2C8(0x20)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortLazyImage*                        LazyImage_BattlePassIcon;                          // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortBattlePassDynamicIcon* GetDefaultObj();

	void OnBattlePassInfoUpdated(bool bOwnsBattlePass);
};

// 0x10 (0x2B8 - 0x2A8)
// Class BattlePassBase.FortBattlePassLevelCount
class UFortBattlePassLevelCount : public UUserWidget
{
public:
	class UCommonTextBlock*                      Text_LevelCount;                                   // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_336A[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortBattlePassLevelCount* GetDefaultObj();

};

// 0x8 (0x2B0 - 0x2A8)
// Class BattlePassBase.FortBattlePassPrerequisiteHeader
class UFortBattlePassPrerequisiteHeader : public UUserWidget
{
public:
	class UTextBlock*                            Text_Prerequisite;                                 // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortBattlePassPrerequisiteHeader* GetDefaultObj();

};

// 0xC0 (0x4A8 - 0x3E8)
// Class BattlePassBase.FortBattlePassPurchaseResourcesWidget
class UFortBattlePassPurchaseResourcesWidget : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_3376[0x8];                                     // Fixing Size After Last Property 
	class UCommonButtonBase*                     Button_Addition;                                   // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_BatchAddition;                              // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_Subtraction;                                // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_BatchSubtraction;                           // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonVisibilitySwitcher*             Switcher_PurchaseButtons;                          // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortHoldableButton*                   Button_Purchase;                                   // 0x418(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_GetVBucks;                                  // 0x420(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_ReloadMtx;                                  // 0x428(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_Back;                                       // 0x430(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortBattlePassCheckBoxButton*         CheckBox_Bundle;                                   // 0x438(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_CloseTouch;                                 // 0x440(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CurrentLevel;                                      // 0x448(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsOfferActive;                                    // 0x44C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_337D[0x3];                                     // Fixing Size After Last Property 
	int32                                        CurrentVBucks;                                     // 0x450(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CurrentBattleStars;                                // 0x454(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        BatchNum;                                          // 0x458(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOfferUnavailable;                                 // 0x45C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_337F[0x3];                                     // Fixing Size After Last Property 
	int32                                        MaxBundleLevel;                                    // 0x460(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxLevel;                                          // 0x464(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxLevelPurchases;                                 // 0x468(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        BundleAmount;                                      // 0x46C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemDefinition*                   LevelPreviewItem;                                  // 0x470(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaSeasonItemData_BattleStar*      BattleStarData;                                    // 0x478(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3380[0x28];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortBattlePassPurchaseResourcesWidget* GetDefaultObj();

	void OnUpdatePageUnlockText(class FText& PageUnlockText);
	void OnTotalPriceChanged(int32 NewPrice);
	void OnPurchaseAmountChanged(int32 NewAmount, int32 LevelsLeft);
	void OnOfferUnavailable();
	void OnAmountChangeButtonClicked();
	bool IsReloadMtxEnabled();
	void HandlePurchaseMultiComplete(bool bSuccess, TArray<struct FPurchasedItemInfo>& PurchasedItems, TArray<class FString>& OfferIdList);
	void HandlePurchaseComplete(bool bSuccess, TArray<struct FPurchasedItemInfo>& PurchasedItems, const class FString& OfferId);
};

// 0x20 (0x2F0 - 0x2D0)
// Class BattlePassBase.FortBattlePassResourceCounter
class UFortBattlePassResourceCounter : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                      Text_ResourceName;                                 // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortLazyImage*                        LazyImage_ResourceIcon;                            // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ResourceCount;                                // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortPersistentResourceItemDefinition* CurrentResource;                                   // 0x2E8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortBattlePassResourceCounter* GetDefaultObj();

};

// 0xD0 (0x4B8 - 0x3E8)
// Class BattlePassBase.FortBattlePassRewardGrid
class UFortBattlePassRewardGrid : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_3388[0x68];                                    // Fixing Size After Last Property 
	TSubclassOf<class UFortBattlePassTileBase>   GridTileClass;                                     // 0x450(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortBattlePassTileBase>   GridEmptyTileClass;                                // 0x458(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                             GridCellPadding;                                   // 0x460(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBattlePassRewardGridHeader*       PageHeader;                                        // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGridPanel*                            GridPanel_Rewards;                                 // 0x478(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBattlePassTileBase*               DefaultFocusTile;                                  // 0x480(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UCommonButtonBase>      LastFocusedTile;                                   // 0x488(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3389[0x28];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortBattlePassRewardGrid* GetDefaultObj();

	void OnPageUnselected();
	void OnPageSelected();
};

// 0x8 (0x2B0 - 0x2A8)
// Class BattlePassBase.FortBattlePassRewardGridHeader
class UFortBattlePassRewardGridHeader : public UUserWidget
{
public:
	uint8                                        Pad_3399[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortBattlePassRewardGridHeader* GetDefaultObj();

	void OnSetPageType(enum class ERewardPageType PageType);
	void OnSetPageCustomName(class FText& CustomName);
	void OnPageUnlocked(int32 PurchasedRewards, int32 TotalRewards);
	void OnPageNumberSet(int32 InPageNumber);
	void OnPageLocked(int32 RequiredLevel, int32 RequiredRewards, bool IsTimeLocked, const struct FTimespan& TimeRemaining);
	void OnBattlePassLevelSet(int32 BattlePassLevel);
	int32 GetPageNumber();
};

// 0xA0 (0x488 - 0x3E8)
// Class BattlePassBase.FortBattlePassRewardTrack
class UFortBattlePassRewardTrack : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_33A1[0x50];                                    // Fixing Size After Last Property 
	TSubclassOf<class UFortBattlePassTileBase>   RewardTileClass;                                   // 0x438(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortBattlePassTileBase>   RewardEmptyTileClass;                              // 0x440(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortBattlePassPrerequisiteHeader> PrerequisiteHeaderClass;                           // 0x448(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                             GridCellPadding;                                   // 0x450(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGridPanel*                            GridPanel_Rewards;                                 // 0x460(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBattlePassTileBase*               DefaultFocusTile;                                  // 0x468(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UCommonButtonBase>      LastFocusedTile;                                   // 0x470(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_33A4[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortBattlePassRewardTrack* GetDefaultObj();

	void OnPageUnselected();
	void OnPageSelected();
};

// 0xC8 (0x15D0 - 0x1508)
// Class BattlePassBase.FortBattlePassTileBase
class UFortBattlePassTileBase : public UFortHoldableButton
{
public:
	uint8                                        Pad_33BB[0x8];                                     // Fixing Size After Last Property 
	enum class ERewardPageType                   RewardPageType;                                    // 0x1510(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_33BC[0x7];                                     // Fixing Size After Last Property 
	class USizeBox*                              SizeBox_Content;                                   // 0x1518(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FLinearColor>       TileColors;                                        // 0x1520(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate)
	struct FLinearColor                          OverlayDimColor;                                   // 0x1570(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                             TileDesiredCellSpan;                               // 0x1580(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        UnitHeight;                                        // 0x1590(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        UnitWidth;                                         // 0x1594(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_33BD[0x38];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortBattlePassTileBase* GetDefaultObj();

	void SetState(enum class EBattlePassTileAvailabilityStates NewState);
	void SetSize(enum class EPageItemTileSize TileSize, struct FVector2D& CellSpacing);
	void OnStateChanged(enum class EBattlePassTileAvailabilityStates NewState);
	void OnSizeChanged(struct FVector2D& NewSize);
	void OnSetTileColors();
	void OnSetRequiresBattlePass(bool bRequiresBP);
	void OnRevealed();
	void OnPeeked();
	bool IsOwned();
	bool IsLocked();
	bool IsAvailable();
	enum class EBattlePassTileAvailabilityStates GetState();
	bool AreAnyGrantedItemsEquipped();
};

// 0x70 (0x1640 - 0x15D0)
// Class BattlePassBase.FortBattlePassTile
class UFortBattlePassTile : public UFortBattlePassTileBase
{
public:
	uint8                                        Pad_33D3[0x18];                                    // Fixing Size After Last Property 
	class UFortLazyImage*                        Image_RewardItem;                                  // 0x15E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                Image_Currency;                                    // 0x15F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsOnBulkBuyMode;                                  // 0x15F8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_33D4[0x47];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortBattlePassTile* GetDefaultObj();

	void OnUnpreviewed();
	void OnUnhighlighted();
	void OnTilePreviewCycled();
	void OnSetTrack(bool bIsFreeTrack, bool bOwnsBattlePass);
	void OnSetCurrencyAndPrice(enum class EBattlePassCurrencyType Currency, int32 Price);
	void OnPreviewed();
	void OnLockedStateUpdated(bool OwnsBattlePass, bool ParentUnlocked, bool HasRemainingPrerequisites, bool bIsDelayed);
	void OnLockedProgressUpdated(float Progress, int32 CurrentlyOwnedRewards, int32 NeededRewards);
	void OnHighlighted();
	void OnAffordabilityChanged(bool bHasEnougCurrency);
	bool IsAffordable();
	bool HasPrerequisites();
};

// 0x10 (0x2E0 - 0x2D0)
// Class BattlePassBase.FortBattlePassTutorialTooltip
class UFortBattlePassTutorialTooltip : public UCommonUserWidget
{
public:
	class UCommonRichTextBlock*                  Text_Tooltip;                                      // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_33E2[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortBattlePassTutorialTooltip* GetDefaultObj();

	void ShowTooltip();
	void SetTooltipEnabled(bool bEnable);
	void SetText(class FText Text);
	void HideTooltip();
};

// 0x0 (0x2A8 - 0x2A8)
// Class BattlePassBase.RebootRallyQuestPanel
class URebootRallyQuestPanel : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class URebootRallyQuestPanel* GetDefaultObj();

	void OnRebootRallyEligibilityUpdated(bool bEligible);
};

}


