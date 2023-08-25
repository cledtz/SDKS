#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class KoalaUI.FortGameSettingRegistryExtension_Koala
// (None)

class UClass* UFortGameSettingRegistryExtension_Koala::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameSettingRegistryExtension_Koala");

	return Clss;
}


// FortGameSettingRegistryExtension_Koala KoalaUI.Default__FortGameSettingRegistryExtension_Koala
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameSettingRegistryExtension_Koala* UFortGameSettingRegistryExtension_Koala::GetDefaultObj()
{
	static class UFortGameSettingRegistryExtension_Koala* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameSettingRegistryExtension_Koala*>(UFortGameSettingRegistryExtension_Koala::StaticClass()->DefaultObject);

	return Default;
}


// Class KoalaUI.FortSidebarPanelKoala
// (None)

class UClass* UFortSidebarPanelKoala::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSidebarPanelKoala");

	return Clss;
}


// FortSidebarPanelKoala KoalaUI.Default__FortSidebarPanelKoala
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSidebarPanelKoala* UFortSidebarPanelKoala::GetDefaultObj()
{
	static class UFortSidebarPanelKoala* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSidebarPanelKoala*>(UFortSidebarPanelKoala::StaticClass()->DefaultObject);

	return Default;
}


// Function KoalaUI.FortSidebarPanelKoala.OnConnectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bConnected                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSidebarPanelKoala::OnConnectionChanged(bool bConnected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSidebarPanelKoala", "OnConnectionChanged");

	Params::UFortSidebarPanelKoala_OnConnectionChanged_Params Parms{};

	Parms.bConnected = bConnected;

	UObject::ProcessEvent(Func, &Parms);

}


// Class KoalaUI.FortUIGameFeatureAction_AttemptKoalaModal
// (None)

class UClass* UFortUIGameFeatureAction_AttemptKoalaModal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortUIGameFeatureAction_AttemptKoalaModal");

	return Clss;
}


// FortUIGameFeatureAction_AttemptKoalaModal KoalaUI.Default__FortUIGameFeatureAction_AttemptKoalaModal
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortUIGameFeatureAction_AttemptKoalaModal* UFortUIGameFeatureAction_AttemptKoalaModal::GetDefaultObj()
{
	static class UFortUIGameFeatureAction_AttemptKoalaModal* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortUIGameFeatureAction_AttemptKoalaModal*>(UFortUIGameFeatureAction_AttemptKoalaModal::StaticClass()->DefaultObject);

	return Default;
}


// Class KoalaUI.KoalaGraphicsModal
// (None)

class UClass* UKoalaGraphicsModal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KoalaGraphicsModal");

	return Clss;
}


// KoalaGraphicsModal KoalaUI.Default__KoalaGraphicsModal
// (Public, ClassDefaultObject, ArchetypeObject)

class UKoalaGraphicsModal* UKoalaGraphicsModal::GetDefaultObj()
{
	static class UKoalaGraphicsModal* Default = nullptr;

	if (!Default)
		Default = static_cast<UKoalaGraphicsModal*>(UKoalaGraphicsModal::StaticClass()->DefaultObject);

	return Default;
}


// Class KoalaUI.KoalaHUDWidget
// (None)

class UClass* UKoalaHUDWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KoalaHUDWidget");

	return Clss;
}


