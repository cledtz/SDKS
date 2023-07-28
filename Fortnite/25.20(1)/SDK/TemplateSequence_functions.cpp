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


// Function TemplateSequence.TemplateSequenceActor.SetSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTemplateSequence*           InSequence                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTemplateSequenceActor::SetSequence(class UTemplateSequence* InSequence)
{
	static auto Func = Class->GetFunction("TemplateSequenceActor", "SetSequence");

	Params::UTemplateSequenceActor_SetSequence_Params Parms;

	Parms.InSequence = InSequence;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function TemplateSequence.TemplateSequenceActor.SetBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOverridesDefault                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTemplateSequenceActor::SetBinding(class UActor* Actor, bool bOverridesDefault)
{
	static auto Func = Class->GetFunction("TemplateSequenceActor", "SetBinding");

	Params::UTemplateSequenceActor_SetBinding_Params Parms;

	Parms.Actor = Actor;
	Parms.bOverridesDefault = bOverridesDefault;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function TemplateSequence.TemplateSequenceActor.LoadSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTemplateSequence*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTemplateSequence* UTemplateSequenceActor::LoadSequence()
{
	static auto Func = Class->GetFunction("TemplateSequenceActor", "LoadSequence");

	Params::UTemplateSequenceActor_LoadSequence_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTemplateSequencePlayer*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTemplateSequencePlayer* UTemplateSequenceActor::GetSequencePlayer()
{
	static auto Func = Class->GetFunction("TemplateSequenceActor", "GetSequencePlayer");

	Params::UTemplateSequenceActor_GetSequencePlayer_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TemplateSequence.TemplateSequenceActor.GetSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTemplateSequence*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTemplateSequence* UTemplateSequenceActor::GetSequence()
{
	static auto Func = Class->GetFunction("TemplateSequenceActor", "GetSequence");

	Params::UTemplateSequenceActor_GetSequence_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTemplateSequence*           TemplateSequence                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMovieSceneSequencePlaybackSettingsSettings                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UTemplateSequenceActor*      OutActor                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTemplateSequencePlayer*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTemplateSequencePlayer* UTemplateSequencePlayer::CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class UTemplateSequenceActor** OutActor)
{
	static auto Func = Class->GetFunction("TemplateSequencePlayer", "CreateTemplateSequencePlayer");

	Params::UTemplateSequencePlayer_CreateTemplateSequencePlayer_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.TemplateSequence = TemplateSequence;
	Parms.Settings = Settings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutActor != nullptr)
		*OutActor = Parms.OutActor;

	return Parms.ReturnValue;

}


// Function TemplateSequence.SequenceCameraShakeTestUtil.GetPostProcessBlendCache
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PPIndex                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPostProcessSettings        OutPPSettings                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
// float                              OutPPBlendWeight                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USequenceCameraShakeTestUtil::GetPostProcessBlendCache(class UPlayerController* PlayerController, int32 PPIndex, struct FPostProcessSettings* OutPPSettings, float* OutPPBlendWeight)
{
	static auto Func = Class->GetFunction("SequenceCameraShakeTestUtil", "GetPostProcessBlendCache");

	Params::USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.PPIndex = PPIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutPPSettings != nullptr)
		*OutPPSettings = Parms.OutPPSettings;

	if (OutPPBlendWeight != nullptr)
		*OutPPBlendWeight = Parms.OutPPBlendWeight;

	return Parms.ReturnValue;

}


// Function TemplateSequence.SequenceCameraShakeTestUtil.GetLastFrameCameraCachePOV
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMinimalViewInfo            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FMinimalViewInfo USequenceCameraShakeTestUtil::GetLastFrameCameraCachePOV(class UPlayerController* PlayerController)
{
	static auto Func = Class->GetFunction("SequenceCameraShakeTestUtil", "GetLastFrameCameraCachePOV");

	Params::USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Params Parms;

	Parms.PlayerController = PlayerController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TemplateSequence.SequenceCameraShakeTestUtil.GetCameraCachePOV
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMinimalViewInfo            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FMinimalViewInfo USequenceCameraShakeTestUtil::GetCameraCachePOV(class UPlayerController* PlayerController)
{
	static auto Func = Class->GetFunction("SequenceCameraShakeTestUtil", "GetCameraCachePOV");

	Params::USequenceCameraShakeTestUtil_GetCameraCachePOV_Params Parms;

	Parms.PlayerController = PlayerController;

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
