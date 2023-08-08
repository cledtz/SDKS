#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function GiftingUI.AthenaGiftingConfirmationScreen.OnPresentationModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EGiftingPresentationModeNewMode                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaGiftingConfirmationScreen::OnPresentationModeChanged(enum class EGiftingPresentationMode NewMode)
{
	static auto Func = Class->GetFunction("AthenaGiftingConfirmationScreen", "OnPresentationModeChanged");

	Params::UAthenaGiftingConfirmationScreen_OnPresentationModeChanged_Params Parms;

	Parms.NewMode = NewMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingUI.AthenaGiftingConfirmationScreen.HandleTokenOfferPurchaseComplete
// (Final, Native, Private, HasOutParams)
// Parameters:
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPurchasedItemInfo>  PurchasedItems                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UAthenaGiftingConfirmationScreen::HandleTokenOfferPurchaseComplete(bool bSuccess, TArray<struct FPurchasedItemInfo>& PurchasedItems)
{
	static auto Func = Class->GetFunction("AthenaGiftingConfirmationScreen", "HandleTokenOfferPurchaseComplete");

	Params::UAthenaGiftingConfirmationScreen_HandleTokenOfferPurchaseComplete_Params Parms;

	Parms.bSuccess = bSuccess;
	Parms.PurchasedItems = PurchasedItems;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GiftingUI.AthenaGiftingConfirmationScreen.HandleGiftSent
// (Final, Native, Private, HasOutParams)
// Parameters:
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              IneligibleAccounts                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              ErrorCodes                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UAthenaGiftingConfirmationScreen::HandleGiftSent(bool bSuccess, TArray<class FString>& IneligibleAccounts, TArray<class FString>& ErrorCodes)
{
	static auto Func = Class->GetFunction("AthenaGiftingConfirmationScreen", "HandleGiftSent");

	Params::UAthenaGiftingConfirmationScreen_HandleGiftSent_Params Parms;

	Parms.bSuccess = bSuccess;
	Parms.IneligibleAccounts = IneligibleAccounts;
	Parms.ErrorCodes = ErrorCodes;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GiftingUI.AthenaGiftingConfirmationScreen.Dismiss
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// bool                               bGiftConfirmed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaGiftingConfirmationScreen::Dismiss(bool bGiftConfirmed)
{
	static auto Func = Class->GetFunction("AthenaGiftingConfirmationScreen", "Dismiss");

	Params::UAthenaGiftingConfirmationScreen_Dismiss_Params Parms;

	Parms.bGiftConfirmed = bGiftConfirmed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GiftingUI.AthenaGiftingErrorsPanel.UpdateGiftEligibility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bStillGiftable                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaGiftingErrorsPanel::UpdateGiftEligibility(bool bStillGiftable)
{
	static auto Func = Class->GetFunction("AthenaGiftingErrorsPanel", "UpdateGiftEligibility");

	Params::UAthenaGiftingErrorsPanel_UpdateGiftEligibility_Params Parms;

	Parms.bStillGiftable = bStillGiftable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingUI.AthenaGiftingPriceWidget.SetPresentationMode
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EGiftingPricePresentationModeMode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaGiftingPriceWidget::SetPresentationMode(enum class EGiftingPricePresentationMode Mode)
{
	static auto Func = Class->GetFunction("AthenaGiftingPriceWidget", "SetPresentationMode");

	Params::UAthenaGiftingPriceWidget_SetPresentationMode_Params Parms;

	Parms.Mode = Mode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingUI.AthenaGiftingPurchasePanel.PlayIntroAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaGiftingPurchasePanel::PlayIntroAnimation()
{
	static auto Func = Class->GetFunction("AthenaGiftingPurchasePanel", "PlayIntroAnimation");

	Params::UAthenaGiftingPurchasePanel_PlayIntroAnimation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingUI.AthenaGiftingScreen.OnShowSearchWarningText
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShow                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaGiftingScreen::OnShowSearchWarningText(bool bShow)
{
	static auto Func = Class->GetFunction("AthenaGiftingScreen", "OnShowSearchWarningText");

	Params::UAthenaGiftingScreen_OnShowSearchWarningText_Params Parms;

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingUI.AthenaGiftingScreen.OnShownItemChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaGiftingScreen::OnShownItemChanged()
{
	static auto Func = Class->GetFunction("AthenaGiftingScreen", "OnShownItemChanged");

	Params::UAthenaGiftingScreen_OnShownItemChanged_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingUI.AthenaGiftingScreen.OnSetupFilterTabButton
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFilterType             FilterType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaGiftingScreen::OnSetupFilterTabButton(class UCommonButtonBase* Button, enum class EFilterType FilterType)
{
	static auto Func = Class->GetFunction("AthenaGiftingScreen", "OnSetupFilterTabButton");

	Params::UAthenaGiftingScreen_OnSetupFilterTabButton_Params Parms;

	Parms.Button = Button;
	Parms.FilterType = FilterType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingUI.AthenaGiftingScreen.OnPresentationModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EGiftingScreenPresentationModeMode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaGiftingScreen::OnPresentationModeChanged(enum class EGiftingScreenPresentationMode Mode)
{
	static auto Func = Class->GetFunction("AthenaGiftingScreen", "OnPresentationModeChanged");

	Params::UAthenaGiftingScreen_OnPresentationModeChanged_Params Parms;

	Parms.Mode = Mode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingUI.AthenaGiftingScreen.OnPartyListUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bEmpty                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaGiftingScreen::OnPartyListUpdated(bool bEmpty)
{
	static auto Func = Class->GetFunction("AthenaGiftingScreen", "OnPartyListUpdated");

	Params::UAthenaGiftingScreen_OnPartyListUpdated_Params Parms;

	Parms.bEmpty = bEmpty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingUI.AthenaGiftingScreen.OnFriendSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaGiftingScreen::OnFriendSelectionChanged()
{
	static auto Func = Class->GetFunction("AthenaGiftingScreen", "OnFriendSelectionChanged");

	Params::UAthenaGiftingScreen_OnFriendSelectionChanged_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingUI.AthenaGiftingScreen.OnFilterChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFilterType             FilterType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaGiftingScreen::OnFilterChanged(enum class EFilterType FilterType)
{
	static auto Func = Class->GetFunction("AthenaGiftingScreen", "OnFilterChanged");

	Params::UAthenaGiftingScreen_OnFilterChanged_Params Parms;

	Parms.FilterType = FilterType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingUI.AthenaGiftingScreen.BlockScreenContent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               bBlockScreen                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ContentBlockedText                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAthenaGiftingScreen::BlockScreenContent(bool bBlockScreen, class FText& ContentBlockedText)
{
	static auto Func = Class->GetFunction("AthenaGiftingScreen", "BlockScreenContent");

	Params::UAthenaGiftingScreen_BlockScreenContent_Params Parms;

	Parms.bBlockScreen = bBlockScreen;
	Parms.ContentBlockedText = ContentBlockedText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingUI.FortGiftingSocialUserListEntry.SetPresentationMode
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ERecipientPresentationModeMode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGiftingSocialUserListEntry::SetPresentationMode(enum class ERecipientPresentationMode Mode)
{
	static auto Func = Class->GetFunction("FortGiftingSocialUserListEntry", "SetPresentationMode");

	Params::UFortGiftingSocialUserListEntry_SetPresentationMode_Params Parms;

	Parms.Mode = Mode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingUI.FortGiftingSocialUserListEntry.OnUserItemSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortGiftingSocialUserListEntry::OnUserItemSet()
{
	static auto Func = Class->GetFunction("FortGiftingSocialUserListEntry", "OnUserItemSet");

	Params::UFortGiftingSocialUserListEntry_OnUserItemSet_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingUI.FortGiftingSocialUserListEntry.OnRecipientStatusUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortGiftingSocialUserListEntry::OnRecipientStatusUpdated()
{
	static auto Func = Class->GetFunction("FortGiftingSocialUserListEntry", "OnRecipientStatusUpdated");

	Params::UFortGiftingSocialUserListEntry_OnRecipientStatusUpdated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingUI.FortGiftingSocialUserListEntry.BP_OnTouchSelectionConfirmed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortGiftingSocialUserListEntry::BP_OnTouchSelectionConfirmed()
{
	static auto Func = Class->GetFunction("FortGiftingSocialUserListEntry", "BP_OnTouchSelectionConfirmed");

	Params::UFortGiftingSocialUserListEntry_BP_OnTouchSelectionConfirmed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingUI.FortGiftingSocialUserListEntry.BP_OnHighlightedStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bInIsHighlighted                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPlayAnimation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGiftingSocialUserListEntry::BP_OnHighlightedStateChanged(bool bInIsHighlighted, bool bPlayAnimation)
{
	static auto Func = Class->GetFunction("FortGiftingSocialUserListEntry", "BP_OnHighlightedStateChanged");

	Params::UFortGiftingSocialUserListEntry_BP_OnHighlightedStateChanged_Params Parms;

	Parms.bInIsHighlighted = bInIsHighlighted;
	Parms.bPlayAnimation = bPlayAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingUI.FortGiftingUserSearchWidget.OnSearchCommit
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bSearchStringShort                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGiftingUserSearchWidget::OnSearchCommit(bool bSearchStringShort)
{
	static auto Func = Class->GetFunction("FortGiftingUserSearchWidget", "OnSearchCommit");

	Params::UFortGiftingUserSearchWidget_OnSearchCommit_Params Parms;

	Parms.bSearchStringShort = bSearchStringShort;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingUI.FortGiftingUserSearchWidget.HandleSearchFriendsTextEntered
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ETextCommit             CommitMethod                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGiftingUserSearchWidget::HandleSearchFriendsTextEntered(class FText& Text, enum class ETextCommit CommitMethod)
{
	static auto Func = Class->GetFunction("FortGiftingUserSearchWidget", "HandleSearchFriendsTextEntered");

	Params::UFortGiftingUserSearchWidget_HandleSearchFriendsTextEntered_Params Parms;

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GiftingUI.FortGiftingUserSearchWidget.HandleSearchFriendsTextChanged
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortGiftingUserSearchWidget::HandleSearchFriendsTextChanged(class FText& Text)
{
	static auto Func = Class->GetFunction("FortGiftingUserSearchWidget", "HandleSearchFriendsTextChanged");

	Params::UFortGiftingUserSearchWidget_HandleSearchFriendsTextChanged_Params Parms;

	Parms.Text = Text;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GiftingUI.FortGiftingUserSearchWidget.FocusEditableText
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortGiftingUserSearchWidget::FocusEditableText()
{
	static auto Func = Class->GetFunction("FortGiftingUserSearchWidget", "FocusEditableText");

	Params::UFortGiftingUserSearchWidget_FocusEditableText_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
