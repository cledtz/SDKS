#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MatchmakingPortalUI.FortMatchmakingPortalCountdown
// (None)

class UClass* UFortMatchmakingPortalCountdown::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMatchmakingPortalCountdown");

	return Clss;
}


// FortMatchmakingPortalCountdown MatchmakingPortalUI.Default__FortMatchmakingPortalCountdown
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMatchmakingPortalCountdown* UFortMatchmakingPortalCountdown::GetDefaultObj()
{
	static class UFortMatchmakingPortalCountdown* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMatchmakingPortalCountdown*>(UFortMatchmakingPortalCountdown::StaticClass()->DefaultObject);

	return Default;
}


// Function MatchmakingPortalUI.FortMatchmakingPortalCountdown.StartCountdown
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortMatchmakingPortalCountdown::StartCountdown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMatchmakingPortalCountdown", "StartCountdown");

	Params::UFortMatchmakingPortalCountdown_StartCountdown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchmakingPortalUI.FortMatchmakingPortalCountdown.HandleCancelClicked
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortMatchmakingPortalCountdown::HandleCancelClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMatchmakingPortalCountdown", "HandleCancelClicked");

	Params::UFortMatchmakingPortalCountdown_HandleCancelClicked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MatchmakingPortalUI.FortMatchmakingPortalCountdown.FinishTimer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortMatchmakingPortalCountdown::FinishTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMatchmakingPortalCountdown", "FinishTimer");

	Params::UFortMatchmakingPortalCountdown_FinishTimer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class MatchmakingPortalUI.FortMatchmakingPortalModal
// (None)

class UClass* UFortMatchmakingPortalModal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMatchmakingPortalModal");

	return Clss;
}


// FortMatchmakingPortalModal MatchmakingPortalUI.Default__FortMatchmakingPortalModal
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMatchmakingPortalModal* UFortMatchmakingPortalModal::GetDefaultObj()
{
	static class UFortMatchmakingPortalModal* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMatchmakingPortalModal*>(UFortMatchmakingPortalModal::StaticClass()->DefaultObject);

	return Default;
}


