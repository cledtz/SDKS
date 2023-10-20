#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MediaFrameworkUtilities.MediaBundle
// (None)

class UClass* UMediaBundle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MediaBundle");

	return Clss;
}


// MediaBundle MediaFrameworkUtilities.Default__MediaBundle
// (Public, ClassDefaultObject, ArchetypeObject)

class UMediaBundle* UMediaBundle::GetDefaultObj()
{
	static class UMediaBundle* Default = nullptr;

	if (!Default)
		Default = static_cast<UMediaBundle*>(UMediaBundle::StaticClass()->DefaultObject);

	return Default;
}


// Function MediaFrameworkUtilities.MediaBundle.OnMediaOpenOpened
// (Final, Native, Private)
// Parameters:
// class FString                      DeviceUrl                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMediaBundle::OnMediaOpenOpened(const class FString& DeviceUrl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaBundle", "OnMediaOpenOpened");

	Params::UMediaBundle_OnMediaOpenOpened_Params Parms{};

	Parms.DeviceUrl = DeviceUrl;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaFrameworkUtilities.MediaBundle.OnMediaOpenFailed
// (Final, Native, Private)
// Parameters:
// class FString                      DeviceUrl                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMediaBundle::OnMediaOpenFailed(const class FString& DeviceUrl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaBundle", "OnMediaOpenFailed");

	Params::UMediaBundle_OnMediaOpenFailed_Params Parms{};

	Parms.DeviceUrl = DeviceUrl;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaFrameworkUtilities.MediaBundle.OnMediaClosed
// (Final, Native, Private)
// Parameters:

void UMediaBundle::OnMediaClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaBundle", "OnMediaClosed");

	Params::UMediaBundle_OnMediaClosed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaFrameworkUtilities.MediaBundle.GetUndistortedCameraViewInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FOpenCVCameraViewInfo       ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FOpenCVCameraViewInfo UMediaBundle::GetUndistortedCameraViewInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaBundle", "GetUndistortedCameraViewInfo");

	Params::UMediaBundle_GetUndistortedCameraViewInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MediaFrameworkUtilities.MediaBundle.GetMediaTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaTexture*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMediaTexture* UMediaBundle::GetMediaTexture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaBundle", "GetMediaTexture");

	Params::UMediaBundle_GetMediaTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MediaFrameworkUtilities.MediaBundle.GetMediaSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaSource*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMediaSource* UMediaBundle::GetMediaSource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaBundle", "GetMediaSource");

	Params::UMediaBundle_GetMediaSource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MediaFrameworkUtilities.MediaBundle.GetMediaPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlayer*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMediaPlayer* UMediaBundle::GetMediaPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaBundle", "GetMediaPlayer");

	Params::UMediaBundle_GetMediaPlayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MediaFrameworkUtilities.MediaBundle.GetMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInterface* UMediaBundle::GetMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaBundle", "GetMaterial");

	Params::UMediaBundle_GetMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MediaFrameworkUtilities.MediaBundle.GetLensDisplacementTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTextureRenderTarget2D* UMediaBundle::GetLensDisplacementTexture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaBundle", "GetLensDisplacementTexture");

	Params::UMediaBundle_GetLensDisplacementTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MediaFrameworkUtilities.MediaBundleActorBase
// (Actor)

class UClass* UMediaBundleActorBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MediaBundleActorBase");

	return Clss;
}


// MediaBundleActorBase MediaFrameworkUtilities.Default__MediaBundleActorBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMediaBundleActorBase* UMediaBundleActorBase::GetDefaultObj()
{
	static class UMediaBundleActorBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMediaBundleActorBase*>(UMediaBundleActorBase::StaticClass()->DefaultObject);

	return Default;
}


// Function MediaFrameworkUtilities.MediaBundleActorBase.SetComponent
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         InPrimitive                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMediaSoundComponent*        InMediaSound                                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMediaBundleActorBase::SetComponent(class UPrimitiveComponent* InPrimitive, class UMediaSoundComponent* InMediaSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaBundleActorBase", "SetComponent");

	Params::UMediaBundleActorBase_SetComponent_Params Parms{};

	Parms.InPrimitive = InPrimitive;
	Parms.InMediaSound = InMediaSound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaFrameworkUtilities.MediaBundleActorBase.RequestOpenMediaSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaBundleActorBase::RequestOpenMediaSource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaBundleActorBase", "RequestOpenMediaSource");

	Params::UMediaBundleActorBase_RequestOpenMediaSource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MediaFrameworkUtilities.MediaBundleActorBase.RequestCloseMediaSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMediaBundleActorBase::RequestCloseMediaSource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaBundleActorBase", "RequestCloseMediaSource");

	Params::UMediaBundleActorBase_RequestCloseMediaSource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaFrameworkUtilities.MediaBundleActorBase.GetMediaBundle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaBundle*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMediaBundle* UMediaBundleActorBase::GetMediaBundle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaBundleActorBase", "GetMediaBundle");

	Params::UMediaBundleActorBase_GetMediaBundle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MediaFrameworkUtilities.MediaBundleTimeSynchronizationSource
// (None)

class UClass* UMediaBundleTimeSynchronizationSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MediaBundleTimeSynchronizationSource");

	return Clss;
}


// MediaBundleTimeSynchronizationSource MediaFrameworkUtilities.Default__MediaBundleTimeSynchronizationSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UMediaBundleTimeSynchronizationSource* UMediaBundleTimeSynchronizationSource::GetDefaultObj()
{
	static class UMediaBundleTimeSynchronizationSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UMediaBundleTimeSynchronizationSource*>(UMediaBundleTimeSynchronizationSource::StaticClass()->DefaultObject);

	return Default;
}


// Class MediaFrameworkUtilities.MediaPlayerTimeSynchronizationSource
// (None)

