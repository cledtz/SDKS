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


// Function KoalaUI.FortSidebarPanelKoala.OnConnectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bConnected                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSidebarPanelKoala::OnConnectionChanged(bool bConnected)
{
	static auto Func = Class->GetFunction("FortSidebarPanelKoala", "OnConnectionChanged");

	Params::UFortSidebarPanelKoala_OnConnectionChanged_Params Parms;

	Parms.bConnected = bConnected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KoalaUI.KoalaHUDWidget.UnregisterClipButtonInput
// (Final, Native, Private)
// Parameters:

void UKoalaHUDWidget::UnregisterClipButtonInput()
{
	static auto Func = Class->GetFunction("KoalaHUDWidget", "UnregisterClipButtonInput");

	Params::UKoalaHUDWidget_UnregisterClipButtonInput_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function KoalaUI.KoalaHUDWidget.RegisterClipButtonInput
// (Final, Native, Private)
// Parameters:

void UKoalaHUDWidget::RegisterClipButtonInput()
{
	static auto Func = Class->GetFunction("KoalaHUDWidget", "RegisterClipButtonInput");

	Params::UKoalaHUDWidget_RegisterClipButtonInput_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function KoalaUI.KoalaHUDWidget.OnTouchAreaMouseDown
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UKoalaHUDWidget::OnTouchAreaMouseDown()
{
	static auto Func = Class->GetFunction("KoalaHUDWidget", "OnTouchAreaMouseDown");

	Params::UKoalaHUDWidget_OnTouchAreaMouseDown_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function KoalaUI.KoalaHUDWidget.OnReminderTimerStarted
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKoalaHUDWidget::OnReminderTimerStarted(float Time)
{
	static auto Func = Class->GetFunction("KoalaHUDWidget", "OnReminderTimerStarted");

	Params::UKoalaHUDWidget_OnReminderTimerStarted_Params Parms;

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KoalaUI.KoalaHUDWidget.OnReminderEnded
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UKoalaHUDWidget::OnReminderEnded()
{
	static auto Func = Class->GetFunction("KoalaHUDWidget", "OnReminderEnded");

	Params::UKoalaHUDWidget_OnReminderEnded_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function KoalaUI.KoalaHUDWidget.OnRecordingStatusChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EKoalaRecording         InRecordingStatus                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKoalaHUDWidget::OnRecordingStatusChanged(enum class EKoalaRecording InRecordingStatus)
{
	static auto Func = Class->GetFunction("KoalaHUDWidget", "OnRecordingStatusChanged");

	Params::UKoalaHUDWidget_OnRecordingStatusChanged_Params Parms;

	Parms.InRecordingStatus = InRecordingStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KoalaUI.KoalaHUDWidget.OnInputProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Progress                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKoalaHUDWidget::OnInputProgress(float Progress)
{
	static auto Func = Class->GetFunction("KoalaHUDWidget", "OnInputProgress");

	Params::UKoalaHUDWidget_OnInputProgress_Params Parms;

	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KoalaUI.KoalaHUDWidget.OnInputComplete
// (Event, Protected, BlueprintEvent)
// Parameters:

void UKoalaHUDWidget::OnInputComplete()
{
	static auto Func = Class->GetFunction("KoalaHUDWidget", "OnInputComplete");

	Params::UKoalaHUDWidget_OnInputComplete_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function KoalaUI.KoalaHUDWidget.OnConnectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EKoalaConnectionStatus  InStatus                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKoalaHUDWidget::OnConnectionChanged(enum class EKoalaConnectionStatus InStatus)
{
	static auto Func = Class->GetFunction("KoalaHUDWidget", "OnConnectionChanged");

	Params::UKoalaHUDWidget_OnConnectionChanged_Params Parms;

	Parms.InStatus = InStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KoalaUI.KoalaHUDWidget.OnClipStatusChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              InClipID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EKoalaClipStatus        InClipStatus                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InUploadProgress                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKoalaHUDWidget::OnClipStatusChanged(int32 InClipID, enum class EKoalaClipStatus InClipStatus, float InUploadProgress)
{
	static auto Func = Class->GetFunction("KoalaHUDWidget", "OnClipStatusChanged");

	Params::UKoalaHUDWidget_OnClipStatusChanged_Params Parms;

	Parms.InClipID = InClipID;
	Parms.InClipStatus = InClipStatus;
	Parms.InUploadProgress = InUploadProgress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KoalaUI.KoalaHUDWidget.OnAvailabilityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EKoalaAvailability      Availability                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKoalaHUDWidget::OnAvailabilityChanged(enum class EKoalaAvailability Availability)
{
	static auto Func = Class->GetFunction("KoalaHUDWidget", "OnAvailabilityChanged");

	Params::UKoalaHUDWidget_OnAvailabilityChanged_Params Parms;

	Parms.Availability = Availability;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KoalaUI.KoalaHUDWidget.HandlePlayerPawnEmoteStopped
// (Final, Native, Private)
// Parameters:
// class UFortItemDefinition*         MontageItemDef                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   PawnEmoting                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKoalaHUDWidget::HandlePlayerPawnEmoteStopped(class UFortItemDefinition* MontageItemDef, class UFortPawn* PawnEmoting)
{
	static auto Func = Class->GetFunction("KoalaHUDWidget", "HandlePlayerPawnEmoteStopped");

	Params::UKoalaHUDWidget_HandlePlayerPawnEmoteStopped_Params Parms;

	Parms.MontageItemDef = MontageItemDef;
	Parms.PawnEmoting = PawnEmoting;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function KoalaUI.KoalaHUDWidget.HandlePlayerMatchWon
// (Final, Native, Private)
// Parameters:

void UKoalaHUDWidget::HandlePlayerMatchWon()
{
	static auto Func = Class->GetFunction("KoalaHUDWidget", "HandlePlayerMatchWon");

	Params::UKoalaHUDWidget_HandlePlayerMatchWon_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function KoalaUI.KoalaHUDWidget.HandleLocalPlayerKilledPlayer
// (Final, Native, Private)
// Parameters:
// class UFortPlayerStateAthena*      Player                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKoalaHUDWidget::HandleLocalPlayerKilledPlayer(class UFortPlayerStateAthena* Player)
{
	static auto Func = Class->GetFunction("KoalaHUDWidget", "HandleLocalPlayerKilledPlayer");

	Params::UKoalaHUDWidget_HandleLocalPlayerKilledPlayer_Params Parms;

	Parms.Player = Player;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function KoalaUI.KoalaHUDWidget.HandleAthenaGamePhaseChanged
// (Final, Native, Protected)
// Parameters:
// enum class EAthenaGamePhase        GamePhase                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKoalaHUDWidget::HandleAthenaGamePhaseChanged(enum class EAthenaGamePhase GamePhase)
{
	static auto Func = Class->GetFunction("KoalaHUDWidget", "HandleAthenaGamePhaseChanged");

	Params::UKoalaHUDWidget_HandleAthenaGamePhaseChanged_Params Parms;

	Parms.GamePhase = GamePhase;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function KoalaUI.KoalaHUDWidget.GetUploadingClipCount
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UKoalaHUDWidget::GetUploadingClipCount()
{
	static auto Func = Class->GetFunction("KoalaHUDWidget", "GetUploadingClipCount");

	Params::UKoalaHUDWidget_GetUploadingClipCount_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function KoalaUI.KoalaHUDWidget.GetTrackedClipCount
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UKoalaHUDWidget::GetTrackedClipCount()
{
	static auto Func = Class->GetFunction("KoalaHUDWidget", "GetTrackedClipCount");

	Params::UKoalaHUDWidget_GetTrackedClipCount_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function KoalaUI.KoalaSettingDetailExtension.OnConnectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bConnected                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKoalaSettingDetailExtension::OnConnectionChanged(bool bConnected)
{
	static auto Func = Class->GetFunction("KoalaSettingDetailExtension", "OnConnectionChanged");

	Params::UKoalaSettingDetailExtension_OnConnectionChanged_Params Parms;

	Parms.bConnected = bConnected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KoalaUI.KoalaSettingDetailExtension.OnAvailabilityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bAvailable                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKoalaSettingDetailExtension::OnAvailabilityChanged(bool bAvailable)
{
	static auto Func = Class->GetFunction("KoalaSettingDetailExtension", "OnAvailabilityChanged");

	Params::UKoalaSettingDetailExtension_OnAvailabilityChanged_Params Parms;

	Parms.bAvailable = bAvailable;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