// Function MatchmakingPortalUI.FortMatchmakingPortalModal.SetMatchmakingTimer
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortMatchmakingPortalModal::SetMatchmakingTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMatchmakingPortalModal", "SetMatchmakingTimer");

	Params::UFortMatchmakingPortalModal_SetMatchmakingTimer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchmakingPortalUI.FortMatchmakingPortalModal.SetMatchmakingStateText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        MatchmakingStateText                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortMatchmakingPortalModal::SetMatchmakingStateText(class FText& MatchmakingStateText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMatchmakingPortalModal", "SetMatchmakingStateText");

	Params::UFortMatchmakingPortalModal_SetMatchmakingStateText_Params Parms{};

	Parms.MatchmakingStateText = MatchmakingStateText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchmakingPortalUI.FortMatchmakingPortalModal.SendLinkCodeToParty
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortMatchmakingPortalModal::SendLinkCodeToParty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMatchmakingPortalModal", "SendLinkCodeToParty");

	Params::UFortMatchmakingPortalModal_SendLinkCodeToParty_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MatchmakingPortalUI.FortMatchmakingPortalModal.OnMatchmakingStopped
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortMatchmakingPortalModal::OnMatchmakingStopped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMatchmakingPortalModal", "OnMatchmakingStopped");

	Params::UFortMatchmakingPortalModal_OnMatchmakingStopped_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchmakingPortalUI.FortMatchmakingPortalModal.OnMatchmakingStarted
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        MatchmakingState                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortMatchmakingPortalModal::OnMatchmakingStarted(class FText& MatchmakingState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMatchmakingPortalModal", "OnMatchmakingStarted");

	Params::UFortMatchmakingPortalModal_OnMatchmakingStarted_Params Parms{};

	Parms.MatchmakingState = MatchmakingState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchmakingPortalUI.FortMatchmakingPortalModal.OnAdditionalContentUpdate
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        MatchmakingState                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                              Progress                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShowProgressBar                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMatchmakingPortalModal::OnAdditionalContentUpdate(class FText& MatchmakingState, float Progress, bool bShowProgressBar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMatchmakingPortalModal", "OnAdditionalContentUpdate");

	Params::UFortMatchmakingPortalModal_OnAdditionalContentUpdate_Params Parms{};

	Parms.MatchmakingState = MatchmakingState;
	Parms.Progress = Progress;
	Parms.bShowProgressBar = bShowProgressBar;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchmakingPortalUI.FortMatchmakingPortalModal.IsDownloadRequired
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortMatchmakingPortalModal::IsDownloadRequired()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMatchmakingPortalModal", "IsDownloadRequired");

	Params::UFortMatchmakingPortalModal_IsDownloadRequired_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MatchmakingPortalUI.FortMatchmakingPortalModal.HandleOnMatchmakingError
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortMatchmakingPortalModal::HandleOnMatchmakingError()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMatchmakingPortalModal", "HandleOnMatchmakingError");

	Params::UFortMatchmakingPortalModal_HandleOnMatchmakingError_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchmakingPortalUI.FortMatchmakingPortalModal.GetInvalidActivityReason
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortInvalidActivityReasonReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortInvalidActivityReason UFortMatchmakingPortalModal::GetInvalidActivityReason()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMatchmakingPortalModal", "GetInvalidActivityReason");

	Params::UFortMatchmakingPortalModal_GetInvalidActivityReason_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MatchmakingPortalUI.FortMatchmakingPortalModal.GetCreatorTextFormat
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        CreatorName                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortMatchmakingPortalModal::GetCreatorTextFormat(class FText& CreatorName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMatchmakingPortalModal", "GetCreatorTextFormat");

	Params::UFortMatchmakingPortalModal_GetCreatorTextFormat_Params Parms{};

	Parms.CreatorName = CreatorName;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MatchmakingPortalUI.FortMatchmakingPortalModal.GetContentWarningStrings
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UFortMatchmakingPortalModal::GetContentWarningStrings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMatchmakingPortalModal", "GetContentWarningStrings");

	Params::UFortMatchmakingPortalModal_GetContentWarningStrings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MatchmakingPortalUI.FortMatchmakingPortalModal.GetCodeTextFormat
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        IslandCode                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortMatchmakingPortalModal::GetCodeTextFormat(class FText& IslandCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMatchmakingPortalModal", "GetCodeTextFormat");

	Params::UFortMatchmakingPortalModal_GetCodeTextFormat_Params Parms{};

	Parms.IslandCode = IslandCode;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class MatchmakingPortalUI.FortMatchmakingPortalPopup
// (None)

class UClass* UFortMatchmakingPortalPopup::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMatchmakingPortalPopup");

	return Clss;
}


// FortMatchmakingPortalPopup MatchmakingPortalUI.Default__FortMatchmakingPortalPopup
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMatchmakingPortalPopup* UFortMatchmakingPortalPopup::GetDefaultObj()
{
	static class UFortMatchmakingPortalPopup* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMatchmakingPortalPopup*>(UFortMatchmakingPortalPopup::StaticClass()->DefaultObject);

	return Default;
}


// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.UpdateVisuals
// (Event, Public, BlueprintEvent)
// Parameters:
// class UHeaderDescriptionHUDComponent*HUDComponent                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMatchmakingPortalPopup::UpdateVisuals(class UHeaderDescriptionHUDComponent* HUDComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMatchmakingPortalPopup", "UpdateVisuals");

	Params::UFortMatchmakingPortalPopup_UpdateVisuals_Params Parms{};

	Parms.HUDComponent = HUDComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.OnShowPortalPopup
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bShow                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAnimate                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMatchmakingPortalPopup::OnShowPortalPopup(bool bShow, bool bAnimate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMatchmakingPortalPopup", "OnShowPortalPopup");

	Params::UFortMatchmakingPortalPopup_OnShowPortalPopup_Params Parms{};

	Parms.bShow = bShow;
	Parms.bAnimate = bAnimate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.OnPlayerCanInteractChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bPlayerCanInteract                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMatchmakingPortalPopup::OnPlayerCanInteractChanged(bool bPlayerCanInteract)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMatchmakingPortalPopup", "OnPlayerCanInteractChanged");

	Params::UFortMatchmakingPortalPopup_OnPlayerCanInteractChanged_Params Parms{};

	Parms.bPlayerCanInteract = bPlayerCanInteract;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.IsInteractingDeviceAMatchmakingPortal
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortMatchmakingPortalPopup::IsInteractingDeviceAMatchmakingPortal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMatchmakingPortalPopup", "IsInteractingDeviceAMatchmakingPortal");

	Params::UFortMatchmakingPortalPopup_IsInteractingDeviceAMatchmakingPortal_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HasActivityToShow
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortMatchmakingPortalPopup::HasActivityToShow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMatchmakingPortalPopup", "HasActivityToShow");

	Params::UFortMatchmakingPortalPopup_HasActivityToShow_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleWidgetUpdate
// (Final, Native, Private)
// Parameters:

void UFortMatchmakingPortalPopup::HandleWidgetUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMatchmakingPortalPopup", "HandleWidgetUpdate");

	Params::UFortMatchmakingPortalPopup_HandleWidgetUpdate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleStartedRespawn
// (Final, Native, Private)
// Parameters:
// class UFortPlayerControllerZone*   PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMatchmakingPortalPopup::HandleStartedRespawn(class UFortPlayerControllerZone* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMatchmakingPortalPopup", "HandleStartedRespawn");

	Params::UFortMatchmakingPortalPopup_HandleStartedRespawn_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleOnPortalDetailsVisibilityCheck
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShowWidget                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMatchmakingPortalPopup::HandleOnPortalDetailsVisibilityCheck(bool bShowWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMatchmakingPortalPopup", "HandleOnPortalDetailsVisibilityCheck");

	Params::UFortMatchmakingPortalPopup_HandleOnPortalDetailsVisibilityCheck_Params Parms{};

	Parms.bShowWidget = bShowWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleLoadScreenChanged
// (Final, Native, Private)
// Parameters:
// class UFortPlayerControllerAthena* PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLoadScreenEnabled                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        HUDReason                                                        (Parm, NativeAccessSpecifierPublic)

void UFortMatchmakingPortalPopup::HandleLoadScreenChanged(class UFortPlayerControllerAthena* PlayerController, bool bLoadScreenEnabled, class FText HUDReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMatchmakingPortalPopup", "HandleLoadScreenChanged");

	Params::UFortMatchmakingPortalPopup_HandleLoadScreenChanged_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.bLoadScreenEnabled = bLoadScreenEnabled;
	Parms.HUDReason = HUDReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleHUDShow
// (Final, Native, Private)
// Parameters:
// bool                               bShow                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldAnimate                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMatchmakingPortalPopup::HandleHUDShow(bool bShow, bool bShouldAnimate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMatchmakingPortalPopup", "HandleHUDShow");

	Params::UFortMatchmakingPortalPopup_HandleHUDShow_Params Parms{};

	Parms.bShow = bShow;
	Parms.bShouldAnimate = bShouldAnimate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleFinishedCountdown
// (Final, Native, Private)
// Parameters:

void UFortMatchmakingPortalPopup::HandleFinishedCountdown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMatchmakingPortalPopup", "HandleFinishedCountdown");

	Params::UFortMatchmakingPortalPopup_HandleFinishedCountdown_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.GetMatchmakingFeedbackWidget
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UCommonActivatableWidget*    MatchmakingFeedbackContainer                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaCreativeMatchmakingWidget*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaCreativeMatchmakingWidget* UFortMatchmakingPortalPopup::GetMatchmakingFeedbackWidget(class UCommonActivatableWidget* MatchmakingFeedbackContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMatchmakingPortalPopup", "GetMatchmakingFeedbackWidget");

	Params::UFortMatchmakingPortalPopup_GetMatchmakingFeedbackWidget_Params Parms{};

	Parms.MatchmakingFeedbackContainer = MatchmakingFeedbackContainer;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.GetIslandData
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FMatchmakingPortalPopupData OutIslandData                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
// class UHeaderDescriptionHUDComponent*HUDComponent                                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortMatchmakingPortalPopup::GetIslandData(struct FMatchmakingPortalPopupData* OutIslandData, class UHeaderDescriptionHUDComponent* HUDComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMatchmakingPortalPopup", "GetIslandData");

	Params::UFortMatchmakingPortalPopup_GetIslandData_Params Parms{};

	Parms.HUDComponent = HUDComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIslandData != nullptr)
		*OutIslandData = Parms.OutIslandData;

	return Parms.ReturnValue;

}


// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.BindOverlapEvents
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortMatchmakingPortalPopup::BindOverlapEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMatchmakingPortalPopup", "BindOverlapEvents");

	Params::UFortMatchmakingPortalPopup_BindOverlapEvents_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class MatchmakingPortalUI.FortModalBackground
// (None)

class UClass* UFortModalBackground::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortModalBackground");

	return Clss;
}


// FortModalBackground MatchmakingPortalUI.Default__FortModalBackground
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortModalBackground* UFortModalBackground::GetDefaultObj()
{
	static class UFortModalBackground* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortModalBackground*>(UFortModalBackground::StaticClass()->DefaultObject);

	return Default;
}


// Function MatchmakingPortalUI.FortModalBackground.OnPreviewImageChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsLoading                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    InTexture                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortModalBackground::OnPreviewImageChanged(bool bIsLoading, class UTexture* InTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortModalBackground", "OnPreviewImageChanged");

	Params::UFortModalBackground_OnPreviewImageChanged_Params Parms{};

	Parms.bIsLoading = bIsLoading;
	Parms.InTexture = InTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Class MatchmakingPortalUI.FortUIGameFeatureAction_OverridePortalHUDDetails
// (None)

class UClass* UFortUIGameFeatureAction_OverridePortalHUDDetails::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortUIGameFeatureAction_OverridePortalHUDDetails");

	return Clss;
}


// FortUIGameFeatureAction_OverridePortalHUDDetails MatchmakingPortalUI.Default__FortUIGameFeatureAction_OverridePortalHUDDetails
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortUIGameFeatureAction_OverridePortalHUDDetails* UFortUIGameFeatureAction_OverridePortalHUDDetails::GetDefaultObj()
{
	static class UFortUIGameFeatureAction_OverridePortalHUDDetails* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortUIGameFeatureAction_OverridePortalHUDDetails*>(UFortUIGameFeatureAction_OverridePortalHUDDetails::StaticClass()->DefaultObject);

	return Default;
}

}


