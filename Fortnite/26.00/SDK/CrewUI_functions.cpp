#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CrewUI.BattlePassCrewContentInterface
// (None)

class UClass* UBattlePassCrewContentInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassCrewContentInterface");

	return Clss;
}


// BattlePassCrewContentInterface CrewUI.Default__BattlePassCrewContentInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UBattlePassCrewContentInterface* UBattlePassCrewContentInterface::GetDefaultObj()
{
	static class UBattlePassCrewContentInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassCrewContentInterface*>(UBattlePassCrewContentInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class CrewUI.FortProgressiveContentInterface
// (None)

class UClass* UFortProgressiveContentInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortProgressiveContentInterface");

	return Clss;
}


// FortProgressiveContentInterface CrewUI.Default__FortProgressiveContentInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortProgressiveContentInterface* UFortProgressiveContentInterface::GetDefaultObj()
{
	static class UFortProgressiveContentInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortProgressiveContentInterface*>(UFortProgressiveContentInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class CrewUI.BattlePassCrewPurchaseButton
// (None)

class UClass* UBattlePassCrewPurchaseButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassCrewPurchaseButton");

	return Clss;
}


// BattlePassCrewPurchaseButton CrewUI.Default__BattlePassCrewPurchaseButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UBattlePassCrewPurchaseButton* UBattlePassCrewPurchaseButton::GetDefaultObj()
{
	static class UBattlePassCrewPurchaseButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassCrewPurchaseButton*>(UBattlePassCrewPurchaseButton::StaticClass()->DefaultObject);

	return Default;
}


// Function CrewUI.BattlePassCrewPurchaseButton.OnCurrencyUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassCrewPurchaseButton::OnCurrencyUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassCrewPurchaseButton", "OnCurrencyUpdated");

	Params::UBattlePassCrewPurchaseButton_OnCurrencyUpdated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class CrewUI.BattlePassCrewPurchaseContainer
// (None)

class UClass* UBattlePassCrewPurchaseContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassCrewPurchaseContainer");

	return Clss;
}


// BattlePassCrewPurchaseContainer CrewUI.Default__BattlePassCrewPurchaseContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UBattlePassCrewPurchaseContainer* UBattlePassCrewPurchaseContainer::GetDefaultObj()
{
	static class UBattlePassCrewPurchaseContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassCrewPurchaseContainer*>(UBattlePassCrewPurchaseContainer::StaticClass()->DefaultObject);

	return Default;
}


// Function CrewUI.BattlePassCrewPurchaseContainer.OnTriggerIntroAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCanClaimRewards                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassCrewPurchaseContainer::OnTriggerIntroAnimation(bool bCanClaimRewards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassCrewPurchaseContainer", "OnTriggerIntroAnimation");

	Params::UBattlePassCrewPurchaseContainer_OnTriggerIntroAnimation_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassCrewPurchaseContainer", "OnContentStateUpdated");

	Params::UBattlePassCrewPurchaseContainer_OnContentStateUpdated_Params Parms{};

	Parms.InState = InState;
	Parms.bInScreenOpened = bInScreenOpened;

	UObject::ProcessEvent(Func, &Parms);

}


// Class CrewUI.BattlePassSeasonHeading
// (None)

class UClass* UBattlePassSeasonHeading::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassSeasonHeading");

	return Clss;
}


// BattlePassSeasonHeading CrewUI.Default__BattlePassSeasonHeading
// (Public, ClassDefaultObject, ArchetypeObject)

class UBattlePassSeasonHeading* UBattlePassSeasonHeading::GetDefaultObj()
{
	static class UBattlePassSeasonHeading* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassSeasonHeading*>(UBattlePassSeasonHeading::StaticClass()->DefaultObject);

	return Default;
}


// Class CrewUI.BattlePassPurchaseScreen
// (None)

class UClass* UBattlePassPurchaseScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassPurchaseScreen");

	return Clss;
}


// BattlePassPurchaseScreen CrewUI.Default__BattlePassPurchaseScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UBattlePassPurchaseScreen* UBattlePassPurchaseScreen::GetDefaultObj()
{
	static class UBattlePassPurchaseScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassPurchaseScreen*>(UBattlePassPurchaseScreen::StaticClass()->DefaultObject);

	return Default;
}


