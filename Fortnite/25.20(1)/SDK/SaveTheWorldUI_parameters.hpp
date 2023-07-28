#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapViewer.UpdateViewerData
struct UFortQuestMapViewer_UpdateViewerData_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function SaveTheWorldUI.FortQuestMapViewer.OnTryUpdateUserWidgetColor
struct UFortQuestMapViewer_OnTryUpdateUserWidgetColor_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           OverrideColor;                                     // 0x8(0x14)(Parm, NativeAccessSpecifierPublic)
	uint8                                        Pad_830B[0x4];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapViewer.OnPlayLayoutOutroAnimation
struct UFortQuestMapViewer_OnPlayLayoutOutroAnimation_Params
{
public:
	enum class EViewerNavigationDirection        TravelDirection;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapViewer.OnPlayLayoutFadeInAnimation
struct UFortQuestMapViewer_OnPlayLayoutFadeInAnimation_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapViewer.HandleLayoutOutroAnimationFinished
struct UFortQuestMapViewer_HandleLayoutOutroAnimationFinished_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortArmoryScreen.PushItemManagementScreen
struct UFortArmoryScreen_PushItemManagementScreen_Params
{
public:
	enum class EFortFrontendInventoryFilter      ItemManagementFilter;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_830E[0x7];                                     // Fixing Size After Last Property..
	class UFortItem*                             ItemToSelect;                                      // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowAutoMulch;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_830F[0x7];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// Function SaveTheWorldUI.FortArmoryScreen.PushItemInspectionScreen
struct UFortArmoryScreen_PushItemInspectionScreen_Params
{
public:
	class UFortItem*                             ItemToInspect;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemInspectionMode           Mode;                                              // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8310[0x7];                                     // Fixing Size After Last Property..
	class UFortItemTileView*                     CycleTileView;                                     // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReadOnly;                                         // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowFavoriting;                                  // 0x19(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTemporaryItem;                                  // 0x1A(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowRarityUpgrading;                             // 0x1B(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8311[0x4];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortArmoryScreen.PushHeroLoadoutScreen
struct UFortArmoryScreen_PushHeroLoadoutScreen_Params
{
public:
	class UFortCampaignHeroLoadoutItem*          HeroLoadout;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SaveTheWorldUI.FortCommandScreen.PushItemInspectionScreen
struct UFortCommandScreen_PushItemInspectionScreen_Params
{
public:
	class UFortItem*                             ItemToInspect;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemInspectionMode           Mode;                                              // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8312[0x7];                                     // Fixing Size After Last Property..
	class UFortItemTileView*                     CycleTileView;                                     // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReadOnly;                                         // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowFavoriting;                                  // 0x19(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTemporaryItem;                                  // 0x1A(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowRarityUpgrading;                             // 0x1B(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8313[0x4];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortCommandScreen.PushHeroLoadoutScreen
struct UFortCommandScreen_PushHeroLoadoutScreen_Params
{
public:
	class UFortCampaignHeroLoadoutItem*          HeroLoadout;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortCommandScreen.HandleUpgradeInspectHero
struct UFortCommandScreen_HandleUpgradeInspectHero_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortCommandScreen.HandleShowAllStats
struct UFortCommandScreen_HandleShowAllStats_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookGenericRewardWidget.SetRewardStatus
struct UFortCollectionBookGenericRewardWidget_SetRewardStatus_Params
{
public:
	enum class ECollectionBookRewardStatus       Status;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookGenericRewardWidget.SetRewards
struct UFortCollectionBookGenericRewardWidget_SetRewards_Params
{
public:
	struct FFortRewardInfo                       Rewards;                                           // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookGenericRewardWidget.SetCurrentItemToDisplay
struct UFortCollectionBookGenericRewardWidget_SetCurrentItemToDisplay_Params
{
public:
	class UFortItem*                             ItemToDisplay;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookGenericRewardWidget.OnRewardStatusChanged
struct UFortCollectionBookGenericRewardWidget_OnRewardStatusChanged_Params
{
public:
	enum class ECollectionBookRewardStatus       NewStatus;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookGenericRewardWidget.HasRewards
struct UFortCollectionBookGenericRewardWidget_HasRewards_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookGenericRewardWidget.GetRewardStatus
struct UFortCollectionBookGenericRewardWidget_GetRewardStatus_Params
{
public:
	enum class ECollectionBookRewardStatus       ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookGenericRewardWidget.ClearRewards
struct UFortCollectionBookGenericRewardWidget_ClearRewards_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookItemPopupMenu.HandleItemUpdated
struct UFortCollectionBookItemPopupMenu_HandleItemUpdated_Params
{
public:
};

// 0x3 (0x3 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookItemPopupMenu.HandleItemChanged
struct UFortCollectionBookItemPopupMenu_HandleItemChanged_Params
{
public:
	bool                                         bItemChanged;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAmmoChanged;                                      // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIngredientsChanged;                               // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookItemPopupMenu.GetHostButton
struct UFortCollectionBookItemPopupMenu_GetHostButton_Params
{
public:
	class UFortCollectionBookSlotButton*         ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookItemPopupMenu.CanItemBeUnslotted
struct UFortCollectionBookItemPopupMenu_CanItemBeUnslotted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookItemPopupMenu.CanItemBePurchased
struct UFortCollectionBookItemPopupMenu_CanItemBePurchased_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookOverviewWidget.OnDeactivated
struct UFortCollectionBookOverviewWidget_OnDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookOverviewWidget.OnActivated
struct UFortCollectionBookOverviewWidget_OnActivated_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookOverviewWidget.HandlePagesChanged
struct UFortCollectionBookOverviewWidget_HandlePagesChanged_Params
{
public:
	class UFortCollectionBookManager*            CBManager;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookPageDetailsWidget.OnUnslotItemComplete
struct UFortCollectionBookPageDetailsWidget_OnUnslotItemComplete_Params
{
public:
	class UFortAccountItem*                      SlottedItem;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAccountItem*                      OldItem;                                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotId;                                            // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8319[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookPageDetailsWidget.OnSlotItemComplete
struct UFortCollectionBookPageDetailsWidget_OnSlotItemComplete_Params
{
public:
	class UFortAccountItem*                      SlottedItem;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotId;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_831A[0x4];                                     // Fixing Size Of Struct..
};

// 0xC (0xC - 0x0)
// Function SaveTheWorldUI.FortCollectionBookPageDetailsWidget.OnPageProgressionUpdated
struct UFortCollectionBookPageDetailsWidget_OnPageProgressionUpdated_Params
{
public:
	int32                                        TotalFilledSlots;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalSlots;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortCollectionBookState          State;                                             // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_831B[0x3];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookPageDetailsWidget.OnDetailsPageChanged
struct UFortCollectionBookPageDetailsWidget_OnDetailsPageChanged_Params
{
public:
	class UFortCollectionBookPage*               InNewDetailsPage;                                  // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookPageDetailsWidget.HandleRewardDetailsModalWidgetDeactivated
struct UFortCollectionBookPageDetailsWidget_HandleRewardDetailsModalWidgetDeactivated_Params
{
public:
	class UCommonActivatablePanelLegacy*         DeactivatedPanel;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookPageListWidget.SetupAsPage
struct UFortCollectionBookPageListWidget_SetupAsPage_Params
{
public:
	class UFortCollectionBookPage*               Page;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookPageListWidget.SetupAsCategory
struct UFortCollectionBookPageListWidget_SetupAsCategory_Params
{
public:
	class UFortCollectionBookCategory*           Category;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookPageListWidget.OnSlottedItemOperationComplete
struct UFortCollectionBookPageListWidget_OnSlottedItemOperationComplete_Params
{
public:
	class UFortAccountItem*                      SlottedItem;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotId;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_831C[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookPageListWidget.OnPageDetailsUpdated
struct UFortCollectionBookPageListWidget_OnPageDetailsUpdated_Params
{
public:
	int32                                        AvailableSlots;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FilledSlots;                                       // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalSlots;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortCollectionBookState          State;                                             // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_831D[0x3];                                     // Fixing Size Of Struct..
};

// 0xC (0xC - 0x0)
// Function SaveTheWorldUI.FortCollectionBookPageListWidget.OnCategoryDetailsUpdated
struct UFortCollectionBookPageListWidget_OnCategoryDetailsUpdated_Params
{
public:
	int32                                        AvailableSlots;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FilledSlots;                                       // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalSlots;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookPicker.ShowMulchDialogForItem
struct UFortCollectionBookPicker_ShowMulchDialogForItem_Params
{
public:
	class UFortItem*                             ItemToMulch;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookPicker.ShowMulchConfirmationModal
struct UFortCollectionBookPicker_ShowMulchConfirmationModal_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookPicker.OnCollectComplete
struct UFortCollectionBookPicker_OnCollectComplete_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookPicker.NotifyPanelDeactivated
struct UFortCollectionBookPicker_NotifyPanelDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookPicker.NotifyPanelActivated
struct UFortCollectionBookPicker_NotifyPanelActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookPicker.HideMulchConfirmationModal
struct UFortCollectionBookPicker_HideMulchConfirmationModal_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnSummonInfoPanelExecuted
struct UFortCollectionBookPrimaryPanel_OnSummonInfoPanelExecuted_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnInputMethodChanged
struct UFortCollectionBookPrimaryPanel_OnInputMethodChanged_Params
{
public:
	enum class ECommonInputType                  CurrentInputType;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnCollectionBookSectionClicked
struct UFortCollectionBookPrimaryPanel_OnCollectionBookSectionClicked_Params
{
public:
	class UFortCollectionBookSection*            ClickedSection;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnCollectionBookPageSelected
struct UFortCollectionBookPrimaryPanel_OnCollectionBookPageSelected_Params
{
public:
	class UFortCollectionBookPage*               SelectedPage;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnCollectionBookPageClicked
struct UFortCollectionBookPrimaryPanel_OnCollectionBookPageClicked_Params
{
public:
	class UFortCollectionBookPage*               ClickedPage;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnBackActionExecuted
struct UFortCollectionBookPrimaryPanel_OnBackActionExecuted_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy.OnSummonInfoPanelExecuted
struct UFortCollectionBookPrimaryPanel_Legacy_OnSummonInfoPanelExecuted_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy.OnInputMethodChanged
struct UFortCollectionBookPrimaryPanel_Legacy_OnInputMethodChanged_Params
{
public:
	enum class ECommonInputType                  CurrentInputType;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy.OnCollectionBookSectionClicked
struct UFortCollectionBookPrimaryPanel_Legacy_OnCollectionBookSectionClicked_Params
{
public:
	class UFortCollectionBookSection*            ClickedSection;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy.OnCollectionBookPageSelected
struct UFortCollectionBookPrimaryPanel_Legacy_OnCollectionBookPageSelected_Params
{
public:
	class UFortCollectionBookPage*               SelectedPage;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy.OnCollectionBookPageClicked
struct UFortCollectionBookPrimaryPanel_Legacy_OnCollectionBookPageClicked_Params
{
public:
	class UFortCollectionBookPage*               ClickedPage;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy.OnBackActionExecuted
struct UFortCollectionBookPrimaryPanel_Legacy_OnBackActionExecuted_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget.SetAssociatedLevel
struct UFortCollectionBookProgressionRewardDetailInspectWidget_SetAssociatedLevel_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget.OnXPRequiredChanged
struct UFortCollectionBookProgressionRewardDetailInspectWidget_OnXPRequiredChanged_Params
{
public:
	int32                                        NewXPRequired;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget.GetXPRequired
struct UFortCollectionBookProgressionRewardDetailInspectWidget_GetXPRequired_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget.OnSelectedButtonChanged
struct UFortCollectionBookProgressionRewardsModalWidget_OnSelectedButtonChanged_Params
{
public:
	class UCommonButtonLegacy*                   SelectedButton;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ButtonIndex;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8327[0x4];                                     // Fixing Size Of Struct..
};

// 0xC (0xC - 0x0)
// Function SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget.OnLevelProgressionSet
struct UFortCollectionBookProgressionRewardsModalWidget_OnLevelProgressionSet_Params
{
public:
	int32                                        CurrentLevel;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NextLvlPct;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxAchievedLevel;                                  // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget.InspectItemBP
struct UFortCollectionBookProgressionRewardsModalWidget_InspectItemBP_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookProgressionRewardWidget.SetAssociatedLevel
struct UFortCollectionBookProgressionRewardWidget_SetAssociatedLevel_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookProgressWidget.OnSlottedItemOperationComplete
struct UFortCollectionBookProgressWidget_OnSlottedItemOperationComplete_Params
{
public:
	class UFortAccountItem*                      ItemSlotted;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotId;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8329[0x4];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookProgressWidget.OnInventoryUpdated
struct UFortCollectionBookProgressWidget_OnInventoryUpdated_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookProgressWidget.OnCollectionBookPreviewXPChange
struct UFortCollectionBookProgressWidget_OnCollectionBookPreviewXPChange_Params
{
public:
	float                                        PreviewCompletionPct;                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookProgressWidget.OnCollectionBookPageSelected
struct UFortCollectionBookProgressWidget_OnCollectionBookPageSelected_Params
{
public:
	class UFortCollectionBookPage*               SelectedPage;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookProgressWidget.OnCollectionBookLevelProgressionChanged
struct UFortCollectionBookProgressWidget_OnCollectionBookLevelProgressionChanged_Params
{
public:
	float                                        NewCompletionPct;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookProgressWidget.OnCollectionBookLevelChanged
struct UFortCollectionBookProgressWidget_OnCollectionBookLevelChanged_Params
{
public:
	int32                                        NewLevel;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookProgressWidget.HandleDetailsModalWidgetDeactivated
struct UFortCollectionBookProgressWidget_HandleDetailsModalWidgetDeactivated_Params
{
public:
	class UCommonActivatablePanelLegacy*         DeactivatedPanel;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookRecycleSlotResultsWidget.SetCurrentItemToRecycle
struct UFortCollectionBookRecycleSlotResultsWidget_SetCurrentItemToRecycle_Params
{
public:
	class UFortAccountItem*                      InItemToRecycle;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookRewardCardWidget.SetRewards
struct UFortCollectionBookRewardCardWidget_SetRewards_Params
{
public:
	struct FFortRewardInfo                       Rewards;                                           // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction SaveTheWorldUI.FortCollectionBookRewardCardWidget.OnDisplayedItemChangedEvent__DelegateSignature
struct UFortCollectionBookRewardCardWidget_OnDisplayedItemChangedEvent__DelegateSignature_Params
{
public:
	class UFortItem*                             DisplayedItem;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookRewardCardWidget.HasRewards
struct UFortCollectionBookRewardCardWidget_HasRewards_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookRewardCardWidget.ClearRewards
struct UFortCollectionBookRewardCardWidget_ClearRewards_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSectionCompletionRewardWidget.HandleRewardDetailsModalWidgetDeactivated
struct UFortCollectionBookSectionCompletionRewardWidget_HandleRewardDetailsModalWidgetDeactivated_Params
{
public:
	class UCommonActivatablePanelLegacy*         DeactivatedPanel;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnUnslotItemOperationComplete
struct UFortCollectionBookSectionPanel_OnUnslotItemOperationComplete_Params
{
public:
	class UFortAccountItem*                      UnslottedItem;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAccountItem*                      OldSlottedItem;                                    // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotId;                                            // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_832E[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnUnslotItemComplete
struct UFortCollectionBookSectionPanel_OnUnslotItemComplete_Params
{
public:
	class UFortItem*                             UnslottedItem;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotId;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_832F[0x4];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnUnslotItemActionExecuted
struct UFortCollectionBookSectionPanel_OnUnslotItemActionExecuted_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlottedItemOperationComplete
struct UFortCollectionBookSectionPanel_OnSlottedItemOperationComplete_Params
{
public:
	class UFortAccountItem*                      SlottedItem;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotId;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8330[0x4];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlotItemActionExecuted
struct UFortCollectionBookSectionPanel_OnSlotItemActionExecuted_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlotButtonSelected
struct UFortCollectionBookSectionPanel_OnSlotButtonSelected_Params
{
public:
	class UFortCollectionBookSlotButton*         SlotButton;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlotButtonHovered
struct UFortCollectionBookSectionPanel_OnSlotButtonHovered_Params
{
public:
	int32                                        ButtonIx;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlotButtonContextAction
struct UFortCollectionBookSectionPanel_OnSlotButtonContextAction_Params
{
public:
	enum class EFortCollectionBookPopupButtonType ContextAction;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnSectionChanged
struct UFortCollectionBookSectionPanel_OnSectionChanged_Params
{
public:
	class UFortCollectionBookSection*            Section;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnResearchItemOperationComplete
struct UFortCollectionBookSectionPanel_OnResearchItemOperationComplete_Params
{
public:
	class UFortAccountItem*                      NewItem;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TemplateId;                                        // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// DelegateFunction SaveTheWorldUI.FortCollectionBookSectionPanel.OnResearchItemAction__DelegateSignature
struct UFortCollectionBookSectionPanel_OnResearchItemAction__DelegateSignature_Params
{
public:
	class UFortItem*                             SelectedItem;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortCollectionBookSlotData           SlotData;                                          // 0x8(0x48)(ConstParm, Parm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnPurchaseItemActionExecuted
struct UFortCollectionBookSectionPanel_OnPurchaseItemActionExecuted_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnOpenPickerActionExecuted
struct UFortCollectionBookSectionPanel_OnOpenPickerActionExecuted_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnLogAllowedItemsActionExecuted
struct UFortCollectionBookSectionPanel_OnLogAllowedItemsActionExecuted_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction SaveTheWorldUI.FortCollectionBookSectionPanel.OnItemInspectAction__DelegateSignature
struct UFortCollectionBookSectionPanel_OnItemInspectAction__DelegateSignature_Params
{
public:
	class UFortItem*                             SelectedItem;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableItemActions;                                 // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsPlaceholderItem;                                 // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8331[0x6];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// DelegateFunction SaveTheWorldUI.FortCollectionBookSectionPanel.OnItemAction__DelegateSignature
struct UFortCollectionBookSectionPanel_OnItemAction__DelegateSignature_Params
{
public:
	class UFortItem*                             SelectedItem;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnInspectActionExecuted
struct UFortCollectionBookSectionPanel_OnInspectActionExecuted_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnBackActionExecuted
struct UFortCollectionBookSectionPanel_OnBackActionExecuted_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSectionTileWidget.OnSectionSlotUpdate
struct UFortCollectionBookSectionTileWidget_OnSectionSlotUpdate_Params
{
public:
	int32                                        NumFilledSlots;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumSlots;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortCollectionBookState          SectionState;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8335[0x3];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSectionTileWidget.OnItemUnslotted
struct UFortCollectionBookSectionTileWidget_OnItemUnslotted_Params
{
public:
	class UFortAccountItem*                      ItemUnslotted;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAccountItem*                      OldSlottedItem;                                    // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotId;                                            // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8336[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSectionTileWidget.OnItemSlotted
struct UFortCollectionBookSectionTileWidget_OnItemSlotted_Params
{
public:
	class UFortAccountItem*                      ItemSlotted;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotId;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8337[0x4];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSlotButton.PopupMenuClosedWithAction
struct UFortCollectionBookSlotButton_PopupMenuClosedWithAction_Params
{
public:
	enum class EFortCollectionBookPopupButtonType Selection;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSlotButton.OnSlottedItemUpdated
struct UFortCollectionBookSlotButton_OnSlottedItemUpdated_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSlotButton.GetPopupMenu
struct UFortCollectionBookSlotButton_GetPopupMenu_Params
{
public:
	class UUserWidget*                           ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSlotConfirmationModal.OnSlotItemRequestedComplete
struct UFortCollectionBookSlotConfirmationModal_OnSlotItemRequestedComplete_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSlotConfirmationModal.OnSlotItemRequested
struct UFortCollectionBookSlotConfirmationModal_OnSlotItemRequested_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSlotConfirmationModal.HandleSlotItemComplete
struct UFortCollectionBookSlotConfirmationModal_HandleSlotItemComplete_Params
{
public:
	class UFortAccountItem*                      SlottedItem;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotId;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_833C[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSlotView.OnSlotButtonHovered
struct UFortCollectionBookSlotView_OnSlotButtonHovered_Params
{
public:
	class UCommonButtonLegacy*                   HoveredButton;                                     // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ButtonIdx;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_833F[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSlotView.OnSlotButtonClicked
struct UFortCollectionBookSlotView_OnSlotButtonClicked_Params
{
public:
	class UCommonButtonLegacy*                   ClickedButton;                                     // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ButtonIdx;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8340[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSlotView.OnSelectedSlotButtonChanged
struct UFortCollectionBookSlotView_OnSelectedSlotButtonChanged_Params
{
public:
	class UCommonButtonLegacy*                   SelectedButton;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ButtonIdx;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8341[0x4];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSlotWidget.OnItemDestroyed
struct UFortCollectionBookSlotWidget_OnItemDestroyed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSlotWidget.OnItemCardUpdated
struct UFortCollectionBookSlotWidget_OnItemCardUpdated_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSlotWidget.IsItemSlotted
struct UFortCollectionBookSlotWidget_IsItemSlotted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSlotWidget.HasItemsToSlot
struct UFortCollectionBookSlotWidget_HasItemsToSlot_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSlotWidget.HandleUnslotItemComplete
struct UFortCollectionBookSlotWidget_HandleUnslotItemComplete_Params
{
public:
	class UFortAccountItem*                      UnslottedItem;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAccountItem*                      OldItem;                                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotId;                                            // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8344[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSlotWidget.HandleSlottedItemOperationComplete
struct UFortCollectionBookSlotWidget_HandleSlottedItemOperationComplete_Params
{
public:
	class UFortAccountItem*                      NewItem;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TemplateId;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8345[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSlotWidget.HandleResearchItemComplete
struct UFortCollectionBookSlotWidget_HandleResearchItemComplete_Params
{
public:
	class UFortAccountItem*                      ResearchedItem;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SlotId;                                            // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSlotWidget.GetSlottedItemRepresentation
struct UFortCollectionBookSlotWidget_GetSlottedItemRepresentation_Params
{
public:
	class UFortItem*                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSlotWidget.GetSlotRowName
struct UFortCollectionBookSlotWidget_GetSlotRowName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookSlotWidget.GetNumItemsToSlot
struct UFortCollectionBookSlotWidget_GetNumItemsToSlot_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// DelegateFunction SaveTheWorldUI.FortCollectionBookSlotWidget.FortCollectionBookSlottedItemUpdatedDelegate__DelegateSignature
struct UFortCollectionBookSlotWidget_FortCollectionBookSlottedItemUpdatedDelegate__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookWidget.RequestToClose
struct UFortCollectionBookWidget_RequestToClose_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookWidget.OnPreviewXPChangeRequest
struct UFortCollectionBookWidget_OnPreviewXPChangeRequest_Params
{
public:
	int32                                        XPChange;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookWidget.OnCollectionBookSectionCloseRequest
struct UFortCollectionBookWidget_OnCollectionBookSectionCloseRequest_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookWidget.OnCollectionBookSectionClicked
struct UFortCollectionBookWidget_OnCollectionBookSectionClicked_Params
{
public:
	class UFortCollectionBookSection*            ClickedSection;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookWidget.OnCollectionBookPageSelected
struct UFortCollectionBookWidget_OnCollectionBookPageSelected_Params
{
public:
	class UFortCollectionBookPage*               SelectedPage;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookWidget.OnCollectionBookPageClicked
struct UFortCollectionBookWidget_OnCollectionBookPageClicked_Params
{
public:
	class UFortCollectionBookPage*               ClickedPage;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookWidget_Legacy.RequestToClose
struct UFortCollectionBookWidget_Legacy_RequestToClose_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookWidget_Legacy.OnPreviewXPChangeRequest
struct UFortCollectionBookWidget_Legacy_OnPreviewXPChangeRequest_Params
{
public:
	int32                                        XPChange;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookWidget_Legacy.OnCollectionBookSectionCloseRequest
struct UFortCollectionBookWidget_Legacy_OnCollectionBookSectionCloseRequest_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookWidget_Legacy.OnCollectionBookSectionClicked
struct UFortCollectionBookWidget_Legacy_OnCollectionBookSectionClicked_Params
{
public:
	class UFortCollectionBookSection*            ClickedSection;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookWidget_Legacy.OnCollectionBookPageSelected
struct UFortCollectionBookWidget_Legacy_OnCollectionBookPageSelected_Params
{
public:
	class UFortCollectionBookPage*               SelectedPage;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortCollectionBookWidget_Legacy.OnCollectionBookPageClicked
struct UFortCollectionBookWidget_Legacy_OnCollectionBookPageClicked_Params
{
public:
	class UFortCollectionBookPage*               ClickedPage;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortAbilitySystemContext.RemoveDelegatesFromWidget
struct UFortAbilitySystemContext_RemoveDelegatesFromWidget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function SaveTheWorldUI.FortAbilitySystemContext.RegisterForAttributeChanged
struct UFortAbilitySystemContext_RegisterForAttributeChanged_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*               ASC;                                               // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    Attribute;                                         // 0x10(0x38)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Callback;                                          // 0x48(0xC)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_834C[0x4];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortAbilitySystemContext.HasMatchingGameplayTag
struct UFortAbilitySystemContext_HasMatchingGameplayTag_Params
{
public:
	struct FGameplayTag                          TagToCheck;                                        // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_834D[0x3];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase.OnDisplayToast
struct UFortDirectAcquisitionWidgetBase_OnDisplayToast_Params
{
public:
	bool                                         bDisplayToast;                                     // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase.IsTabsLayout
struct UFortDirectAcquisitionWidgetBase_IsTabsLayout_Params
{
public:
	bool                                         bShouldDisplayTabs;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase.HandleAffiliateButtonClicked
struct UFortDirectAcquisitionWidgetBase_HandleAffiliateButtonClicked_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase.GetWeeklyStoreEndDate
struct UFortDirectAcquisitionWidgetBase_GetWeeklyStoreEndDate_Params
{
public:
	struct FDateTime                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase.GetStoreCurrencies
struct UFortDirectAcquisitionWidgetBase_GetStoreCurrencies_Params
{
public:
	TArray<class UFortAccountItemDefinition*>    ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase.GetSeasonStoreEndDate
struct UFortDirectAcquisitionWidgetBase_GetSeasonStoreEndDate_Params
{
public:
	struct FDateTime                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase.GetDailyStoreEndDate
struct UFortDirectAcquisitionWidgetBase_GetDailyStoreEndDate_Params
{
public:
	struct FDateTime                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.OnDisplayToast
struct UFortDirectAcquisitionWidgetBase_Legacy_OnDisplayToast_Params
{
public:
	bool                                         bDisplayToast;                                     // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.IsTabsLayout
struct UFortDirectAcquisitionWidgetBase_Legacy_IsTabsLayout_Params
{
public:
	bool                                         bShouldDisplayTabs;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.HandleAffiliateButtonClicked
struct UFortDirectAcquisitionWidgetBase_Legacy_HandleAffiliateButtonClicked_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.GetWeeklyStoreEndDate
struct UFortDirectAcquisitionWidgetBase_Legacy_GetWeeklyStoreEndDate_Params
{
public:
	struct FDateTime                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.GetStoreCurrencies
struct UFortDirectAcquisitionWidgetBase_Legacy_GetStoreCurrencies_Params
{
public:
	TArray<class UFortAccountItemDefinition*>    ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.GetSeasonStoreEndDate
struct UFortDirectAcquisitionWidgetBase_Legacy_GetSeasonStoreEndDate_Params
{
public:
	struct FDateTime                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.GetDailyStoreEndDate
struct UFortDirectAcquisitionWidgetBase_Legacy_GetDailyStoreEndDate_Params
{
public:
	struct FDateTime                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortExpeditionBuildSquadWidget.SetData
struct UFortExpeditionBuildSquadWidget_SetData_Params
{
public:
	class UFortExpeditionItem*                   InItem;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortExpeditionBuildSquadWidget.SetCurrentSquadId
struct UFortExpeditionBuildSquadWidget_SetCurrentSquadId_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortExpeditionBuildSquadWidget.OnRequestClosePicker
struct UFortExpeditionBuildSquadWidget_OnRequestClosePicker_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortExpeditionBuildSquadWidget.OnRefreshBuildSquadWidget
struct UFortExpeditionBuildSquadWidget_OnRefreshBuildSquadWidget_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortExpeditionBuildSquadWidget.IsSquadSlotLocked
struct UFortExpeditionBuildSquadWidget_IsSquadSlotLocked_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8355[0x3];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortExpeditionBuildSquadWidget.IsExpeditionValidToStart
struct UFortExpeditionBuildSquadWidget_IsExpeditionValidToStart_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortExpeditionBuildSquadWidget.HandleRequestStartExpedition
struct UFortExpeditionBuildSquadWidget_HandleRequestStartExpedition_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortExpeditionBuildSquadWidget.HandleDifferentSquadSlotSelected
struct UFortExpeditionBuildSquadWidget_HandleDifferentSquadSlotSelected_Params
{
public:
	int32                                        SquadSlotIndex;                                    // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortExpeditionBuildSquadWidget.ClearTemporaryExpeditionSquadState
struct UFortExpeditionBuildSquadWidget_ClearTemporaryExpeditionSquadState_Params
{
public:
	bool                                         bPreviewOnly;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortExpeditionDetailsWidget.SetData
struct UFortExpeditionDetailsWidget_SetData_Params
{
public:
	class UFortExpeditionItem*                   InItem;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortExpeditionDetailsWidget.SetCurrentSquadId
struct UFortExpeditionDetailsWidget_SetCurrentSquadId_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortExpeditionDetailsWidget.RequestAbandonExpedition
struct UFortExpeditionDetailsWidget_RequestAbandonExpedition_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortExpeditionDetailsWidget.HandleAbandonExpeditionCompleted
struct UFortExpeditionDetailsWidget_HandleAbandonExpeditionCompleted_Params
{
public:
	class UFortExpeditionItem*                   Expedition;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuccess;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8358[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortExpeditionExpiresWidget.SetData
struct UFortExpeditionExpiresWidget_SetData_Params
{
public:
	class UFortExpeditionItem*                   InItem;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortExpeditionExpiresWidget.OnExpeditionExpirationUpdated
struct UFortExpeditionExpiresWidget_OnExpeditionExpirationUpdated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortExpeditionListItemWidget.OnItemChanged
struct UFortExpeditionListItemWidget_OnItemChanged_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortExpeditionListViewWidget.SetExpeditionListSortType
struct UFortExpeditionListViewWidget_SetExpeditionListSortType_Params
{
public:
	enum class EFortExpeditionListSort           InSortType;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortExpeditionListViewWidget.GetExpeditionListSortName
struct UFortExpeditionListViewWidget_GetExpeditionListSortName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortExpeditionOverviewWidget.UpdateExpeditionTabs
struct UFortExpeditionOverviewWidget_UpdateExpeditionTabs_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortExpeditionOverviewWidget.OnExpeditionTabSelected
struct UFortExpeditionOverviewWidget_OnExpeditionTabSelected_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortExpeditionOverviewWidget.OnExpeditionOverviewRefresh
struct UFortExpeditionOverviewWidget_OnExpeditionOverviewRefresh_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortExpeditionOverviewWidget.HandleExpeditionTabSelected
struct UFortExpeditionOverviewWidget_HandleExpeditionTabSelected_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortExpeditionOverviewWidget.HandleExpeditionTabButtonCreated
struct UFortExpeditionOverviewWidget_HandleExpeditionTabButtonCreated_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8360[0x4];                                     // Fixing Size After Last Property..
	class UCommonButtonBase*                     TabButton;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortExpeditionPickVehicleWidget.SetData
struct UFortExpeditionPickVehicleWidget_SetData_Params
{
public:
	class UFortExpeditionItem*                   InItem;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortExpeditionReturnsWidget.SetData
struct UFortExpeditionReturnsWidget_SetData_Params
{
public:
	class UFortExpeditionItem*                   InItem;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortExpeditionReturnsWidget.OnExpeditionInProgressUpdated
struct UFortExpeditionReturnsWidget_OnExpeditionInProgressUpdated_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function SaveTheWorldUI.FortExpeditionRewardsWidget.RefreshRewardsUI
struct UFortExpeditionRewardsWidget_RefreshRewardsUI_Params
{
public:
	class UFortExpeditionItem*                   Expedition;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExpeditionSucceeded;                              // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8362[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FFortItemInstanceQuantityPair> Rewards;                                           // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortExpeditionRewardsWidget.ProcessNextReward
struct UFortExpeditionRewardsWidget_ProcessNextReward_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function SaveTheWorldUI.FortExpeditionRewardsWidget.HandleCollectionExpeditionCompleted
struct UFortExpeditionRewardsWidget_HandleCollectionExpeditionCompleted_Params
{
public:
	bool                                         bMcpSuccess;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8363[0x7];                                     // Fixing Size After Last Property..
	class UFortExpeditionItem*                   Expedition;                                        // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExpeditionSuccess;                                // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8364[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FFortItemInstanceQuantityPair> Rewards;                                           // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortExpeditionSummaryWidget.UnbindInventoryDelegates
struct UFortExpeditionSummaryWidget_UnbindInventoryDelegates_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortExpeditionSummaryWidget.OnRefreshSummaryWidget
struct UFortExpeditionSummaryWidget_OnRefreshSummaryWidget_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortExpeditionSummaryWidget.BindInventoryDelegates
struct UFortExpeditionSummaryWidget_BindInventoryDelegates_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortExpeditionUtilities.TotalUnseenExpeditionsForTab
struct UFortExpeditionUtilities_TotalUnseenExpeditionsForTab_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TabNameID;                                         // 0x8(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortExpeditionUtilities.IsSquadOnExpedition
struct UFortExpeditionUtilities_IsSquadOnExpedition_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SquadId;                                           // 0x8(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8367[0x3];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortExpeditionUtilities.GetVehicleTagRequiredForExpedition
struct UFortExpeditionUtilities_GetVehicleTagRequiredForExpedition_Params
{
public:
	class UFortExpeditionItem*                   Expedition;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8368[0x4];                                     // Fixing Size Of Struct..
};

// 0xC (0xC - 0x0)
// Function SaveTheWorldUI.FortExpeditionUtilities.GetVehicleTagFromSquadId
struct UFortExpeditionUtilities_GetVehicleTagFromSquadId_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          OutFoundVehicleTag;                                // 0x4(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8369[0x3];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// Function SaveTheWorldUI.FortExpeditionUtilities.GetTotalExpeditionVehiclesAvailable
struct UFortExpeditionUtilities_GetTotalExpeditionVehiclesAvailable_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPlayerController*                 FortPC;                                            // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutLandVehicles;                                   // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutLandVehiclesAvailable;                          // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutSeaVehicles;                                    // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutSeaVehiclesAvailable;                           // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutAirVehicles;                                    // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutAirVehiclesAvailable;                           // 0x24(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SaveTheWorldUI.FortExpeditionUtilities.GetMatchedCriteriaTags
struct UFortExpeditionUtilities_GetMatchedCriteriaTags_Params
{
public:
	class UFortExpeditionItem*                   Expedition;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortItem*>                     SlottedItems;                                      // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTag>                  OutMatchedCriteria;                                // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function SaveTheWorldUI.FortExpeditionUtilities.GetExpeditionSquadsThatMatchRequirements
struct UFortExpeditionUtilities_GetExpeditionSquadsThatMatchRequirements_Params
{
public:
	struct FGameplayTagContainer                 RequirementTags;                                   // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UFortPlayerController*                 FortPC;                                            // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          OutExpeditionSquadIds;                             // 0x28(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_836A[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortExpeditionUtilities.GetExpeditionSquadPower
struct UFortExpeditionUtilities_GetExpeditionSquadPower_Params
{
public:
	class UFortPlayerController*                 FortPC;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SquadId;                                           // 0x8(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortExpeditionUtilities.GetAllExpeditionSquadIds
struct UFortExpeditionUtilities_GetAllExpeditionSquadIds_Params
{
public:
	TArray<class FName>                          OutExpeditionSquadIds;                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SaveTheWorldUI.FortExpeditionUtilities.CalculateTotalPower
struct UFortExpeditionUtilities_CalculateTotalPower_Params
{
public:
	class UFortPlayerController*                 FortPC;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortExpeditionItem*                   Expedition;                                        // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SquadId;                                           // 0x10(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_836B[0x4];                                     // Fixing Size After Last Property..
	TArray<class UFortItem*>                     SlottedItems;                                      // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x28(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_836C[0x4];                                     // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// Function SaveTheWorldUI.FortExpeditionUtilities.CalculateGlobalAndItemRatingModValuesBP
struct UFortExpeditionUtilities_CalculateGlobalAndItemRatingModValuesBP_Params
{
public:
	class UFortExpeditionItem*                   Expedition;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortItem*>                     SlottedItems;                                      // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        GlobalPowerMod;                                    // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_836D[0x4];                                     // Fixing Size After Last Property..
	TArray<float>                                SlottedItemMods;                                   // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortExpeditionUtilities.CalculateExpeditionPercentageChanceForSuccess
struct UFortExpeditionUtilities_CalculateExpeditionPercentageChanceForSuccess_Params
{
public:
	class UFortExpeditionItem*                   Expedition;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TotalPower;                                        // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function SaveTheWorldUI.FortExpeditionUtilities.AreExpeditionsUnlocked
struct UFortExpeditionUtilities_AreExpeditionsUnlocked_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UniqueId;                                          // 0x8(0x30)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_836E[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortExpeditionUtilities.AreAnyExpeditionsComplete
struct UFortExpeditionUtilities_AreAnyExpeditionsComplete_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_836F[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortFeatureUnlockWidget.SetData
struct UFortFeatureUnlockWidget_SetData_Params
{
public:
	class FString                                ItemTemplateID;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortFeatureUnlockWidget.RefreshDataBP
struct UFortFeatureUnlockWidget_RefreshDataBP_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortFeatureUnlockWidget.GetVideo
struct UFortFeatureUnlockWidget_GetVideo_Params
{
public:
	class UMediaSource*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortFeatureUnlockWidget.GetTitle
struct UFortFeatureUnlockWidget_GetTitle_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SaveTheWorldUI.FortFeatureUnlockWidget.GetSmallIcon
struct UFortFeatureUnlockWidget_GetSmallIcon_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SaveTheWorldUI.FortFeatureUnlockWidget.GetLargeIcon
struct UFortFeatureUnlockWidget_GetLargeIcon_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortFeatureUnlockWidget.GetDescription
struct UFortFeatureUnlockWidget_GetDescription_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortResultsWidgetSTW.TriggerSetupTeleportCameraEvent
struct UFortResultsWidgetSTW_TriggerSetupTeleportCameraEvent_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortResultsWidgetSTW.ToggleChat
struct UFortResultsWidgetSTW_ToggleChat_Params
{
public:
	bool                                         bShow;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function SaveTheWorldUI.FortResultsWidgetSTW.SendEndOfRoundUpVoteAnalytic
struct UFortResultsWidgetSTW_SendEndOfRoundUpVoteAnalytic_Params
{
public:
	struct FUniqueNetIdRepl                      TargetId;                                          // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetPlayerName;                                  // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortResultsWidgetSTW.SendEndOfRoundScreenAnalytic
struct UFortResultsWidgetSTW_SendEndOfRoundScreenAnalytic_Params
{
public:
	class FString                                ScreenName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Skipped;                                           // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8372[0x3];                                     // Fixing Size After Last Property..
	float                                        TimeSpent;                                         // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function SaveTheWorldUI.FortResultsWidgetSTW.SendEndOfRoundFriendInviteAnalytic
struct UFortResultsWidgetSTW_SendEndOfRoundFriendInviteAnalytic_Params
{
public:
	struct FUniqueNetIdRepl                      TargetId;                                          // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetPlayerName;                                  // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortResultsWidgetSTW.RequestExitZone
struct UFortResultsWidgetSTW_RequestExitZone_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortResultsWidgetSTW.LogXPData
struct UFortResultsWidgetSTW_LogXPData_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortResultsWidgetSTW.IsDataFinalized
struct UFortResultsWidgetSTW_IsDataFinalized_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortResultsWidgetSTW.HandlePickerCancel
struct UFortResultsWidgetSTW_HandlePickerCancel_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortResultsWidgetSTW.HandleEmoteClicked
struct UFortResultsWidgetSTW_HandleEmoteClicked_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortResultsWidgetSTW.GetZoneCompletionResultText
struct UFortResultsWidgetSTW_GetZoneCompletionResultText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortResultsWidgetSTW.GetZoneCompletionResult
struct UFortResultsWidgetSTW_GetZoneCompletionResult_Params
{
public:
	enum class EFortCompletionResult             ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortResultsWidgetSTW.GetTotalMissionPointsEarned
struct UFortResultsWidgetSTW_GetTotalMissionPointsEarned_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortResultsWidgetSTW.GetRewardsByType
struct UFortResultsWidgetSTW_GetRewardsByType_Params
{
public:
	enum class EFortRewardItemTypeSTW            Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8373[0x7];                                     // Fixing Size After Last Property..
	TArray<class UFortItem*>                     OutRewards;                                        // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.SetItemManagementScreen
struct UFortItemAutoMulchActivatablePanel_STW_SetItemManagementScreen_Params
{
public:
	class UFortItemManagementScreen_STW*         InItemManagementScreen;                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.SaveSettings
struct UFortItemAutoMulchActivatablePanel_STW_SaveSettings_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.RestoreAutoMulchSettings
struct UFortItemAutoMulchActivatablePanel_STW_RestoreAutoMulchSettings_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.GetMulchCategoriesForInventoryFilter
struct UFortItemAutoMulchActivatablePanel_STW_GetMulchCategoriesForInventoryFilter_Params
{
public:
	TArray<enum class EFortAutoMulchCategory>    ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.GetFrontendInventoryFilter
struct UFortItemAutoMulchActivatablePanel_STW_GetFrontendInventoryFilter_Params
{
public:
	enum class EFortFrontendInventoryFilter      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.EnterMulchModeForAutoMulch
struct UFortItemAutoMulchActivatablePanel_STW_EnterMulchModeForAutoMulch_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.CacheAutoMulchSettings
struct UFortItemAutoMulchActivatablePanel_STW_CacheAutoMulchSettings_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.UpdateTierImages
struct UFortItemCraftingOptionsActivatablePanel_STW_UpdateTierImages_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SetTargetCraftingTierIndex
struct UFortItemCraftingOptionsActivatablePanel_STW_SetTargetCraftingTierIndex_Params
{
public:
	int32                                        NewTierIndex;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SetSelectedQuantity_BP
struct UFortItemCraftingOptionsActivatablePanel_STW_SetSelectedQuantity_BP_Params
{
public:
	int32                                        NewQuantity;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SetItemManagementScreen
struct UFortItemCraftingOptionsActivatablePanel_STW_SetItemManagementScreen_Params
{
public:
	class UFortItemManagementScreen_STW*         InItemManagementScreen;                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SetBaseSchematicItem
struct UFortItemCraftingOptionsActivatablePanel_STW_SetBaseSchematicItem_Params
{
public:
	class UFortSchematicItem*                    InBaseItem;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SelectPreviousTier
struct UFortItemCraftingOptionsActivatablePanel_STW_SelectPreviousTier_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SelectNextTier
struct UFortItemCraftingOptionsActivatablePanel_STW_SelectNextTier_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.OnTargetItemChanged
struct UFortItemCraftingOptionsActivatablePanel_STW_OnTargetItemChanged_Params
{
public:
	class UFortSchematicItem*                    NewTargetItem;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.OnSelectedQuantityChanged
struct UFortItemCraftingOptionsActivatablePanel_STW_OnSelectedQuantityChanged_Params
{
public:
	int32                                        NewSelectedQuantity;                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.OnMaxQuantityChanged
struct UFortItemCraftingOptionsActivatablePanel_STW_OnMaxQuantityChanged_Params
{
public:
	int32                                        NewMaxQuantity;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.OnBaseItemChanged
struct UFortItemCraftingOptionsActivatablePanel_STW_OnBaseItemChanged_Params
{
public:
	class UFortSchematicItem*                    NewBaseItem;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.IncreaseSelectedQuantity
struct UFortItemCraftingOptionsActivatablePanel_STW_IncreaseSelectedQuantity_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.DecreaseSelectedQuantity
struct UFortItemCraftingOptionsActivatablePanel_STW_DecreaseSelectedQuantity_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.CraftTargetItem
struct UFortItemCraftingOptionsActivatablePanel_STW_CraftTargetItem_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.CraftAndSlotTargetItem
struct UFortItemCraftingOptionsActivatablePanel_STW_CraftAndSlotTargetItem_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleItemToDetailTooltipAssetsLoaded
struct UFortItemDetailsActivatablePanel_STW_HandleItemToDetailTooltipAssetsLoaded_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleDifferentItemToDetailSetBP
struct UFortItemDetailsActivatablePanel_STW_HandleDifferentItemToDetailSetBP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleDifferentItemToCompareSetBP
struct UFortItemDetailsActivatablePanel_STW_HandleDifferentItemToCompareSetBP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleConsumeItemProgressChangedBP
struct UFortItemDetailsActivatablePanel_STW_HandleConsumeItemProgressChangedBP_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortItemDetailsModeActivatablePanel_STW.HandleOnActiveWidgetChanged
struct UFortItemDetailsModeActivatablePanel_STW_HandleOnActiveWidgetChanged_Params
{
public:
	class UWidget*                               ActiveWidget;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ActiveWidgetIndex;                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_837A[0x4];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.ToggleFilter
struct UFortItemManagementCustomFilterModalWidget_STW_ToggleFilter_Params
{
public:
	enum class EFortInventoryCustomFilter        Filter;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.OnEndCommitCustomFilter
struct UFortItemManagementCustomFilterModalWidget_STW_OnEndCommitCustomFilter_Params
{
public:
	bool                                         bWasSuccessful;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.OnCustomFilterSetUpdated
struct UFortItemManagementCustomFilterModalWidget_STW_OnCustomFilterSetUpdated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.OnBeginCommitCustomFilter
struct UFortItemManagementCustomFilterModalWidget_STW_OnBeginCommitCustomFilter_Params
{
public:
};

// 0x2 (0x2 - 0x0)
// Function SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.IsCustomFilterEnabled
struct UFortItemManagementCustomFilterModalWidget_STW_IsCustomFilterEnabled_Params
{
public:
	enum class EFortInventoryCustomFilter        Filter;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.EnableAllFilters
struct UFortItemManagementCustomFilterModalWidget_STW_EnableAllFilters_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.DisableAllFilters
struct UFortItemManagementCustomFilterModalWidget_STW_DisableAllFilters_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.CommitCustomFilters
struct UFortItemManagementCustomFilterModalWidget_STW_CommitCustomFilters_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.UpdateSchematicTiles
struct UFortItemManagementInventoryPanel_STW_UpdateSchematicTiles_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.ToggleTileSize
struct UFortItemManagementInventoryPanel_STW_ToggleTileSize_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.TogglePrioritizeFavorites
struct UFortItemManagementInventoryPanel_STW_TogglePrioritizeFavorites_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.SwitchPanelFocus
struct UFortItemManagementInventoryPanel_STW_SwitchPanelFocus_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.SetSortType
struct UFortItemManagementInventoryPanel_STW_SetSortType_Params
{
public:
	enum class EInventoryContentSortType         SortType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.SetFilter
struct UFortItemManagementInventoryPanel_STW_SetFilter_Params
{
public:
	class FName                                  FilterName;                                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.RequestFocusEquipSlots
struct UFortItemManagementInventoryPanel_STW_RequestFocusEquipSlots_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.RefreshCraftingSort
struct UFortItemManagementInventoryPanel_STW_RefreshCraftingSort_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.OnMulchRestrictionTextShown
struct UFortItemManagementInventoryPanel_STW_OnMulchRestrictionTextShown_Params
{
public:
	bool                                         bShown;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.MarkAllItemsAsSeen
struct UFortItemManagementInventoryPanel_STW_MarkAllItemsAsSeen_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.IsSwitchPanelAvailable
struct UFortItemManagementInventoryPanel_STW_IsSwitchPanelAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.IsSelectedItem
struct UFortItemManagementInventoryPanel_STW_IsSelectedItem_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_837B[0x7];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HasUnlockedStorageSlots
struct UFortItemManagementInventoryPanel_STW_HasUnlockedStorageSlots_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleSetOfItemsToMulchChangedBP
struct UFortItemManagementInventoryPanel_STW_HandleSetOfItemsToMulchChangedBP_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleQuickBarChangedBP
struct UFortItemManagementInventoryPanel_STW_HandleQuickBarChangedBP_Params
{
public:
	enum class EFortQuickBars                    QuickBarType;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleItemBeginDrag
struct UFortItemManagementInventoryPanel_STW_HandleItemBeginDrag_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleInventoryUpdatedEvent
struct UFortItemManagementInventoryPanel_STW_HandleInventoryUpdatedEvent_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleFocusEquipSlotsBP
struct UFortItemManagementInventoryPanel_STW_HandleFocusEquipSlotsBP_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleFilterTabSelected
struct UFortItemManagementInventoryPanel_STW_HandleFilterTabSelected_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleFilterTabButtonCreated
struct UFortItemManagementInventoryPanel_STW_HandleFilterTabButtonCreated_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_837C[0x4];                                     // Fixing Size After Last Property..
	class UCommonButtonBase*                     TabButton;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleDifferentSortTypeSetBP
struct UFortItemManagementInventoryPanel_STW_HandleDifferentSortTypeSetBP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleDifferentItemManagementModeSetBP
struct UFortItemManagementInventoryPanel_STW_HandleDifferentItemManagementModeSetBP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleDifferentFrontendInventoryFilterSetBP
struct UFortItemManagementInventoryPanel_STW_HandleDifferentFrontendInventoryFilterSetBP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleDifferentFilterSetBP
struct UFortItemManagementInventoryPanel_STW_HandleDifferentFilterSetBP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleCustomInventoryFilterChanged
struct UFortItemManagementInventoryPanel_STW_HandleCustomInventoryFilterChanged_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleCursorModeChangedBP
struct UFortItemManagementInventoryPanel_STW_HandleCursorModeChangedBP_Params
{
public:
	bool                                         bCursorModeEnabled;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_837D[0x3];                                     // Fixing Size After Last Property..
	class FName                                  ActionName;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                           CursorModeContentWidget;                           // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleCursorModeChanged
struct UFortItemManagementInventoryPanel_STW_HandleCursorModeChanged_Params
{
public:
	bool                                         bCursorModeEnabled;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_837E[0x3];                                     // Fixing Size After Last Property..
	class FName                                  ActionName;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                           CursorModeContentWidget;                           // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleCraftItemStarted
struct UFortItemManagementInventoryPanel_STW_HandleCraftItemStarted_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.GetUpgradeItemDefinitionsForCurrentInventory
struct UFortItemManagementInventoryPanel_STW_GetUpgradeItemDefinitionsForCurrentInventory_Params
{
public:
	TArray<class UFortItemDefinition*>           ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.GetSupportedSortTypesForCurrentInventory
struct UFortItemManagementInventoryPanel_STW_GetSupportedSortTypesForCurrentInventory_Params
{
public:
	TArray<enum class EInventoryContentSortType> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.GetShouldPrioritizeFavorites
struct UFortItemManagementInventoryPanel_STW_GetShouldPrioritizeFavorites_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.GetQualifiedFilterDisplayName
struct UFortItemManagementInventoryPanel_STW_GetQualifiedFilterDisplayName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.CycleSortType
struct UFortItemManagementInventoryPanel_STW_CycleSortType_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.CanDragItems
struct UFortItemManagementInventoryPanel_STW_CanDragItems_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.AdvanceSelection
struct UFortItemManagementInventoryPanel_STW_AdvanceSelection_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.AddItemStackToMulch
struct UFortItemManagementInventoryPanel_STW_AddItemStackToMulch_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_837F[0x4];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortItemManagementItemTileButton_STW.UpdateEquipSlotOverlay
struct UFortItemManagementItemTileButton_STW_UpdateEquipSlotOverlay_Params
{
public:
	int32                                        CurrentSlotIndex;                                  // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementItemTileButton_STW.PopulateEquipSlotOverlay
struct UFortItemManagementItemTileButton_STW_PopulateEquipSlotOverlay_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortItemManagementItemTileButton_STW.OnSlotItemComplete
struct UFortItemManagementItemTileButton_STW_OnSlotItemComplete_Params
{
public:
	class UFortAccountItem*                      SlottedItem;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotId;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8385[0x4];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortItemManagementItemTileButton_STW.IsValidEquipSlotOverlayIndex
struct UFortItemManagementItemTileButton_STW_IsValidEquipSlotOverlayIndex_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8386[0x3];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleShowRefundIndicatorChanged
struct UFortItemManagementItemTileButton_STW_HandleShowRefundIndicatorChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleShowCollectionBookIndicatorChanged
struct UFortItemManagementItemTileButton_STW_HandleShowCollectionBookIndicatorChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleItemMulchStateChanged
struct UFortItemManagementItemTileButton_STW_HandleItemMulchStateChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleItemChangedBP
struct UFortItemManagementItemTileButton_STW_HandleItemChangedBP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleHasItemToDetailChanged
struct UFortItemManagementItemTileButton_STW_HandleHasItemToDetailChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleHasItemToCompareDetailsWithChanged
struct UFortItemManagementItemTileButton_STW_HandleHasItemToCompareDetailsWithChanged_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleEquipSlotChanged
struct UFortItemManagementItemTileButton_STW_HandleEquipSlotChanged_Params
{
public:
	int32                                        EquipSlot;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleDifferentItemManagementModeSetBP
struct UFortItemManagementItemTileButton_STW_HandleDifferentItemManagementModeSetBP_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortItemManagementItemTileButton_STW.GetPopupMenu
struct UFortItemManagementItemTileButton_STW_GetPopupMenu_Params
{
public:
	class UUserWidget*                           ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortItemManagementItemTileButton_STW.GetItemManagementMode
struct UFortItemManagementItemTileButton_STW_GetItemManagementMode_Params
{
public:
	enum class EFortItemManagementMode           ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortItemManagementItemTileButton_STW.GetHomebaseSquadSlotForItem
struct UFortItemManagementItemTileButton_STW_GetHomebaseSquadSlotForItem_Params
{
public:
	struct FHomebaseSquadSlotId                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementItemDetailsPanel_STW.HandleHostSet
struct UFortItemManagementItemDetailsPanel_STW_HandleHostSet_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementItemDetailsPanel_STW.HandleHasItemMarkedForMulchingChanged
struct UFortItemManagementItemDetailsPanel_STW_HandleHasItemMarkedForMulchingChanged_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortItemManagementItemDetailsPanel_STW.GetAmmoTypeItemDefinitions
struct UFortItemManagementItemDetailsPanel_STW_GetAmmoTypeItemDefinitions_Params
{
public:
	TArray<class UFortAmmoItemDefinition*>       ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.IsSpaceAvailableForMulch
struct UFortItemManagementMulchDetailsPanel_STW_IsSpaceAvailableForMulch_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.HandleSetOfItemsToMulchChangedBP
struct UFortItemManagementMulchDetailsPanel_STW_HandleSetOfItemsToMulchChangedBP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.HandleHostSet
struct UFortItemManagementMulchDetailsPanel_STW_HandleHostSet_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.GetItemsToMulch
struct UFortItemManagementMulchDetailsPanel_STW_GetItemsToMulch_Params
{
public:
	TArray<class UFortItem*>                     ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.GetItemCountsToMulch
struct UFortItemManagementMulchDetailsPanel_STW_GetItemCountsToMulch_Params
{
public:
	TArray<int32>                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.CommitMulch
struct UFortItemManagementMulchDetailsPanel_STW_CommitMulch_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementModeDetailsPanel_STW.HandleHostSet
struct UFortItemManagementModeDetailsPanel_STW_HandleHostSet_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementModeDetailsPanel_STW.HandleDifferentItemManagementModeSetBP
struct UFortItemManagementModeDetailsPanel_STW_HandleDifferentItemManagementModeSetBP_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortItemManagementModeDetailsPanel_STW.GetItemManagementMode
struct UFortItemManagementModeDetailsPanel_STW_GetItemManagementMode_Params
{
public:
	enum class EFortItemManagementMode           ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.TransferItem
struct UFortItemManagementScreen_STW_TransferItem_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.ToggleShowRefundIndicator
struct UFortItemManagementScreen_STW_ToggleShowRefundIndicator_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.ToggleShowCollectionBookIndicator
struct UFortItemManagementScreen_STW_ToggleShowCollectionBookIndicator_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.ShowWarningReadOnlyWIFE
struct UFortItemManagementScreen_STW_ShowWarningReadOnlyWIFE_Params
{
public:
	bool                                         Force;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.ShowMulchConfirmationModal
struct UFortItemManagementScreen_STW_ShowMulchConfirmationModal_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.ShowCustomFilterModal
struct UFortItemManagementScreen_STW_ShowCustomFilterModal_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.SetFrontendInventoryFilter
struct UFortItemManagementScreen_STW_SetFrontendInventoryFilter_Params
{
public:
	enum class EFortFrontendInventoryFilter      FrontendInventoryFilter;                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.SetConsumeItemRequestInProgress
struct UFortItemManagementScreen_STW_SetConsumeItemRequestInProgress_Params
{
public:
	bool                                         InProgress;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.RequestPopupMenuForSelectedItem
struct UFortItemManagementScreen_STW_RequestPopupMenuForSelectedItem_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.OpenCraftingOptions
struct UFortItemManagementScreen_STW_OpenCraftingOptions_Params
{
public:
	class UFortSchematicItem*                    SchematicItem;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.OpenAutoMulchOptions
struct UFortItemManagementScreen_STW_OpenAutoMulchOptions_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.NotifyPanelDeactivated
struct UFortItemManagementScreen_STW_NotifyPanelDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.NotifyPanelActivated
struct UFortItemManagementScreen_STW_NotifyPanelActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.MarkAllItemsAsSeen
struct UFortItemManagementScreen_STW_MarkAllItemsAsSeen_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.IsScreenWIFE
struct UFortItemManagementScreen_STW_IsScreenWIFE_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.InspectItem
struct UFortItemManagementScreen_STW_InspectItem_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.HideMulchConfirmationModal
struct UFortItemManagementScreen_STW_HideMulchConfirmationModal_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.HideCustomFilterModal
struct UFortItemManagementScreen_STW_HideCustomFilterModal_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.HasItemBeenSeen
struct UFortItemManagementScreen_STW_HasItemBeenSeen_Params
{
public:
	class UFortAccountItem*                      AccountItem;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_838D[0x7];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.HasDefaultItemsToMulch
struct UFortItemManagementScreen_STW_HasDefaultItemsToMulch_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.HandleTransferItemBP
struct UFortItemManagementScreen_STW_HandleTransferItemBP_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.HandleOpenCraftingOptionsBP
struct UFortItemManagementScreen_STW_HandleOpenCraftingOptionsBP_Params
{
public:
	class UFortSchematicItem*                    SchematicItem;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.HandleOpenAutoMulchOptionsBP
struct UFortItemManagementScreen_STW_HandleOpenAutoMulchOptionsBP_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.HandleMulchQuantitySelection
struct UFortItemManagementScreen_STW_HandleMulchQuantitySelection_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.HandleItemToDetailChanged
struct UFortItemManagementScreen_STW_HandleItemToDetailChanged_Params
{
public:
	bool                                         bItemChanged;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAmmoChanged;                                      // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIngredientsChanged;                               // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.HandleItemToCompareWithChanged
struct UFortItemManagementScreen_STW_HandleItemToCompareWithChanged_Params
{
public:
	bool                                         bItemChanged;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAmmoChanged;                                      // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIngredientsChanged;                               // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.HandleInspectItemBP
struct UFortItemManagementScreen_STW_HandleInspectItemBP_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.HandleEquipItemBP
struct UFortItemManagementScreen_STW_HandleEquipItemBP_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.HandleDropItemBP
struct UFortItemManagementScreen_STW_HandleDropItemBP_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.HandleDifferentItemManagementModeSetBP
struct UFortItemManagementScreen_STW_HandleDifferentItemManagementModeSetBP_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.HandleCraftItemBP
struct UFortItemManagementScreen_STW_HandleCraftItemBP_Params
{
public:
	class UFortSchematicItem*                    SchematicItem;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemTier                     RequestedTier;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_838E[0x3];                                     // Fixing Size After Last Property..
	int32                                        CraftCount;                                        // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.HandleCraftAndSlotItemBP
struct UFortItemManagementScreen_STW_HandleCraftAndSlotItemBP_Params
{
public:
	class UFortSchematicItem*                    SchematicItem;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemTier                     RequestedTier;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_838F[0x3];                                     // Fixing Size After Last Property..
	int32                                        CraftCount;                                        // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.HandleConsumeItemBP
struct UFortItemManagementScreen_STW_HandleConsumeItemBP_Params
{
public:
	class UFortConsumableAccountItem*            ConsumableItem;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.GuardActionForReadOnlyWIFE
struct UFortItemManagementScreen_STW_GuardActionForReadOnlyWIFE_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.GetShouldShowRefundIndicator
struct UFortItemManagementScreen_STW_GetShouldShowRefundIndicator_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.GetShouldShowCollectionBookIndicator
struct UFortItemManagementScreen_STW_GetShouldShowCollectionBookIndicator_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.GetItemToDetail
struct UFortItemManagementScreen_STW_GetItemToDetail_Params
{
public:
	class UFortItem*                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.GetItemToCompareDetailsWith
struct UFortItemManagementScreen_STW_GetItemToCompareDetailsWith_Params
{
public:
	class UFortItem*                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.EquipItem
struct UFortItemManagementScreen_STW_EquipItem_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.EnterMulchModeForAutoMulch
struct UFortItemManagementScreen_STW_EnterMulchModeForAutoMulch_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.EnterMulchMode
struct UFortItemManagementScreen_STW_EnterMulchMode_Params
{
public:
	class UFortItem*                             ItemToMulch;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.EnterDetailsMode
struct UFortItemManagementScreen_STW_EnterDetailsMode_Params
{
public:
	class UFortItem*                             ItemToDetail;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.EnterComparisonMode
struct UFortItemManagementScreen_STW_EnterComparisonMode_Params
{
public:
	class UFortItem*                             ItemToCompareDetailsWith;                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.DropItem
struct UFortItemManagementScreen_STW_DropItem_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.CycleSortType
struct UFortItemManagementScreen_STW_CycleSortType_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.CraftItem
struct UFortItemManagementScreen_STW_CraftItem_Params
{
public:
	class UFortSchematicItem*                    SchematicItem;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemTier                     RequestedTier;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8390[0x3];                                     // Fixing Size After Last Property..
	int32                                        CraftCount;                                        // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.CraftAndSlotItem
struct UFortItemManagementScreen_STW_CraftAndSlotItem_Params
{
public:
	class UFortSchematicItem*                    SchematicItem;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemTier                     RequestedTier;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8391[0x3];                                     // Fixing Size After Last Property..
	int32                                        CraftCount;                                        // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.ConsumeItem
struct UFortItemManagementScreen_STW_ConsumeItem_Params
{
public:
	class UFortConsumableAccountItem*            ConsumableItem;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.CanRequestPopupMenuForSelectedItem
struct UFortItemManagementScreen_STW_CanRequestPopupMenuForSelectedItem_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.CanEquipItem
struct UFortItemManagementScreen_STW_CanEquipItem_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8392[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemManagementScreen_STW.CancelInventoryPanelTileViewRefresh
struct UFortItemManagementScreen_STW_CancelInventoryPanelTileViewRefresh_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function SaveTheWorldUI.MainMenu_STW.TryShowPrimaryContent
struct UMainMenu_STW_TryShowPrimaryContent_Params
{
public:
	TSoftClassPtr<class UCommonActivatableWidget> ContentWidgetClass;                                // 0x0(0x28)(Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SaveTheWorldUI.MainMenu_STW.TryShowModal
struct UMainMenu_STW_TryShowModal_Params
{
public:
	TSoftClassPtr<class UCommonActivatableWidget> ModalWidgetClass;                                  // 0x0(0x28)(Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.MainMenu_STW.ShouldShowLeaveExperienceButton
struct UMainMenu_STW_ShouldShowLeaveExperienceButton_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.MainMenu_STW.IsActiveTabMainShop
struct UMainMenu_STW_IsActiveTabMainShop_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortUIStateWidget_STWJoinServer.OnShowTutorialDialog
struct UFortUIStateWidget_STWJoinServer_OnShowTutorialDialog_Params
{
public:
};

// 0x2 (0x2 - 0x0)
// Function SaveTheWorldUI.FortUIStateWidget_STWJoinServer.HandleMatchmakingStateChange
struct UFortUIStateWidget_STWJoinServer_HandleMatchmakingStateChange_Params
{
public:
	enum class EMatchmakingState                 OldState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMatchmakingState                 NewState;                                          // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortUIStateWidget_STWJoinServer.HandleMatchmakingComplete
struct UFortUIStateWidget_STWJoinServer_HandleMatchmakingComplete_Params
{
public:
	enum class EMatchmakingCompleteResult        MatchmakingResult;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortUIStateWidget_STWJoinServer.HandleLobbyTimeUpdated
struct UFortUIStateWidget_STWJoinServer_HandleLobbyTimeUpdated_Params
{
public:
	int32                                        TimeRemaining;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortUIStateWidget_STWJoinServer.HandleLobbyDisconnected
struct UFortUIStateWidget_STWJoinServer_HandleLobbyDisconnected_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.TopBar_STW.SetOnlineFriendsCount
struct UTopBar_STW_SetOnlineFriendsCount_Params
{
public:
	int32                                        NewOnlineFriendsCount;                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.TopBar_STW.OnSocialMenuOpened
struct UTopBar_STW_OnSocialMenuOpened_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.TopBar_STW.OnShouldShowPhoenixDisplay
struct UTopBar_STW_OnShouldShowPhoenixDisplay_Params
{
public:
	bool                                         bShow;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_839E[0x7];                                     // Fixing Size After Last Property..
	class UFortPhoenixSeasonDisplayInfo*         PhoenixDisplayInfo;                                // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutGadgetPicker.SetTargetLoadoutSlot
struct UFortHeroLoadoutGadgetPicker_SetTargetLoadoutSlot_Params
{
public:
	class UFortCampaignHeroLoadoutItem*          LoadoutItem;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SlotIndex;                                         // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83A1[0x4];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutGadgetPicker.HandleDifferentTargetLoadoutSlotSetBP
struct UFortHeroLoadoutGadgetPicker_HandleDifferentTargetLoadoutSlotSetBP_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutHeroPicker.UpdateFilterTabList
struct UFortHeroLoadoutHeroPicker_UpdateFilterTabList_Params
{
public:
	class FName                                  PreviouslySelectedTab;                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutHeroPicker.SetTargetLoadoutSlot
struct UFortHeroLoadoutHeroPicker_SetTargetLoadoutSlot_Params
{
public:
	class UFortCampaignHeroLoadoutItem*          LoadoutItem;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotName;                                          // 0x8(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83A3[0x4];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutHeroPicker.HandleFilterTabSelectedBP
struct UFortHeroLoadoutHeroPicker_HandleFilterTabSelectedBP_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutHeroPicker.HandleFilterTabSelected
struct UFortHeroLoadoutHeroPicker_HandleFilterTabSelected_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutHeroPicker.HandleDifferentTargetLoadoutSetBP
struct UFortHeroLoadoutHeroPicker_HandleDifferentTargetLoadoutSetBP_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutHeroPicker.GetCurrentlySelectedTab
struct UFortHeroLoadoutHeroPicker_GetCurrentlySelectedTab_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutHeroPicker.AssociateFilterTabList
struct UFortHeroLoadoutHeroPicker_AssociateFilterTabList_Params
{
public:
	class UFortTabListWidgetBase_Legacy*         ExternalFilterTabList;                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.ShowItemDetails
struct UFortHeroLoadoutScreenBase_ShowItemDetails_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.SetInputBindings
struct UFortHeroLoadoutScreenBase_SetInputBindings_Params
{
public:
	bool                                         ActivePickerBox;                                   // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CommanderSlot;                                     // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NoneSlot;                                          // 0x2(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanClearAll;                                       // 0x3(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.SetHeroLoadout
struct UFortHeroLoadoutScreenBase_SetHeroLoadout_Params
{
public:
	class UFortCampaignHeroLoadoutItem*          HeroLoadout;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.PushItemInspectionScreen
struct UFortHeroLoadoutScreenBase_PushItemInspectionScreen_Params
{
public:
	class UFortItem*                             ItemToInspect;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemInspectionMode           Mode;                                              // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83A6[0x7];                                     // Fixing Size After Last Property..
	class UFortItemTileView*                     CycleTileView;                                     // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReadOnly;                                         // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowFavoriting;                                  // 0x19(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTemporaryItem;                                  // 0x1A(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowRarityUpgrading;                             // 0x1B(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83A7[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.OnVaultItemsViewed
struct UFortHeroLoadoutScreenBase_OnVaultItemsViewed_Params
{
public:
	TArray<class UFortItem*>                     Items;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.OnItemPreviewChanged
struct UFortHeroLoadoutScreenBase_OnItemPreviewChanged_Params
{
public:
	class UActor*                                NewPrefab;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItem*                             NewItem;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.IsLoadoutSwitchingAllowed
struct UFortHeroLoadoutScreenBase_IsLoadoutSwitchingAllowed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.HideItemDetails
struct UFortHeroLoadoutScreenBase_HideItemDetails_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleToggleDescInputAction
struct UFortHeroLoadoutScreenBase_HandleToggleDescInputAction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleShowAllStatsInputAction
struct UFortHeroLoadoutScreenBase_HandleShowAllStatsInputAction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleInspectRootSlotsInputAction
struct UFortHeroLoadoutScreenBase_HandleInspectRootSlotsInputAction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleInspectPickerInputAction
struct UFortHeroLoadoutScreenBase_HandleInspectPickerInputAction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleHelpInputAction
struct UFortHeroLoadoutScreenBase_HandleHelpInputAction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleDetailsInputAction
struct UFortHeroLoadoutScreenBase_HandleDetailsInputAction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleCyclePickerInputAction
struct UFortHeroLoadoutScreenBase_HandleCyclePickerInputAction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleClearAllInputAction
struct UFortHeroLoadoutScreenBase_HandleClearAllInputAction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleBackInputAction
struct UFortHeroLoadoutScreenBase_HandleBackInputAction_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.GetWidgetForFramingViewedItem
struct UFortHeroLoadoutScreenBase_GetWidgetForFramingViewedItem_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.GetIsReadOnly
struct UFortHeroLoadoutScreenBase_GetIsReadOnly_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutScreenLegacy.SetHeroLoadout
struct UFortHeroLoadoutScreenLegacy_SetHeroLoadout_Params
{
public:
	class UFortCampaignHeroLoadoutItem*          HeroLoadout;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutScreenLegacy.IsLoadoutSwitchingAllowed
struct UFortHeroLoadoutScreenLegacy_IsLoadoutSwitchingAllowed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutScreenLegacy.GetIsReadOnly
struct UFortHeroLoadoutScreenLegacy_GetIsReadOnly_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction SaveTheWorldUI.FortHeroLoadoutSlotButton.OnRequestChangeHero__DelegateSignature
struct UFortHeroLoadoutSlotButton_OnRequestChangeHero__DelegateSignature_Params
{
public:
	class UFortHeroLoadoutSlotButton*            SlotButton;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction SaveTheWorldUI.FortHeroLoadoutSlotButton.OnMenuOpenChangedEvent__DelegateSignature
struct UFortHeroLoadoutSlotButton_OnMenuOpenChangedEvent__DelegateSignature_Params
{
public:
	class UFortHeroLoadoutSlotButton*            SlotButton;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMenuOpen;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83AD[0x7];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutSlotButton.IsContextMenuOpen
struct UFortHeroLoadoutSlotButton_IsContextMenuOpen_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutSlotButton.HandleMenuOpenChanged
struct UFortHeroLoadoutSlotButton_HandleMenuOpenChanged_Params
{
public:
	bool                                         bIsMenuOpen;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutTeamPerkPicker.SetTargetLoadout
struct UFortHeroLoadoutTeamPerkPicker_SetTargetLoadout_Params
{
public:
	class UFortCampaignHeroLoadoutItem*          LoadoutItem;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutTeamPerkPicker.HandleDifferentTargetLoadoutSetBP
struct UFortHeroLoadoutTeamPerkPicker_HandleDifferentTargetLoadoutSetBP_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortCampaignTabsScreenBase.UpdateItemShopButtonBang
struct UFortCampaignTabsScreenBase_UpdateItemShopButtonBang_Params
{
public:
	class FName                                  Tab;                                               // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortCampaignTabsScreenBase.ShouldShowItemShopBang
struct UFortCampaignTabsScreenBase_ShouldShowItemShopBang_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortCampaignTabsScreenBase.HandleMainTabSelected
struct UFortCampaignTabsScreenBase_HandleMainTabSelected_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortCampaignTabsScreenBase.HandleMainTabCreated
struct UFortCampaignTabsScreenBase_HandleMainTabCreated_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83B0[0x4];                                     // Fixing Size After Last Property..
	class UCommonButtonBase*                     TabButton;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function SaveTheWorldUI.FortCampaignTabsScreenBase.HandleFeatureStateChanged
struct UFortCampaignTabsScreenBase_HandleFeatureStateChanged_Params
{
public:
	enum class EFortUIFeature                    ChangedFeature;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortUIFeatureState               NewState;                                          // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortUIFeatureStateReason         Reason;                                            // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortCampaignTabsScreenBase.ConstructTabs
struct UFortCampaignTabsScreenBase_ConstructTabs_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy.HandleMainTabSelected
struct UFortCampaignTabsScreenBase_Legacy_HandleMainTabSelected_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy.HandleMainTabCreated
struct UFortCampaignTabsScreenBase_Legacy_HandleMainTabCreated_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83B2[0x4];                                     // Fixing Size After Last Property..
	class UCommonButtonBase*                     TabButton;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy.HandleFeatureStateChanged
struct UFortCampaignTabsScreenBase_Legacy_HandleFeatureStateChanged_Params
{
public:
	enum class EFortUIFeature                    ChangedFeature;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortUIFeatureState               NewState;                                          // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortUIFeatureStateReason         Reason;                                            // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy.HandleFeatureNavigateRequest
struct UFortCampaignTabsScreenBase_Legacy_HandleFeatureNavigateRequest_Params
{
public:
	enum class EFortUIFeature                    Feature;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy.ConstructTabs
struct UFortCampaignTabsScreenBase_Legacy_ConstructTabs_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortStoreSummary.ShowMulchConfirmationModal
struct UFortStoreSummary_ShowMulchConfirmationModal_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortStoreSummary.SetIsInChoiceSelectionMode
struct UFortStoreSummary_SetIsInChoiceSelectionMode_Params
{
public:
	bool                                         InIsInChoiceSelectionMode;                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortStoreSummary.SetCards
struct UFortStoreSummary_SetCards_Params
{
public:
	TArray<struct FCard>                         Cards;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortStoreSummary.NotifyPanelDeactivated
struct UFortStoreSummary_NotifyPanelDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortStoreSummary.NotifyPanelActivated
struct UFortStoreSummary_NotifyPanelActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortStoreSummary.MarkDefaultItemsForMulch
struct UFortStoreSummary_MarkDefaultItemsForMulch_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortStoreSummary.HideMulchConfirmationModal
struct UFortStoreSummary_HideMulchConfirmationModal_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortStoreSummary.HandleContextMenuOpenChangedBP
struct UFortStoreSummary_HandleContextMenuOpenChangedBP_Params
{
public:
	bool                                         bIsOpen;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortStoreSummary.HandleContextMenuOpenChanged
struct UFortStoreSummary_HandleContextMenuOpenChanged_Params
{
public:
	bool                                         bIsOpen;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortStoreSummary.GetIsInChoiceSelectionMode
struct UFortStoreSummary_GetIsInChoiceSelectionMode_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortStoreSummary.FinalizeFavoriteStatus
struct UFortStoreSummary_FinalizeFavoriteStatus_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortStoreSummary.CloseSummaryScreen
struct UFortStoreSummary_CloseSummaryScreen_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortStoreSummaryItemButton.UpdateMulchListWithItem
struct UFortStoreSummaryItemButton_UpdateMulchListWithItem_Params
{
public:
	bool                                         bAddingItem;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortStoreSummaryItemButton.SetStoreCardObject
struct UFortStoreSummaryItemButton_SetStoreCardObject_Params
{
public:
	class UStoreCardObject*                      CardObject;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortStoreSummaryItemButton.HandleMenuOpenChanged
struct UFortStoreSummaryItemButton_HandleMenuOpenChanged_Params
{
public:
	bool                                         bIsOpen;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortStoreSummaryItemButton.HandleItemMulchStateChanged
struct UFortStoreSummaryItemButton_HandleItemMulchStateChanged_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortStoreSummaryItemButton.GetStoreCardObject
struct UFortStoreSummaryItemButton_GetStoreCardObject_Params
{
public:
	class UStoreCardObject*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortStoreSummaryItemButton.GetPopupMenu
struct UFortStoreSummaryItemButton_GetPopupMenu_Params
{
public:
	class UUserWidget*                           ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.UpdateMulchListWithItem
struct UFortStoreSummaryItemButton_Legacy_UpdateMulchListWithItem_Params
{
public:
	bool                                         bAddingItem;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.SetStoreCardObject
struct UFortStoreSummaryItemButton_Legacy_SetStoreCardObject_Params
{
public:
	class UStoreCardObject*                      CardObject;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.OnContextMenuOpenChangedEvent__DelegateSignature
struct UFortStoreSummaryItemButton_Legacy_OnContextMenuOpenChangedEvent__DelegateSignature_Params
{
public:
	bool                                         bIsOpen;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.HandleMenuOpenChanged
struct UFortStoreSummaryItemButton_Legacy_HandleMenuOpenChanged_Params
{
public:
	bool                                         bIsOpen;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.HandleItemMulchStateChanged
struct UFortStoreSummaryItemButton_Legacy_HandleItemMulchStateChanged_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.GetStoreCardObject
struct UFortStoreSummaryItemButton_Legacy_GetStoreCardObject_Params
{
public:
	class UStoreCardObject*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.GetPopupMenu
struct UFortStoreSummaryItemButton_Legacy_GetPopupMenu_Params
{
public:
	class UUserWidget*                           ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortStoreSummaryItemPopupMenu.MulchItem
struct UFortStoreSummaryItemPopupMenu_MulchItem_Params
{
public:
};

// 0x3 (0x3 - 0x0)
// Function SaveTheWorldUI.FortStoreSummaryItemPopupMenu.HandleItemChanged
struct UFortStoreSummaryItemPopupMenu_HandleItemChanged_Params
{
public:
	bool                                         bItemChanged;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAmmoChanged;                                      // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIngredientsChanged;                               // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortStoreSummaryItemPopupMenu.GetHostButton
struct UFortStoreSummaryItemPopupMenu_GetHostButton_Params
{
public:
	class UFortStoreSummaryItemButton*           ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortStoreSummaryItemPopupMenu_Legacy.MulchItem
struct UFortStoreSummaryItemPopupMenu_Legacy_MulchItem_Params
{
public:
};

// 0x3 (0x3 - 0x0)
// Function SaveTheWorldUI.FortStoreSummaryItemPopupMenu_Legacy.HandleItemChanged
struct UFortStoreSummaryItemPopupMenu_Legacy_HandleItemChanged_Params
{
public:
	bool                                         bItemChanged;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAmmoChanged;                                      // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIngredientsChanged;                               // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortStoreSummaryItemPopupMenu_Legacy.GetHostButton
struct UFortStoreSummaryItemPopupMenu_Legacy_GetHostButton_Params
{
public:
	class UFortStoreSummaryItemButton_Legacy*    ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortStoreSummary_Legacy.ShowMulchConfirmationModal
struct UFortStoreSummary_Legacy_ShowMulchConfirmationModal_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortStoreSummary_Legacy.SetIsInChoiceSelectionMode
struct UFortStoreSummary_Legacy_SetIsInChoiceSelectionMode_Params
{
public:
	bool                                         InIsInChoiceSelectionMode;                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortStoreSummary_Legacy.SetCards
struct UFortStoreSummary_Legacy_SetCards_Params
{
public:
	TArray<struct FCard>                         Cards;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortStoreSummary_Legacy.NotifyPanelDeactivated
struct UFortStoreSummary_Legacy_NotifyPanelDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortStoreSummary_Legacy.NotifyPanelActivated
struct UFortStoreSummary_Legacy_NotifyPanelActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortStoreSummary_Legacy.MarkDefaultItemsForMulch
struct UFortStoreSummary_Legacy_MarkDefaultItemsForMulch_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortStoreSummary_Legacy.HideMulchConfirmationModal
struct UFortStoreSummary_Legacy_HideMulchConfirmationModal_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortStoreSummary_Legacy.HandleContextMenuOpenChangedBP
struct UFortStoreSummary_Legacy_HandleContextMenuOpenChangedBP_Params
{
public:
	bool                                         bIsOpen;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortStoreSummary_Legacy.HandleContextMenuOpenChanged
struct UFortStoreSummary_Legacy_HandleContextMenuOpenChanged_Params
{
public:
	bool                                         bIsOpen;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortStoreSummary_Legacy.GetIsInChoiceSelectionMode
struct UFortStoreSummary_Legacy_GetIsInChoiceSelectionMode_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortStoreSummary_Legacy.FinalizeFavoriteStatus
struct UFortStoreSummary_Legacy_FinalizeFavoriteStatus_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortStoreSummary_Legacy.CloseSummaryScreen
struct UFortStoreSummary_Legacy_CloseSummaryScreen_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutGadgetTileBase.SetGadgetToRepresent
struct UFortHeroLoadoutGadgetTileBase_SetGadgetToRepresent_Params
{
public:
	class UFortGadgetItemDefinition*             GadgetItemDefinition;                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutGadgetTileBase.OnGadgetUpdated
struct UFortHeroLoadoutGadgetTileBase_OnGadgetUpdated_Params
{
public:
	bool                                         bIsValidGadget;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutInGameScreenBase.OnPerkWidgetAdded
struct UFortHeroLoadoutInGameScreenBase_OnPerkWidgetAdded_Params
{
public:
	class UGridSlot*                             GridSlot;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutInGameScreenBase.GetGadgetDefinitionBySlot
struct UFortHeroLoadoutInGameScreenBase_GetGadgetDefinitionBySlot_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83BF[0x4];                                     // Fixing Size After Last Property..
	class UFortGadgetItemDefinition*             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function SaveTheWorldUI.FortHeroLoadoutPerkTileBase.OnPerkInitialized
struct UFortHeroLoadoutPerkTileBase_OnPerkInitialized_Params
{
public:
	enum class EFortHeroPerkDisplayType          InPerkType;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActive;                                           // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowWarning;                                      // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortAlterationModOptinScreenBase.SetupItem
struct UFortAlterationModOptinScreenBase_SetupItem_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortAlterationModOptinScreenBase.RequestClose
struct UFortAlterationModOptinScreenBase_RequestClose_Params
{
public:
	bool                                         bCancelled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortAlterationModOptinScreenBase.OnSetupItem
struct UFortAlterationModOptinScreenBase_OnSetupItem_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortAlterationModOptinScreenBase.OnItemConversionComplete
struct UFortAlterationModOptinScreenBase_OnItemConversionComplete_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortAlterationModOptinScreenBase.ConvertItemAlterations
struct UFortAlterationModOptinScreenBase_ConvertItemAlterations_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortAlterationModScreenBase.SetItemForAlterationsModding
struct UFortAlterationModScreenBase_SetItemForAlterationsModding_Params
{
public:
	class UFortAlterableItem*                    InAlterableItem;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortAlterationModScreenBase.RefreshItemAndAlterationsBP
struct UFortAlterationModScreenBase_RefreshItemAndAlterationsBP_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortAlterationModScreenBase.OnItemSlotChanged
struct UFortAlterationModScreenBase_OnItemSlotChanged_Params
{
public:
	bool                                         SelectedSlot;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortAlterationModScreenBase.OnAlterationOptionChanged
struct UFortAlterationModScreenBase_OnAlterationOptionChanged_Params
{
public:
	class UFortAlterationOption*                 CurrentAlterationOption;                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortAlterationModScreenBase.OnAlterationModificationSucess
struct UFortAlterationModScreenBase_OnAlterationModificationSucess_Params
{
public:
	int32                                        ModifiedSlotIndex;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortAlterationModScreenBase.OnAlterationModificationStarted
struct UFortAlterationModScreenBase_OnAlterationModificationStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortAlterationModScreenBase.OnAlterationModificationCompleted
struct UFortAlterationModScreenBase_OnAlterationModificationCompleted_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortAlterationModScreenBase.HandleBackAction
struct UFortAlterationModScreenBase_HandleBackAction_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortAlterationModScreenBase.ConfirmSelection
struct UFortAlterationModScreenBase_ConfirmSelection_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortAlterationModScreenBase.CancelSelection
struct UFortAlterationModScreenBase_CancelSelection_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortAlterationModScreenBase.AreIngredientRequirementsMent
struct UFortAlterationModScreenBase_AreIngredientRequirementsMent_Params
{
public:
	TArray<struct FFortItemQuantityPair>         RequiredIngredients;                               // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83C3[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortItemInspectionScreen.SetItemToRepresent
struct UFortItemInspectionScreen_SetItemToRepresent_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortItemInspectionScreen.SetInspectionMode
struct UFortItemInspectionScreen_SetInspectionMode_Params
{
public:
	enum class EFortItemInspectionMode           NewInspectMode;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortItemInspectionScreen.SetAttemptingConversion
struct UFortItemInspectionScreen_SetAttemptingConversion_Params
{
public:
	bool                                         bIsAttemptingConversion;                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortItemInspectionScreen.OpenItemInspect
struct UFortItemInspectionScreen_OpenItemInspect_Params
{
public:
	class UFortItem*                             ItemToInspect;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemInspectionMode           Mode;                                              // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldAllowUpgrading;                              // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldAllowEvolution;                              // 0xA(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldAllowFavorite;                               // 0xB(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsTemporaryItem;                                   // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowRarityUpgrading;                             // 0xD(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83C5[0x2];                                     // Fixing Size After Last Property..
	int32                                        QuantityOverride;                                  // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83C6[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortItemInspectionScreen.IsItemSlottedInCollectionBook
struct UFortItemInspectionScreen_IsItemSlottedInCollectionBook_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83C7[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemInspectionScreen.HandleItemToInspectDestroyedBP
struct UFortItemInspectionScreen_HandleItemToInspectDestroyedBP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemInspectionScreen.HandleItemToInspectDestroyed
struct UFortItemInspectionScreen_HandleItemToInspectDestroyed_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortItemInspectionScreen.HandleItemToInspectChangedBP
struct UFortItemInspectionScreen_HandleItemToInspectChangedBP_Params
{
public:
	bool                                         bWasFavoritedChanged;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function SaveTheWorldUI.FortItemInspectionScreen.HandleItemToInspectChanged
struct UFortItemInspectionScreen_HandleItemToInspectChanged_Params
{
public:
	bool                                         bItemChanged;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAmmoChanged;                                      // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIngredientsChanged;                               // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemInspectionScreen.HandleIsPreviewingChanged
struct UFortItemInspectionScreen_HandleIsPreviewingChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemInspectionScreen.HandleDifferentItemToInspectSetBP
struct UFortItemInspectionScreen_HandleDifferentItemToInspectSetBP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemInspectionScreen.HandleDifferentInspectionModeSetBP
struct UFortItemInspectionScreen_HandleDifferentInspectionModeSetBP_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortItemInspectionScreen.GetRefundResultItem
struct UFortItemInspectionScreen_GetRefundResultItem_Params
{
public:
	class UFortAccountItem*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortItemInspectionScreen.GetRefundDescriptionText
struct UFortItemInspectionScreen_GetRefundDescriptionText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortItemInspectionScreen.GetItemQuantityOverride
struct UFortItemInspectionScreen_GetItemQuantityOverride_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortItemInspectionScreen.GetCycleWidget
struct UFortItemInspectionScreen_GetCycleWidget_Params
{
public:
	class UFortItemInspectCycleWidget*           ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortItemInspectionScreen.DoesItemHaveLegacyAlterations
struct UFortItemInspectionScreen_DoesItemHaveLegacyAlterations_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemInspectionScreen.DoAlterationModification
struct UFortItemInspectionScreen_DoAlterationModification_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemInspectCycleWidget.SetupActionHandlers
struct UFortItemInspectCycleWidget_SetupActionHandlers_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortItemInspectCycleWidget.SetOwningItemInspectScreen
struct UFortItemInspectCycleWidget_SetOwningItemInspectScreen_Params
{
public:
	class UFortItemInspectionScreen*             ItemInspect;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortItemInspectCycleWidget.SetItemToRepresent
struct UFortItemInspectCycleWidget_SetItemToRepresent_Params
{
public:
	class UFortItem*                             NewItemToRepresent;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemInspectCycleWidget.SelectPreviousItem
struct UFortItemInspectCycleWidget_SelectPreviousItem_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortItemInspectCycleWidget.SelectNextItem
struct UFortItemInspectCycleWidget_SelectNextItem_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortItemInspectCycleWidget.SelectItemWithOffset
struct UFortItemInspectCycleWidget_SelectItemWithOffset_Params
{
public:
	int32                                        Offset;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortItemInspectCycleWidget.OnItemCycled
struct UFortItemInspectCycleWidget_OnItemCycled_Params
{
public:
	class UFortItem*                             OldItem;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItem*                             NewItem;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OffsetFromPreviousItem;                            // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83CB[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortItemInspectCycleWidget.GetItemWithOffset_BP
struct UFortItemInspectCycleWidget_GetItemWithOffset_BP_Params
{
public:
	int32                                        IndexOffset;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83CC[0x4];                                     // Fixing Size After Last Property..
	class UFortItem*                             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function SaveTheWorldUI.FortAlterationOption.Setup
struct UFortAlterationOption_Setup_Params
{
public:
	struct FAlterationOption                     InAlterationOption;                                // 0x0(0x38)(Parm, OutParm, NativeAccessSpecifierPublic)
	enum class EFortAlterationOptionType         InAlterationOptionType;                            // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83CE[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortAlterationOption.OnSetup
struct UFortAlterationOption_OnSetup_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortAlterationOption.GetRequiredIngredients
struct UFortAlterationOption_GetRequiredIngredients_Params
{
public:
	TArray<struct FFortItemQuantityPair>         ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortAlterationOption.GetNextPipCount
struct UFortAlterationOption_GetNextPipCount_Params
{
public:
	float                                        MaxPipCount;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortAlterationOption.GetCurrentPipCount
struct UFortAlterationOption_GetCurrentPipCount_Params
{
public:
	float                                        MaxPipCount;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortAlterationOption.GetAlterationOptionType
struct UFortAlterationOption_GetAlterationOptionType_Params
{
public:
	enum class EFortAlterationOptionType         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortAlterationOption.GetAlterationDefinition
struct UFortAlterationOption_GetAlterationDefinition_Params
{
public:
	class UFortAlterationItemDefinition*         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortAlterationOptionsBase.ProcessAlterationOptions
struct UFortAlterationOptionsBase_ProcessAlterationOptions_Params
{
public:
	bool                                         bIntroAlterations;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortAlterationOptionsBase.OnItemChanged
struct UFortAlterationOptionsBase_OnItemChanged_Params
{
public:
	bool                                         bIntroAlterations;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortAlterationOptionsBase.OnGenerateOption
struct UFortAlterationOptionsBase_OnGenerateOption_Params
{
public:
	enum class EFortAlterationOptionType         OptionType;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83D1[0x7];                                     // Fixing Size After Last Property..
	class UFortAlterationOption*                 OptionWidget;                                      // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortAlterationOptionsBase.IsValidAlterationSlot
struct UFortAlterationOptionsBase_IsValidAlterationSlot_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortAlterationOptionsBase.HandleAlterationsOptionSelected
struct UFortAlterationOptionsBase_HandleAlterationsOptionSelected_Params
{
public:
	class UCommonButtonLegacy*                   AlterationOptionButton;                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GroupIndex;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83D2[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortAlterationOptionsBase.HandleAlterationsOptionHovered
struct UFortAlterationOptionsBase_HandleAlterationsOptionHovered_Params
{
public:
	class UCommonButtonLegacy*                   AlterationOptionButton;                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GroupIndex;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83D3[0x4];                                     // Fixing Size Of Struct..
};

// 0x2 (0x2 - 0x0)
// Function SaveTheWorldUI.FortAlterationOptionsBase.DoAlterationOptionsExist
struct UFortAlterationOptionsBase_DoAlterationOptionsExist_Params
{
public:
	enum class EFortAlterationOptionType         OptionType;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationInfoSTW.TimeSecondsToText
struct UFortMissionActivationInfoSTW_TimeSecondsToText_Params
{
public:
	float                                        InSeconds;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83D8[0x4];                                     // Fixing Size After Last Property..
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationInfoSTW.SubmitVote
struct UFortMissionActivationInfoSTW_SubmitVote_Params
{
public:
	enum class EFortVoteType                     VoteType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApprove;                                          // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationInfoSTW.RequestVote
struct UFortMissionActivationInfoSTW_RequestVote_Params
{
public:
	enum class EFortVoteType                     VoteType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83D9[0x3];                                     // Fixing Size After Last Property..
	float                                        VoteDuration;                                      // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FailedVoteLockOutDuration;                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortVoteArbitratorType           ArbitratorType;                                    // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83DA[0x3];                                     // Fixing Size Of Struct..
};

// 0x2 (0x2 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationInfoSTW.IsVoteLocked
struct UFortMissionActivationInfoSTW_IsVoteLocked_Params
{
public:
	enum class EFortVoteType                     VoteType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationInfoSTW.IsVoteActive
struct UFortMissionActivationInfoSTW_IsVoteActive_Params
{
public:
	enum class EFortVoteType                     VoteType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationInfoSTW.IsPlayerVoteInstigator
struct UFortMissionActivationInfoSTW_IsPlayerVoteInstigator_Params
{
public:
	enum class EFortVoteType                     VoteType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationInfoSTW.IsAnyVoteActive
struct UFortMissionActivationInfoSTW_IsAnyVoteActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationInfoSTW.HasPlayerVoted
struct UFortMissionActivationInfoSTW_HasPlayerVoted_Params
{
public:
	enum class EFortVoteType                     VoteType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationInfoSTW.HandleTeamMemberRemoved
struct UFortMissionActivationInfoSTW_HandleTeamMemberRemoved_Params
{
public:
	int32                                        RemovedIndex;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x250 (0x250 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationInfoSTW.HandleTeamMemberAdded
struct UFortMissionActivationInfoSTW_HandleTeamMemberAdded_Params
{
public:
	struct FFortTeamMemberInfo                   NewInfo;                                           // 0x0(0x250)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationInfoSTW.HandleGameplayVoteUpdated
struct UFortMissionActivationInfoSTW_HandleGameplayVoteUpdated_Params
{
public:
	enum class EFortVoteType                     VoteType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortVoteStatus                   VoteStatus;                                        // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83DB[0x2];                                     // Fixing Size After Last Property..
	int32                                        VoteResult;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVoter>                        Voters;                                            // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationInfoSTW.GetVoteTimeRemaining
struct UFortMissionActivationInfoSTW_GetVoteTimeRemaining_Params
{
public:
	enum class EFortVoteType                     VoteType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83DC[0x3];                                     // Fixing Size After Last Property..
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationInfoSTW.GetVoters
struct UFortMissionActivationInfoSTW_GetVoters_Params
{
public:
	enum class EFortVoteType                     VoteType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83DD[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FVoter>                        ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SaveTheWorldUI.FortMissionActivationInfoSTW.GetVoteCounts
struct UFortMissionActivationInfoSTW_GetVoteCounts_Params
{
public:
	enum class EFortVoteType                     VoteType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83DE[0x3];                                     // Fixing Size After Last Property..
	int32                                        OutYesVoteCount;                                   // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutNoVoteCount;                                    // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationInfoSTW.GetStartObjectiveBluGloRequirement
struct UFortMissionActivationInfoSTW_GetStartObjectiveBluGloRequirement_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationInfoSTW.GetPrimaryMissionInfo
struct UFortMissionActivationInfoSTW_GetPrimaryMissionInfo_Params
{
public:
	class UFortMissionInfo*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationInfoSTW.GetPrimaryMission
struct UFortMissionActivationInfoSTW_GetPrimaryMission_Params
{
public:
	class UFortMission*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationInfoSTW.GetMissionVoteType
struct UFortMissionActivationInfoSTW_GetMissionVoteType_Params
{
public:
	enum class EFortVoteType                     ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationInfoSTW.GetMissionObjectiveTimeRemaining
struct UFortMissionActivationInfoSTW_GetMissionObjectiveTimeRemaining_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationInfoSTW.GetLockoutTimeRemaining
struct UFortMissionActivationInfoSTW_GetLockoutTimeRemaining_Params
{
public:
	enum class EFortVoteType                     VoteType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83DF[0x7];                                     // Fixing Size After Last Property..
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationInfoSTW.GetInstigatorId
struct UFortMissionActivationInfoSTW_GetInstigatorId_Params
{
public:
	enum class EFortVoteType                     VoteType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83E0[0x7];                                     // Fixing Size After Last Property..
	struct FUniqueNetIdRepl                      ReturnValue;                                       // 0x8(0x30)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationInfoSTW.GetIncreaseDifficultyBluGloRequirement
struct UFortMissionActivationInfoSTW_GetIncreaseDifficultyBluGloRequirement_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationInfoSTW.GetDeltaRewards
struct UFortMissionActivationInfoSTW_GetDeltaRewards_Params
{
public:
	int32                                        BaseDifficultyIncreaseTier;                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ComparedDifficultyIncreaseTier;                    // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortItemDelta>                DeltaRewards;                                      // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationInfoSTW.GetAvailableBluGloCount
struct UFortMissionActivationInfoSTW_GetAvailableBluGloCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationInfoSTW.GetArbitratorType
struct UFortMissionActivationInfoSTW_GetArbitratorType_Params
{
public:
	enum class EFortVoteType                     VoteType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortVoteArbitratorType           ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationInfoSTW.DoesPrimaryMissionContainTags
struct UFortMissionActivationInfoSTW_DoesPrimaryMissionContainTags_Params
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83E1[0x7];                                     // Fixing Size Of Struct..
};

// 0x2 (0x2 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationInfoSTW.CanRequestVote
struct UFortMissionActivationInfoSTW_CanRequestVote_Params
{
public:
	enum class EFortVoteType                     VoteType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.SetInfoObject
struct UFortMissionActivationWidgetSTWPanel_SetInfoObject_Params
{
public:
	class UFortMissionActivationInfoSTW*         NewInfoObject;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.OnVoteUpdatedBP
struct UFortMissionActivationWidgetSTWPanel_OnVoteUpdatedBP_Params
{
public:
	enum class EFortVoteType                     VoteType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.OnVoteLockoutChangedBP
struct UFortMissionActivationWidgetSTWPanel_OnVoteLockoutChangedBP_Params
{
public:
	enum class EFortVoteType                     VoteType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLocked;                                         // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.OnMultiplayerChangedBP
struct UFortMissionActivationWidgetSTWPanel_OnMultiplayerChangedBP_Params
{
public:
	bool                                         bIsMultiplayer;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.OnActiveVoteChangedBP
struct UFortMissionActivationWidgetSTWPanel_OnActiveVoteChangedBP_Params
{
public:
	enum class EFortVoteType                     VoteType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsVoteActive;                                     // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83E4[0x2];                                     // Fixing Size After Last Property..
	int32                                        VoteResult;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.InfoObjectUpdated
struct UFortMissionActivationWidgetSTWPanel_InfoObjectUpdated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationWidgetSTW.RequestStartObjectiveState
struct UFortMissionActivationWidgetSTW_RequestStartObjectiveState_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationWidgetSTW.RequestDifficultyIncreaseState
struct UFortMissionActivationWidgetSTW_RequestDifficultyIncreaseState_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationWidgetSTW.RequestDefaultState
struct UFortMissionActivationWidgetSTW_RequestDefaultState_Params
{
public:
};

// 0x2 (0x2 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationWidgetSTW.OnVoteLockoutChangedBP
struct UFortMissionActivationWidgetSTW_OnVoteLockoutChangedBP_Params
{
public:
	enum class EFortVoteType                     VoteType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLocked;                                         // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationWidgetSTW.OnStateUpdated
struct UFortMissionActivationWidgetSTW_OnStateUpdated_Params
{
public:
	enum class EFortMissionActivationWidgetSTWState ActiveState;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMissionActivationWidgetSTWState PreviousState;                                     // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationWidgetSTW.OnMultiplayerChangedBP
struct UFortMissionActivationWidgetSTW_OnMultiplayerChangedBP_Params
{
public:
	bool                                         bIsMultiplayer;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationWidgetSTW.OnActiveVoteChangedBP
struct UFortMissionActivationWidgetSTW_OnActiveVoteChangedBP_Params
{
public:
	enum class EFortVoteType                     VoteType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsVoteActive;                                     // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83E6[0x2];                                     // Fixing Size After Last Property..
	int32                                        VoteResult;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortMissionActivationWidgetSTW.GetCurrentState
struct UFortMissionActivationWidgetSTW_GetCurrentState_Params
{
public:
	enum class EFortMissionActivationWidgetSTWState ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortOutpostScreen.SetInputReflectorBoxVisibility
struct UFortOutpostScreen_SetInputReflectorBoxVisibility_Params
{
public:
	bool                                         bShow;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortJournalQuestDetails.SetCurrentQuest
struct UFortJournalQuestDetails_SetCurrentQuest_Params
{
public:
	class UFortQuestItem*                        InCurrentQuest;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortJournalQuestDetails.RegisterEndSpokenDialogEvent
struct UFortJournalQuestDetails_RegisterEndSpokenDialogEvent_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortJournalQuestDetails.OnEndSpokenDialog
struct UFortJournalQuestDetails_OnEndSpokenDialog_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortJournalQuestDetails.HandleCurrentQuestChangedBP
struct UFortJournalQuestDetails_HandleCurrentQuestChangedBP_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortJournalQuestDetails.GetVisibleObjectives
struct UFortJournalQuestDetails_GetVisibleObjectives_Params
{
public:
	TArray<class UFortQuestObjectiveInfo*>       VisibleObjectives;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SaveTheWorldUI.FortJournalQuestDetails.GetRewards
struct UFortJournalQuestDetails_GetRewards_Params
{
public:
	TArray<struct FFortItemInstanceQuantityPair> OutRewards;                                        // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortItemInstanceQuantityPair> OutSelectableRewards;                              // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortJournalQuestDetails.GetFutureObjectives
struct UFortJournalQuestDetails_GetFutureObjectives_Params
{
public:
	TArray<class UFortQuestObjectiveInfo*>       FutureObjectives;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortJournalQuestDetails.GetActiveMissionTileType
struct UFortJournalQuestDetails_GetActiveMissionTileType_Params
{
public:
	enum class EFortTheaterMapTileType           ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortJournalQuestDetails.CanPlayQuest
struct UFortJournalQuestDetails_CanPlayQuest_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortJournalQuestDetails.CanPartyLeaderPlayQuest
struct UFortJournalQuestDetails_CanPartyLeaderPlayQuest_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortJournalQuestDetails.CanGotoQuest
struct UFortJournalQuestDetails_CanGotoQuest_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function SaveTheWorldUI.FortJournalQuestProgressBar.GetProgressDetails
struct UFortJournalQuestProgressBar_GetProgressDetails_Params
{
public:
	class FText                                  OutNumerator;                                      // 0x0(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	class FText                                  OutDenominator;                                    // 0x18(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	float                                        OutFraction;                                       // 0x30(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83E8[0x4];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// Function SaveTheWorldUI.FortProgressArrowButton.UpdateArrowColor
struct UFortProgressArrowButton_UpdateArrowColor_Params
{
public:
	struct FSlateColor                           Color;                                             // 0x0(0x14)(Parm, NativeAccessSpecifierPublic)
	struct FSlateColor                           HoverColor;                                        // 0x14(0x14)(Parm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortProgressArrowButton.OnShadowColorSet
struct UFortProgressArrowButton_OnShadowColorSet_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortProgressArrowButton.OnIsInteractiveSet
struct UFortProgressArrowButton_OnIsInteractiveSet_Params
{
public:
	bool                                         bIsInteractive;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortProgressArrowButton.OnArrowColorSet
struct UFortProgressArrowButton_OnArrowColorSet_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function SaveTheWorldUI.FortProgressArrowButton_Legacy.UpdateArrowColor
struct UFortProgressArrowButton_Legacy_UpdateArrowColor_Params
{
public:
	struct FSlateColor                           Color;                                             // 0x0(0x14)(Parm, NativeAccessSpecifierPublic)
	struct FSlateColor                           HoverColor;                                        // 0x14(0x14)(Parm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortProgressArrowButton_Legacy.OnShadowColorSet
struct UFortProgressArrowButton_Legacy_OnShadowColorSet_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortProgressArrowButton_Legacy.OnIsInteractiveSet
struct UFortProgressArrowButton_Legacy_OnIsInteractiveSet_Params
{
public:
	bool                                         bIsInteractive;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortProgressArrowButton_Legacy.OnArrowColorSet
struct UFortProgressArrowButton_Legacy_OnArrowColorSet_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortQuestExpiresWidget.SetData
struct UFortQuestExpiresWidget_SetData_Params
{
public:
	class UFortQuestItem*                        InItem;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestExpiresWidget.OnQuestExpirationUpdated
struct UFortQuestExpiresWidget_OnQuestExpirationUpdated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapCosmeticListWidget.UpdateCosmeticListDisplay
struct UFortQuestMapCosmeticListWidget_UpdateCosmeticListDisplay_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortQuestMapCosmeticListWidget.GetDisplayItemDefs
struct UFortQuestMapCosmeticListWidget_GetDisplayItemDefs_Params
{
public:
	TArray<class UFortItemDefinition*>           ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapDetailsPanelBase.SetScrollWidget
struct UFortQuestMapDetailsPanelBase_SetScrollWidget_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortQuestMapDetailsPanelBase.SetQuestToDisplay
struct UFortQuestMapDetailsPanelBase_SetQuestToDisplay_Params
{
public:
	class UFortQuestItemDefinition*              QuestDef;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapDetailsPanelBase.HandleQuestsUpdatedInternal
struct UFortQuestMapDetailsPanelBase_HandleQuestsUpdatedInternal_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout.UpdateGoButtonBangState
struct UFortQuestMapEventCallout_UpdateGoButtonBangState_Params
{
public:
	bool                                         bClear;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout.UpdateCalloutData
struct UFortQuestMapEventCallout_UpdateCalloutData_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout.UpdateActiveEvents
struct UFortQuestMapEventCallout_UpdateActiveEvents_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout.SetIsFaded
struct UFortQuestMapEventCallout_SetIsFaded_Params
{
public:
	bool                                         Faded;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout.SetIsExpanded
struct UFortQuestMapEventCallout_SetIsExpanded_Params
{
public:
	bool                                         Expanded;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout.ResetCallout
struct UFortQuestMapEventCallout_ResetCallout_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout.PlayFadeOut
struct UFortQuestMapEventCallout_PlayFadeOut_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout.PlayFadeIn
struct UFortQuestMapEventCallout_PlayFadeIn_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout.OnResetCallout
struct UFortQuestMapEventCallout_OnResetCallout_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout.OnPlayFadeAnimation
struct UFortQuestMapEventCallout_OnPlayFadeAnimation_Params
{
public:
	bool                                         bIsFadeOut;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout.OnEventIndexChanged
struct UFortQuestMapEventCallout_OnEventIndexChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout.OnDeactivatePlayAnimation
struct UFortQuestMapEventCallout_OnDeactivatePlayAnimation_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout.OnActivatePlayAnimation
struct UFortQuestMapEventCallout_OnActivatePlayAnimation_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout.IsCurrentEventUnlocked
struct UFortQuestMapEventCallout_IsCurrentEventUnlocked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout.GetRequiredQuestForCurrentEvent
struct UFortQuestMapEventCallout_GetRequiredQuestForCurrentEvent_Params
{
public:
	class UFortQuestItemDefinition*              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout.GetIsFaded
struct UFortQuestMapEventCallout_GetIsFaded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout.GetIsExpanded
struct UFortQuestMapEventCallout_GetIsExpanded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout.GetEventCount
struct UFortQuestMapEventCallout_GetEventCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout.DeactivateCallout
struct UFortQuestMapEventCallout_DeactivateCallout_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.UpdateGoButtonBangState
struct UFortQuestMapEventCallout_Legacy_UpdateGoButtonBangState_Params
{
public:
	bool                                         bClear;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.UpdateCalloutData
struct UFortQuestMapEventCallout_Legacy_UpdateCalloutData_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.UpdateActiveEvents
struct UFortQuestMapEventCallout_Legacy_UpdateActiveEvents_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.SetIsFaded
struct UFortQuestMapEventCallout_Legacy_SetIsFaded_Params
{
public:
	bool                                         Faded;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.SetIsExpanded
struct UFortQuestMapEventCallout_Legacy_SetIsExpanded_Params
{
public:
	bool                                         Expanded;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.ResetCallout
struct UFortQuestMapEventCallout_Legacy_ResetCallout_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.PlayFadeOut
struct UFortQuestMapEventCallout_Legacy_PlayFadeOut_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.PlayFadeIn
struct UFortQuestMapEventCallout_Legacy_PlayFadeIn_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnResetCallout
struct UFortQuestMapEventCallout_Legacy_OnResetCallout_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnPlayFadeAnimation
struct UFortQuestMapEventCallout_Legacy_OnPlayFadeAnimation_Params
{
public:
	bool                                         bIsFadeOut;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnEventIndexChanged
struct UFortQuestMapEventCallout_Legacy_OnEventIndexChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnDeactivatePlayAnimation
struct UFortQuestMapEventCallout_Legacy_OnDeactivatePlayAnimation_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnActivatePlayAnimation
struct UFortQuestMapEventCallout_Legacy_OnActivatePlayAnimation_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.IsCurrentEventUnlocked
struct UFortQuestMapEventCallout_Legacy_IsCurrentEventUnlocked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.GetRequiredQuestForCurrentEvent
struct UFortQuestMapEventCallout_Legacy_GetRequiredQuestForCurrentEvent_Params
{
public:
	class UFortQuestItemDefinition*              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.GetIsFaded
struct UFortQuestMapEventCallout_Legacy_GetIsFaded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.GetIsExpanded
struct UFortQuestMapEventCallout_Legacy_GetIsExpanded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.GetEventCount
struct UFortQuestMapEventCallout_Legacy_GetEventCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.DeactivateCallout
struct UFortQuestMapEventCallout_Legacy_DeactivateCallout_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapNodeLayout.HandleQuestIndexSelectionModelIndexChanged
struct UFortQuestMapNodeLayout_HandleQuestIndexSelectionModelIndexChanged_Params
{
public:
	bool                                         bUpdateButtonSelection;                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortQuestMapNodeLayout.HandleQuestButtonSelected
struct UFortQuestMapNodeLayout_HandleQuestButtonSelected_Params
{
public:
	class UCommonButtonBase*                     SelectedQuestButton;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ButtonIndex;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83F8[0x4];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapNodeLayout_Legacy.HandleQuestIndexSelectionModelIndexChanged
struct UFortQuestMapNodeLayout_Legacy_HandleQuestIndexSelectionModelIndexChanged_Params
{
public:
	bool                                         bUpdateButtonSelection;                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortQuestMapNodeLayout_Legacy.HandleQuestButtonSelected
struct UFortQuestMapNodeLayout_Legacy_HandleQuestButtonSelected_Params
{
public:
	class UCommonButtonLegacy*                   SelectedQuestButton;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ButtonIndex;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83FA[0x4];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapQuestTile.HandleSelectedChange
struct UFortQuestMapQuestTile_HandleSelectedChange_Params
{
public:
	bool                                         Selected;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapQuestTile.HandleQuestDataChangedBP
struct UFortQuestMapQuestTile_HandleQuestDataChangedBP_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function SaveTheWorldUI.FortQuestMapQuestTile.GetQuestNodeData
struct UFortQuestMapQuestTile_GetQuestNodeData_Params
{
public:
	class UFortQuestItemDefinition*              QuestItemDefinition;                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortQuestMapNode                     NodeData;                                          // 0x8(0x18)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapQuestTile_Legacy.HandleSelectedChange
struct UFortQuestMapQuestTile_Legacy_HandleSelectedChange_Params
{
public:
	bool                                         Selected;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapQuestTile_Legacy.HandleQuestDataChangedBP
struct UFortQuestMapQuestTile_Legacy_HandleQuestDataChangedBP_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function SaveTheWorldUI.FortQuestMapQuestTile_Legacy.GetQuestNodeData
struct UFortQuestMapQuestTile_Legacy_GetQuestNodeData_Params
{
public:
	class UFortQuestItemDefinition*              QuestItemDefinition;                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortQuestMapNode                     NodeData;                                          // 0x8(0x18)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen.UpdateQuestMapMode
struct UFortQuestMapScreen_UpdateQuestMapMode_Params
{
public:
	enum class EQuestMapScreenMode               QuestMapMode;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen.UpdateInputActionStates
struct UFortQuestMapScreen_UpdateInputActionStates_Params
{
public:
	bool                                         bShowingCallout;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen.ToggleQuestMapState
struct UFortQuestMapScreen_ToggleQuestMapState_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen.ShowQuestLog
struct UFortQuestMapScreen_ShowQuestLog_Params
{
public:
	class UFortQuestItem*                        QuestItem;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen.ShowModalNews
struct UFortQuestMapScreen_ShowModalNews_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen.SetQuestMapViewer
struct UFortQuestMapScreen_SetQuestMapViewer_Params
{
public:
	class UFortQuestMapViewer*                   Value;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen.SetIgnorePageNavigation
struct UFortQuestMapScreen_SetIgnorePageNavigation_Params
{
public:
	bool                                         bIgnoreNavigation;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen.SetBeyondCutoffQuest
struct UFortQuestMapScreen_SetBeyondCutoffQuest_Params
{
public:
	bool                                         bBeyondCutoff;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen.OnShowCurrentQuestInputActionValueChanged
struct UFortQuestMapScreen_OnShowCurrentQuestInputActionValueChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen.OnEventCalloutExpandChanged
struct UFortQuestMapScreen_OnEventCalloutExpandChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen.OnEventCalloutButtonClicked
struct UFortQuestMapScreen_OnEventCalloutButtonClicked_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen.IsEventFlagActive
struct UFortQuestMapScreen_IsEventFlagActive_Params
{
public:
	class FString                                EventFlag;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83FC[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen.IsBeyondQuest
struct UFortQuestMapScreen_IsBeyondQuest_Params
{
public:
	class UFortQuestItemDefinition*              QuestDef;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83FD[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen.InitializeQuestData
struct UFortQuestMapScreen_InitializeQuestData_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen.HandleQuestPageChanged
struct UFortQuestMapScreen_HandleQuestPageChanged_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen.HandleQuestIndexSelectionModelChanged
struct UFortQuestMapScreen_HandleQuestIndexSelectionModelChanged_Params
{
public:
	bool                                         bUpdateButtonSelection;                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen.HandleQuestDetailsUpdated
struct UFortQuestMapScreen_HandleQuestDetailsUpdated_Params
{
public:
	class UFortQuestItem*                        QuestDefinition;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen.HandleMapViewerNavigationRequest
struct UFortQuestMapScreen_HandleMapViewerNavigationRequest_Params
{
public:
	enum class EViewerNavigationDirection        Direction;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen.HandleMapModeSwitch
struct UFortQuestMapScreen_HandleMapModeSwitch_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen.HandleEventQuestMapActivate
struct UFortQuestMapScreen_HandleEventQuestMapActivate_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen.HandleEventCalloutDataChangedBP
struct UFortQuestMapScreen_HandleEventCalloutDataChangedBP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen.HandleBackInputAction
struct UFortQuestMapScreen_HandleBackInputAction_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen.GetCurrentPageCameraMode
struct UFortQuestMapScreen_GetCurrentPageCameraMode_Params
{
public:
	enum class EFrontEndCamera                   ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen.GetBeyondCutoffQuest
struct UFortQuestMapScreen_GetBeyondCutoffQuest_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen.ClaimQuestRewards
struct UFortQuestMapScreen_ClaimQuestRewards_Params
{
public:
	class UFortQuestItem*                        QuestItem;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen.CheckForNewMainQuest
struct UFortQuestMapScreen_CheckForNewMainQuest_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.UpdateQuestMapMode
struct UFortQuestMapScreen_Legacy_UpdateQuestMapMode_Params
{
public:
	enum class EQuestMapScreenMode               QuestMapMode;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.ToggleQuestMapState
struct UFortQuestMapScreen_Legacy_ToggleQuestMapState_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.SetQuestMapViewer
struct UFortQuestMapScreen_Legacy_SetQuestMapViewer_Params
{
public:
	class UFortQuestMapViewer_Legacy*            Value;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.SetIgnorePageNavigation
struct UFortQuestMapScreen_Legacy_SetIgnorePageNavigation_Params
{
public:
	bool                                         bIgnoreNavigation;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.SetFindCurrentActionVisibility
struct UFortQuestMapScreen_Legacy_SetFindCurrentActionVisibility_Params
{
public:
	enum class EInputActionState                 ActionVisibility;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.SetBeyondCutoffQuest
struct UFortQuestMapScreen_Legacy_SetBeyondCutoffQuest_Params
{
public:
	bool                                         bBeyondCutoff;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.OnEventCalloutExpandChanged
struct UFortQuestMapScreen_Legacy_OnEventCalloutExpandChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.OnEventCalloutButtonClicked
struct UFortQuestMapScreen_Legacy_OnEventCalloutButtonClicked_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.IsEventFlagActive
struct UFortQuestMapScreen_Legacy_IsEventFlagActive_Params
{
public:
	class FString                                EventFlag;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8401[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.IsBeyondQuest
struct UFortQuestMapScreen_Legacy_IsBeyondQuest_Params
{
public:
	class UFortQuestItemDefinition*              QuestDef;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8402[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.InitializeQuestData
struct UFortQuestMapScreen_Legacy_InitializeQuestData_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleRequestCurrentQuestNavigation
struct UFortQuestMapScreen_Legacy_HandleRequestCurrentQuestNavigation_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleQuestPageChanged
struct UFortQuestMapScreen_Legacy_HandleQuestPageChanged_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleQuestIndexSelectionModelChanged
struct UFortQuestMapScreen_Legacy_HandleQuestIndexSelectionModelChanged_Params
{
public:
	bool                                         bUpdateButtonSelection;                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleQuestDetailsUpdated
struct UFortQuestMapScreen_Legacy_HandleQuestDetailsUpdated_Params
{
public:
	class UFortQuestItem*                        QuestDefinition;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleMapViewerNavigationRequest
struct UFortQuestMapScreen_Legacy_HandleMapViewerNavigationRequest_Params
{
public:
	enum class EViewerNavigationDirection        Direction;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleMapModeSwitch
struct UFortQuestMapScreen_Legacy_HandleMapModeSwitch_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleEventQuestMapActivate
struct UFortQuestMapScreen_Legacy_HandleEventQuestMapActivate_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleEventCalloutDataChangedBP
struct UFortQuestMapScreen_Legacy_HandleEventCalloutDataChangedBP_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.GetCurrentPageCameraMode
struct UFortQuestMapScreen_Legacy_GetCurrentPageCameraMode_Params
{
public:
	enum class EFrontEndCamera                   ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.GetBeyondCutoffQuest
struct UFortQuestMapScreen_Legacy_GetBeyondCutoffQuest_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.CheckForNewMainQuest
struct UFortQuestMapScreen_Legacy_CheckForNewMainQuest_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapViewer_Legacy.UpdateViewerData
struct UFortQuestMapViewer_Legacy_UpdateViewerData_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function SaveTheWorldUI.FortQuestMapViewer_Legacy.OnTryUpdateUserWidgetColor
struct UFortQuestMapViewer_Legacy_OnTryUpdateUserWidgetColor_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           OverrideColor;                                     // 0x8(0x14)(Parm, NativeAccessSpecifierPublic)
	uint8                                        Pad_8405[0x4];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestMapViewer_Legacy.OnPlayLayoutOutroAnimation
struct UFortQuestMapViewer_Legacy_OnPlayLayoutOutroAnimation_Params
{
public:
	enum class EViewerNavigationDirection        TravelDirection;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapViewer_Legacy.OnPlayLayoutFadeInAnimation
struct UFortQuestMapViewer_Legacy_OnPlayLayoutFadeInAnimation_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestMapViewer_Legacy.HandleLayoutOutroAnimationFinished
struct UFortQuestMapViewer_Legacy_HandleLayoutOutroAnimationFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestPlayButton.OnContentMissing
struct UFortQuestPlayButton_OnContentMissing_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestPlayButton.HandlePlayerStateChanged
struct UFortQuestPlayButton_HandlePlayerStateChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestPlayButton.HandleMatchmakingStarted
struct UFortQuestPlayButton_HandleMatchmakingStarted_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestPlayButton.HandleMatchmakingComplete
struct UFortQuestPlayButton_HandleMatchmakingComplete_Params
{
public:
	enum class EMatchmakingCompleteResult        Result;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestPlayButton.HandleLobbyDisconnected
struct UFortQuestPlayButton_HandleLobbyDisconnected_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestPlayButton.CanPlayQuest
struct UFortQuestPlayButton_CanPlayQuest_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestPlayButton.AttemptToPlayQuest
struct UFortQuestPlayButton_AttemptToPlayQuest_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortQuestTreeItemWidget.SetupAsQuest
struct UFortQuestTreeItemWidget_SetupAsQuest_Params
{
public:
	class UFortQuestItem*                        Category;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortQuestTreeItemWidget.SetupAsCategory
struct UFortQuestTreeItemWidget_SetupAsCategory_Params
{
public:
	class UFortQuestCategory*                    Category;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestTreeItemWidget.OnQuestsUpdated
struct UFortQuestTreeItemWidget_OnQuestsUpdated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestTreeItemWidget.HandleQuestsUpdated
struct UFortQuestTreeItemWidget_HandleQuestsUpdated_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortQuestTreeItemWidget_Legacy.SetupAsQuest
struct UFortQuestTreeItemWidget_Legacy_SetupAsQuest_Params
{
public:
	class UFortQuestItem*                        Category;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortQuestTreeItemWidget_Legacy.SetupAsCategory
struct UFortQuestTreeItemWidget_Legacy_SetupAsCategory_Params
{
public:
	class UFortQuestCategory*                    Category;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestTreeItemWidget_Legacy.OnQuestsUpdated
struct UFortQuestTreeItemWidget_Legacy_OnQuestsUpdated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestTreeItemWidget_Legacy.HandleQuestsUpdated
struct UFortQuestTreeItemWidget_Legacy_HandleQuestsUpdated_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortQuestScreen.TriggerClaimRewardEvent
struct UFortQuestScreen_TriggerClaimRewardEvent_Params
{
public:
	class UFortQuestItem*                        QuestItem;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortQuestScreen.SetInputActionStates
struct UFortQuestScreen_SetInputActionStates_Params
{
public:
	class UFortQuestItem*                        QuestItem;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsQuestAudioPlaying;                              // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldShowPlayQuest;                              // 0x9(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAreQuestItemsDifferent;                           // 0xA(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_840A[0x5];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortQuestScreen.SetDisableClaimRewardButton
struct UFortQuestScreen_SetDisableClaimRewardButton_Params
{
public:
	bool                                         bToDisable;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestScreen.ProcessPendingSeenQuestItems
struct UFortQuestScreen_ProcessPendingSeenQuestItems_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestScreen.OnContentMissing
struct UFortQuestScreen_OnContentMissing_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortQuestScreen.BP_SetInitialQuestToSelect
struct UFortQuestScreen_BP_SetInitialQuestToSelect_Params
{
public:
	class UFortQuestItem*                        QuestItem;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestScreen.BP_HandleUnpinQuestAction
struct UFortQuestScreen_BP_HandleUnpinQuestAction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestScreen.BP_HandleStopConversationAction
struct UFortQuestScreen_BP_HandleStopConversationAction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestScreen.BP_HandleReplayOutroAction
struct UFortQuestScreen_BP_HandleReplayOutroAction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestScreen.BP_HandleReplayIntroAction
struct UFortQuestScreen_BP_HandleReplayIntroAction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestScreen.BP_HandlePlayQuestAction
struct UFortQuestScreen_BP_HandlePlayQuestAction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestScreen.BP_HandlePinQuestAction
struct UFortQuestScreen_BP_HandlePinQuestAction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestScreen.BP_HandleClaimRewardAction
struct UFortQuestScreen_BP_HandleClaimRewardAction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestScreen.BP_HandleBackAction
struct UFortQuestScreen_BP_HandleBackAction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestScreen.BP_HandleAbandonQuestAction
struct UFortQuestScreen_BP_HandleAbandonQuestAction_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortQuestScreen.AttemptToPlayQuest
struct UFortQuestScreen_AttemptToPlayQuest_Params
{
public:
	class UFortQuestItem*                        QuestItem;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortQuestScreen_Legacy.ProcessPendingSeenQuestItems
struct UFortQuestScreen_Legacy_ProcessPendingSeenQuestItems_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortResearchMenuBase.UseResearchRespecToken
struct UFortResearchMenuBase_UseResearchRespecToken_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortResearchMenuBase.RequestPurchaseResearchLevel
struct UFortResearchMenuBase_RequestPurchaseResearchLevel_Params
{
public:
	class FString                                StatId;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortResearchMenuBase.OnUseResearchRespecTokenComplete
struct UFortResearchMenuBase_OnUseResearchRespecTokenComplete_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortResearchMenuBase.OnPurchaseResearchLevelStarted
struct UFortResearchMenuBase_OnPurchaseResearchLevelStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortResearchMenuBase.OnPurchaseResearchLevelCompleted
struct UFortResearchMenuBase_OnPurchaseResearchLevelCompleted_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortResearchMenuBase.GetResearchRespecTokenCount
struct UFortResearchMenuBase_GetResearchRespecTokenCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortResearchMenuBase.GetClaimableResearchPointEstimate
struct UFortResearchMenuBase_GetClaimableResearchPointEstimate_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortResearchMenuBase.AreResearchRespecTokensAvailable
struct UFortResearchMenuBase_AreResearchRespecTokensAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortResearchStatTileWidget.OnStatChanged
struct UFortResearchStatTileWidget_OnStatChanged_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortResearchStatTileWidget.IsAtMaxResearchLevel
struct UFortResearchStatTileWidget_IsAtMaxResearchLevel_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortResearchStatTileWidget.GetStatIdName
struct UFortResearchStatTileWidget_GetStatIdName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortResearchStatTileWidget.GetPersonalStatType
struct UFortResearchStatTileWidget_GetPersonalStatType_Params
{
public:
	enum class EFortStatType                     ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortResearchStatTileWidget.GetNextTeamStatValueDelta
struct UFortResearchStatTileWidget_GetNextTeamStatValueDelta_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortResearchStatTileWidget.GetNextPersonalStatValueDelta
struct UFortResearchStatTileWidget_GetNextPersonalStatValueDelta_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortResearchStatTileWidget.GetNextCombinedStatValueDelta
struct UFortResearchStatTileWidget_GetNextCombinedStatValueDelta_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortResearchStatTileWidget.GetCurrentTeamStatValue
struct UFortResearchStatTileWidget_GetCurrentTeamStatValue_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortResearchStatTileWidget.GetCurrentResearchLevel
struct UFortResearchStatTileWidget_GetCurrentResearchLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortResearchStatTileWidget.GetCurrentPersonalStatValue
struct UFortResearchStatTileWidget_GetCurrentPersonalStatValue_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortResearchStatTileWidget.GetCurrentCombinedStatValue
struct UFortResearchStatTileWidget_GetCurrentCombinedStatValue_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortResearchStatTileWidget.GetCostToIncreaseStat
struct UFortResearchStatTileWidget_GetCostToIncreaseStat_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationData.GetIconBrush
struct UFortRewardNotificationData_GetIconBrush_Params
{
public:
	struct FSlateBrush                           IconBrush;                                         // 0x0(0xC0)(Parm, OutParm, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    BrushSize;                                         // 0xC0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_840D[0xE];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationSubWidget.TransitionOutBegin
struct UFortRewardNotificationSubWidget_TransitionOutBegin_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationSubWidget.TransitionOut
struct UFortRewardNotificationSubWidget_TransitionOut_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationSubWidget.TransitionInBegin
struct UFortRewardNotificationSubWidget_TransitionInBegin_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationSubWidget.TransitionIn
struct UFortRewardNotificationSubWidget_TransitionIn_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationSubWidget.SetPrimaryActionText
struct UFortRewardNotificationSubWidget_SetPrimaryActionText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationSubWidget.SetPrimaryActionHidden
struct UFortRewardNotificationSubWidget_SetPrimaryActionHidden_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationSubWidget.SetPrimaryActionEnabled
struct UFortRewardNotificationSubWidget_SetPrimaryActionEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationSubWidget.SetInputActionHandlerState
struct UFortRewardNotificationSubWidget_SetInputActionHandlerState_Params
{
public:
	class UDataTable*                            DataTable;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RowName;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputActionState                 State;                                             // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_840F[0x3];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationSubWidget.RemoveInputActionHandler
struct UFortRewardNotificationSubWidget_RemoveInputActionHandler_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationSubWidget.RemoveAllInputActionHandlers
struct UFortRewardNotificationSubWidget_RemoveAllInputActionHandlers_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationSubWidget.OnPrimaryAction
struct UFortRewardNotificationSubWidget_OnPrimaryAction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationSubWidget.OnNavigationUp
struct UFortRewardNotificationSubWidget_OnNavigationUp_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationSubWidget.OnNavigationRight
struct UFortRewardNotificationSubWidget_OnNavigationRight_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationSubWidget.OnNavigationLeft
struct UFortRewardNotificationSubWidget_OnNavigationLeft_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationSubWidget.OnNavigationDown
struct UFortRewardNotificationSubWidget_OnNavigationDown_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationSubWidget.OnDeactivated
struct UFortRewardNotificationSubWidget_OnDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationSubWidget.OnActivated
struct UFortRewardNotificationSubWidget_OnActivated_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationSubWidget.IsPrimaryActionHidden
struct UFortRewardNotificationSubWidget_IsPrimaryActionHidden_Params
{
public:
	bool                                         bHidden;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationSubWidget.IsPrimaryActionEnabled
struct UFortRewardNotificationSubWidget_IsPrimaryActionEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationSubWidget.InspectItem
struct UFortRewardNotificationSubWidget_InspectItem_Params
{
public:
	class UFortItem*                             ItemToInspect;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QuantityOverride;                                  // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8410[0x4];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationSubWidget.Init
struct UFortRewardNotificationSubWidget_Init_Params
{
public:
	class UFortRewardNotificationWidget*         MainWidget;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationSubWidget.AddInputActionHandler
struct UFortRewardNotificationSubWidget_AddInputActionHandler_Params
{
public:
	class UDataTable*                            DataTable;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RowName;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           CommittedEvent;                                    // 0xC(0xC)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortRewardConversationWidget.IsValidConversation
struct UFortRewardConversationWidget_IsValidConversation_Params
{
public:
	class UFortConversation*                     Conversation;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8412[0x7];                                     // Fixing Size Of Struct..
};

// 0xE0 (0xE0 - 0x0)
// Function SaveTheWorldUI.FortRewardConversationWidget.GetDataFromSentence
struct UFortRewardConversationWidget_GetDataFromSentence_Params
{
public:
	struct FFortConversationSentence             Sentence;                                          // 0x0(0xC0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  Text;                                              // 0xC0(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	class UTexture2D*                            TalkingHeadTexture;                                // 0xD8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SaveTheWorldUI.FortRewardExpeditionWidget.OnCollectExpeditionCompleted
struct UFortRewardExpeditionWidget_OnCollectExpeditionCompleted_Params
{
public:
	class UFortExpeditionItem*                   Expedition;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSucceeded;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8413[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FFortItemInstanceQuantityPair> Rewards;                                           // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortRewardExpeditionWidget.CollectExpedition
struct UFortRewardExpeditionWidget_CollectExpedition_Params
{
public:
	class UFortExpeditionItem*                   Expedition;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortRewardNewQuestWidget.IsValidConversation
struct UFortRewardNewQuestWidget_IsValidConversation_Params
{
public:
	class UFortConversation*                     Conversation;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8415[0x7];                                     // Fixing Size Of Struct..
};

// 0xE0 (0xE0 - 0x0)
// Function SaveTheWorldUI.FortRewardNewQuestWidget.GetDataFromSentence
struct UFortRewardNewQuestWidget_GetDataFromSentence_Params
{
public:
	struct FFortConversationSentence             Sentence;                                          // 0x0(0xC0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  Text;                                              // 0xC0(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	class UTexture2D*                            TalkingHeadTexture;                                // 0xD8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.ShowMulchConfirmationModal
struct UFortRewardNotificationWidget_ShowMulchConfirmationModal_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.SetPrimaryActionText
struct UFortRewardNotificationWidget_SetPrimaryActionText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.SetPrimaryActionHidden
struct UFortRewardNotificationWidget_SetPrimaryActionHidden_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.SetPrimaryActionEnabled
struct UFortRewardNotificationWidget_SetPrimaryActionEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.ResetAllRewardData
struct UFortRewardNotificationWidget_ResetAllRewardData_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.PopulateReward
struct UFortRewardNotificationWidget_PopulateReward_Params
{
public:
	class UFortRewardNotificationData*           Reward;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.OnRewardsScreenClosed
struct UFortRewardNotificationWidget_OnRewardsScreenClosed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.OnRewardsClaimFailed
struct UFortRewardNotificationWidget_OnRewardsClaimFailed_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.OnRewardsClaimed
struct UFortRewardNotificationWidget_OnRewardsClaimed_Params
{
public:
	TArray<struct FFortItemInstanceQuantityPair> ItemList;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.OnPrimaryActionTextChanged
struct UFortRewardNotificationWidget_OnPrimaryActionTextChanged_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.OnPrimaryActionHidden
struct UFortRewardNotificationWidget_OnPrimaryActionHidden_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.OnPrimaryActionEnabled
struct UFortRewardNotificationWidget_OnPrimaryActionEnabled_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.OnPrimaryActionDisabled
struct UFortRewardNotificationWidget_OnPrimaryActionDisabled_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.OnPopulateNewQuestReward
struct UFortRewardNotificationWidget_OnPopulateNewQuestReward_Params
{
public:
	class UFortRewardEpicQuestData*              QuestReward;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.OnPopulateGiftBoxReward
struct UFortRewardNotificationWidget_OnPopulateGiftBoxReward_Params
{
public:
	class UFortRewardGiftBoxData*                GiftBoxReward;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.OnPopulateExpeditionReward
struct UFortRewardNotificationWidget_OnPopulateExpeditionReward_Params
{
public:
	class UFortRewardExpeditionData*             ExpeditionReward;                                  // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.OnPopulateChoiceRewards
struct UFortRewardNotificationWidget_OnPopulateChoiceRewards_Params
{
public:
	TArray<struct FFortItemInstanceQuantityPair> ItemList;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.OnNavigationUp
struct UFortRewardNotificationWidget_OnNavigationUp_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.OnNavigationRight
struct UFortRewardNotificationWidget_OnNavigationRight_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.OnNavigationLeft
struct UFortRewardNotificationWidget_OnNavigationLeft_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.OnNavigationDown
struct UFortRewardNotificationWidget_OnNavigationDown_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.OnMulchCompleted
struct UFortRewardNotificationWidget_OnMulchCompleted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.NotifyPanelDeactivated
struct UFortRewardNotificationWidget_NotifyPanelDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.NotifyPanelActivated
struct UFortRewardNotificationWidget_NotifyPanelActivated_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.MarkDefaultItemsForMulch
struct UFortRewardNotificationWidget_MarkDefaultItemsForMulch_Params
{
public:
	TArray<struct FFortItemInstanceQuantityPair> ItemList;                                          // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.IsPrimaryActionHidden
struct UFortRewardNotificationWidget_IsPrimaryActionHidden_Params
{
public:
	bool                                         bHidden;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.IsPrimaryActionEnabled
struct UFortRewardNotificationWidget_IsPrimaryActionEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.InspectItem
struct UFortRewardNotificationWidget_InspectItem_Params
{
public:
	class UFortItem*                             ItemToInspect;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QuantityOverride;                                  // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8416[0x4];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.HideMulchConfirmationModal
struct UFortRewardNotificationWidget_HideMulchConfirmationModal_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.HandleOnQuestRewardClaimed
struct UFortRewardNotificationWidget_HandleOnQuestRewardClaimed_Params
{
public:
	class UFortQuestItem*                        Quest;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortItemInstanceQuantityPair> Rewards;                                           // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.HandleOnNoQuestRewardsToClaim
struct UFortRewardNotificationWidget_HandleOnNoQuestRewardsToClaim_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.HandleOnMissionRewardsOpenFailed
struct UFortRewardNotificationWidget_HandleOnMissionRewardsOpenFailed_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.HandleOnMissionRewardsOpened
struct UFortRewardNotificationWidget_HandleOnMissionRewardsOpened_Params
{
public:
	TArray<struct FFortItemInstanceQuantityPair> MissionRewards;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.HandleOnMissionAlertRewardsOpened
struct UFortRewardNotificationWidget_HandleOnMissionAlertRewardsOpened_Params
{
public:
	TArray<struct FFortItemInstanceQuantityPair> AlertRewards;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.HandleOnItemCacheRewardsClaimFailed
struct UFortRewardNotificationWidget_HandleOnItemCacheRewardsClaimFailed_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.HandleOnItemCacheRewardsClaimed
struct UFortRewardNotificationWidget_HandleOnItemCacheRewardsClaimed_Params
{
public:
	TArray<struct FFortItemInstanceQuantityPair> ClaimedRewards;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.HandleOnDifficultyIncreaseRewardsClaimFailed
struct UFortRewardNotificationWidget_HandleOnDifficultyIncreaseRewardsClaimFailed_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.HandleOnDifficultyIncreaseRewardsClaimed
struct UFortRewardNotificationWidget_HandleOnDifficultyIncreaseRewardsClaimed_Params
{
public:
	TArray<struct FFortItemInstanceQuantityPair> DifficultyRewards;                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.HandleOnCollectionBookRewardClaimed
struct UFortRewardNotificationWidget_HandleOnCollectionBookRewardClaimed_Params
{
public:
	struct FFortCollectionBookRewards            RewardClaimed;                                     // 0x0(0x60)(Parm, NativeAccessSpecifierPublic)
	bool                                         bSuccess;                                          // 0x60(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8417[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FFortItemInstanceQuantityPair> ActualRewards;                                     // 0x68(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.BeginCloseRewardsScreen
struct UFortRewardNotificationWidget_BeginCloseRewardsScreen_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.AddQuestData
struct UFortRewardNotificationWidget_AddQuestData_Params
{
public:
	class UFortQuestItem*                        Quest;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.AddPhoenixLevelUpRewardData
struct UFortRewardNotificationWidget_AddPhoenixLevelUpRewardData_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.AddMissionData
struct UFortRewardNotificationWidget_AddMissionData_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.AddMissionAlertData
struct UFortRewardNotificationWidget_AddMissionAlertData_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.AddItemCacheRewardData
struct UFortRewardNotificationWidget_AddItemCacheRewardData_Params
{
public:
	class UFortItem*                             ItemCache;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.AddGiftBoxData
struct UFortRewardNotificationWidget_AddGiftBoxData_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.AddExpeditionData
struct UFortRewardNotificationWidget_AddExpeditionData_Params
{
public:
	class UFortExpeditionItem*                   ExpeditionItem;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.AddEpicQuestData
struct UFortRewardNotificationWidget_AddEpicQuestData_Params
{
public:
	class UFortQuestItem*                        Quest;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.AddDifficultyIncreaseRewardData
struct UFortRewardNotificationWidget_AddDifficultyIncreaseRewardData_Params
{
public:
};

// 0x60 (0x60 - 0x0)
// Function SaveTheWorldUI.FortRewardNotificationWidget.AddCollectionBookData
struct UFortRewardNotificationWidget_AddCollectionBookData_Params
{
public:
	struct FFortCollectionBookRewards            CollectionBookRewards;                             // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function SaveTheWorldUI.FortSquadSelectorButton.TryGetStaticSquadDataBP
struct UFortSquadSelectorButton_TryGetStaticSquadDataBP_Params
{
public:
	struct FHomebaseSquad                        OutSquadData;                                      // 0x0(0x80)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x80(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_841C[0x7];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortSquadSelectorButton.SetIdOfSquadToManageBP
struct UFortSquadSelectorButton_SetIdOfSquadToManageBP_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadSelectorButton.HandleSquadChangedBP
struct UFortSquadSelectorButton_HandleSquadChangedBP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadSelectorButton.HandleDifferentSquadSetBP
struct UFortSquadSelectorButton_HandleDifferentSquadSetBP_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortSquadSelectorButton.GetIdOfSquadToManageBP
struct UFortSquadSelectorButton_GetIdOfSquadToManageBP_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortDefenderSquadSelectorButton.TryGetTheaterUniqueId
struct UFortDefenderSquadSelectorButton_TryGetTheaterUniqueId_Params
{
public:
	class FString                                OutTheaterUniqueId;                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutIsUnlocked;                                     // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_841E[0x6];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortDefenderSquadSelectorButton.TryGetPowerLevel
struct UFortDefenderSquadSelectorButton_TryGetPowerLevel_Params
{
public:
	int32                                        OutPowerLevel;                                     // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_841F[0x3];                                     // Fixing Size Of Struct..
};

// 0x88 (0x88 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.TryGetStaticSquadDataBP
struct UFortSquadManagementScreenBase_TryGetStaticSquadDataBP_Params
{
public:
	struct FHomebaseSquad                        OutSquadData;                                      // 0x0(0x80)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x80(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8422[0x7];                                     // Fixing Size Of Struct..
};

// 0x40 (0x40 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.TryGetSquadTeamAttribute
struct UFortSquadManagementScreenBase_TryGetSquadTeamAttribute_Params
{
public:
	struct FGameplayAttribute                    OutGameplayAttribute;                              // 0x0(0x38)(Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8423[0x7];                                     // Fixing Size Of Struct..
};

// 0x40 (0x40 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.TryGetSquadMainAttribute
struct UFortSquadManagementScreenBase_TryGetSquadMainAttribute_Params
{
public:
	struct FGameplayAttribute                    OutGameplayAttribute;                              // 0x0(0x38)(Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8424[0x7];                                     // Fixing Size Of Struct..
};

// 0x48 (0x48 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.TryGetAttributeValueFromSquad
struct UFortSquadManagementScreenBase_TryGetAttributeValueFromSquad_Params
{
public:
	float                                        OutValue;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8425[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayAttribute                    Attribute;                                         // 0x8(0x38)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8426[0x7];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.ShowWarningReadOnlyWIFE
struct UFortSquadManagementScreenBase_ShowWarningReadOnlyWIFE_Params
{
public:
	bool                                         Force;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.SetupInputHandlers
struct UFortSquadManagementScreenBase_SetupInputHandlers_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.SetIdOfSquadToManageBP
struct UFortSquadManagementScreenBase_SetIdOfSquadToManageBP_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.SelectSquadWithOffset
struct UFortSquadManagementScreenBase_SelectSquadWithOffset_Params
{
public:
	int32                                        Offset;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.SelectPreviousSquad
struct UFortSquadManagementScreenBase_SelectPreviousSquad_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.SelectNextSquad
struct UFortSquadManagementScreenBase_SelectNextSquad_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.NavigateToSquadSlot
struct UFortSquadManagementScreenBase_NavigateToSquadSlot_Params
{
public:
	int32                                        SquadSlotIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.IsScreenWIFE
struct UFortSquadManagementScreenBase_IsScreenWIFE_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleViewInAll
struct UFortSquadManagementScreenBase_HandleViewInAll_Params
{
public:
	int32                                        SquadSlotIndex;                                    // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleSquadStateChanged
struct UFortSquadManagementScreenBase_HandleSquadStateChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleSquadSlotPickerShown
struct UFortSquadManagementScreenBase_HandleSquadSlotPickerShown_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleSquadSlotPickerHidden
struct UFortSquadManagementScreenBase_HandleSquadSlotPickerHidden_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleShouldAutoSlotSurvivorSquadsChanged
struct UFortSquadManagementScreenBase_HandleShouldAutoSlotSurvivorSquadsChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleSelectPickerSlotInputAction
struct UFortSquadManagementScreenBase_HandleSelectPickerSlotInputAction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandlePreviousSquadInputAction
struct UFortSquadManagementScreenBase_HandlePreviousSquadInputAction_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandlePickerSelectionCommitted
struct UFortSquadManagementScreenBase_HandlePickerSelectionCommitted_Params
{
public:
	class UFortItem*                             CommittedItem;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandlePickerSelectionChanged
struct UFortSquadManagementScreenBase_HandlePickerSelectionChanged_Params
{
public:
	class UFortItem*                             SelectedItem;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleOpenSquadSlot
struct UFortSquadManagementScreenBase_HandleOpenSquadSlot_Params
{
public:
	int32                                        SquadSlotIndex;                                    // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleNextSquadInputAction
struct UFortSquadManagementScreenBase_HandleNextSquadInputAction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleManageInputAction
struct UFortSquadManagementScreenBase_HandleManageInputAction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleInventoryInputAction
struct UFortSquadManagementScreenBase_HandleInventoryInputAction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleInspectInputAction
struct UFortSquadManagementScreenBase_HandleInspectInputAction_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleDifferentSquadSlotSelected
struct UFortSquadManagementScreenBase_HandleDifferentSquadSlotSelected_Params
{
public:
	int32                                        SquadSlotIndex;                                    // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleDifferentSquadSetBP
struct UFortSquadManagementScreenBase_HandleDifferentSquadSetBP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleCyclePickerSortInputAction
struct UFortSquadManagementScreenBase_HandleCyclePickerSortInputAction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleClosePickerInputAction
struct UFortSquadManagementScreenBase_HandleClosePickerInputAction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleBackInputAction
struct UFortSquadManagementScreenBase_HandleBackInputAction_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.GetNumUnlockedSquads
struct UFortSquadManagementScreenBase_GetNumUnlockedSquads_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.GetIdOfSquadToManageBP
struct UFortSquadManagementScreenBase_GetIdOfSquadToManageBP_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadManagementScreenBase.ClearSquad
struct UFortSquadManagementScreenBase_ClearSquad_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortHeroSquadManagementScreen.PlayFeedbackForSlottingPerson
struct UFortHeroSquadManagementScreen_PlayFeedbackForSlottingPerson_Params
{
public:
	class UFortCharacter*                        Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SlotIndex;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_842A[0x4];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortSquadIcon.SetSquad
struct UFortSquadIcon_SetSquad_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadIcon.HandleDifferentSquadSetBP
struct UFortSquadIcon_HandleDifferentSquadSetBP_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails.SetDefenderSquadInfo
struct UFortSquadLandingPageDefenderSquadDetails_SetDefenderSquadInfo_Params
{
public:
	struct FFortLandingPageDefenderSummaryInfo   DefenderSummaryInfo;                               // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails.HandleDefenderSquadInfoSetBP
struct UFortSquadLandingPageDefenderSquadDetails_HandleDefenderSquadInfoSetBP_Params
{
public:
	struct FFortLandingPageDefenderSummaryInfo   DefenderSummaryInfo;                               // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails.HandleAddDefenderSquadMemberBP
struct UFortSquadLandingPageDefenderSquadDetails_HandleAddDefenderSquadMemberBP_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetailsLocked.SetDefenderSquadInfo
struct UFortSquadLandingPageDefenderSquadDetailsLocked_SetDefenderSquadInfo_Params
{
public:
	struct FFortLandingPageDefenderSummaryInfo   DefenderSummaryInfo;                               // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadLandingPageDefenderSummary.HandleClearDefenderSquadDetailsBP
struct UFortSquadLandingPageDefenderSummary_HandleClearDefenderSquadDetailsBP_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function SaveTheWorldUI.FortSquadLandingPageDefenderSummary.HandleAddLockedDefenderSquadDetailsBP
struct UFortSquadLandingPageDefenderSummary_HandleAddLockedDefenderSquadDetailsBP_Params
{
public:
	struct FFortLandingPageDefenderSummaryInfo   DefenderSummaryInfo;                               // 0x0(0x30)(Parm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SaveTheWorldUI.FortSquadLandingPageDefenderSummary.HandleAddDefenderSquadDetailsBP
struct UFortSquadLandingPageDefenderSummary_HandleAddDefenderSquadDetailsBP_Params
{
public:
	struct FFortLandingPageDefenderSummaryInfo   DefenderSummaryInfo;                               // 0x0(0x30)(Parm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadLandingPageSurvivorSummary.HandleClearSetBonusSummaryLineItemsBP
struct UFortSquadLandingPageSurvivorSummary_HandleClearSetBonusSummaryLineItemsBP_Params
{
public:
};

// 0x48 (0x48 - 0x0)
// Function SaveTheWorldUI.FortSquadLandingPageSurvivorSummary.HandleAddSetBonusSummaryLineItemBP
struct UFortSquadLandingPageSurvivorSummary_HandleAddSetBonusSummaryLineItemBP_Params
{
public:
	struct FFortAttributeModifierAccumulation    AttributeModifierAccumulation;                     // 0x0(0x48)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotDetailsPanel.TryGetItemToPreviewInSlot
struct UFortSquadSlotDetailsPanel_TryGetItemToPreviewInSlot_Params
{
public:
	class UFortItem*                             OutItemToPreviewInSlot;                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8434[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotDetailsPanel.SetScrollWidget
struct UFortSquadSlotDetailsPanel_SetScrollWidget_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotDetailsPanel.SetIdOfSquadSlotToManageBP
struct UFortSquadSlotDetailsPanel_SetIdOfSquadSlotToManageBP_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SquadSlotIndex;                                    // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotDetailsPanel.IsSquadSlotLockedBP
struct UFortSquadSlotDetailsPanel_IsSquadSlotLockedBP_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotDetailsPanel.HandleSquadSlotStateChangedBP
struct UFortSquadSlotDetailsPanel_HandleSquadSlotStateChangedBP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotDetailsPanel.HandleSquadSlotRestrictionFactorsChangedBP
struct UFortSquadSlotDetailsPanel_HandleSquadSlotRestrictionFactorsChangedBP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotDetailsPanel.HandleDifferentSquadSlotSetBP
struct UFortSquadSlotDetailsPanel_HandleDifferentSquadSlotSetBP_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotDetailsPanel.GetSlottingRestrictionReasons
struct UFortSquadSlotDetailsPanel_GetSlottingRestrictionReasons_Params
{
public:
	TArray<enum class EFortSquadSlottingRestrictionReason> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotDetailsPanel.GetItemInSquadSlotBP
struct UFortSquadSlotDetailsPanel_GetItemInSquadSlotBP_Params
{
public:
	class ULocalPlayer*                          LocalPlayer;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItem*                             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotDetailsPanel.GetIdOfSquadSlotToManageBP
struct UFortSquadSlotDetailsPanel_GetIdOfSquadSlotToManageBP_Params
{
public:
	class FName                                  OutSquadId;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutSquadSlotIndex;                                 // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotItemDetailElementWidget.SetIdOfSquadSlotToManageBP
struct UFortSquadSlotItemDetailElementWidget_SetIdOfSquadSlotToManageBP_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SquadSlotIndex;                                    // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotItemDetailElementWidget.IsSquadSlotLockedBP
struct UFortSquadSlotItemDetailElementWidget_IsSquadSlotLockedBP_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotItemDetailElementWidget.HandlePostDifferentSquadSlotSetBP
struct UFortSquadSlotItemDetailElementWidget_HandlePostDifferentSquadSlotSetBP_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotItemDetailElementWidget.GetItemInSquadSlotBP
struct UFortSquadSlotItemDetailElementWidget_GetItemInSquadSlotBP_Params
{
public:
	class ULocalPlayer*                          LocalPlayer;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItem*                             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotItemDetailElementWidget.GetIdOfSquadSlotToManageBP
struct UFortSquadSlotItemDetailElementWidget_GetIdOfSquadSlotToManageBP_Params
{
public:
	class FName                                  OutSquadId;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutSquadSlotIndex;                                 // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel.SetIdOfSquadSlotToManageBP
struct UFortSquadSlotItemDetailsHostPanel_SetIdOfSquadSlotToManageBP_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SquadSlotIndex;                                    // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel.IsSquadSlotLockedBP
struct UFortSquadSlotItemDetailsHostPanel_IsSquadSlotLockedBP_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel.GetItemInSquadSlotBP
struct UFortSquadSlotItemDetailsHostPanel_GetItemInSquadSlotBP_Params
{
public:
	class ULocalPlayer*                          LocalPlayer;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItem*                             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel.GetIdOfSquadSlotToManageBP
struct UFortSquadSlotItemDetailsHostPanel_GetIdOfSquadSlotToManageBP_Params
{
public:
	class FName                                  OutSquadId;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutSquadSlotIndex;                                 // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotItemPicker.SetSortTypes
struct UFortSquadSlotItemPicker_SetSortTypes_Params
{
public:
	struct FSquadSlotSortTypes                   SquadSlotSortTypes;                                // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotItemPicker.SetIdOfSquadSlotToManageBP
struct UFortSquadSlotItemPicker_SetIdOfSquadSlotToManageBP_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SquadSlotIndex;                                    // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotItemPicker.GetIdOfSquadSlotToManageBP
struct UFortSquadSlotItemPicker_GetIdOfSquadSlotToManageBP_Params
{
public:
	class FName                                  OutSquadId;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutSquadSlotIndex;                                 // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// DelegateFunction SaveTheWorldUI.FortSquadSlotItemPicker.FortSquadSlotSortChanged__DelegateSignature
struct UFortSquadSlotItemPicker_FortSquadSlotSortChanged__DelegateSignature_Params
{
public:
	enum class ESquadSlotSortType                CurrentSortType;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESquadSlotType                    SquadSlotType;                                     // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotItemPicker.CycleSortType
struct UFortSquadSlotItemPicker_CycleSortType_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotItemPickerTileButton.HandleSlottingRestrictionReasonsChanged
struct UFortSquadSlotItemPickerTileButton_HandleSlottingRestrictionReasonsChanged_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotItemPickerTileButton.HandleItemSlottedToDifferentSquad
struct UFortSquadSlotItemPickerTileButton_HandleItemSlottedToDifferentSquad_Params
{
public:
	struct FHomebaseSquadSlotId                  SquadSlotId;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotItemPickerTileButton.GetSlottingRestrictionReasons
struct UFortSquadSlotItemPickerTileButton_GetSlottingRestrictionReasons_Params
{
public:
	TArray<enum class EFortSquadSlottingRestrictionReason> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotSelectorPopupMenu.IsScreenWIFE
struct UFortSquadSlotSelectorPopupMenu_IsScreenWIFE_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotSelectorPopupMenu.GetHostButton
struct UFortSquadSlotSelectorPopupMenu_GetHostButton_Params
{
public:
	class UFortSquadSlotSelectorButton*          ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotSurvivorTraitMatchesDetailWidget.HandleTraitValuesUpdatedBP
struct UFortSquadSlotSurvivorTraitMatchesDetailWidget_HandleTraitValuesUpdatedBP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotSelectorButton.ViewInAll
struct UFortSquadSlotSelectorButton_ViewInAll_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotSelectorButton.SquadSlotWidgetUpdated
struct UFortSquadSlotSelectorButton_SquadSlotWidgetUpdated_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotSelectorButton.SetIdOfSquadSlotToManageBP
struct UFortSquadSlotSelectorButton_SetIdOfSquadSlotToManageBP_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SquadSlotIndex;                                    // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotSelectorButton.OpenSquadSlot
struct UFortSquadSlotSelectorButton_OpenSquadSlot_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotSelectorButton.IsSquadSlotLockedBP
struct UFortSquadSlotSelectorButton_IsSquadSlotLockedBP_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotSelectorButton.HandlePreDifferentSquadSlotSetBP
struct UFortSquadSlotSelectorButton_HandlePreDifferentSquadSlotSetBP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotSelectorButton.HandlePostDifferentSquadSlotSetBP
struct UFortSquadSlotSelectorButton_HandlePostDifferentSquadSlotSetBP_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotSelectorButton.GetPopupMenu
struct UFortSquadSlotSelectorButton_GetPopupMenu_Params
{
public:
	class UUserWidget*                           ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotSelectorButton.GetInPreviewMode
struct UFortSquadSlotSelectorButton_GetInPreviewMode_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotSelectorButton.GetIdOfSquadSlotToManageBP
struct UFortSquadSlotSelectorButton_GetIdOfSquadSlotToManageBP_Params
{
public:
	class FName                                  OutSquadId;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutSquadSlotIndex;                                 // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotsView.TryGetStaticSquadDataBP
struct UFortSquadSlotsView_TryGetStaticSquadDataBP_Params
{
public:
	struct FHomebaseSquad                        OutSquadData;                                      // 0x0(0x80)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x80(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8442[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotsView.TryGetSelectedSquadSlotSortTypes
struct UFortSquadSlotsView_TryGetSelectedSquadSlotSortTypes_Params
{
public:
	struct FSquadSlotSortTypes                   OutSlotSortTypes;                                  // 0x0(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8443[0x7];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotsView.SetIsSelectionLocked
struct UFortSquadSlotsView_SetIsSelectionLocked_Params
{
public:
	bool                                         ShouldSelectionBeLocked;                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotsView.SetInPreviewMode
struct UFortSquadSlotsView_SetInPreviewMode_Params
{
public:
	bool                                         bPreview;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotsView.SetIdOfSquadToManageBP
struct UFortSquadSlotsView_SetIdOfSquadToManageBP_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotsView.SelectSlot
struct UFortSquadSlotsView_SelectSlot_Params
{
public:
	int32                                        SquadSlotIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// DelegateFunction SaveTheWorldUI.FortSquadSlotsView.OnDifferentSquadSlotSelected__DelegateSignature
struct UFortSquadSlotsView_OnDifferentSquadSlotSelected__DelegateSignature_Params
{
public:
	int32                                        SquadSlotIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotsView.HandleSelectedButtonChanged
struct UFortSquadSlotsView_HandleSelectedButtonChanged_Params
{
public:
	class UCommonButtonLegacy*                   SelectedButton;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ButtonIndex;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8444[0x4];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotsView.HandleRequestViewInAll
struct UFortSquadSlotsView_HandleRequestViewInAll_Params
{
public:
	int32                                        SquadSlotIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotsView.HandleRequestOpenSquadSlot
struct UFortSquadSlotsView_HandleRequestOpenSquadSlot_Params
{
public:
	int32                                        SquadSlotIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotsView.HandleHoveredButtonChanged
struct UFortSquadSlotsView_HandleHoveredButtonChanged_Params
{
public:
	class UCommonButtonLegacy*                   HoveredButton;                                     // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ButtonIndex;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8445[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotsView.HandleButtonDoubleClicked
struct UFortSquadSlotsView_HandleButtonDoubleClicked_Params
{
public:
	class UCommonButtonLegacy*                   CommittedButton;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ButtonIndex;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8446[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotsView.HandleButtonClicked
struct UFortSquadSlotsView_HandleButtonClicked_Params
{
public:
	class UCommonButtonLegacy*                   CommittedButton;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ButtonIndex;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8447[0x4];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotsView.GetIndexOfSelectedSquadSlot
struct UFortSquadSlotsView_GetIndexOfSelectedSquadSlot_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotsView.GetIdOfSquadToManageBP
struct UFortSquadSlotsView_GetIdOfSquadToManageBP_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotsView.CreateAndAddSquadSlotButton
struct UFortSquadSlotsView_CreateAndAddSquadSlotButton_Params
{
public:
	int32                                        SquadSlotIndex;                                    // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8448[0x4];                                     // Fixing Size After Last Property..
	struct FHomebaseSquadSlot                    SquadSlotDefinition;                               // 0x8(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UWidget*                               OutSquadSlotButtonHost;                            // 0x70(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortSquadSlotSelectorButton*          ReturnValue;                                       // 0x78(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotWidget.SetIdOfSquadSlotToManageBP
struct UFortSquadSlotWidget_SetIdOfSquadSlotToManageBP_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SquadSlotIndex;                                    // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotWidget.SetCardSize
struct UFortSquadSlotWidget_SetCardSize_Params
{
public:
	enum class EFortItemCardSize                 CardSize;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotWidget.IsSquadSlotLockedBP
struct UFortSquadSlotWidget_IsSquadSlotLockedBP_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotWidget.GetItemInSquadSlotBP
struct UFortSquadSlotWidget_GetItemInSquadSlotBP_Params
{
public:
	class ULocalPlayer*                          LocalPlayer;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItem*                             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortSquadSlotWidget.GetIdOfSquadSlotToManageBP
struct UFortSquadSlotWidget_GetIdOfSquadSlotToManageBP_Params
{
public:
	class FName                                  OutSquadId;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutSquadSlotIndex;                                 // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadStatsWidgetBase.RequestStatsUpdate
struct UFortSquadStatsWidgetBase_RequestStatsUpdate_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadStatsWidgetBase.RequestShowPreviewStats
struct UFortSquadStatsWidgetBase_RequestShowPreviewStats_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadStatsWidgetBase.HandleSquadSlottingPreviewStateChanged
struct UFortSquadStatsWidgetBase_HandleSquadSlottingPreviewStateChanged_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortSquadStatsWidgetBase.HandlePowerRatingChanged_BP
struct UFortSquadStatsWidgetBase_HandlePowerRatingChanged_BP_Params
{
public:
	bool                                         bHasTeamMebers;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SaveTheWorldUI.FortSquadStatsWidgetBase.GetLocalPlayerId
struct UFortSquadStatsWidgetBase_GetLocalPlayerId_Params
{
public:
	struct FUniqueNetIdRepl                      ReturnValue;                                       // 0x0(0x30)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadStatValueWithIcon.HandleDifferentAttributeSetBP
struct UFortSquadStatValueWithIcon_HandleDifferentAttributeSetBP_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortSquadTypeLandingPageBase.ShowWarningReadOnlyWIFE
struct UFortSquadTypeLandingPageBase_ShowWarningReadOnlyWIFE_Params
{
public:
	bool                                         Force;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortSquadTypeLandingPageBase.IsScreenWIFE
struct UFortSquadTypeLandingPageBase_IsScreenWIFE_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSquadTypeLandingPageBase.HandlePendingNavigationOp
struct UFortSquadTypeLandingPageBase_HandlePendingNavigationOp_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortSquadTypeLandingPageBase.HandleBackInputAction
struct UFortSquadTypeLandingPageBase_HandleBackInputAction_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortSquadTypeLandingPageBase.CreateAndAddSquadButton
struct UFortSquadTypeLandingPageBase_CreateAndAddSquadButton_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8454[0x4];                                     // Fixing Size After Last Property..
	class UFortSquadSelectorButton*              ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function SaveTheWorldUI.FortStatIcon.SetAttribute
struct UFortStatIcon_SetAttribute_Params
{
public:
	struct FGameplayAttribute                    InAttribute;                                       // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortStatIcon.HandleDifferentAttributeSetBP
struct UFortStatIcon_HandleDifferentAttributeSetBP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSurvivorSquadManagementScreen.UpdateCycleButtons
struct UFortSurvivorSquadManagementScreen_UpdateCycleButtons_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSurvivorSquadManagementScreen.ShowHelpDialog
struct UFortSurvivorSquadManagementScreen_ShowHelpDialog_Params
{
public:
};

// 0xC0 (0xC0 - 0x0)
// Function SaveTheWorldUI.FortSurvivorSquadManagementScreen.PlayFeedbackForSlottingPerson
struct UFortSurvivorSquadManagementScreen_PlayFeedbackForSlottingPerson_Params
{
public:
	class UFortWorker*                           Worker;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SlotIndex;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8458[0x4];                                     // Fixing Size After Last Property..
	struct FFortSurvivorSquadSlottingFeedbackData FeedbackData;                                      // 0x10(0xB0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function SaveTheWorldUI.FortSurvivorSquadSelectorButton.TryGetSummaryStats
struct UFortSurvivorSquadSelectorButton_TryGetSummaryStats_Params
{
public:
	struct FFortSurvivorSquadSelectorButtonSummaryStats OutSummaryStats;                                   // 0x0(0xA0)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xA0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_845A[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortSurvivorSquadSelectorButton.TryGetSquadMembers
struct UFortSurvivorSquadSelectorButton_TryGetSquadMembers_Params
{
public:
	TArray<class UFortWorker*>                   OutSquadMembers;                                   // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_845B[0x7];                                     // Fixing Size Of Struct..
};

// 0x4A0 (0x4A0 - 0x0)
// Function SaveTheWorldUI.FortSurvivorSquadSelectorButton.TryGetPersonalityMatches
struct UFortSurvivorSquadSelectorButton_TryGetPersonalityMatches_Params
{
public:
	struct FFortSurvivorSquadSelectorButtonPersonalityMatches OutPersonalityMatches;                             // 0x0(0x490)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x490(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_845C[0xF];                                     // Fixing Size Of Struct..
};

// 0x4C0 (0x4C0 - 0x0)
// Function SaveTheWorldUI.FortSurvivorSquadStatMatchBase.OnStatMatchUpdated
struct UFortSurvivorSquadStatMatchBase_OnStatMatchUpdated_Params
{
public:
	struct FFortUISurvivorSquadStatMatch         UpdatedMatch;                                      // 0x0(0x4C0)(Parm, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.TryGetStaticSquadDataBP
struct UFortSurvivorSquadStatMatchesBase_TryGetStaticSquadDataBP_Params
{
public:
	struct FHomebaseSquad                        OutSquadData;                                      // 0x0(0x80)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x80(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_845F[0x7];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.SetSummaryView
struct UFortSurvivorSquadStatMatchesBase_SetSummaryView_Params
{
public:
	bool                                         bInSummaryView;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.SetIdOfSquadToManageBP
struct UFortSurvivorSquadStatMatchesBase_SetIdOfSquadToManageBP_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.HandleDifferentSquadSetBP
struct UFortSurvivorSquadStatMatchesBase_HandleDifferentSquadSetBP_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.GetIdOfSquadToManageBP
struct UFortSurvivorSquadStatMatchesBase_GetIdOfSquadToManageBP_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.AddStatMatch
struct UFortSurvivorSquadStatMatchesBase_AddStatMatch_Params
{
public:
	class UFortSurvivorSquadStatMatchBase*       SetBonus;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function SaveTheWorldUI.FortSurvivorSquadSummaryStatItem.SetAttributeModifierAccumulation
struct UFortSurvivorSquadSummaryStatItem_SetAttributeModifierAccumulation_Params
{
public:
	struct FFortAttributeModifierAccumulation    Accumulation;                                      // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortWorkerSetBonusIcon.SetGameplayTag
struct UFortWorkerSetBonusIcon_SetGameplayTag_Params
{
public:
	struct FGameplayTag                          InGameplayTag;                                     // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortWorkerSetBonusIcon.HandleDifferentGameplayTagSetBP
struct UFortWorkerSetBonusIcon_HandleDifferentGameplayTagSetBP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortStatsOverviewDetailsBase.RequestStatsUpdate
struct UFortStatsOverviewDetailsBase_RequestStatsUpdate_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortStatsOverviewDetailsBase.ListenForChanges
struct UFortStatsOverviewDetailsBase_ListenForChanges_Params
{
public:
	bool                                         bListen;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SaveTheWorldUI.FortStatsOverviewDetailsBase.GetLocalPlayerId
struct UFortStatsOverviewDetailsBase_GetLocalPlayerId_Params
{
public:
	struct FUniqueNetIdRepl                      ReturnValue;                                       // 0x0(0x30)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortLlamaStoreBase.SwapToCardEnterState
struct UFortLlamaStoreBase_SwapToCardEnterState_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortLlamaStoreBase.SetupFocus
struct UFortLlamaStoreBase_SetupFocus_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortLlamaStoreBase.OnStoreStateChanged
struct UFortLlamaStoreBase_OnStoreStateChanged_Params
{
public:
	enum class EFortStoreState                   NewStoreState;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortLlamaStoreBase.OnStorePurchaseCompleted
struct UFortLlamaStoreBase_OnStorePurchaseCompleted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortLlamaStoreBase.HandleTencentDetails
struct UFortLlamaStoreBase_HandleTencentDetails_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortLlamaStoreBase.HandleAddVBucks
struct UFortLlamaStoreBase_HandleAddVBucks_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortLlamaStoreBase.CreateTencentPuchaseOpenModal
struct UFortLlamaStoreBase_CreateTencentPuchaseOpenModal_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortLlamaStoreBase_Legacy.SwapToCardEnterState
struct UFortLlamaStoreBase_Legacy_SwapToCardEnterState_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortLlamaStoreBase_Legacy.SetupFocus
struct UFortLlamaStoreBase_Legacy_SetupFocus_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortLlamaStoreBase_Legacy.OnStoreStateChanged
struct UFortLlamaStoreBase_Legacy_OnStoreStateChanged_Params
{
public:
	enum class EFortStoreState                   NewStoreState;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortLlamaStoreBase_Legacy.OnStorePurchaseCompleted
struct UFortLlamaStoreBase_Legacy_OnStorePurchaseCompleted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortLlamaStoreBase_Legacy.CreateTencentPuchaseOpenModal
struct UFortLlamaStoreBase_Legacy_CreateTencentPuchaseOpenModal_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortLlamaStoreDetailsBase.StartUpgradingToSilver
struct UFortLlamaStoreDetailsBase_StartUpgradingToSilver_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortLlamaStoreDetailsBase.StartUpgradingToGold
struct UFortLlamaStoreDetailsBase_StartUpgradingToGold_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortLlamaStoreDetailsBase.SetScrollWidget
struct UFortLlamaStoreDetailsBase_SetScrollWidget_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortLlamaStoreDetailsBase.OnOfferInfoChanged
struct UFortLlamaStoreDetailsBase_OnOfferInfoChanged_Params
{
public:
	int32                                        CurrentOfferRarity;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortLlamaStoreDetailsBase.GetNotInCollectionBookCount
struct UFortLlamaStoreDetailsBase_GetNotInCollectionBookCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortLlamaStoreDetailsBase.GetNewItemCount
struct UFortLlamaStoreDetailsBase_GetNewItemCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortLlamaStoreDetailsBase.GetChoiceItemCount
struct UFortLlamaStoreDetailsBase_GetChoiceItemCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.FortLlamaStoreInspectionScreen.IsItemChoicePack
struct UFortLlamaStoreInspectionScreen_IsItemChoicePack_Params
{
public:
	class UObject*                               ItemToCheck;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_846B[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortLlamaStoreInspectionScreen.GetSelectedCardPack
struct UFortLlamaStoreInspectionScreen_GetSelectedCardPack_Params
{
public:
	class UFortCardPackItem*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortLlamaStoreInspectionScreen.GetInspectChoiceInputState
struct UFortLlamaStoreInspectionScreen_GetInspectChoiceInputState_Params
{
public:
	enum class EInputActionState                 ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.StWHUD.NativeHandleWeaponEquipped
struct UStWHUD_NativeHandleWeaponEquipped_Params
{
public:
	class UFortWeapon*                           NewWeapon;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortWeapon*                           PrevWeapon;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SaveTheWorldUI.StWHUD.HandlePickerOpenRequest
struct UStWHUD_HandlePickerOpenRequest_Params
{
public:
	enum class EFortPickerMode                   Mode;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_846F[0x3];                                     // Fixing Size After Last Property..
	int32                                        InitialOption;                                     // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreFirstAccept;                                // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8470[0x3];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function SaveTheWorldUI.StWHUD.HandleCursorModeChanged
struct UStWHUD_HandleCursorModeChanged_Params
{
public:
	bool                                         bCursorModeEnabled;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8471[0x3];                                     // Fixing Size After Last Property..
	class FName                                  ActionName;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                           CursorModeContentWidget;                           // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortTheaterSelect.OnNavigationRight
struct UFortTheaterSelect_OnNavigationRight_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortTheaterSelect.OnNavigationLeft
struct UFortTheaterSelect_OnNavigationLeft_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function SaveTheWorldUI.FortTheaterSelect.GetTheaterRecommendedRatingRange
struct UFortTheaterSelect_GetTheaterRecommendedRatingRange_Params
{
public:
	class FString                                UniqueId;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Minimum;                                           // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Maximum;                                           // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8475[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortTheaterSelect_Legacy.OnNavigationRight
struct UFortTheaterSelect_Legacy_OnNavigationRight_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortTheaterSelect_Legacy.OnNavigationLeft
struct UFortTheaterSelect_Legacy_OnNavigationLeft_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function SaveTheWorldUI.FortTheaterSelect_Legacy.GetTheaterRecommendedRatingRange
struct UFortTheaterSelect_Legacy_GetTheaterRecommendedRatingRange_Params
{
public:
	class FString                                UniqueId;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Minimum;                                           // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Maximum;                                           // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8478[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortUpgradeDetailsBase.RequestPurchaseNode
struct UFortUpgradeDetailsBase_RequestPurchaseNode_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortUpgradeDetailsBase.OnUpgradeToDetailChanged
struct UFortUpgradeDetailsBase_OnUpgradeToDetailChanged_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortUpgradeDetailsBase.OnShowIcon
struct UFortUpgradeDetailsBase_OnShowIcon_Params
{
public:
	class UTexture2D*                            Icon;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortUpgradeDetailsBase.OnScreenActive
struct UFortUpgradeDetailsBase_OnScreenActive_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortUpgradeDetailsBase.OnPurchaseComplete
struct UFortUpgradeDetailsBase_OnPurchaseComplete_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortUpgradeInfo.IsUpgradeUnlocked
struct UFortUpgradeInfo_IsUpgradeUnlocked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortUpgradeInfo.IsPreviewing
struct UFortUpgradeInfo_IsPreviewing_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SaveTheWorldUI.FortUpgradeInfo.GetVideo
struct UFortUpgradeInfo_GetVideo_Params
{
public:
	class UMediaSource*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortUpgradeInfo.GetUpgradeUnlockLevel
struct UFortUpgradeInfo_GetUpgradeUnlockLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortUpgradeInfo.GetTitle
struct UFortUpgradeInfo_GetTitle_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortUpgradeInfo.GetNextLevelTitle
struct UFortUpgradeInfo_GetNextLevelTitle_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortUpgradeInfo.GetNextLevelDescription
struct UFortUpgradeInfo_GetNextLevelDescription_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortUpgradeInfo.GetNextLevel
struct UFortUpgradeInfo_GetNextLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortUpgradeInfo.GetMaxLevel
struct UFortUpgradeInfo_GetMaxLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortUpgradeInfo.GetItemName
struct UFortUpgradeInfo_GetItemName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SaveTheWorldUI.FortUpgradeInfo.GetIcon
struct UFortUpgradeInfo_GetIcon_Params
{
public:
	enum class EUpgradeInfoImageSize             ImageSize;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_847D[0x7];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class UTexture2D>             ReturnValue;                                       // 0x8(0x28)(Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortUpgradeInfo.GetDisplayAttributes
struct UFortUpgradeInfo_GetDisplayAttributes_Params
{
public:
	TArray<struct FFortDisplayAttribute>         OutDisplayAttributes;                              // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_847E[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function SaveTheWorldUI.FortUpgradeInfo.GetDescription
struct UFortUpgradeInfo_GetDescription_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortUpgradeInfo.GetCurrentLevel
struct UFortUpgradeInfo_GetCurrentLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortUpgradeInfo.GetCost
struct UFortUpgradeInfo_GetCost_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortUpgradeInfo.ForwardPreview
struct UFortUpgradeInfo_ForwardPreview_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortUpgradeInfo.CanPreview
struct UFortUpgradeInfo_CanPreview_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortUpgradeInfo.CanAffordUpgrade
struct UFortUpgradeInfo_CanAffordUpgrade_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortUpgradeInfo.BackwardPreview
struct UFortUpgradeInfo_BackwardPreview_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortUpgradeScreenBase.UseUpgradesRespecToken
struct UFortUpgradeScreenBase_UseUpgradesRespecToken_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortUpgradeScreenBase.TogglePreview
struct UFortUpgradeScreenBase_TogglePreview_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortUpgradeScreenBase.RefreshFocus
struct UFortUpgradeScreenBase_RefreshFocus_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortUpgradeScreenBase.OnUseUpgradesRespecTokenComplete
struct UFortUpgradeScreenBase_OnUseUpgradesRespecTokenComplete_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortUpgradeScreenBase.OnUpgradeInfoChanged
struct UFortUpgradeScreenBase_OnUpgradeInfoChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortUpgradeScreenBase.OnPurchaseNodeComplete
struct UFortUpgradeScreenBase_OnPurchaseNodeComplete_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortUpgradeScreenBase.IsPreviewing
struct UFortUpgradeScreenBase_IsPreviewing_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortUpgradeScreenBase.HandleTabSelected
struct UFortUpgradeScreenBase_HandleTabSelected_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortUpgradeScreenBase.GetUpgradesRespecTokenCount
struct UFortUpgradeScreenBase_GetUpgradesRespecTokenCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortUpgradeScreenBase.CanPreview
struct UFortUpgradeScreenBase_CanPreview_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortUpgradeScreenBase.AreUpgradesRespecTokensAvailable
struct UFortUpgradeScreenBase_AreUpgradesRespecTokensAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortUpgradeScreenBase_Legacy.UseUpgradesRespecToken
struct UFortUpgradeScreenBase_Legacy_UseUpgradesRespecToken_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortUpgradeScreenBase_Legacy.TogglePreview
struct UFortUpgradeScreenBase_Legacy_TogglePreview_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortUpgradeScreenBase_Legacy.RefreshFocus
struct UFortUpgradeScreenBase_Legacy_RefreshFocus_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortUpgradeScreenBase_Legacy.OnUseUpgradesRespecTokenComplete
struct UFortUpgradeScreenBase_Legacy_OnUseUpgradesRespecTokenComplete_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortUpgradeScreenBase_Legacy.OnUpgradeInfoChanged
struct UFortUpgradeScreenBase_Legacy_OnUpgradeInfoChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SaveTheWorldUI.FortUpgradeScreenBase_Legacy.OnPurchaseNodeComplete
struct UFortUpgradeScreenBase_Legacy_OnPurchaseNodeComplete_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortUpgradeScreenBase_Legacy.IsPreviewing
struct UFortUpgradeScreenBase_Legacy_IsPreviewing_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortUpgradeScreenBase_Legacy.HandleTabSelected
struct UFortUpgradeScreenBase_Legacy_HandleTabSelected_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SaveTheWorldUI.FortUpgradeScreenBase_Legacy.GetUpgradesRespecTokenCount
struct UFortUpgradeScreenBase_Legacy_GetUpgradesRespecTokenCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortUpgradeScreenBase_Legacy.CanPreview
struct UFortUpgradeScreenBase_Legacy_CanPreview_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortUpgradeScreenBase_Legacy.AreUpgradesRespecTokensAvailable
struct UFortUpgradeScreenBase_Legacy_AreUpgradesRespecTokensAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortUpgradeTileBase.OnDataRefresh
struct UFortUpgradeTileBase_OnDataRefresh_Params
{
public:
	bool                                         bUpgrade;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SaveTheWorldUI.FortUpgradeTileBase_Legacy.OnDataRefresh
struct UFortUpgradeTileBase_Legacy_OnDataRefresh_Params
{
public:
	bool                                         bUpgrade;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
