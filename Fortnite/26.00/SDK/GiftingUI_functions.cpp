#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GiftingUI.AthenaGiftConfirmedPanel
// (None)

class UClass* UAthenaGiftConfirmedPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaGiftConfirmedPanel");

	return Clss;
}


// AthenaGiftConfirmedPanel GiftingUI.Default__AthenaGiftConfirmedPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaGiftConfirmedPanel* UAthenaGiftConfirmedPanel::GetDefaultObj()
{
	static class UAthenaGiftConfirmedPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaGiftConfirmedPanel*>(UAthenaGiftConfirmedPanel::StaticClass()->DefaultObject);

	return Default;
}


// Class GiftingUI.AthenaGiftingConfirmationScreen
// (None)

class UClass* UAthenaGiftingConfirmationScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaGiftingConfirmationScreen");

	return Clss;
}


// AthenaGiftingConfirmationScreen GiftingUI.Default__AthenaGiftingConfirmationScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaGiftingConfirmationScreen* UAthenaGiftingConfirmationScreen::GetDefaultObj()
{
	static class UAthenaGiftingConfirmationScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaGiftingConfirmationScreen*>(UAthenaGiftingConfirmationScreen::StaticClass()->DefaultObject);

	return Default;
}


// Function GiftingUI.AthenaGiftingConfirmationScreen.OnPresentationModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EGiftingPresentationModeNewMode                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaGiftingConfirmationScreen::OnPresentationModeChanged(enum class EGiftingPresentationMode NewMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaGiftingConfirmationScreen", "OnPresentationModeChanged");

	Params::UAthenaGiftingConfirmationScreen_OnPresentationModeChanged_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaGiftingConfirmationScreen", "HandleTokenOfferPurchaseComplete");

	Params::UAthenaGiftingConfirmationScreen_HandleTokenOfferPurchaseComplete_Params Parms{};

	Parms.bSuccess = bSuccess;
	Parms.PurchasedItems = PurchasedItems;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GiftingUI.AthenaGiftingConfirmationScreen.HandleGiftSent
// (Final, Native, Private, HasOutParams)
// Parameters:
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              IneligibleAccounts                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              ErrorCodes                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UAthenaGiftingConfirmationScreen::HandleGiftSent(bool bSuccess, TArray<class FString>& IneligibleAccounts, TArray<class FString>& ErrorCodes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaGiftingConfirmationScreen", "HandleGiftSent");

	Params::UAthenaGiftingConfirmationScreen_HandleGiftSent_Params Parms{};

	Parms.bSuccess = bSuccess;
	Parms.IneligibleAccounts = IneligibleAccounts;
	Parms.ErrorCodes = ErrorCodes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GiftingUI.AthenaGiftingConfirmationScreen.Dismiss
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// bool                               bGiftConfirmed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaGiftingConfirmationScreen::Dismiss(bool bGiftConfirmed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaGiftingConfirmationScreen", "Dismiss");

	Params::UAthenaGiftingConfirmationScreen_Dismiss_Params Parms{};

	Parms.bGiftConfirmed = bGiftConfirmed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GiftingUI.AthenaGiftingErrorsPanel
// (None)

class UClass* UAthenaGiftingErrorsPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaGiftingErrorsPanel");

	return Clss;
}


// AthenaGiftingErrorsPanel GiftingUI.Default__AthenaGiftingErrorsPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaGiftingErrorsPanel* UAthenaGiftingErrorsPanel::GetDefaultObj()
{
	static class UAthenaGiftingErrorsPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaGiftingErrorsPanel*>(UAthenaGiftingErrorsPanel::StaticClass()->DefaultObject);

	return Default;
}


// Function GiftingUI.AthenaGiftingErrorsPanel.UpdateGiftEligibility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bStillGiftable                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaGiftingErrorsPanel::UpdateGiftEligibility(bool bStillGiftable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaGiftingErrorsPanel", "UpdateGiftEligibility");

	Params::UAthenaGiftingErrorsPanel_UpdateGiftEligibility_Params Parms{};

	Parms.bStillGiftable = bStillGiftable;

	UObject::ProcessEvent(Func, &Parms);

}


