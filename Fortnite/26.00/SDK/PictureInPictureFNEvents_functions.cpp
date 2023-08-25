#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PictureInPictureFNEvents.LiveEventHUDAd
// (None)

class UClass* ULiveEventHUDAd::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveEventHUDAd");

	return Clss;
}


// LiveEventHUDAd PictureInPictureFNEvents.Default__LiveEventHUDAd
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveEventHUDAd* ULiveEventHUDAd::GetDefaultObj()
{
	static class ULiveEventHUDAd* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveEventHUDAd*>(ULiveEventHUDAd::StaticClass()->DefaultObject);

	return Default;
}


// Function PictureInPictureFNEvents.LiveEventHUDAd.ShowAdvertisement
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULiveEventHUDAd::ShowAdvertisement(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveEventHUDAd", "ShowAdvertisement");

	Params::ULiveEventHUDAd_ShowAdvertisement_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Class PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager
// (None)

class UClass* UPictureInPictureFNEventsCheatManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PictureInPictureFNEventsCheatManager");

	return Clss;
}


// PictureInPictureFNEventsCheatManager PictureInPictureFNEvents.Default__PictureInPictureFNEventsCheatManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UPictureInPictureFNEventsCheatManager* UPictureInPictureFNEventsCheatManager::GetDefaultObj()
{
	static class UPictureInPictureFNEventsCheatManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UPictureInPictureFNEventsCheatManager*>(UPictureInPictureFNEventsCheatManager::StaticClass()->DefaultObject);

	return Default;
}


// Function PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.StopPiPBouncingLlama
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:

void UPictureInPictureFNEventsCheatManager::StopPiPBouncingLlama()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPictureFNEventsCheatManager", "StopPiPBouncingLlama");

	Params::UPictureInPictureFNEventsCheatManager_StopPiPBouncingLlama_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.StartPiPBouncingLlama
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:

