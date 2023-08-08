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


// Function PictureInPictureCore.PictureInPictureClient.Logout
// (Native, Public, BlueprintCallable)
// Parameters:

void UPictureInPictureClient::Logout()
{
	static auto Func = Class->GetFunction("PictureInPictureClient", "Logout");

	Params::UPictureInPictureClient_Logout_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureClient.IsLoggedIn
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPictureInPictureClient::IsLoggedIn()
{
	static auto Func = Class->GetFunction("PictureInPictureClient", "IsLoggedIn");

	Params::UPictureInPictureClient_IsLoggedIn_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PictureInPictureCore.PictureInPictureClient.GetQRCodeTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2DDynamic*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2DDynamic* UPictureInPictureClient::GetQRCodeTexture()
{
	static auto Func = Class->GetFunction("PictureInPictureClient", "GetQRCodeTexture");

	Params::UPictureInPictureClient_GetQRCodeTexture_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PictureInPictureCore.PictureInPictureClient.GetLoginState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EPictureInPictureAuthStateReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EPictureInPictureAuthState UPictureInPictureClient::GetLoginState()
{
	static auto Func = Class->GetFunction("PictureInPictureClient", "GetLoginState");

	Params::UPictureInPictureClient_GetLoginState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PictureInPictureCore.PictureInPictureClient.GetAvatarImage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEpicCMSImage*               ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEpicCMSImage* UPictureInPictureClient::GetAvatarImage()
{
	static auto Func = Class->GetFunction("PictureInPictureClient", "GetAvatarImage");

	Params::UPictureInPictureClient_GetAvatarImage_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PictureInPictureCore.PictureInPictureClient.EndLogin
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     InWorldContext                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPictureClient::EndLogin(class UObject* InWorldContext)
{
	static auto Func = Class->GetFunction("PictureInPictureClient", "EndLogin");

	Params::UPictureInPictureClient_EndLogin_Params Parms;

	Parms.InWorldContext = InWorldContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureClient.CheckLogin
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     InWorldContext                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPictureClient::CheckLogin(class UObject* InWorldContext)
{
	static auto Func = Class->GetFunction("PictureInPictureClient", "CheckLogin");

	Params::UPictureInPictureClient_CheckLogin_Params Parms;

	Parms.InWorldContext = InWorldContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureClient.BeginLogin
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     InWorldContext                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPictureClient::BeginLogin(class UObject* InWorldContext)
{
	static auto Func = Class->GetFunction("PictureInPictureClient", "BeginLogin");

	Params::UPictureInPictureClient_BeginLogin_Params Parms;

	Parms.InWorldContext = InWorldContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureCheatManager.SuspendPiP
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:

void UPictureInPictureCheatManager::SuspendPiP()
{
	static auto Func = Class->GetFunction("PictureInPictureCheatManager", "SuspendPiP");

	Params::UPictureInPictureCheatManager_SuspendPiP_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureCheatManager.ResumePiP
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:

void UPictureInPictureCheatManager::ResumePiP()
{
	static auto Func = Class->GetFunction("PictureInPictureCheatManager", "ResumePiP");

	Params::UPictureInPictureCheatManager_ResumePiP_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureCheatManager.PrintPiPRegionInfo
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:

void UPictureInPictureCheatManager::PrintPiPRegionInfo()
{
	static auto Func = Class->GetFunction("PictureInPictureCheatManager", "PrintPiPRegionInfo");

	Params::UPictureInPictureCheatManager_PrintPiPRegionInfo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureCheatManager.EnablePiP
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:

void UPictureInPictureCheatManager::EnablePiP()
{
	static auto Func = Class->GetFunction("PictureInPictureCheatManager", "EnablePiP");

	Params::UPictureInPictureCheatManager_EnablePiP_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureCheatManager.DisablePiP
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:

void UPictureInPictureCheatManager::DisablePiP()
{
	static auto Func = Class->GetFunction("PictureInPictureCheatManager", "DisablePiP");

	Params::UPictureInPictureCheatManager_DisablePiP_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureCheatManager.CanEnablePartnerPIP
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:

void UPictureInPictureCheatManager::CanEnablePartnerPIP()
{
	static auto Func = Class->GetFunction("PictureInPictureCheatManager", "CanEnablePartnerPIP");

	Params::UPictureInPictureCheatManager_CanEnablePartnerPIP_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureMediaController.ToggleFullScreen
// (Final, Native, Public)
// Parameters:

void UPictureInPictureMediaController::ToggleFullScreen()
{
	static auto Func = Class->GetFunction("PictureInPictureMediaController", "ToggleFullScreen");

	Params::UPictureInPictureMediaController_ToggleFullScreen_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureMediaController.Stop
// (Native, Public, BlueprintCallable)
// Parameters:

void UPictureInPictureMediaController::Stop()
{
	static auto Func = Class->GetFunction("PictureInPictureMediaController", "Stop");

	Params::UPictureInPictureMediaController_Stop_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureMediaController.SetEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsEnabled                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsFromUser                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPictureMediaController::SetEnabled(bool bIsEnabled, bool bIsFromUser)
{
	static auto Func = Class->GetFunction("PictureInPictureMediaController", "SetEnabled");

	Params::UPictureInPictureMediaController_SetEnabled_Params Parms;

	Parms.bIsEnabled = bIsEnabled;
	Parms.bIsFromUser = bIsFromUser;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureMediaController.SetCurrentSource
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPiPPartnerSource           SelectedSource                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UPictureInPictureMediaController::SetCurrentSource(struct FPiPPartnerSource& SelectedSource)
{
	static auto Func = Class->GetFunction("PictureInPictureMediaController", "SetCurrentSource");

	Params::UPictureInPictureMediaController_SetCurrentSource_Params Parms;

	Parms.SelectedSource = SelectedSource;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureMediaController.Play
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bForcePlay                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPictureMediaController::Play(bool bForcePlay)
{
	static auto Func = Class->GetFunction("PictureInPictureMediaController", "Play");

	Params::UPictureInPictureMediaController_Play_Params Parms;

	Parms.bForcePlay = bForcePlay;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureMediaController.Pause
// (Native, Public, BlueprintCallable)
// Parameters:

void UPictureInPictureMediaController::Pause()
{
	static auto Func = Class->GetFunction("PictureInPictureMediaController", "Pause");

	Params::UPictureInPictureMediaController_Pause_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureMediaController.OnPrevThumbnailReceived
// (Final, Native, Private)
// Parameters:
// class UTexture2DDynamic*           InTexture                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPictureMediaController::OnPrevThumbnailReceived(class UTexture2DDynamic* InTexture)
{
	static auto Func = Class->GetFunction("PictureInPictureMediaController", "OnPrevThumbnailReceived");

	Params::UPictureInPictureMediaController_OnPrevThumbnailReceived_Params Parms;

	Parms.InTexture = InTexture;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureMediaController.OnNextThumbnailReceived
// (Final, Native, Private)
// Parameters:
// class UTexture2DDynamic*           InTexture                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPictureMediaController::OnNextThumbnailReceived(class UTexture2DDynamic* InTexture)
{
	static auto Func = Class->GetFunction("PictureInPictureMediaController", "OnNextThumbnailReceived");

	Params::UPictureInPictureMediaController_OnNextThumbnailReceived_Params Parms;

	Parms.InTexture = InTexture;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureMediaController.OnMediaStartedAnalytics
// (Final, Native, Private)
// Parameters:

void UPictureInPictureMediaController::OnMediaStartedAnalytics()
{
	static auto Func = Class->GetFunction("PictureInPictureMediaController", "OnMediaStartedAnalytics");

	Params::UPictureInPictureMediaController_OnMediaStartedAnalytics_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureMediaController.OnMediaResumedAnalytics
// (Final, Native, Private)
// Parameters:

void UPictureInPictureMediaController::OnMediaResumedAnalytics()
{
	static auto Func = Class->GetFunction("PictureInPictureMediaController", "OnMediaResumedAnalytics");

	Params::UPictureInPictureMediaController_OnMediaResumedAnalytics_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureMediaController.OnMediaPausedAnalytics
// (Final, Native, Private)
// Parameters:

void UPictureInPictureMediaController::OnMediaPausedAnalytics()
{
	static auto Func = Class->GetFunction("PictureInPictureMediaController", "OnMediaPausedAnalytics");

	Params::UPictureInPictureMediaController_OnMediaPausedAnalytics_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureMediaController.OnMediaClosedAnalytics
// (Final, Native, Private)
// Parameters:

void UPictureInPictureMediaController::OnMediaClosedAnalytics()
{
	static auto Func = Class->GetFunction("PictureInPictureMediaController", "OnMediaClosedAnalytics");

	Params::UPictureInPictureMediaController_OnMediaClosedAnalytics_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureMediaController.IsPlaying
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPictureInPictureMediaController::IsPlaying()
{
	static auto Func = Class->GetFunction("PictureInPictureMediaController", "IsPlaying");

	Params::UPictureInPictureMediaController_IsPlaying_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PictureInPictureCore.PictureInPictureMediaController.IsPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPictureInPictureMediaController::IsPaused()
{
	static auto Func = Class->GetFunction("PictureInPictureMediaController", "IsPaused");

	Params::UPictureInPictureMediaController_IsPaused_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PictureInPictureCore.PictureInPictureMediaController.IsMultiSourceSupported
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPictureInPictureMediaController::IsMultiSourceSupported()
{
	static auto Func = Class->GetFunction("PictureInPictureMediaController", "IsMultiSourceSupported");

	Params::UPictureInPictureMediaController_IsMultiSourceSupported_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PictureInPictureCore.PictureInPictureMediaController.IsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPictureInPictureMediaController::IsEnabled()
{
	static auto Func = Class->GetFunction("PictureInPictureMediaController", "IsEnabled");

	Params::UPictureInPictureMediaController_IsEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PictureInPictureCore.PictureInPictureMediaController.HandleSourceSelectedEvent
// (Native, Protected)
// Parameters:
// class FString                      SelectedSource                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPictureMediaController::HandleSourceSelectedEvent(const class FString& SelectedSource)
{
	static auto Func = Class->GetFunction("PictureInPictureMediaController", "HandleSourceSelectedEvent");

	Params::UPictureInPictureMediaController_HandleSourceSelectedEvent_Params Parms;

	Parms.SelectedSource = SelectedSource;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureMediaController.GetValidSources
// (Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FPiPPartnerSource>   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<struct FPiPPartnerSource> UPictureInPictureMediaController::GetValidSources()
{
	static auto Func = Class->GetFunction("PictureInPictureMediaController", "GetValidSources");

	Params::UPictureInPictureMediaController_GetValidSources_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PictureInPictureCore.PictureInPictureMediaController.GetSources
// (Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FPiPPartnerSource>   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<struct FPiPPartnerSource> UPictureInPictureMediaController::GetSources()
{
	static auto Func = Class->GetFunction("PictureInPictureMediaController", "GetSources");

	Params::UPictureInPictureMediaController_GetSources_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PictureInPictureCore.PictureInPictureMediaController.GetPlayerAssetConfig
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPIPVideoPlayerAssetConfig  ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FPIPVideoPlayerAssetConfig UPictureInPictureMediaController::GetPlayerAssetConfig()
{
	static auto Func = Class->GetFunction("PictureInPictureMediaController", "GetPlayerAssetConfig");

	Params::UPictureInPictureMediaController_GetPlayerAssetConfig_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PictureInPictureCore.PictureInPictureMediaController.GetMediaPlayerWidget
// (Final, Native, Public, Const)
// Parameters:
// class UPictureInPicturePlayer*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPictureInPicturePlayer* UPictureInPictureMediaController::GetMediaPlayerWidget()
{
	static auto Func = Class->GetFunction("PictureInPictureMediaController", "GetMediaPlayerWidget");

	Params::UPictureInPictureMediaController_GetMediaPlayerWidget_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PictureInPictureCore.PictureInPictureMediaController.GetDefaultPlayerAssetConfig
// (Final, Native, Public, Const)
// Parameters:
// struct FPIPVideoPlayerAssetConfig  ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FPIPVideoPlayerAssetConfig UPictureInPictureMediaController::GetDefaultPlayerAssetConfig()
{
	static auto Func = Class->GetFunction("PictureInPictureMediaController", "GetDefaultPlayerAssetConfig");

	Params::UPictureInPictureMediaController_GetDefaultPlayerAssetConfig_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PictureInPictureCore.PictureInPictureMediaController.GetCurrentSource
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FPiPPartnerSource           ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FPiPPartnerSource UPictureInPictureMediaController::GetCurrentSource()
{
	static auto Func = Class->GetFunction("PictureInPictureMediaController", "GetCurrentSource");

	Params::UPictureInPictureMediaController_GetCurrentSource_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PictureInPictureCore.PictureInPictureMediaController.GetActions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UPictureInPictureActionData*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UPictureInPictureActionData*> UPictureInPictureMediaController::GetActions()
{
	static auto Func = Class->GetFunction("PictureInPictureMediaController", "GetActions");

	Params::UPictureInPictureMediaController_GetActions_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PictureInPictureCore.PictureInPictureMediaController.Exit
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bStop                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPictureMediaController::Exit(bool bStop)
{
	static auto Func = Class->GetFunction("PictureInPictureMediaController", "Exit");

	Params::UPictureInPictureMediaController_Exit_Params Parms;

	Parms.bStop = bStop;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPicturePlayer.UpdateStreamingPlayerSize
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InVector                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPicturePlayer::UpdateStreamingPlayerSize(struct FVector2D& InVector)
{
	static auto Func = Class->GetFunction("PictureInPicturePlayer", "UpdateStreamingPlayerSize");

	Params::UPictureInPicturePlayer_UpdateStreamingPlayerSize_Params Parms;

	Parms.InVector = InVector;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPicturePlayer.StreamedVideoOnUrlSuccess
// (Final, Native, Private)
// Parameters:
// class FString                      URL                                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPicturePlayer::StreamedVideoOnUrlSuccess(const class FString& URL)
{
	static auto Func = Class->GetFunction("PictureInPicturePlayer", "StreamedVideoOnUrlSuccess");

	Params::UPictureInPicturePlayer_StreamedVideoOnUrlSuccess_Params Parms;

	Parms.URL = URL;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPicturePlayer.StreamedVideoOnUrlFailure
// (Final, Native, Private)
// Parameters:
// class FString                      URL                                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPicturePlayer::StreamedVideoOnUrlFailure(const class FString& URL)
{
	static auto Func = Class->GetFunction("PictureInPicturePlayer", "StreamedVideoOnUrlFailure");

	Params::UPictureInPicturePlayer_StreamedVideoOnUrlFailure_Params Parms;

	Parms.URL = URL;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPicturePlayer.SetPlayerAssetConfig
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPIPVideoPlayerAssetConfig  InAssetConfig                                                    (Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPictureInPicturePlayer::SetPlayerAssetConfig(struct FPIPVideoPlayerAssetConfig& InAssetConfig)
{
	static auto Func = Class->GetFunction("PictureInPicturePlayer", "SetPlayerAssetConfig");

	Params::UPictureInPicturePlayer_SetPlayerAssetConfig_Params Parms;

	Parms.InAssetConfig = InAssetConfig;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PictureInPictureCore.PictureInPicturePlayer.IsAssetConfigSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPictureInPicturePlayer::IsAssetConfigSet()
{
	static auto Func = Class->GetFunction("PictureInPicturePlayer", "IsAssetConfigSet");

	Params::UPictureInPicturePlayer_IsAssetConfigSet_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PictureInPictureCore.PictureInPicturePlayer.HandleUCPAudioChanged
// (Final, Native, Private)
// Parameters:
// class UFortClientSettingsRecord*   Settings                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPicturePlayer::HandleUCPAudioChanged(class UFortClientSettingsRecord* Settings)
{
	static auto Func = Class->GetFunction("PictureInPicturePlayer", "HandleUCPAudioChanged");

	Params::UPictureInPicturePlayer_HandleUCPAudioChanged_Params Parms;

	Parms.Settings = Settings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPicturePlayer.FlushPlayerAssetConfig
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UPictureInPicturePlayer::FlushPlayerAssetConfig()
{
	static auto Func = Class->GetFunction("PictureInPicturePlayer", "FlushPlayerAssetConfig");

	Params::UPictureInPicturePlayer_FlushPlayerAssetConfig_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureSubsystem.UpdatePartnerItemList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     InWorldContext                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForce                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPictureSubsystem::UpdatePartnerItemList(class UObject* InWorldContext, bool bForce)
{
	static auto Func = Class->GetFunction("PictureInPictureSubsystem", "UpdatePartnerItemList");

	Params::UPictureInPictureSubsystem_UpdatePartnerItemList_Params Parms;

	Parms.InWorldContext = InWorldContext;
	Parms.bForce = bForce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureSubsystem.ToggleFullScreenPiP
// (Final, Native, Public)
// Parameters:

void UPictureInPictureSubsystem::ToggleFullScreenPiP()
{
	static auto Func = Class->GetFunction("PictureInPictureSubsystem", "ToggleFullScreenPiP");

	Params::UPictureInPictureSubsystem_ToggleFullScreenPiP_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureSubsystem.SuspendCurrentMediaController
// (Final, Native, Public)
// Parameters:

void UPictureInPictureSubsystem::SuspendCurrentMediaController()
{
	static auto Func = Class->GetFunction("PictureInPictureSubsystem", "SuspendCurrentMediaController");

	Params::UPictureInPictureSubsystem_SuspendCurrentMediaController_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureSubsystem.StoreLastUsedSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InPartnerSourceName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPictureSubsystem::StoreLastUsedSource(const class FString& InPartnerSourceName)
{
	static auto Func = Class->GetFunction("PictureInPictureSubsystem", "StoreLastUsedSource");

	Params::UPictureInPictureSubsystem_StoreLastUsedSource_Params Parms;

	Parms.InPartnerSourceName = InPartnerSourceName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureSubsystem.StoreLastUsedPartner
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InPartnerName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPictureSubsystem::StoreLastUsedPartner(const class FString& InPartnerName)
{
	static auto Func = Class->GetFunction("PictureInPictureSubsystem", "StoreLastUsedPartner");

	Params::UPictureInPictureSubsystem_StoreLastUsedPartner_Params Parms;

	Parms.InPartnerName = InPartnerName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureSubsystem.StoreAutoEnableSetting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InUserEnabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPictureSubsystem::StoreAutoEnableSetting(bool InUserEnabled)
{
	static auto Func = Class->GetFunction("PictureInPictureSubsystem", "StoreAutoEnableSetting");

	Params::UPictureInPictureSubsystem_StoreAutoEnableSetting_Params Parms;

	Parms.InUserEnabled = InUserEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureSubsystem.ShutdownAllPartners
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UPictureInPictureSubsystem::ShutdownAllPartners()
{
	static auto Func = Class->GetFunction("PictureInPictureSubsystem", "ShutdownAllPartners");

	Params::UPictureInPictureSubsystem_ShutdownAllPartners_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureSubsystem.ResumeCurrentMediaController
// (Final, Native, Public)
// Parameters:

void UPictureInPictureSubsystem::ResumeCurrentMediaController()
{
	static auto Func = Class->GetFunction("PictureInPictureSubsystem", "ResumeCurrentMediaController");

	Params::UPictureInPictureSubsystem_ResumeCurrentMediaController_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureSubsystem.OnCurrentPartnerSourceSelected
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FPiPPartnerSource           SelectedSource                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UPictureInPictureSubsystem::OnCurrentPartnerSourceSelected(struct FPiPPartnerSource& SelectedSource)
{
	static auto Func = Class->GetFunction("PictureInPictureSubsystem", "OnCurrentPartnerSourceSelected");

	Params::UPictureInPictureSubsystem_OnCurrentPartnerSourceSelected_Params Parms;

	Parms.SelectedSource = SelectedSource;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureSubsystem.OnCMSEventValid
// (Final, Native, Private)
// Parameters:
// class UMediaCMSEvent*              ValidEvent                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPictureSubsystem::OnCMSEventValid(class UMediaCMSEvent* ValidEvent)
{
	static auto Func = Class->GetFunction("PictureInPictureSubsystem", "OnCMSEventValid");

	Params::UPictureInPictureSubsystem_OnCMSEventValid_Params Parms;

	Parms.ValidEvent = ValidEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureSubsystem.OnCMSEventInvalid
// (Final, Native, Private)
// Parameters:
// class UMediaCMSEvent*              InvalidEvent                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPictureSubsystem::OnCMSEventInvalid(class UMediaCMSEvent* InvalidEvent)
{
	static auto Func = Class->GetFunction("PictureInPictureSubsystem", "OnCMSEventInvalid");

	Params::UPictureInPictureSubsystem_OnCMSEventInvalid_Params Parms;

	Parms.InvalidEvent = InvalidEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureSubsystem.IsPartnerListUpdated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPictureInPictureSubsystem::IsPartnerListUpdated()
{
	static auto Func = Class->GetFunction("PictureInPictureSubsystem", "IsPartnerListUpdated");

	Params::UPictureInPictureSubsystem_IsPartnerListUpdated_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PictureInPictureCore.PictureInPictureSubsystem.HandleMediaSourceRequest
// (Final, Native, Private)
// Parameters:

void UPictureInPictureSubsystem::HandleMediaSourceRequest()
{
	static auto Func = Class->GetFunction("PictureInPictureSubsystem", "HandleMediaSourceRequest");

	Params::UPictureInPictureSubsystem_HandleMediaSourceRequest_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureSubsystem.HandleFNEventsSetCurrentMediaControllerEnabled
// (Final, Native, Private)
// Parameters:
// bool                               InEnabled                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPictureSubsystem::HandleFNEventsSetCurrentMediaControllerEnabled(bool InEnabled)
{
	static auto Func = Class->GetFunction("PictureInPictureSubsystem", "HandleFNEventsSetCurrentMediaControllerEnabled");

	Params::UPictureInPictureSubsystem_HandleFNEventsSetCurrentMediaControllerEnabled_Params Parms;

	Parms.InEnabled = InEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PictureInPictureCore.PictureInPictureSubsystem.GetPartnerItemList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UPictureInPicturePartnerDataAsset*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UPictureInPicturePartnerDataAsset*> UPictureInPictureSubsystem::GetPartnerItemList()
{
	static auto Func = Class->GetFunction("PictureInPictureSubsystem", "GetPartnerItemList");

	Params::UPictureInPictureSubsystem_GetPartnerItemList_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PictureInPictureCore.PictureInPictureSubsystem.GetPartnerItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PartnerName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPictureInPicturePartnerDataAsset*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPictureInPicturePartnerDataAsset* UPictureInPictureSubsystem::GetPartnerItem(const class FString& PartnerName)
{
	static auto Func = Class->GetFunction("PictureInPictureSubsystem", "GetPartnerItem");

	Params::UPictureInPictureSubsystem_GetPartnerItem_Params Parms;

	Parms.PartnerName = PartnerName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PictureInPictureCore.PictureInPictureSubsystem.GetPartnerControls
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PartnerName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPictureInPicturePartnerControls*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPictureInPicturePartnerControls* UPictureInPictureSubsystem::GetPartnerControls(const class FString& PartnerName)
{
	static auto Func = Class->GetFunction("PictureInPictureSubsystem", "GetPartnerControls");

	Params::UPictureInPictureSubsystem_GetPartnerControls_Params Parms;

	Parms.PartnerName = PartnerName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PictureInPictureCore.PictureInPictureSubsystem.GetPartnerController
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PartnerName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPictureInPictureMediaController*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPictureInPictureMediaController* UPictureInPictureSubsystem::GetPartnerController(const class FString& PartnerName)
{
	static auto Func = Class->GetFunction("PictureInPictureSubsystem", "GetPartnerController");

	Params::UPictureInPictureSubsystem_GetPartnerController_Params Parms;

	Parms.PartnerName = PartnerName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PictureInPictureCore.PictureInPictureSubsystem.GetPartnerClient
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PartnerName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPictureInPictureClient*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPictureInPictureClient* UPictureInPictureSubsystem::GetPartnerClient(const class FString& PartnerName)
{
	static auto Func = Class->GetFunction("PictureInPictureSubsystem", "GetPartnerClient");

	Params::UPictureInPictureSubsystem_GetPartnerClient_Params Parms;

	Parms.PartnerName = PartnerName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PictureInPictureCore.PictureInPictureSubsystem.GetLastUsedSource
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      OutPartnerSourceName                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPictureSubsystem::GetLastUsedSource(class FString* OutPartnerSourceName)
{
	static auto Func = Class->GetFunction("PictureInPictureSubsystem", "GetLastUsedSource");

	Params::UPictureInPictureSubsystem_GetLastUsedSource_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutPartnerSourceName != nullptr)
		*OutPartnerSourceName = Parms.OutPartnerSourceName;

}


// Function PictureInPictureCore.PictureInPictureSubsystem.GetLastUsedPartner
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      OutPartnerName                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPictureSubsystem::GetLastUsedPartner(class FString* OutPartnerName)
{
	static auto Func = Class->GetFunction("PictureInPictureSubsystem", "GetLastUsedPartner");

	Params::UPictureInPictureSubsystem_GetLastUsedPartner_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutPartnerName != nullptr)
		*OutPartnerName = Parms.OutPartnerName;

}


// Function PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPictureInPicturePartnerDataAsset*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPictureInPicturePartnerDataAsset* UPictureInPictureSubsystem::GetCurrentPartnerItem()
{
	static auto Func = Class->GetFunction("PictureInPictureSubsystem", "GetCurrentPartnerItem");

	Params::UPictureInPictureSubsystem_GetCurrentPartnerItem_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerControls
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPictureInPicturePartnerControls*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPictureInPicturePartnerControls* UPictureInPictureSubsystem::GetCurrentPartnerControls()
{
	static auto Func = Class->GetFunction("PictureInPictureSubsystem", "GetCurrentPartnerControls");

	Params::UPictureInPictureSubsystem_GetCurrentPartnerControls_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerController
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPictureInPictureMediaController*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPictureInPictureMediaController* UPictureInPictureSubsystem::GetCurrentPartnerController()
{
	static auto Func = Class->GetFunction("PictureInPictureSubsystem", "GetCurrentPartnerController");

	Params::UPictureInPictureSubsystem_GetCurrentPartnerController_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerClient
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPictureInPictureClient*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPictureInPictureClient* UPictureInPictureSubsystem::GetCurrentPartnerClient()
{
	static auto Func = Class->GetFunction("PictureInPictureSubsystem", "GetCurrentPartnerClient");

	Params::UPictureInPictureSubsystem_GetCurrentPartnerClient_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PictureInPictureCore.PictureInPictureSubsystem.GetAutoEnableSetting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPictureInPictureSubsystem::GetAutoEnableSetting()
{
	static auto Func = Class->GetFunction("PictureInPictureSubsystem", "GetAutoEnableSetting");

	Params::UPictureInPictureSubsystem_GetAutoEnableSetting_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PictureInPictureCore.PictureInPictureSubsystem.EnableFullScreenPiPOption
// (Final, Native, Public)
// Parameters:
// bool                               bEnable                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPictureSubsystem::EnableFullScreenPiPOption(bool bEnable)
{
	static auto Func = Class->GetFunction("PictureInPictureSubsystem", "EnableFullScreenPiPOption");

	Params::UPictureInPictureSubsystem_EnableFullScreenPiPOption_Params Parms;

	Parms.bEnable = bEnable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
