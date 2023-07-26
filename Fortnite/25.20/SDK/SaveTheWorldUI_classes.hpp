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

// 0x80 (0x350 - 0x2D0)
// Class SaveTheWorldUI.FortQuestMapViewer
class UFortQuestMapViewer : public UCommonUserWidget
{
public:
	uint8                                        Pad_83F2[0x10];                                    // Fixing Size After Last Property..
	class UCommonButtonBase*                     Button_PageRight;                                  // 0x2E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_PageLeft;                                   // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Title;                                        // 0x2F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Page;                                         // 0x2F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USizeBox*                              SizeBox_Viewer;                                    // 0x300(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                          CanvasPanel_Cosmetic;                              // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortQuestMapScreen*                   ParentScreen;                                      // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortQuestMapNodeLayout*               NodeLayout;                                        // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_83F3[0x30];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestMapViewer");
		return Clss;
	}

	void UpdateViewerData();
	void OnTryUpdateUserWidgetColor(class UUserWidget* Widget, const struct FSlateColor& OverrideColor);
	void OnPlayLayoutOutroAnimation(enum class EViewerNavigationDirection TravelDirection);
	void OnPlayLayoutFadeInAnimation();
	void HandleLayoutOutroAnimationFinished();
};

// 0x0 (0x3F8 - 0x3F8)
// Class SaveTheWorldUI.FortArmoryScreen
class UFortArmoryScreen : public UCommonActivatableWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortArmoryScreen");
		return Clss;
	}

	void PushItemManagementScreen(enum class EFortFrontendInventoryFilter ItemManagementFilter, class UFortItem* ItemToSelect, bool bShowAutoMulch);
	void PushItemInspectionScreen(class UFortItem* ItemToInspect, enum class EFortItemInspectionMode Mode, class UFortItemTileView* CycleTileView, bool bReadOnly, bool bAllowFavoriting, bool bIsTemporaryItem, bool bAllowRarityUpgrading);
	void PushHeroLoadoutScreen(class UFortCampaignHeroLoadoutItem* HeroLoadout);
};

// 0x0 (0x568 - 0x568)
// Class SaveTheWorldUI.FortArmoryScreen_Legacy
class UFortArmoryScreen_Legacy : public UFortActivatablePanel
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortArmoryScreen_Legacy");
		return Clss;
	}

};

// 0x28 (0x420 - 0x3F8)
// Class SaveTheWorldUI.FortCommandScreen
class UFortCommandScreen : public UCommonActivatableWidget
{
public:
	struct FDataTableRowHandle                   ShowAllStatsActionData;                            // 0x3F8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   InspectHeroActionData;                             // 0x408(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_83FA[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCommandScreen");
		return Clss;
	}

	void PushItemInspectionScreen(class UFortItem* ItemToInspect, enum class EFortItemInspectionMode Mode, class UFortItemTileView* CycleTileView, bool bReadOnly, bool bAllowFavoriting, bool bIsTemporaryItem, bool bAllowRarityUpgrading);
	void PushHeroLoadoutScreen(class UFortCampaignHeroLoadoutItem* HeroLoadout);
	void HandleUpgradeInspectHero();
	void HandleShowAllStats();
};

// 0x18 (0x2E8 - 0x2D0)
// Class SaveTheWorldUI.FortCollectionBookGenericRewardWidget
class UFortCollectionBookGenericRewardWidget : public UCommonUserWidget
{
public:
	uint8                                        bUpdateVisibilityBasedOnRewardExistence : 1;       // Mask: 0x1, PropSize: 0x10x2D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_444 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_83FB[0x3];                                     // Fixing Size After Last Property..
	enum class ESlateVisibility                  VisibilityWhenNoRewardSpecified;                   // 0x2D4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESlateVisibility                  VisibilityWhenRewardSpecified;                     // 0x2D5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_83FC[0x2];                                     // Fixing Size After Last Property..
	class UFortCollectionBookRewardCardWidget*   RewardCardWidget;                                  // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECollectionBookRewardStatus       RewardStatus;                                      // 0x2E0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_83FD[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookGenericRewardWidget");
		return Clss;
	}

	void SetRewardStatus(enum class ECollectionBookRewardStatus Status);
	void SetRewards(struct FFortRewardInfo& Rewards);
	void SetCurrentItemToDisplay(class UFortItem* ItemToDisplay);
	void OnRewardStatusChanged(enum class ECollectionBookRewardStatus NewStatus);
	bool HasRewards();
	enum class ECollectionBookRewardStatus GetRewardStatus();
	void ClearRewards();
};

// 0x0 (0x568 - 0x568)
// Class SaveTheWorldUI.FortCollectionBookHelpWidget
class UFortCollectionBookHelpWidget : public UFortActivatablePanel
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookHelpWidget");
		return Clss;
	}

};

// 0x8 (0x558 - 0x550)
// Class SaveTheWorldUI.FortCollectionBookItemPopupMenu
class UFortCollectionBookItemPopupMenu : public UFortPopupMenu_Legacy
{
public:
	uint8                                        Pad_83FE[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookItemPopupMenu");
		return Clss;
	}

	void HandleItemUpdated();
	void HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	class UFortCollectionBookSlotButton* GetHostButton();
	bool CanItemBeUnslotted();
	bool CanItemBePurchased();
};

// 0x48 (0x318 - 0x2D0)
// Class SaveTheWorldUI.FortCollectionBookOverviewWidget
class UFortCollectionBookOverviewWidget : public UCommonUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnCollectionBookPageSelected;                      // 0x2D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCollectionBookPageClicked;                       // 0x2E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UFortCollectionBookPage*               LastSelectedPage;                                  // 0x2F0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortCollectionBookCategory*           LastSelectedCategory;                              // 0x2F8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortCollectionBookCategory*>   CategoryObjectPool;                                // 0x300(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UCommonTreeView*                       PageTreeViewWidget;                                // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookOverviewWidget");
		return Clss;
	}

	void OnDeactivated();
	void OnActivated();
	void HandlePagesChanged(class UFortCollectionBookManager* CBManager);
};

// 0x0 (0x2E8 - 0x2E8)
// Class SaveTheWorldUI.FortCollectionBookPageCompletionRewardWidget
class UFortCollectionBookPageCompletionRewardWidget : public UFortCollectionBookGenericRewardWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookPageCompletionRewardWidget");
		return Clss;
	}

};

// 0x70 (0x340 - 0x2D0)
// Class SaveTheWorldUI.FortCollectionBookPageDetailsWidget
class UFortCollectionBookPageDetailsWidget : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                      PageCompletionText;                                // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortMaterialProgressBar*              ProgressBar;                                       // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookPageCompletionRewardWidget* PageRewardWidget;                                  // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonLegacy*                   RewardDetailsButton;                               // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookPage*               DetailsPage;                                       // 0x2F0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UFortCollectionBookRewardModalWidget> RewardDetailsModalWidgetClass;                     // 0x2F8(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  ModalTitle;                                        // 0x320(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class UFortCollectionBookRewardModalWidget*  RewardDetailsModalWidget;                          // 0x338(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookPageDetailsWidget");
		return Clss;
	}

	void OnUnslotItemComplete(class UFortAccountItem* SlottedItem, class UFortAccountItem* OldItem, class FName SlotId);
	void OnSlotItemComplete(class UFortAccountItem* SlottedItem, class FName SlotId);
	void OnPageProgressionUpdated(int32 TotalFilledSlots, int32 TotalSlots, enum class EFortCollectionBookState State);
	void OnDetailsPageChanged(class UFortCollectionBookPage* InNewDetailsPage);
	void HandleRewardDetailsModalWidgetDeactivated(class UCommonActivatablePanelLegacy* DeactivatedPanel);
};

// 0x30 (0x14F0 - 0x14C0)
// Class SaveTheWorldUI.FortCollectionBookPageListWidget
class UFortCollectionBookPageListWidget : public UCommonButtonLegacy
{
public:
	uint8                                        Pad_8404[0x8];                                     // Fixing Size After Last Property..
	class UCommonTextBlock*                      PageNameWidget;                                    // 0x14C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonNumericTextBlock*               AvailableSlotsWidget;                              // 0x14D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      PageCompletionWidget;                              // 0x14D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UObject>                AssociatedPageOrCategory;                          // 0x14E0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsExpanded;                                       // 0x14E8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8405[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookPageListWidget");
		return Clss;
	}

	void SetupAsPage(class UFortCollectionBookPage* Page);
	void SetupAsCategory(class UFortCollectionBookCategory* Category);
	void OnSlottedItemOperationComplete(class UFortAccountItem* SlottedItem, class FName SlotId);
	void OnPageDetailsUpdated(int32 AvailableSlots, int32 FilledSlots, int32 TotalSlots, enum class EFortCollectionBookState State);
	void OnCategoryDetailsUpdated(int32 AvailableSlots, int32 FilledSlots, int32 TotalSlots);
};

// 0x28 (0x438 - 0x410)
// Class SaveTheWorldUI.FortCollectionBookPicker
class UFortCollectionBookPicker : public UFortItemPickerBase
{
public:
	uint8                                        Pad_8406[0x8];                                     // Fixing Size After Last Property..
	TSubclassOf<class UFortMulchConfirmationModalWidget> MulchConfirmationModalClass;                       // 0x418(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8407[0x8];                                     // Fixing Size After Last Property..
	class UFortAccountItem*                      CurrentSlottedItem;                                // 0x428(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortMulchConfirmationModalWidget*     MulchConfirmationModal;                            // 0x430(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookPicker");
		return Clss;
	}

	void ShowMulchDialogForItem(class UFortItem* ItemToMulch);
	void ShowMulchConfirmationModal();
	void OnCollectComplete();
	void NotifyPanelDeactivated();
	void NotifyPanelActivated();
	void HideMulchConfirmationModal();
};

// 0xC8 (0x4C0 - 0x3F8)
// Class SaveTheWorldUI.FortCollectionBookPrimaryPanel
class UFortCollectionBookPrimaryPanel : public UCommonActivatableWidget
{
public:
	FMulticastInlineDelegateProperty_            OnCollectionBookPageSelectedDelegate;              // 0x3F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCollectionBookPageClickedDelegate;               // 0x408(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCollectionBookSectionClickedDelegate;            // 0x418(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   BackActionRowHandle;                               // 0x428(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   SummonInfoPanelActionRowHandle;                    // 0x438(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UFortCollectionBookOverviewWidget*     OverviewWidget;                                    // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTileView*                       SectionTileViewWidget;                             // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECollectionBookPrimaryNavTarget   CurrentNavTarget;                                  // 0x458(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8408[0x7];                                     // Fixing Size After Last Property..
	class UFortCollectionBookSection*            LastClickedSection;                                // 0x460(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8409[0x58];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookPrimaryPanel");
		return Clss;
	}

	void OnSummonInfoPanelExecuted(bool* bPassThrough);
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType);
	void OnCollectionBookSectionClicked(class UFortCollectionBookSection* ClickedSection);
	void OnCollectionBookPageSelected(class UFortCollectionBookPage* SelectedPage);
	void OnCollectionBookPageClicked(class UFortCollectionBookPage* ClickedPage);
	void OnBackActionExecuted();
};

// 0xC0 (0x5F0 - 0x530)
// Class SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy
class UFortCollectionBookPrimaryPanel_Legacy : public UCommonActivatablePanelLegacy
{
public:
	FMulticastInlineDelegateProperty_            OnCollectionBookPageSelectedDelegate;              // 0x530(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCollectionBookPageClickedDelegate;               // 0x540(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCollectionBookSectionClickedDelegate;            // 0x550(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   BackActionRowHandle;                               // 0x560(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   SummonInfoPanelActionRowHandle;                    // 0x570(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UFortCollectionBookOverviewWidget*     OverviewWidget;                                    // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTileView*                       SectionTileViewWidget;                             // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECollectionBookPrimaryNavTarget   CurrentNavTarget;                                  // 0x590(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_840A[0x7];                                     // Fixing Size After Last Property..
	class UFortCollectionBookSection*            LastClickedSection;                                // 0x598(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_840B[0x50];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookPrimaryPanel_Legacy");
		return Clss;
	}

	void OnSummonInfoPanelExecuted(bool* bPassThrough);
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType);
	void OnCollectionBookSectionClicked(class UFortCollectionBookSection* ClickedSection);
	void OnCollectionBookPageSelected(class UFortCollectionBookPage* SelectedPage);
	void OnCollectionBookPageClicked(class UFortCollectionBookPage* ClickedPage);
	void OnBackActionExecuted(bool* bPassThrough);
};

// 0x20 (0x2F0 - 0x2D0)
// Class SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget
class UFortCollectionBookProgressionRewardDetailInspectWidget : public UCommonUserWidget
{
public:
	class UCommonNumericTextBlock*               LevelTextWidget;                                   // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortRewardInfoWidget_Legacy*          RewardWidget;                                      // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               CheckmarkImage;                                    // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_840C[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookProgressionRewardDetailInspectWidget");
		return Clss;
	}

	void SetAssociatedLevel(int32 Level);
	void OnXPRequiredChanged(int32 NewXPRequired);
	int32 GetXPRequired();
};

// 0x68 (0x5D0 - 0x568)
// Class SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget
class UFortCollectionBookProgressionRewardsModalWidget : public UFortActivatablePanel
{
public:
	TSoftClassPtr<class UFortCollectionBookProgressionRewardDetailInspectWidget> RewardWidgetClass;                                 // 0x568(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                               RewardWidgetPadding;                               // 0x590(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	int32                                        NumRewardsToShow;                                  // 0x5A0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_840E[0x4];                                     // Fixing Size After Last Property..
	class UVerticalBox*                          RewardBoxWidget;                                   // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                          MajorRewardBoxWidget;                              // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      XPTextWidget;                                      // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonNumericTextBlock*               LevelTextWidget;                                   // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonGroupLegacy*              ButtonGroup;                                       // 0x5C8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookProgressionRewardsModalWidget");
		return Clss;
	}

	void OnSelectedButtonChanged(class UCommonButtonLegacy* SelectedButton, int32 ButtonIndex);
	void OnLevelProgressionSet(int32 CurrentLevel, float NextLvlPct, int32 MaxAchievedLevel);
	void InspectItemBP(class UFortItem* Item);
};

// 0x10 (0x2E0 - 0x2D0)
// Class SaveTheWorldUI.FortCollectionBookProgressionRewardsPreviewWidget
class UFortCollectionBookProgressionRewardsPreviewWidget : public UCommonUserWidget
{
public:
	class UFortCollectionBookProgressionRewardWidget* NextRewardWidget;                                  // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookProgressionRewardWidget* NextMajorRewardWidget;                             // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookProgressionRewardsPreviewWidget");
		return Clss;
	}

};

// 0x10 (0x2F8 - 0x2E8)
// Class SaveTheWorldUI.FortCollectionBookProgressionRewardWidget
class UFortCollectionBookProgressionRewardWidget : public UFortCollectionBookGenericRewardWidget
{
public:
	class UCommonNumericTextBlock*               LevelTextWidget;                                   // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      DisplayNameWidget;                                 // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookProgressionRewardWidget");
		return Clss;
	}

	void SetAssociatedLevel(int32 Level);
};

// 0x60 (0x330 - 0x2D0)
// Class SaveTheWorldUI.FortCollectionBookProgressWidget
class UFortCollectionBookProgressWidget : public UCommonUserWidget
{
public:
	int32                                        CachedXPLevel;                                     // 0x2D0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CachedXPCompletionPct;                             // 0x2D4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UFortCollectionBookProgressionRewardsModalWidget> RewardDetailsModalWidgetClass;                     // 0x2D8(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookProgressionRewardsPreviewWidget* ProgressionRewardsPreviewWidget;                   // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      XPTextWidget;                                      // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonNumericTextBlock*               LevelTextWidget;                                   // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonLegacy*                   DetailsButtonWidget;                               // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookPageDetailsWidget*  PageDetailsWidget;                                 // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookProgressionRewardsModalWidget* DetailsModalWidget;                                // 0x328(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookProgressWidget");
		return Clss;
	}

	void OnSlottedItemOperationComplete(class UFortAccountItem* ItemSlotted, class FName SlotId);
	void OnInventoryUpdated();
	void OnCollectionBookPreviewXPChange(float PreviewCompletionPct);
	void OnCollectionBookPageSelected(class UFortCollectionBookPage* SelectedPage);
	void OnCollectionBookLevelProgressionChanged(float NewCompletionPct);
	void OnCollectionBookLevelChanged(int32 NewLevel);
	void HandleDetailsModalWidgetDeactivated(class UCommonActivatablePanelLegacy* DeactivatedPanel);
};

// 0x18 (0x2E8 - 0x2D0)
// Class SaveTheWorldUI.FortCollectionBookRecycleSlotResultsWidget
class UFortCollectionBookRecycleSlotResultsWidget : public UCommonUserWidget
{
public:
	class UPanelWidget*                          RecycleResultsWidget;                              // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortItemCardSize                 ItemCardSize;                                      // 0x2D8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8410[0x7];                                     // Fixing Size After Last Property..
	class UFortAccountItem*                      ItemToRecycle;                                     // 0x2E0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookRecycleSlotResultsWidget");
		return Clss;
	}

	void SetCurrentItemToRecycle(class UFortAccountItem* InItemToRecycle);
};

// 0x88 (0x358 - 0x2D0)
// Class SaveTheWorldUI.FortCollectionBookRewardCardWidget
class UFortCollectionBookRewardCardWidget : public UCommonUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnDisplayedItemChangedEvent;                       // 0x2D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UFortMultiSizeItemCard*                ItemCardWidget;                                    // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               MultiItemRewardOverlay;                            // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               ChoiceRewardOverlay;                               // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               CheckmarkImage;                                    // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        UpdateCardInterval;                                // 0x300(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortItemCardSize                 ItemCardSize;                                      // 0x304(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDisplayAsRewardCard;                              // 0x305(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8411[0x2];                                     // Fixing Size After Last Property..
	struct FFortRewardInfo                       RepresentedRewards;                                // 0x308(0x30)(Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UFortItem*>                     DummyItems;                                        // 0x338(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FTimerHandle                          UpdateCardTimer;                                   // 0x348(0x8)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8412[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookRewardCardWidget");
		return Clss;
	}

	void SetRewards(struct FFortRewardInfo& Rewards);
	void OnDisplayedItemChangedEvent__DelegateSignature(class UFortItem* DisplayedItem);
	bool HasRewards();
	void ClearRewards();
};

// 0x50 (0x580 - 0x530)
// Class SaveTheWorldUI.FortCollectionBookRewardModalWidget
class UFortCollectionBookRewardModalWidget : public UCommonActivatablePanelLegacy
{
public:
	class UCommonTextBlock*                      TitleWidget;                                       // 0x530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortRewardInfoWidget_Legacy*          RewardWidget;                                      // 0x538(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortMaterialProgressBar*              ProgressBar;                                       // 0x540(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      ProgressTextWidget;                                // 0x548(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8413[0x30];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookRewardModalWidget");
		return Clss;
	}

};

// 0x58 (0x340 - 0x2E8)
// Class SaveTheWorldUI.FortCollectionBookSectionCompletionRewardWidget
class UFortCollectionBookSectionCompletionRewardWidget : public UFortCollectionBookGenericRewardWidget
{
public:
	class UCommonButtonLegacy*                   RewardDetailsButton;                               // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UFortCollectionBookRewardModalWidget> RewardDetailsModalWidgetClass;                     // 0x2F0(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  ModalTitle;                                        // 0x318(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class UFortCollectionBookRewardModalWidget*  RewardDetailsModalWidget;                          // 0x330(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortCollectionBookSection*            Section;                                           // 0x338(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookSectionCompletionRewardWidget");
		return Clss;
	}

	void HandleRewardDetailsModalWidgetDeactivated(class UCommonActivatablePanelLegacy* DeactivatedPanel);
};

// 0x1D0 (0x700 - 0x530)
// Class SaveTheWorldUI.FortCollectionBookSectionPanel
class UFortCollectionBookSectionPanel : public UCommonActivatablePanelLegacy
{
public:
	FMulticastInlineDelegateProperty_            OnSectionCloseRequest;                             // 0x530(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPreviewXPChangeEvent;                            // 0x540(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UCommonTextBlock*                      SectionNameTextWidget;                             // 0x550(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookSlotView*           SlotViewWidget;                                    // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookPicker*             SlotItemPicker;                                    // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               ContextOverlayWidget;                              // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ContextTextWidget;                                 // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookSectionCompletionRewardWidget* SectionRewardWidget;                               // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               ItemAcquisitionSourceContainerWidget;              // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      ItemAcquisitionSourceDescWidget;                   // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      ItemAcquisitionSourceDesc2Widget;                  // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               ResearchRecruitUnslotContainerWidget;              // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      PersonRecruitUnavailableMessageWidget;             // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      ItemResearchUnavailableMessageWidget;              // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      UnslotUnavailableMessageWidget;                    // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   BackActionRowHandle;                               // 0x5B8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   CloseActionRowHandle;                              // 0x5C8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   SlotItemActionRowHandle;                           // 0x5D8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   InspectItemActionRowHandle;                        // 0x5E8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   InspectCollectionBookItemActionRowHandle;          // 0x5F8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   InspectPreviewItemActionRowHandle;                 // 0x608(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   OpenPickerActionRowHandle;                         // 0x618(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   LogAllowedItemsActionRowHandle;                    // 0x628(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   ResearchItemActionRowHandle;                       // 0x638(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   RecruitActionRowHandle;                            // 0x648(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   UnslotItemActionRowHandle;                         // 0x658(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class ECollectionBookSectionNavTarget   CurrentNavTarget;                                  // 0x668(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8418[0x7];                                     // Fixing Size After Last Property..
	class UFortCollectionBookSection*            AssociatedSection;                                 // 0x670(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasSummonedPanel;                                 // 0x678(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8419[0x3];                                     // Fixing Size After Last Property..
	struct FFortDialogExternalLatentActionHandle SlotConfirmationDialogLatentHandle;                // 0x67C(0x4)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnShowItemDetailEvent;                             // 0x680(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSlotItemConfirmEvent;                            // 0x690(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnResearchItemConfirmEvent;                        // 0x6A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnUnslotItemConfirmEvent;                          // 0x6B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnInspectItemEvent;                                // 0x6C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_841A[0x28];                                    // Fixing Size After Last Property..
	TSubclassOf<class UFortCollectionBookSlotConfirmationModal> SlotConfirmationModalClass;                        // 0x6F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookSectionPanel");
		return Clss;
	}

	void OnUnslotItemOperationComplete(class UFortAccountItem* UnslottedItem, class UFortAccountItem* OldSlottedItem, class FName SlotId);
	void OnUnslotItemComplete(class UFortItem* UnslottedItem, class FName SlotId);
	void OnUnslotItemActionExecuted(bool* bPassThrough);
	void OnSlottedItemOperationComplete(class UFortAccountItem* SlottedItem, class FName SlotId);
	void OnSlotItemActionExecuted(bool* bPassThrough);
	void OnSlotButtonSelected(class UFortCollectionBookSlotButton* SlotButton);
	void OnSlotButtonHovered(int32 ButtonIx);
	void OnSlotButtonContextAction(enum class EFortCollectionBookPopupButtonType ContextAction);
	void OnSectionChanged(class UFortCollectionBookSection* Section);
	void OnResearchItemOperationComplete(class UFortAccountItem* NewItem, const class FString& TemplateId);
	void OnResearchItemAction__DelegateSignature(class UFortItem* SelectedItem, const struct FFortCollectionBookSlotData& SlotData);
	void OnPurchaseItemActionExecuted(bool* bPassThrough);
	void OnOpenPickerActionExecuted(bool* bPassThrough);
	void OnLogAllowedItemsActionExecuted(bool* bPassThrough);
	void OnItemInspectAction__DelegateSignature(class UFortItem* SelectedItem, bool EnableItemActions, bool IsPlaceholderItem);
	void OnItemAction__DelegateSignature(class UFortItem* SelectedItem);
	void OnInspectActionExecuted(bool* bPassThrough);
	void OnBackActionExecuted(bool* bPassThrough);
};

