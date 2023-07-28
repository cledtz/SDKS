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


// Function ElectraDataChannelRuntime.ElectraDataChannelPlayer.UseTimeFromMediaPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlayer*                InMediaPlayer                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UElectraDataChannelPlayer::UseTimeFromMediaPlayer(class UMediaPlayer* InMediaPlayer)
{
	static auto Func = Class->GetFunction("ElectraDataChannelPlayer", "UseTimeFromMediaPlayer");

	Params::UElectraDataChannelPlayer_UseTimeFromMediaPlayer_Params Parms;

	Parms.InMediaPlayer = InMediaPlayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromStateStreamServer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InStatePlaylistURL                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UElectraDataChannelPlayer::PlayFromStateStreamServer(const class FString& InStatePlaylistURL)
{
	static auto Func = Class->GetFunction("ElectraDataChannelPlayer", "PlayFromStateStreamServer");

	Params::UElectraDataChannelPlayer_PlayFromStateStreamServer_Params Parms;

	Parms.InStatePlaylistURL = InStatePlaylistURL;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromMediaPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlayer*                InMediaPlayer                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UElectraDataChannelPlayer::PlayFromMediaPlayer(class UMediaPlayer* InMediaPlayer)
{
	static auto Func = Class->GetFunction("ElectraDataChannelPlayer", "PlayFromMediaPlayer");

	Params::UElectraDataChannelPlayer_PlayFromMediaPlayer_Params Parms;

	Parms.InMediaPlayer = InMediaPlayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InFilename                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UElectraDataChannelPlayer::PlayFromFile(const class FString& InFilename)
{
	static auto Func = Class->GetFunction("ElectraDataChannelPlayer", "PlayFromFile");

	Params::UElectraDataChannelPlayer_PlayFromFile_Params Parms;

	Parms.InFilename = InFilename;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ElectraDataChannelRuntime.ElectraDataChannelPlayer.EndPlayback
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UElectraDataChannelPlayer::EndPlayback()
{
	static auto Func = Class->GetFunction("ElectraDataChannelPlayer", "EndPlayback");

	Params::UElectraDataChannelPlayer_EndPlayback_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ElectraDataChannelRuntime.ElectraDataChannelRecorder.UseTimeFromMediaPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlayer*                InMediaPlayer                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UElectraDataChannelRecorder::UseTimeFromMediaPlayer(class UMediaPlayer* InMediaPlayer)
{
	static auto Func = Class->GetFunction("ElectraDataChannelRecorder", "UseTimeFromMediaPlayer");

	Params::UElectraDataChannelRecorder_UseTimeFromMediaPlayer_Params Parms;

	Parms.InMediaPlayer = InMediaPlayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ElectraDataChannelRuntime.ElectraDataChannelRecorder.StartRecording
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UElectraDataChannelRecorder::StartRecording()
{
	static auto Func = Class->GetFunction("ElectraDataChannelRecorder", "StartRecording");

	Params::UElectraDataChannelRecorder_StartRecording_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ElectraDataChannelRuntime.ElectraDataChannelRecorder.RecordToFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InFilename                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UElectraDataChannelRecorder::RecordToFile(const class FString& InFilename)
{
	static auto Func = Class->GetFunction("ElectraDataChannelRecorder", "RecordToFile");

	Params::UElectraDataChannelRecorder_RecordToFile_Params Parms;

	Parms.InFilename = InFilename;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ElectraDataChannelRuntime.ElectraDataChannelRecorder.EndRecording
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UElectraDataChannelRecorder::EndRecording()
{
	static auto Func = Class->GetFunction("ElectraDataChannelRecorder", "EndRecording");

	Params::UElectraDataChannelRecorder_EndRecording_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ElectraDataChannelRuntime.ElectraDataChannelTarget.SetTargetAlias
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InAlias                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UElectraDataChannelTarget::SetTargetAlias(const class FString& InAlias)
{
	static auto Func = Class->GetFunction("ElectraDataChannelTarget", "SetTargetAlias");

	Params::UElectraDataChannelTarget_SetTargetAlias_Params Parms;

	Parms.InAlias = InAlias;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ElectraDataChannelRuntime.ElectraDataChannelTarget.GetTargetAlias
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UElectraDataChannelTarget::GetTargetAlias()
{
	static auto Func = Class->GetFunction("ElectraDataChannelTarget", "GetTargetAlias");

	Params::UElectraDataChannelTarget_GetTargetAlias_Params Parms;


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