void UPictureInPictureFNEventsCheatManager::StartPiPBouncingLlama()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPictureFNEventsCheatManager", "StartPiPBouncingLlama");

	Params::UPictureInPictureFNEventsCheatManager_StartPiPBouncingLlama_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.SelectPiPEvent
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPictureFNEventsCheatManager::SelectPiPEvent(const class FString& EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPictureFNEventsCheatManager", "SelectPiPEvent");

	Params::UPictureInPictureFNEventsCheatManager_SelectPiPEvent_Params Parms{};

	Parms.EventName = EventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.RemovePiPEvent
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPictureFNEventsCheatManager::RemovePiPEvent(const class FString& EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPictureFNEventsCheatManager", "RemovePiPEvent");

	Params::UPictureInPictureFNEventsCheatManager_RemovePiPEvent_Params Parms{};

	Parms.EventName = EventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.ListPiPEvents
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:

void UPictureInPictureFNEventsCheatManager::ListPiPEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPictureFNEventsCheatManager", "ListPiPEvents");

	Params::UPictureInPictureFNEventsCheatManager_ListPiPEvents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.ListAllPiPEvents
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:

void UPictureInPictureFNEventsCheatManager::ListAllPiPEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPictureFNEventsCheatManager", "ListAllPiPEvents");

	Params::UPictureInPictureFNEventsCheatManager_ListAllPiPEvents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.AddPiPEvent
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VUID                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPictureFNEventsCheatManager::AddPiPEvent(const class FString& EventName, const class FString& VUID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPictureFNEventsCheatManager", "AddPiPEvent");

	Params::UPictureInPictureFNEventsCheatManager_AddPiPEvent_Params Parms{};

	Parms.EventName = EventName;
	Parms.VUID = VUID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PictureInPictureFNEvents.PictureInPictureFNEventsClient
// (None)

class UClass* UPictureInPictureFNEventsClient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PictureInPictureFNEventsClient");

	return Clss;
}


// PictureInPictureFNEventsClient PictureInPictureFNEvents.Default__PictureInPictureFNEventsClient
// (Public, ClassDefaultObject, ArchetypeObject)

class UPictureInPictureFNEventsClient* UPictureInPictureFNEventsClient::GetDefaultObj()
{
	static class UPictureInPictureFNEventsClient* Default = nullptr;

	if (!Default)
		Default = static_cast<UPictureInPictureFNEventsClient*>(UPictureInPictureFNEventsClient::StaticClass()->DefaultObject);

	return Default;
}


// Class PictureInPictureFNEvents.PictureInPictureFNEventsController
// (None)

class UClass* UPictureInPictureFNEventsController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PictureInPictureFNEventsController");

	return Clss;
}


// PictureInPictureFNEventsController PictureInPictureFNEvents.Default__PictureInPictureFNEventsController
// (Public, ClassDefaultObject, ArchetypeObject)

class UPictureInPictureFNEventsController* UPictureInPictureFNEventsController::GetDefaultObj()
{
	static class UPictureInPictureFNEventsController* Default = nullptr;

	if (!Default)
		Default = static_cast<UPictureInPictureFNEventsController*>(UPictureInPictureFNEventsController::StaticClass()->DefaultObject);

	return Default;
}


// Function PictureInPictureFNEvents.PictureInPictureFNEventsController.UpdateClientLoginState
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<struct FPiPPartnerSource>   UpdatedSources                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UPictureInPictureFNEventsController::UpdateClientLoginState(TArray<struct FPiPPartnerSource>& UpdatedSources)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPictureFNEventsController", "UpdateClientLoginState");

	Params::UPictureInPictureFNEventsController_UpdateClientLoginState_Params Parms{};

	Parms.UpdatedSources = UpdatedSources;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PictureInPictureFNEvents.PictureInPictureFNEventsController.OnClientLogoutSuccess
// (Final, Native, Private)
// Parameters:

void UPictureInPictureFNEventsController::OnClientLogoutSuccess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPictureFNEventsController", "OnClientLogoutSuccess");

	Params::UPictureInPictureFNEventsController_OnClientLogoutSuccess_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PictureInPictureFNEvents.PictureInPictureFNEventsController.OnClientLoginSuccess
// (Final, Native, Private)
// Parameters:

void UPictureInPictureFNEventsController::OnClientLoginSuccess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPictureFNEventsController", "OnClientLoginSuccess");

	Params::UPictureInPictureFNEventsController_OnClientLoginSuccess_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PictureInPictureFNEvents.PictureInPictureFNEventsController.HandleFNMediaRemoveEventsStream
// (Final, Native, Protected)
// Parameters:
// class FString                      InEventName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPictureFNEventsController::HandleFNMediaRemoveEventsStream(const class FString& InEventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPictureFNEventsController", "HandleFNMediaRemoveEventsStream");

	Params::UPictureInPictureFNEventsController_HandleFNMediaRemoveEventsStream_Params Parms{};

	Parms.InEventName = InEventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PictureInPictureFNEvents.PictureInPictureFNEventsController.HandleFNMediaEventsStreams
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FFortMediaEventsStreamAssetsVideoStreamAssets                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UPictureInPictureFNEventsController::HandleFNMediaEventsStreams(struct FFortMediaEventsStreamAssets& VideoStreamAssets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPictureFNEventsController", "HandleFNMediaEventsStreams");

	Params::UPictureInPictureFNEventsController_HandleFNMediaEventsStreams_Params Parms{};

	Parms.VideoStreamAssets = VideoStreamAssets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PictureInPictureFNEvents.PictureInPictureFNEventsController.ExitEvent
// (Final, Native, Private)
// Parameters:

void UPictureInPictureFNEventsController::ExitEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPictureFNEventsController", "ExitEvent");

	Params::UPictureInPictureFNEventsController_ExitEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PictureInPictureFNEvents.PictureInPictureFNEventsController.AddPartnerActionAnalytics
// (Final, Native, Private)
// Parameters:
// class FString                      InPartnerName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPictureInPictureAction InActionType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPictureFNEventsController::AddPartnerActionAnalytics(const class FString& InPartnerName, enum class EPictureInPictureAction InActionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPictureFNEventsController", "AddPartnerActionAnalytics");

	Params::UPictureInPictureFNEventsController_AddPartnerActionAnalytics_Params Parms{};

	Parms.InPartnerName = InPartnerName;
	Parms.InActionType = InActionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