// 0x80 (0x1540 - 0x14C0)
// Class SaveTheWorldUI.FortCollectionBookSectionTileWidget
class UFortCollectionBookSectionTileWidget : public UCommonButtonLegacy
{
public:
	uint8                                        Pad_841E[0x8];                                     // Fixing Size After Last Property..
	TSoftClassPtr<class UFortCollectionBookSlotWidget> SlotWidgetClass;                                   // 0x14C8(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                               SlotWidgetPadding;                                 // 0x14F0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EHorizontalAlignment              SlotWidgetHorizontalAlignment;                     // 0x1500(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVerticalAlignment                SlotWidgetVerticalAlignment;                       // 0x1501(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_841F[0x2];                                     // Fixing Size After Last Property..
	int32                                        MaxNumSlotsSupported;                              // 0x1504(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        SlotBoxWidget;                                     // 0x1508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      SectionNameWidget;                                 // 0x1510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookGenericRewardWidget* SectionRewardWidget;                               // 0x1518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookSection*            AssociatedSection;                                 // 0x1520(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortCollectionBookSlotWidget*> SlotWidgets;                                       // 0x1528(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_8420[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookSectionTileWidget");
		return Clss;
	}

	void OnSectionSlotUpdate(int32 NumFilledSlots, int32 NumSlots, enum class EFortCollectionBookState SectionState);
	void OnItemUnslotted(class UFortAccountItem* ItemUnslotted, class UFortAccountItem* OldSlottedItem, class FName SlotId);
	void OnItemSlotted(class UFortAccountItem* ItemSlotted, class FName SlotId);
};

// 0x40 (0x1500 - 0x14C0)
// Class SaveTheWorldUI.FortCollectionBookSlotButton
class UFortCollectionBookSlotButton : public UCommonButtonLegacy
{
public:
	class UFortCollectionBookSlotWidget*         CollectionBookSlotWidget;                          // 0x14C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMenuAnchor*                           PopupMenuAnchor;                                   // 0x14C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8421[0x30];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookSlotButton");
		return Clss;
	}

	void PopupMenuClosedWithAction(enum class EFortCollectionBookPopupButtonType Selection);
	void OnSlottedItemUpdated();
	class UUserWidget* GetPopupMenu();
};

// 0x58 (0x5C0 - 0x568)
// Class SaveTheWorldUI.FortCollectionBookSlotConfirmationModal
class UFortCollectionBookSlotConfirmationModal : public UFortActivatablePanel
{
public:
	uint8                                        Pad_8423[0x8];                                     // Fixing Size After Last Property..
	class UFortAccountItem*                      CurrentlySlottedItem;                              // 0x570(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAccountItem*                      NewItemToSlot;                                     // 0x578(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_SlottingDescription;                          // 0x580(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortMultiSizeItemCard*                ItemCard_NewlySlottedItem;                         // 0x588(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortCollectionBookRecycleSlotResultsWidget* RecycleSlotResultsWidget;                          // 0x590(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_SlotItem;                                   // 0x598(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_Back;                                       // 0x5A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8424[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookSlotConfirmationModal");
		return Clss;
	}

	void OnSlotItemRequestedComplete();
	void OnSlotItemRequested();
	void HandleSlotItemComplete(class UFortAccountItem* SlottedItem, class FName SlotId);
};

// 0x0 (0x2D0 - 0x2D0)
// Class SaveTheWorldUI.FortCollectionBookSlotDetailsWidget
class UFortCollectionBookSlotDetailsWidget : public UCommonUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookSlotDetailsWidget");
		return Clss;
	}

};

// 0xA8 (0x378 - 0x2D0)
// Class SaveTheWorldUI.FortCollectionBookSlotView
class UFortCollectionBookSlotView : public UCommonUserWidget
{
public:
	TSoftClassPtr<class UFortCollectionBookSlotButton> CollectionBookButtonClass;                         // 0x2D0(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        CollectionBookButtonBox;                           // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonGroupLegacy*              CollectionBookSlotButtonGroup;                     // 0x300(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortCollectionBookSlotButton*> CollectionBookSlotButtons;                         // 0x308(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UFortCollectionBookSection*            AssociatedSection;                                 // 0x318(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8428[0x48];                                    // Fixing Size After Last Property..
	int32                                        PreviousSelectedButtonIdx;                         // 0x368(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        CurrentSelectedButtonIdx;                          // 0x36C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8429[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookSlotView");
		return Clss;
	}

	void OnSlotButtonHovered(class UCommonButtonLegacy* HoveredButton, int32 ButtonIdx);
	void OnSlotButtonClicked(class UCommonButtonLegacy* ClickedButton, int32 ButtonIdx);
	void OnSelectedSlotButtonChanged(class UCommonButtonLegacy* SelectedButton, int32 ButtonIdx);
};

// 0x128 (0x3F8 - 0x2D0)
// Class SaveTheWorldUI.FortCollectionBookSlotWidget
class UFortCollectionBookSlotWidget : public UCommonUserWidget
{
public:
	uint8                                        Pad_842C[0x10];                                    // Fixing Size After Last Property..
	enum class EFortItemCardSize                 ItemCardSize;                                      // 0x2E0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsRewardCard;                                     // 0x2E1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_842D[0x6];                                     // Fixing Size After Last Property..
	class UFortMultiSizeItemCard*                ItemCardWidget;                                    // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               UnslottedOverlayWidget;                            // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               ReadyToSlotOverlayWidget;                          // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               UnslottedButReadyOverlayWidget;                    // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  SlotRowName;                                       // 0x308(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_842E[0x4];                                     // Fixing Size After Last Property..
	class FText                                  ItemAvailableToSlotText;                           // 0x310(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  NoItemsAvailableToSlotText;                        // 0x328(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  HigherQualityItemsAvailableToSlotAndUpgradeAvailableText; // 0x340(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  HigherQualityItemsAvailableToSlotAndEvolveAvailableText; // 0x358(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  HigherQualityItemsAvailableToSlotText;             // 0x370(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  ItemInSlotFullyUpgradedText;                       // 0x388(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  ItemInSlotCanBeUpgradedText;                       // 0x3A0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  ItemInSlotCanBeEvolvedText;                        // 0x3B8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UFortItem*                             SlottedItemRepresentation;                         // 0x3D0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_842F[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookSlotWidget");
		return Clss;
	}

	void OnItemDestroyed();
	void OnItemCardUpdated();
	bool IsItemSlotted();
	bool HasItemsToSlot();
	void HandleUnslotItemComplete(class UFortAccountItem* UnslottedItem, class UFortAccountItem* OldItem, class FName SlotId);
	void HandleSlottedItemOperationComplete(class UFortAccountItem* NewItem, class FName TemplateId);
	void HandleResearchItemComplete(class UFortAccountItem* ResearchedItem, const class FString& SlotId);
	class UFortItem* GetSlottedItemRepresentation();
	class FName GetSlotRowName();
	int32 GetNumItemsToSlot();
	void FortCollectionBookSlottedItemUpdatedDelegate__DelegateSignature();
};

// 0x30 (0x598 - 0x568)
// Class SaveTheWorldUI.FortCollectionBookWidget
class UFortCollectionBookWidget : public UFortActivatablePanel
{
public:
	class UFortCollectionBookProgressWidget*     ProgressWidget;                                    // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonActivatableWidgetSwitcher*      MainWidgetSwitcher;                                // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookPrimaryPanel*       PrimaryPanelWidget;                                // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookSectionPanel*       SectionPanelWidget;                                // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PrimaryPanelIdx;                                   // 0x588(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SectionPanelIdx;                                   // 0x58C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8430[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookWidget");
		return Clss;
	}

	void RequestToClose();
	void OnPreviewXPChangeRequest(int32 XPChange);
	void OnCollectionBookSectionCloseRequest();
	void OnCollectionBookSectionClicked(class UFortCollectionBookSection* ClickedSection);
	void OnCollectionBookPageSelected(class UFortCollectionBookPage* SelectedPage);
	void OnCollectionBookPageClicked(class UFortCollectionBookPage* ClickedPage);
};

// 0x30 (0x598 - 0x568)
// Class SaveTheWorldUI.FortCollectionBookWidget_Legacy
class UFortCollectionBookWidget_Legacy : public UFortActivatablePanel
{
public:
	class UFortCollectionBookProgressWidget*     ProgressWidget;                                    // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonWidgetSwitcherLegacy*           MainWidgetSwitcher;                                // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookPrimaryPanel_Legacy* PrimaryPanelWidget;                                // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookSectionPanel*       SectionPanelWidget;                                // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PrimaryPanelIdx;                                   // 0x588(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SectionPanelIdx;                                   // 0x58C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8431[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionBookWidget_Legacy");
		return Clss;
	}

	void RequestToClose();
	void OnPreviewXPChangeRequest(int32 XPChange);
	void OnCollectionBookSectionCloseRequest();
	void OnCollectionBookSectionClicked(class UFortCollectionBookSection* ClickedSection);
	void OnCollectionBookPageSelected(class UFortCollectionBookPage* SelectedPage);
	void OnCollectionBookPageClicked(class UFortCollectionBookPage* ClickedPage);
};

// 0x50 (0x80 - 0x30)
// Class SaveTheWorldUI.FortAbilitySystemContext
class UFortAbilitySystemContext : public UBlueprintContextBase
{
public:
	uint8                                        Pad_8434[0x50];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAbilitySystemContext");
		return Clss;
	}

	void RemoveDelegatesFromWidget(class UWidget* Widget);
	void RegisterForAttributeChanged(class UWidget* Widget, class UAbilitySystemComponent* ASC, const struct FGameplayAttribute& Attribute, FDelegateProperty_ Callback);
	bool HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck);
};

// 0x58 (0x4D8 - 0x480)
// Class SaveTheWorldUI.FortDirectAcquisitionWidgetBase
class UFortDirectAcquisitionWidgetBase : public UFortMtxStoreRootBase
{
public:
	uint8                                        Pad_8435[0x8];                                     // Fixing Size After Last Property..
	bool                                         bShowIneligible;                                   // 0x488(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8436[0x7];                                     // Fixing Size After Last Property..
	class UUserWidget*                           FirstOfferGenerated;                               // 0x490(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8437[0x10];                                    // Fixing Size After Last Property..
	class UHorizontalBox*                        HorizontalBox_LargeTile;                           // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGridPanel*                            GridPanel_SmallTile;                               // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        HorizontalBox_ReorderedItems;                      // 0x4B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UVerticalBox*                          VerticalBox_FeatureItems;                          // 0x4C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UVerticalBox*                          VerticalBox_DailyItems;                            // 0x4C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScaleBox*                             ScaleBox_Main;                                     // 0x4D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortDirectAcquisitionWidgetBase");
		return Clss;
	}

	void OnDisplayToast(bool bDisplayToast);
	void IsTabsLayout(bool bShouldDisplayTabs);
	void HandleAffiliateButtonClicked();
	struct FDateTime GetWeeklyStoreEndDate();
	TArray<class UFortAccountItemDefinition*> GetStoreCurrencies();
	struct FDateTime GetSeasonStoreEndDate();
	struct FDateTime GetDailyStoreEndDate();
};

// 0x58 (0x648 - 0x5F0)
// Class SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy
class UFortDirectAcquisitionWidgetBase_Legacy : public UFortMtxStoreRootBase_Legacy
{
public:
	uint8                                        Pad_8438[0x8];                                     // Fixing Size After Last Property..
	bool                                         bShowIneligible;                                   // 0x5F8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8439[0x7];                                     // Fixing Size After Last Property..
	class UUserWidget*                           FirstOfferGenerated;                               // 0x600(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_843A[0x10];                                    // Fixing Size After Last Property..
	class UHorizontalBox*                        HorizontalBox_LargeTile;                           // 0x618(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGridPanel*                            GridPanel_SmallTile;                               // 0x620(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        HorizontalBox_ReorderedItems;                      // 0x628(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UVerticalBox*                          VerticalBox_FeatureItems;                          // 0x630(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UVerticalBox*                          VerticalBox_DailyItems;                            // 0x638(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScaleBox*                             ScaleBox_Main;                                     // 0x640(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortDirectAcquisitionWidgetBase_Legacy");
		return Clss;
	}

	void OnDisplayToast(bool bDisplayToast);
	void IsTabsLayout(bool bShouldDisplayTabs);
	void HandleAffiliateButtonClicked();
	struct FDateTime GetWeeklyStoreEndDate();
	TArray<class UFortAccountItemDefinition*> GetStoreCurrencies();
	struct FDateTime GetSeasonStoreEndDate();
	struct FDateTime GetDailyStoreEndDate();
};

// 0x60 (0x590 - 0x530)
// Class SaveTheWorldUI.FortExpeditionBuildSquadWidget
class UFortExpeditionBuildSquadWidget : public UCommonActivatablePanelLegacy
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>    Item;                                              // 0x530(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  CurrentSquadId;                                    // 0x538(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_843C[0x4];                                     // Fixing Size After Last Property..
	class UFortSquadSlotsView*                   ExpeditionSquadSlotsView;                          // 0x540(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSquadSlotDetailsPanel*            ExpeditionSquadSlotDetails;                        // 0x548(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSquadSlotItemPicker*              ExpeditionSquadSlotPicker;                         // 0x550(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemViewContext_ExpeditionSquadSlotsView* ItemViewContext_ExpeditionSlotsView;               // 0x558(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortItemViewContext_ExpeditionSquadSlotItemPicker* ItemViewContext_ExpeditionSlotItemPicker;          // 0x560(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_843D[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortExpeditionBuildSquadWidget");
		return Clss;
	}

	void SetData(class UFortExpeditionItem* InItem);
	void SetCurrentSquadId(class FName SquadId);
	void OnRequestClosePicker();
	void OnRefreshBuildSquadWidget();
	bool IsSquadSlotLocked(int32 SlotIndex);
	bool IsExpeditionValidToStart();
	void HandleRequestStartExpedition(bool* bPassThrough);
	void HandleDifferentSquadSlotSelected(int32 SquadSlotIndex);
	void ClearTemporaryExpeditionSquadState(bool bPreviewOnly);
};

// 0x40 (0x310 - 0x2D0)
// Class SaveTheWorldUI.FortExpeditionDetailsWidget
class UFortExpeditionDetailsWidget : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>    Item;                                              // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSquadSlotsView*                   ExpeditionSquadSlotsView;                          // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  CurrentSquadId;                                    // 0x2E0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_843F[0x4];                                     // Fixing Size After Last Property..
	class UFortItemViewContext_ExpeditionSquadSlotsView* ItemViewContext_ExpeditionSlotsView;               // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8440[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortExpeditionDetailsWidget");
		return Clss;
	}

	void SetData(class UFortExpeditionItem* InItem);
	void SetCurrentSquadId(class FName SquadId);
	void RequestAbandonExpedition();
	void HandleAbandonExpeditionCompleted(class UFortExpeditionItem* Expedition, bool bSuccess);
};

// 0x10 (0x2E0 - 0x2D0)
// Class SaveTheWorldUI.FortExpeditionExpiresWidget
class UFortExpeditionExpiresWidget : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>    Item;                                              // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8441[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortExpeditionExpiresWidget");
		return Clss;
	}

	void SetData(class UFortExpeditionItem* InItem);
	void OnExpeditionExpirationUpdated();
};

// 0x20 (0x14E0 - 0x14C0)
// Class SaveTheWorldUI.FortExpeditionListItemWidget
class UFortExpeditionListItemWidget : public UCommonButtonLegacy
{
public:
	uint8                                        Pad_8442[0x8];                                     // Fixing Size After Last Property..
	TWeakObjectPtr<class UFortExpeditionItem>    Item;                                              // 0x14C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8443[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortExpeditionListItemWidget");
		return Clss;
	}

	void OnItemChanged();
};

// 0x30 (0x300 - 0x2D0)
// Class SaveTheWorldUI.FortExpeditionListViewWidget
class UFortExpeditionListViewWidget : public UCommonUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnExpeditionSelected;                              // 0x2D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnExpeditionListViewRefreshed;                     // 0x2E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UCommonListView*                       ExpeditionListView;                                // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  CurrentTabNameId;                                  // 0x2F8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortExpeditionListSort           SortType;                                          // 0x2FC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8444[0x3];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortExpeditionListViewWidget");
		return Clss;
	}

	void SetExpeditionListSortType(enum class EFortExpeditionListSort InSortType);
	class FText GetExpeditionListSortName();
};

// 0x20 (0x550 - 0x530)
// Class SaveTheWorldUI.FortExpeditionMasterWidget
class UFortExpeditionMasterWidget : public UCommonActivatablePanelLegacy
{
public:
	uint8                                        Pad_8445[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortExpeditionMasterWidget");
		return Clss;
	}

};

// 0x28 (0x2F8 - 0x2D0)
// Class SaveTheWorldUI.FortExpeditionOverviewWidget
class UFortExpeditionOverviewWidget : public UCommonUserWidget
{
public:
	TSubclassOf<class UCommonButtonBase>         TabButtonType;                                     // 0x2D0(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FExpeditionTabInfo>            TabListRegistrationInfo;                           // 0x2D8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UFortTabListWidgetBase_Legacy*         ExpeditionTabList;                                 // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortExpeditionListViewWidget*         ExpeditionListView;                                // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortExpeditionOverviewWidget");
		return Clss;
	}

	void UpdateExpeditionTabs();
	void OnExpeditionTabSelected(class FName& TabNameID);
	void OnExpeditionOverviewRefresh();
	void HandleExpeditionTabSelected(class FName TabNameID);
	void HandleExpeditionTabButtonCreated(class FName TabNameID, class UCommonButtonBase* TabButton);
};

// 0x8 (0x538 - 0x530)
// Class SaveTheWorldUI.FortExpeditionPickVehicleWidget
class UFortExpeditionPickVehicleWidget : public UCommonActivatablePanelLegacy
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>    Item;                                              // 0x530(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortExpeditionPickVehicleWidget");
		return Clss;
	}

	void SetData(class UFortExpeditionItem* InItem);
};

// 0x10 (0x2E0 - 0x2D0)
// Class SaveTheWorldUI.FortExpeditionReturnsWidget
class UFortExpeditionReturnsWidget : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>    Item;                                              // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8447[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortExpeditionReturnsWidget");
		return Clss;
	}

	void SetData(class UFortExpeditionItem* InItem);
	void OnExpeditionInProgressUpdated();
};

// 0x28 (0x2F8 - 0x2D0)
// Class SaveTheWorldUI.FortExpeditionRewardsWidget
class UFortExpeditionRewardsWidget : public UCommonUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnAllExpeditionsCollected;                         // 0x2D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UCommonTileView*                       RewardsTileView;                                   // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPendingCollection;                                // 0x2E8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_844B[0xF];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortExpeditionRewardsWidget");
		return Clss;
	}

	void RefreshRewardsUI(class UFortExpeditionItem* Expedition, bool bExpeditionSucceeded, TArray<struct FFortItemInstanceQuantityPair>& Rewards);
	void ProcessNextReward();
	void HandleCollectionExpeditionCompleted(bool bMcpSuccess, class UFortExpeditionItem* Expedition, bool bExpeditionSuccess, TArray<struct FFortItemInstanceQuantityPair>& Rewards);
};

// 0x58 (0x328 - 0x2D0)
// Class SaveTheWorldUI.FortExpeditionSummaryWidget
class UFortExpeditionSummaryWidget : public UCommonUserWidget
{
public:
	int32                                        AvailableExpeditions;                              // 0x2D0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CompletedExpeditions;                              // 0x2D4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LandVehiclesTotal;                                 // 0x2D8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LandVehiclesAvailable;                             // 0x2DC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        AirVehiclesTotal;                                  // 0x2E0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        AirVehiclesAvailable;                              // 0x2E4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SeaVehiclesTotal;                                  // 0x2E8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SeaVehiclesAvailable;                              // 0x2EC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LandExpeditionsTotal;                              // 0x2F0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LandExpeditionsAvailable;                          // 0x2F4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        AirExpeditionsTotal;                               // 0x2F8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        AirExpeditionsAvailable;                           // 0x2FC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SeaExpeditionsTotal;                               // 0x300(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SeaExpeditionsAvailable;                           // 0x304(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortExpeditionItem*>           InProgressExpeditions;                             // 0x308(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_844C[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortExpeditionSummaryWidget");
		return Clss;
	}

	void UnbindInventoryDelegates();
	void OnRefreshSummaryWidget();
	void BindInventoryDelegates();
};

// 0x0 (0x28 - 0x28)
// Class SaveTheWorldUI.FortExpeditionUtilities
class UFortExpeditionUtilities : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortExpeditionUtilities");
		return Clss;
	}

	int32 TotalUnseenExpeditionsForTab(class UWidget* Widget, class FName& TabNameID);
	bool IsSquadOnExpedition(class UWidget* Widget, class FName& SquadId);
	struct FGameplayTag GetVehicleTagRequiredForExpedition(class UFortExpeditionItem* Expedition);
	bool GetVehicleTagFromSquadId(class FName& SquadId, struct FGameplayTag* OutFoundVehicleTag);
	void GetTotalExpeditionVehiclesAvailable(class UWidget* Widget, class AFortPlayerController* FortPC, int32* OutLandVehicles, int32* OutLandVehiclesAvailable, int32* OutSeaVehicles, int32* OutSeaVehiclesAvailable, int32* OutAirVehicles, int32* OutAirVehiclesAvailable);
	void GetMatchedCriteriaTags(class UFortExpeditionItem* Expedition, TArray<class UFortItem*>& SlottedItems, TArray<struct FGameplayTag>* OutMatchedCriteria);
	bool GetExpeditionSquadsThatMatchRequirements(struct FGameplayTagContainer& RequirementTags, class AFortPlayerController* FortPC, TArray<class FName>* OutExpeditionSquadIds);
	float GetExpeditionSquadPower(class AFortPlayerController* FortPC, class FName& SquadId);
	void GetAllExpeditionSquadIds(TArray<class FName>* OutExpeditionSquadIds);
	float CalculateTotalPower(class AFortPlayerController* FortPC, class UFortExpeditionItem* Expedition, class FName& SquadId, TArray<class UFortItem*>& SlottedItems);
	void CalculateGlobalAndItemRatingModValuesBP(class UFortExpeditionItem* Expedition, TArray<class UFortItem*>& SlottedItems, float* GlobalPowerMod, TArray<float>* SlottedItemMods);
	float CalculateExpeditionPercentageChanceForSuccess(class UFortExpeditionItem* Expedition, float TotalPower);
	bool AreExpeditionsUnlocked(class UObject* WorldContextObject, struct FUniqueNetIdRepl& UniqueId);
	bool AreAnyExpeditionsComplete(class UWidget* Widget);
};

// 0x10 (0x14D0 - 0x14C0)
// Class SaveTheWorldUI.FortExpeditionVehicleTileItemWidget
class UFortExpeditionVehicleTileItemWidget : public UCommonButtonLegacy
{
public:
	uint8                                        Pad_8456[0x8];                                     // Fixing Size After Last Property..
	TWeakObjectPtr<class UObject>                SquadId;                                           // 0x14C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortExpeditionVehicleTileItemWidget");
		return Clss;
	}

};

// 0x38 (0x5A0 - 0x568)
// Class SaveTheWorldUI.FortFeatureUnlockWidget
class UFortFeatureUnlockWidget : public UFortActivatablePanel
{
public:
	class UCommonWidgetSwitcherLegacy*           MediaSwitcher;                                     // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               VideoContent;                                      // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               ImageContent;                                      // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortVideoPlayerWidget*                VideoWidget;                                       // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonLazyImage*                      ImageWidget;                                       // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8457[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortFeatureUnlockWidget");
		return Clss;
	}

	void SetData(const class FString& ItemTemplateID);
	void RefreshDataBP();
	class UMediaSource* GetVideo();
	class FText GetTitle();
	TSoftObjectPtr<class UTexture2D> GetSmallIcon();
	TSoftObjectPtr<class UTexture2D> GetLargeIcon();
	class FText GetDescription();
};