// Function CrewUI.BattlePassPurchaseScreen.RefreshFocus
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UBattlePassPurchaseScreen::RefreshFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPurchaseScreen", "RefreshFocus");

	Params::UBattlePassPurchaseScreen_RefreshFocus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrewUI.BattlePassPurchaseScreen.OnShowNavButtonNotification
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShowNotification                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassPurchaseScreen::OnShowNavButtonNotification(bool bShowNotification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPurchaseScreen", "OnShowNavButtonNotification");

	Params::UBattlePassPurchaseScreen_OnShowNavButtonNotification_Params Parms{};

	Parms.bShowNotification = bShowNotification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.BattlePassPurchaseScreen.OnSetScreenInteractable
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bInteractable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassPurchaseScreen::OnSetScreenInteractable(bool bInteractable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPurchaseScreen", "OnSetScreenInteractable");

	Params::UBattlePassPurchaseScreen_OnSetScreenInteractable_Params Parms{};

	Parms.bInteractable = bInteractable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.BattlePassPurchaseScreen.OnSetNavButtonNotificationText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        NotificationText                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UBattlePassPurchaseScreen::OnSetNavButtonNotificationText(class FText& NotificationText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPurchaseScreen", "OnSetNavButtonNotificationText");

	Params::UBattlePassPurchaseScreen_OnSetNavButtonNotificationText_Params Parms{};

	Parms.NotificationText = NotificationText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.BattlePassPurchaseScreen.OnPurchaseStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EBattlePassPurchaseStateInCurrentState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassPurchaseScreen::OnPurchaseStateChanged(enum class EBattlePassPurchaseState InCurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPurchaseScreen", "OnPurchaseStateChanged");

	Params::UBattlePassPurchaseScreen_OnPurchaseStateChanged_Params Parms{};

	Parms.InCurrentState = InCurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.BattlePassPurchaseScreen.OnPurchaseConfirmed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassPurchaseScreen::OnPurchaseConfirmed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPurchaseScreen", "OnPurchaseConfirmed");

	Params::UBattlePassPurchaseScreen_OnPurchaseConfirmed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class CrewUI.CrewMultiSubscriptionAlertModal
// (None)

class UClass* UCrewMultiSubscriptionAlertModal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrewMultiSubscriptionAlertModal");

	return Clss;
}


// CrewMultiSubscriptionAlertModal CrewUI.Default__CrewMultiSubscriptionAlertModal
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrewMultiSubscriptionAlertModal* UCrewMultiSubscriptionAlertModal::GetDefaultObj()
{
	static class UCrewMultiSubscriptionAlertModal* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrewMultiSubscriptionAlertModal*>(UCrewMultiSubscriptionAlertModal::StaticClass()->DefaultObject);

	return Default;
}


// Function CrewUI.CrewMultiSubscriptionAlertModal.OnSetHowToCancelURL
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString                      MoreInfoUrl                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrewMultiSubscriptionAlertModal::OnSetHowToCancelURL(const class FString& MoreInfoUrl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewMultiSubscriptionAlertModal", "OnSetHowToCancelURL");

	Params::UCrewMultiSubscriptionAlertModal_OnSetHowToCancelURL_Params Parms{};

	Parms.MoreInfoUrl = MoreInfoUrl;

	UObject::ProcessEvent(Func, &Parms);

}


// Class CrewUI.CrewPriceChangeAcknowledgeModal
// (None)

class UClass* UCrewPriceChangeAcknowledgeModal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrewPriceChangeAcknowledgeModal");

	return Clss;
}


// CrewPriceChangeAcknowledgeModal CrewUI.Default__CrewPriceChangeAcknowledgeModal
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrewPriceChangeAcknowledgeModal* UCrewPriceChangeAcknowledgeModal::GetDefaultObj()
{
	static class UCrewPriceChangeAcknowledgeModal* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrewPriceChangeAcknowledgeModal*>(UCrewPriceChangeAcknowledgeModal::StaticClass()->DefaultObject);

	return Default;
}


// Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeTitle
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCrewPriceChangeAcknowledgeModal::OnSetPriceChangeAcknowledgeTitle(class FText& Title)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewPriceChangeAcknowledgeModal", "OnSetPriceChangeAcknowledgeTitle");

	Params::UCrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeTitle_Params Parms{};

	Parms.Title = Title;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeMoreInfoUrl
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        MoreInfoUrl                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCrewPriceChangeAcknowledgeModal::OnSetPriceChangeAcknowledgeMoreInfoUrl(class FText& MoreInfoUrl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewPriceChangeAcknowledgeModal", "OnSetPriceChangeAcknowledgeMoreInfoUrl");

	Params::UCrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeMoreInfoUrl_Params Parms{};

	Parms.MoreInfoUrl = MoreInfoUrl;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeMoreInfoText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        ConfirmButtonText                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCrewPriceChangeAcknowledgeModal::OnSetPriceChangeAcknowledgeMoreInfoText(class FText& ConfirmButtonText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewPriceChangeAcknowledgeModal", "OnSetPriceChangeAcknowledgeMoreInfoText");

	Params::UCrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeMoreInfoText_Params Parms{};

	Parms.ConfirmButtonText = ConfirmButtonText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeConfirmButtonText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        ConfirmButtonText                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCrewPriceChangeAcknowledgeModal::OnSetPriceChangeAcknowledgeConfirmButtonText(class FText& ConfirmButtonText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewPriceChangeAcknowledgeModal", "OnSetPriceChangeAcknowledgeConfirmButtonText");

	Params::UCrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeConfirmButtonText_Params Parms{};

	Parms.ConfirmButtonText = ConfirmButtonText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeCheckboxText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        CheckboxText                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCrewPriceChangeAcknowledgeModal::OnSetPriceChangeAcknowledgeCheckboxText(class FText& CheckboxText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewPriceChangeAcknowledgeModal", "OnSetPriceChangeAcknowledgeCheckboxText");

	Params::UCrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeCheckboxText_Params Parms{};

	Parms.CheckboxText = CheckboxText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        CancelSubscriptionButtonText                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCrewPriceChangeAcknowledgeModal::OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText(class FText& CancelSubscriptionButtonText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewPriceChangeAcknowledgeModal", "OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText");

	Params::UCrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText_Params Parms{};

	Parms.CancelSubscriptionButtonText = CancelSubscriptionButtonText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeBodyText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        BodyText                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCrewPriceChangeAcknowledgeModal::OnSetPriceChangeAcknowledgeBodyText(class FText& BodyText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewPriceChangeAcknowledgeModal", "OnSetPriceChangeAcknowledgeBodyText");

	Params::UCrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeBodyText_Params Parms{};

	Parms.BodyText = BodyText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeBodyTable
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FCrewTableRow>       PriceChangeByRegionRows                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UCrewPriceChangeAcknowledgeModal::OnSetPriceChangeAcknowledgeBodyTable(TArray<struct FCrewTableRow>& PriceChangeByRegionRows)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewPriceChangeAcknowledgeModal", "OnSetPriceChangeAcknowledgeBodyTable");

	Params::UCrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeBodyTable_Params Parms{};

	Parms.PriceChangeByRegionRows = PriceChangeByRegionRows;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPriceChangeAcknowledgeModal.OnModalBackout
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCrewPriceChangeAcknowledgeModal::OnModalBackout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewPriceChangeAcknowledgeModal", "OnModalBackout");

	Params::UCrewPriceChangeAcknowledgeModal_OnModalBackout_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPriceChangeAcknowledgeModal.ExitModal
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UCrewPriceChangeAcknowledgeModal::ExitModal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewPriceChangeAcknowledgeModal", "ExitModal");

	Params::UCrewPriceChangeAcknowledgeModal_ExitModal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CrewUI.CrewPurchaseScreen
// (None)

class UClass* UCrewPurchaseScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrewPurchaseScreen");

	return Clss;
}


// CrewPurchaseScreen CrewUI.Default__CrewPurchaseScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrewPurchaseScreen* UCrewPurchaseScreen::GetDefaultObj()
{
	static class UCrewPurchaseScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrewPurchaseScreen*>(UCrewPurchaseScreen::StaticClass()->DefaultObject);

	return Default;
}


// Function CrewUI.CrewPurchaseScreen.OnUserInformationTextsUpdated
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        UserInformationText1                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        UserInformationText2                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EMcpSubscriptionState   SubscriptionState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrewPurchaseScreen::OnUserInformationTextsUpdated(class FText& UserInformationText1, class FText& UserInformationText2, enum class EMcpSubscriptionState SubscriptionState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewPurchaseScreen", "OnUserInformationTextsUpdated");

	Params::UCrewPurchaseScreen_OnUserInformationTextsUpdated_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewPurchaseScreen", "OnUpdateVBuckRefundVisibility");

	Params::UCrewPurchaseScreen_OnUpdateVBuckRefundVisibility_Params Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPurchaseScreen.OnUpdatePurchaseButtonState
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECrewPurchaseButtonStateButtonState                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrewPurchaseScreen::OnUpdatePurchaseButtonState(enum class ECrewPurchaseButtonState ButtonState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewPurchaseScreen", "OnUpdatePurchaseButtonState");

	Params::UCrewPurchaseScreen_OnUpdatePurchaseButtonState_Params Parms{};

	Parms.ButtonState = ButtonState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPurchaseScreen.OnShowNavButtonNotification
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShowNotification                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrewPurchaseScreen::OnShowNavButtonNotification(bool bShowNotification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewPurchaseScreen", "OnShowNavButtonNotification");

	Params::UCrewPurchaseScreen_OnShowNavButtonNotification_Params Parms{};

	Parms.bShowNotification = bShowNotification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPurchaseScreen.OnSetPaymentLegalText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        LegalText                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCrewPurchaseScreen::OnSetPaymentLegalText(class FText& LegalText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewPurchaseScreen", "OnSetPaymentLegalText");

	Params::UCrewPurchaseScreen_OnSetPaymentLegalText_Params Parms{};

	Parms.LegalText = LegalText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPurchaseScreen.OnSetNavButtonNotificationText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        NotificationText                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCrewPurchaseScreen::OnSetNavButtonNotificationText(class FText& NotificationText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewPurchaseScreen", "OnSetNavButtonNotificationText");

	Params::UCrewPurchaseScreen_OnSetNavButtonNotificationText_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewPurchaseScreen", "OnContainerTabVisibilityUpdated");

	Params::UCrewPurchaseScreen_OnContainerTabVisibilityUpdated_Params Parms{};

	Parms.bTabsVisible = bTabsVisible;
	Parms.SpacingAdjustmentForTabs = SpacingAdjustmentForTabs;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPurchaseScreen.EndProgress
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCrewPurchaseScreen::EndProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewPurchaseScreen", "EndProgress");

	Params::UCrewPurchaseScreen_EndProgress_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPurchaseScreen.BlockScreenContent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               bBlockScreen                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ContentBlockedText                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCrewPurchaseScreen::BlockScreenContent(bool bBlockScreen, class FText& ContentBlockedText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewPurchaseScreen", "BlockScreenContent");

	Params::UCrewPurchaseScreen_BlockScreenContent_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewPurchaseScreen", "BeginProgress");

	Params::UCrewPurchaseScreen_BeginProgress_Params Parms{};

	Parms.ProgressLabel = ProgressLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Class CrewUI.CrewRewardTile
// (None)

class UClass* UCrewRewardTile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrewRewardTile");

	return Clss;
}


// CrewRewardTile CrewUI.Default__CrewRewardTile
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrewRewardTile* UCrewRewardTile::GetDefaultObj()
{
	static class UCrewRewardTile* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrewRewardTile*>(UCrewRewardTile::StaticClass()->DefaultObject);

	return Default;
}


// Function CrewUI.CrewRewardTile.OnUpdateOwnedState
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bOwned                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrewRewardTile::OnUpdateOwnedState(bool bOwned)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewRewardTile", "OnUpdateOwnedState");

	Params::UCrewRewardTile_OnUpdateOwnedState_Params Parms{};

	Parms.bOwned = bOwned;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewRewardTile.OnStartingDownloadTileImage
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCrewRewardTile::OnStartingDownloadTileImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewRewardTile", "OnStartingDownloadTileImage");

	Params::UCrewRewardTile_OnStartingDownloadTileImage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewRewardTile.OnDownloadTileImageComplete
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrewRewardTile::OnDownloadTileImageComplete(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewRewardTile", "OnDownloadTileImageComplete");

	Params::UCrewRewardTile_OnDownloadTileImageComplete_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewRewardTile.IsMonthlyBenefit
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCrewRewardTile::IsMonthlyBenefit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewRewardTile", "IsMonthlyBenefit");

	Params::UCrewRewardTile_IsMonthlyBenefit_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CrewUI.CrewSeasonLaunchScreen
// (None)

class UClass* UCrewSeasonLaunchScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrewSeasonLaunchScreen");

	return Clss;
}


// CrewSeasonLaunchScreen CrewUI.Default__CrewSeasonLaunchScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrewSeasonLaunchScreen* UCrewSeasonLaunchScreen::GetDefaultObj()
{
	static class UCrewSeasonLaunchScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrewSeasonLaunchScreen*>(UCrewSeasonLaunchScreen::StaticClass()->DefaultObject);

	return Default;
}


// Class CrewUI.CrewStandaloneSubscriptionContentContainer
// (None)

class UClass* UCrewStandaloneSubscriptionContentContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrewStandaloneSubscriptionContentContainer");

	return Clss;
}


// CrewStandaloneSubscriptionContentContainer CrewUI.Default__CrewStandaloneSubscriptionContentContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrewStandaloneSubscriptionContentContainer* UCrewStandaloneSubscriptionContentContainer::GetDefaultObj()
{
	static class UCrewStandaloneSubscriptionContentContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrewStandaloneSubscriptionContentContainer*>(UCrewStandaloneSubscriptionContentContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class CrewUI.CrewSubscriptionContentContainer
// (None)

class UClass* UCrewSubscriptionContentContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrewSubscriptionContentContainer");

	return Clss;
}


// CrewSubscriptionContentContainer CrewUI.Default__CrewSubscriptionContentContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrewSubscriptionContentContainer* UCrewSubscriptionContentContainer::GetDefaultObj()
{
	static class UCrewSubscriptionContentContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrewSubscriptionContentContainer*>(UCrewSubscriptionContentContainer::StaticClass()->DefaultObject);

	return Default;
}


// Function CrewUI.CrewSubscriptionContentContainer.OnTabSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              TabIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrewSubscriptionContentContainer::OnTabSelected(int32 TabIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewSubscriptionContentContainer", "OnTabSelected");

	Params::UCrewSubscriptionContentContainer_OnTabSelected_Params Parms{};

	Parms.TabIndex = TabIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Class CrewUI.CrewSubscriptionErrorModal
// (None)

class UClass* UCrewSubscriptionErrorModal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrewSubscriptionErrorModal");

	return Clss;
}


// CrewSubscriptionErrorModal CrewUI.Default__CrewSubscriptionErrorModal
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrewSubscriptionErrorModal* UCrewSubscriptionErrorModal::GetDefaultObj()
{
	static class UCrewSubscriptionErrorModal* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrewSubscriptionErrorModal*>(UCrewSubscriptionErrorModal::StaticClass()->DefaultObject);

	return Default;
}


// Class CrewUI.CrewTileDetails
// (None)

class UClass* UCrewTileDetails::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrewTileDetails");

	return Clss;
}


// CrewTileDetails CrewUI.Default__CrewTileDetails
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrewTileDetails* UCrewTileDetails::GetDefaultObj()
{
	static class UCrewTileDetails* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrewTileDetails*>(UCrewTileDetails::StaticClass()->DefaultObject);

	return Default;
}


// Class CrewUI.CrewTileDetailsTag
// (None)

class UClass* UCrewTileDetailsTag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrewTileDetailsTag");

	return Clss;
}


// CrewTileDetailsTag CrewUI.Default__CrewTileDetailsTag
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrewTileDetailsTag* UCrewTileDetailsTag::GetDefaultObj()
{
	static class UCrewTileDetailsTag* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrewTileDetailsTag*>(UCrewTileDetailsTag::StaticClass()->DefaultObject);

	return Default;
}


// Function CrewUI.CrewTileDetailsTag.OnTagSetup
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECrewDetailsTag         RewardTag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsOwnedTag                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrewTileDetailsTag::OnTagSetup(enum class ECrewDetailsTag RewardTag, bool bIsOwnedTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewTileDetailsTag", "OnTagSetup");

	Params::UCrewTileDetailsTag_OnTagSetup_Params Parms{};

	Parms.RewardTag = RewardTag;
	Parms.bIsOwnedTag = bIsOwnedTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Class CrewUI.CrewUIGameFeatureAction
// (None)

class UClass* UCrewUIGameFeatureAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrewUIGameFeatureAction");

	return Clss;
}


// CrewUIGameFeatureAction CrewUI.Default__CrewUIGameFeatureAction
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrewUIGameFeatureAction* UCrewUIGameFeatureAction::GetDefaultObj()
{
	static class UCrewUIGameFeatureAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrewUIGameFeatureAction*>(UCrewUIGameFeatureAction::StaticClass()->DefaultObject);

	return Default;
}


// Class CrewUI.FortProgressiveContentContainer
// (None)

class UClass* UFortProgressiveContentContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortProgressiveContentContainer");

	return Clss;
}


// FortProgressiveContentContainer CrewUI.Default__FortProgressiveContentContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortProgressiveContentContainer* UFortProgressiveContentContainer::GetDefaultObj()
{
	static class UFortProgressiveContentContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortProgressiveContentContainer*>(UFortProgressiveContentContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class CrewUI.FortProgressiveItemDetailsWidget
// (None)

class UClass* UFortProgressiveItemDetailsWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortProgressiveItemDetailsWidget");

	return Clss;
}


// FortProgressiveItemDetailsWidget CrewUI.Default__FortProgressiveItemDetailsWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortProgressiveItemDetailsWidget* UFortProgressiveItemDetailsWidget::GetDefaultObj()
{
	static class UFortProgressiveItemDetailsWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortProgressiveItemDetailsWidget*>(UFortProgressiveItemDetailsWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class CrewUI.FortProgressiveScreenBase
// (None)

class UClass* UFortProgressiveScreenBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortProgressiveScreenBase");

	return Clss;
}


// FortProgressiveScreenBase CrewUI.Default__FortProgressiveScreenBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortProgressiveScreenBase* UFortProgressiveScreenBase::GetDefaultObj()
{
	static class UFortProgressiveScreenBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortProgressiveScreenBase*>(UFortProgressiveScreenBase::StaticClass()->DefaultObject);

	return Default;
}


// Function CrewUI.FortProgressiveScreenBase.BP_OnContainerTabVisibilityUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bTabsVisible                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SpacingAdjustmentForTabs                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProgressiveScreenBase::BP_OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveScreenBase", "BP_OnContainerTabVisibilityUpdated");

	Params::UFortProgressiveScreenBase_BP_OnContainerTabVisibilityUpdated_Params Parms{};

	Parms.bTabsVisible = bTabsVisible;
	Parms.SpacingAdjustmentForTabs = SpacingAdjustmentForTabs;

	UObject::ProcessEvent(Func, &Parms);

}


// Class CrewUI.FortProgressiveItemScreen
// (None)

class UClass* UFortProgressiveItemScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortProgressiveItemScreen");

	return Clss;
}


// FortProgressiveItemScreen CrewUI.Default__FortProgressiveItemScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortProgressiveItemScreen* UFortProgressiveItemScreen::GetDefaultObj()
{
	static class UFortProgressiveItemScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortProgressiveItemScreen*>(UFortProgressiveItemScreen::StaticClass()->DefaultObject);

	return Default;
}


// Function CrewUI.FortProgressiveItemScreen.OnUpdateSubscriptionState
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bSubscribed                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProgressiveItemScreen::OnUpdateSubscriptionState(bool bSubscribed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveItemScreen", "OnUpdateSubscriptionState");

	Params::UFortProgressiveItemScreen_OnUpdateSubscriptionState_Params Parms{};

	Parms.bSubscribed = bSubscribed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveItemScreen.OnSetIsSoloScreen
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bInIsSoloScreen                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProgressiveItemScreen::OnSetIsSoloScreen(bool bInIsSoloScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveItemScreen", "OnSetIsSoloScreen");

	Params::UFortProgressiveItemScreen_OnSetIsSoloScreen_Params Parms{};

	Parms.bInIsSoloScreen = bInIsSoloScreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveItemScreen.OnItemSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortProgressiveItemScreen::OnItemSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveItemScreen", "OnItemSelected");

	Params::UFortProgressiveItemScreen_OnItemSelected_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveItemScreen.OnErrorStateTextUpdated
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        ErrorStateText                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortProgressiveItemScreen::OnErrorStateTextUpdated(class FText& ErrorStateText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveItemScreen", "OnErrorStateTextUpdated");

	Params::UFortProgressiveItemScreen_OnErrorStateTextUpdated_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveItemScreen", "BlockScreenContent");

	Params::UFortProgressiveItemScreen_BlockScreenContent_Params Parms{};

	Parms.bBlockScreen = bBlockScreen;
	Parms.ContentBlockedText = ContentBlockedText;

	UObject::ProcessEvent(Func, &Parms);

}


// Class CrewUI.FortProgressiveItemStateTitleWidget
// (None)

class UClass* UFortProgressiveItemStateTitleWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortProgressiveItemStateTitleWidget");

	return Clss;
}


// FortProgressiveItemStateTitleWidget CrewUI.Default__FortProgressiveItemStateTitleWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortProgressiveItemStateTitleWidget* UFortProgressiveItemStateTitleWidget::GetDefaultObj()
{
	static class UFortProgressiveItemStateTitleWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortProgressiveItemStateTitleWidget*>(UFortProgressiveItemStateTitleWidget::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveItemStateTitleWidget", "BP_OnSetHeaderInfo");

	Params::UFortProgressiveItemStateTitleWidget_BP_OnSetHeaderInfo_Params Parms{};

	Parms.Subheading = Subheading;
	Parms.bSubscribed = bSubscribed;
	Parms.UnlockedStages = UnlockedStages;
	Parms.MaxStages = MaxStages;

	UObject::ProcessEvent(Func, &Parms);

}


// Class CrewUI.FortProgressiveItemWidget
// (None)

class UClass* UFortProgressiveItemWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortProgressiveItemWidget");

	return Clss;
}


// FortProgressiveItemWidget CrewUI.Default__FortProgressiveItemWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortProgressiveItemWidget* UFortProgressiveItemWidget::GetDefaultObj()
{
	static class UFortProgressiveItemWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortProgressiveItemWidget*>(UFortProgressiveItemWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function CrewUI.FortProgressiveItemWidget.OnUnhighlighted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortProgressiveItemWidget::OnUnhighlighted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveItemWidget", "OnUnhighlighted");

	Params::UFortProgressiveItemWidget_OnUnhighlighted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveItemWidget.OnTileMaterialLoaded
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bSubscribed                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProgressiveItemWidget::OnTileMaterialLoaded(bool bSubscribed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveItemWidget", "OnTileMaterialLoaded");

	Params::UFortProgressiveItemWidget_OnTileMaterialLoaded_Params Parms{};

	Parms.bSubscribed = bSubscribed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveItemWidget.OnStageItemChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FProgressiveStageItemInfo   InStageItemInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortProgressiveItemWidget::OnStageItemChanged(struct FProgressiveStageItemInfo& InStageItemInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveItemWidget", "OnStageItemChanged");

	Params::UFortProgressiveItemWidget_OnStageItemChanged_Params Parms{};

	Parms.InStageItemInfo = InStageItemInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveItemWidget.OnPeekStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsInPeekState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProgressiveItemWidget::OnPeekStateChanged(bool bIsInPeekState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveItemWidget", "OnPeekStateChanged");

	Params::UFortProgressiveItemWidget_OnPeekStateChanged_Params Parms{};

	Parms.bIsInPeekState = bIsInPeekState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveItemWidget.OnHighlighted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortProgressiveItemWidget::OnHighlighted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveItemWidget", "OnHighlighted");

	Params::UFortProgressiveItemWidget_OnHighlighted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class CrewUI.FortProgressiveSetDetailsWidget
// (None)

class UClass* UFortProgressiveSetDetailsWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortProgressiveSetDetailsWidget");

	return Clss;
}


// FortProgressiveSetDetailsWidget CrewUI.Default__FortProgressiveSetDetailsWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortProgressiveSetDetailsWidget* UFortProgressiveSetDetailsWidget::GetDefaultObj()
{
	static class UFortProgressiveSetDetailsWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortProgressiveSetDetailsWidget*>(UFortProgressiveSetDetailsWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function CrewUI.FortProgressiveSetDetailsWidget.BP_OnUpdateSetDetails
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        SetName                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ExpiringText                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bCompleted                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProgressiveSetDetailsWidget::BP_OnUpdateSetDetails(class FText& SetName, class FText& ExpiringText, bool bCompleted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveSetDetailsWidget", "BP_OnUpdateSetDetails");

	Params::UFortProgressiveSetDetailsWidget_BP_OnUpdateSetDetails_Params Parms{};

	Parms.SetName = SetName;
	Parms.ExpiringText = ExpiringText;
	Parms.bCompleted = bCompleted;

	UObject::ProcessEvent(Func, &Parms);

}


// Class CrewUI.FortProgressiveSetList
// (None)

class UClass* UFortProgressiveSetList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortProgressiveSetList");

	return Clss;
}


// FortProgressiveSetList CrewUI.Default__FortProgressiveSetList
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortProgressiveSetList* UFortProgressiveSetList::GetDefaultObj()
{
	static class UFortProgressiveSetList* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortProgressiveSetList*>(UFortProgressiveSetList::StaticClass()->DefaultObject);

	return Default;
}


// Function CrewUI.FortProgressiveSetList.ClearSetTiles
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortProgressiveSetList::ClearSetTiles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveSetList", "ClearSetTiles");

	Params::UFortProgressiveSetList_ClearSetTiles_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveSetList.AddSetTile
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortProgressiveSetTile*     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortProgressiveSetTile* UFortProgressiveSetList::AddSetTile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveSetList", "AddSetTile");

	Params::UFortProgressiveSetList_AddSetTile_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class CrewUI.FortProgressiveSetTile
// (None)

class UClass* UFortProgressiveSetTile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortProgressiveSetTile");

	return Clss;
}


// FortProgressiveSetTile CrewUI.Default__FortProgressiveSetTile
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortProgressiveSetTile* UFortProgressiveSetTile::GetDefaultObj()
{
	static class UFortProgressiveSetTile* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortProgressiveSetTile*>(UFortProgressiveSetTile::StaticClass()->DefaultObject);

	return Default;
}


// Function CrewUI.FortProgressiveSetTile.BP_OnTileMaterialLoaded
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bSubscribed                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProgressiveSetTile::BP_OnTileMaterialLoaded(bool bSubscribed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveSetTile", "BP_OnTileMaterialLoaded");

	Params::UFortProgressiveSetTile_BP_OnTileMaterialLoaded_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveSetTile", "BP_OnInitializeSetInfo");

	Params::UFortProgressiveSetTile_BP_OnInitializeSetInfo_Params Parms{};

	Parms.InSetInfo = InSetInfo;
	Parms.BottomText = BottomText;
	Parms.BottomSubtext = BottomSubtext;
	Parms.bSubscribed = bSubscribed;

	UObject::ProcessEvent(Func, &Parms);

}


// Class CrewUI.FortProgressiveStageList
// (None)

class UClass* UFortProgressiveStageList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortProgressiveStageList");

	return Clss;
}


// FortProgressiveStageList CrewUI.Default__FortProgressiveStageList
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortProgressiveStageList* UFortProgressiveStageList::GetDefaultObj()
{
	static class UFortProgressiveStageList* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortProgressiveStageList*>(UFortProgressiveStageList::StaticClass()->DefaultObject);

	return Default;
}


// Function CrewUI.FortProgressiveStageList.SelectStageInDirection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Direction                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProgressiveStageList::SelectStageInDirection(int32 Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveStageList", "SelectStageInDirection");

	Params::UFortProgressiveStageList_SelectStageInDirection_Params Parms{};

	Parms.Direction = Direction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CrewUI.FortProgressiveStageList.ClearStageWidgets
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortProgressiveStageList::ClearStageWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveStageList", "ClearStageWidgets");

	Params::UFortProgressiveStageList_ClearStageWidgets_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveStageList.AddStageWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortProgressiveStageWidget* ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortProgressiveStageWidget* UFortProgressiveStageList::AddStageWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveStageList", "AddStageWidget");

	Params::UFortProgressiveStageList_AddStageWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class CrewUI.FortProgressiveStageWidget
// (None)

class UClass* UFortProgressiveStageWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortProgressiveStageWidget");

	return Clss;
}


// FortProgressiveStageWidget CrewUI.Default__FortProgressiveStageWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortProgressiveStageWidget* UFortProgressiveStageWidget::GetDefaultObj()
{
	static class UFortProgressiveStageWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortProgressiveStageWidget*>(UFortProgressiveStageWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function CrewUI.FortProgressiveStageWidget.OnSetTooltipVisible
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProgressiveStageWidget::OnSetTooltipVisible(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveStageWidget", "OnSetTooltipVisible");

	Params::UFortProgressiveStageWidget_OnSetTooltipVisible_Params Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveStageWidget.OnSetTooltipText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        InToolTipText                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortProgressiveStageWidget::OnSetTooltipText(class FText& InToolTipText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveStageWidget", "OnSetTooltipText");

	Params::UFortProgressiveStageWidget_OnSetTooltipText_Params Parms{};

	Parms.InToolTipText = InToolTipText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveStageWidget.OnPeekStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsInPeekState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProgressiveStageWidget::OnPeekStateChanged(bool bIsInPeekState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveStageWidget", "OnPeekStateChanged");

	Params::UFortProgressiveStageWidget_OnPeekStateChanged_Params Parms{};

	Parms.bIsInPeekState = bIsInPeekState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveStageWidget.ClearStageItemWidgets
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortProgressiveStageWidget::ClearStageItemWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveStageWidget", "ClearStageItemWidgets");

	Params::UFortProgressiveStageWidget_ClearStageItemWidgets_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveStageWidget.AddStageItemWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortProgressiveItemWidget*  ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortProgressiveItemWidget* UFortProgressiveStageWidget::AddStageItemWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveStageWidget", "AddStageItemWidget");

	Params::UFortProgressiveStageWidget_AddStageItemWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class CrewUI.FortProgressiveTableOfContentsScreen
// (None)

class UClass* UFortProgressiveTableOfContentsScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortProgressiveTableOfContentsScreen");

	return Clss;
}


// FortProgressiveTableOfContentsScreen CrewUI.Default__FortProgressiveTableOfContentsScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortProgressiveTableOfContentsScreen* UFortProgressiveTableOfContentsScreen::GetDefaultObj()
{
	static class UFortProgressiveTableOfContentsScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortProgressiveTableOfContentsScreen*>(UFortProgressiveTableOfContentsScreen::StaticClass()->DefaultObject);

	return Default;
}


// Function CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateSubscriptionState
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bSubscribed                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProgressiveTableOfContentsScreen::BP_OnUpdateSubscriptionState(bool bSubscribed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveTableOfContentsScreen", "BP_OnUpdateSubscriptionState");

	Params::UFortProgressiveTableOfContentsScreen_BP_OnUpdateSubscriptionState_Params Parms{};

	Parms.bSubscribed = bSubscribed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateNumTilesAvailable
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NumTiles                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProgressiveTableOfContentsScreen::BP_OnUpdateNumTilesAvailable(int32 NumTiles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveTableOfContentsScreen", "BP_OnUpdateNumTilesAvailable");

	Params::UFortProgressiveTableOfContentsScreen_BP_OnUpdateNumTilesAvailable_Params Parms{};

	Parms.NumTiles = NumTiles;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateErrorStateText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        ErrorStateText                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortProgressiveTableOfContentsScreen::BP_OnUpdateErrorStateText(class FText& ErrorStateText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveTableOfContentsScreen", "BP_OnUpdateErrorStateText");

	Params::UFortProgressiveTableOfContentsScreen_BP_OnUpdateErrorStateText_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveTableOfContentsScreen", "BP_OnUpdateBanner");

	Params::UFortProgressiveTableOfContentsScreen_BP_OnUpdateBanner_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveTableOfContentsScreen", "BP_OnSetDescriptionText");

	Params::UFortProgressiveTableOfContentsScreen_BP_OnSetDescriptionText_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveTableOfContentsScreen", "BlockScreenContent");

	Params::UFortProgressiveTableOfContentsScreen_BlockScreenContent_Params Parms{};

	Parms.bBlockScreen = bBlockScreen;
	Parms.ContentBlockedText = ContentBlockedText;

	UObject::ProcessEvent(Func, &Parms);

}

}


