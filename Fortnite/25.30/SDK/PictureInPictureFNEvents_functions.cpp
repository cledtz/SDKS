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


// Function PictureInPictureFNEvents.LiveEventHUDAd.ShowAdvertisement
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULiveEventHUDAd::ShowAdvertisement(bool* Result)
{
	static auto Func = Class->GetFunction("LiveEventHUDAd", "ShowAdvertisement");

	Params::ULiveEventHUDAd_ShowAdvertisement_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.StopPiPBouncingLlama
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:

void UPictureInPictureFNEventsCheatManager::StopPiPBouncingLlama()
{
	static auto Func = Class->GetFunction("PictureInPictureFNEventsCheatManager", "StopPiPBouncingLlama");

	Params::UPictureInPictureFNEventsCheatManager_StopPiPBouncingLlama_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.StartPiPBouncingLlama
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:

void UPictureInPictureFNEventsCheatManager::StartPiPBouncingLlama()
{
	static auto Func = Class->GetFunction("PictureInPictureFNEventsCheatManager", "StartPiPBouncingLlama");

	Params::UPictureInPictureFNEventsCheatManager_StartPiPBouncingLlama_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.SelectPiPEvent
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPictureFNEventsCheatManager::SelectPiPEvent(const class FString& EventName)
{
	static auto Func = Class->GetFunction("PictureInPictureFNEventsCheatManager", "SelectPiPEvent");

	Params::UPictureInPictureFNEventsCheatManager_SelectPiPEvent_Params Parms;

	Parms.EventName = EventName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.RemovePiPEvent
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPictureFNEventsCheatManager::RemovePiPEvent(const class FString& EventName)
{
	static auto Func = Class->GetFunction("PictureInPictureFNEventsCheatManager", "RemovePiPEvent");

	Params::UPictureInPictureFNEventsCheatManager_RemovePiPEvent_Params Parms;

	Parms.EventName = EventName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.ListPiPEvents
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:

void UPictureInPictureFNEventsCheatManager::ListPiPEvents()
{
	static auto Func = Class->GetFunction("PictureInPictureFNEventsCheatManager", "ListPiPEvents");

	Params::UPictureInPictureFNEventsCheatManager_ListPiPEvents_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.ListAllPiPEvents
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:

void UPictureInPictureFNEventsCheatManager::ListAllPiPEvents()
{
	static auto Func = Class->GetFunction("PictureInPictureFNEventsCheatManager", "ListAllPiPEvents");

	Params::UPictureInPictureFNEventsCheatManager_ListAllPiPEvents_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.AddPiPEvent
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VUID                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPictureFNEventsCheatManager::AddPiPEvent(const class FString& EventName, const class FString& VUID)
{
	static auto Func = Class->GetFunction("PictureInPictureFNEventsCheatManager", "AddPiPEvent");

	Params::UPictureInPictureFNEventsCheatManager_AddPiPEvent_Params Parms;

	Parms.EventName = EventName;
	Parms.VUID = VUID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureFNEvents.PictureInPictureFNEventsController.UpdateClientLoginState
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<struct FPiPPartnerSource>   UpdatedSources                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UPictureInPictureFNEventsController::UpdateClientLoginState(TArray<struct FPiPPartnerSource>& UpdatedSources)
{
	static auto Func = Class->GetFunction("PictureInPictureFNEventsController", "UpdateClientLoginState");

	Params::UPictureInPictureFNEventsController_UpdateClientLoginState_Params Parms;

	Parms.UpdatedSources = UpdatedSources;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureFNEvents.PictureInPictureFNEventsController.OnClientLogoutSuccess
// (Final, Native, Private)
// Parameters:

void UPictureInPictureFNEventsController::OnClientLogoutSuccess()
{
	static auto Func = Class->GetFunction("PictureInPictureFNEventsController", "OnClientLogoutSuccess");

	Params::UPictureInPictureFNEventsController_OnClientLogoutSuccess_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureFNEvents.PictureInPictureFNEventsController.OnClientLoginSuccess
// (Final, Native, Private)
// Parameters:

void UPictureInPictureFNEventsController::OnClientLoginSuccess()
{
	static auto Func = Class->GetFunction("PictureInPictureFNEventsController", "OnClientLoginSuccess");

	Params::UPictureInPictureFNEventsController_OnClientLoginSuccess_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureFNEvents.PictureInPictureFNEventsController.HandleFNMediaRemoveEventsStream
// (Final, Native, Protected)
// Parameters:
// class FString                      InEventName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPictureFNEventsController::HandleFNMediaRemoveEventsStream(const class FString& InEventName)
{
	static auto Func = Class->GetFunction("PictureInPictureFNEventsController", "HandleFNMediaRemoveEventsStream");

	Params::UPictureInPictureFNEventsController_HandleFNMediaRemoveEventsStream_Params Parms;

	Parms.InEventName = InEventName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureFNEvents.PictureInPictureFNEventsController.HandleFNMediaEventsStreams
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FFortMediaEventsStreamAssetsVideoStreamAssets                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UPictureInPictureFNEventsController::HandleFNMediaEventsStreams(struct FFortMediaEventsStreamAssets& VideoStreamAssets)
{
	static auto Func = Class->GetFunction("PictureInPictureFNEventsController", "HandleFNMediaEventsStreams");

	Params::UPictureInPictureFNEventsController_HandleFNMediaEventsStreams_Params Parms;

	Parms.VideoStreamAssets = VideoStreamAssets;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureFNEvents.PictureInPictureFNEventsController.ExitEvent
// (Final, Native, Private)
// Parameters:

void UPictureInPictureFNEventsController::ExitEvent()
{
	static auto Func = Class->GetFunction("PictureInPictureFNEventsController", "ExitEvent");

	Params::UPictureInPictureFNEventsController_ExitEvent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureFNEvents.PictureInPictureFNEventsController.AddPartnerActionAnalytics
// (Final, Native, Private)
// Parameters:
// class FString                      InPartnerName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPictureInPictureAction InActionType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPictureFNEventsController::AddPartnerActionAnalytics(const class FString& InPartnerName, enum class EPictureInPictureAction InActionType)
{
	static auto Func = Class->GetFunction("PictureInPictureFNEventsController", "AddPartnerActionAnalytics");

	Params::UPictureInPictureFNEventsController_AddPartnerActionAnalytics_Params Parms;

	Parms.InPartnerName = InPartnerName;
	Parms.InActionType = InActionType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