// 0xC8 (0x4C0 - 0x3F8)
// Class SaveTheWorldUI.FortResultsWidgetSTW
class UFortResultsWidgetSTW : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_845A[0x78];                                    // Fixing Size After Last Property..
	int32                                        AdditionalGrantedMissionPoints;                    // 0x470(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_845B[0x4];                                     // Fixing Size After Last Property..
	TArray<class UFortItem*>                     RewardedBadges;                                    // 0x478(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UFortItem*>                     MissedBadges;                                      // 0x488(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UFortItem*>                     RewardedItems;                                     // 0x498(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UFortItem*>                     RewardedAccountItems;                              // 0x4A8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UCommonUserWidget*                     Radial_Picker;                                     // 0x4B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortResultsWidgetSTW");
		return Clss;
	}

	void TriggerSetupTeleportCameraEvent();
	void ToggleChat(bool bShow);
	void SendEndOfRoundUpVoteAnalytic(struct FUniqueNetIdRepl& TargetId, const class FString& TargetPlayerName);
	void SendEndOfRoundScreenAnalytic(const class FString& ScreenName, bool Skipped, float TimeSpent);
	void SendEndOfRoundFriendInviteAnalytic(struct FUniqueNetIdRepl& TargetId, const class FString& TargetPlayerName);
	void RequestExitZone();
	void LogXPData();
	bool IsDataFinalized();
	void HandlePickerCancel(bool* bPassThrough);
	void HandleEmoteClicked(bool* bPassThrough);
	class FText GetZoneCompletionResultText();
	enum class EFortCompletionResult GetZoneCompletionResult();
	int32 GetTotalMissionPointsEarned();
	void GetRewardsByType(enum class EFortRewardItemTypeSTW Type, TArray<class UFortItem*>* OutRewards);
};

// 0x28 (0x58 - 0x30)
// Class SaveTheWorldUI.FortSTWUIData
class UFortSTWUIData : public UFortSTWUIDataBase
{
public:
	TSoftObjectPtr<class UDataTable>             UpgradesDisplayDataTable;                          // 0x30(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSTWUIData");
		return Clss;
	}

};

// 0x8 (0x428 - 0x420)
// Class SaveTheWorldUI.FortRootViewportLayout_STW
class UFortRootViewportLayout_STW : public UFortRootViewportLayout
{
public:
	class UTalkingHead*                          TalkingHead;                                       // 0x420(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRootViewportLayout_STW");
		return Clss;
	}

};

// 0x58 (0x5C0 - 0x568)
// Class SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW
class UFortItemAutoMulchActivatablePanel_STW : public UFortActivatablePanel
{
public:
	uint8                                        Pad_845C[0x58];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemAutoMulchActivatablePanel_STW");
		return Clss;
	}

	void SetItemManagementScreen(class UFortItemManagementScreen_STW* InItemManagementScreen);
	void SaveSettings();
	void RestoreAutoMulchSettings();
	TArray<enum class EFortAutoMulchCategory> GetMulchCategoriesForInventoryFilter();
	enum class EFortFrontendInventoryFilter GetFrontendInventoryFilter();
	void EnterMulchModeForAutoMulch();
	void CacheAutoMulchSettings();
};

// 0xA0 (0x608 - 0x568)
// Class SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW
class UFortItemCraftingOptionsActivatablePanel_STW : public UFortActivatablePanel
{
public:
	class UFortSchematicItem*                    BaseItem;                                          // 0x568(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSchematicItem*                    TargetItem;                                        // 0x570(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxCraftingTierIndex;                              // 0x578(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        TargetCraftingTierIndex;                           // 0x57C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        TargetPromotionTierIndex;                          // 0x580(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxQuantity;                                       // 0x584(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SelectedQuantity;                                  // 0x588(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         CanCraftTargetItem;                                // 0x58C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_845D[0x3];                                     // Fixing Size After Last Property..
	class UWidget*                               TierImageParent_1;                                 // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               TierImageParent_2;                                 // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               TierImageParent_3;                                 // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               TierImageParent_4;                                 // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               TierImageParent_5;                                 // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                TierImage_1;                                       // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                TierImage_2;                                       // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                TierImage_3;                                       // 0x5C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                TierImage_4;                                       // 0x5D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                TierImage_5;                                       // 0x5D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_845E[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemCraftingOptionsActivatablePanel_STW");
		return Clss;
	}

	void UpdateTierImages();
	void SetTargetCraftingTierIndex(int32 NewTierIndex);
	void SetSelectedQuantity_BP(int32 NewQuantity);
	void SetItemManagementScreen(class UFortItemManagementScreen_STW* InItemManagementScreen);
	void SetBaseSchematicItem(class UFortSchematicItem* InBaseItem);
	void SelectPreviousTier();
	void SelectNextTier();
	void OnTargetItemChanged(class UFortSchematicItem* NewTargetItem);
	void OnSelectedQuantityChanged(int32 NewSelectedQuantity);
	void OnMaxQuantityChanged(int32 NewMaxQuantity);
	void OnBaseItemChanged(class UFortSchematicItem* NewBaseItem);
	void IncreaseSelectedQuantity();
	void DecreaseSelectedQuantity();
	void CraftTargetItem();
	void CraftAndSlotTargetItem();
};

// 0x48 (0x440 - 0x3F8)
// Class SaveTheWorldUI.FortItemDetailsActivatablePanel_STW
class UFortItemDetailsActivatablePanel_STW : public UCommonActivatableWidget
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToDetail;                                      // 0x3F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItem>              ItemToCompareWith;                                 // 0x400(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItemManagementScreen_STW> HostItemManagementScreen;                          // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_845F[0x20];                                    // Fixing Size After Last Property..
	class UFortTooltipLoadingWrapper*            ItemToDetailLoadingWrapper;                        // 0x430(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonLoadGuard*                      ItemToDetailLoadGuard;                             // 0x438(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemDetailsActivatablePanel_STW");
		return Clss;
	}

	void HandleItemToDetailTooltipAssetsLoaded();
	void HandleDifferentItemToDetailSetBP();
	void HandleDifferentItemToCompareSetBP();
	void HandleConsumeItemProgressChangedBP();
};

// 0x8 (0x448 - 0x440)
// Class SaveTheWorldUI.FortItemDetailsModeActivatablePanel_STW
class UFortItemDetailsModeActivatablePanel_STW : public UFortItemDetailsActivatablePanel_STW
{
public:
	class UCommonWidgetSwitcherLegacy*           DetailPanelWidgetSwitcher;                         // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemDetailsModeActivatablePanel_STW");
		return Clss;
	}

	void HandleOnActiveWidgetChanged(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
};

// 0x10 (0x450 - 0x440)
// Class SaveTheWorldUI.FortItemCompareModeActivatablePanel_STW
class UFortItemCompareModeActivatablePanel_STW : public UFortItemDetailsActivatablePanel_STW
{
public:
	class UFortItemManagementItemDetailsPanel_STW* ComparisonModeLeftItemDetailsPanel;                // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItemManagementItemDetailsPanel_STW* ComparisonModeRightItemDetailsPanel;               // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemCompareModeActivatablePanel_STW");
		return Clss;
	}

};

// 0x10 (0x450 - 0x440)
// Class SaveTheWorldUI.FortItemMulchModeActivatablePanel_STW
class UFortItemMulchModeActivatablePanel_STW : public UFortItemDetailsActivatablePanel_STW
{
public:
	class UFortItemManagementItemDetailsPanel_STW* MulchModeItemDetailsPanel;                         // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItemManagementMulchDetailsPanel_STW* MulchDetailsPanel;                                 // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemMulchModeActivatablePanel_STW");
		return Clss;
	}

};

// 0x68 (0x5D0 - 0x568)
// Class SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW
class UFortItemManagementCustomFilterModalWidget_STW : public UFortActivatablePanel
{
public:
	TWeakObjectPtr<class UFortItemManagementScreen_STW> HostItemManagementScreen;                          // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<enum class EFortInventoryCustomFilter> AvailableFilters;                                  // 0x570(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TSet<enum class EFortInventoryCustomFilter>  LocalCustomFilterSet;                              // 0x580(0x50)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemManagementCustomFilterModalWidget_STW");
		return Clss;
	}

	void ToggleFilter(enum class EFortInventoryCustomFilter Filter);
	void OnEndCommitCustomFilter(bool bWasSuccessful);
	void OnCustomFilterSetUpdated();
	void OnBeginCommitCustomFilter();
	bool IsCustomFilterEnabled(enum class EFortInventoryCustomFilter Filter);
	void EnableAllFilters();
	void DisableAllFilters();
	void CommitCustomFilters();
};

// 0x1D8 (0x4A8 - 0x2D0)
// Class SaveTheWorldUI.FortItemManagementInventoryPanel_STW
class UFortItemManagementInventoryPanel_STW : public UCommonUserWidget
{
public:
	uint8                                        Pad_8466[0x50];                                    // Fixing Size After Last Property..
	class FName                                  CurrentFilterName;                                 // 0x320(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EInventoryContentSortType         CurrentSortType;                                   // 0x324(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8467[0x3];                                     // Fixing Size After Last Property..
	TSubclassOf<class UCommonButtonBase>         FilterTabButtonType;                               // 0x328(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCommonButtonStyle>        FilterTabButtonStyle;                              // 0x330(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FFortItemManagementInventoryFilterTabLabelInfo> FilterTabLabelInfoArray;                           // 0x338(0x10)(Edit, EditFixedSize, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UFortTabListWidgetBase*                FilterTabList;                                     // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonLoadGuard*                      TileViewLoadGuard;                                 // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemTileView*                     TileView;                                          // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                          CraftingPanel;                                     // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonLoadGuard*                      CraftingTileViewLoadGuard;                         // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemTileView*                     CraftingTileView;                                  // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                          StoragePanel;                                      // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonLoadGuard*                      StorageTileViewLoadGuard;                          // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemTileView*                     StorageTileView;                                   // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      MulchRestrictionReasonText;                        // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortItemCardSize                 SmallTileSize;                                     // 0x398(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortItemCardSize                 LargeTileSize;                                     // 0x399(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8468[0x2];                                     // Fixing Size After Last Property..
	TWeakObjectPtr<class UFortItemManagementScreen_STW> HostItemManagementScreen;                          // 0x39C(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanDragItems;                                     // 0x3A4(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8469[0x3];                                     // Fixing Size After Last Property..
	TArray<struct FQuickbarEquipSlotIndicesConfig> DefaultQuickbarEquipSlotIndicesConfigs;            // 0x3A8(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, int32>                     QuickbarEquipSlotIndices;                          // 0x3B8(0x50)(Edit, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_846A[0x90];                                    // Fixing Size After Last Property..
	class UFortInventoryContext*                 InventoryContext;                                  // 0x498(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               WidgetToCenter;                                    // 0x4A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemManagementInventoryPanel_STW");
		return Clss;
	}

	void UpdateSchematicTiles();
	void ToggleTileSize();
	void TogglePrioritizeFavorites();
	void SwitchPanelFocus();
	void SetSortType(enum class EInventoryContentSortType SortType);
	void SetFilter(class FName FilterName);
	void RequestFocusEquipSlots();
	void RefreshCraftingSort();
	void OnMulchRestrictionTextShown(bool bShown);
	void MarkAllItemsAsSeen();
	bool IsSwitchPanelAvailable();
	bool IsSelectedItem(class UFortItem* Item);
	bool HasUnlockedStorageSlots();
	void HandleSetOfItemsToMulchChangedBP();
	void HandleQuickBarChangedBP(enum class EFortQuickBars QuickBarType);
	void HandleItemBeginDrag(class UObject* Item);
	void HandleInventoryUpdatedEvent();
	void HandleFocusEquipSlotsBP();
	void HandleFilterTabSelected(class FName TabNameID);
	void HandleFilterTabButtonCreated(class FName TabNameID, class UCommonButtonBase* TabButton);
	void HandleDifferentSortTypeSetBP();
	void HandleDifferentItemManagementModeSetBP();
	void HandleDifferentFrontendInventoryFilterSetBP();
	void HandleDifferentFilterSetBP();
	void HandleCustomInventoryFilterChanged();
	void HandleCursorModeChangedBP(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget);
	void HandleCursorModeChanged(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget);
	void HandleCraftItemStarted();
	TArray<class UFortItemDefinition*> GetUpgradeItemDefinitionsForCurrentInventory();
	TArray<enum class EInventoryContentSortType> GetSupportedSortTypesForCurrentInventory();
	bool GetShouldPrioritizeFavorites();
	class FText GetQualifiedFilterDisplayName();
	void CycleSortType();
	bool CanDragItems();
	void AdvanceSelection();
	void AddItemStackToMulch(class UFortItem* Item, int32 Count);
};

// 0x78 (0x1570 - 0x14F8)
// Class SaveTheWorldUI.FortItemManagementItemTileButton_STW
class UFortItemManagementItemTileButton_STW : public UFortItemTileButton
{
public:
	TWeakObjectPtr<class UFortItemManagementScreen_STW> HostItemManagementScreen;                          // 0x14F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasTheItemToDetail;                                // 0x1500(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         HasTheItemToCompareDetailsWith;                    // 0x1501(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         HasAnItemMarkedForMulching;                        // 0x1502(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_846D[0x1];                                     // Fixing Size After Last Property..
	int32                                        MulchCount;                                        // 0x1504(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              NotCraftableOverlay;                               // 0x1508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortDynamicEntryBox*                  EquipSlotOverlay;                                  // 0x1510(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMenuAnchor*                           PopupMenuAnchor;                                   // 0x1518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         ShowCollectionBookIndicator;                       // 0x1520(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         ShowRefundIndicator;                               // 0x1521(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_846E[0x46];                                    // Fixing Size After Last Property..
	class UFortInventoryContext*                 InventoryContext;                                  // 0x1568(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemManagementItemTileButton_STW");
		return Clss;
	}

	void UpdateEquipSlotOverlay(int32 CurrentSlotIndex);
	void PopulateEquipSlotOverlay();
	void OnSlotItemComplete(class UFortAccountItem* SlottedItem, class FName SlotId);
	bool IsValidEquipSlotOverlayIndex(int32 SlotIndex);
	void HandleShowRefundIndicatorChanged();
	void HandleShowCollectionBookIndicatorChanged();
	void HandleItemMulchStateChanged();
	void HandleItemChangedBP();
	void HandleHasItemToDetailChanged();
	void HandleHasItemToCompareDetailsWithChanged();
	void HandleEquipSlotChanged(int32 EquipSlot);
	void HandleDifferentItemManagementModeSetBP();
	class UUserWidget* GetPopupMenu();
	enum class EFortItemManagementMode GetItemManagementMode();
	struct FHomebaseSquadSlotId GetHomebaseSquadSlotForItem();
};

// 0x20 (0x3C8 - 0x3A8)
// Class SaveTheWorldUI.FortItemManagementItemDetailsPanel_STW
class UFortItemManagementItemDetailsPanel_STW : public UFortItemDetailsHostPanel
{
public:
	bool                                         HasItemMarkedForMulching;                          // 0x3A8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_846F[0x3];                                     // Fixing Size After Last Property..
	TWeakObjectPtr<class UFortItemManagementScreen_STW> HostItemManagementScreen;                          // 0x3AC(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8470[0xC];                                     // Fixing Size After Last Property..
	class UFortInventoryContext*                 InventoryContext;                                  // 0x3C0(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemManagementItemDetailsPanel_STW");
		return Clss;
	}

	void HandleHostSet();
	void HandleHasItemMarkedForMulchingChanged();
	TArray<class UFortAmmoItemDefinition*> GetAmmoTypeItemDefinitions();
};

// 0x28 (0x2F8 - 0x2D0)
// Class SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW
class UFortItemManagementMulchDetailsPanel_STW : public UCommonUserWidget
{
public:
	class UFortItemQuantityListBase*             ResourceList;                                      // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FInterfaceProperty_                          HostItemManagementMulchPanel;                      // 0x2D8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8471[0x8];                                     // Fixing Size After Last Property..
	class UFortInventoryContext*                 InventoryContext;                                  // 0x2F0(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemManagementMulchDetailsPanel_STW");
		return Clss;
	}

	bool IsSpaceAvailableForMulch();
	void HandleSetOfItemsToMulchChangedBP();
	void HandleHostSet();
	TArray<class UFortItem*> GetItemsToMulch();
	TArray<int32> GetItemCountsToMulch();
	void CommitMulch();
};

// 0x30 (0x300 - 0x2D0)
// Class SaveTheWorldUI.FortItemManagementModeDetailsPanel_STW
class UFortItemManagementModeDetailsPanel_STW : public UCommonUserWidget
{
public:
	class UCommonWidgetSwitcherLegacy*           ModeWidgetSwitcher;                                // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemDetailsActivatablePanel_STW*  DetailsModeItemDetailsPanel;                       // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemDetailsActivatablePanel_STW*  ComparisonModeItemDetailsPanel;                    // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemDetailsActivatablePanel_STW*  MulchModeItemDetailsPanel;                         // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItemManagementScreen_STW> HostItemManagementScreen;                          // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8472[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemManagementModeDetailsPanel_STW");
		return Clss;
	}

	void HandleHostSet();
	void HandleDifferentItemManagementModeSetBP();
	enum class EFortItemManagementMode GetItemManagementMode();
};

// 0x158 (0x550 - 0x3F8)
// Class SaveTheWorldUI.FortItemManagementScreen_STW
class UFortItemManagementScreen_STW : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_8479[0x8];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnItemViewRefreshed;                               // 0x400(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_847A[0xC0];                                    // Fixing Size After Last Property..
	enum class EFortItemManagementMode           Mode;                                              // 0x4D0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortFrontendInventoryFilter      FrontendInventoryFilter;                           // 0x4D1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReadOnlyModeWIFE;                                 // 0x4D2(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ConsumeItemRequestInProgress;                      // 0x4D3(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_847B[0x4];                                     // Fixing Size After Last Property..
	class UFortItemManagementInventoryPanel_STW* InventoryPanel;                                    // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemManagementModeDetailsPanel_STW* ModeDetailsPanel;                                  // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItem>              ItemToDetail;                                      // 0x4E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_847C[0x8];                                     // Fixing Size After Last Property..
	TSubclassOf<class UFortMulchConfirmationModalWidget> MulchConfirmationModalClass;                       // 0x4F8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortItemManagementCustomFilterModalWidget_STW> CustomFilterModalClass;                            // 0x500(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_847D[0x18];                                    // Fixing Size After Last Property..
	class UFortMulchConfirmationModalWidget*     MulchConfirmationModal;                            // 0x520(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortItemManagementCustomFilterModalWidget_STW* CustomFilterModal;                                 // 0x528(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_847E[0x8];                                     // Fixing Size After Last Property..
	class UFortInventoryContext*                 InventoryContext;                                  // 0x538(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_847F[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemManagementScreen_STW");
		return Clss;
	}

	void TransferItem(class UFortItem* Item);
	void ToggleShowRefundIndicator();
	void ToggleShowCollectionBookIndicator();
	void ShowWarningReadOnlyWIFE(bool Force);
	void ShowMulchConfirmationModal();
	void ShowCustomFilterModal();
	void SetFrontendInventoryFilter(enum class EFortFrontendInventoryFilter FrontendInventoryFilter);
	void SetConsumeItemRequestInProgress(bool InProgress);
	void RequestPopupMenuForSelectedItem();
	void OpenCraftingOptions(class UFortSchematicItem* SchematicItem);
	void OpenAutoMulchOptions();
	void NotifyPanelDeactivated();
	void NotifyPanelActivated();
	void MarkAllItemsAsSeen();
	bool IsScreenWIFE();
	void InspectItem(class UFortItem* Item);
	void HideMulchConfirmationModal();
	void HideCustomFilterModal();
	bool HasItemBeenSeen(class UFortAccountItem* AccountItem);
	bool HasDefaultItemsToMulch();
	void HandleTransferItemBP(class UFortItem* Item);
	void HandleOpenCraftingOptionsBP(class UFortSchematicItem* SchematicItem);
	void HandleOpenAutoMulchOptionsBP();
	void HandleMulchQuantitySelection(class UFortItem* Item);
	void HandleItemToDetailChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleItemToCompareWithChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleInspectItemBP(class UFortItem* Item);
	void HandleEquipItemBP(class UFortItem* Item);
	void HandleDropItemBP(class UFortItem* Item);
	void HandleDifferentItemManagementModeSetBP();
	void HandleCraftItemBP(class UFortSchematicItem* SchematicItem, enum class EFortItemTier RequestedTier, int32 CraftCount);
	void HandleCraftAndSlotItemBP(class UFortSchematicItem* SchematicItem, enum class EFortItemTier RequestedTier, int32 CraftCount);
	void HandleConsumeItemBP(class UFortConsumableAccountItem* ConsumableItem);
	bool GuardActionForReadOnlyWIFE();
	bool GetShouldShowRefundIndicator();
	bool GetShouldShowCollectionBookIndicator();
	class UFortItem* GetItemToDetail();
	class UFortItem* GetItemToCompareDetailsWith();
	void EquipItem(class UFortItem* Item);
	void EnterMulchModeForAutoMulch();
	void EnterMulchMode(class UFortItem* ItemToMulch);
	void EnterDetailsMode(class UFortItem* ItemToDetail);
	void EnterComparisonMode(class UFortItem* ItemToCompareDetailsWith);
	void DropItem(class UFortItem* Item);
	void CycleSortType();
	void CraftItem(class UFortSchematicItem* SchematicItem, enum class EFortItemTier RequestedTier, int32 CraftCount);
	void CraftAndSlotItem(class UFortSchematicItem* SchematicItem, enum class EFortItemTier RequestedTier, int32 CraftCount);
	void ConsumeItem(class UFortConsumableAccountItem* ConsumableItem);
	bool CanRequestPopupMenuForSelectedItem();
	bool CanEquipItem(class UFortItem* Item);
	void CancelInventoryPanelTileViewRefresh();
};

// 0x130 (0x528 - 0x3F8)
// Class SaveTheWorldUI.MainMenu_STW
class UMainMenu_STW : public UCommonActivatableWidget
{
public:
	class FText                                  DefaultHelpText;                                   // 0x3F8(0x18)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Text_CountDownTimer;                               // 0x410(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_LeaveExperience;                            // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonUserWidget*                     Button_Leave;                                      // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      ContextualHelpText;                                // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_BackBoard;                                  // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBackgroundBlur*                       BackgroundBlur;                                    // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBorder*                               BackgroundDarkener;                                // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_ReportPlayer;                               // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Logout;                                     // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Support;                                    // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Exit;                                       // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Settings;                                   // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   CloseMenuAction;                                   // 0x470(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   SwitchProfileAction;                               // 0x480(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortOptionsMenu>          SettingsScreenClass;                               // 0x490(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FText                                  LogoutTitle;                                       // 0x498(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class FText                                  LogoutDescription;                                 // 0x4B0(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class FText                                  ExitTitle;                                         // 0x4C8(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class FText                                  ExitDescription;                                   // 0x4E0(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	bool                                         bIsMainMenuOpen;                                   // 0x4F8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8480[0x27];                                    // Fixing Size After Last Property..
	class UFortCampaignTabsScreenBase*           MainTabsScreen;                                    // 0x520(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MainMenu_STW");
		return Clss;
	}

	void TryShowPrimaryContent(TSoftClassPtr<class UCommonActivatableWidget>& ContentWidgetClass);
	void TryShowModal(TSoftClassPtr<class UCommonActivatableWidget>& ModalWidgetClass);
	bool ShouldShowLeaveExperienceButton();
	bool IsActiveTabMainShop();
};

// 0x70 (0x480 - 0x410)
// Class SaveTheWorldUI.FortUIStateWidget_STWFrontend
class UFortUIStateWidget_STWFrontend : public UFortUIStateWidgetBase
{
public:
	uint8                                        Pad_8481[0x8];                                     // Fixing Size After Last Property..
	class UTopBar_STW*                           TopBar_STW;                                        // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonUserWidget*                     BottomBar_STW;                                     // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivatableChatWidget*            ChatWidget_STW;                                    // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UFortCampaignTabsScreenBase> MainTabsScreen;                                    // 0x430(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortPlayerBanned>         PlayerBannedScreenClass;                           // 0x438(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class AFortScriptedAction>> ScriptedActionsToRegister;                         // 0x440(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<enum class EFortStoreState>           DeferredSquadAutoSlottingStoreStates;              // 0x450(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8482[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUIStateWidget_STWFrontend");
		return Clss;
	}

};

// 0x28 (0x438 - 0x410)
// Class SaveTheWorldUI.FortUIStateWidget_STWJoinServer
class UFortUIStateWidget_STWJoinServer : public UFortUIStateWidgetBase
{
public:
	class UFortRejoinWindowBase*                 RejoinWindow;                                      // 0x410(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   TutorialCompleteStatHandle;                        // 0x418(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortRejoinWindowBase>     RejoinWindowClass;                                 // 0x428(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8483[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUIStateWidget_STWJoinServer");
		return Clss;
	}

	void OnShowTutorialDialog();
	void HandleMatchmakingStateChange(enum class EMatchmakingState OldState, enum class EMatchmakingState NewState);
	void HandleMatchmakingComplete(enum class EMatchmakingCompleteResult MatchmakingResult);
	void HandleLobbyTimeUpdated(int32 TimeRemaining);
	void HandleLobbyDisconnected();
};