class UClass* UMediaPlayerTimeSynchronizationSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MediaPlayerTimeSynchronizationSource");

	return Clss;
}


// MediaPlayerTimeSynchronizationSource MediaFrameworkUtilities.Default__MediaPlayerTimeSynchronizationSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UMediaPlayerTimeSynchronizationSource* UMediaPlayerTimeSynchronizationSource::GetDefaultObj()
{
	static class UMediaPlayerTimeSynchronizationSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UMediaPlayerTimeSynchronizationSource*>(UMediaPlayerTimeSynchronizationSource::StaticClass()->DefaultObject);

	return Default;
}


// Class MediaFrameworkUtilities.MediaProfile
// (None)

class UClass* UMediaProfile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MediaProfile");

	return Clss;
}


// MediaProfile MediaFrameworkUtilities.Default__MediaProfile
// (Public, ClassDefaultObject, ArchetypeObject)

class UMediaProfile* UMediaProfile::GetDefaultObj()
{
	static class UMediaProfile* Default = nullptr;

	if (!Default)
		Default = static_cast<UMediaProfile*>(UMediaProfile::StaticClass()->DefaultObject);

	return Default;
}


// Class MediaFrameworkUtilities.MediaProfileBlueprintLibrary
// (None)

class UClass* UMediaProfileBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MediaProfileBlueprintLibrary");

	return Clss;
}


// MediaProfileBlueprintLibrary MediaFrameworkUtilities.Default__MediaProfileBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMediaProfileBlueprintLibrary* UMediaProfileBlueprintLibrary::GetDefaultObj()
{
	static class UMediaProfileBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMediaProfileBlueprintLibrary*>(UMediaProfileBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MediaFrameworkUtilities.MediaProfileBlueprintLibrary.SetMediaProfile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMediaProfile*               MediaProfile                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMediaProfileBlueprintLibrary::SetMediaProfile(class UMediaProfile* MediaProfile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaProfileBlueprintLibrary", "SetMediaProfile");

	Params::UMediaProfileBlueprintLibrary_SetMediaProfile_Params Parms{};

	Parms.MediaProfile = MediaProfile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MediaFrameworkUtilities.MediaProfileBlueprintLibrary.GetMediaProfile
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMediaProfile*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMediaProfile* UMediaProfileBlueprintLibrary::GetMediaProfile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaProfileBlueprintLibrary", "GetMediaProfile");

	Params::UMediaProfileBlueprintLibrary_GetMediaProfile_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MediaFrameworkUtilities.MediaProfileBlueprintLibrary.GetAllMediaSourceProxy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UProxyMediaSource*>   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UProxyMediaSource*> UMediaProfileBlueprintLibrary::GetAllMediaSourceProxy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaProfileBlueprintLibrary", "GetAllMediaSourceProxy");

	Params::UMediaProfileBlueprintLibrary_GetAllMediaSourceProxy_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MediaFrameworkUtilities.MediaProfileBlueprintLibrary.GetAllMediaOutputProxy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UProxyMediaOutput*>   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UProxyMediaOutput*> UMediaProfileBlueprintLibrary::GetAllMediaOutputProxy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaProfileBlueprintLibrary", "GetAllMediaOutputProxy");

	Params::UMediaProfileBlueprintLibrary_GetAllMediaOutputProxy_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MediaFrameworkUtilities.MediaProfileSettings
// (None)

class UClass* UMediaProfileSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MediaProfileSettings");

	return Clss;
}


// MediaProfileSettings MediaFrameworkUtilities.Default__MediaProfileSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMediaProfileSettings* UMediaProfileSettings::GetDefaultObj()
{
	static class UMediaProfileSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMediaProfileSettings*>(UMediaProfileSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MediaFrameworkUtilities.MediaProfileEditorSettings
// (None)

class UClass* UMediaProfileEditorSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MediaProfileEditorSettings");

	return Clss;
}


// MediaProfileEditorSettings MediaFrameworkUtilities.Default__MediaProfileEditorSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMediaProfileEditorSettings* UMediaProfileEditorSettings::GetDefaultObj()
{
	static class UMediaProfileEditorSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMediaProfileEditorSettings*>(UMediaProfileEditorSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MediaFrameworkUtilities.ProxyMediaOutput
// (None)

class UClass* UProxyMediaOutput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProxyMediaOutput");

	return Clss;
}


// ProxyMediaOutput MediaFrameworkUtilities.Default__ProxyMediaOutput
// (Public, ClassDefaultObject, ArchetypeObject)

class UProxyMediaOutput* UProxyMediaOutput::GetDefaultObj()
{
	static class UProxyMediaOutput* Default = nullptr;

	if (!Default)
		Default = static_cast<UProxyMediaOutput*>(UProxyMediaOutput::StaticClass()->DefaultObject);

	return Default;
}


// Function MediaFrameworkUtilities.ProxyMediaOutput.IsProxyValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UProxyMediaOutput::IsProxyValid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProxyMediaOutput", "IsProxyValid");

	Params::UProxyMediaOutput_IsProxyValid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MediaFrameworkUtilities.ProxyMediaSource
// (None)

class UClass* UProxyMediaSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProxyMediaSource");

	return Clss;
}


// ProxyMediaSource MediaFrameworkUtilities.Default__ProxyMediaSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UProxyMediaSource* UProxyMediaSource::GetDefaultObj()
{
	static class UProxyMediaSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UProxyMediaSource*>(UProxyMediaSource::StaticClass()->DefaultObject);

	return Default;
}


// Function MediaFrameworkUtilities.ProxyMediaSource.IsProxyValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UProxyMediaSource::IsProxyValid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProxyMediaSource", "IsProxyValid");

	Params::UProxyMediaSource_IsProxyValid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


