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

// 0x1 (0x1 - 0x0)
// Function PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListIconPicker.OnAugmentToolViewSwap
struct UFortMobileButtonBehaviorComponent_AugmentsListIconPicker_OnAugmentToolViewSwap_Params
{
public:
	bool                                         bIsInInventoryView;                                // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListVisibility.HandleAugmentToolViewSwap
struct UFortMobileButtonBehaviorComponent_AugmentsListVisibility_HandleAugmentToolViewSwap_Params
{
public:
	bool                                         bInIsInventoryView;                                // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListVisibility.HandleAugmentToolOpenedStatusChanged
struct UFortMobileButtonBehaviorComponent_AugmentsListVisibility_HandleAugmentToolOpenedStatusChanged_Params
{
public:
	bool                                         bIsOpened;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInIsInventoryView;                                // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnTimerUpdated
struct UFortPlayerAugmentHUDTimerWidget_OnTimerUpdated_Params
{
public:
	float                                        TimeRemaining;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimePercentage;                                    // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnNumPendingAugmentsToGrantUpdated
struct UFortPlayerAugmentHUDTimerWidget_OnNumPendingAugmentsToGrantUpdated_Params
{
public:
	int32                                        NumPendingAugmentsToGrant;                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnMovementModeChanged
struct UFortPlayerAugmentHUDTimerWidget_OnMovementModeChanged_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnHUDElementVisibilityChanged
struct UFortPlayerAugmentHUDTimerWidget_OnHUDElementVisibilityChanged_Params
{
public:
	struct FGameplayTagContainer                 HiddenElementTagContainer;                         // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnCanSelectAugmentChanged
struct UFortPlayerAugmentHUDTimerWidget_OnCanSelectAugmentChanged_Params
{
public:
	bool                                         bCanSelectAugment;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnAugmentSelectorOpenedStatusChanged
struct UFortPlayerAugmentHUDTimerWidget_OnAugmentSelectorOpenedStatusChanged_Params
{
public:
	bool                                         bIsOpened;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnAugmentGrantingTimersResetForMatch
struct UFortPlayerAugmentHUDTimerWidget_OnAugmentGrantingTimersResetForMatch_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnAugmentGrantingTimersFinishedForMatch
struct UFortPlayerAugmentHUDTimerWidget_OnAugmentGrantingTimersFinishedForMatch_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleTimerUpdated
struct UFortPlayerAugmentHUDTimerWidget_HandleTimerUpdated_Params
{
public:
	float                                        TimeRemaining;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimePercentage;                                    // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleNumPendingAugmentsToGrantUpdated
struct UFortPlayerAugmentHUDTimerWidget_HandleNumPendingAugmentsToGrantUpdated_Params
{
public:
	int8                                         NumPendingAugmentsToGrant;                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleHUDElementVisibilityChanged
struct UFortPlayerAugmentHUDTimerWidget_HandleHUDElementVisibilityChanged_Params
{
public:
	struct FGameplayTagContainer                 HiddenElementTagContainer;                         // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleCanSelectAugmentChanged
struct UFortPlayerAugmentHUDTimerWidget_HandleCanSelectAugmentChanged_Params
{
public:
	bool                                         bCanSelectAugment;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleAugmentSelectorOpenedStatusChanged
struct UFortPlayerAugmentHUDTimerWidget_HandleAugmentSelectorOpenedStatusChanged_Params
{
public:
	bool                                         bIsOpened;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bViewingAugmentInventory;                          // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleAugmentGrantingTimersResetForMatch
struct UFortPlayerAugmentHUDTimerWidget_HandleAugmentGrantingTimersResetForMatch_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleAugmentGrantingTimersFinishedForMatch
struct UFortPlayerAugmentHUDTimerWidget_HandleAugmentGrantingTimersFinishedForMatch_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.GetPendingAugmentsToGrant
struct UFortPlayerAugmentHUDTimerWidget_GetPendingAugmentsToGrant_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.FormatTime
struct UFortPlayerAugmentHUDTimerWidget_FormatTime_Params
{
public:
	float                                        TotalSeconds;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_469C[0x4];                                     // Fixing Size After Last Property..
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.CanSelectAugment
struct UFortPlayerAugmentHUDTimerWidget_CanSelectAugment_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.CanEquipSelectionTool
struct UFortPlayerAugmentHUDTimerWidget_CanEquipSelectionTool_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentHUDSelectionTimerWidget.UpdateCountdown
struct UFortPlayerAugmentHUDSelectionTimerWidget_UpdateCountdown_Params
{
public:
	float                                        TimeRemaining;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentHUDSelectionTimerWidget.SetMobileProgressTimer
struct UFortPlayerAugmentHUDSelectionTimerWidget_SetMobileProgressTimer_Params
{
public:
	float                                        TimePercentage;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentHUDSelectionTimerWidget.OnCountdownActivated
struct UFortPlayerAugmentHUDSelectionTimerWidget_OnCountdownActivated_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentHUDSelectionTimerWidget.IsCountdownVisible
struct UFortPlayerAugmentHUDSelectionTimerWidget_IsCountdownVisible_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function PlayerAugmentsUI.FortMobilePlayerAugmentTimer.HandleHUDElementVisibilityChanged
struct UFortMobilePlayerAugmentTimer_HandleHUDElementVisibilityChanged_Params
{
public:
	struct FGameplayTagContainer                 HiddenElementTagContainer;                         // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function PlayerAugmentsUI.FortMobilePlayerAugmentTimer.BP_OnHUDElementVisibilityChanged
struct UFortMobilePlayerAugmentTimer_BP_OnHUDElementVisibilityChanged_Params
{
public:
	struct FGameplayTagContainer                 HiddenElementTagContainer;                         // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bForceCollapse;                                    // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_469F[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnTimerUpdated
struct UFortPlayerAugmentGranterWidget_OnTimerUpdated_Params
{
public:
	float                                        TimeRemaining;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimePercentage;                                    // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnSelectedAugmentForGrant
struct UFortPlayerAugmentGranterWidget_OnSelectedAugmentForGrant_Params
{
public:
	class UFortPlayerAugmentItemDefinition*      HighlightedAugment;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnRerollAugments
struct UFortPlayerAugmentGranterWidget_OnRerollAugments_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnPopulateAvailableAugmentsHUD
struct UFortPlayerAugmentGranterWidget_OnPopulateAvailableAugmentsHUD_Params
{
public:
	TArray<class UFortPlayerAugmentItemDefinition*> AugmentItemDefinition;                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnNumPendingAugmentsToGrantUpdated
struct UFortPlayerAugmentGranterWidget_OnNumPendingAugmentsToGrantUpdated_Params
{
public:
	int32                                        NumPendingAugmentsToGrant;                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnInputTypeChanged
struct UFortPlayerAugmentGranterWidget_OnInputTypeChanged_Params
{
public:
	enum class ECommonInputType                  NewInputType;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnCanSelectAugmentChanged
struct UFortPlayerAugmentGranterWidget_OnCanSelectAugmentChanged_Params
{
public:
	bool                                         bCanSelectAugment;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentSelectorToolViewSwapped
struct UFortPlayerAugmentGranterWidget_OnAugmentSelectorToolViewSwapped_Params
{
public:
	bool                                         bViewingAugmentInventory;                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentSelectorOpenedStatusChanged
struct UFortPlayerAugmentGranterWidget_OnAugmentSelectorOpenedStatusChanged_Params
{
public:
	bool                                         bIsOpened;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bViewingAugmentInventory;                          // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentSelectionStarted
struct UFortPlayerAugmentGranterWidget_OnAugmentSelectionStarted_Params
{
public:
	int32                                        SelectedAugmentIndex;                              // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentScrollUpEvent
struct UFortPlayerAugmentGranterWidget_OnAugmentScrollUpEvent_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentScrollDownEvent
struct UFortPlayerAugmentGranterWidget_OnAugmentScrollDownEvent_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentHighlighted
struct UFortPlayerAugmentGranterWidget_OnAugmentHighlighted_Params
{
public:
	int32                                        HighlightedAugmentIndex;                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleTimerUpdated
struct UFortPlayerAugmentGranterWidget_HandleTimerUpdated_Params
{
public:
	float                                        TimeRemaining;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimePercentage;                                    // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleSelectedAugmentForGrant
struct UFortPlayerAugmentGranterWidget_HandleSelectedAugmentForGrant_Params
{
public:
	class UFortPlayerAugmentItemDefinition*      SelectedAugment;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleRerollAugments
struct UFortPlayerAugmentGranterWidget_HandleRerollAugments_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleNumPendingAugmentsToGrantUpdated
struct UFortPlayerAugmentGranterWidget_HandleNumPendingAugmentsToGrantUpdated_Params
{
public:
	int8                                         NumPendingAugmentsToGrant;                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleCanSelectAugmentChanged
struct UFortPlayerAugmentGranterWidget_HandleCanSelectAugmentChanged_Params
{
public:
	bool                                         bCanSelectAugment;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleAvailableAugmentsForGrantingUpdated
struct UFortPlayerAugmentGranterWidget_HandleAvailableAugmentsForGrantingUpdated_Params
{
public:
	class UFortControllerComponent_AugmentGrantingSystem* GrantingComponent;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleAugmentSelectorToolViewSwapped
struct UFortPlayerAugmentGranterWidget_HandleAugmentSelectorToolViewSwapped_Params
{
public:
	bool                                         bViewingAugmentsInventory;                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleAugmentSelectorOpenedStatusChanged
struct UFortPlayerAugmentGranterWidget_HandleAugmentSelectorOpenedStatusChanged_Params
{
public:
	bool                                         bIsOpened;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bViewingAugmentInventory;                          // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleAugmentSelectionStarted
struct UFortPlayerAugmentGranterWidget_HandleAugmentSelectionStarted_Params
{
public:
	int32                                        SelectedAugmentIndex;                              // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleAugmentHighlighted
struct UFortPlayerAugmentGranterWidget_HandleAugmentHighlighted_Params
{
public:
	int32                                        HighlightedAugmentIndex;                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.GetPendingAugmentsToGrant
struct UFortPlayerAugmentGranterWidget_GetPendingAugmentsToGrant_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentHUDQuickbarWidget.OnAugmentsUpdated
struct UFortPlayerAugmentHUDQuickbarWidget_OnAugmentsUpdated_Params
{
public:
	TArray<class UFortPlayerAugmentItemDefinition*> ActiveAugments;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.StartRerollHoldProgress
struct UFortPlayerAugmentHUDRerollWidget_StartRerollHoldProgress_Params
{
public:
	float                                        Duration;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.OnUpdateCurrency
struct UFortPlayerAugmentHUDRerollWidget_OnUpdateCurrency_Params
{
public:
	int32                                        OwnedCurrency;                                     // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RerollCost;                                        // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.OnRerollAugments
struct UFortPlayerAugmentHUDRerollWidget_OnRerollAugments_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.OnFreeRerollsUpdated
struct UFortPlayerAugmentHUDRerollWidget_OnFreeRerollsUpdated_Params
{
public:
	int32                                        NewNumFreeRerolls;                                 // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.HandleRerollAugments
struct UFortPlayerAugmentHUDRerollWidget_HandleRerollAugments_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.HandleFreeRerollsUpdated
struct UFortPlayerAugmentHUDRerollWidget_HandleFreeRerollsUpdated_Params
{
public:
	int32                                        NewNumFreeRerolls;                                 // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.EndRerollHoldProgress
struct UFortPlayerAugmentHUDRerollWidget_EndRerollHoldProgress_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget.UpdateAugment
struct UFortPlayerAugmentInfoEntryWidget_UpdateAugment_Params
{
public:
	class UFortPlayerAugmentItemDefinition*      AugmentItemDefinition;                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget.OnItemRaritySet
struct UFortPlayerAugmentInfoEntryWidget_OnItemRaritySet_Params
{
public:
	enum class EFortRarity                       Rarity;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46A3[0x7];                                     // Fixing Size After Last Property..
	struct FFortRarityItemData                   RarityItemData;                                    // 0x8(0x80)(ConstParm, Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget.OnItemPinColorSet
struct UFortPlayerAugmentInfoEntryWidget_OnItemPinColorSet_Params
{
public:
	struct FLinearColor                          PinColor;                                          // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget.OnItemNewOrBorrowedSet
struct UFortPlayerAugmentInfoEntryWidget_OnItemNewOrBorrowedSet_Params
{
public:
	bool                                         bIsNew;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsBorrowed;                                       // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentInGameCarriedWidget.OnShowInitialAugment
struct UFortPlayerAugmentInGameCarriedWidget_OnShowInitialAugment_Params
{
public:
	class UFortPlayerAugmentItemDefinition*      PlayerAugmentItemDefinition;                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentInGameCarriedWidget.HandleExitBus
struct UFortPlayerAugmentInGameCarriedWidget_HandleExitBus_Params
{
public:
	class UFortPlayerControllerZone*             FortPCZone;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentInventoryInfoWidget.OnItemRaritySet
struct UFortPlayerAugmentInventoryInfoWidget_OnItemRaritySet_Params
{
public:
	enum class EFortRarity                       Rarity;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46A4[0x7];                                     // Fixing Size After Last Property..
	struct FFortRarityItemData                   RarityItemData;                                    // 0x8(0x80)(ConstParm, Parm, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentInventoryInfoWidget.OnItemNewOrBorrowedSet
struct UFortPlayerAugmentInventoryInfoWidget_OnItemNewOrBorrowedSet_Params
{
public:
	bool                                         bIsNew;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsBorrowed;                                       // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentInventoryListEntry.OnAugmentListItemSet
struct UFortPlayerAugmentInventoryListEntry_OnAugmentListItemSet_Params
{
public:
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentInventoryTab.RequestOpenSelector
struct UFortPlayerAugmentInventoryTab_RequestOpenSelector_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentInventoryTab.OnTimerUpdated
struct UFortPlayerAugmentInventoryTab_OnTimerUpdated_Params
{
public:
	float                                        TimeRemaining;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimePercentage;                                    // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentInventoryTab.OnNumPendingAugmentsToGrantUpdated
struct UFortPlayerAugmentInventoryTab_OnNumPendingAugmentsToGrantUpdated_Params
{
public:
	int32                                        NumPendingAugmentsToGrant;                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentInventoryTab.OnAugmentListUpdated
struct UFortPlayerAugmentInventoryTab_OnAugmentListUpdated_Params
{
public:
	int32                                        NumAugments;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentInventoryTab.OnAugmentGrantingTimersResetForMatch
struct UFortPlayerAugmentInventoryTab_OnAugmentGrantingTimersResetForMatch_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentInventoryTab.OnAugmentGrantingTimersFinishedForMatch
struct UFortPlayerAugmentInventoryTab_OnAugmentGrantingTimersFinishedForMatch_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentInventoryTab.HandleTimerUpdated
struct UFortPlayerAugmentInventoryTab_HandleTimerUpdated_Params
{
public:
	float                                        TimeRemaining;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimePercentage;                                    // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentInventoryTab.HandleNumPendingAugmentsToGrantUpdated
struct UFortPlayerAugmentInventoryTab_HandleNumPendingAugmentsToGrantUpdated_Params
{
public:
	int8                                         NumPendingAugmentsToGrant;                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentInventoryTab.HandleAugmentGrantingTimersResetForMatch
struct UFortPlayerAugmentInventoryTab_HandleAugmentGrantingTimersResetForMatch_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentInventoryTab.HandleAugmentGrantingTimersFinishedForMatch
struct UFortPlayerAugmentInventoryTab_HandleAugmentGrantingTimersFinishedForMatch_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentInventoryTab.GetPendingAugmentsToGrant
struct UFortPlayerAugmentInventoryTab_GetPendingAugmentsToGrant_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentLobbyWidget.OnShowInitialAugment
struct UFortPlayerAugmentLobbyWidget_OnShowInitialAugment_Params
{
public:
	class UFortPlayerAugmentItemDefinition*      CarriedAugment;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentPostMatchUnlocksWidget.OnShowUnlockedAugments
struct UFortPlayerAugmentPostMatchUnlocksWidget_OnShowUnlockedAugments_Params
{
public:
	TArray<class UFortPlayerAugmentItemDefinition*> UnlockedAugments;                                  // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget.OpenWidget
struct UFortPlayerAugmentSpecialAcquiredNotificationWidget_OpenWidget_Params
{
public:
	class UFortPlayerAugmentItemDefinition*      ItemDef;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget.OnStompedByOtherWidget
struct UFortPlayerAugmentSpecialAcquiredNotificationWidget_OnStompedByOtherWidget_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget.OnEventAdded
struct UFortPlayerAugmentSpecialAcquiredNotificationWidget_OnEventAdded_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget.HasMoreAugmentEvents
struct UFortPlayerAugmentSpecialAcquiredNotificationWidget_HasMoreAugmentEvents_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget.ConstructEventDescription
struct UFortPlayerAugmentSpecialAcquiredNotificationWidget_ConstructEventDescription_Params
{
public:
	class UFortPlayerAugmentItemDefinition*      ItemDef;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget.CloseWidget
struct UFortPlayerAugmentSpecialAcquiredNotificationWidget_CloseWidget_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
