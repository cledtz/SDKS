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
// Function EventScreenBase.FortEventModalBase.CloseModal
struct UFortEventModalBase_CloseModal_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function EventScreenBase.FortEventMoreInfoGroup.OnSetGroupText
struct UFortEventMoreInfoGroup_OnSetGroupText_Params
{
public:
	class FText                                  Header;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  Body;                                              // 0x18(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EventScreenBase.FortEventMoreInfoGroup.OnIconLoaded
struct UFortEventMoreInfoGroup_OnIconLoaded_Params
{
public:
	class UTexture2D*                            Icon;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EventScreenBase.FortEventMoreInfoGroup.OnEventScreenDataSet
struct UFortEventMoreInfoGroup_OnEventScreenDataSet_Params
{
public:
	class UFortEventScreenData*                  InEventScreenData;                                 // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function EventScreenBase.FortEventMoreInfoModal.SetModalText
struct UFortEventMoreInfoModal_SetModalText_Params
{
public:
	class FText                                  Header;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  SubHeader;                                         // 0x18(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  Legal;                                             // 0x30(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function EventScreenBase.FortEventMoreInfoModal.OnModalBackout
struct UFortEventMoreInfoModal_OnModalBackout_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function EventScreenBase.FortEventMoreInfoModal.OnEventScreenDataSet
struct UFortEventMoreInfoModal_OnEventScreenDataSet_Params
{
public:
	class UFortEventScreenData*                  InEventScreenData;                                 // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EventScreenBase.FortEventMoreInfoModal.GetEventScreenData
struct UFortEventMoreInfoModal_GetEventScreenData_Params
{
public:
	class UFortEventScreenData*                  ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EventScreenBase.FortEventPurchaseLevelsModal.OnPurchaseAmountChanged
struct UFortEventPurchaseLevelsModal_OnPurchaseAmountChanged_Params
{
public:
	int32                                        TotalPrice;                                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelQuantity;                                     // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PurchaseQuantity;                                  // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ResourceQuantity;                                  // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EventScreenBase.FortEventPurchaseLevelsModal.OnEventScreenDataSet
struct UFortEventPurchaseLevelsModal_OnEventScreenDataSet_Params
{
public:
	class UFortEventScreenData*                  InEventScreenData;                                 // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EventScreenBase.FortEventPurchaseLevelsModal.OnCMSTextApplied
struct UFortEventPurchaseLevelsModal_OnCMSTextApplied_Params
{
public:
	class FText                                  LegalText;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function EventScreenBase.FortEventPurchaseLevelsModal.OnAmountChangeButtonClicked
struct UFortEventPurchaseLevelsModal_OnAmountChangeButtonClicked_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function EventScreenBase.FortEventPurchaseLevelsModal.HandlePurchaseComplete
struct UFortEventPurchaseLevelsModal_HandlePurchaseComplete_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4361[0x7];                                     // Fixing Size After Last Property 
	TArray<struct FPurchasedItemInfo>            PurchasedItems;                                    // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InOfferId;                                         // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EventScreenBase.FortEventPurchaseLevelsModal.GetEventScreenData
struct UFortEventPurchaseLevelsModal_GetEventScreenData_Params
{
public:
	class UFortEventScreenData*                  ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function EventScreenBase.FortPurchasePremiumTrackBody.OnPopulate
struct UFortPurchasePremiumTrackBody_OnPopulate_Params
{
public:
	int32                                        BodyIndex;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_436B[0x4];                                     // Fixing Size After Last Property 
	class FText                                  BodyText;                                          // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function EventScreenBase.FortEventPurchasePremiumTrackModal.OnPriceSet
struct UFortEventPurchasePremiumTrackModal_OnPriceSet_Params
{
public:
	int32                                        Price;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EventScreenBase.FortEventPurchasePremiumTrackModal.OnEventScreenDataSet
struct UFortEventPurchasePremiumTrackModal_OnEventScreenDataSet_Params
{
public:
	class UFortEventScreenData*                  InEventScreenData;                                 // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function EventScreenBase.FortEventPurchasePremiumTrackModal.OnCMSTextApplied
struct UFortEventPurchasePremiumTrackModal_OnCMSTextApplied_Params
{
public:
	class FText                                  HeaderText;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  LegalText;                                         // 0x18(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function EventScreenBase.FortEventPurchasePremiumTrackModal.HandlePurchaseComplete
struct UFortEventPurchasePremiumTrackModal_HandlePurchaseComplete_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4382[0x7];                                     // Fixing Size After Last Property 
	TArray<struct FPurchasedItemInfo>            PurchasedItems;                                    // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InOfferId;                                         // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EventScreenBase.FortEventPurchasePremiumTrackModal.GetEventScreenData
struct UFortEventPurchasePremiumTrackModal_GetEventScreenData_Params
{
public:
	class UFortEventScreenData*                  ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function EventScreenBase.FortEventRewardTracksWidget.BPSetProgressPercent
struct UFortEventRewardTracksWidget_BPSetProgressPercent_Params
{
public:
	float                                        Percent;                                           // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EventScreenBase.FortEventRewardTracksWidget.BPSetAllRewardsCollected
struct UFortEventRewardTracksWidget_BPSetAllRewardsCollected_Params
{
public:
	bool                                         bAllCollected;                                     // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EventScreenBase.FortEventRewardTracksWidget.BPOnSetRewardItem
struct UFortEventRewardTracksWidget_BPOnSetRewardItem_Params
{
public:
	int32                                        RequiredProgress;                                  // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RemainingProgress;                                 // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RewardProgressPercent;                             // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PreviewProgressPercent;                            // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverallProgressPercent;                            // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInPreviewMode;                                    // 0x14(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43B1[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function EventScreenBase.FortEventRewardTracksWidget.BPOnEventScreenDataSet
struct UFortEventRewardTracksWidget_BPOnEventScreenDataSet_Params
{
public:
	class UFortEventScreenData*                  InEventScreenData;                                 // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// Function EventScreenBase.FortEventRewardWidget.SetTrackData
struct UFortEventRewardWidget_SetTrackData_Params
{
public:
	struct FEventScreenTrackData                 TrackData;                                         // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bIsOwned;                                          // 0x20(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43C8[0x3];                                     // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// Function EventScreenBase.FortEventRewardWidget.SetProgressPercent
struct UFortEventRewardWidget_SetProgressPercent_Params
{
public:
	float                                        Percent;                                           // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EventScreenBase.FortEventRewardWidget.SetIsBannerItem
struct UFortEventRewardWidget_SetIsBannerItem_Params
{
public:
	bool                                         bIsBanner;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EventScreenBase.FortEventRewardWidget.SetInSelectedState
struct UFortEventRewardWidget_SetInSelectedState_Params
{
public:
	bool                                         bSelected;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EventScreenBase.FortEventRewardWidget.SetInPreviewSelectedState
struct UFortEventRewardWidget_SetInPreviewSelectedState_Params
{
public:
	bool                                         bSelected;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EventScreenBase.FortEventRewardWidget.SetInPreviewedState
struct UFortEventRewardWidget_SetInPreviewedState_Params
{
public:
	bool                                         bPreviewed;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EventScreenBase.FortEventRewardWidget.SetInPremiumUpgradeState
struct UFortEventRewardWidget_SetInPremiumUpgradeState_Params
{
public:
	bool                                         bHighlighted;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EventScreenBase.FortEventRewardWidget.SetDoubleWidth
struct UFortEventRewardWidget_SetDoubleWidth_Params
{
public:
	bool                                         bDoubleWidth;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EventScreenBase.FortEventRewardWidget.SetCustomItemIcon
struct UFortEventRewardWidget_SetCustomItemIcon_Params
{
public:
	class UTexture2D*                            CustomItemIcon;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EventScreenBase.FortEventRewardWidget.SetAllRewardsCollected
struct UFortEventRewardWidget_SetAllRewardsCollected_Params
{
public:
	bool                                         bAllCollected;                                     // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EventScreenBase.FortEventRewardWidget.OnSetRewardItem
struct UFortEventRewardWidget_OnSetRewardItem_Params
{
public:
	int32                                        RequiredProgress;                                  // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RemainingProgress;                                 // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RewardProgressPercent;                             // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PreviewProgressPercent;                            // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverallProgressPercent;                            // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInPreviewMode;                                    // 0x14(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43E3[0x3];                                     // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function EventScreenBase.FortEventRewardWidget.OnRewardWidgetReset
struct UFortEventRewardWidget_OnRewardWidgetReset_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function EventScreenBase.FortEventRewardWidget.OnInputMethodChanged
struct UFortEventRewardWidget_OnInputMethodChanged_Params
{
public:
	enum class ECommonInputType                  NewInputType;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EventScreenBase.FortEventRewardWidget.OnEventScreenDataSet
struct UFortEventRewardWidget_OnEventScreenDataSet_Params
{
public:
	class UFortEventScreenData*                  InEventScreenData;                                 // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EventScreenBase.FortEventRewardWidget.GetEventScreenData
struct UFortEventRewardWidget_GetEventScreenData_Params
{
public:
	class UFortEventScreenData*                  ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EventScreenBase.FortEventScreenBase.UpdateVariantCounter
struct UFortEventScreenBase_UpdateVariantCounter_Params
{
public:
	int32                                        CurrentVariantIndex;                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalNumVariants;                                  // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EventScreenBase.FortEventScreenBase.SetRewardTrackLegal
struct UFortEventScreenBase_SetRewardTrackLegal_Params
{
public:
	class FText                                  LegalText;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EventScreenBase.FortEventScreenBase.SetItemShopOfferInfoVisibility
struct UFortEventScreenBase_SetItemShopOfferInfoVisibility_Params
{
public:
	bool                                         bIsVisible;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EventScreenBase.FortEventScreenBase.SetItemShopCallout
struct UFortEventScreenBase_SetItemShopCallout_Params
{
public:
	class FText                                  ItemShopCalloutText;                               // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function EventScreenBase.FortEventScreenBase.RegisterLayoutSlots
struct UFortEventScreenBase_RegisterLayoutSlots_Params
{
public:
};

// 0x2 (0x2 - 0x0)
// Function EventScreenBase.FortEventScreenBase.OnScreenViewChanged
struct UFortEventScreenBase_OnScreenViewChanged_Params
{
public:
	enum class EEventScreenView                  PrevScreenView;                                    // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEventScreenView                  NewScreenView;                                     // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function EventScreenBase.FortEventScreenBase.OnRewardTrackReady
struct UFortEventScreenBase_OnRewardTrackReady_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function EventScreenBase.FortEventScreenBase.OnRewardPreviewItemChanged
struct UFortEventScreenBase_OnRewardPreviewItemChanged_Params
{
public:
	class UFortAccountItemDefinition*            Item;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFreeTrack;                                        // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_440C[0x7];                                     // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function EventScreenBase.FortEventScreenBase.OnFirstViewAfterCompletion
struct UFortEventScreenBase_OnFirstViewAfterCompletion_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function EventScreenBase.FortEventScreenBase.OnCalendarEventStarted
struct UFortEventScreenBase_OnCalendarEventStarted_Params
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EventScreenBase.FortEventScreenBase.OnCalendarEventEnded
struct UFortEventScreenBase_OnCalendarEventEnded_Params
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EventScreenBase.FortEventScreenBase.IsCalendarEventActive
struct UFortEventScreenBase_IsCalendarEventActive_Params
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_442D[0x7];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// Function EventScreenBase.FortEventScreenBase.HasPurchasedPremiumTrack
struct UFortEventScreenBase_HasPurchasedPremiumTrack_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EventScreenBase.FortEventScreenBase.HasAllRewardsCollected
struct UFortEventScreenBase_HasAllRewardsCollected_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EventScreenBase.FortEventScreenBase.HandleUpsellPromptNavigateUpEvent
struct UFortEventScreenBase_HandleUpsellPromptNavigateUpEvent_Params
{
public:
	enum class EUINavigation                     InNavigation;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4431[0x7];                                     // Fixing Size After Last Property 
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EventScreenBase.FortEventScreenBase.HandleToggleFullscreenMap
struct UFortEventScreenBase_HandleToggleFullscreenMap_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EventScreenBase.FortEventScreenBase.HandleRewardListNavigateUpEvent
struct UFortEventScreenBase_HandleRewardListNavigateUpEvent_Params
{
public:
	enum class EUINavigation                     InNavigation;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4433[0x7];                                     // Fixing Size After Last Property 
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EventScreenBase.FortEventScreenBase.HandleRewardListNavigateRightEvent
struct UFortEventScreenBase_HandleRewardListNavigateRightEvent_Params
{
public:
	enum class EUINavigation                     InNavigation;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4435[0x7];                                     // Fixing Size After Last Property 
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EventScreenBase.FortEventScreenBase.HandleItemShown
struct UFortEventScreenBase_HandleItemShown_Params
{
public:
	class UFortAccountItemDefinition*            AccountItemDef;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function EventScreenBase.FortEventScreenBase.HandleGiftBoxClosed
struct UFortEventScreenBase_HandleGiftBoxClosed_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function EventScreenBase.FortEventScreenBase.HandleActiveSeasonDataChanged
struct UFortEventScreenBase_HandleActiveSeasonDataChanged_Params
{
public:
	TArray<class FString>                        ActiveEventFlags;                                  // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EventScreenBase.FortEventScreenBase.GetVaultWorldFloorMID
struct UFortEventScreenBase_GetVaultWorldFloorMID_Params
{
public:
	class UMaterialInstanceDynamic*              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EventScreenBase.FortEventScreenBase.GetVaultWorldBackgroundMID
struct UFortEventScreenBase_GetVaultWorldBackgroundMID_Params
{
public:
	class UMaterialInstanceDynamic*              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EventScreenBase.FortEventScreenBase.GetActiveModal
struct UFortEventScreenBase_GetActiveModal_Params
{
public:
	class UFortEventModalBase*                   ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EventScreenBase.EventScreenListView.SetNativeTickAllowed
struct UEventScreenListView_SetNativeTickAllowed_Params
{
public:
	bool                                         bAllowed;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EventScreenBase.EventScreenListView.GetEventScreenData
struct UEventScreenListView_GetEventScreenData_Params
{
public:
	class UFortEventScreenData*                  ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function EventScreenBase.FortEventTokenCollectionWidget.OnRefreshIcon
struct UFortEventTokenCollectionWidget_OnRefreshIcon_Params
{
public:
	bool                                         IsCollected;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFirstViewAfterCollection;                       // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EventScreenBase.FortEventTrackerModule.OnModuleInitialized
struct UFortEventTrackerModule_OnModuleInitialized_Params
{
public:
	class UFortEventScreenData*                  InEventScreenData;                                 // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EventScreenBase.FortEventTrackerModule.GetEventScreenData
struct UFortEventTrackerModule_GetEventScreenData_Params
{
public:
	class UFortEventScreenData*                  ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EventScreenBase.FortEventTrackerModule_EventDetails.UpdateEventTimeRemaining
struct UFortEventTrackerModule_EventDetails_UpdateEventTimeRemaining_Params
{
public:
	class FText                                  OutEventTimeRemaining;                             // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function EventScreenBase.FortEventTrackerModule_EventDetails.OnPopulateEventDetailsText
struct UFortEventTrackerModule_EventDetails_OnPopulateEventDetailsText_Params
{
public:
	class FText                                  OutEventName;                                      // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  OutEventDescription;                               // 0x18(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EventScreenBase.FortEventTrackerModule_Header.OnPopulateEventResourceStarterHeader
struct UFortEventTrackerModule_Header_OnPopulateEventResourceStarterHeader_Params
{
public:
	class FText                                  Header;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function EventScreenBase.FortEventTrackerModule_Header.OnPopulateEventResourceHeader
struct UFortEventTrackerModule_Header_OnPopulateEventResourceHeader_Params
{
public:
	class FText                                  Header;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        ResourceValue;                                     // 0x18(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_447E[0x4];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function EventScreenBase.FortEventTrackerModule_RewardDetails.OnPopulateNextRewardDetails
struct UFortEventTrackerModule_RewardDetails_OnPopulateNextRewardDetails_Params
{
public:
	TArray<class FText>                          RewardNames;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        ResourceNeeded;                                    // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4481[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function EventScreenBase.FortEventTrackerModule_RewardDetails.OnPopulateCompletedReward
struct UFortEventTrackerModule_RewardDetails_OnPopulateCompletedReward_Params
{
public:
	TArray<class FText>                          RewardNames;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EventScreenBase.FortEventTrackerModule_RewardDetails.IsPremiumTrackOwned
struct UFortEventTrackerModule_RewardDetails_IsPremiumTrackOwned_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function EventScreenBase.FortEventTrackerModule_RewardRemaining.OnPopulateRemaining
struct UFortEventTrackerModule_RewardRemaining_OnPopulateRemaining_Params
{
public:
	int32                                        ResourceNeeded;                                    // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalResourceRequired;                             // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequiresPremiumTrackPurchase;                     // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_448C[0x3];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function EventScreenBase.FortEventTrackerModule_ProgressiveRewards.OnPopulateCompletionMessage
struct UFortEventTrackerModule_ProgressiveRewards_OnPopulateCompletionMessage_Params
{
public:
	bool                                         bIsComplete;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4492[0x7];                                     // Fixing Size After Last Property 
	class FText                                  CompletionText;                                    // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EventScreenBase.FortEventTrackerModule_Collection.OnGatherTokenCollectionWidgets
struct UFortEventTrackerModule_Collection_OnGatherTokenCollectionWidgets_Params
{
public:
	TArray<class UFortEventTokenCollectionWidget*> OutCollectionWidgets;                              // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EventScreenBase.FortEventTrackerModule_Banner.OnPopulateHeaderCTAText
struct UFortEventTrackerModule_Banner_OnPopulateHeaderCTAText_Params
{
public:
	class FText                                  HeaderCTAText;                                     // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EventScreenBase.FortEventTrackerModule_Banner.OnPopulateBannerText
struct UFortEventTrackerModule_Banner_OnPopulateBannerText_Params
{
public:
	class FText                                  BannerText;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EventScreenBase.FortEventTrackerModule_Banner.OnCTACompleted
struct UFortEventTrackerModule_Banner_OnCTACompleted_Params
{
public:
	bool                                         bIsComplete;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function EventScreenBase.FortEventTrackerModule_PremiumUpsell.OnPopulateText
struct UFortEventTrackerModule_PremiumUpsell_OnPopulateText_Params
{
public:
	class FText                                  HeaderText;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  BodyText;                                          // 0x18(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EventScreenBase.FortEventTrackerModule_PremiumUpsell.OnIconLoaded
struct UFortEventTrackerModule_PremiumUpsell_OnIconLoaded_Params
{
public:
	class UTexture*                              LoadedTexture;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EventScreenBase.FortEventTrackerModule_PremiumUpsell.IsPremiumTrackOwned
struct UFortEventTrackerModule_PremiumUpsell_IsPremiumTrackOwned_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EventScreenBase.FortEventTrackerModule_CustomText.OnPopulateText
struct UFortEventTrackerModule_CustomText_OnPopulateText_Params
{
public:
	class FText                                  CustomText;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

}
}