// Class GiftingUI.AthenaGiftingPriceWidget
// (None)

class UClass* UAthenaGiftingPriceWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaGiftingPriceWidget");

	return Clss;
}


// AthenaGiftingPriceWidget GiftingUI.Default__AthenaGiftingPriceWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaGiftingPriceWidget* UAthenaGiftingPriceWidget::GetDefaultObj()
{
	static class UAthenaGiftingPriceWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaGiftingPriceWidget*>(UAthenaGiftingPriceWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function GiftingUI.AthenaGiftingPriceWidget.SetPresentationMode
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EGiftingPricePresentationModeMode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaGiftingPriceWidget::SetPresentationMode(enum class EGiftingPricePresentationMode Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaGiftingPriceWidget", "SetPresentationMode");

	Params::UAthenaGiftingPriceWidget_SetPresentationMode_Params Parms{};

	Parms.Mode = Mode;

	UObject::ProcessEvent(Func, &Parms);

}


// Class GiftingUI.AthenaGiftingPurchaseButton
// (None)

class UClass* UAthenaGiftingPurchaseButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaGiftingPurchaseButton");

	return Clss;
}


// AthenaGiftingPurchaseButton GiftingUI.Default__AthenaGiftingPurchaseButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaGiftingPurchaseButton* UAthenaGiftingPurchaseButton::GetDefaultObj()
{
	static class UAthenaGiftingPurchaseButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaGiftingPurchaseButton*>(UAthenaGiftingPurchaseButton::StaticClass()->DefaultObject);

	return Default;
}


// Class GiftingUI.AthenaGiftingPurchasePanel
// (None)

class UClass* UAthenaGiftingPurchasePanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaGiftingPurchasePanel");

	return Clss;
}


// AthenaGiftingPurchasePanel GiftingUI.Default__AthenaGiftingPurchasePanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaGiftingPurchasePanel* UAthenaGiftingPurchasePanel::GetDefaultObj()
{
	static class UAthenaGiftingPurchasePanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaGiftingPurchasePanel*>(UAthenaGiftingPurchasePanel::StaticClass()->DefaultObject);

	return Default;
}


// Function GiftingUI.AthenaGiftingPurchasePanel.PlayIntroAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaGiftingPurchasePanel::PlayIntroAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaGiftingPurchasePanel", "PlayIntroAnimation");

	Params::UAthenaGiftingPurchasePanel_PlayIntroAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class GiftingUI.AthenaGiftingScreen
// (None)

class UClass* UAthenaGiftingScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaGiftingScreen");

	return Clss;
}


// AthenaGiftingScreen GiftingUI.Default__AthenaGiftingScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaGiftingScreen* UAthenaGiftingScreen::GetDefaultObj()
{
	static class UAthenaGiftingScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaGiftingScreen*>(UAthenaGiftingScreen::StaticClass()->DefaultObject);

	return Default;
}


