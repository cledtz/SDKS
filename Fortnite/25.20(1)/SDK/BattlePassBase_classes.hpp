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

// 0x0 (0x28 - 0x28)
// Class BattlePassBase.BattlePassSubPageInterface
class UBattlePassSubPageInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BattlePassSubPageInterface");
		return Clss;
	}

	void OnEnterSubPage();
};

// 0x150 (0x548 - 0x3F8)
// Class BattlePassBase.BattlePassLandingPageBase
class UBattlePassLandingPageBase : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_79E9[0x120];                                   // Fixing Size After Last Property..
	class UBattlePassLandingPageButton*          LastHoveredPageButton;                             // 0x518(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonGroupBase*                LandingPageButtonGroupBase;                        // 0x520(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_79EA[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BattlePassLandingPageBase");
		return Clss;
	}

};

// 0x280 (0x16F0 - 0x1470)
// Class BattlePassBase.BattlePassLandingPageButton
class UBattlePassLandingPageButton : public UCommonButtonBase
{
public:
	enum class EBattlePassView                   SubPageType;                                       // 0x1470(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBattlePassFeatures               FeatureType;                                       // 0x1471(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_79EB[0x6];                                     // Fixing Size After Last Property..
	struct FBattlePassLandingPageEntryPreviewInfo PreviewInfo;                                       // 0x1478(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	bool                                         bNeedsBattlePass;                                  // 0x1508(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_79EC[0x7];                                     // Fixing Size After Last Property..
	class UFortChallengeBundleScheduleDefinition* DelayQuestSchedule;                                // 0x1510(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        DelayDaysSinceSeasonStart;                         // 0x1518(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_79ED[0x4];                                     // Fixing Size After Last Property..
	class UFortItemDefinition*                   RequiredItem;                                      // 0x1520(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortBangWrapper_NUI*                  BangWrapper;                                       // 0x1528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUsesTelemetry;                                    // 0x1530(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_79EE[0x3];                                     // Fixing Size After Last Property..
	struct FIntPoint                             Telemetry_Size;                                    // 0x1534(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FIntPoint                             Telemetry_Position;                                // 0x153C(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_79EF[0x4];                                     // Fixing Size After Last Property..
	struct FBattlePassLandingPageButtonTexts     DefaultTexts;                                      // 0x1548(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FBattlePassLandingPageButtonTexts     DelayedTexts;                                      // 0x1590(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FBattlePassLandingPageButtonTexts     SubscribedTexts;                                   // 0x15D8(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FBattlePassLandingPageButtonDisplayBehaviorData DisplayBehaviorData;                               // 0x1620(0x18)(BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_79F0[0xB8];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BattlePassLandingPageButton");
		return Clss;
	}

	void OnSubscriptionTextureLoaded(class UTexture2D* Texture);
	void OnSubscriptionOwnershipUpdated(bool bOwnsSubsciption);
	void OnShowDisplayDetails();
	void OnSetTileImageMaterial(class UMaterialInstance* Material);
	void OnDisplayDetailsUpdated(struct FBattlePassLandingPageButtonDisplayDetails& NewDisplayDetails);
	struct FBattlePassLandingPageButtonDisplayDetails GetBattlePassDisplayDetails();
};

// 0x118 (0x510 - 0x3F8)
// Class BattlePassBase.BattlePassRewardPageBase
class UBattlePassRewardPageBase : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_79F1[0x118];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BattlePassRewardPageBase");
		return Clss;
	}

};

// 0x78 (0xA0 - 0x28)
// Class BattlePassBase.BattlePassUIGameFeatureAction
class UBattlePassUIGameFeatureAction : public UFortUIGameFeatureAction
{
public:
	TSoftClassPtr<class UBattlePassScreenBase>   BattlePassScreenClass;                             // 0x28(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UFortGlobalSeasonResourceWidget> BattlePassResourceWidgetClass;                     // 0x50(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UCommonActivatableWidget> BattlePassInfoModalClass;                          // 0x78(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BattlePassUIGameFeatureAction");
		return Clss;
	}

};