// 0x98 (0x490 - 0x3F8)
// Class SaveTheWorldUI.TopBar_STW
class UTopBar_STW : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_8485[0x10];                                    // Fixing Size After Last Property..
	class UDataTable*                            PhoenixSeasonDisplayInfoMap;                       // 0x408(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<enum class EFortUIFeatureStateReason, class FText> ReasonDescriptions;                                // 0x410(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_MainMenu;                                   // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMainMenu_STW*                         MainMenu;                                          // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_ActiveInvitesNotification;                   // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_Social;                                     // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8486[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TopBar_STW");
		return Clss;
	}

	void SetOnlineFriendsCount(int32 NewOnlineFriendsCount);
	void OnSocialMenuOpened();
	void OnShouldShowPhoenixDisplay(bool bShow, class UFortPhoenixSeasonDisplayInfo* PhoenixDisplayInfo);
};

// 0x20 (0x430 - 0x410)
// Class SaveTheWorldUI.FortHeroLoadoutGadgetPicker
class UFortHeroLoadoutGadgetPicker : public UFortItemPickerBase
{
public:
	TWeakObjectPtr<class UFortCampaignHeroLoadoutItem> TargetLoadoutItem;                                 // 0x410(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        TargetSlotIndex;                                   // 0x418(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8488[0x4];                                     // Fixing Size After Last Property..
	TArray<class UFortItem*>                     TemporaryGadgetItemInstances;                      // 0x420(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHeroLoadoutGadgetPicker");
		return Clss;
	}

	void SetTargetLoadoutSlot(class UFortCampaignHeroLoadoutItem* LoadoutItem, int32 SlotIndex);
	void HandleDifferentTargetLoadoutSlotSetBP();
};

// 0xC0 (0x4D0 - 0x410)
// Class SaveTheWorldUI.FortHeroLoadoutHeroPicker
class UFortHeroLoadoutHeroPicker : public UFortItemPickerBase
{
public:
	class UFortTabListWidgetBase_Legacy*         ExternalFilterTabList;                             // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortCampaignHeroLoadoutItem> TargetLoadoutItem;                                 // 0x418(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  TargetSlotName;                                    // 0x420(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_848A[0x4];                                     // Fixing Size After Last Property..
	TSubclassOf<class UCommonButtonBase>         FilterTabButtonType;                               // 0x428(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, struct FFortTabButtonLabelInfo> TabButtonLabelInfoMap;                             // 0x430(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_848B[0x50];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHeroLoadoutHeroPicker");
		return Clss;
	}

	void UpdateFilterTabList(class FName PreviouslySelectedTab);
	void SetTargetLoadoutSlot(class UFortCampaignHeroLoadoutItem* LoadoutItem, class FName& SlotName);
	void HandleFilterTabSelectedBP(class FName TabId);
	void HandleFilterTabSelected(class FName TabId);
	void HandleDifferentTargetLoadoutSetBP();
	class FName GetCurrentlySelectedTab();
	void AssociateFilterTabList(class UFortTabListWidgetBase_Legacy* ExternalFilterTabList);
};

// 0x0 (0x28 - 0x28)
// Class SaveTheWorldUI.FortHeroLoadoutHeroPickerFunctionLibrary
class UFortHeroLoadoutHeroPickerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHeroLoadoutHeroPickerFunctionLibrary");
		return Clss;
	}

};

// 0x1B0 (0x5A8 - 0x3F8)
// Class SaveTheWorldUI.FortHeroLoadoutScreenBase
class UFortHeroLoadoutScreenBase : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_848E[0x8];                                     // Fixing Size After Last Property..
	class UFortItemView*                         ItemViewObject;                                    // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   BackInputAction;                                   // 0x408(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   HelpInputAction;                                   // 0x418(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   CancelInputAction;                                 // 0x428(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   ToggleDetailInputAction;                           // 0x438(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   ClearAllInputAction;                               // 0x448(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   ShowAllStatsInputAction;                           // 0x458(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   InspectRootSlotsInputAction;                       // 0x468(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   CyclePickerSortModeInputAction;                    // 0x478(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   InspectPickerInputAction;                          // 0x488(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   ToggleDescInputAction;                             // 0x498(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_848F[0xA0];                                    // Fixing Size After Last Property..
	bool                                         AllowItemRotation;                                 // 0x548(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         AllowItemZooming;                                  // 0x549(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         AutomaticallyRegisterCameraView;                   // 0x54A(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         OverrideFixedCameras;                              // 0x54B(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8490[0x4];                                     // Fixing Size After Last Property..
	class UDataTable*                            ActionDataTable;                                   // 0x550(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      AnimationToHideItemInfo;                           // 0x558(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoShowDetails;                                  // 0x560(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bItemDetailsHidden;                                // 0x561(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8491[0x2];                                     // Fixing Size After Last Property..
	float                                        HideItemInfoHeaderDurationSecs;                    // 0x564(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8492[0x40];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHeroLoadoutScreenBase");
		return Clss;
	}

	void ShowItemDetails();
	void SetInputBindings(bool ActivePickerBox, bool CommanderSlot, bool NoneSlot, bool CanClearAll);
	void SetHeroLoadout(class UFortCampaignHeroLoadoutItem* HeroLoadout);
	void PushItemInspectionScreen(class UFortItem* ItemToInspect, enum class EFortItemInspectionMode Mode, class UFortItemTileView* CycleTileView, bool bReadOnly, bool bAllowFavoriting, bool bIsTemporaryItem, bool bAllowRarityUpgrading);
	void OnVaultItemsViewed(TArray<class UFortItem*>& Items);
	void OnItemPreviewChanged(class AActor* NewPrefab, class UFortItem* NewItem);
	bool IsLoadoutSwitchingAllowed();
	void HideItemDetails();
	void HandleToggleDescInputAction();
	void HandleShowAllStatsInputAction();
	void HandleInspectRootSlotsInputAction();
	void HandleInspectPickerInputAction();
	void HandleHelpInputAction();
	void HandleDetailsInputAction();
	void HandleCyclePickerInputAction();
	void HandleClearAllInputAction();
	void HandleBackInputAction();
	class UWidget* GetWidgetForFramingViewedItem();
	bool GetIsReadOnly();
};

// 0x0 (0x6B0 - 0x6B0)
// Class SaveTheWorldUI.FortHeroLoadoutScreenLegacy
class UFortHeroLoadoutScreenLegacy : public UFortActivatablePanelWithItemPreview
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHeroLoadoutScreenLegacy");
		return Clss;
	}

	void SetHeroLoadout(class UFortCampaignHeroLoadoutItem* HeroLoadout);
	bool IsLoadoutSwitchingAllowed();
	bool GetIsReadOnly();
};

// 0x40 (0x1500 - 0x14C0)
// Class SaveTheWorldUI.FortHeroLoadoutSlotButton
class UFortHeroLoadoutSlotButton : public UCommonButtonLegacy
{
public:
	class FName                                  SlotName;                                          // 0x14C0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SlotIndex;                                         // 0x14C4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHeroLoadoutSlotType              SlotType;                                          // 0x14C8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8494[0x7];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnRequestChangeHero;                               // 0x14D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnContextMenuOpenChanged;                          // 0x14E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UMenuAnchor*                           ContextMenuAnchor;                                 // 0x14F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8495[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHeroLoadoutSlotButton");
		return Clss;
	}

	void OnRequestChangeHero__DelegateSignature(class UFortHeroLoadoutSlotButton* SlotButton);
	void OnMenuOpenChangedEvent__DelegateSignature(class UFortHeroLoadoutSlotButton* SlotButton, bool bIsMenuOpen);
	bool IsContextMenuOpen();
	void HandleMenuOpenChanged(bool bIsMenuOpen);
};

// 0x8 (0x418 - 0x410)
// Class SaveTheWorldUI.FortHeroLoadoutTeamPerkPicker
class UFortHeroLoadoutTeamPerkPicker : public UFortItemPickerBase
{
public:
	TWeakObjectPtr<class UFortCampaignHeroLoadoutItem> TargetLoadoutItem;                                 // 0x410(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHeroLoadoutTeamPerkPicker");
		return Clss;
	}

	void SetTargetLoadout(class UFortCampaignHeroLoadoutItem* LoadoutItem);
	void HandleDifferentTargetLoadoutSetBP();
};

// 0x78 (0x470 - 0x3F8)
// Class SaveTheWorldUI.FortCampaignTabsScreenBase
class UFortCampaignTabsScreenBase : public UCommonActivatableWidget
{
public:
	TMap<enum class EFortUIFeature, class FName> FeaturesTabsMap;                                   // 0x3F8(0x50)(Edit, Protected, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        TopTabContainer;                                   // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortTabListWidgetBase*                TopTabList;                                        // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortTabListWidgetBase>    MainTabSet;                                        // 0x458(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8497[0x8];                                     // Fixing Size After Last Property..
	class UCommonAnimatedSwitcher*               Switcher_TabContent;                               // 0x468(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCampaignTabsScreenBase");
		return Clss;
	}

	void UpdateItemShopButtonBang(class FName Tab);
	bool ShouldShowItemShopBang();
	void HandleMainTabSelected(class FName TabNameID);
	void HandleMainTabCreated(class FName TabNameID, class UCommonButtonBase* TabButton);
	void HandleFeatureStateChanged(enum class EFortUIFeature ChangedFeature, enum class EFortUIFeatureState NewState, enum class EFortUIFeatureStateReason Reason);
	void ConstructTabs();
};

// 0x70 (0x5A0 - 0x530)
// Class SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy
class UFortCampaignTabsScreenBase_Legacy : public UCommonActivatablePanelLegacy
{
public:
	TMap<enum class EFortUIFeature, class FName> FeaturesTabsMap;                                   // 0x530(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        TopTabContainer;                                   // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortTabListWidgetBase_Legacy*         TopTabList;                                        // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortTabListWidgetBase_Legacy> MainTabSet;                                        // 0x590(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8499[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCampaignTabsScreenBase_Legacy");
		return Clss;
	}

	void HandleMainTabSelected(class FName TabNameID);
	void HandleMainTabCreated(class FName TabNameID, class UCommonButtonBase* TabButton);
	void HandleFeatureStateChanged(enum class EFortUIFeature ChangedFeature, enum class EFortUIFeatureState NewState, enum class EFortUIFeatureStateReason Reason);
	void HandleFeatureNavigateRequest(enum class EFortUIFeature Feature);
	void ConstructTabs();
};

// 0x20 (0x48 - 0x28)
// Class SaveTheWorldUI.StoreCardObject
class UStoreCardObject : public UObject
{
public:
	struct FCard                                 Card;                                              // 0x28(0x18)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        OriginalIndex;                                     // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_849A[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StoreCardObject");
		return Clss;
	}

};

// 0x48 (0x578 - 0x530)
// Class SaveTheWorldUI.FortStoreSummary
class UFortStoreSummary : public UCommonActivatablePanelLegacy
{
public:
	uint8                                        Pad_849B[0x8];                                     // Fixing Size After Last Property..
	TArray<class UStoreCardObject*>              StoreCardObjects;                                  // 0x538(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UCommonTileView*                       TileView;                                          // 0x548(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortMulchConfirmationModalWidget> MulchConfirmationModalClass;                       // 0x550(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_849C[0x18];                                    // Fixing Size After Last Property..
	class UFortMulchConfirmationModalWidget*     MulchConfirmationModal;                            // 0x570(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortStoreSummary");
		return Clss;
	}

	void ShowMulchConfirmationModal();
	void SetIsInChoiceSelectionMode(bool InIsInChoiceSelectionMode);
	void SetCards(TArray<struct FCard>& Cards);
	void NotifyPanelDeactivated();
	void NotifyPanelActivated();
	void MarkDefaultItemsForMulch();
	void HideMulchConfirmationModal();
	void HandleContextMenuOpenChangedBP(bool bIsOpen);
	void HandleContextMenuOpenChanged(bool bIsOpen);
	bool GetIsInChoiceSelectionMode();
	void FinalizeFavoriteStatus();
	void CloseSummaryScreen();
};

// 0x50 (0x1510 - 0x14C0)
// Class SaveTheWorldUI.FortStoreSummaryItemButton
class UFortStoreSummaryItemButton : public UCommonButtonLegacy
{
public:
	bool                                         HasAnItemMarkedForMulching;                        // 0x14C0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_849D[0x2F];                                    // Fixing Size After Last Property..
	class UMenuAnchor*                           PopupMenuAnchor;                                   // 0x14F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStoreCardObject*                      StoreCardObject;                                   // 0x14F8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortInventoryContext*                 InventoryContext;                                  // 0x1500(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_849E[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortStoreSummaryItemButton");
		return Clss;
	}

	void UpdateMulchListWithItem(bool bAddingItem);
	void SetStoreCardObject(class UStoreCardObject* CardObject);
	void HandleMenuOpenChanged(bool bIsOpen);
	void HandleItemMulchStateChanged();
	class UStoreCardObject* GetStoreCardObject();
	class UUserWidget* GetPopupMenu();
};

// 0x50 (0x1510 - 0x14C0)
// Class SaveTheWorldUI.FortStoreSummaryItemButton_Legacy
class UFortStoreSummaryItemButton_Legacy : public UCommonButtonLegacy
{
public:
	bool                                         HasAnItemMarkedForMulching;                        // 0x14C0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_849F[0x2F];                                    // Fixing Size After Last Property..
	class UMenuAnchor*                           PopupMenuAnchor;                                   // 0x14F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStoreCardObject*                      StoreCardObject;                                   // 0x14F8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortInventoryContext*                 InventoryContext;                                  // 0x1500(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_84A0[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortStoreSummaryItemButton_Legacy");
		return Clss;
	}

	void UpdateMulchListWithItem(bool bAddingItem);
	void SetStoreCardObject(class UStoreCardObject* CardObject);
	void OnContextMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void HandleMenuOpenChanged(bool bIsOpen);
	void HandleItemMulchStateChanged();
	class UStoreCardObject* GetStoreCardObject();
	class UUserWidget* GetPopupMenu();
};

// 0x8 (0x558 - 0x550)
// Class SaveTheWorldUI.FortStoreSummaryItemPopupMenu
class UFortStoreSummaryItemPopupMenu : public UFortPopupMenu
{
public:
	uint8                                        Pad_84A1[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortStoreSummaryItemPopupMenu");
		return Clss;
	}

	void MulchItem();
	void HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	class UFortStoreSummaryItemButton* GetHostButton();
};

// 0x8 (0x558 - 0x550)
// Class SaveTheWorldUI.FortStoreSummaryItemPopupMenu_Legacy
class UFortStoreSummaryItemPopupMenu_Legacy : public UFortPopupMenu_Legacy
{
public:
	uint8                                        Pad_84A2[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortStoreSummaryItemPopupMenu_Legacy");
		return Clss;
	}

	void MulchItem();
	void HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	class UFortStoreSummaryItemButton_Legacy* GetHostButton();
};

// 0x48 (0x578 - 0x530)
// Class SaveTheWorldUI.FortStoreSummary_Legacy
class UFortStoreSummary_Legacy : public UCommonActivatablePanelLegacy
{
public:
	uint8                                        Pad_84A3[0x8];                                     // Fixing Size After Last Property..
	TArray<class UStoreCardObject*>              StoreCardObjects;                                  // 0x538(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UCommonTileView*                       TileView;                                          // 0x548(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortMulchConfirmationModalWidget> MulchConfirmationModalClass;                       // 0x550(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_84A4[0x18];                                    // Fixing Size After Last Property..
	class UFortMulchConfirmationModalWidget*     MulchConfirmationModal;                            // 0x570(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortStoreSummary_Legacy");
		return Clss;
	}

	void ShowMulchConfirmationModal();
	void SetIsInChoiceSelectionMode(bool InIsInChoiceSelectionMode);
	void SetCards(TArray<struct FCard>& Cards);
	void NotifyPanelDeactivated();
	void NotifyPanelActivated();
	void MarkDefaultItemsForMulch();
	void HideMulchConfirmationModal();
	void HandleContextMenuOpenChangedBP(bool bIsOpen);
	void HandleContextMenuOpenChanged(bool bIsOpen);
	bool GetIsInChoiceSelectionMode();
	void FinalizeFavoriteStatus();
	void CloseSummaryScreen();
};

// 0x20 (0x2F0 - 0x2D0)
// Class SaveTheWorldUI.FortHeroLoadoutGadgetTileBase
class UFortHeroLoadoutGadgetTileBase : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                      Text_GadgetName;                                   // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonLazyImage*                      Image_Icon;                                        // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URichTextBlock*                        RichText_Description;                              // 0x2E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortGadgetItemDefinition*             GadgetToRepresent;                                 // 0x2E8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHeroLoadoutGadgetTileBase");
		return Clss;
	}

	void SetGadgetToRepresent(class UFortGadgetItemDefinition* GadgetItemDefinition);
	void OnGadgetUpdated(bool bIsValidGadget);
};

// 0x50 (0x580 - 0x530)
// Class SaveTheWorldUI.FortHeroLoadoutInGameScreenBase
class UFortHeroLoadoutInGameScreenBase : public UCommonActivatablePanelLegacy
{
public:
	TArray<struct FFortInGamePerkDisplayData>    PerksDisplayData;                                  // 0x530(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortHeroLoadoutPerkTileBase> TileClass;                                         // 0x540(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UScrollBox*                            ScrollBox_Content;                                 // 0x548(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortItemDetailsHostPanel*             ItemDetailsHostPanel_Header;                       // 0x550(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGridPanel*                            GridPanel_Perks;                                   // 0x558(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortHeroLoadoutGadgetTileBase*        GadgetTile_Gadget1;                                // 0x560(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortHeroLoadoutGadgetTileBase*        GadgetTile_Gadget2;                                // 0x568(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortHeroLoadoutGadgetTileBase*> GadgetTiles;                                       // 0x570(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHeroLoadoutInGameScreenBase");
		return Clss;
	}

	void OnPerkWidgetAdded(class UGridSlot* GridSlot);
	class UFortGadgetItemDefinition* GetGadgetDefinitionBySlot(int32 SlotIndex);
};

// 0x88 (0x358 - 0x2D0)
// Class SaveTheWorldUI.FortHeroLoadoutPerkTileBase
class UFortHeroLoadoutPerkTileBase : public UCommonUserWidget
{
public:
	enum class EFortBrushSize                    BrushSize;                                         // 0x2D0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShowSummaryDescription;                           // 0x2D1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_84A6[0x6];                                     // Fixing Size After Last Property..
	class UCommonTextBlock*                      Text_PerkName;                                     // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URichTextBlock*                        Text_Description;                                  // 0x2E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortLazyImage*                        Image_PerkIcon;                                    // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                        Hbox_PerkDetails;                                  // 0x2F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FText                                  ActiveText;                                        // 0x2F8(0x18)(Edit, NativeAccessSpecifierPrivate)
	class FText                                  InactiveText;                                      // 0x310(0x18)(Edit, NativeAccessSpecifierPrivate)
	float                                        InactiveOpacity;                                   // 0x328(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ActiveOpacity;                                     // 0x32C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAbilityKit*                       AbilityKit;                                        // 0x330(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_84A7[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHeroLoadoutPerkTileBase");
		return Clss;
	}

	void OnPerkInitialized(enum class EFortHeroPerkDisplayType InPerkType, bool bActive, bool bShowWarning);
};

// 0x18 (0x548 - 0x530)
// Class SaveTheWorldUI.FortAlterationModOptinScreenBase
class UFortAlterationModOptinScreenBase : public UCommonActivatablePanelLegacy
{
public:
	class UFortItem*                             ItemToOptin;                                       // 0x530(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_84A8[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAlterationModOptinScreenBase");
		return Clss;
	}

	void SetupItem(class UFortItem* Item);
	void RequestClose(bool bCancelled);
	void OnSetupItem();
	void OnItemConversionComplete();
	void ConvertItemAlterations();
};

// 0x60 (0x5C8 - 0x568)
// Class SaveTheWorldUI.FortAlterationModScreenBase
class UFortAlterationModScreenBase : public UFortActivatablePanel
{
public:
	class UFortAlterationsWidget*                AlterationsToEdit;                                 // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAlterationOptionsBase*            AlterationSlotOptions;                             // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemDetailsHostPanel*             ItemInspectionMainItemDetailsHostPanel;            // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemDetailsHostPanel*             AlterationsExtraDetailsPanel;                      // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortAlterationModOptinScreenBase> AlterationModOptinScreenClass;                     // 0x588(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   BackInputAction;                                   // 0x590(0x10)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortAlterableItem>     AlterableItem;                                     // 0x5A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAlterationOption*                 CurrentAlterationOptionInternal;                   // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_84AA[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAlterationModScreenBase");
		return Clss;
	}

	void SetItemForAlterationsModding(class UFortAlterableItem* InAlterableItem);
	void RefreshItemAndAlterationsBP();
	void OnItemSlotChanged(bool SelectedSlot);
	void OnAlterationOptionChanged(class UFortAlterationOption* CurrentAlterationOption);
	void OnAlterationModificationSucess(int32 ModifiedSlotIndex);
	void OnAlterationModificationStarted();
	void OnAlterationModificationCompleted();
	void HandleBackAction(bool* bPassThrough);
	void ConfirmSelection();
	void CancelSelection();
	bool AreIngredientRequirementsMent(TArray<struct FFortItemQuantityPair>& RequiredIngredients);
};

// 0x100 (0x7B0 - 0x6B0)
// Class SaveTheWorldUI.FortItemInspectionScreen
class UFortItemInspectionScreen : public UFortActivatablePanelWithItemPreview
{
public:
	enum class EFortItemInspectionMode           CurrentInspectMode;                                // 0x6B0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_84AE[0x3];                                     // Fixing Size After Last Property..
	TWeakObjectPtr<class UFortItem>              InspectedItem;                                     // 0x6B4(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         UpgradeAllowed;                                    // 0x6BC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         EvolveAllowed;                                     // 0x6BD(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         FavoriteAllowed;                                   // 0x6BE(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         RarityUpgradingAllowed;                            // 0x6BF(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsPreviewing;                                      // 0x6C0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasSeenRefundHelpPrompt;                          // 0x6C1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_84AF[0x6];                                     // Fixing Size After Last Property..
	class UFortItemInspectCycleWidget*           CycleWidget;                                       // 0x6C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagQuery                     InspectAnimationTag;                               // 0x6D0(0x48)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortAlterationModOptinScreenBase> AlterationModOptinScreenClass;                     // 0x718(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortAlterationModScreenBase> AlterationModScreenClass;                          // 0x720(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UDataTable>             RefundDescriptionsDataTable;                       // 0x728(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_84B0[0x60];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemInspectionScreen");
		return Clss;
	}

	void SetItemToRepresent(class UFortItem* Item);
	void SetInspectionMode(enum class EFortItemInspectionMode NewInspectMode);
	void SetAttemptingConversion(bool bIsAttemptingConversion);
	void OpenItemInspect(class UFortItem* ItemToInspect, enum class EFortItemInspectionMode Mode, bool ShouldAllowUpgrading, bool ShouldAllowEvolution, bool ShouldAllowFavorite, bool IsTemporaryItem, bool bAllowRarityUpgrading, int32 QuantityOverride);
	bool IsItemSlottedInCollectionBook(class UFortItem* Item);
	void HandleItemToInspectDestroyedBP();
	void HandleItemToInspectDestroyed();
	void HandleItemToInspectChangedBP(bool bWasFavoritedChanged);
	void HandleItemToInspectChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleIsPreviewingChanged();
	void HandleDifferentItemToInspectSetBP();
	void HandleDifferentInspectionModeSetBP();
	class UFortAccountItem* GetRefundResultItem();
	class FText GetRefundDescriptionText();
	int32 GetItemQuantityOverride();
	class UFortItemInspectCycleWidget* GetCycleWidget();
	bool DoesItemHaveLegacyAlterations();
	void DoAlterationModification();
};

