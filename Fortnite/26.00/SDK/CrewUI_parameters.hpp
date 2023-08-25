#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x0 - 0x0)
// Function CrewUI.BattlePassCrewPurchaseButton.OnCurrencyUpdated
struct UBattlePassCrewPurchaseButton_OnCurrencyUpdated_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function CrewUI.BattlePassCrewPurchaseContainer.OnTriggerIntroAnimation
struct UBattlePassCrewPurchaseContainer_OnTriggerIntroAnimation_Params
{
public:
	bool                                         bCanClaimRewards;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function CrewUI.BattlePassCrewPurchaseContainer.OnContentStateUpdated
struct UBattlePassCrewPurchaseContainer_OnContentStateUpdated_Params
{
public:
	enum class EBattlePassCrewContentState       InState;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInScreenOpened;                                   // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CrewUI.BattlePassPurchaseScreen.RefreshFocus
struct UBattlePassPurchaseScreen_RefreshFocus_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function CrewUI.BattlePassPurchaseScreen.OnShowNavButtonNotification
struct UBattlePassPurchaseScreen_OnShowNavButtonNotification_Params
{
public:
	bool                                         bShowNotification;                                 // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CrewUI.BattlePassPurchaseScreen.OnSetScreenInteractable
struct UBattlePassPurchaseScreen_OnSetScreenInteractable_Params
{
public:
	bool                                         bInteractable;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CrewUI.BattlePassPurchaseScreen.OnSetNavButtonNotificationText
struct UBattlePassPurchaseScreen_OnSetNavButtonNotificationText_Params
{
public:
	class FText                                  NotificationText;                                  // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CrewUI.BattlePassPurchaseScreen.OnPurchaseStateChanged
struct UBattlePassPurchaseScreen_OnPurchaseStateChanged_Params
{
public:
	enum class EBattlePassPurchaseState          InCurrentState;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CrewUI.BattlePassPurchaseScreen.OnPurchaseConfirmed
struct UBattlePassPurchaseScreen_OnPurchaseConfirmed_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function CrewUI.CrewMultiSubscriptionAlertModal.OnSetHowToCancelURL
struct UCrewMultiSubscriptionAlertModal_OnSetHowToCancelURL_Params
{
public:
	class FString                                MoreInfoUrl;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeTitle
struct UCrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeTitle_Params
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeMoreInfoUrl
struct UCrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeMoreInfoUrl_Params
{
public:
	class FText                                  MoreInfoUrl;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeMoreInfoText
struct UCrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeMoreInfoText_Params
{
public:
	class FText                                  ConfirmButtonText;                                 // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeConfirmButtonText
struct UCrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeConfirmButtonText_Params
{
public:
	class FText                                  ConfirmButtonText;                                 // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeCheckboxText
struct UCrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeCheckboxText_Params
{
public:
	class FText                                  CheckboxText;                                      // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText
struct UCrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText_Params
{
public:
	class FText                                  CancelSubscriptionButtonText;                      // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeBodyText
struct UCrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeBodyText_Params
{
public:
	class FText                                  BodyText;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeBodyTable
struct UCrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeBodyTable_Params
{
public:
	TArray<struct FCrewTableRow>                 PriceChangeByRegionRows;                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CrewUI.CrewPriceChangeAcknowledgeModal.OnModalBackout
struct UCrewPriceChangeAcknowledgeModal_OnModalBackout_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CrewUI.CrewPriceChangeAcknowledgeModal.ExitModal
struct UCrewPriceChangeAcknowledgeModal_ExitModal_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function CrewUI.CrewPurchaseScreen.OnUserInformationTextsUpdated
struct UCrewPurchaseScreen_OnUserInformationTextsUpdated_Params
{
public:
	class FText                                  UserInformationText1;                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  UserInformationText2;                              // 0x18(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EMcpSubscriptionState             SubscriptionState;                                 // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E3A[0x7];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// Function CrewUI.CrewPurchaseScreen.OnUpdateVBuckRefundVisibility
struct UCrewPurchaseScreen_OnUpdateVBuckRefundVisibility_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CrewUI.CrewPurchaseScreen.OnUpdatePurchaseButtonState
struct UCrewPurchaseScreen_OnUpdatePurchaseButtonState_Params
{
public:
	enum class ECrewPurchaseButtonState          ButtonState;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CrewUI.CrewPurchaseScreen.OnShowNavButtonNotification
struct UCrewPurchaseScreen_OnShowNavButtonNotification_Params
{
public:
	bool                                         bShowNotification;                                 // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CrewUI.CrewPurchaseScreen.OnSetPaymentLegalText
struct UCrewPurchaseScreen_OnSetPaymentLegalText_Params
{
public:
	class FText                                  LegalText;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CrewUI.CrewPurchaseScreen.OnSetNavButtonNotificationText
struct UCrewPurchaseScreen_OnSetNavButtonNotificationText_Params
{
public:
	class FText                                  NotificationText;                                  // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CrewUI.CrewPurchaseScreen.OnContainerTabVisibilityUpdated
struct UCrewPurchaseScreen_OnContainerTabVisibilityUpdated_Params
{
public:
	bool                                         bTabsVisible;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E42[0x3];                                     // Fixing Size After Last Property 
	float                                        SpacingAdjustmentForTabs;                          // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CrewUI.CrewPurchaseScreen.EndProgress
struct UCrewPurchaseScreen_EndProgress_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function CrewUI.CrewPurchaseScreen.BlockScreenContent
struct UCrewPurchaseScreen_BlockScreenContent_Params
{
public:
	bool                                         bBlockScreen;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E47[0x7];                                     // Fixing Size After Last Property 
	class FText                                  ContentBlockedText;                                // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CrewUI.CrewPurchaseScreen.BeginProgress
struct UCrewPurchaseScreen_BeginProgress_Params
{
public:
	class FText                                  ProgressLabel;                                     // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CrewUI.CrewRewardTile.OnUpdateOwnedState
struct UCrewRewardTile_OnUpdateOwnedState_Params
{
public:
	bool                                         bOwned;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CrewUI.CrewRewardTile.OnStartingDownloadTileImage
struct UCrewRewardTile_OnStartingDownloadTileImage_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CrewUI.CrewRewardTile.OnDownloadTileImageComplete
struct UCrewRewardTile_OnDownloadTileImageComplete_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CrewUI.CrewRewardTile.IsMonthlyBenefit
struct UCrewRewardTile_IsMonthlyBenefit_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CrewUI.CrewSubscriptionContentContainer.OnTabSelected
struct UCrewSubscriptionContentContainer_OnTabSelected_Params
{
public:
	int32                                        TabIndex;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function CrewUI.CrewTileDetailsTag.OnTagSetup
struct UCrewTileDetailsTag_OnTagSetup_Params
{
public:
	enum class ECrewDetailsTag                   RewardTag;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsOwnedTag;                                       // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CrewUI.FortProgressiveScreenBase.BP_OnContainerTabVisibilityUpdated
struct UFortProgressiveScreenBase_BP_OnContainerTabVisibilityUpdated_Params
{
public:
	bool                                         bTabsVisible;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E80[0x3];                                     // Fixing Size After Last Property 
	float                                        SpacingAdjustmentForTabs;                          // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CrewUI.FortProgressiveItemScreen.OnUpdateSubscriptionState
struct UFortProgressiveItemScreen_OnUpdateSubscriptionState_Params
{
public:
	bool                                         bSubscribed;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CrewUI.FortProgressiveItemScreen.OnSetIsSoloScreen
struct UFortProgressiveItemScreen_OnSetIsSoloScreen_Params
{
public:
	bool                                         bInIsSoloScreen;                                   // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CrewUI.FortProgressiveItemScreen.OnItemSelected
struct UFortProgressiveItemScreen_OnItemSelected_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function CrewUI.FortProgressiveItemScreen.OnErrorStateTextUpdated
struct UFortProgressiveItemScreen_OnErrorStateTextUpdated_Params
{
public:
	class FText                                  ErrorStateText;                                    // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CrewUI.FortProgressiveItemScreen.BlockScreenContent
struct UFortProgressiveItemScreen_BlockScreenContent_Params
{
public:
	bool                                         bBlockScreen;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E87[0x7];                                     // Fixing Size After Last Property 
	class FText                                  ContentBlockedText;                                // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function CrewUI.FortProgressiveItemStateTitleWidget.BP_OnSetHeaderInfo
struct UFortProgressiveItemStateTitleWidget_BP_OnSetHeaderInfo_Params
{
public:
	class FText                                  Subheading;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bSubscribed;                                       // 0x18(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E94[0x3];                                     // Fixing Size After Last Property 
	int32                                        UnlockedStages;                                    // 0x1C(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxStages;                                         // 0x20(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E96[0x4];                                     // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function CrewUI.FortProgressiveItemWidget.OnUnhighlighted
struct UFortProgressiveItemWidget_OnUnhighlighted_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function CrewUI.FortProgressiveItemWidget.OnTileMaterialLoaded
struct UFortProgressiveItemWidget_OnTileMaterialLoaded_Params
{
public:
	bool                                         bSubscribed;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function CrewUI.FortProgressiveItemWidget.OnStageItemChanged
struct UFortProgressiveItemWidget_OnStageItemChanged_Params
{
public:
	struct FProgressiveStageItemInfo             InStageItemInfo;                                   // 0x0(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CrewUI.FortProgressiveItemWidget.OnPeekStateChanged
struct UFortProgressiveItemWidget_OnPeekStateChanged_Params
{
public:
	bool                                         bIsInPeekState;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CrewUI.FortProgressiveItemWidget.OnHighlighted
struct UFortProgressiveItemWidget_OnHighlighted_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function CrewUI.FortProgressiveSetDetailsWidget.BP_OnUpdateSetDetails
struct UFortProgressiveSetDetailsWidget_BP_OnUpdateSetDetails_Params
{
public:
	class FText                                  SetName;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ExpiringText;                                      // 0x18(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bCompleted;                                        // 0x30(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EA2[0x7];                                     // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function CrewUI.FortProgressiveSetList.ClearSetTiles
struct UFortProgressiveSetList_ClearSetTiles_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CrewUI.FortProgressiveSetList.AddSetTile
struct UFortProgressiveSetList_AddSetTile_Params
{
public:
	class UFortProgressiveSetTile*               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CrewUI.FortProgressiveSetTile.BP_OnTileMaterialLoaded
struct UFortProgressiveSetTile_BP_OnTileMaterialLoaded_Params
{
public:
	bool                                         bSubscribed;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function CrewUI.FortProgressiveSetTile.BP_OnInitializeSetInfo
struct UFortProgressiveSetTile_BP_OnInitializeSetInfo_Params
{
public:
	struct FProgressiveSetInfo                   InSetInfo;                                         // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  BottomText;                                        // 0x60(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  BottomSubtext;                                     // 0x78(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bSubscribed;                                       // 0x90(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EB3[0x7];                                     // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// Function CrewUI.FortProgressiveStageList.SelectStageInDirection
struct UFortProgressiveStageList_SelectStageInDirection_Params
{
public:
	int32                                        Direction;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CrewUI.FortProgressiveStageList.ClearStageWidgets
struct UFortProgressiveStageList_ClearStageWidgets_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CrewUI.FortProgressiveStageList.AddStageWidget
struct UFortProgressiveStageList_AddStageWidget_Params
{
public:
	class UFortProgressiveStageWidget*           ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CrewUI.FortProgressiveStageWidget.OnSetTooltipVisible
struct UFortProgressiveStageWidget_OnSetTooltipVisible_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CrewUI.FortProgressiveStageWidget.OnSetTooltipText
struct UFortProgressiveStageWidget_OnSetTooltipText_Params
{
public:
	class FText                                  InToolTipText;                                     // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CrewUI.FortProgressiveStageWidget.OnPeekStateChanged
struct UFortProgressiveStageWidget_OnPeekStateChanged_Params
{
public:
	bool                                         bIsInPeekState;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CrewUI.FortProgressiveStageWidget.ClearStageItemWidgets
struct UFortProgressiveStageWidget_ClearStageItemWidgets_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CrewUI.FortProgressiveStageWidget.AddStageItemWidget
struct UFortProgressiveStageWidget_AddStageItemWidget_Params
{
public:
	class UFortProgressiveItemWidget*            ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateSubscriptionState
struct UFortProgressiveTableOfContentsScreen_BP_OnUpdateSubscriptionState_Params
{
public:
	bool                                         bSubscribed;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateNumTilesAvailable
struct UFortProgressiveTableOfContentsScreen_BP_OnUpdateNumTilesAvailable_Params
{
public:
	int32                                        NumTiles;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateErrorStateText
struct UFortProgressiveTableOfContentsScreen_BP_OnUpdateErrorStateText_Params
{
public:
	class FText                                  ErrorStateText;                                    // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateBanner
struct UFortProgressiveTableOfContentsScreen_BP_OnUpdateBanner_Params
{
public:
	class FText                                  BannerText;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bAllSetsCompleted;                                 // 0x18(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSubscribed;                                       // 0x19(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ECE[0x6];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function CrewUI.FortProgressiveTableOfContentsScreen.BP_OnSetDescriptionText
struct UFortProgressiveTableOfContentsScreen_BP_OnSetDescriptionText_Params
{
public:
	class FText                                  ProductDescription;                                // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CrewUI.FortProgressiveTableOfContentsScreen.BlockScreenContent
struct UFortProgressiveTableOfContentsScreen_BlockScreenContent_Params
{
public:
	bool                                         bBlockScreen;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ED2[0x7];                                     // Fixing Size After Last Property 
	class FText                                  ContentBlockedText;                                // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

}
}


