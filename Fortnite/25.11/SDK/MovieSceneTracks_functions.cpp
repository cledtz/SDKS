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


// Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UMovieSceneTransformOrigin::BP_GetTransformOrigin()
{
	static auto Func = Class->GetFunction("MovieSceneTransformOrigin", "BP_GetTransformOrigin");

	Params::UMovieSceneTransformOrigin_BP_GetTransformOrigin_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  InConstraintBindingID                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieScene3DConstraintSection::SetConstraintBindingID(struct FMovieSceneObjectBindingID& InConstraintBindingID)
{
	static auto Func = Class->GetFunction("MovieScene3DConstraintSection", "SetConstraintBindingID");

	Params::UMovieScene3DConstraintSection_SetConstraintBindingID_Params Parms;

	Parms.InConstraintBindingID = InConstraintBindingID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMovieSceneObjectBindingID  ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FMovieSceneObjectBindingID UMovieScene3DConstraintSection::GetConstraintBindingID()
{
	static auto Func = Class->GetFunction("MovieScene3DConstraintSection", "GetConstraintBindingID");

	Params::UMovieScene3DConstraintSection_GetConstraintBindingID_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneAudioSection.SetSuppressSubtitles
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInSuppressSubtitles                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneAudioSection::SetSuppressSubtitles(bool bInSuppressSubtitles)
{
	static auto Func = Class->GetFunction("MovieSceneAudioSection", "SetSuppressSubtitles");

	Params::UMovieSceneAudioSection_SetSuppressSubtitles_Params Parms;

	Parms.bInSuppressSubtitles = bInSuppressSubtitles;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                InStartOffset                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneAudioSection::SetStartOffset(const struct FFrameNumber& InStartOffset)
{
	static auto Func = Class->GetFunction("MovieSceneAudioSection", "SetStartOffset");

	Params::UMovieSceneAudioSection_SetStartOffset_Params Parms;

	Parms.InStartOffset = InStartOffset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieSceneTracks.MovieSceneAudioSection.SetSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*                  InSound                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneAudioSection::SetSound(class USoundBase* InSound)
{
	static auto Func = Class->GetFunction("MovieSceneAudioSection", "SetSound");

	Params::UMovieSceneAudioSection_SetSound_Params Parms;

	Parms.InSound = InSound;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieSceneTracks.MovieSceneAudioSection.SetOverrideAttenuation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInOverrideAttenuation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneAudioSection::SetOverrideAttenuation(bool bInOverrideAttenuation)
{
	static auto Func = Class->GetFunction("MovieSceneAudioSection", "SetOverrideAttenuation");

	Params::UMovieSceneAudioSection_SetOverrideAttenuation_Params Parms;

	Parms.bInOverrideAttenuation = bInOverrideAttenuation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieSceneTracks.MovieSceneAudioSection.SetLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInLooping                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneAudioSection::SetLooping(bool bInLooping)
{
	static auto Func = Class->GetFunction("MovieSceneAudioSection", "SetLooping");

	Params::UMovieSceneAudioSection_SetLooping_Params Parms;

	Parms.bInLooping = bInLooping;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieSceneTracks.MovieSceneAudioSection.SetAttenuationSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundAttenuation*           InAttenuationSettings                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneAudioSection::SetAttenuationSettings(class USoundAttenuation* InAttenuationSettings)
{
	static auto Func = Class->GetFunction("MovieSceneAudioSection", "SetAttenuationSettings");

	Params::UMovieSceneAudioSection_SetAttenuationSettings_Params Parms;

	Parms.InAttenuationSettings = InAttenuationSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieSceneTracks.MovieSceneAudioSection.GetSuppressSubtitles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneAudioSection::GetSuppressSubtitles()
{
	static auto Func = Class->GetFunction("MovieSceneAudioSection", "GetSuppressSubtitles");

	Params::UMovieSceneAudioSection_GetSuppressSubtitles_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFrameNumber                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFrameNumber UMovieSceneAudioSection::GetStartOffset()
{
	static auto Func = Class->GetFunction("MovieSceneAudioSection", "GetStartOffset");

	Params::UMovieSceneAudioSection_GetStartOffset_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneAudioSection.GetSound
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USoundBase*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundBase* UMovieSceneAudioSection::GetSound()
{
	static auto Func = Class->GetFunction("MovieSceneAudioSection", "GetSound");

	Params::UMovieSceneAudioSection_GetSound_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneAudioSection.GetOverrideAttenuation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneAudioSection::GetOverrideAttenuation()
{
	static auto Func = Class->GetFunction("MovieSceneAudioSection", "GetOverrideAttenuation");

	Params::UMovieSceneAudioSection_GetOverrideAttenuation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneAudioSection.GetLooping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneAudioSection::GetLooping()
{
	static auto Func = Class->GetFunction("MovieSceneAudioSection", "GetLooping");

	Params::UMovieSceneAudioSection_GetLooping_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneAudioSection.GetAttenuationSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USoundAttenuation*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundAttenuation* UMovieSceneAudioSection::GetAttenuationSettings()
{
	static auto Func = Class->GetFunction("MovieSceneAudioSection", "GetAttenuationSettings");

	Params::UMovieSceneAudioSection_GetAttenuationSettings_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  InCameraBindingID                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneCameraCutSection::SetCameraBindingID(struct FMovieSceneObjectBindingID& InCameraBindingID)
{
	static auto Func = Class->GetFunction("MovieSceneCameraCutSection", "SetCameraBindingID");

	Params::UMovieSceneCameraCutSection_SetCameraBindingID_Params Parms;

	Parms.InCameraBindingID = InCameraBindingID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMovieSceneObjectBindingID  ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FMovieSceneObjectBindingID UMovieSceneCameraCutSection::GetCameraBindingID()
{
	static auto Func = Class->GetFunction("MovieSceneCameraCutSection", "GetCameraBindingID");

	Params::UMovieSceneCameraCutSection_GetCameraBindingID_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InShotDisplayName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneCinematicShotSection::SetShotDisplayName(const class FString& InShotDisplayName)
{
	static auto Func = Class->GetFunction("MovieSceneCinematicShotSection", "SetShotDisplayName");

	Params::UMovieSceneCinematicShotSection_SetShotDisplayName_Params Parms;

	Parms.InShotDisplayName = InShotDisplayName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMovieSceneCinematicShotSection::GetShotDisplayName()
{
	static auto Func = Class->GetFunction("MovieSceneCinematicShotSection", "GetShotDisplayName");

	Params::UMovieSceneCinematicShotSection_GetShotDisplayName_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneCVarSection.SetFromString
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InString                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneCVarSection::SetFromString(const class FString& InString)
{
	static auto Func = Class->GetFunction("MovieSceneCVarSection", "SetFromString");

	Params::UMovieSceneCVarSection_SetFromString_Params Parms;

	Parms.InString = InString;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieSceneTracks.MovieSceneCVarSection.GetString
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMovieSceneCVarSection::GetString()
{
	static auto Func = Class->GetFunction("MovieSceneCVarSection", "GetString");

	Params::UMovieSceneCVarSection_GetString_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneDataLayerSection.SetPrerollState
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// enum class EDataLayerRuntimeState  InPrerollState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneDataLayerSection::SetPrerollState(enum class EDataLayerRuntimeState InPrerollState)
{
	static auto Func = Class->GetFunction("MovieSceneDataLayerSection", "SetPrerollState");

	Params::UMovieSceneDataLayerSection_SetPrerollState_Params Parms;

	Parms.InPrerollState = InPrerollState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieSceneTracks.MovieSceneDataLayerSection.SetFlushOnUnload
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bFlushOnUnload                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneDataLayerSection::SetFlushOnUnload(bool bFlushOnUnload)
{
	static auto Func = Class->GetFunction("MovieSceneDataLayerSection", "SetFlushOnUnload");

	Params::UMovieSceneDataLayerSection_SetFlushOnUnload_Params Parms;

	Parms.bFlushOnUnload = bFlushOnUnload;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieSceneTracks.MovieSceneDataLayerSection.SetDesiredState
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// enum class EDataLayerRuntimeState  InDesiredState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneDataLayerSection::SetDesiredState(enum class EDataLayerRuntimeState InDesiredState)
{
	static auto Func = Class->GetFunction("MovieSceneDataLayerSection", "SetDesiredState");

	Params::UMovieSceneDataLayerSection_SetDesiredState_Params Parms;

	Parms.InDesiredState = InDesiredState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieSceneTracks.MovieSceneDataLayerSection.SetDataLayers
// (Final, Native, Private, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FActorDataLayer>     InDataLayers                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UMovieSceneDataLayerSection::SetDataLayers(TArray<struct FActorDataLayer>& InDataLayers)
{
	static auto Func = Class->GetFunction("MovieSceneDataLayerSection", "SetDataLayers");

	Params::UMovieSceneDataLayerSection_SetDataLayers_Params Parms;

	Parms.InDataLayers = InDataLayers;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieSceneTracks.MovieSceneDataLayerSection.SetDataLayerAssets
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UDataLayerAsset*>     InDataLayerAssets                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UMovieSceneDataLayerSection::SetDataLayerAssets(TArray<class UDataLayerAsset*>& InDataLayerAssets)
{
	static auto Func = Class->GetFunction("MovieSceneDataLayerSection", "SetDataLayerAssets");

	Params::UMovieSceneDataLayerSection_SetDataLayerAssets_Params Parms;

	Parms.InDataLayerAssets = InDataLayerAssets;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieSceneTracks.MovieSceneDataLayerSection.GetPrerollState
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EDataLayerRuntimeState  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EDataLayerRuntimeState UMovieSceneDataLayerSection::GetPrerollState()
{
	static auto Func = Class->GetFunction("MovieSceneDataLayerSection", "GetPrerollState");

	Params::UMovieSceneDataLayerSection_GetPrerollState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneDataLayerSection.GetFlushOnUnload
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneDataLayerSection::GetFlushOnUnload()
{
	static auto Func = Class->GetFunction("MovieSceneDataLayerSection", "GetFlushOnUnload");

	Params::UMovieSceneDataLayerSection_GetFlushOnUnload_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneDataLayerSection.GetDesiredState
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EDataLayerRuntimeState  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EDataLayerRuntimeState UMovieSceneDataLayerSection::GetDesiredState()
{
	static auto Func = Class->GetFunction("MovieSceneDataLayerSection", "GetDesiredState");

	Params::UMovieSceneDataLayerSection_GetDesiredState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneDataLayerSection.GetDataLayers
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FActorDataLayer>     ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FActorDataLayer> UMovieSceneDataLayerSection::GetDataLayers()
{
	static auto Func = Class->GetFunction("MovieSceneDataLayerSection", "GetDataLayers");

	Params::UMovieSceneDataLayerSection_GetDataLayers_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneDataLayerSection.GetDataLayerAssets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UDataLayerAsset*>     ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class UDataLayerAsset*> UMovieSceneDataLayerSection::GetDataLayerAssets()
{
	static auto Func = Class->GetFunction("MovieSceneDataLayerSection", "GetDataLayerAssets");

	Params::UMovieSceneDataLayerSection_GetDataLayerAssets_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ELevelVisibility        InVisibility                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneLevelVisibilitySection::SetVisibility(enum class ELevelVisibility InVisibility)
{
	static auto Func = Class->GetFunction("MovieSceneLevelVisibilitySection", "SetVisibility");

	Params::UMovieSceneLevelVisibilitySection_SetVisibility_Params Parms;

	Parms.InVisibility = InVisibility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FName>                InLevelNames                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UMovieSceneLevelVisibilitySection::SetLevelNames(TArray<class FName>& InLevelNames)
{
	static auto Func = Class->GetFunction("MovieSceneLevelVisibilitySection", "SetLevelNames");

	Params::UMovieSceneLevelVisibilitySection_SetLevelNames_Params Parms;

	Parms.InLevelNames = InLevelNames;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ELevelVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ELevelVisibility UMovieSceneLevelVisibilitySection::GetVisibility()
{
	static auto Func = Class->GetFunction("MovieSceneLevelVisibilitySection", "GetVisibility");

	Params::UMovieSceneLevelVisibilitySection_GetVisibility_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FName> UMovieSceneLevelVisibilitySection::GetLevelNames()
{
	static auto Func = Class->GetFunction("MovieSceneLevelVisibilitySection", "GetLevelNames");

	Params::UMovieSceneLevelVisibilitySection_GetLevelNames_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneParameterSection::RemoveVectorParameter(class FName InParameterName)
{
	static auto Func = Class->GetFunction("MovieSceneParameterSection", "RemoveVectorParameter");

	Params::UMovieSceneParameterSection_RemoveVectorParameter_Params Parms;

	Parms.InParameterName = InParameterName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneParameterSection::RemoveVector2DParameter(class FName InParameterName)
{
	static auto Func = Class->GetFunction("MovieSceneParameterSection", "RemoveVector2DParameter");

	Params::UMovieSceneParameterSection_RemoveVector2DParameter_Params Parms;

	Parms.InParameterName = InParameterName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneParameterSection::RemoveTransformParameter(class FName InParameterName)
{
	static auto Func = Class->GetFunction("MovieSceneParameterSection", "RemoveTransformParameter");

	Params::UMovieSceneParameterSection_RemoveTransformParameter_Params Parms;

	Parms.InParameterName = InParameterName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneParameterSection::RemoveScalarParameter(class FName InParameterName)
{
	static auto Func = Class->GetFunction("MovieSceneParameterSection", "RemoveScalarParameter");

	Params::UMovieSceneParameterSection_RemoveScalarParameter_Params Parms;

	Parms.InParameterName = InParameterName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneParameterSection::RemoveColorParameter(class FName InParameterName)
{
	static auto Func = Class->GetFunction("MovieSceneParameterSection", "RemoveColorParameter");

	Params::UMovieSceneParameterSection_RemoveColorParameter_Params Parms;

	Parms.InParameterName = InParameterName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneParameterSection::RemoveBoolParameter(class FName InParameterName)
{
	static auto Func = Class->GetFunction("MovieSceneParameterSection", "RemoveBoolParameter");

	Params::UMovieSceneParameterSection_RemoveBoolParameter_Params Parms;

	Parms.InParameterName = InParameterName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSet<class FName>                  ParameterNames                                                   (Parm, OutParm, NativeAccessSpecifierPublic)

void UMovieSceneParameterSection::GetParameterNames(TSet<class FName>* ParameterNames)
{
	static auto Func = Class->GetFunction("MovieSceneParameterSection", "GetParameterNames");

	Params::UMovieSceneParameterSection_GetParameterNames_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (ParameterNames != nullptr)
		*ParameterNames = Parms.ParameterNames;

}


// Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber                InTime                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneParameterSection::AddVectorParameterKey(class FName InParameterName, const struct FFrameNumber& InTime, const struct FVector& InValue)
{
	static auto Func = Class->GetFunction("MovieSceneParameterSection", "AddVectorParameterKey");

	Params::UMovieSceneParameterSection_AddVectorParameterKey_Params Parms;

	Parms.InParameterName = InParameterName;
	Parms.InTime = InTime;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber                InTime                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneParameterSection::AddVector2DParameterKey(class FName InParameterName, const struct FFrameNumber& InTime, const struct FVector2D& InValue)
{
	static auto Func = Class->GetFunction("MovieSceneParameterSection", "AddVector2DParameterKey");

	Params::UMovieSceneParameterSection_AddVector2DParameterKey_Params Parms;

	Parms.InParameterName = InParameterName;
	Parms.InTime = InTime;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber                InTime                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  InValue                                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneParameterSection::AddTransformParameterKey(class FName InParameterName, const struct FFrameNumber& InTime, struct FTransform& InValue)
{
	static auto Func = Class->GetFunction("MovieSceneParameterSection", "AddTransformParameterKey");

	Params::UMovieSceneParameterSection_AddTransformParameterKey_Params Parms;

	Parms.InParameterName = InParameterName;
	Parms.InTime = InTime;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber                InTime                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneParameterSection::AddScalarParameterKey(class FName InParameterName, const struct FFrameNumber& InTime, float InValue)
{
	static auto Func = Class->GetFunction("MovieSceneParameterSection", "AddScalarParameterKey");

	Params::UMovieSceneParameterSection_AddScalarParameterKey_Params Parms;

	Parms.InParameterName = InParameterName;
	Parms.InTime = InTime;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber                InTime                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneParameterSection::AddColorParameterKey(class FName InParameterName, const struct FFrameNumber& InTime, const struct FLinearColor& InValue)
{
	static auto Func = Class->GetFunction("MovieSceneParameterSection", "AddColorParameterKey");

	Params::UMovieSceneParameterSection_AddColorParameterKey_Params Parms;

	Parms.InParameterName = InParameterName;
	Parms.InTime = InTime;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber                InTime                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneParameterSection::AddBoolParameterKey(class FName InParameterName, const struct FFrameNumber& InTime, bool InValue)
{
	static auto Func = Class->GetFunction("MovieSceneParameterSection", "AddBoolParameterKey");

	Params::UMovieSceneParameterSection_AddBoolParameterKey_Params Parms;

	Parms.InParameterName = InParameterName;
	Parms.InTime = InTime;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequencePlayer*   Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             TargetComponent                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeInSeconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMovieSceneAsyncAction_SequencePrediction*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieSceneAsyncAction_SequencePrediction* UMovieSceneAsyncAction_SequencePrediction::PredictWorldTransformAtTime(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, float TimeInSeconds)
{
	static auto Func = Class->GetFunction("MovieSceneAsyncAction_SequencePrediction", "PredictWorldTransformAtTime");

	Params::UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime_Params Parms;

	Parms.Player = Player;
	Parms.TargetComponent = TargetComponent;
	Parms.TimeInSeconds = TimeInSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequencePlayer*   Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             TargetComponent                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameTime                  FrameTime                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMovieSceneAsyncAction_SequencePrediction*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieSceneAsyncAction_SequencePrediction* UMovieSceneAsyncAction_SequencePrediction::PredictWorldTransformAtFrame(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, const struct FFrameTime& FrameTime)
{
	static auto Func = Class->GetFunction("MovieSceneAsyncAction_SequencePrediction", "PredictWorldTransformAtFrame");

	Params::UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame_Params Parms;

	Parms.Player = Player;
	Parms.TargetComponent = TargetComponent;
	Parms.FrameTime = FrameTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequencePlayer*   Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             TargetComponent                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeInSeconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMovieSceneAsyncAction_SequencePrediction*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieSceneAsyncAction_SequencePrediction* UMovieSceneAsyncAction_SequencePrediction::PredictLocalTransformAtTime(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, float TimeInSeconds)
{
	static auto Func = Class->GetFunction("MovieSceneAsyncAction_SequencePrediction", "PredictLocalTransformAtTime");

	Params::UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime_Params Parms;

	Parms.Player = Player;
	Parms.TargetComponent = TargetComponent;
	Parms.TimeInSeconds = TimeInSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequencePlayer*   Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             TargetComponent                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameTime                  FrameTime                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMovieSceneAsyncAction_SequencePrediction*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieSceneAsyncAction_SequencePrediction* UMovieSceneAsyncAction_SequencePrediction::PredictLocalTransformAtFrame(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, const struct FFrameTime& FrameTime)
{
	static auto Func = Class->GetFunction("MovieSceneAsyncAction_SequencePrediction", "PredictLocalTransformAtFrame");

	Params::UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame_Params Parms;

	Parms.Player = Player;
	Parms.TargetComponent = TargetComponent;
	Parms.FrameTime = FrameTime;

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
