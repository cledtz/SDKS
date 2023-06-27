#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function CrewUI.BattlePassCrewPurchaseButton.OnCurrencyUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassCrewPurchaseButton::OnCurrencyUpdated()
{
	static auto Func = Class->GetFunction("BattlePassCrewPurchaseButton", "OnCurrencyUpdated");

	Params::UBattlePassCrewPurchaseButton_OnCurrencyUpdated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.BattlePassCrewPurchaseContainer.OnTriggerIntroAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCanClaimRewards                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassCrewPurchaseContainer::OnTriggerIntroAnimation(bool bCanClaimRewards)
{
	static auto Func = Class->GetFunction("BattlePassCrewPurchaseContainer", "OnTriggerIntroAnimation");

	Params::UBattlePassCrewPurchaseContainer_OnTriggerIntroAnimation_Params Parms;

	Parms.bCanClaimRewards = bCanClaimRewards;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.BattlePassCrewPurchaseContainer.OnContentStateUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EBattlePassCrewContentStateInState                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInScreenOpened                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassCrewPurchaseContainer::OnContentStateUpdated(enum class EBattlePassCrewContentState InState, bool bInScreenOpened)
{
	static auto Func = Class->GetFunction("BattlePassCrewPurchaseContainer", "OnContentStateUpdated");

	Params::UBattlePassCrewPurchaseContainer_OnContentStateUpdated_Params Parms;

	Parms.InState = InState;
	Parms.bInScreenOpened = bInScreenOpened;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.BattlePassPurchaseScreen.OnShowNavButtonNotification
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShowNotification                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassPurchaseScreen::OnShowNavButtonNotification(bool bShowNotification)
{
	static auto Func = Class->GetFunction("BattlePassPurchaseScreen", "OnShowNavButtonNotification");

	Params::UBattlePassPurchaseScreen_OnShowNavButtonNotification_Params Parms;

	Parms.bShowNotification = bShowNotification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.BattlePassPurchaseScreen.OnSetScreenInteractable
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bInteractable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassPurchaseScreen::OnSetScreenInteractable(bool bInteractable)
{
	static auto Func = Class->GetFunction("BattlePassPurchaseScreen", "OnSetScreenInteractable");

	Params::UBattlePassPurchaseScreen_OnSetScreenInteractable_Params Parms;

	Parms.bInteractable = bInteractable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.BattlePassPurchaseScreen.OnSetNavButtonNotificationText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        NotificationText                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UBattlePassPurchaseScreen::OnSetNavButtonNotificationText(class FText& NotificationText)
{
	static auto Func = Class->GetFunction("BattlePassPurchaseScreen", "OnSetNavButtonNotificationText");

	Params::UBattlePassPurchaseScreen_OnSetNavButtonNotificationText_Params Parms;

	Parms.NotificationText = NotificationText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.BattlePassPurchaseScreen.OnPurchaseStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EBattlePassPurchaseStateInCurrentState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassPurchaseScreen::OnPurchaseStateChanged(enum class EBattlePassPurchaseState InCurrentState)
{
	static auto Func = Class->GetFunction("BattlePassPurchaseScreen", "OnPurchaseStateChanged");

	Params::UBattlePassPurchaseScreen_OnPurchaseStateChanged_Params Parms;

	Parms.InCurrentState = InCurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.BattlePassPurchaseScreen.OnPurchaseConfirmed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassPurchaseScreen::OnPurchaseConfirmed()
{
	static auto Func = Class->GetFunction("BattlePassPurchaseScreen", "OnPurchaseConfirmed");

	Params::UBattlePassPurchaseScreen_OnPurchaseConfirmed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewMultiSubscriptionAlertModal.OnSetHowToCancelURL
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString                      MoreInfoUrl                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrewMultiSubscriptionAlertModal::OnSetHowToCancelURL(const class FString& MoreInfoUrl)
{
	static auto Func = Class->GetFunction("CrewMultiSubscriptionAlertModal", "OnSetHowToCancelURL");

	Params::UCrewMultiSubscriptionAlertModal_OnSetHowToCancelURL_Params Parms;

	Parms.MoreInfoUrl = MoreInfoUrl;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeTitle
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCrewPriceChangeAcknowledgeModal::OnSetPriceChangeAcknowledgeTitle(class FText& Title)
{
	static auto Func = Class->GetFunction("CrewPriceChangeAcknowledgeModal", "OnSetPriceChangeAcknowledgeTitle");

	Params::UCrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeTitle_Params Parms;

	Parms.Title = Title;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeMoreInfoUrl
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        MoreInfoUrl                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCrewPriceChangeAcknowledgeModal::OnSetPriceChangeAcknowledgeMoreInfoUrl(class FText& MoreInfoUrl)
{
	static auto Func = Class->GetFunction("CrewPriceChangeAcknowledgeModal", "OnSetPriceChangeAcknowledgeMoreInfoUrl");

	Params::UCrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeMoreInfoUrl_Params Parms;

	Parms.MoreInfoUrl = MoreInfoUrl;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeMoreInfoText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        ConfirmButtonText                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCrewPriceChangeAcknowledgeModal::OnSetPriceChangeAcknowledgeMoreInfoText(class FText& ConfirmButtonText)
{
	static auto Func = Class->GetFunction("CrewPriceChangeAcknowledgeModal", "OnSetPriceChangeAcknowledgeMoreInfoText");

	Params::UCrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeMoreInfoText_Params Parms;

	Parms.ConfirmButtonText = ConfirmButtonText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeConfirmButtonText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        ConfirmButtonText                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCrewPriceChangeAcknowledgeModal::OnSetPriceChangeAcknowledgeConfirmButtonText(class FText& ConfirmButtonText)
{
	static auto Func = Class->GetFunction("CrewPriceChangeAcknowledgeModal", "OnSetPriceChangeAcknowledgeConfirmButtonText");

	Params::UCrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeConfirmButtonText_Params Parms;

	Parms.ConfirmButtonText = ConfirmButtonText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeCheckboxText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        CheckboxText                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCrewPriceChangeAcknowledgeModal::OnSetPriceChangeAcknowledgeCheckboxText(class FText& CheckboxText)
{
	static auto Func = Class->GetFunction("CrewPriceChangeAcknowledgeModal", "OnSetPriceChangeAcknowledgeCheckboxText");

	Params::UCrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeCheckboxText_Params Parms;

	Parms.CheckboxText = CheckboxText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        CancelSubscriptionButtonText                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCrewPriceChangeAcknowledgeModal::OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText(class FText& CancelSubscriptionButtonText)
{
	static auto Func = Class->GetFunction("CrewPriceChangeAcknowledgeModal", "OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText");

	Params::UCrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText_Params Parms;

	Parms.CancelSubscriptionButtonText = CancelSubscriptionButtonText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeBodyText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        BodyText                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCrewPriceChangeAcknowledgeModal::OnSetPriceChangeAcknowledgeBodyText(class FText& BodyText)
{
	static auto Func = Class->GetFunction("CrewPriceChangeAcknowledgeModal", "OnSetPriceChangeAcknowledgeBodyText");

	Params::UCrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeBodyText_Params Parms;

	Parms.BodyText = BodyText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeBodyTable
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FCrewTableRow>       PriceChangeByRegionRows                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UCrewPriceChangeAcknowledgeModal::OnSetPriceChangeAcknowledgeBodyTable(TArray<struct FCrewTableRow>& PriceChangeByRegionRows)
{
	static auto Func = Class->GetFunction("CrewPriceChangeAcknowledgeModal", "OnSetPriceChangeAcknowledgeBodyTable");

	Params::UCrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeBodyTable_Params Parms;

	Parms.PriceChangeByRegionRows = PriceChangeByRegionRows;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPriceChangeAcknowledgeModal.OnModalBackout
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCrewPriceChangeAcknowledgeModal::OnModalBackout()
{
	static auto Func = Class->GetFunction("CrewPriceChangeAcknowledgeModal", "OnModalBackout");

	Params::UCrewPriceChangeAcknowledgeModal_OnModalBackout_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPriceChangeAcknowledgeModal.ExitModal
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UCrewPriceChangeAcknowledgeModal::ExitModal()
{
	static auto Func = Class->GetFunction("CrewPriceChangeAcknowledgeModal", "ExitModal");

	Params::UCrewPriceChangeAcknowledgeModal_ExitModal_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CrewUI.CrewPurchaseScreen.OnUserInformationTextsUpdated
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        UserInformationText1                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        UserInformationText2                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EMcpSubscriptionState   SubscriptionState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrewPurchaseScreen::OnUserInformationTextsUpdated(class FText& UserInformationText1, class FText& UserInformationText2, enum class EMcpSubscriptionState SubscriptionState)
{
	static auto Func = Class->GetFunction("CrewPurchaseScreen", "OnUserInformationTextsUpdated");

	Params::UCrewPurchaseScreen_OnUserInformationTextsUpdated_Params Parms;

	Parms.UserInformationText1 = UserInformationText1;
	Parms.UserInformationText2 = UserInformationText2;
	Parms.SubscriptionState = SubscriptionState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPurchaseScreen.OnUpdateVBuckRefundVisibility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrewPurchaseScreen::OnUpdateVBuckRefundVisibility(bool bVisible)
{
	static auto Func = Class->GetFunction("CrewPurchaseScreen", "OnUpdateVBuckRefundVisibility");

	Params::UCrewPurchaseScreen_OnUpdateVBuckRefundVisibility_Params Parms;

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPurchaseScreen.OnUpdatePurchaseButtonState
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECrewPurchaseButtonStateButtonState                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrewPurchaseScreen::OnUpdatePurchaseButtonState(enum class ECrewPurchaseButtonState ButtonState)
{
	static auto Func = Class->GetFunction("CrewPurchaseScreen", "OnUpdatePurchaseButtonState");

	Params::UCrewPurchaseScreen_OnUpdatePurchaseButtonState_Params Parms;

	Parms.ButtonState = ButtonState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPurchaseScreen.OnShowNavButtonNotification
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShowNotification                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrewPurchaseScreen::OnShowNavButtonNotification(bool bShowNotification)
{
	static auto Func = Class->GetFunction("CrewPurchaseScreen", "OnShowNavButtonNotification");

	Params::UCrewPurchaseScreen_OnShowNavButtonNotification_Params Parms;

	Parms.bShowNotification = bShowNotification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPurchaseScreen.OnSetNavButtonNotificationText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        NotificationText                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCrewPurchaseScreen::OnSetNavButtonNotificationText(class FText& NotificationText)
{
	static auto Func = Class->GetFunction("CrewPurchaseScreen", "OnSetNavButtonNotificationText");

	Params::UCrewPurchaseScreen_OnSetNavButtonNotificationText_Params Parms;

	Parms.NotificationText = NotificationText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPurchaseScreen.OnContainerTabVisibilityUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bTabsVisible                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SpacingAdjustmentForTabs                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrewPurchaseScreen::OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs)
{
	static auto Func = Class->GetFunction("CrewPurchaseScreen", "OnContainerTabVisibilityUpdated");

	Params::UCrewPurchaseScreen_OnContainerTabVisibilityUpdated_Params Parms;

	Parms.bTabsVisible = bTabsVisible;
	Parms.SpacingAdjustmentForTabs = SpacingAdjustmentForTabs;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPurchaseScreen.EndProgress
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCrewPurchaseScreen::EndProgress()
{
	static auto Func = Class->GetFunction("CrewPurchaseScreen", "EndProgress");

	Params::UCrewPurchaseScreen_EndProgress_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPurchaseScreen.BlockScreenContent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               bBlockScreen                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ContentBlockedText                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCrewPurchaseScreen::BlockScreenContent(bool bBlockScreen, class FText& ContentBlockedText)
{
	static auto Func = Class->GetFunction("CrewPurchaseScreen", "BlockScreenContent");

	Params::UCrewPurchaseScreen_BlockScreenContent_Params Parms;

	Parms.bBlockScreen = bBlockScreen;
	Parms.ContentBlockedText = ContentBlockedText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPurchaseScreen.BeginProgress
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        ProgressLabel                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCrewPurchaseScreen::BeginProgress(class FText& ProgressLabel)
{
	static auto Func = Class->GetFunction("CrewPurchaseScreen", "BeginProgress");

	Params::UCrewPurchaseScreen_BeginProgress_Params Parms;

	Parms.ProgressLabel = ProgressLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewRewardTile.OnUpdateOwnedState
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bOwned                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrewRewardTile::OnUpdateOwnedState(bool bOwned)
{
	static auto Func = Class->GetFunction("CrewRewardTile", "OnUpdateOwnedState");

	Params::UCrewRewardTile_OnUpdateOwnedState_Params Parms;

	Parms.bOwned = bOwned;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewRewardTile.OnStartingDownloadTileImage
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCrewRewardTile::OnStartingDownloadTileImage()
{
	static auto Func = Class->GetFunction("CrewRewardTile", "OnStartingDownloadTileImage");

	Params::UCrewRewardTile_OnStartingDownloadTileImage_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewRewardTile.OnDownloadTileImageComplete
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrewRewardTile::OnDownloadTileImageComplete(class UTexture2D* Texture)
{
	static auto Func = Class->GetFunction("CrewRewardTile", "OnDownloadTileImageComplete");

	Params::UCrewRewardTile_OnDownloadTileImageComplete_Params Parms;

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewRewardTile.IsMonthlyBenefit
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCrewRewardTile::IsMonthlyBenefit()
{
	static auto Func = Class->GetFunction("CrewRewardTile", "IsMonthlyBenefit");

	Params::UCrewRewardTile_IsMonthlyBenefit_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CrewUI.CrewSubscriptionContentContainer.OnTabSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              TabIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrewSubscriptionContentContainer::OnTabSelected(int32 TabIndex)
{
	static auto Func = Class->GetFunction("CrewSubscriptionContentContainer", "OnTabSelected");

	Params::UCrewSubscriptionContentContainer_OnTabSelected_Params Parms;

	Parms.TabIndex = TabIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewTileDetailsTag.OnTagSetup
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECrewDetailsTag         RewardTag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsOwnedTag                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrewTileDetailsTag::OnTagSetup(enum class ECrewDetailsTag RewardTag, bool bIsOwnedTag)
{
	static auto Func = Class->GetFunction("CrewTileDetailsTag", "OnTagSetup");

	Params::UCrewTileDetailsTag_OnTagSetup_Params Parms;

	Parms.RewardTag = RewardTag;
	Parms.bIsOwnedTag = bIsOwnedTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveScreenBase.BP_OnContainerTabVisibilityUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bTabsVisible                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SpacingAdjustmentForTabs                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProgressiveScreenBase::BP_OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs)
{
	static auto Func = Class->GetFunction("FortProgressiveScreenBase", "BP_OnContainerTabVisibilityUpdated");

	Params::UFortProgressiveScreenBase_BP_OnContainerTabVisibilityUpdated_Params Parms;

	Parms.bTabsVisible = bTabsVisible;
	Parms.SpacingAdjustmentForTabs = SpacingAdjustmentForTabs;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveItemScreen.OnUpdateSubscriptionState
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bSubscribed                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProgressiveItemScreen::OnUpdateSubscriptionState(bool bSubscribed)
{
	static auto Func = Class->GetFunction("FortProgressiveItemScreen", "OnUpdateSubscriptionState");

	Params::UFortProgressiveItemScreen_OnUpdateSubscriptionState_Params Parms;

	Parms.bSubscribed = bSubscribed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveItemScreen.OnSetIsSoloScreen
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bInIsSoloScreen                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProgressiveItemScreen::OnSetIsSoloScreen(bool bInIsSoloScreen)
{
	static auto Func = Class->GetFunction("FortProgressiveItemScreen", "OnSetIsSoloScreen");

	Params::UFortProgressiveItemScreen_OnSetIsSoloScreen_Params Parms;

	Parms.bInIsSoloScreen = bInIsSoloScreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveItemScreen.OnItemSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortProgressiveItemScreen::OnItemSelected()
{
	static auto Func = Class->GetFunction("FortProgressiveItemScreen", "OnItemSelected");

	Params::UFortProgressiveItemScreen_OnItemSelected_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveItemScreen.OnErrorStateTextUpdated
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        ErrorStateText                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortProgressiveItemScreen::OnErrorStateTextUpdated(class FText& ErrorStateText)
{
	static auto Func = Class->GetFunction("FortProgressiveItemScreen", "OnErrorStateTextUpdated");

	Params::UFortProgressiveItemScreen_OnErrorStateTextUpdated_Params Parms;

	Parms.ErrorStateText = ErrorStateText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveItemScreen.BlockScreenContent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               bBlockScreen                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ContentBlockedText                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortProgressiveItemScreen::BlockScreenContent(bool bBlockScreen, class FText& ContentBlockedText)
{
	static auto Func = Class->GetFunction("FortProgressiveItemScreen", "BlockScreenContent");

	Params::UFortProgressiveItemScreen_BlockScreenContent_Params Parms;

	Parms.bBlockScreen = bBlockScreen;
	Parms.ContentBlockedText = ContentBlockedText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveItemStateTitleWidget.BP_OnSetHeaderInfo
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Subheading                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bSubscribed                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UnlockedStages                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxStages                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProgressiveItemStateTitleWidget::BP_OnSetHeaderInfo(class FText& Subheading, bool bSubscribed, int32 UnlockedStages, int32 MaxStages)
{
	static auto Func = Class->GetFunction("FortProgressiveItemStateTitleWidget", "BP_OnSetHeaderInfo");

	Params::UFortProgressiveItemStateTitleWidget_BP_OnSetHeaderInfo_Params Parms;

	Parms.Subheading = Subheading;
	Parms.bSubscribed = bSubscribed;
	Parms.UnlockedStages = UnlockedStages;
	Parms.MaxStages = MaxStages;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveItemWidget.OnUnhighlighted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortProgressiveItemWidget::OnUnhighlighted()
{
	static auto Func = Class->GetFunction("FortProgressiveItemWidget", "OnUnhighlighted");

	Params::UFortProgressiveItemWidget_OnUnhighlighted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveItemWidget.OnTileMaterialLoaded
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bSubscribed                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProgressiveItemWidget::OnTileMaterialLoaded(bool bSubscribed)
{
	static auto Func = Class->GetFunction("FortProgressiveItemWidget", "OnTileMaterialLoaded");

	Params::UFortProgressiveItemWidget_OnTileMaterialLoaded_Params Parms;

	Parms.bSubscribed = bSubscribed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveItemWidget.OnStageItemChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FProgressiveStageItemInfo   InStageItemInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortProgressiveItemWidget::OnStageItemChanged(struct FProgressiveStageItemInfo& InStageItemInfo)
{
	static auto Func = Class->GetFunction("FortProgressiveItemWidget", "OnStageItemChanged");

	Params::UFortProgressiveItemWidget_OnStageItemChanged_Params Parms;

	Parms.InStageItemInfo = InStageItemInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveItemWidget.OnPeekStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsInPeekState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProgressiveItemWidget::OnPeekStateChanged(bool bIsInPeekState)
{
	static auto Func = Class->GetFunction("FortProgressiveItemWidget", "OnPeekStateChanged");

	Params::UFortProgressiveItemWidget_OnPeekStateChanged_Params Parms;

	Parms.bIsInPeekState = bIsInPeekState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveItemWidget.OnHighlighted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortProgressiveItemWidget::OnHighlighted()
{
	static auto Func = Class->GetFunction("FortProgressiveItemWidget", "OnHighlighted");

	Params::UFortProgressiveItemWidget_OnHighlighted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveSetDetailsWidget.BP_OnUpdateSetDetails
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        SetName                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ExpiringText                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bCompleted                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProgressiveSetDetailsWidget::BP_OnUpdateSetDetails(class FText& SetName, class FText& ExpiringText, bool bCompleted)
{
	static auto Func = Class->GetFunction("FortProgressiveSetDetailsWidget", "BP_OnUpdateSetDetails");

	Params::UFortProgressiveSetDetailsWidget_BP_OnUpdateSetDetails_Params Parms;

	Parms.SetName = SetName;
	Parms.ExpiringText = ExpiringText;
	Parms.bCompleted = bCompleted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveSetList.ClearSetTiles
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortProgressiveSetList::ClearSetTiles()
{
	static auto Func = Class->GetFunction("FortProgressiveSetList", "ClearSetTiles");

	Params::UFortProgressiveSetList_ClearSetTiles_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveSetList.AddSetTile
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortProgressiveSetTile*     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortProgressiveSetTile* UFortProgressiveSetList::AddSetTile()
{
	static auto Func = Class->GetFunction("FortProgressiveSetList", "AddSetTile");

	Params::UFortProgressiveSetList_AddSetTile_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CrewUI.FortProgressiveSetTile.BP_OnTileMaterialLoaded
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bSubscribed                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProgressiveSetTile::BP_OnTileMaterialLoaded(bool bSubscribed)
{
	static auto Func = Class->GetFunction("FortProgressiveSetTile", "BP_OnTileMaterialLoaded");

	Params::UFortProgressiveSetTile_BP_OnTileMaterialLoaded_Params Parms;

	Parms.bSubscribed = bSubscribed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveSetTile.BP_OnInitializeSetInfo
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FProgressiveSetInfo         InSetInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        BottomText                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        BottomSubtext                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bSubscribed                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProgressiveSetTile::BP_OnInitializeSetInfo(struct FProgressiveSetInfo& InSetInfo, class FText& BottomText, class FText& BottomSubtext, bool bSubscribed)
{
	static auto Func = Class->GetFunction("FortProgressiveSetTile", "BP_OnInitializeSetInfo");

	Params::UFortProgressiveSetTile_BP_OnInitializeSetInfo_Params Parms;

	Parms.InSetInfo = InSetInfo;
	Parms.BottomText = BottomText;
	Parms.BottomSubtext = BottomSubtext;
	Parms.bSubscribed = bSubscribed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveStageList.SelectStageInDirection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Direction                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProgressiveStageList::SelectStageInDirection(int32 Direction)
{
	static auto Func = Class->GetFunction("FortProgressiveStageList", "SelectStageInDirection");

	Params::UFortProgressiveStageList_SelectStageInDirection_Params Parms;

	Parms.Direction = Direction;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CrewUI.FortProgressiveStageList.ClearStageWidgets
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortProgressiveStageList::ClearStageWidgets()
{
	static auto Func = Class->GetFunction("FortProgressiveStageList", "ClearStageWidgets");

	Params::UFortProgressiveStageList_ClearStageWidgets_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveStageList.AddStageWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortProgressiveStageWidget* ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortProgressiveStageWidget* UFortProgressiveStageList::AddStageWidget()
{
	static auto Func = Class->GetFunction("FortProgressiveStageList", "AddStageWidget");

	Params::UFortProgressiveStageList_AddStageWidget_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CrewUI.FortProgressiveStageWidget.OnSetTooltipVisible
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProgressiveStageWidget::OnSetTooltipVisible(bool bVisible)
{
	static auto Func = Class->GetFunction("FortProgressiveStageWidget", "OnSetTooltipVisible");

	Params::UFortProgressiveStageWidget_OnSetTooltipVisible_Params Parms;

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveStageWidget.OnSetTooltipText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        InToolTipText                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortProgressiveStageWidget::OnSetTooltipText(class FText& InToolTipText)
{
	static auto Func = Class->GetFunction("FortProgressiveStageWidget", "OnSetTooltipText");

	Params::UFortProgressiveStageWidget_OnSetTooltipText_Params Parms;

	Parms.InToolTipText = InToolTipText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveStageWidget.OnPeekStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsInPeekState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProgressiveStageWidget::OnPeekStateChanged(bool bIsInPeekState)
{
	static auto Func = Class->GetFunction("FortProgressiveStageWidget", "OnPeekStateChanged");

	Params::UFortProgressiveStageWidget_OnPeekStateChanged_Params Parms;

	Parms.bIsInPeekState = bIsInPeekState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveStageWidget.ClearStageItemWidgets
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortProgressiveStageWidget::ClearStageItemWidgets()
{
	static auto Func = Class->GetFunction("FortProgressiveStageWidget", "ClearStageItemWidgets");

	Params::UFortProgressiveStageWidget_ClearStageItemWidgets_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveStageWidget.AddStageItemWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortProgressiveItemWidget*  ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortProgressiveItemWidget* UFortProgressiveStageWidget::AddStageItemWidget()
{
	static auto Func = Class->GetFunction("FortProgressiveStageWidget", "AddStageItemWidget");

	Params::UFortProgressiveStageWidget_AddStageItemWidget_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateSubscriptionState
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bSubscribed                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProgressiveTableOfContentsScreen::BP_OnUpdateSubscriptionState(bool bSubscribed)
{
	static auto Func = Class->GetFunction("FortProgressiveTableOfContentsScreen", "BP_OnUpdateSubscriptionState");

	Params::UFortProgressiveTableOfContentsScreen_BP_OnUpdateSubscriptionState_Params Parms;

	Parms.bSubscribed = bSubscribed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateNumTilesAvailable
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NumTiles                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProgressiveTableOfContentsScreen::BP_OnUpdateNumTilesAvailable(int32 NumTiles)
{
	static auto Func = Class->GetFunction("FortProgressiveTableOfContentsScreen", "BP_OnUpdateNumTilesAvailable");

	Params::UFortProgressiveTableOfContentsScreen_BP_OnUpdateNumTilesAvailable_Params Parms;

	Parms.NumTiles = NumTiles;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateErrorStateText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        ErrorStateText                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortProgressiveTableOfContentsScreen::BP_OnUpdateErrorStateText(class FText& ErrorStateText)
{
	static auto Func = Class->GetFunction("FortProgressiveTableOfContentsScreen", "BP_OnUpdateErrorStateText");

	Params::UFortProgressiveTableOfContentsScreen_BP_OnUpdateErrorStateText_Params Parms;

	Parms.ErrorStateText = ErrorStateText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateBanner
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        BannerText                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bAllSetsCompleted                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSubscribed                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProgressiveTableOfContentsScreen::BP_OnUpdateBanner(class FText& BannerText, bool bAllSetsCompleted, bool bSubscribed)
{
	static auto Func = Class->GetFunction("FortProgressiveTableOfContentsScreen", "BP_OnUpdateBanner");

	Params::UFortProgressiveTableOfContentsScreen_BP_OnUpdateBanner_Params Parms;

	Parms.BannerText = BannerText;
	Parms.bAllSetsCompleted = bAllSetsCompleted;
	Parms.bSubscribed = bSubscribed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveTableOfContentsScreen.BP_OnSetDescriptionText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        ProductDescription                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortProgressiveTableOfContentsScreen::BP_OnSetDescriptionText(class FText& ProductDescription)
{
	static auto Func = Class->GetFunction("FortProgressiveTableOfContentsScreen", "BP_OnSetDescriptionText");

	Params::UFortProgressiveTableOfContentsScreen_BP_OnSetDescriptionText_Params Parms;

	Parms.ProductDescription = ProductDescription;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveTableOfContentsScreen.BlockScreenContent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               bBlockScreen                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ContentBlockedText                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortProgressiveTableOfContentsScreen::BlockScreenContent(bool bBlockScreen, class FText& ContentBlockedText)
{
	static auto Func = Class->GetFunction("FortProgressiveTableOfContentsScreen", "BlockScreenContent");

	Params::UFortProgressiveTableOfContentsScreen_BlockScreenContent_Params Parms;

	Parms.bBlockScreen = bBlockScreen;
	Parms.ContentBlockedText = ContentBlockedText;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