// 0x50 (0x320 - 0x2D0)
// Class SaveTheWorldUI.FortItemInspectCycleWidget
class UFortItemInspectCycleWidget : public UCommonUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnItemToRepresentChanged;                          // 0x2D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UFortItemTileView>      ItemTileView;                                      // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItem>              ItemToRepresent;                                   // 0x2E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   PreviousItemActionRowHandle;                       // 0x2F0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   NextItemActionRowHandle;                           // 0x300(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_84B3[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemInspectCycleWidget");
		return Clss;
	}

	void SetupActionHandlers();
	void SetOwningItemInspectScreen(class UFortItemInspectionScreen* ItemInspect);
	void SetItemToRepresent(class UFortItem* NewItemToRepresent);
	void SelectPreviousItem();
	void SelectNextItem();
	void SelectItemWithOffset(int32 Offset);
	void OnItemCycled(class UFortItem* OldItem, class UFortItem* NewItem, int32 OffsetFromPreviousItem);
	class UFortItem* GetItemWithOffset_BP(int32 IndexOffset);
};

// 0x50 (0x1510 - 0x14C0)
// Class SaveTheWorldUI.FortAlterationOption
class UFortAlterationOption : public UCommonButtonLegacy
{
public:
	uint8                                        Pad_84B5[0x8];                                     // Fixing Size After Last Property..
	struct FAlterationOption                     AlterationOption;                                  // 0x14C8(0x38)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_84B6[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAlterationOption");
		return Clss;
	}

	void Setup(struct FAlterationOption* InAlterationOption, enum class EFortAlterationOptionType InAlterationOptionType);
	void OnSetup();
	TArray<struct FFortItemQuantityPair> GetRequiredIngredients();
	float GetNextPipCount(float MaxPipCount);
	float GetCurrentPipCount(float MaxPipCount);
	enum class EFortAlterationOptionType GetAlterationOptionType();
	class UFortAlterationItemDefinition* GetAlterationDefinition();
};

// 0xA8 (0x378 - 0x2D0)
// Class SaveTheWorldUI.FortAlterationOptionsBase
class UFortAlterationOptionsBase : public UCommonUserWidget
{
public:
	uint8                                        Pad_84BA[0x10];                                    // Fixing Size After Last Property..
	TSubclassOf<class UFortAlterationOption>     AlterationOptionClass;                             // 0x2E0(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonGroupLegacy*              AlterationOptionButtons;                           // 0x2E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_84BB[0x20];                                    // Fixing Size After Last Property..
	class UFortAlterableItem*                    Item;                                              // 0x310(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        SlotIndex;                                         // 0x318(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUpgradeOptionExists;                              // 0x31C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_84BC[0x3];                                     // Fixing Size After Last Property..
	struct FAlterationOption                     UpgradeOption;                                     // 0x320(0x38)(Transient, NativeAccessSpecifierPrivate)
	TArray<struct FAlterationOption>             RespecOptions;                                     // 0x358(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_84BD[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAlterationOptionsBase");
		return Clss;
	}

	void ProcessAlterationOptions(bool bIntroAlterations);
	void OnItemChanged(bool bIntroAlterations);
	void OnGenerateOption(enum class EFortAlterationOptionType OptionType, class UFortAlterationOption* OptionWidget);
	bool IsValidAlterationSlot();
	void HandleAlterationsOptionSelected(class UCommonButtonLegacy* AlterationOptionButton, int32 GroupIndex);
	void HandleAlterationsOptionHovered(class UCommonButtonLegacy* AlterationOptionButton, int32 GroupIndex);
	bool DoAlterationOptionsExist(enum class EFortAlterationOptionType OptionType);
};

// 0x150 (0x178 - 0x28)
// Class SaveTheWorldUI.FortMissionActivationInfoSTW
class UFortMissionActivationInfoSTW : public UObject
{
public:
	bool                                         bIsMultiplayer;                                    // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_84C8[0x77];                                    // Fixing Size After Last Property..
	class AFortPlayerController*                 FortPC;                                            // 0xA0(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortGameStateZone*                    GameStateZone;                                     // 0xA8(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                           DifficultyIncreaseBluGloCurve;                     // 0xB0(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_84C9[0xC0];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMissionActivationInfoSTW");
		return Clss;
	}

	class FText TimeSecondsToText(float InSeconds);
	void SubmitVote(enum class EFortVoteType VoteType, bool bApprove);
	void RequestVote(enum class EFortVoteType VoteType, float VoteDuration, float FailedVoteLockOutDuration, enum class EFortVoteArbitratorType ArbitratorType);
	bool IsVoteLocked(enum class EFortVoteType VoteType);
	bool IsVoteActive(enum class EFortVoteType VoteType);
	bool IsPlayerVoteInstigator(enum class EFortVoteType VoteType);
	bool IsAnyVoteActive();
	bool HasPlayerVoted(enum class EFortVoteType VoteType);
	void HandleTeamMemberRemoved(int32 RemovedIndex);
	void HandleTeamMemberAdded(const struct FFortTeamMemberInfo& NewInfo);
	void HandleGameplayVoteUpdated(enum class EFortVoteType VoteType, enum class EFortVoteStatus VoteStatus, int32 VoteResult, TArray<struct FVoter>& Voters);
	float GetVoteTimeRemaining(enum class EFortVoteType VoteType);
	TArray<struct FVoter> GetVoters(enum class EFortVoteType VoteType);
	void GetVoteCounts(enum class EFortVoteType VoteType, int32* OutYesVoteCount, int32* OutNoVoteCount);
	int32 GetStartObjectiveBluGloRequirement();
	class UFortMissionInfo* GetPrimaryMissionInfo();
	class AFortMission* GetPrimaryMission();
	enum class EFortVoteType GetMissionVoteType();
	float GetMissionObjectiveTimeRemaining();
	class FText GetLockoutTimeRemaining(enum class EFortVoteType VoteType);
	struct FUniqueNetIdRepl GetInstigatorId(enum class EFortVoteType VoteType);
	int32 GetIncreaseDifficultyBluGloRequirement();
	void GetDeltaRewards(int32 BaseDifficultyIncreaseTier, int32 ComparedDifficultyIncreaseTier, TArray<struct FFortItemDelta>* DeltaRewards);
	int32 GetAvailableBluGloCount();
	enum class EFortVoteArbitratorType GetArbitratorType(enum class EFortVoteType VoteType);
	bool DoesPrimaryMissionContainTags(struct FGameplayTagContainer& Tags);
	bool CanRequestVote(enum class EFortVoteType VoteType);
};

// 0x28 (0x2F8 - 0x2D0)
// Class SaveTheWorldUI.FortMissionActivationWidgetSTWPanel
class UFortMissionActivationWidgetSTWPanel : public UCommonUserWidget
{
public:
	class UFortMissionActivationInfoSTW*         InfoObject;                                        // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_84CB[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMissionActivationWidgetSTWPanel");
		return Clss;
	}

	void SetInfoObject(class UFortMissionActivationInfoSTW* NewInfoObject);
	void OnVoteUpdatedBP(enum class EFortVoteType VoteType);
	void OnVoteLockoutChangedBP(enum class EFortVoteType VoteType, bool bIsLocked);
	void OnMultiplayerChangedBP(bool bIsMultiplayer);
	void OnActiveVoteChangedBP(enum class EFortVoteType VoteType, bool bIsVoteActive, int32 VoteResult);
	void InfoObjectUpdated();
};

// 0x50 (0x448 - 0x3F8)
// Class SaveTheWorldUI.FortMissionActivationWidgetSTW
class UFortMissionActivationWidgetSTW : public UCommonActivatableWidget
{
public:
	class UFortMissionActivationInfoSTW*         InfoObject;                                        // 0x3F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 ReadyUpObjectiveHandle;                            // 0x400(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UCurveFloat*                           DifficultyIncreaseBluGloCurve;                     // 0x420(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_84CD[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMissionActivationWidgetSTW");
		return Clss;
	}

	void RequestStartObjectiveState();
	void RequestDifficultyIncreaseState();
	void RequestDefaultState();
	void OnVoteLockoutChangedBP(enum class EFortVoteType VoteType, bool bIsLocked);
	void OnStateUpdated(enum class EFortMissionActivationWidgetSTWState ActiveState, enum class EFortMissionActivationWidgetSTWState PreviousState);
	void OnMultiplayerChangedBP(bool bIsMultiplayer);
	void OnActiveVoteChangedBP(enum class EFortVoteType VoteType, bool bIsVoteActive, int32 VoteResult);
	enum class EFortMissionActivationWidgetSTWState GetCurrentState();
};

// 0x0 (0x3F8 - 0x3F8)
// Class SaveTheWorldUI.FortOutpostScreen
class UFortOutpostScreen : public UCommonActivatableWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortOutpostScreen");
		return Clss;
	}

	void SetInputReflectorBoxVisibility(bool bShow);
};

// 0x0 (0x3F8 - 0x3F8)
// Class SaveTheWorldUI.FortCampaignPlayFlow
class UFortCampaignPlayFlow : public UCommonActivatableWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCampaignPlayFlow");
		return Clss;
	}

};

// 0x8 (0x2D8 - 0x2D0)
// Class SaveTheWorldUI.FortJournalQuestDetails
class UFortJournalQuestDetails : public UCommonUserWidget
{
public:
	class UFortQuestItem*                        CurrentQuest;                                      // 0x2D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortJournalQuestDetails");
		return Clss;
	}

	void SetCurrentQuest(class UFortQuestItem* InCurrentQuest);
	void RegisterEndSpokenDialogEvent();
	void OnEndSpokenDialog();
	void HandleCurrentQuestChangedBP();
	void GetVisibleObjectives(TArray<class UFortQuestObjectiveInfo*>* VisibleObjectives);
	void GetRewards(TArray<struct FFortItemInstanceQuantityPair>* OutRewards, TArray<struct FFortItemInstanceQuantityPair>* OutSelectableRewards);
	void GetFutureObjectives(TArray<class UFortQuestObjectiveInfo*>* FutureObjectives);
	enum class EFortTheaterMapTileType GetActiveMissionTileType();
	bool CanPlayQuest();
	bool CanPartyLeaderPlayQuest();
	bool CanGotoQuest();
};

// 0x10 (0x2E0 - 0x2D0)
// Class SaveTheWorldUI.FortJournalQuestProgressBar
class UFortJournalQuestProgressBar : public UCommonUserWidget
{
public:
	uint8                                        Pad_84CF[0x8];                                     // Fixing Size After Last Property..
	TWeakObjectPtr<class UFortQuestObjectiveInfo> QuestObjectiveInfo;                                // 0x2D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortJournalQuestProgressBar");
		return Clss;
	}

	void GetProgressDetails(class FText* OutNumerator, class FText* OutDenominator, float* OutFraction);
};

// 0x28 (0x2F8 - 0x2D0)
// Class SaveTheWorldUI.FortLayoutQuestNode
class UFortLayoutQuestNode : public UCommonUserWidget
{
public:
	class UFortQuestMapQuestTile*                QuestTile;                                         // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QuestNodeIndex;                                    // 0x2D8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_84D0[0x4];                                     // Fixing Size After Last Property..
	struct FFortQuestMapNode                     QuestMapNode;                                      // 0x2E0(0x18)(Transient, NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortLayoutQuestNode");
		return Clss;
	}

};

// 0x28 (0x2F8 - 0x2D0)
// Class SaveTheWorldUI.FortLayoutQuestNode_Legacy
class UFortLayoutQuestNode_Legacy : public UCommonUserWidget
{
public:
	class UFortQuestMapQuestTile_Legacy*         QuestTile;                                         // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QuestNodeIndex;                                    // 0x2D8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_84D1[0x4];                                     // Fixing Size After Last Property..
	struct FFortQuestMapNode                     QuestMapNode;                                      // 0x2E0(0x18)(Transient, NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortLayoutQuestNode_Legacy");
		return Clss;
	}

};

// 0x40 (0x14B0 - 0x1470)
// Class SaveTheWorldUI.FortProgressArrowButton
class UFortProgressArrowButton : public UCommonButtonBase
{
public:
	struct FSlateColor                           ArrowColor;                                        // 0x1470(0x14)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FSlateColor                           HoverColor;                                        // 0x1484(0x14)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FSlateColor                           ShadowColor;                                       // 0x1498(0x14)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_84D2[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortProgressArrowButton");
		return Clss;
	}

	void UpdateArrowColor(const struct FSlateColor& Color, const struct FSlateColor& HoverColor);
	void OnShadowColorSet();
	void OnIsInteractiveSet(bool bIsInteractive);
	void OnArrowColorSet();
};

// 0x40 (0x1500 - 0x14C0)
// Class SaveTheWorldUI.FortProgressArrowButton_Legacy
class UFortProgressArrowButton_Legacy : public UCommonButtonLegacy
{
public:
	struct FSlateColor                           ArrowColor;                                        // 0x14C0(0x14)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FSlateColor                           HoverColor;                                        // 0x14D4(0x14)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FSlateColor                           ShadowColor;                                       // 0x14E8(0x14)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_84D3[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortProgressArrowButton_Legacy");
		return Clss;
	}

	void UpdateArrowColor(const struct FSlateColor& Color, const struct FSlateColor& HoverColor);
	void OnShadowColorSet();
	void OnIsInteractiveSet(bool bIsInteractive);
	void OnArrowColorSet();
};

// 0x10 (0x2E0 - 0x2D0)
// Class SaveTheWorldUI.FortQuestExpiresWidget
class UFortQuestExpiresWidget : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortQuestItem>         Item;                                              // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_84D4[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestExpiresWidget");
		return Clss;
	}

	void SetData(class UFortQuestItem* InItem);
	void OnQuestExpirationUpdated();
};

// 0x10 (0x2E0 - 0x2D0)
// Class SaveTheWorldUI.FortQuestMapCosmeticListWidget
class UFortQuestMapCosmeticListWidget : public UCommonUserWidget
{
public:
	uint8                                        Pad_84D5[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestMapCosmeticListWidget");
		return Clss;
	}

	void UpdateCosmeticListDisplay();
	TArray<class UFortItemDefinition*> GetDisplayItemDefs();
};

// 0x18 (0x2E8 - 0x2D0)
// Class SaveTheWorldUI.FortQuestMapDetailsPanelBase
class UFortQuestMapDetailsPanelBase : public UCommonUserWidget
{
public:
	TSubclassOf<class AFortClientAnnouncement_Conversation> QuestConversationClass;                            // 0x2D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        QuestUpdateDelayTime;                              // 0x2D8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_84D6[0x4];                                     // Fixing Size After Last Property..
	struct FTimerHandle                          QuestUpdateTimerHandle;                            // 0x2E0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestMapDetailsPanelBase");
		return Clss;
	}

	void SetScrollWidget();
	void SetQuestToDisplay(class UFortQuestItemDefinition* QuestDef);
	void HandleQuestsUpdatedInternal();
};

// 0xB0 (0x398 - 0x2E8)
// Class SaveTheWorldUI.FortQuestMapDetailsPanel
class UFortQuestMapDetailsPanel : public UFortQuestMapDetailsPanelBase
{
public:
	struct FDataTableRowHandle                   PlayButtonTriggeringAction;                        // 0x2E8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UCommonActivatableWidget>> PriorityActivatableWidgetClassList;                // 0x2F8(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCommonBorderStyle>        CurrentQuestBorder;                                // 0x308(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCommonBorderStyle>        CompletedQuestBorder;                              // 0x310(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortJournalQuestDetails*              Panel_JournalDetails;                              // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_QuestTitle;                                   // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_QuestDescription;                             // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Header;                                       // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_NotOwnedHeader;                               // 0x338(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_InactiveQuestName;                            // 0x340(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_QuestIcon;                                   // 0x348(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonListView*                       List_Tasks;                                        // 0x350(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonBorder*                         Border_Header;                                     // 0x358(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidgetSwitcher*                       Switcher_Body;                                     // 0x360(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortRewardInfoWidget*                 Widget_FutureQuestRewardInfo;                      // 0x368(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScrollBox*                            ScrollBox_Quest;                                   // 0x370(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScrollBox*                            ScrollBox_NoQuest;                                 // 0x378(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortQuestObjectiveInfo*>       VisibleObjectives;                                 // 0x380(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UFortQuestItem*                        CurrentQuestItem;                                  // 0x390(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestMapDetailsPanel");
		return Clss;
	}

};

// 0xB0 (0x398 - 0x2E8)
// Class SaveTheWorldUI.FortQuestMapDetailsPanel_Legacy
class UFortQuestMapDetailsPanel_Legacy : public UFortQuestMapDetailsPanelBase
{
public:
	struct FDataTableRowHandle                   PlayButtonTriggeringAction;                        // 0x2E8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UCommonActivatablePanelLegacy>> PriorityActivatablePanelClassList;                 // 0x2F8(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCommonBorderStyle>        CurrentQuestBorder;                                // 0x308(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCommonBorderStyle>        CompletedQuestBorder;                              // 0x310(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortJournalQuestDetails*              Panel_JournalDetails;                              // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_QuestTitle;                                   // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_QuestDescription;                             // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Header;                                       // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_NotOwnedHeader;                               // 0x338(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_InactiveQuestName;                            // 0x340(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_QuestIcon;                                   // 0x348(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonListView*                       List_Tasks;                                        // 0x350(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonBorder*                         Border_Header;                                     // 0x358(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidgetSwitcher*                       Switcher_Body;                                     // 0x360(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortRewardInfoWidget_Legacy*          Widget_FutureQuestRewardInfo;                      // 0x368(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScrollBox*                            ScrollBox_Quest;                                   // 0x370(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScrollBox*                            ScrollBox_NoQuest;                                 // 0x378(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortQuestObjectiveInfo*>       VisibleObjectives;                                 // 0x380(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UFortQuestItem*                        CurrentQuestItem;                                  // 0x390(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestMapDetailsPanel_Legacy");
		return Clss;
	}

};

// 0x138 (0x530 - 0x3F8)
// Class SaveTheWorldUI.FortQuestMapEventCallout
class UFortQuestMapEventCallout : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_84D7[0x48];                                    // Fixing Size After Last Property..
	class UFortBangWrapper_NUI*                  BangWrapper_GoButton;                              // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortProgressArrowButton*              Button_LeftNav;                                    // 0x448(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortProgressArrowButton*              Button_RightNav;                                   // 0x450(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_SwitchMode;                                 // 0x458(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortQuestMapNewBangWrapper*           BangWrapper_Arrow;                                 // 0x460(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortQuestMapEventSequence*            Sequence_EventProgress;                            // 0x468(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                        HorizontalBox_NavButtons;                          // 0x470(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Header;                                       // 0x478(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Body;                                         // 0x480(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_Callout;                                     // 0x488(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBangWrapper_NUI*                  BangWrapper_UnHover;                               // 0x490(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundBase*                            DefaultSound;                                      // 0x498(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortQuestItemDefinition*              DefaultRequiredCompletedQuest;                     // 0x4A0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundBase*                            OverrideSound;                                     // 0x4A8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioComponent*                       SoundLoop;                                         // 0x4B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortQuestMapData*                     QuestMapData;                                      // 0x4B8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_84D8[0x70];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestMapEventCallout");
		return Clss;
	}

	void UpdateGoButtonBangState(bool bClear);
	void UpdateCalloutData();
	void UpdateActiveEvents();
	void SetIsFaded(bool Faded);
	void SetIsExpanded(bool Expanded);
	void ResetCallout();
	void PlayFadeOut();
	void PlayFadeIn();
	void OnResetCallout();
	void OnPlayFadeAnimation(bool bIsFadeOut);
	void OnEventIndexChanged();
	void OnDeactivatePlayAnimation();
	void OnActivatePlayAnimation();
	bool IsCurrentEventUnlocked();
	class UFortQuestItemDefinition* GetRequiredQuestForCurrentEvent();
	bool GetIsFaded();
	bool GetIsExpanded();
	int32 GetEventCount();
	void DeactivateCallout();
};

// 0x138 (0x6A0 - 0x568)
// Class SaveTheWorldUI.FortQuestMapEventCallout_Legacy
class UFortQuestMapEventCallout_Legacy : public UFortActivatablePanel
{
public:
	uint8                                        Pad_84D9[0x48];                                    // Fixing Size After Last Property..
	class UFortBangWrapper_NUI*                  BangWrapper_GoButton;                              // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortProgressArrowButton_Legacy*       Button_LeftNav;                                    // 0x5B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortProgressArrowButton_Legacy*       Button_RightNav;                                   // 0x5C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_SwitchMode;                                 // 0x5C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortQuestMapNewBangWrapper_Legacy*    BangWrapper_Arrow;                                 // 0x5D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortQuestMapEventSequence*            Sequence_EventProgress;                            // 0x5D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                        HorizontalBox_NavButtons;                          // 0x5E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Header;                                       // 0x5E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Body;                                         // 0x5F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_Callout;                                     // 0x5F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBangWrapper_NUI*                  BangWrapper_UnHover;                               // 0x600(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundBase*                            DefaultSound;                                      // 0x608(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortQuestItemDefinition*              DefaultRequiredCompletedQuest;                     // 0x610(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundBase*                            OverrideSound;                                     // 0x618(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioComponent*                       SoundLoop;                                         // 0x620(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortQuestMapData*                     QuestMapData;                                      // 0x628(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_84DA[0x70];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestMapEventCallout_Legacy");
		return Clss;
	}

	void UpdateGoButtonBangState(bool bClear);
	void UpdateCalloutData();
	void UpdateActiveEvents();
	void SetIsFaded(bool Faded);
	void SetIsExpanded(bool Expanded);
	void ResetCallout();
	void PlayFadeOut();
	void PlayFadeIn();
	void OnResetCallout();
	void OnPlayFadeAnimation(bool bIsFadeOut);
	void OnEventIndexChanged();
	void OnDeactivatePlayAnimation();
	void OnActivatePlayAnimation();
	bool IsCurrentEventUnlocked();
	class UFortQuestItemDefinition* GetRequiredQuestForCurrentEvent();
	bool GetIsFaded();
	bool GetIsExpanded();
	int32 GetEventCount();
	void DeactivateCallout();
};

// 0x98 (0x380 - 0x2E8)
// Class SaveTheWorldUI.FortQuestMapEventDetailsPanel
class UFortQuestMapEventDetailsPanel : public UFortQuestMapDetailsPanelBase
{
public:
	TSubclassOf<class UCommonBorderStyle>        CurrentQuestBorder;                                // 0x2E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCommonBorderStyle>        CompletedQuestBorder;                              // 0x2F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCommonBorderStyle>        FutureQuestBorder;                                 // 0x2F8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                          VBox_QuestContainer;                               // 0x300(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UVerticalBox*                          VBox_CompletedQuestContainer;                      // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonAnimatedSwitcher*               Switcher_Quests;                                   // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonBorder*                         Border_NextQuest;                                  // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_QuestName;                                    // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_QuestDescription;                             // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Title;                                        // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonListView*                       List_Tasks;                                        // 0x338(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_QuestIcon;                                   // 0x340(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScrollBox*                            ScrollBox_SideBar;                                 // 0x348(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDataTable*                            EventQuestTable;                                   // 0x350(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortQuestMapEventSideEntry> SideBarEntryClass;                                 // 0x358(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortQuestItemDefinition*              UnlockEventQuestDefinition;                        // 0x360(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortQuestItemDefinition*              CurrentQuestDef;                                   // 0x368(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortQuestObjectiveInfo*>       VisibleObjectives;                                 // 0x370(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestMapEventDetailsPanel");
		return Clss;
	}

};

// 0x98 (0x380 - 0x2E8)
// Class SaveTheWorldUI.FortQuestMapEventDetailsPanel_Legacy
class UFortQuestMapEventDetailsPanel_Legacy : public UFortQuestMapDetailsPanelBase
{
public:
	TSubclassOf<class UCommonBorderStyle>        CurrentQuestBorder;                                // 0x2E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCommonBorderStyle>        CompletedQuestBorder;                              // 0x2F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCommonBorderStyle>        FutureQuestBorder;                                 // 0x2F8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                          VBox_QuestContainer;                               // 0x300(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UVerticalBox*                          VBox_CompletedQuestContainer;                      // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonWidgetSwitcherLegacy*           Switcher_Quests;                                   // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonBorder*                         Border_NextQuest;                                  // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_QuestName;                                    // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_QuestDescription;                             // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Title;                                        // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonListView*                       List_Tasks;                                        // 0x338(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_QuestIcon;                                   // 0x340(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScrollBox*                            ScrollBox_SideBar;                                 // 0x348(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDataTable*                            EventQuestTable;                                   // 0x350(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortQuestMapEventSideEntry_Legacy> SideBarEntryClass;                                 // 0x358(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortQuestItemDefinition*              UnlockEventQuestDefinition;                        // 0x360(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortQuestItemDefinition*              CurrentQuestDef;                                   // 0x368(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortQuestObjectiveInfo*>       VisibleObjectives;                                 // 0x370(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestMapEventDetailsPanel_Legacy");
		return Clss;
	}

};

