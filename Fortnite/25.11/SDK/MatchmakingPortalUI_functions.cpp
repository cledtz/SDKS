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


// Function MatchmakingPortalUI.FortMatchmakingPortalCountdown.StartCountdown
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortMatchmakingPortalCountdown::StartCountdown()
{
	static auto Func = Class->GetFunction("FortMatchmakingPortalCountdown", "StartCountdown");

	Params::UFortMatchmakingPortalCountdown_StartCountdown_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchmakingPortalUI.FortMatchmakingPortalCountdown.HandleCancelClicked
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortMatchmakingPortalCountdown::HandleCancelClicked()
{
	static auto Func = Class->GetFunction("FortMatchmakingPortalCountdown", "HandleCancelClicked");

	Params::UFortMatchmakingPortalCountdown_HandleCancelClicked_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MatchmakingPortalUI.FortMatchmakingPortalCountdown.FinishTimer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortMatchmakingPortalCountdown::FinishTimer()
{
	static auto Func = Class->GetFunction("FortMatchmakingPortalCountdown", "FinishTimer");

	Params::UFortMatchmakingPortalCountdown_FinishTimer_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchmakingPortalUI.FortMatchmakingPortalModal.SetMatchmakingTimer
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortMatchmakingPortalModal::SetMatchmakingTimer()
{
	static auto Func = Class->GetFunction("FortMatchmakingPortalModal", "SetMatchmakingTimer");

	Params::UFortMatchmakingPortalModal_SetMatchmakingTimer_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchmakingPortalUI.FortMatchmakingPortalModal.SetMatchmakingStateText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        MatchmakingStateText                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortMatchmakingPortalModal::SetMatchmakingStateText(class FText& MatchmakingStateText)
{
	static auto Func = Class->GetFunction("FortMatchmakingPortalModal", "SetMatchmakingStateText");

	Params::UFortMatchmakingPortalModal_SetMatchmakingStateText_Params Parms;

	Parms.MatchmakingStateText = MatchmakingStateText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchmakingPortalUI.FortMatchmakingPortalModal.SendLinkCodeToParty
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortMatchmakingPortalModal::SendLinkCodeToParty()
{
	static auto Func = Class->GetFunction("FortMatchmakingPortalModal", "SendLinkCodeToParty");

	Params::UFortMatchmakingPortalModal_SendLinkCodeToParty_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MatchmakingPortalUI.FortMatchmakingPortalModal.OnMatchmakingStopped
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortMatchmakingPortalModal::OnMatchmakingStopped()
{
	static auto Func = Class->GetFunction("FortMatchmakingPortalModal", "OnMatchmakingStopped");

	Params::UFortMatchmakingPortalModal_OnMatchmakingStopped_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchmakingPortalUI.FortMatchmakingPortalModal.OnMatchmakingStarted
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        MatchmakingState                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortMatchmakingPortalModal::OnMatchmakingStarted(class FText& MatchmakingState)
{
	static auto Func = Class->GetFunction("FortMatchmakingPortalModal", "OnMatchmakingStarted");

	Params::UFortMatchmakingPortalModal_OnMatchmakingStarted_Params Parms;

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
	static auto Func = Class->GetFunction("FortMatchmakingPortalModal", "OnAdditionalContentUpdate");

	Params::UFortMatchmakingPortalModal_OnAdditionalContentUpdate_Params Parms;

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
	static auto Func = Class->GetFunction("FortMatchmakingPortalModal", "IsDownloadRequired");

	Params::UFortMatchmakingPortalModal_IsDownloadRequired_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MatchmakingPortalUI.FortMatchmakingPortalModal.HandleOnMatchmakingError
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortMatchmakingPortalModal::HandleOnMatchmakingError()
{
	static auto Func = Class->GetFunction("FortMatchmakingPortalModal", "HandleOnMatchmakingError");

	Params::UFortMatchmakingPortalModal_HandleOnMatchmakingError_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchmakingPortalUI.FortMatchmakingPortalModal.GetInvalidActivityReason
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortInvalidActivityReasonReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortInvalidActivityReason UFortMatchmakingPortalModal::GetInvalidActivityReason()
{
	static auto Func = Class->GetFunction("FortMatchmakingPortalModal", "GetInvalidActivityReason");

	Params::UFortMatchmakingPortalModal_GetInvalidActivityReason_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MatchmakingPortalUI.FortMatchmakingPortalModal.GetCreatorTextFormat
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        CreatorName                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortMatchmakingPortalModal::GetCreatorTextFormat(class FText& CreatorName)
{
	static auto Func = Class->GetFunction("FortMatchmakingPortalModal", "GetCreatorTextFormat");

	Params::UFortMatchmakingPortalModal_GetCreatorTextFormat_Params Parms;

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
	static auto Func = Class->GetFunction("FortMatchmakingPortalModal", "GetContentWarningStrings");

	Params::UFortMatchmakingPortalModal_GetContentWarningStrings_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MatchmakingPortalUI.FortMatchmakingPortalModal.GetCodeTextFormat
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        IslandCode                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortMatchmakingPortalModal::GetCodeTextFormat(class FText& IslandCode)
{
	static auto Func = Class->GetFunction("FortMatchmakingPortalModal", "GetCodeTextFormat");

	Params::UFortMatchmakingPortalModal_GetCodeTextFormat_Params Parms;

	Parms.IslandCode = IslandCode;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.UpdateVisuals
// (Event, Public, BlueprintEvent)
// Parameters:
// class UHeaderDescriptionHUDComponent*HUDComponent                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMatchmakingPortalPopup::UpdateVisuals(class UHeaderDescriptionHUDComponent* HUDComponent)
{
	static auto Func = Class->GetFunction("FortMatchmakingPortalPopup", "UpdateVisuals");

	Params::UFortMatchmakingPortalPopup_UpdateVisuals_Params Parms;

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
	static auto Func = Class->GetFunction("FortMatchmakingPortalPopup", "OnShowPortalPopup");

	Params::UFortMatchmakingPortalPopup_OnShowPortalPopup_Params Parms;

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
	static auto Func = Class->GetFunction("FortMatchmakingPortalPopup", "OnPlayerCanInteractChanged");

	Params::UFortMatchmakingPortalPopup_OnPlayerCanInteractChanged_Params Parms;

	Parms.bPlayerCanInteract = bPlayerCanInteract;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.IsInteractingDeviceAMatchmakingPortal
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortMatchmakingPortalPopup::IsInteractingDeviceAMatchmakingPortal()
{
	static auto Func = Class->GetFunction("FortMatchmakingPortalPopup", "IsInteractingDeviceAMatchmakingPortal");

	Params::UFortMatchmakingPortalPopup_IsInteractingDeviceAMatchmakingPortal_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HasActivityToShow
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortMatchmakingPortalPopup::HasActivityToShow()
{
	static auto Func = Class->GetFunction("FortMatchmakingPortalPopup", "HasActivityToShow");

	Params::UFortMatchmakingPortalPopup_HasActivityToShow_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleWidgetUpdate
// (Final, Native, Private)
// Parameters:

void UFortMatchmakingPortalPopup::HandleWidgetUpdate()
{
	static auto Func = Class->GetFunction("FortMatchmakingPortalPopup", "HandleWidgetUpdate");

	Params::UFortMatchmakingPortalPopup_HandleWidgetUpdate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleStartedRespawn
// (Final, Native, Private)
// Parameters:
// class AFortPlayerControllerZone*   PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMatchmakingPortalPopup::HandleStartedRespawn(class AFortPlayerControllerZone* PlayerController)
{
	static auto Func = Class->GetFunction("FortMatchmakingPortalPopup", "HandleStartedRespawn");

	Params::UFortMatchmakingPortalPopup_HandleStartedRespawn_Params Parms;

	Parms.PlayerController = PlayerController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleOnPortalDetailsVisibilityCheck
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShowWidget                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMatchmakingPortalPopup::HandleOnPortalDetailsVisibilityCheck(bool bShowWidget)
{
	static auto Func = Class->GetFunction("FortMatchmakingPortalPopup", "HandleOnPortalDetailsVisibilityCheck");

	Params::UFortMatchmakingPortalPopup_HandleOnPortalDetailsVisibilityCheck_Params Parms;

	Parms.bShowWidget = bShowWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleLoadScreenChanged
// (Final, Native, Private)
// Parameters:
// class AFortPlayerControllerAthena* PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLoadScreenEnabled                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        HUDReason                                                        (Parm, NativeAccessSpecifierPublic)

void UFortMatchmakingPortalPopup::HandleLoadScreenChanged(class AFortPlayerControllerAthena* PlayerController, bool bLoadScreenEnabled, class FText HUDReason)
{
	static auto Func = Class->GetFunction("FortMatchmakingPortalPopup", "HandleLoadScreenChanged");

	Params::UFortMatchmakingPortalPopup_HandleLoadScreenChanged_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.bLoadScreenEnabled = bLoadScreenEnabled;
	Parms.HUDReason = HUDReason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleHUDShow
// (Final, Native, Private)
// Parameters:
// bool                               bShow                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldAnimate                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMatchmakingPortalPopup::HandleHUDShow(bool bShow, bool bShouldAnimate)
{
	static auto Func = Class->GetFunction("FortMatchmakingPortalPopup", "HandleHUDShow");

	Params::UFortMatchmakingPortalPopup_HandleHUDShow_Params Parms;

	Parms.bShow = bShow;
	Parms.bShouldAnimate = bShouldAnimate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.HandleFinishedCountdown
// (Final, Native, Private)
// Parameters:

void UFortMatchmakingPortalPopup::HandleFinishedCountdown()
{
	static auto Func = Class->GetFunction("FortMatchmakingPortalPopup", "HandleFinishedCountdown");

	Params::UFortMatchmakingPortalPopup_HandleFinishedCountdown_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MatchmakingPortalUI.FortMatchmakingPortalPopup.GetMatchmakingFeedbackWidget
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UCommonActivatableWidget*    MatchmakingFeedbackContainer                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaCreativeMatchmakingWidget*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaCreativeMatchmakingWidget* UFortMatchmakingPortalPopup::GetMatchmakingFeedbackWidget(class UCommonActivatableWidget* MatchmakingFeedbackContainer)
{
	static auto Func = Class->GetFunction("FortMatchmakingPortalPopup", "GetMatchmakingFeedbackWidget");

	Params::UFortMatchmakingPortalPopup_GetMatchmakingFeedbackWidget_Params Parms;

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
	static auto Func = Class->GetFunction("FortMatchmakingPortalPopup", "GetIslandData");

	Params::UFortMatchmakingPortalPopup_GetIslandData_Params Parms;

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
	static auto Func = Class->GetFunction("FortMatchmakingPortalPopup", "BindOverlapEvents");

	Params::UFortMatchmakingPortalPopup_BindOverlapEvents_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchmakingPortalUI.FortModalBackground.OnPreviewImageChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsLoading                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    InTexture                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortModalBackground::OnPreviewImageChanged(bool bIsLoading, class UTexture* InTexture)
{
	static auto Func = Class->GetFunction("FortModalBackground", "OnPreviewImageChanged");

	Params::UFortModalBackground_OnPreviewImageChanged_Params Parms;

	Parms.bIsLoading = bIsLoading;
	Parms.InTexture = InTexture;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