// Function GiftingUI.AthenaGiftingScreen.OnShowSearchWarningText
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShow                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaGiftingScreen::OnShowSearchWarningText(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaGiftingScreen", "OnShowSearchWarningText");

	Params::UAthenaGiftingScreen_OnShowSearchWarningText_Params Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingUI.AthenaGiftingScreen.OnShownItemChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaGiftingScreen::OnShownItemChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaGiftingScreen", "OnShownItemChanged");

	Params::UAthenaGiftingScreen_OnShownItemChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingUI.AthenaGiftingScreen.OnSetupFilterTabButton
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFilterType             FilterType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaGiftingScreen::OnSetupFilterTabButton(class UCommonButtonBase* Button, enum class EFilterType FilterType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaGiftingScreen", "OnSetupFilterTabButton");

	Params::UAthenaGiftingScreen_OnSetupFilterTabButton_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaGiftingScreen", "OnPresentationModeChanged");

	Params::UAthenaGiftingScreen_OnPresentationModeChanged_Params Parms{};

	Parms.Mode = Mode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingUI.AthenaGiftingScreen.OnPartyListUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bEmpty                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaGiftingScreen::OnPartyListUpdated(bool bEmpty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaGiftingScreen", "OnPartyListUpdated");

	Params::UAthenaGiftingScreen_OnPartyListUpdated_Params Parms{};

	Parms.bEmpty = bEmpty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingUI.AthenaGiftingScreen.OnFriendSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaGiftingScreen::OnFriendSelectionChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaGiftingScreen", "OnFriendSelectionChanged");

	Params::UAthenaGiftingScreen_OnFriendSelectionChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingUI.AthenaGiftingScreen.OnFilterChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFilterType             FilterType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaGiftingScreen::OnFilterChanged(enum class EFilterType FilterType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaGiftingScreen", "OnFilterChanged");

	Params::UAthenaGiftingScreen_OnFilterChanged_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaGiftingScreen", "BlockScreenContent");

	Params::UAthenaGiftingScreen_BlockScreenContent_Params Parms{};

	Parms.bBlockScreen = bBlockScreen;
	Parms.ContentBlockedText = ContentBlockedText;

	UObject::ProcessEvent(Func, &Parms);

}


// Class GiftingUI.AthenaGiftingWrapOptionsPanel
// (None)

class UClass* UAthenaGiftingWrapOptionsPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaGiftingWrapOptionsPanel");

	return Clss;
}


// AthenaGiftingWrapOptionsPanel GiftingUI.Default__AthenaGiftingWrapOptionsPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaGiftingWrapOptionsPanel* UAthenaGiftingWrapOptionsPanel::GetDefaultObj()
{
	static class UAthenaGiftingWrapOptionsPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaGiftingWrapOptionsPanel*>(UAthenaGiftingWrapOptionsPanel::StaticClass()->DefaultObject);

	return Default;
}


// Class GiftingUI.FortGiftingSocialUserListEntry
// (None)

class UClass* UFortGiftingSocialUserListEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGiftingSocialUserListEntry");

	return Clss;
}


// FortGiftingSocialUserListEntry GiftingUI.Default__FortGiftingSocialUserListEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGiftingSocialUserListEntry* UFortGiftingSocialUserListEntry::GetDefaultObj()
{
	static class UFortGiftingSocialUserListEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGiftingSocialUserListEntry*>(UFortGiftingSocialUserListEntry::StaticClass()->DefaultObject);

	return Default;
}


// Function GiftingUI.FortGiftingSocialUserListEntry.SetPresentationMode
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ERecipientPresentationModeMode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGiftingSocialUserListEntry::SetPresentationMode(enum class ERecipientPresentationMode Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGiftingSocialUserListEntry", "SetPresentationMode");

	Params::UFortGiftingSocialUserListEntry_SetPresentationMode_Params Parms{};

	Parms.Mode = Mode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingUI.FortGiftingSocialUserListEntry.OnUserItemSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortGiftingSocialUserListEntry::OnUserItemSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGiftingSocialUserListEntry", "OnUserItemSet");

	Params::UFortGiftingSocialUserListEntry_OnUserItemSet_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingUI.FortGiftingSocialUserListEntry.OnRecipientStatusUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortGiftingSocialUserListEntry::OnRecipientStatusUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGiftingSocialUserListEntry", "OnRecipientStatusUpdated");

	Params::UFortGiftingSocialUserListEntry_OnRecipientStatusUpdated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingUI.FortGiftingSocialUserListEntry.BP_OnTouchSelectionConfirmed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortGiftingSocialUserListEntry::BP_OnTouchSelectionConfirmed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGiftingSocialUserListEntry", "BP_OnTouchSelectionConfirmed");

	Params::UFortGiftingSocialUserListEntry_BP_OnTouchSelectionConfirmed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingUI.FortGiftingSocialUserListEntry.BP_OnHighlightedStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bInIsHighlighted                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPlayAnimation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGiftingSocialUserListEntry::BP_OnHighlightedStateChanged(bool bInIsHighlighted, bool bPlayAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGiftingSocialUserListEntry", "BP_OnHighlightedStateChanged");

	Params::UFortGiftingSocialUserListEntry_BP_OnHighlightedStateChanged_Params Parms{};

	Parms.bInIsHighlighted = bInIsHighlighted;
	Parms.bPlayAnimation = bPlayAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Class GiftingUI.FortGiftingSocialUserListView
// (None)

class UClass* UFortGiftingSocialUserListView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGiftingSocialUserListView");

	return Clss;
}


// FortGiftingSocialUserListView GiftingUI.Default__FortGiftingSocialUserListView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGiftingSocialUserListView* UFortGiftingSocialUserListView::GetDefaultObj()
{
	static class UFortGiftingSocialUserListView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGiftingSocialUserListView*>(UFortGiftingSocialUserListView::StaticClass()->DefaultObject);

	return Default;
}


// Class GiftingUI.FortGiftingUserSearchWidget
// (None)

class UClass* UFortGiftingUserSearchWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGiftingUserSearchWidget");

	return Clss;
}


// FortGiftingUserSearchWidget GiftingUI.Default__FortGiftingUserSearchWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGiftingUserSearchWidget* UFortGiftingUserSearchWidget::GetDefaultObj()
{
	static class UFortGiftingUserSearchWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGiftingUserSearchWidget*>(UFortGiftingUserSearchWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function GiftingUI.FortGiftingUserSearchWidget.OnSearchCommit
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bSearchStringShort                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGiftingUserSearchWidget::OnSearchCommit(bool bSearchStringShort)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGiftingUserSearchWidget", "OnSearchCommit");

	Params::UFortGiftingUserSearchWidget_OnSearchCommit_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGiftingUserSearchWidget", "HandleSearchFriendsTextEntered");

	Params::UFortGiftingUserSearchWidget_HandleSearchFriendsTextEntered_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GiftingUI.FortGiftingUserSearchWidget.HandleSearchFriendsTextChanged
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortGiftingUserSearchWidget::HandleSearchFriendsTextChanged(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGiftingUserSearchWidget", "HandleSearchFriendsTextChanged");

	Params::UFortGiftingUserSearchWidget_HandleSearchFriendsTextChanged_Params Parms{};

	Parms.Text = Text;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GiftingUI.FortGiftingUserSearchWidget.FocusEditableText
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortGiftingUserSearchWidget::FocusEditableText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGiftingUserSearchWidget", "FocusEditableText");

	Params::UFortGiftingUserSearchWidget_FocusEditableText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GiftingUI.FortGiftingWrapOptionListEntry
// (None)

class UClass* UFortGiftingWrapOptionListEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGiftingWrapOptionListEntry");

	return Clss;
}


// FortGiftingWrapOptionListEntry GiftingUI.Default__FortGiftingWrapOptionListEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGiftingWrapOptionListEntry* UFortGiftingWrapOptionListEntry::GetDefaultObj()
{
	static class UFortGiftingWrapOptionListEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGiftingWrapOptionListEntry*>(UFortGiftingWrapOptionListEntry::StaticClass()->DefaultObject);

	return Default;
}


// Class GiftingUI.FortGiftingData
// (None)

class UClass* UFortGiftingData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGiftingData");

	return Clss;
}


// FortGiftingData GiftingUI.Default__FortGiftingData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGiftingData* UFortGiftingData::GetDefaultObj()
{
	static class UFortGiftingData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGiftingData*>(UFortGiftingData::StaticClass()->DefaultObject);

	return Default;
}

}