// 0x8 (0x2D8 - 0x2D0)
// Class SaveTheWorldUI.FortQuestMapEventDot
class UFortQuestMapEventDot : public UCommonUserWidget
{
public:
	class UImage*                                Image_ActiveDot;                                   // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestMapEventDot");
		return Clss;
	}

};

// 0x18 (0x2E8 - 0x2D0)
// Class SaveTheWorldUI.FortQuestMapEventSequence
class UFortQuestMapEventSequence : public UCommonUserWidget
{
public:
	class UHorizontalBox*                        HorizontalBox_DotBox;                              // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortQuestMapEventDot>     DotWidgetClass;                                    // 0x2D8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_84DB[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestMapEventSequence");
		return Clss;
	}

};

// 0x60 (0x330 - 0x2D0)
// Class SaveTheWorldUI.FortQuestMapEventSideEntry
class UFortQuestMapEventSideEntry : public UCommonUserWidget
{
public:
	class UCommonAnimatedSwitcher*               Switcher_Rewards;                                  // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonListView*                       List_SideTasks;                                    // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_SideQuestTitle;                               // 0x2E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_Arrow;                                       // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_QuestComplete;                               // 0x2F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMargin                               RewardPadding;                                     // 0x2F8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	class UFortQuestItemDefinition*              CurrentQuestItemDef;                               // 0x308(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortQuestItem*                        CurrentQuestItem;                                  // 0x310(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTimerHandle                          RewardAnimationTimer;                              // 0x318(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortQuestObjectiveInfo*>       SideQuestObjectives;                               // 0x320(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestMapEventSideEntry");
		return Clss;
	}

};

// 0x70 (0x340 - 0x2D0)
// Class SaveTheWorldUI.FortQuestMapEventSideEntry_Legacy
class UFortQuestMapEventSideEntry_Legacy : public UCommonUserWidget
{
public:
	class UCommonWidgetSwitcherLegacy*           Switcher_Rewards;                                  // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonListView*                       List_SideTasks;                                    // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_SideQuestTitle;                               // 0x2E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_Arrow;                                       // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_QuestComplete;                               // 0x2F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMargin                               RewardPadding;                                     // 0x2F8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	class UFortQuestItemDefinition*              CurrentQuestItemDef;                               // 0x308(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortQuestItem*                        CurrentQuestItem;                                  // 0x310(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UCommonWidgetSwitcherLegacy*>   RewardSwitchers;                                   // 0x318(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FTimerHandle                          RewardAnimationTimer;                              // 0x328(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortQuestObjectiveInfo*>       SideQuestObjectives;                               // 0x330(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestMapEventSideEntry_Legacy");
		return Clss;
	}

};

// 0x10 (0x2F8 - 0x2E8)
// Class SaveTheWorldUI.FortQuestMapNewBangWrapper
class UFortQuestMapNewBangWrapper : public UFortBangWrapper_NUI
{
public:
	class UCommonAnimatedSwitcher*               Switcher_Bangs;                                    // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_84DC[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestMapNewBangWrapper");
		return Clss;
	}

};

// 0x10 (0x2F8 - 0x2E8)
// Class SaveTheWorldUI.FortQuestMapNewBangWrapper_Legacy
class UFortQuestMapNewBangWrapper_Legacy : public UFortBangWrapper_NUI
{
public:
	class UCommonWidgetSwitcherLegacy*           Switcher_Bangs;                                    // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_84DD[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestMapNewBangWrapper_Legacy");
		return Clss;
	}

};

// 0x68 (0x310 - 0x2A8)
// Class SaveTheWorldUI.FortQuestMapNodeLayout
class UFortQuestMapNodeLayout : public UUserWidget
{
public:
	class UPanelWidget*                          Panel_NodeLayout;                                  // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     ButtonPrevious;                                    // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     ButtonNext;                                        // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USizeBox*                              StartArrow;                                        // 0x2C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USizeBox*                              EndArrow;                                          // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonGroupBase*                QuestButtonGroup;                                  // 0x2D0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortQuestMapScreen*                   ParentScreen;                                      // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_84DF[0x30];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestMapNodeLayout");
		return Clss;
	}

	void HandleQuestIndexSelectionModelIndexChanged(bool bUpdateButtonSelection);
	void HandleQuestButtonSelected(class UCommonButtonBase* SelectedQuestButton, int32 ButtonIndex);
};

// 0x68 (0x310 - 0x2A8)
// Class SaveTheWorldUI.FortQuestMapNodeLayout_Legacy
class UFortQuestMapNodeLayout_Legacy : public UUserWidget
{
public:
	class UPanelWidget*                          Panel_NodeLayout;                                  // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   ButtonPrevious;                                    // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   ButtonNext;                                        // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USizeBox*                              StartArrow;                                        // 0x2C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USizeBox*                              EndArrow;                                          // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonGroupLegacy*              QuestButtonGroup;                                  // 0x2D0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortQuestMapScreen_Legacy*            ParentScreen;                                      // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_84E1[0x30];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestMapNodeLayout_Legacy");
		return Clss;
	}

	void HandleQuestIndexSelectionModelIndexChanged(bool bUpdateButtonSelection);
	void HandleQuestButtonSelected(class UCommonButtonLegacy* SelectedQuestButton, int32 ButtonIndex);
};

// 0x20 (0x2F0 - 0x2D0)
// Class SaveTheWorldUI.FortQuestMapQuestTile
class UFortQuestMapQuestTile : public UCommonUserWidget
{
public:
	class UCommonButtonBase*                     QuestButton;                                       // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortQuestMapNode                     QuestNodeData;                                     // 0x2D8(0x18)(Transient, NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestMapQuestTile");
		return Clss;
	}

	void HandleSelectedChange(bool Selected);
	void HandleQuestDataChangedBP();
	void GetQuestNodeData(class UFortQuestItemDefinition** QuestItemDefinition, struct FFortQuestMapNode* NodeData);
};

// 0x20 (0x2F0 - 0x2D0)
// Class SaveTheWorldUI.FortQuestMapQuestTile_Legacy
class UFortQuestMapQuestTile_Legacy : public UCommonUserWidget
{
public:
	class UCommonButtonLegacy*                   QuestButton;                                       // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortQuestMapNode                     QuestNodeData;                                     // 0x2D8(0x18)(Transient, NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestMapQuestTile_Legacy");
		return Clss;
	}

	void HandleSelectedChange(bool Selected);
	void HandleQuestDataChangedBP();
	void GetQuestNodeData(class UFortQuestItemDefinition** QuestItemDefinition, struct FFortQuestMapNode* NodeData);
};

// 0xB8 (0x4B0 - 0x3F8)
// Class SaveTheWorldUI.FortQuestMapScreen
class UFortQuestMapScreen : public UCommonActivatableWidget
{
public:
	class UFortQuestMapDetailsPanelBase*         CampaignDetailsPanel;                              // 0x3F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortQuestMapDetailsPanelBase*         EventDetailsPanel;                                 // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortQuestMapEventCallout*             EventCalloutPanel;                                 // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortQuestMapViewer*                   QuestMapViewer;                                    // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQuestMapScreenMode               CurrentMode;                                       // 0x418(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEventsActive;                                     // 0x419(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_84E4[0x6];                                     // Fixing Size After Last Property..
	class UFortQuestMapDataAsset*                CampaignQuestMapDataTable;                         // 0x420(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortQuestItemDefinition*              CutoffQuest;                                       // 0x428(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortQuestMapDataAsset*                CurrentQuestMapDataTable;                          // 0x430(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_84E5[0x28];                                    // Fixing Size After Last Property..
	TSubclassOf<class UFortCampaignNewsPanel>    CampaignNewsModalClass;                            // 0x460(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortQuestScreen>          QuestLogScreenClass;                               // 0x468(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   CurrentQuestAction;                                // 0x470(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   STWNewsAction;                                     // 0x480(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   BackAction;                                        // 0x490(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_84E6[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestMapScreen");
		return Clss;
	}

	void UpdateQuestMapMode(enum class EQuestMapScreenMode QuestMapMode);
	void UpdateInputActionStates(bool bShowingCallout);
	void ToggleQuestMapState();
	void ShowQuestLog(class UFortQuestItem* QuestItem);
	void ShowModalNews();
	void SetQuestMapViewer(class UFortQuestMapViewer* Value);
	void SetIgnorePageNavigation(bool bIgnoreNavigation);
	void SetBeyondCutoffQuest(bool bBeyondCutoff);
	void OnShowCurrentQuestInputActionValueChanged();
	void OnEventCalloutExpandChanged();
	void OnEventCalloutButtonClicked();
	bool IsEventFlagActive(const class FString& EventFlag);
	bool IsBeyondQuest(class UFortQuestItemDefinition* QuestDef);
	void InitializeQuestData();
	void HandleQuestPageChanged();
	void HandleQuestIndexSelectionModelChanged(bool bUpdateButtonSelection);
	void HandleQuestDetailsUpdated(class UFortQuestItem* QuestDefinition);
	void HandleMapViewerNavigationRequest(enum class EViewerNavigationDirection Direction);
	void HandleMapModeSwitch();
	void HandleEventQuestMapActivate();
	void HandleEventCalloutDataChangedBP();
	void HandleBackInputAction();
	enum class EFrontEndCamera GetCurrentPageCameraMode();
	bool GetBeyondCutoffQuest();
	void ClaimQuestRewards(class UFortQuestItem* QuestItem);
	void CheckForNewMainQuest();
};

// 0x68 (0x598 - 0x530)
// Class SaveTheWorldUI.FortQuestMapScreen_Legacy
class UFortQuestMapScreen_Legacy : public UCommonActivatablePanelLegacy
{
public:
	class UFortQuestMapDetailsPanelBase*         CampaignDetailsPanel;                              // 0x530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortQuestMapDetailsPanelBase*         EventDetailsPanel;                                 // 0x538(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortQuestMapEventCallout_Legacy*      EventCalloutPanel;                                 // 0x540(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortQuestMapViewer_Legacy*            QuestMapViewer;                                    // 0x548(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQuestMapScreenMode               CurrentMode;                                       // 0x550(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEventsActive;                                     // 0x551(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_84E9[0x6];                                     // Fixing Size After Last Property..
	class UFortQuestMapDataAsset*                CampaignQuestMapDataTable;                         // 0x558(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortQuestItemDefinition*              CutoffQuest;                                       // 0x560(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortQuestMapDataAsset*                CurrentQuestMapDataTable;                          // 0x568(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_84EA[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestMapScreen_Legacy");
		return Clss;
	}

	void UpdateQuestMapMode(enum class EQuestMapScreenMode QuestMapMode);
	void ToggleQuestMapState();
	void SetQuestMapViewer(class UFortQuestMapViewer_Legacy* Value);
	void SetIgnorePageNavigation(bool bIgnoreNavigation);
	void SetFindCurrentActionVisibility(enum class EInputActionState ActionVisibility);
	void SetBeyondCutoffQuest(bool bBeyondCutoff);
	void OnEventCalloutExpandChanged();
	void OnEventCalloutButtonClicked();
	bool IsEventFlagActive(const class FString& EventFlag);
	bool IsBeyondQuest(class UFortQuestItemDefinition* QuestDef);
	void InitializeQuestData();
	void HandleRequestCurrentQuestNavigation();
	void HandleQuestPageChanged();
	void HandleQuestIndexSelectionModelChanged(bool bUpdateButtonSelection);
	void HandleQuestDetailsUpdated(class UFortQuestItem* QuestDefinition);
	void HandleMapViewerNavigationRequest(enum class EViewerNavigationDirection Direction);
	void HandleMapModeSwitch();
	void HandleEventQuestMapActivate();
	void HandleEventCalloutDataChangedBP();
	enum class EFrontEndCamera GetCurrentPageCameraMode();
	bool GetBeyondCutoffQuest();
	void CheckForNewMainQuest();
};

// 0x80 (0x350 - 0x2D0)
// Class SaveTheWorldUI.FortQuestMapViewer_Legacy
class UFortQuestMapViewer_Legacy : public UCommonUserWidget
{
public:
	uint8                                        Pad_84EC[0x10];                                    // Fixing Size After Last Property..
	class UCommonButtonLegacy*                   Button_PageRight;                                  // 0x2E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_PageLeft;                                   // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Title;                                        // 0x2F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Page;                                         // 0x2F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USizeBox*                              SizeBox_Viewer;                                    // 0x300(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                          CanvasPanel_Cosmetic;                              // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortQuestMapScreen_Legacy*            ParentScreen;                                      // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortQuestMapNodeLayout_Legacy*        NodeLayout;                                        // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_84ED[0x30];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestMapViewer_Legacy");
		return Clss;
	}

	void UpdateViewerData();
	void OnTryUpdateUserWidgetColor(class UUserWidget* Widget, const struct FSlateColor& OverrideColor);
	void OnPlayLayoutOutroAnimation(enum class EViewerNavigationDirection TravelDirection);
	void OnPlayLayoutFadeInAnimation();
	void HandleLayoutOutroAnimationFinished();
};

// 0x8 (0x2D8 - 0x2D0)
// Class SaveTheWorldUI.FortQuestPlayButton
class UFortQuestPlayButton : public UCommonUserWidget
{
public:
	class UFortQuestItem*                        QuestItem;                                         // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestPlayButton");
		return Clss;
	}

	void OnContentMissing();
	void HandlePlayerStateChanged();
	void HandleMatchmakingStarted();
	void HandleMatchmakingComplete(enum class EMatchmakingCompleteResult Result);
	void HandleLobbyDisconnected();
	bool CanPlayQuest();
	void AttemptToPlayQuest();
};

// 0x10 (0x1480 - 0x1470)
// Class SaveTheWorldUI.FortQuestTreeItemWidget
class UFortQuestTreeItemWidget : public UCommonButtonBase
{
public:
	uint8                                        Pad_84EE[0x8];                                     // Fixing Size After Last Property..
	TWeakObjectPtr<class UObject>                QuestOrCategory;                                   // 0x1478(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestTreeItemWidget");
		return Clss;
	}

	void SetupAsQuest(class UFortQuestItem* Category);
	void SetupAsCategory(class UFortQuestCategory* Category);
	void OnQuestsUpdated();
	void HandleQuestsUpdated();
};

// 0x10 (0x14D0 - 0x14C0)
// Class SaveTheWorldUI.FortQuestTreeItemWidget_Legacy
class UFortQuestTreeItemWidget_Legacy : public UCommonButtonLegacy
{
public:
	uint8                                        Pad_84EF[0x8];                                     // Fixing Size After Last Property..
	TWeakObjectPtr<class UObject>                QuestOrCategory;                                   // 0x14C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestTreeItemWidget_Legacy");
		return Clss;
	}

	void SetupAsQuest(class UFortQuestItem* Category);
	void SetupAsCategory(class UFortQuestCategory* Category);
	void OnQuestsUpdated();
	void HandleQuestsUpdated();
};

// 0xF8 (0x4F0 - 0x3F8)
// Class SaveTheWorldUI.FortQuestScreen
class UFortQuestScreen : public UCommonActivatableWidget
{
public:
	class UCommonTreeView*                       TreeView_Quests;                                   // 0x3F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UScrollBox*                            ScrollBox_QuestDetails;                            // 0x400(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortQuestManagerComponent> QuestManagerComponentClass;                        // 0x408(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   BackAction;                                        // 0x410(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   LeaveInventoryAction;                              // 0x420(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   PlayQuestAction;                                   // 0x430(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   AbandonQuestAction;                                // 0x440(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   ClaimRewardAction;                                 // 0x450(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   ReplayIntroAction;                                 // 0x460(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   ReplayOutroAction;                                 // 0x470(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   PinQuestAction;                                    // 0x480(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   UnpinQuestAction;                                  // 0x490(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   StopConversationAction;                            // 0x4A0(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_84F1[0x40];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestScreen");
		return Clss;
	}

	void TriggerClaimRewardEvent(class UFortQuestItem* QuestItem);
	void SetInputActionStates(class UFortQuestItem* QuestItem, bool bIsQuestAudioPlaying, bool bShouldShowPlayQuest, bool bAreQuestItemsDifferent);
	void SetDisableClaimRewardButton(bool bToDisable);
	void ProcessPendingSeenQuestItems();
	void OnContentMissing();
	void BP_SetInitialQuestToSelect(class UFortQuestItem* QuestItem);
	void BP_HandleUnpinQuestAction();
	void BP_HandleStopConversationAction();
	void BP_HandleReplayOutroAction();
	void BP_HandleReplayIntroAction();
	void BP_HandlePlayQuestAction();
	void BP_HandlePinQuestAction();
	void BP_HandleClaimRewardAction();
	void BP_HandleBackAction();
	void BP_HandleAbandonQuestAction();
	void AttemptToPlayQuest(class UFortQuestItem* QuestItem);
};

// 0x0 (0x568 - 0x568)
// Class SaveTheWorldUI.FortQuestScreen_Legacy
class UFortQuestScreen_Legacy : public UFortActivatablePanel
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQuestScreen_Legacy");
		return Clss;
	}

	void ProcessPendingSeenQuestItems();
};

// 0x8 (0x570 - 0x568)
// Class SaveTheWorldUI.FortResearchMenuBase
class UFortResearchMenuBase : public UFortActivatablePanel
{
public:
	class UFortItemDefinition*                   ResearchRespecToken;                               // 0x568(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortResearchMenuBase");
		return Clss;
	}

	void UseResearchRespecToken();
	void RequestPurchaseResearchLevel(const class FString& StatId);
	void OnUseResearchRespecTokenComplete();
	void OnPurchaseResearchLevelStarted();
	void OnPurchaseResearchLevelCompleted();
	int32 GetResearchRespecTokenCount();
	int32 GetClaimableResearchPointEstimate();
	bool AreResearchRespecTokensAvailable();
};

// 0x40 (0x2E8 - 0x2A8)
// Class SaveTheWorldUI.FortResearchStatTileWidget
class UFortResearchStatTileWidget : public UUserWidget
{
public:
	class UFortStatItemDefinition*               PersonalStatItemDefinition;                        // 0x2A8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortStatItemDefinition*               TeamStatItemDefinition;                            // 0x2B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  StatCostCurveName;                                 // 0x2B8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  StatPersonalDeltaCurveName;                        // 0x2BC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  StatPersonalCumulativeCurveName;                   // 0x2C0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  StatTeamDeltaCurveName;                            // 0x2C4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  StatTeamCumulativeCurveName;                       // 0x2C8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_84F2[0x1C];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortResearchStatTileWidget");
		return Clss;
	}

	void OnStatChanged();
	bool IsAtMaxResearchLevel();
	class FString GetStatIdName();
	enum class EFortStatType GetPersonalStatType();
	int32 GetNextTeamStatValueDelta();
	int32 GetNextPersonalStatValueDelta();
	int32 GetNextCombinedStatValueDelta();
	int32 GetCurrentTeamStatValue();
	int32 GetCurrentResearchLevel();
	int32 GetCurrentPersonalStatValue();
	int32 GetCurrentCombinedStatValue();
	int32 GetCostToIncreaseStat();
};

// 0x8 (0x30 - 0x28)
// Class SaveTheWorldUI.FortRewardNotificationData
class UFortRewardNotificationData : public UObject
{
public:
	enum class EFrontEndRewardType               RewardType;                                        // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_84F4[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardNotificationData");
		return Clss;
	}

	bool GetIconBrush(struct FSlateBrush* IconBrush, enum class EFortBrushSize BrushSize);
};

// 0x60 (0x90 - 0x30)
// Class SaveTheWorldUI.FortRewardCollectionBookData
class UFortRewardCollectionBookData : public UFortRewardNotificationData
{
public:
	struct FFortCollectionBookRewards            CollectionBookRewards;                             // 0x30(0x60)(BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardCollectionBookData");
		return Clss;
	}

};

// 0x28 (0x2F8 - 0x2D0)
// Class SaveTheWorldUI.FortRewardNotificationSubWidget
class UFortRewardNotificationSubWidget : public UCommonUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnTransitionInComplete;                            // 0x2D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTransitionOutComplete;                           // 0x2E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	uint8                                        Pad_84F7[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardNotificationSubWidget");
		return Clss;
	}

	void TransitionOutBegin();
	void TransitionOut();
	void TransitionInBegin();
	void TransitionIn();
	void SetPrimaryActionText(class FText Text);
	void SetPrimaryActionHidden();
	void SetPrimaryActionEnabled(bool bEnabled);
	void SetInputActionHandlerState(class UDataTable* DataTable, class FName RowName, enum class EInputActionState State);
	void RemoveInputActionHandler(const struct FDataTableRowHandle& InputActionRow);
	void RemoveAllInputActionHandlers();
	void OnPrimaryAction();
	void OnNavigationUp();
	void OnNavigationRight();
	void OnNavigationLeft();
	void OnNavigationDown();
	void OnDeactivated();
	void OnActivated();
	void IsPrimaryActionHidden(bool* bHidden);
	void IsPrimaryActionEnabled(bool* bEnabled);
	void InspectItem(class UFortItem* ItemToInspect, int32 QuantityOverride);
	void Init(class UFortRewardNotificationWidget* MainWidget);
	void AddInputActionHandler(class UDataTable* DataTable, class FName RowName, FDelegateProperty_ CommittedEvent);
};

// 0x0 (0x2F8 - 0x2F8)
// Class SaveTheWorldUI.FortRewardConversationWidget
class UFortRewardConversationWidget : public UFortRewardNotificationSubWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardConversationWidget");
		return Clss;
	}

	bool IsValidConversation(class UFortConversation* Conversation);
	void GetDataFromSentence(struct FFortConversationSentence& Sentence, class FText* Text, class UTexture2D** TalkingHeadTexture);
};

// 0x0 (0x30 - 0x30)
// Class SaveTheWorldUI.FortRewardDifficultyIncrease
class UFortRewardDifficultyIncrease : public UFortRewardNotificationData
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardDifficultyIncrease");
		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class SaveTheWorldUI.FortRewardEpicQuestData
class UFortRewardEpicQuestData : public UFortRewardNotificationData
{
public:
	class UFortQuestItem*                        Quest;                                             // 0x30(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardEpicQuestData");
		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class SaveTheWorldUI.FortRewardExpeditionData
class UFortRewardExpeditionData : public UFortRewardNotificationData
{
public:
	class UFortExpeditionItem*                   Expedition;                                        // 0x30(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardExpeditionData");
		return Clss;
	}

};

// 0x68 (0x360 - 0x2F8)
// Class SaveTheWorldUI.FortRewardExpeditionWidget
class UFortRewardExpeditionWidget : public UFortRewardNotificationSubWidget
{
public:
	FMulticastInlineDelegateProperty_            OnMcpError;                                        // 0x2F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_84FA[0x58];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardExpeditionWidget");
		return Clss;
	}

	void OnCollectExpeditionCompleted(class UFortExpeditionItem* Expedition, bool bSucceeded, TArray<struct FFortItemInstanceQuantityPair>& Rewards);
	void CollectExpedition(class UFortExpeditionItem* Expedition);
};

// 0x8 (0x38 - 0x30)
// Class SaveTheWorldUI.FortRewardGiftBoxData
class UFortRewardGiftBoxData : public UFortRewardNotificationData
{
public:
	class UFortGiftBoxItem*                      GiftBox;                                           // 0x30(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardGiftBoxData");
		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class SaveTheWorldUI.FortRewardItemCacheData
class UFortRewardItemCacheData : public UFortRewardNotificationData
{
public:
	class UFortItem*                             ItemCache;                                         // 0x30(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardItemCacheData");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class SaveTheWorldUI.FortRewardMissionAlertData
class UFortRewardMissionAlertData : public UFortRewardNotificationData
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardMissionAlertData");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class SaveTheWorldUI.FortRewardMissionData
class UFortRewardMissionData : public UFortRewardNotificationData
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardMissionData");
		return Clss;
	}

};

// 0x0 (0x2F8 - 0x2F8)
// Class SaveTheWorldUI.FortRewardNewQuestWidget
class UFortRewardNewQuestWidget : public UFortRewardNotificationSubWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardNewQuestWidget");
		return Clss;
	}

	bool IsValidConversation(class UFortConversation* Conversation);
	void GetDataFromSentence(struct FFortConversationSentence& Sentence, class FText* Text, class UTexture2D** TalkingHeadTexture);
};

