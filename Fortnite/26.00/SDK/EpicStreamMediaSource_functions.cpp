#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class EpicStreamMediaSource.EpicStreamMediaSource
// (None)

class UClass* UEpicStreamMediaSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EpicStreamMediaSource");

	return Clss;
}


// EpicStreamMediaSource EpicStreamMediaSource.Default__EpicStreamMediaSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UEpicStreamMediaSource* UEpicStreamMediaSource::GetDefaultObj()
{
	static class UEpicStreamMediaSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UEpicStreamMediaSource*>(UEpicStreamMediaSource::StaticClass()->DefaultObject);

	return Default;
}


// Function EpicStreamMediaSource.EpicStreamMediaSource.UpdateStreamUrlArguments
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UEpicStreamMediaSource::UpdateStreamUrlArguments()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicStreamMediaSource", "UpdateStreamUrlArguments");

	Params::UEpicStreamMediaSource_UpdateStreamUrlArguments_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EpicStreamMediaSource.EpicStreamMediaSource.UpdatePlayerOptions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMediaPlayerOptions         PlayerOptions                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FMediaPlayerOptions         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FMediaPlayerOptions UEpicStreamMediaSource::UpdatePlayerOptions(const struct FMediaPlayerOptions& PlayerOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicStreamMediaSource", "UpdatePlayerOptions");

	Params::UEpicStreamMediaSource_UpdatePlayerOptions_Params Parms{};

	Parms.PlayerOptions = PlayerOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicStreamMediaSource.EpicStreamMediaSource.ShouldStreamBePlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         PrimitiveComponent                                               (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CullRadius                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEpicStreamMediaSource::ShouldStreamBePlaying(class UObject* WorldContextObject, class UPrimitiveComponent* PrimitiveComponent, float CullRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicStreamMediaSource", "ShouldStreamBePlaying");

	Params::UEpicStreamMediaSource_ShouldStreamBePlaying_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PrimitiveComponent = PrimitiveComponent;
	Parms.CullRadius = CullRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicStreamMediaSource.EpicStreamMediaSource.ShouldProtectPlayerFromContent
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUCPTypes               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EUCPTypes UEpicStreamMediaSource::ShouldProtectPlayerFromContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicStreamMediaSource", "ShouldProtectPlayerFromContent");

	Params::UEpicStreamMediaSource_ShouldProtectPlayerFromContent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicStreamMediaSource.EpicStreamMediaSource.SetUrl
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      InURL                                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicStreamMediaSource::SetUrl(class FString& InURL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicStreamMediaSource", "SetUrl");

	Params::UEpicStreamMediaSource_SetUrl_Params Parms{};

	Parms.InURL = InURL;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EpicStreamMediaSource.EpicStreamMediaSource.SetSyncTimes
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDateTime                   InNowTime                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime                   InStartTime                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               DynamicStart                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InOffset_s                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InDelay_s                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicStreamMediaSource::SetSyncTimes(const struct FDateTime& InNowTime, const struct FDateTime& InStartTime, bool DynamicStart, float InOffset_s, float InDelay_s)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicStreamMediaSource", "SetSyncTimes");

	Params::UEpicStreamMediaSource_SetSyncTimes_Params Parms{};

	Parms.InNowTime = InNowTime;
	Parms.InStartTime = InStartTime;
	Parms.DynamicStart = DynamicStart;
	Parms.InOffset_s = InOffset_s;
	Parms.InDelay_s = InDelay_s;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EpicStreamMediaSource.EpicStreamMediaSource.SetPlaybackStartTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              StartTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicStreamMediaSource::SetPlaybackStartTime(float StartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicStreamMediaSource", "SetPlaybackStartTime");

	Params::UEpicStreamMediaSource_SetPlaybackStartTime_Params Parms{};

	Parms.StartTime = StartTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EpicStreamMediaSource.EpicStreamMediaSource.SetLocalizedOverlaysV2
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEpicMediaDownloadLocalizedOverlays*InOverlays                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicStreamMediaSource::SetLocalizedOverlaysV2(class UEpicMediaDownloadLocalizedOverlays* InOverlays)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicStreamMediaSource", "SetLocalizedOverlaysV2");

	Params::UEpicStreamMediaSource_SetLocalizedOverlaysV2_Params Parms{};

	Parms.InOverlays = InOverlays;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EpicStreamMediaSource.EpicStreamMediaSource.RequestVideoUrl
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPlayerController*           FortPC                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicStreamMediaSource::RequestVideoUrl(class UPlayerController* FortPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicStreamMediaSource", "RequestVideoUrl");

	Params::UEpicStreamMediaSource_RequestVideoUrl_Params Parms{};

	Parms.FortPC = FortPC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EpicStreamMediaSource.EpicStreamMediaSource.ReinstateSharing
// (Native, Public, BlueprintCallable)
// Parameters:

void UEpicStreamMediaSource::ReinstateSharing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicStreamMediaSource", "ReinstateSharing");

	Params::UEpicStreamMediaSource_ReinstateSharing_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EpicStreamMediaSource.EpicStreamMediaSource.MetadataResultHandler
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FEpicMediaMetadataExt       MetaData                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicStreamMediaSource::MetadataResultHandler(struct FEpicMediaMetadataExt& MetaData, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicStreamMediaSource", "MetadataResultHandler");

	Params::UEpicStreamMediaSource_MetadataResultHandler_Params Parms{};

	Parms.MetaData = MetaData;
	Parms.bSuccess = bSuccess;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EpicStreamMediaSource.EpicStreamMediaSource.IsScreenRecordingInProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEpicStreamMediaSource::IsScreenRecordingInProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicStreamMediaSource", "IsScreenRecordingInProgress");

	Params::UEpicStreamMediaSource_IsScreenRecordingInProgress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicStreamMediaSource.EpicStreamMediaSource.HasLocalFilePlayback
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEpicStreamMediaSource::HasLocalFilePlayback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicStreamMediaSource", "HasLocalFilePlayback");

	Params::UEpicStreamMediaSource_HasLocalFilePlayback_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicStreamMediaSource.EpicStreamMediaSource.DisableSharing
// (Native, Public, BlueprintCallable)
// Parameters:

void UEpicStreamMediaSource::DisableSharing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicStreamMediaSource", "DisableSharing");

	Params::UEpicStreamMediaSource_DisableSharing_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EpicStreamMediaSource.EpicStreamMediaSource.ClearSyncTimes
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UEpicStreamMediaSource::ClearSyncTimes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicStreamMediaSource", "ClearSyncTimes");

	Params::UEpicStreamMediaSource_ClearSyncTimes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EpicStreamMediaSource.EpicStreamMediaSource.CancelVideoUrlRequest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInCancelled                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicStreamMediaSource::CancelVideoUrlRequest(bool bInCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicStreamMediaSource", "CancelVideoUrlRequest");

	Params::UEpicStreamMediaSource_CancelVideoUrlRequest_Params Parms{};

	Parms.bInCancelled = bInCancelled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