// KoalaHUDWidget KoalaUI.Default__KoalaHUDWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UKoalaHUDWidget* UKoalaHUDWidget::GetDefaultObj()
{
	static class UKoalaHUDWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UKoalaHUDWidget*>(UKoalaHUDWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function KoalaUI.KoalaHUDWidget.UnregisterClipButtonInput
// (Final, Native, Private)
// Parameters:

void UKoalaHUDWidget::UnregisterClipButtonInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KoalaHUDWidget", "UnregisterClipButtonInput");

	Params::UKoalaHUDWidget_UnregisterClipButtonInput_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function KoalaUI.KoalaHUDWidget.RegisterClipButtonInput
// (Final, Native, Private)
// Parameters:

void UKoalaHUDWidget::RegisterClipButtonInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KoalaHUDWidget", "RegisterClipButtonInput");

	Params::UKoalaHUDWidget_RegisterClipButtonInput_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function KoalaUI.KoalaHUDWidget.OnTouchAreaMouseDown
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UKoalaHUDWidget::OnTouchAreaMouseDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KoalaHUDWidget", "OnTouchAreaMouseDown");

	Params::UKoalaHUDWidget_OnTouchAreaMouseDown_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function KoalaUI.KoalaHUDWidget.OnReminderTimerStarted
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKoalaHUDWidget::OnReminderTimerStarted(float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KoalaHUDWidget", "OnReminderTimerStarted");

	Params::UKoalaHUDWidget_OnReminderTimerStarted_Params Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KoalaUI.KoalaHUDWidget.OnReminderEnded
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UKoalaHUDWidget::OnReminderEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KoalaHUDWidget", "OnReminderEnded");

	Params::UKoalaHUDWidget_OnReminderEnded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function KoalaUI.KoalaHUDWidget.OnRecordingStatusChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EKoalaRecording         InRecordingStatus                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKoalaHUDWidget::OnRecordingStatusChanged(enum class EKoalaRecording InRecordingStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KoalaHUDWidget", "OnRecordingStatusChanged");

	Params::UKoalaHUDWidget_OnRecordingStatusChanged_Params Parms{};

	Parms.InRecordingStatus = InRecordingStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KoalaUI.KoalaHUDWidget.OnInputProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Progress                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKoalaHUDWidget::OnInputProgress(float Progress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KoalaHUDWidget", "OnInputProgress");

	Params::UKoalaHUDWidget_OnInputProgress_Params Parms{};

	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KoalaUI.KoalaHUDWidget.OnInputComplete
// (Event, Protected, BlueprintEvent)
// Parameters:

void UKoalaHUDWidget::OnInputComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KoalaHUDWidget", "OnInputComplete");

	Params::UKoalaHUDWidget_OnInputComplete_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function KoalaUI.KoalaHUDWidget.OnConnectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EKoalaConnectionStatus  InStatus                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKoalaHUDWidget::OnConnectionChanged(enum class EKoalaConnectionStatus InStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KoalaHUDWidget", "OnConnectionChanged");

	Params::UKoalaHUDWidget_OnConnectionChanged_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KoalaHUDWidget", "OnClipStatusChanged");

	Params::UKoalaHUDWidget_OnClipStatusChanged_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KoalaHUDWidget", "OnAvailabilityChanged");

	Params::UKoalaHUDWidget_OnAvailabilityChanged_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KoalaHUDWidget", "HandlePlayerPawnEmoteStopped");

	Params::UKoalaHUDWidget_HandlePlayerPawnEmoteStopped_Params Parms{};

	Parms.MontageItemDef = MontageItemDef;
	Parms.PawnEmoting = PawnEmoting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function KoalaUI.KoalaHUDWidget.HandlePlayerMatchWon
// (Final, Native, Private)
// Parameters:

void UKoalaHUDWidget::HandlePlayerMatchWon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KoalaHUDWidget", "HandlePlayerMatchWon");

	Params::UKoalaHUDWidget_HandlePlayerMatchWon_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function KoalaUI.KoalaHUDWidget.HandleLocalPlayerKilledPlayer
// (Final, Native, Private)
// Parameters:
// class UFortPlayerStateAthena*      Player                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKoalaHUDWidget::HandleLocalPlayerKilledPlayer(class UFortPlayerStateAthena* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KoalaHUDWidget", "HandleLocalPlayerKilledPlayer");

	Params::UKoalaHUDWidget_HandleLocalPlayerKilledPlayer_Params Parms{};

	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function KoalaUI.KoalaHUDWidget.GetUploadingClipCount
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UKoalaHUDWidget::GetUploadingClipCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KoalaHUDWidget", "GetUploadingClipCount");

	Params::UKoalaHUDWidget_GetUploadingClipCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function KoalaUI.KoalaHUDWidget.GetTrackedClipCount
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UKoalaHUDWidget::GetTrackedClipCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KoalaHUDWidget", "GetTrackedClipCount");

	Params::UKoalaHUDWidget_GetTrackedClipCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class KoalaUI.KoalaMainMenuButton
// (None)

class UClass* UKoalaMainMenuButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KoalaMainMenuButton");

	return Clss;
}


// KoalaMainMenuButton KoalaUI.Default__KoalaMainMenuButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UKoalaMainMenuButton* UKoalaMainMenuButton::GetDefaultObj()
{
	static class UKoalaMainMenuButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UKoalaMainMenuButton*>(UKoalaMainMenuButton::StaticClass()->DefaultObject);

	return Default;
}


// Class KoalaUI.KoalaSettingDetailExtension
// (None)

class UClass* UKoalaSettingDetailExtension::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KoalaSettingDetailExtension");

	return Clss;
}


// KoalaSettingDetailExtension KoalaUI.Default__KoalaSettingDetailExtension
// (Public, ClassDefaultObject, ArchetypeObject)

class UKoalaSettingDetailExtension* UKoalaSettingDetailExtension::GetDefaultObj()
{
	static class UKoalaSettingDetailExtension* Default = nullptr;

	if (!Default)
		Default = static_cast<UKoalaSettingDetailExtension*>(UKoalaSettingDetailExtension::StaticClass()->DefaultObject);

	return Default;
}


// Function KoalaUI.KoalaSettingDetailExtension.OnConnectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bConnected                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKoalaSettingDetailExtension::OnConnectionChanged(bool bConnected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KoalaSettingDetailExtension", "OnConnectionChanged");

	Params::UKoalaSettingDetailExtension_OnConnectionChanged_Params Parms{};

	Parms.bConnected = bConnected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KoalaUI.KoalaSettingDetailExtension.OnAvailabilityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bAvailable                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKoalaSettingDetailExtension::OnAvailabilityChanged(bool bAvailable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KoalaSettingDetailExtension", "OnAvailabilityChanged");

	Params::UKoalaSettingDetailExtension_OnAvailabilityChanged_Params Parms{};

	Parms.bAvailable = bAvailable;

	UObject::ProcessEvent(Func, &Parms);

}

}


