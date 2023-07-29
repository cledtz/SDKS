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


// Function MediaFrameworkUtilities.MediaBundle.OnMediaOpenOpened
// (Final, Native, Private)
// Parameters:
// class FString                      DeviceUrl                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMediaBundle::OnMediaOpenOpened(const class FString& DeviceUrl)
{
	static auto Func = Class->GetFunction("MediaBundle", "OnMediaOpenOpened");

	Params::UMediaBundle_OnMediaOpenOpened_Params Parms;

	Parms.DeviceUrl = DeviceUrl;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MediaFrameworkUtilities.MediaBundle.OnMediaOpenFailed
// (Final, Native, Private)
// Parameters:
// class FString                      DeviceUrl                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMediaBundle::OnMediaOpenFailed(const class FString& DeviceUrl)
{
	static auto Func = Class->GetFunction("MediaBundle", "OnMediaOpenFailed");

	Params::UMediaBundle_OnMediaOpenFailed_Params Parms;

	Parms.DeviceUrl = DeviceUrl;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MediaFrameworkUtilities.MediaBundle.OnMediaClosed
// (Final, Native, Private)
// Parameters:

void UMediaBundle::OnMediaClosed()
{
	static auto Func = Class->GetFunction("MediaBundle", "OnMediaClosed");

	Params::UMediaBundle_OnMediaClosed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MediaFrameworkUtilities.MediaBundle.GetUndistortedCameraViewInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FOpenCVCameraViewInfo       ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FOpenCVCameraViewInfo UMediaBundle::GetUndistortedCameraViewInfo()
{
	static auto Func = Class->GetFunction("MediaBundle", "GetUndistortedCameraViewInfo");

	Params::UMediaBundle_GetUndistortedCameraViewInfo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaFrameworkUtilities.MediaBundle.GetMediaTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaTexture*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMediaTexture* UMediaBundle::GetMediaTexture()
{
	static auto Func = Class->GetFunction("MediaBundle", "GetMediaTexture");

	Params::UMediaBundle_GetMediaTexture_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaFrameworkUtilities.MediaBundle.GetMediaSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaSource*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMediaSource* UMediaBundle::GetMediaSource()
{
	static auto Func = Class->GetFunction("MediaBundle", "GetMediaSource");

	Params::UMediaBundle_GetMediaSource_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaFrameworkUtilities.MediaBundle.GetMediaPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlayer*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMediaPlayer* UMediaBundle::GetMediaPlayer()
{
	static auto Func = Class->GetFunction("MediaBundle", "GetMediaPlayer");

	Params::UMediaBundle_GetMediaPlayer_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaFrameworkUtilities.MediaBundle.GetMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInterface* UMediaBundle::GetMaterial()
{
	static auto Func = Class->GetFunction("MediaBundle", "GetMaterial");

	Params::UMediaBundle_GetMaterial_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaFrameworkUtilities.MediaBundle.GetLensDisplacementTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTextureRenderTarget2D* UMediaBundle::GetLensDisplacementTexture()
{
	static auto Func = Class->GetFunction("MediaBundle", "GetLensDisplacementTexture");

	Params::UMediaBundle_GetLensDisplacementTexture_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaFrameworkUtilities.MediaBundleActorBase.SetComponent
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         InPrimitive                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMediaSoundComponent*        InMediaSound                                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMediaBundleActorBase::SetComponent(class UPrimitiveComponent* InPrimitive, class UMediaSoundComponent* InMediaSound)
{
	static auto Func = Class->GetFunction("MediaBundleActorBase", "SetComponent");

	Params::UMediaBundleActorBase_SetComponent_Params Parms;

	Parms.InPrimitive = InPrimitive;
	Parms.InMediaSound = InMediaSound;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MediaFrameworkUtilities.MediaBundleActorBase.RequestOpenMediaSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaBundleActorBase::RequestOpenMediaSource()
{
	static auto Func = Class->GetFunction("MediaBundleActorBase", "RequestOpenMediaSource");

	Params::UMediaBundleActorBase_RequestOpenMediaSource_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaFrameworkUtilities.MediaBundleActorBase.RequestCloseMediaSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMediaBundleActorBase::RequestCloseMediaSource()
{
	static auto Func = Class->GetFunction("MediaBundleActorBase", "RequestCloseMediaSource");

	Params::UMediaBundleActorBase_RequestCloseMediaSource_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MediaFrameworkUtilities.MediaBundleActorBase.GetMediaBundle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaBundle*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMediaBundle* UMediaBundleActorBase::GetMediaBundle()
{
	static auto Func = Class->GetFunction("MediaBundleActorBase", "GetMediaBundle");

	Params::UMediaBundleActorBase_GetMediaBundle_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaFrameworkUtilities.MediaProfileBlueprintLibrary.SetMediaProfile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMediaProfile*               MediaProfile                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMediaProfileBlueprintLibrary::SetMediaProfile(class UMediaProfile* MediaProfile)
{
	static auto Func = Class->GetFunction("MediaProfileBlueprintLibrary", "SetMediaProfile");

	Params::UMediaProfileBlueprintLibrary_SetMediaProfile_Params Parms;

	Parms.MediaProfile = MediaProfile;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MediaFrameworkUtilities.MediaProfileBlueprintLibrary.GetMediaProfile
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMediaProfile*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMediaProfile* UMediaProfileBlueprintLibrary::GetMediaProfile()
{
	static auto Func = Class->GetFunction("MediaProfileBlueprintLibrary", "GetMediaProfile");

	Params::UMediaProfileBlueprintLibrary_GetMediaProfile_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaFrameworkUtilities.MediaProfileBlueprintLibrary.GetAllMediaSourceProxy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UProxyMediaSource*>   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UProxyMediaSource*> UMediaProfileBlueprintLibrary::GetAllMediaSourceProxy()
{
	static auto Func = Class->GetFunction("MediaProfileBlueprintLibrary", "GetAllMediaSourceProxy");

	Params::UMediaProfileBlueprintLibrary_GetAllMediaSourceProxy_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaFrameworkUtilities.MediaProfileBlueprintLibrary.GetAllMediaOutputProxy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UProxyMediaOutput*>   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UProxyMediaOutput*> UMediaProfileBlueprintLibrary::GetAllMediaOutputProxy()
{
	static auto Func = Class->GetFunction("MediaProfileBlueprintLibrary", "GetAllMediaOutputProxy");

	Params::UMediaProfileBlueprintLibrary_GetAllMediaOutputProxy_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaFrameworkUtilities.ProxyMediaOutput.IsProxyValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UProxyMediaOutput::IsProxyValid()
{
	static auto Func = Class->GetFunction("ProxyMediaOutput", "IsProxyValid");

	Params::UProxyMediaOutput_IsProxyValid_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaFrameworkUtilities.ProxyMediaSource.IsProxyValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UProxyMediaSource::IsProxyValid()
{
	static auto Func = Class->GetFunction("ProxyMediaSource", "IsProxyValid");

	Params::UProxyMediaSource_IsProxyValid_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