// 0xB8 (0x360 - 0x2A8)
// Class BattlePassBase.FortBattlePassCustomSkinCategoryTile
class UFortBattlePassCustomSkinCategoryTile : public UUserWidget
{
public:
	uint8                                        Pad_79F2[0x20];                                    // Fixing Size After Last Property..
	class UProgressBar*                          ProgressBar;                                       // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortDynamicEntryBox*                  FortDynamicEntryBox_Items;                         // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URichTextBlock*                        Text_CategoryTitle;                                // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortBattlePassTile*                   PreviewedTile;                                     // 0x2E0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        OwnedRewards;                                      // 0x2E8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_79F3[0x74];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBattlePassCustomSkinCategoryTile");
		return Clss;
	}

	void SetPreviewedTile(int32 Index);
	void OnOwnedTilesUpdated(int32 CurrentlyOwnedRewards, int32 TotalRewards, float CategoryProgress);
	void OnLockedStateChanged(bool bCategoryLocked);
	void OnLockedProgressUpdated(int32 CurrentlyOwnedBeforeCategory, int32 TotalRewardsBeforeCategory, float LockedProgress);
	void FocusTile(int32 Index);
};

// 0x1C8 (0x5C0 - 0x3F8)
// Class BattlePassBase.FortBattlePassCustomSkinPageBase
class UFortBattlePassCustomSkinPageBase : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_79F4[0x1A0];                                   // Fixing Size After Last Property..
	class UScrollBox*                            ScrollBox_Categories;                              // 0x598(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortDynamicEntryBox*                  FortDynamicEntryBox_Categories;                    // 0x5A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_79F5[0x8];                                     // Fixing Size After Last Property..
	class UBattlePassEnabledInputData*           EquipEnabledData;                                  // 0x5B0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_79F6[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBattlePassCustomSkinPageBase");
		return Clss;
	}

};

// 0x198 (0x590 - 0x3F8)
// Class BattlePassBase.FortBattlePassBulkBuyPageBase
class UFortBattlePassBulkBuyPageBase : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_79F7[0x118];                                   // Fixing Size After Last Property..
	class UCommonButtonBase*                     Button_Addition;                                   // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_Subtraction;                                // 0x518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDynamicEntryBox*                      DynamicEntryBox_TilesEntries;                      // 0x520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonVisibilitySwitcher*             Switcher_BottomButtons;                            // 0x528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCTAButton*                        Button_BuyLevels;                                  // 0x530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCTAButton*                        Button_ClaimReward;                                // 0x538(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAthenaSeasonItemData_BattleStar*      SeasonData_BattleStar;                             // 0x540(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_79F8[0x18];                                    // Fixing Size After Last Property..
	class UAthenaSeasonItemDefinition*           SeasonItemDefinition;                              // 0x560(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBattlePassTile*                   FocusedReward;                                     // 0x568(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_79F9[0x18];                                    // Fixing Size After Last Property..
	class UScrollBox*                            ScrollBox_Pages;                                   // 0x588(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBattlePassBulkBuyPageBase");
		return Clss;
	}

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
	uint8                                        Pad_79FA[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBattlePassCheckBoxButton");
		return Clss;
	}

	void OnStateChanged(bool bNewIsChecked);
};

// 0x78 (0xA8 - 0x30)
// Class BattlePassBase.FortBattlePassContext
class UFortBattlePassContext : public UBlueprintContextBase
{
public:
	uint8                                        Pad_79FD[0x8];                                     // Fixing Size After Last Property..
	TArray<class UFortPersistentResourceItemDefinition*> CustomizationPageSeasonalResources;                // 0x38(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UFortPersistentResourceItemDefinition*> AllSeasonalResources;                              // 0x48(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<enum class ERewardPageType, struct FSeasonalResourceList> RewardPageSeasonalResources;                       // 0x58(0x50)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBattlePassContext");
		return Clss;
	}

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBattlePassResourcesWidgetBase");
		return Clss;
	}

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
	uint8                                        Pad_79FE[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBattlePassCurrencyPanel");
		return Clss;
	}

};

