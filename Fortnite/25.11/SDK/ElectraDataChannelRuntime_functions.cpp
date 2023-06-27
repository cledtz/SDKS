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

void AElectraDataChannelPlayer::UseTimeFromMediaPlayer(class UMediaPlayer* InMediaPlayer)
{
	static auto Func = Class->GetFunction("ElectraDataChannelPlayer", "UseTimeFromMediaPlayer");

	Params::AElectraDataChannelPlayer_UseTimeFromMediaPlayer_Params Parms;

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

void AElectraDataChannelPlayer::PlayFromStateStreamServer(const class FString& InStatePlaylistURL)
{
	static auto Func = Class->GetFunction("ElectraDataChannelPlayer", "PlayFromStateStreamServer");

	Params::AElectraDataChannelPlayer_PlayFromStateStreamServer_Params Parms;

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

void AElectraDataChannelPlayer::PlayFromMediaPlayer(class UMediaPlayer* InMediaPlayer)
{
	static auto Func = Class->GetFunction("ElectraDataChannelPlayer", "PlayFromMediaPlayer");

	Params::AElectraDataChannelPlayer_PlayFromMediaPlayer_Params Parms;

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

void AElectraDataChannelPlayer::PlayFromFile(const class FString& InFilename)
{
	static auto Func = Class->GetFunction("ElectraDataChannelPlayer", "PlayFromFile");

	Params::AElectraDataChannelPlayer_PlayFromFile_Params Parms;

	Parms.InFilename = InFilename;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ElectraDataChannelRuntime.ElectraDataChannelPlayer.EndPlayback
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AElectraDataChannelPlayer::EndPlayback()
{
	static auto Func = Class->GetFunction("ElectraDataChannelPlayer", "EndPlayback");

	Params::AElectraDataChannelPlayer_EndPlayback_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ElectraDataChannelRuntime.ElectraDataChannelRecorder.UseTimeFromMediaPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlayer*                InMediaPlayer                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AElectraDataChannelRecorder::UseTimeFromMediaPlayer(class UMediaPlayer* InMediaPlayer)
{
	static auto Func = Class->GetFunction("ElectraDataChannelRecorder", "UseTimeFromMediaPlayer");

	Params::AElectraDataChannelRecorder_UseTimeFromMediaPlayer_Params Parms;

	Parms.InMediaPlayer = InMediaPlayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ElectraDataChannelRuntime.ElectraDataChannelRecorder.StartRecording
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AElectraDataChannelRecorder::StartRecording()
{
	static auto Func = Class->GetFunction("ElectraDataChannelRecorder", "StartRecording");

	Params::AElectraDataChannelRecorder_StartRecording_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ElectraDataChannelRuntime.ElectraDataChannelRecorder.RecordToFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InFilename                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AElectraDataChannelRecorder::RecordToFile(const class FString& InFilename)
{
	static auto Func = Class->GetFunction("ElectraDataChannelRecorder", "RecordToFile");

	Params::AElectraDataChannelRecorder_RecordToFile_Params Parms;

	Parms.InFilename = InFilename;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ElectraDataChannelRuntime.ElectraDataChannelRecorder.EndRecording
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AElectraDataChannelRecorder::EndRecording()
{
	static auto Func = Class->GetFunction("ElectraDataChannelRecorder", "EndRecording");

	Params::AElectraDataChannelRecorder_EndRecording_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ElectraDataChannelRuntime.ElectraDataChannelTarget.SetTargetAlias
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InAlias                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AElectraDataChannelTarget::SetTargetAlias(const class FString& InAlias)
{
	static auto Func = Class->GetFunction("ElectraDataChannelTarget", "SetTargetAlias");

	Params::AElectraDataChannelTarget_SetTargetAlias_Params Parms;

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

class FString AElectraDataChannelTarget::GetTargetAlias()
{
	static auto Func = Class->GetFunction("ElectraDataChannelTarget", "GetTargetAlias");

	Params::AElectraDataChannelTarget_GetTargetAlias_Params Parms;


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
