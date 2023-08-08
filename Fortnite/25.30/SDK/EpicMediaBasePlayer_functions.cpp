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


// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.Stop
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bRelease                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopPlayer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicBaseStreamingVideo::Stop(bool bRelease, bool bStopPlayer)
{
	static auto Func = Class->GetFunction("EpicBaseStreamingVideo", "Stop");

	Params::UEpicBaseStreamingVideo_Stop_Params Parms;

	Parms.bRelease = bRelease;
	Parms.bStopPlayer = bStopPlayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.Start
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVUID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMediaTexture*               InVideoTexture                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicBaseStreamingVideo::Start(const class FString& InVUID, class UMediaTexture* InVideoTexture)
{
	static auto Func = Class->GetFunction("EpicBaseStreamingVideo", "Start");

	Params::UEpicBaseStreamingVideo_Start_Params Parms;

	Parms.InVUID = InVUID;
	Parms.InVideoTexture = InVideoTexture;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.SetVideoSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Width                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicBaseStreamingVideo::SetVideoSize(int32 Width, int32 Height)
{
	static auto Func = Class->GetFunction("EpicBaseStreamingVideo", "SetVideoSize");

	Params::UEpicBaseStreamingVideo_SetVideoSize_Params Parms;

	Parms.Width = Width;
	Parms.Height = Height;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.SetSyncTimes
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDateTime                   InNowTime                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime                   InStartTime                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               DynamicStart                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InOffset_s                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InDelay_s                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicBaseStreamingVideo::SetSyncTimes(const struct FDateTime& InNowTime, const struct FDateTime& InStartTime, bool DynamicStart, float InOffset_s, float InDelay_s)
{
	static auto Func = Class->GetFunction("EpicBaseStreamingVideo", "SetSyncTimes");

	Params::UEpicBaseStreamingVideo_SetSyncTimes_Params Parms;

	Parms.InNowTime = InNowTime;
	Parms.InStartTime = InStartTime;
	Parms.DynamicStart = DynamicStart;
	Parms.InOffset_s = InOffset_s;
	Parms.InDelay_s = InDelay_s;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.SetSoundSubmixes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaSoundComponent*        InSoundComponent                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundSubmixBase*            InDefault                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundSubmixBase*            InLicensed                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicBaseStreamingVideo::SetSoundSubmixes(class UMediaSoundComponent* InSoundComponent, class USoundSubmixBase* InDefault, class USoundSubmixBase* InLicensed)
{
	static auto Func = Class->GetFunction("EpicBaseStreamingVideo", "SetSoundSubmixes");

	Params::UEpicBaseStreamingVideo_SetSoundSubmixes_Params Parms;

	Parms.InSoundComponent = InSoundComponent;
	Parms.InDefault = InDefault;
	Parms.InLicensed = InLicensed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.SetOpenTimeout
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// double                             InTimeoutTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicBaseStreamingVideo::SetOpenTimeout(double InTimeoutTime)
{
	static auto Func = Class->GetFunction("EpicBaseStreamingVideo", "SetOpenTimeout");

	Params::UEpicBaseStreamingVideo_SetOpenTimeout_Params Parms;

	Parms.InTimeoutTime = InTimeoutTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.RetryOnError
// (Final, Native, Private)
// Parameters:
// bool                               bFromPlayer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEpicBaseStreamingVideo::RetryOnError(bool bFromPlayer)
{
	static auto Func = Class->GetFunction("EpicBaseStreamingVideo", "RetryOnError");

	Params::UEpicBaseStreamingVideo_RetryOnError_Params Parms;

	Parms.bFromPlayer = bFromPlayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.Release
// (Native, Public, BlueprintCallable)
// Parameters:

void UEpicBaseStreamingVideo::Release()
{
	static auto Func = Class->GetFunction("EpicBaseStreamingVideo", "Release");

	Params::UEpicBaseStreamingVideo_Release_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.Open
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FMediaPlayerOptions         InMediaOptions                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEpicBaseStreamingVideo::Open(const struct FMediaPlayerOptions& InMediaOptions)
{
	static auto Func = Class->GetFunction("EpicBaseStreamingVideo", "Open");

	Params::UEpicBaseStreamingVideo_Open_Params Parms;

	Parms.InMediaOptions = InMediaOptions;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.OnSuccessfulURL
// (Final, Native, Private)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicBaseStreamingVideo::OnSuccessfulURL(const class FString& URL)
{
	static auto Func = Class->GetFunction("EpicBaseStreamingVideo", "OnSuccessfulURL");

	Params::UEpicBaseStreamingVideo_OnSuccessfulURL_Params Parms;

	Parms.URL = URL;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.OnFailedURL
// (Final, Native, Private)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicBaseStreamingVideo::OnFailedURL(const class FString& URL)
{
	static auto Func = Class->GetFunction("EpicBaseStreamingVideo", "OnFailedURL");

	Params::UEpicBaseStreamingVideo_OnFailedURL_Params Parms;

	Parms.URL = URL;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.Init
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMediaTexture*               InVideoTexture                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMediaPlayer*                InMediaPlayer                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEpicStreamMediaSource*      InMediaSource                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InCDNFailover                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEpicBaseStreamingVideo::Init(class UMediaTexture* InVideoTexture, class UMediaPlayer* InMediaPlayer, class UEpicStreamMediaSource* InMediaSource, bool InCDNFailover)
{
	static auto Func = Class->GetFunction("EpicBaseStreamingVideo", "Init");

	Params::UEpicBaseStreamingVideo_Init_Params Parms;

	Parms.InVideoTexture = InVideoTexture;
	Parms.InMediaPlayer = InMediaPlayer;
	Parms.InMediaSource = InMediaSource;
	Parms.InCDNFailover = InCDNFailover;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleMediaResumed
// (Native, Protected)
// Parameters:

void UEpicBaseStreamingVideo::HandleMediaResumed()
{
	static auto Func = Class->GetFunction("EpicBaseStreamingVideo", "HandleMediaResumed");

	Params::UEpicBaseStreamingVideo_HandleMediaResumed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleMediaOpenedFailed
// (Final, Native, Protected)
// Parameters:
// class FString                      FailedUrl                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicBaseStreamingVideo::HandleMediaOpenedFailed(const class FString& FailedUrl)
{
	static auto Func = Class->GetFunction("EpicBaseStreamingVideo", "HandleMediaOpenedFailed");

	Params::UEpicBaseStreamingVideo_HandleMediaOpenedFailed_Params Parms;

	Parms.FailedUrl = FailedUrl;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleMediaOpened
// (Final, Native, Protected)
// Parameters:
// class FString                      OpenedUrl                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicBaseStreamingVideo::HandleMediaOpened(const class FString& OpenedUrl)
{
	static auto Func = Class->GetFunction("EpicBaseStreamingVideo", "HandleMediaOpened");

	Params::UEpicBaseStreamingVideo_HandleMediaOpened_Params Parms;

	Parms.OpenedUrl = OpenedUrl;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleMediaEndReached
// (Final, Native, Protected)
// Parameters:

void UEpicBaseStreamingVideo::HandleMediaEndReached()
{
	static auto Func = Class->GetFunction("EpicBaseStreamingVideo", "HandleMediaEndReached");

	Params::UEpicBaseStreamingVideo_HandleMediaEndReached_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleMediaClosed
// (Final, Native, Protected)
// Parameters:

void UEpicBaseStreamingVideo::HandleMediaClosed()
{
	static auto Func = Class->GetFunction("EpicBaseStreamingVideo", "HandleMediaClosed");

	Params::UEpicBaseStreamingVideo_HandleMediaClosed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleLicensedAudioTreatmentChanged
// (Final, Native, Private)
// Parameters:
// enum class EUCPTypes               UCPType                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicBaseStreamingVideo::HandleLicensedAudioTreatmentChanged(enum class EUCPTypes UCPType)
{
	static auto Func = Class->GetFunction("EpicBaseStreamingVideo", "HandleLicensedAudioTreatmentChanged");

	Params::UEpicBaseStreamingVideo_HandleLicensedAudioTreatmentChanged_Params Parms;

	Parms.UCPType = UCPType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.GetSoundComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaSoundComponent*        ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMediaSoundComponent* UEpicBaseStreamingVideo::GetSoundComponent()
{
	static auto Func = Class->GetFunction("EpicBaseStreamingVideo", "GetSoundComponent");

	Params::UEpicBaseStreamingVideo_GetSoundComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.GetMediaSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEpicStreamMediaSource*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEpicStreamMediaSource* UEpicBaseStreamingVideo::GetMediaSource()
{
	static auto Func = Class->GetFunction("EpicBaseStreamingVideo", "GetMediaSource");

	Params::UEpicBaseStreamingVideo_GetMediaSource_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.GetMediaPlayerOptions
// (Native, Public)
// Parameters:
// struct FMediaPlayerOptions         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FMediaPlayerOptions UEpicBaseStreamingVideo::GetMediaPlayerOptions()
{
	static auto Func = Class->GetFunction("EpicBaseStreamingVideo", "GetMediaPlayerOptions");

	Params::UEpicBaseStreamingVideo_GetMediaPlayerOptions_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.GetMediaPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlayer*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMediaPlayer* UEpicBaseStreamingVideo::GetMediaPlayer()
{
	static auto Func = Class->GetFunction("EpicBaseStreamingVideo", "GetMediaPlayer");

	Params::UEpicBaseStreamingVideo_GetMediaPlayer_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EpicMediaBasePlayer.EpicBaseStreamingVideo.ClearSyncTimes
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UEpicBaseStreamingVideo::ClearSyncTimes()
{
	static auto Func = Class->GetFunction("EpicBaseStreamingVideo", "ClearSyncTimes");

	Params::UEpicBaseStreamingVideo_ClearSyncTimes_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