// 0x58 (0x300 - 0x2A8)
// Class BattlePassBase.FortBattlePassDynamicIcon
class UFortBattlePassDynamicIcon : public UUserWidget
{
public:
	TSoftObjectPtr<class UObject>                BattlePassDefaultIcon;                             // 0x2A8(0x28)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UObject>                BattlePassOwnedIcon;                               // 0x2D0(0x28)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortLazyImage*                        LazyImage_BattlePassIcon;                          // 0x2F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBattlePassDynamicIcon");
		return Clss;
	}

	void OnBattlePassInfoUpdated(bool bOwnsBattlePass);
};

// 0x10 (0x2B8 - 0x2A8)
// Class BattlePassBase.FortBattlePassLevelCount
class UFortBattlePassLevelCount : public UUserWidget
{
public:
	class UCommonTextBlock*                      Text_LevelCount;                                   // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_79FF[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBattlePassLevelCount");
		return Clss;
	}

};

// 0x8 (0x2B0 - 0x2A8)
// Class BattlePassBase.FortBattlePassPrerequisiteHeader
class UFortBattlePassPrerequisiteHeader : public UUserWidget
{
public:
	class UTextBlock*                            Text_Prerequisite;                                 // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBattlePassPrerequisiteHeader");
		return Clss;
	}

};

// 0xC0 (0x4B8 - 0x3F8)
// Class BattlePassBase.FortBattlePassPurchaseResourcesWidget
class UFortBattlePassPurchaseResourcesWidget : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_7A02[0x8];                                     // Fixing Size After Last Property..
	class UCommonButtonBase*                     Button_Addition;                                   // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_BatchAddition;                              // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_Subtraction;                                // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_BatchSubtraction;                           // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonVisibilitySwitcher*             Switcher_PurchaseButtons;                          // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortHoldableButton*                   Button_Purchase;                                   // 0x428(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_GetVBucks;                                  // 0x430(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_ReloadMtx;                                  // 0x438(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_Back;                                       // 0x440(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortBattlePassCheckBoxButton*         CheckBox_Bundle;                                   // 0x448(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_CloseTouch;                                 // 0x450(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CurrentLevel;                                      // 0x458(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsOfferActive;                                    // 0x45C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7A03[0x3];                                     // Fixing Size After Last Property..
	int32                                        CurrentVBucks;                                     // 0x460(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CurrentBattleStars;                                // 0x464(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        BatchNum;                                          // 0x468(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOfferUnavailable;                                 // 0x46C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7A04[0x3];                                     // Fixing Size After Last Property..
	int32                                        MaxBundleLevel;                                    // 0x470(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxLevel;                                          // 0x474(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxLevelPurchases;                                 // 0x478(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        BundleAmount;                                      // 0x47C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemDefinition*                   LevelPreviewItem;                                  // 0x480(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaSeasonItemData_BattleStar*      BattleStarData;                                    // 0x488(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7A05[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBattlePassPurchaseResourcesWidget");
		return Clss;
	}

	void OnUpdatePageUnlockText(class FText& PageUnlockText);
	void OnTotalPriceChanged(int32 NewPrice);
	void OnPurchaseAmountChanged(int32 NewAmount, int32 LevelsLeft);
	void OnOfferUnavailable();
	void OnAmountChangeButtonClicked();
	bool IsReloadMtxEnabled();
	void HandlePurchaseMultiComplete(bool bSuccess, TArray<struct FPurchasedItemInfo>& PurchasedItems, TArray<class FString>& OfferIdList);
	void HandlePurchaseComplete(bool bSuccess, TArray<struct FPurchasedItemInfo>& PurchasedItems, const class FString& OfferID);
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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBattlePassResourceCounter");
		return Clss;
	}

};