// 0xF0 (0x620 - 0x530)
// Class SaveTheWorldUI.FortRewardNotificationWidget
class UFortRewardNotificationWidget : public UCommonActivatablePanelLegacy
{
public:
	uint8                                        Pad_84FE[0x8];                                     // Fixing Size After Last Property..
	TArray<class UFortRewardNotificationData*>   NotificationDataList;                              // 0x538(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_84FF[0x10];                                    // Fixing Size After Last Property..
	class UOverlay*                              OverlayMain;                                       // 0x558(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortSwipeDetector                    SwipeDetector;                                     // 0x560(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        Pad_8500[0x20];                                    // Fixing Size After Last Property..
	TSubclassOf<class UFortMulchConfirmationModalWidget> MulchConfirmationModalClass;                       // 0x610(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortMulchConfirmationModalWidget*     MulchConfirmationModal;                            // 0x618(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardNotificationWidget");
		return Clss;
	}

	void ShowMulchConfirmationModal();
	void SetPrimaryActionText(class FText Text);
	void SetPrimaryActionHidden();
	void SetPrimaryActionEnabled(bool bEnabled);
	void ResetAllRewardData();
	void PopulateReward(class UFortRewardNotificationData* Reward);
	void OnRewardsScreenClosed();
	void OnRewardsClaimFailed();
	void OnRewardsClaimed(TArray<struct FFortItemInstanceQuantityPair>& ItemList);
	void OnPrimaryActionTextChanged(class FText& Text);
	void OnPrimaryActionHidden();
	void OnPrimaryActionEnabled();
	void OnPrimaryActionDisabled();
	void OnPopulateNewQuestReward(class UFortRewardEpicQuestData* QuestReward);
	void OnPopulateGiftBoxReward(class UFortRewardGiftBoxData* GiftBoxReward);
	void OnPopulateExpeditionReward(class UFortRewardExpeditionData* ExpeditionReward);
	void OnPopulateChoiceRewards(TArray<struct FFortItemInstanceQuantityPair>& ItemList);
	void OnNavigationUp();
	void OnNavigationRight();
	void OnNavigationLeft();
	void OnNavigationDown();
	void OnMulchCompleted();
	void NotifyPanelDeactivated();
	void NotifyPanelActivated();
	void MarkDefaultItemsForMulch(const TArray<struct FFortItemInstanceQuantityPair>& ItemList);
	void IsPrimaryActionHidden(bool* bHidden);
	void IsPrimaryActionEnabled(bool* bEnabled);
	void InspectItem(class UFortItem* ItemToInspect, int32 QuantityOverride);
	void HideMulchConfirmationModal();
	void HandleOnQuestRewardClaimed(class UFortQuestItem* Quest, TArray<struct FFortItemInstanceQuantityPair>& Rewards);
	void HandleOnNoQuestRewardsToClaim();
	void HandleOnMissionRewardsOpenFailed();
	void HandleOnMissionRewardsOpened(TArray<struct FFortItemInstanceQuantityPair>& MissionRewards);
	void HandleOnMissionAlertRewardsOpened(TArray<struct FFortItemInstanceQuantityPair>& AlertRewards);
	void HandleOnItemCacheRewardsClaimFailed();
	void HandleOnItemCacheRewardsClaimed(TArray<struct FFortItemInstanceQuantityPair>& ClaimedRewards);
	void HandleOnDifficultyIncreaseRewardsClaimFailed();
	void HandleOnDifficultyIncreaseRewardsClaimed(TArray<struct FFortItemInstanceQuantityPair>& DifficultyRewards);
	void HandleOnCollectionBookRewardClaimed(const struct FFortCollectionBookRewards& RewardClaimed, bool bSuccess, TArray<struct FFortItemInstanceQuantityPair>& ActualRewards);
	void BeginCloseRewardsScreen();
	void AddQuestData(class UFortQuestItem* Quest);
	void AddPhoenixLevelUpRewardData();
	void AddMissionData();
	void AddMissionAlertData();
	void AddItemCacheRewardData(class UFortItem* ItemCache);
	void AddGiftBoxData();
	void AddExpeditionData(class UFortExpeditionItem* ExpeditionItem);
	void AddEpicQuestData(class UFortQuestItem* Quest);
	void AddDifficultyIncreaseRewardData();
	void AddCollectionBookData(struct FFortCollectionBookRewards& CollectionBookRewards);
};

// 0x18 (0x48 - 0x30)
// Class SaveTheWorldUI.FortRewardPhoenixLevelUpData
class UFortRewardPhoenixLevelUpData : public UFortRewardNotificationData
{
public:
	int32                                        PhoenixLevel;                                      // 0x30(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8501[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FFortItemInstanceQuantityPair> Rewards;                                           // 0x38(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardPhoenixLevelUpData");
		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class SaveTheWorldUI.FortRewardQuestData
class UFortRewardQuestData : public UFortRewardNotificationData
{
public:
	class UFortQuestItem*                        Quest;                                             // 0x30(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRewardQuestData");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class SaveTheWorldUI.SaveTheWorldRegisterUIManager
class USaveTheWorldRegisterUIManager : public UFortUIGameFeatureAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SaveTheWorldRegisterUIManager");
		return Clss;
	}

};

// 0xC8 (0xF0 - 0x28)
// Class SaveTheWorldUI.SaveTheWorldRequestsFeatureAction
class USaveTheWorldRequestsFeatureAction : public UFortUIGameFeatureAction
{
public:
	TSoftClassPtr<class UFortItemManagementScreen> ItemManagementScreenClass;                         // 0x28(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UFortItemInspectionScreen> ItemInspectionScreenClass;                         // 0x50(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UFortHeroLoadoutScreenBase> HeroLoadoutScreenClass;                            // 0x78(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UFortHeroLoadoutScreenLegacy> HeroLoadoutScreenLegacyClass;                      // 0xA0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UFortSquadManagementScreenBase> SurvivorSquadManagementScreenClass;                // 0xC8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SaveTheWorldRequestsFeatureAction");
		return Clss;
	}

};

// 0x18 (0x14D8 - 0x14C0)
// Class SaveTheWorldUI.FortSquadSelectorButton
class UFortSquadSelectorButton : public UCommonButtonLegacy
{
public:
	uint8                                        Pad_8503[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadSelectorButton");
		return Clss;
	}

	bool TryGetStaticSquadDataBP(struct FHomebaseSquad* OutSquadData);
	void SetIdOfSquadToManageBP(class FName& SquadId);
	void HandleSquadChangedBP();
	void HandleDifferentSquadSetBP();
	class FName GetIdOfSquadToManageBP();
};

// 0x8 (0x14E0 - 0x14D8)
// Class SaveTheWorldUI.FortDefenderSquadSelectorButton
class UFortDefenderSquadSelectorButton : public UFortSquadSelectorButton
{
public:
	uint8                                        Pad_8506[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortDefenderSquadSelectorButton");
		return Clss;
	}

	bool TryGetTheaterUniqueId(class FString* OutTheaterUniqueId, bool* OutIsUnlocked);
	bool TryGetPowerLevel(int32* OutPowerLevel);
};

// 0x30 (0x300 - 0x2D0)
// Class SaveTheWorldUI.FortSquadStatDetailsWidget
class UFortSquadStatDetailsWidget : public UCommonUserWidget
{
public:
	uint8                                        Pad_8507[0x30];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadStatDetailsWidget");
		return Clss;
	}

};

// 0x10 (0x310 - 0x300)
// Class SaveTheWorldUI.FortHeroSquadBonusPerksWidgetBase
class UFortHeroSquadBonusPerksWidgetBase : public UFortSquadStatDetailsWidget
{
public:
	class UFortPerkWidget_NUI*                   SupportBonusPerkWidget;                            // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortPerkWidget_NUI*                   TacticalBonusPerkWidget;                           // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHeroSquadBonusPerksWidgetBase");
		return Clss;
	}

};

// 0x120 (0x688 - 0x568)
// Class SaveTheWorldUI.FortSquadManagementScreenBase
class UFortSquadManagementScreenBase : public UFortActivatablePanel
{
public:
	uint8                                        Pad_850D[0x10];                                    // Fixing Size After Last Property..
	bool                                         bReadOnlyModeWIFE;                                 // 0x578(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_850E[0x7];                                     // Fixing Size After Last Property..
	class UFortSquadStatsWidgetBase*             SquadStatsWidget;                                  // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSquadSlotsView*                   SquadSlotsView;                                    // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSquadSlotDetailsPanel*            SelectedSlotDetailsPanel;                          // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSquadSlotItemPicker*              SelectedSlotItemPicker;                            // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   InspectInputActionRowHandle;                       // 0x5A0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   ManageInputActionRowHandle;                        // 0x5B0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   BackInputActionRowHandle;                          // 0x5C0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   InventoryInputActionRowHandle;                     // 0x5D0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   InventoryCloseInputActionRowHandle;                // 0x5E0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   ClosePickerInputActionRowHandle;                   // 0x5F0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   SelectPickerSlotActionRowHandle;                   // 0x600(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   CyclePickerSortActionRowHandle;                    // 0x610(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   PreviousSquadActionRowHandle;                      // 0x620(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   NextSquadActionRowHandle;                          // 0x630(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   ClearAllActionRowHandle;                           // 0x640(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   HelpScreenActionRowHandle;                         // 0x650(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortDisableAutoSlottingPromptAction> DisableAutoSlottingToClearSquadPromptAction;       // 0x660(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_850F[0x10];                                    // Fixing Size After Last Property..
	class UFortItemViewContext_SquadSlotsView*   ItemViewContext_SquadSlotsView;                    // 0x678(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortItemViewContext_SquadSlotItemPicker* ItemViewContext_SquadSlotItemPicker;               // 0x680(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadManagementScreenBase");
		return Clss;
	}

	bool TryGetStaticSquadDataBP(struct FHomebaseSquad* OutSquadData);
	bool TryGetSquadTeamAttribute(struct FGameplayAttribute* OutGameplayAttribute);
	bool TryGetSquadMainAttribute(struct FGameplayAttribute* OutGameplayAttribute);
	bool TryGetAttributeValueFromSquad(float* OutValue, struct FGameplayAttribute& Attribute);
	void ShowWarningReadOnlyWIFE(bool Force);
	void SetupInputHandlers();
	void SetIdOfSquadToManageBP(class FName& SquadId);
	void SelectSquadWithOffset(int32 Offset);
	void SelectPreviousSquad();
	void SelectNextSquad();
	void NavigateToSquadSlot(int32 SquadSlotIndex);
	bool IsScreenWIFE();
	void HandleViewInAll(int32 SquadSlotIndex);
	void HandleSquadStateChanged();
	void HandleSquadSlotPickerShown();
	void HandleSquadSlotPickerHidden();
	void HandleShouldAutoSlotSurvivorSquadsChanged();
	void HandleSelectPickerSlotInputAction();
	void HandlePreviousSquadInputAction();
	void HandlePickerSelectionCommitted(class UFortItem* CommittedItem);
	void HandlePickerSelectionChanged(class UFortItem* SelectedItem);
	void HandleOpenSquadSlot(int32 SquadSlotIndex);
	void HandleNextSquadInputAction();
	void HandleManageInputAction();
	void HandleInventoryInputAction();
	void HandleInspectInputAction();
	void HandleDifferentSquadSlotSelected(int32 SquadSlotIndex);
	void HandleDifferentSquadSetBP();
	void HandleCyclePickerSortInputAction();
	void HandleClosePickerInputAction();
	void HandleBackInputAction();
	int32 GetNumUnlockedSquads();
	class FName GetIdOfSquadToManageBP();
	void ClearSquad();
};

// 0x20 (0x6A8 - 0x688)
// Class SaveTheWorldUI.FortHeroSquadManagementScreen
class UFortHeroSquadManagementScreen : public UFortSquadManagementScreenBase
{
public:
	struct FDataTableRowHandle                   ManageDefendersInputActionRowHandle;               // 0x688(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UFortHeroSquadBonusPerksWidgetBase*    BonusPerksWidget;                                  // 0x698(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8511[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHeroSquadManagementScreen");
		return Clss;
	}

	void PlayFeedbackForSlottingPerson(class UFortCharacter* Character, int32 SlotIndex);
};

// 0x10 (0x2E0 - 0x2D0)
// Class SaveTheWorldUI.FortSquadIcon
class UFortSquadIcon : public UCommonUserWidget
{
public:
	class FName                                  Name;                                              // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    ImageSize;                                         // 0x2D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8512[0x3];                                     // Fixing Size After Last Property..
	class UImage*                                Icon;                                              // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadIcon");
		return Clss;
	}

	void SetSquad(class FName& InName);
	void HandleDifferentSquadSetBP();
};

// 0x10 (0x2E0 - 0x2D0)
// Class SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails
class UFortSquadLandingPageDefenderSquadDetails : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                      OutpostName;                                       // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonNumericTextBlock*               PowerRating;                                       // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadLandingPageDefenderSquadDetails");
		return Clss;
	}

	void SetDefenderSquadInfo(struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);
	void HandleDefenderSquadInfoSetBP(struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);
	void HandleAddDefenderSquadMemberBP(class FName& SquadId, int32 Index);
};

// 0x8 (0x2D8 - 0x2D0)
// Class SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetailsLocked
class UFortSquadLandingPageDefenderSquadDetailsLocked : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                      OutpostName;                                       // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadLandingPageDefenderSquadDetailsLocked");
		return Clss;
	}

	void SetDefenderSquadInfo(struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);
};

// 0x8 (0x2D8 - 0x2D0)
// Class SaveTheWorldUI.FortSquadLandingPageDefenderSummary
class UFortSquadLandingPageDefenderSummary : public UCommonUserWidget
{
public:
	uint8                                        Pad_8513[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadLandingPageDefenderSummary");
		return Clss;
	}

	void HandleClearDefenderSquadDetailsBP();
	void HandleAddLockedDefenderSquadDetailsBP(const struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);
	void HandleAddDefenderSquadDetailsBP(const struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);
};

// 0x88 (0x358 - 0x2D0)
// Class SaveTheWorldUI.FortSquadLandingPageSurvivorSummary
class UFortSquadLandingPageSurvivorSummary : public UCommonUserWidget
{
public:
	class UFortSquadStatValueWithIcon*           FortitudeStatValue;                                // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortSquadStatValueWithIcon*           OffenseStatValue;                                  // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortSquadStatValueWithIcon*           ResistanceStatValue;                               // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortSquadStatValueWithIcon*           TechStatValue;                                     // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8514[0x68];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadLandingPageSurvivorSummary");
		return Clss;
	}

	void HandleClearSetBonusSummaryLineItemsBP();
	void HandleAddSetBonusSummaryLineItemBP(const struct FFortAttributeModifierAccumulation& AttributeModifierAccumulation);
};

// 0xD0 (0xF8 - 0x28)
// Class SaveTheWorldUI.FortSquadManagementItemViewContextBase
class UFortSquadManagementItemViewContextBase : public UObject
{
public:
	uint8                                        Pad_8515[0xD0];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadManagementItemViewContextBase");
		return Clss;
	}

};

// 0x8 (0x100 - 0xF8)
// Class SaveTheWorldUI.FortItemViewContext_SquadSlotsView
class UFortItemViewContext_SquadSlotsView : public UFortSquadManagementItemViewContextBase
{
public:
	uint8                                        Pad_8516[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemViewContext_SquadSlotsView");
		return Clss;
	}

};

// 0x8 (0x100 - 0xF8)
// Class SaveTheWorldUI.FortItemViewContext_SquadSlotItemPicker
class UFortItemViewContext_SquadSlotItemPicker : public UFortSquadManagementItemViewContextBase
{
public:
	uint8                                        Pad_8517[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemViewContext_SquadSlotItemPicker");
		return Clss;
	}

};

// 0x8 (0x108 - 0x100)
// Class SaveTheWorldUI.FortItemViewContext_ExpeditionSquadSlotsView
class UFortItemViewContext_ExpeditionSquadSlotsView : public UFortItemViewContext_SquadSlotsView
{
public:
	uint8                                        Pad_8518[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemViewContext_ExpeditionSquadSlotsView");
		return Clss;
	}

};

// 0x8 (0x108 - 0x100)
// Class SaveTheWorldUI.FortItemViewContext_ExpeditionSquadSlotItemPicker
class UFortItemViewContext_ExpeditionSquadSlotItemPicker : public UFortItemViewContext_SquadSlotItemPicker
{
public:
	uint8                                        Pad_8519[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemViewContext_ExpeditionSquadSlotItemPicker");
		return Clss;
	}

};

// 0x58 (0x328 - 0x2D0)
// Class SaveTheWorldUI.FortSquadSlotDetailsPanel
class UFortSquadSlotDetailsPanel : public UCommonUserWidget
{
public:
	uint8                                        Pad_851B[0x20];                                    // Fixing Size After Last Property..
	class UFortSquadSlotItemDetailsHostPanel*    ItemDetailsPanel;                                  // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FInterfaceProperty_                          ItemViewContext;                                   // 0x2F8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_851C[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadSlotDetailsPanel");
		return Clss;
	}

	bool TryGetItemToPreviewInSlot(class UFortItem** OutItemToPreviewInSlot);
	void SetScrollWidget();
	void SetIdOfSquadSlotToManageBP(class FName& SquadId, int32 SquadSlotIndex);
	bool IsSquadSlotLockedBP();
	void HandleSquadSlotStateChangedBP();
	void HandleSquadSlotRestrictionFactorsChangedBP();
	void HandleDifferentSquadSlotSetBP();
	TArray<enum class EFortSquadSlottingRestrictionReason> GetSlottingRestrictionReasons();
	class UFortItem* GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer);
	void GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex);
};

// 0x20 (0x348 - 0x328)
// Class SaveTheWorldUI.FortSquadSlotItemDetailElementWidget
class UFortSquadSlotItemDetailElementWidget : public UFortItemDetailElementWidget
{
public:
	uint8                                        Pad_851D[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadSlotItemDetailElementWidget");
		return Clss;
	}

	void SetIdOfSquadSlotToManageBP(class FName& SquadId, int32 SquadSlotIndex);
	bool IsSquadSlotLockedBP();
	void HandlePostDifferentSquadSlotSetBP();
	class UFortItem* GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer);
	void GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex);
};

// 0x20 (0x3C8 - 0x3A8)
// Class SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel
class UFortSquadSlotItemDetailsHostPanel : public UFortItemDetailsHostPanel
{
public:
	uint8                                        Pad_851E[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadSlotItemDetailsHostPanel");
		return Clss;
	}

	void SetIdOfSquadSlotToManageBP(class FName& SquadId, int32 SquadSlotIndex);
	bool IsSquadSlotLockedBP();
	class UFortItem* GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer);
	void GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex);
};

// 0xC8 (0x4D8 - 0x410)
// Class SaveTheWorldUI.FortSquadSlotItemPicker
class UFortSquadSlotItemPicker : public UFortItemPickerBase
{
public:
	uint8                                        Pad_851F[0x38];                                    // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnSortChanged;                                     // 0x448(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_8520[0x80];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadSlotItemPicker");
		return Clss;
	}

	void SetSortTypes(const struct FSquadSlotSortTypes& SquadSlotSortTypes);
	void SetIdOfSquadSlotToManageBP(class FName& SquadId, int32 SquadSlotIndex);
	void GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex);
	void FortSquadSlotSortChanged__DelegateSignature(enum class ESquadSlotSortType CurrentSortType, enum class ESquadSlotType SquadSlotType);
	void CycleSortType();
};

// 0x18 (0x1510 - 0x14F8)
// Class SaveTheWorldUI.FortSquadSlotItemPickerTileButton
class UFortSquadSlotItemPickerTileButton : public UFortItemTileButton
{
public:
	uint8                                        Pad_8521[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadSlotItemPickerTileButton");
		return Clss;
	}

	void HandleSlottingRestrictionReasonsChanged();
	void HandleItemSlottedToDifferentSquad(struct FHomebaseSquadSlotId& SquadSlotId);
	TArray<enum class EFortSquadSlottingRestrictionReason> GetSlottingRestrictionReasons();
};

// 0x8 (0x558 - 0x550)
// Class SaveTheWorldUI.FortSquadSlotSelectorPopupMenu
class UFortSquadSlotSelectorPopupMenu : public UFortPopupMenu_Legacy
{
public:
	bool                                         bReadOnlyModeWIFE;                                 // 0x550(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8522[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadSlotSelectorPopupMenu");
		return Clss;
	}

	bool IsScreenWIFE();
	class UFortSquadSlotSelectorButton* GetHostButton();
};

// 0x28 (0x370 - 0x348)
// Class SaveTheWorldUI.FortSquadSlotSurvivorTraitMatchesDetailWidget
class UFortSquadSlotSurvivorTraitMatchesDetailWidget : public UFortSquadSlotItemDetailElementWidget
{
public:
	bool                                         IsSquadLeaderSlot;                                 // 0x348(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         LeaderMatchesSquadType;                            // 0x349(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8523[0x2];                                     // Fixing Size After Last Property..
	int32                                        SubordinatePersonalityMatchCount;                  // 0x34C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         MatchesLeaderPersonality;                          // 0x350(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8524[0x3];                                     // Fixing Size After Last Property..
	int32                                        MatchingSetBonusCount;                             // 0x354(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SetBonusSize;                                      // 0x358(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8525[0x14];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadSlotSurvivorTraitMatchesDetailWidget");
		return Clss;
	}

	void HandleTraitValuesUpdatedBP();
};

// 0x80 (0x1540 - 0x14C0)
// Class SaveTheWorldUI.FortSquadSlotSelectorButton
class UFortSquadSlotSelectorButton : public UCommonButtonLegacy
{
public:
	uint8                                        Pad_8526[0x20];                                    // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnRequestOpenSquadSlotEvent;                       // 0x14E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRequestViewInAllEvent;                           // 0x14F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UFortSquadSlotWidget*                  SquadSlotWidget;                                   // 0x1500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMenuAnchor*                           PopupMenuAnchor;                                   // 0x1508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FInterfaceProperty_                          ItemViewContext;                                   // 0x1510(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8527[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadSlotSelectorButton");
		return Clss;
	}

	void ViewInAll();
	void SquadSlotWidgetUpdated();
	void SetIdOfSquadSlotToManageBP(class FName& SquadId, int32 SquadSlotIndex);
	void OpenSquadSlot();
	bool IsSquadSlotLockedBP();
	void HandlePreDifferentSquadSlotSetBP();
	void HandlePostDifferentSquadSlotSetBP();
	class UUserWidget* GetPopupMenu();
	bool GetInPreviewMode();
	void GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex);
};

// 0xF8 (0x3C8 - 0x2D0)
// Class SaveTheWorldUI.FortSquadSlotsView
class UFortSquadSlotsView : public UCommonUserWidget
{
public:
	uint8                                        Pad_852F[0x10];                                    // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnDifferentSquadSlotSelectedEvent;                 // 0x2E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRequestOpenSquadSlotEvent;                       // 0x2F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRequestViewInAllEvent;                           // 0x300(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bReadOnlyModeWIFE;                                 // 0x310(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8530[0x3];                                     // Fixing Size After Last Property..
	int32                                        IndexOfSelectedSquadSlot;                          // 0x314(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSlotButtonsRequireSelection;                      // 0x318(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInPreviewMode;                                    // 0x319(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8531[0x6];                                     // Fixing Size After Last Property..
	TMap<enum class ESquadSlotType, struct FSquadSlotSortTypes> SquadSlotSortTypesMap;                             // 0x320(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortDisableAutoSlottingPromptAction> DisableAutoSlottingToOpenSquadSlotPromptAction;    // 0x370(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCommittableButtonGroup*           SquadSlotButtonGroup;                              // 0x378(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8532[0x30];                                    // Fixing Size After Last Property..
	FInterfaceProperty_                          ItemViewContext;                                   // 0x3B0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8533[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadSlotsView");
		return Clss;
	}

	bool TryGetStaticSquadDataBP(struct FHomebaseSquad* OutSquadData);
	bool TryGetSelectedSquadSlotSortTypes(struct FSquadSlotSortTypes* OutSlotSortTypes);
	void SetIsSelectionLocked(bool ShouldSelectionBeLocked);
	void SetInPreviewMode(bool bPreview);
	void SetIdOfSquadToManageBP(class FName& SquadId);
	void SelectSlot(int32 SquadSlotIndex);
	void OnDifferentSquadSlotSelected__DelegateSignature(int32 SquadSlotIndex);
	void HandleSelectedButtonChanged(class UCommonButtonLegacy* SelectedButton, int32 ButtonIndex);
	void HandleRequestViewInAll(int32 SquadSlotIndex);
	void HandleRequestOpenSquadSlot(int32 SquadSlotIndex);
	void HandleHoveredButtonChanged(class UCommonButtonLegacy* HoveredButton, int32 ButtonIndex);
	void HandleButtonDoubleClicked(class UCommonButtonLegacy* CommittedButton, int32 ButtonIndex);
	void HandleButtonClicked(class UCommonButtonLegacy* CommittedButton, int32 ButtonIndex);
	int32 GetIndexOfSelectedSquadSlot();
	class FName GetIdOfSquadToManageBP();
	class UFortSquadSlotSelectorButton* CreateAndAddSquadSlotButton(int32 SquadSlotIndex, struct FHomebaseSquadSlot& SquadSlotDefinition, class UWidget** OutSquadSlotButtonHost);
};