// 0xD0 (0x4C8 - 0x3F8)
// Class BattlePassBase.FortBattlePassRewardGrid
class UFortBattlePassRewardGrid : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_7A06[0x68];                                    // Fixing Size After Last Property..
	TSubclassOf<class UFortBattlePassTileBase>   GridTileClass;                                     // 0x460(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortBattlePassTileBase>   GridEmptyTileClass;                                // 0x468(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                             GridCellPadding;                                   // 0x470(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBattlePassRewardGridHeader*       PageHeader;                                        // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGridPanel*                            GridPanel_Rewards;                                 // 0x488(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBattlePassTileBase*               DefaultFocusTile;                                  // 0x490(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UCommonButtonBase>      LastFocusedTile;                                   // 0x498(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7A07[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBattlePassRewardGrid");
		return Clss;
	}

	void OnPageUnselected();
	void OnPageSelected();
};

// 0x8 (0x2B0 - 0x2A8)
// Class BattlePassBase.FortBattlePassRewardGridHeader
class UFortBattlePassRewardGridHeader : public UUserWidget
{
public:
	uint8                                        Pad_7A09[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBattlePassRewardGridHeader");
		return Clss;
	}

	void OnSetPageType(enum class ERewardPageType PageType);
	void OnSetPageCustomName(class FText& CustomName);
	void OnPageUnlocked(int32 PurchasedRewards, int32 TotalRewards);
	void OnPageNumberSet(int32 InPageNumber);
	void OnPageLocked(int32 RequiredLevel, int32 RequiredRewards, bool IsTimeLocked, const struct FTimespan& TimeRemaining);
	void OnBattlePassLevelSet(int32 BattlePassLevel);
	int32 GetPageNumber();
};

// 0xA0 (0x498 - 0x3F8)
// Class BattlePassBase.FortBattlePassRewardTrack
class UFortBattlePassRewardTrack : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_7A0A[0x50];                                    // Fixing Size After Last Property..
	TSubclassOf<class UFortBattlePassTileBase>   RewardTileClass;                                   // 0x448(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortBattlePassTileBase>   RewardEmptyTileClass;                              // 0x450(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortBattlePassPrerequisiteHeader> PrerequisiteHeaderClass;                           // 0x458(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                             GridCellPadding;                                   // 0x460(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGridPanel*                            GridPanel_Rewards;                                 // 0x470(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBattlePassTileBase*               DefaultFocusTile;                                  // 0x478(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UCommonButtonBase>      LastFocusedTile;                                   // 0x480(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7A0B[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBattlePassRewardTrack");
		return Clss;
	}

	void OnPageUnselected();
	void OnPageSelected();
};

// 0xC8 (0x15D0 - 0x1508)
// Class BattlePassBase.FortBattlePassTileBase
class UFortBattlePassTileBase : public UFortHoldableButton
{
public:
	uint8                                        Pad_7A0D[0x8];                                     // Fixing Size After Last Property..
	enum class ERewardPageType                   RewardPageType;                                    // 0x1510(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7A0E[0x7];                                     // Fixing Size After Last Property..
	class USizeBox*                              SizeBox_Content;                                   // 0x1518(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FLinearColor>       TileColors;                                        // 0x1520(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate)
	struct FLinearColor                          OverlayDimColor;                                   // 0x1570(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                             TileDesiredCellSpan;                               // 0x1580(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        UnitHeight;                                        // 0x1590(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        UnitWidth;                                         // 0x1594(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7A0F[0x38];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBattlePassTileBase");
		return Clss;
	}

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

// 0x80 (0x1650 - 0x15D0)
// Class BattlePassBase.FortBattlePassTile
class UFortBattlePassTile : public UFortBattlePassTileBase
{
public:
	uint8                                        Pad_7A11[0x18];                                    // Fixing Size After Last Property..
	class UFortLazyImage*                        Image_RewardItem;                                  // 0x15E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                Image_Currency;                                    // 0x15F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsOnBulkBuyMode;                                  // 0x15F8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7A12[0x57];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBattlePassTile");
		return Clss;
	}

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
	uint8                                        Pad_7A13[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBattlePassTutorialTooltip");
		return Clss;
	}

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RebootRallyQuestPanel");
		return Clss;
	}

	void OnRebootRallyEligibilityUpdated(bool bEligible);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