// 0x90 (0x208 - 0x178)
// Class SaveTheWorldUI.FortSquadSlotWidget
class UFortSquadSlotWidget : public UWidget
{
public:
	uint8                                        Pad_8534[0x20];                                    // Fixing Size After Last Property..
	enum class EFortItemCardSize                 ItemCardSize;                                      // 0x198(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8535[0x3F];                                    // Fixing Size After Last Property..
	class UFortMultiSizeItemCard*                SlottedItemCard;                                   // 0x1D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8536[0x8];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          ItemViewContext;                                   // 0x1E8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8537[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadSlotWidget");
		return Clss;
	}

	void SetIdOfSquadSlotToManageBP(class FName& SquadId, int32 SquadSlotIndex);
	void SetCardSize(enum class EFortItemCardSize CardSize);
	bool IsSquadSlotLockedBP();
	class UFortItem* GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer);
	void GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex);
};

// 0x38 (0x308 - 0x2D0)
// Class SaveTheWorldUI.FortSquadStatsWidgetBase
class UFortSquadStatsWidgetBase : public UCommonUserWidget
{
public:
	TArray<class UFortAttributeListItem_NUI*>    OverviewStats;                                     // 0x2D0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UFortAttributeList_NUI*                DetailedStats;                                     // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8538[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadStatsWidgetBase");
		return Clss;
	}

	void RequestStatsUpdate();
	void RequestShowPreviewStats();
	void HandleSquadSlottingPreviewStateChanged();
	void HandlePowerRatingChanged_BP(bool bHasTeamMebers);
	struct FUniqueNetIdRepl GetLocalPlayerId();
};

// 0x88 (0x358 - 0x2D0)
// Class SaveTheWorldUI.FortSquadStatValueWithIcon
class UFortSquadStatValueWithIcon : public UCommonUserWidget
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x2D0(0x38)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    TeamAttribute;                                     // 0x308(0x38)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    ImageSize;                                         // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8539[0x7];                                     // Fixing Size After Last Property..
	class UCommonNumericTextBlock*               Value;                                             // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                Icon;                                              // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadStatValueWithIcon");
		return Clss;
	}

	void HandleDifferentAttributeSetBP();
};

// 0x30 (0x598 - 0x568)
// Class SaveTheWorldUI.FortSquadTypeLandingPageBase
class UFortSquadTypeLandingPageBase : public UFortActivatablePanel
{
public:
	bool                                         bReadOnlyModeWIFE;                                 // 0x568(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortHomebaseSquadType            SquadType;                                         // 0x569(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_853B[0x6];                                     // Fixing Size After Last Property..
	struct FDataTableRowHandle                   BackInputActionRowHandle;                          // 0x570(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EFortFrontendInventoryFilter      ItemManagementScreenFilter;                        // 0x580(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_853C[0x7];                                     // Fixing Size After Last Property..
	TArray<TWeakObjectPtr<class UFortSquadSelectorButton>> SquadSelectorButtons;                              // 0x588(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSquadTypeLandingPageBase");
		return Clss;
	}

	void ShowWarningReadOnlyWIFE(bool Force);
	bool IsScreenWIFE();
	void HandlePendingNavigationOp();
	void HandleBackInputAction(bool* bPassThrough);
	class UFortSquadSelectorButton* CreateAndAddSquadButton(class FName& SquadId);
};

// 0x48 (0x318 - 0x2D0)
// Class SaveTheWorldUI.FortStatIcon
class UFortStatIcon : public UCommonUserWidget
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x2D0(0x38)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    ImageSize;                                         // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_853D[0x7];                                     // Fixing Size After Last Property..
	class UImage*                                Icon;                                              // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortStatIcon");
		return Clss;
	}

	void SetAttribute(struct FGameplayAttribute& InAttribute);
	void HandleDifferentAttributeSetBP();
};

// 0xE0 (0x768 - 0x688)
// Class SaveTheWorldUI.FortSurvivorSquadManagementScreen
class UFortSurvivorSquadManagementScreen : public UFortSquadManagementScreenBase
{
public:
	class UFortSurvivorSquadStatMatchesBase*     StatMatchesWidget;                                 // 0x688(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_853F[0xD8];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSurvivorSquadManagementScreen");
		return Clss;
	}

	void UpdateCycleButtons();
	void ShowHelpDialog();
	void PlayFeedbackForSlottingPerson(class UFortWorker* Worker, int32 SlotIndex, struct FFortSurvivorSquadSlottingFeedbackData& FeedbackData);
};

// 0x28 (0x1500 - 0x14D8)
// Class SaveTheWorldUI.FortSurvivorSquadSelectorButton
class UFortSurvivorSquadSelectorButton : public UFortSquadSelectorButton
{
public:
	TArray<struct FGameplayAttribute>            FortStatAttributes;                                // 0x14D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGameplayAttribute>            FortTeamStatAttributes;                            // 0x14E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_8543[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSurvivorSquadSelectorButton");
		return Clss;
	}

	bool TryGetSummaryStats(struct FFortSurvivorSquadSelectorButtonSummaryStats* OutSummaryStats);
	bool TryGetSquadMembers(TArray<class UFortWorker*>* OutSquadMembers);
	bool TryGetPersonalityMatches(struct FFortSurvivorSquadSelectorButtonPersonalityMatches* OutPersonalityMatches);
};

// 0x4D0 (0x7A0 - 0x2D0)
// Class SaveTheWorldUI.FortSurvivorSquadStatMatchBase
class UFortSurvivorSquadStatMatchBase : public UCommonUserWidget
{
public:
	uint8                                        Pad_8544[0x10];                                    // Fixing Size After Last Property..
	struct FFortUISurvivorSquadStatMatch         StatMatch;                                         // 0x2E0(0x4C0)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSurvivorSquadStatMatchBase");
		return Clss;
	}

	void OnStatMatchUpdated(const struct FFortUISurvivorSquadStatMatch& UpdatedMatch);
};

// 0x30 (0x330 - 0x300)
// Class SaveTheWorldUI.FortSurvivorSquadStatMatchesBase
class UFortSurvivorSquadStatMatchesBase : public UFortSquadStatDetailsWidget
{
public:
	TSubclassOf<class UFortSurvivorSquadStatMatchBase> StatMatchClass;                                    // 0x300(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSummaryView;                                      // 0x308(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8546[0x7];                                     // Fixing Size After Last Property..
	TArray<class UFortSurvivorSquadStatMatchBase*> StatMatches;                                       // 0x310(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8547[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSurvivorSquadStatMatchesBase");
		return Clss;
	}

	bool TryGetStaticSquadDataBP(struct FHomebaseSquad* OutSquadData);
	void SetSummaryView(bool bInSummaryView);
	void SetIdOfSquadToManageBP(class FName& SquadId);
	void HandleDifferentSquadSetBP();
	class FName GetIdOfSquadToManageBP();
	void AddStatMatch(class UFortSurvivorSquadStatMatchBase* SetBonus);
};

// 0x20 (0x2F0 - 0x2D0)
// Class SaveTheWorldUI.FortSurvivorSquadSummaryStatItem
class UFortSurvivorSquadSummaryStatItem : public UCommonUserWidget
{
public:
	enum class EFortBrushSize                    ImageSize;                                         // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8548[0x7];                                     // Fixing Size After Last Property..
	class UImage*                                Icon;                                              // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonTextBlock*                      Value;                                             // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonTextBlock*                      Name;                                              // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSurvivorSquadSummaryStatItem");
		return Clss;
	}

	void SetAttributeModifierAccumulation(struct FFortAttributeModifierAccumulation& Accumulation);
};

// 0x10 (0x2E0 - 0x2D0)
// Class SaveTheWorldUI.FortWorkerSetBonusIcon
class UFortWorkerSetBonusIcon : public UCommonUserWidget
{
public:
	struct FGameplayTag                          GameplayTag;                                       // 0x2D0(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    ImageSize;                                         // 0x2D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8549[0x3];                                     // Fixing Size After Last Property..
	class UImage*                                Icon;                                              // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortWorkerSetBonusIcon");
		return Clss;
	}

	void SetGameplayTag(struct FGameplayTag& InGameplayTag);
	void HandleDifferentGameplayTagSetBP();
};

// 0x38 (0x308 - 0x2D0)
// Class SaveTheWorldUI.FortStatsOverviewDetailsBase
class UFortStatsOverviewDetailsBase : public UCommonUserWidget
{
public:
	TArray<class UFortAttributeListItem_NUI*>    OverviewStats;                                     // 0x2D0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UFortAttributeList_NUI*                DetailedStats;                                     // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_854A[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortStatsOverviewDetailsBase");
		return Clss;
	}

	void RequestStatsUpdate();
	void ListenForChanges(bool bListen);
	struct FUniqueNetIdRepl GetLocalPlayerId();
};

// 0x40 (0x70 - 0x30)
// Class SaveTheWorldUI.FortLlamaStoreData
class UFortLlamaStoreData : public UPrimaryDataAsset
{
public:
	TArray<class FText>                          RandomLoadingTexts;                                // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  NotEnoughCurrencyDialogCloseAction;                // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_854B[0x4];                                     // Fixing Size After Last Property..
	TSubclassOf<class UFortStoreFrontOfferDetailsWidgetBase> InspectWidgetClass;                                // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShowOfferDelay;                                    // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_854C[0x4];                                     // Fixing Size After Last Property..
	TSubclassOf<class UCommonActivatablePanelLegacy> StoreOpeningCardPackClass;                         // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortOpenCardPackModal>    UnopenedCardpacksModalClass;                       // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortOpenCardPackModal_Legacy> UnopenedCardpacksModalClass_Legacy;                // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortLlamaStoreData");
		return Clss;
	}

};

// 0xA0 (0x578 - 0x4D8)
// Class SaveTheWorldUI.FortLlamaStoreBase
class UFortLlamaStoreBase : public UFortDirectAcquisitionWidgetBase
{
public:
	TArray<struct FOfferGroup>                   OfferCategoriesToDisplay;                          // 0x4D8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   TencentDetailsActionData;                          // 0x4E8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   AddVBucksActionData;                               // 0x4F8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bShouldShowAddVBucksAction;                        // 0x508(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_854D[0x7];                                     // Fixing Size After Last Property..
	class UDynamicEntryBox*                      OfferEntryBox;                                     // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonGroupBase*                OfferButtonGroup;                                  // 0x518(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortLlamaStoreDetailsBase*            OfferDetails;                                      // 0x520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortLlamaStoreData*                   StoreData;                                         // 0x528(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_UnopenedLlamas;                             // 0x530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortLlamaStoreOfferInfo*              PendingPurchaseOffer;                              // 0x538(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonActivatablePanelLegacy*         StoreOpeningCardPack;                              // 0x540(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHideSoldOffers;                                   // 0x548(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_854E[0x2F];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortLlamaStoreBase");
		return Clss;
	}

	void SwapToCardEnterState();
	void SetupFocus();
	void OnStoreStateChanged(enum class EFortStoreState NewStoreState);
	void OnStorePurchaseCompleted();
	void HandleTencentDetails();
	void HandleAddVBucks();
	void CreateTencentPuchaseOpenModal();
};

// 0x78 (0x6C0 - 0x648)
// Class SaveTheWorldUI.FortLlamaStoreBase_Legacy
class UFortLlamaStoreBase_Legacy : public UFortDirectAcquisitionWidgetBase_Legacy
{
public:
	TArray<struct FOfferGroup>                   OfferCategoriesToDisplay;                          // 0x648(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UDynamicEntryBox*                      OfferEntryBox;                                     // 0x658(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonGroupLegacy*              OfferButtonGroup;                                  // 0x660(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortLlamaStoreDetailsBase*            OfferDetails;                                      // 0x668(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortLlamaStoreData*                   StoreData;                                         // 0x670(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonLegacy*                   Button_UnopenedLlamas;                             // 0x678(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortLlamaStoreOfferInfo*              PendingPurchaseOffer;                              // 0x680(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonActivatablePanelLegacy*         StoreOpeningCardPack;                              // 0x688(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHideSoldOffers;                                   // 0x690(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_854F[0x2F];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortLlamaStoreBase_Legacy");
		return Clss;
	}

	void SwapToCardEnterState();
	void SetupFocus();
	void OnStoreStateChanged(enum class EFortStoreState NewStoreState);
	void OnStorePurchaseCompleted();
	void CreateTencentPuchaseOpenModal();
};

// 0x20 (0x2F0 - 0x2D0)
// Class SaveTheWorldUI.FortLlamaStoreDetailsBase
class UFortLlamaStoreDetailsBase : public UCommonUserWidget
{
public:
	class UFortStoreFrontOfferInfo*              OfferInfo;                                         // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTileView*                       ItemTileView;                                      // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8550[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortLlamaStoreDetailsBase");
		return Clss;
	}

	void StartUpgradingToSilver();
	void StartUpgradingToGold();
	void SetScrollWidget();
	void OnOfferInfoChanged(int32 CurrentOfferRarity);
	int32 GetNotInCollectionBookCount();
	int32 GetNewItemCount();
	int32 GetChoiceItemCount();
};

// 0x10 (0x838 - 0x828)
// Class SaveTheWorldUI.FortLlamaStoreInspectionScreen
class UFortLlamaStoreInspectionScreen : public UFortStoreFrontOfferDetailsWidgetBase
{
public:
	class UCommonTileView*                       GrantedItemTileView;                               // 0x828(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsInChoiceViewMode;                               // 0x830(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8552[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortLlamaStoreInspectionScreen");
		return Clss;
	}

	bool IsItemChoicePack(class UObject* ItemToCheck);
	class UFortCardPackItem* GetSelectedCardPack();
	enum class EInputActionState GetInspectChoiceInputState();
};

// 0x40 (0x5A8 - 0x568)
// Class SaveTheWorldUI.FortOpenCardPackModal
class UFortOpenCardPackModal : public UFortActivatablePanel
{
public:
	class UCommonListView*                       CardPackList;                                      // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButtonLegacy*                   OpenAllButton;                                     // 0x570(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonLegacy*                   CancelButton;                                      // 0x578(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BPOnRequestOpenCardPack;                           // 0x580(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8553[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortOpenCardPackModal");
		return Clss;
	}

};

// 0x40 (0x5A8 - 0x568)
// Class SaveTheWorldUI.FortOpenCardPackModal_Legacy
class UFortOpenCardPackModal_Legacy : public UFortActivatablePanel
{
public:
	class UCommonListView*                       CardPackList;                                      // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButtonLegacy*                   OpenAllButton;                                     // 0x570(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonLegacy*                   CancelButton;                                      // 0x578(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BPOnRequestOpenCardPack;                           // 0x580(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8554[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortOpenCardPackModal_Legacy");
		return Clss;
	}

};

// 0x140 (0x550 - 0x410)
// Class SaveTheWorldUI.StWHUD
class UStWHUD : public UFortUIStateWidgetBase
{
public:
	class UFortPickerData*                       PickerData;                                        // 0x410(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortRadialPicker>       EmotePickerClass;                                  // 0x418(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8558[0x8];                                     // Fixing Size After Last Property..
	TSoftClassPtr<class UCommonActivatableWidget> ManagementTabsScreenClass;                         // 0x448(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UTopBar_STW>             TopBarClass;                                       // 0x470(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortMissionActivationWidgetSTW> MissionActivationWidgetClass;                      // 0x498(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortResultsWidgetSTW>   PostGameScreenClass;                               // 0x4C0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSTWHUDMenuStackChanged;                          // 0x4E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        ReticleExtensionSize;                              // 0x4F8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8559[0x4];                                     // Fixing Size After Last Property..
	class UCommonActivatableWidget*              TitleBar;                                          // 0x500(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOverlay*                              IndicatorContent;                                  // 0x508(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivatableChatWidget*            ChatWidget_STW;                                    // 0x510(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortUINavigationManager*              NavigationManager;                                 // 0x518(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_855A[0x18];                                    // Fixing Size After Last Property..
	class UFortWeaponReticleExtensionWidgetBase* CurrentCustomReticleExtension;                     // 0x538(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortWeaponReticleExtensionWidgetBase*> RecentReticleExtensions;                           // 0x540(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StWHUD");
		return Clss;
	}

	void NativeHandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void HandlePickerOpenRequest(enum class EFortPickerMode Mode, int32 InitialOption, bool bIgnoreFirstAccept);
	void HandleCursorModeChanged(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget);
};

// 0x30 (0x428 - 0x3F8)
// Class SaveTheWorldUI.FortTheaterSelect
class UFortTheaterSelect : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_855C[0x10];                                    // Fixing Size After Last Property..
	class UOverlay*                              OverlayMain;                                       // 0x408(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_855D[0x10];                                    // Fixing Size After Last Property..
	class UFortQuestItemDefinition*              DefaultRequiredCompletedQuest;                     // 0x420(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortTheaterSelect");
		return Clss;
	}

	void OnNavigationRight();
	void OnNavigationLeft();
	bool GetTheaterRecommendedRatingRange(const class FString& UniqueId, int32* Minimum, int32* Maximum);
};

// 0x30 (0x560 - 0x530)
// Class SaveTheWorldUI.FortTheaterSelect_Legacy
class UFortTheaterSelect_Legacy : public UCommonActivatablePanelLegacy
{
public:
	uint8                                        Pad_855F[0x10];                                    // Fixing Size After Last Property..
	class UOverlay*                              OverlayMain;                                       // 0x540(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8560[0x10];                                    // Fixing Size After Last Property..
	class UFortQuestItemDefinition*              DefaultRequiredCompletedQuest;                     // 0x558(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortTheaterSelect_Legacy");
		return Clss;
	}

	void OnNavigationRight();
	void OnNavigationLeft();
	bool GetTheaterRecommendedRatingRange(const class FString& UniqueId, int32* Minimum, int32* Maximum);
};

// 0x20 (0x70 - 0x50)
// Class SaveTheWorldUI.FortHomebaseNodeItemTooltip
class UFortHomebaseNodeItemTooltip : public UFortItemTooltip
{
public:
	uint8                                        Pad_8561[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHomebaseNodeItemTooltip");
		return Clss;
	}

};

// 0x40 (0x310 - 0x2D0)
// Class SaveTheWorldUI.FortUpgradeDetailsBase
class UFortUpgradeDetailsBase : public UCommonUserWidget
{
public:
	class UMediaPlayer*                          VideoPlayer;                                       // 0x2D0(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortUpgradeInfo*                      UpgradeInfo;                                       // 0x2D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8562[0x30];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUpgradeDetailsBase");
		return Clss;
	}

	void RequestPurchaseNode();
	void OnUpgradeToDetailChanged();
	void OnShowIcon(class UTexture2D* Icon);
	void OnScreenActive();
	void OnPurchaseComplete();
};

// 0x88 (0xB0 - 0x28)
// Class SaveTheWorldUI.FortUpgradeInfo
class UFortUpgradeInfo : public UObject
{
public:
	uint8                                        Pad_8565[0x20];                                    // Fixing Size After Last Property..
	class UFortHomebaseNodeItemDefinition*       NodeItemDef;                                       // 0x48(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8566[0x60];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUpgradeInfo");
		return Clss;
	}

	bool IsUpgradeUnlocked();
	bool IsPreviewing();
	class UMediaSource* GetVideo();
	int32 GetUpgradeUnlockLevel();
	class FText GetTitle();
	class FText GetNextLevelTitle();
	class FText GetNextLevelDescription();
	int32 GetNextLevel();
	int32 GetMaxLevel();
	class FText GetItemName();
	TSoftObjectPtr<class UTexture2D> GetIcon(enum class EUpgradeInfoImageSize ImageSize);
	bool GetDisplayAttributes(TArray<struct FFortDisplayAttribute>* OutDisplayAttributes);
	class FText GetDescription();
	int32 GetCurrentLevel();
	int32 GetCost();
	void ForwardPreview();
	bool CanPreview();
	bool CanAffordUpgrade();
	void BackwardPreview();
};

// 0xC8 (0x5F8 - 0x530)
// Class SaveTheWorldUI.FortUpgradeScreenBase
class UFortUpgradeScreenBase : public UCommonActivatablePanelLegacy
{
public:
	class UFortTabListWidgetBase*                UpgradesTabSelector;                               // 0x530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTileView*                       UpgradesTileView;                                  // 0x538(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonLoadGuard*                      UpgradeTileViewLoadGuard;                          // 0x540(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortUpgradeDetailsBase*               Details;                                           // 0x548(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, enum class EHomebaseNodeType> TabToNodeTypeMap;                                  // 0x550(0x50)(Edit, Protected, NativeAccessSpecifierProtected)
	class UFortItemDefinition*                   UpgradesRespecToken;                               // 0x5A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8567[0x50];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUpgradeScreenBase");
		return Clss;
	}

	void UseUpgradesRespecToken();
	void TogglePreview();
	void RefreshFocus();
	void OnUseUpgradesRespecTokenComplete();
	void OnUpgradeInfoChanged();
	void OnPurchaseNodeComplete();
	bool IsPreviewing();
	void HandleTabSelected(class FName TabId);
	int32 GetUpgradesRespecTokenCount();
	bool CanPreview();
	bool AreUpgradesRespecTokensAvailable();
};

// 0xC8 (0x5F8 - 0x530)
// Class SaveTheWorldUI.FortUpgradeScreenBase_Legacy
class UFortUpgradeScreenBase_Legacy : public UCommonActivatablePanelLegacy
{
public:
	class UFortTabListWidgetBase_Legacy*         UpgradesTabSelector;                               // 0x530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTileView*                       UpgradesTileView;                                  // 0x538(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonLoadGuard*                      UpgradeTileViewLoadGuard;                          // 0x540(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortUpgradeDetailsBase*               Details;                                           // 0x548(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, enum class EHomebaseNodeType> TabToNodeTypeMap;                                  // 0x550(0x50)(Edit, Protected, NativeAccessSpecifierProtected)
	class UFortItemDefinition*                   UpgradesRespecToken;                               // 0x5A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8568[0x50];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUpgradeScreenBase_Legacy");
		return Clss;
	}

	void UseUpgradesRespecToken();
	void TogglePreview();
	void RefreshFocus();
	void OnUseUpgradesRespecTokenComplete();
	void OnUpgradeInfoChanged();
	void OnPurchaseNodeComplete();
	bool IsPreviewing();
	void HandleTabSelected(class FName TabId);
	int32 GetUpgradesRespecTokenCount();
	bool CanPreview();
	bool AreUpgradesRespecTokensAvailable();
};

// 0x10 (0x14D0 - 0x14C0)
// Class SaveTheWorldUI.FortUpgradeTileBase
class UFortUpgradeTileBase : public UCommonButtonLegacy
{
public:
	uint8                                        Pad_8569[0x8];                                     // Fixing Size After Last Property..
	class UFortUpgradeInfo*                      UpgradeInfo;                                       // 0x14C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUpgradeTileBase");
		return Clss;
	}

	void OnDataRefresh(bool bUpgrade);
};

// 0x10 (0x14D0 - 0x14C0)
// Class SaveTheWorldUI.FortUpgradeTileBase_Legacy
class UFortUpgradeTileBase_Legacy : public UCommonButtonLegacy
{
public:
	uint8                                        Pad_856A[0x8];                                     // Fixing Size After Last Property..
	class UFortUpgradeInfo*                      UpgradeInfo;                                       // 0x14C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortUpgradeTileBase_Legacy");
		return Clss;
	}

	void OnDataRefresh(bool bUpgrade);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
