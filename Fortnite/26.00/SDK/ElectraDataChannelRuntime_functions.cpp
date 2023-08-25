#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ElectraDataChannelRuntime.ElectraDataChannelPlayer
// (Actor)

class UClass* UElectraDataChannelPlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElectraDataChannelPlayer");

	return Clss;
}


// ElectraDataChannelPlayer ElectraDataChannelRuntime.Default__ElectraDataChannelPlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UElectraDataChannelPlayer* UElectraDataChannelPlayer::GetDefaultObj()
{
	static class UElectraDataChannelPlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UElectraDataChannelPlayer*>(UElectraDataChannelPlayer::StaticClass()->DefaultObject);

	return Default;
}


// Function ElectraDataChannelRuntime.ElectraDataChannelPlayer.UseTimeFromMediaPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlayer*                InMediaPlayer                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UElectraDataChannelPlayer::UseTimeFromMediaPlayer(class UMediaPlayer* InMediaPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ElectraDataChannelPlayer", "UseTimeFromMediaPlayer");

	Params::UElectraDataChannelPlayer_UseTimeFromMediaPlayer_Params Parms{};

	Parms.InMediaPlayer = InMediaPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromStateStreamServer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InStatePlaylistURL                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UElectraDataChannelPlayer::PlayFromStateStreamServer(const class FString& InStatePlaylistURL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ElectraDataChannelPlayer", "PlayFromStateStreamServer");

	Params::UElectraDataChannelPlayer_PlayFromStateStreamServer_Params Parms{};

	Parms.InStatePlaylistURL = InStatePlaylistURL;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromMediaPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlayer*                InMediaPlayer                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UElectraDataChannelPlayer::PlayFromMediaPlayer(class UMediaPlayer* InMediaPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ElectraDataChannelPlayer", "PlayFromMediaPlayer");

	Params::UElectraDataChannelPlayer_PlayFromMediaPlayer_Params Parms{};

	Parms.InMediaPlayer = InMediaPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InFilename                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UElectraDataChannelPlayer::PlayFromFile(const class FString& InFilename)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ElectraDataChannelPlayer", "PlayFromFile");

	Params::UElectraDataChannelPlayer_PlayFromFile_Params Parms{};

	Parms.InFilename = InFilename;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ElectraDataChannelRuntime.ElectraDataChannelPlayer.EndPlayback
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UElectraDataChannelPlayer::EndPlayback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ElectraDataChannelPlayer", "EndPlayback");

	Params::UElectraDataChannelPlayer_EndPlayback_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ElectraDataChannelRuntime.ElectraDataChannelRecorder
// (Actor)

class UClass* UElectraDataChannelRecorder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElectraDataChannelRecorder");

	return Clss;
}


// ElectraDataChannelRecorder ElectraDataChannelRuntime.Default__ElectraDataChannelRecorder
// (Public, ClassDefaultObject, ArchetypeObject)

class UElectraDataChannelRecorder* UElectraDataChannelRecorder::GetDefaultObj()
{
	static class UElectraDataChannelRecorder* Default = nullptr;

	if (!Default)
		Default = static_cast<UElectraDataChannelRecorder*>(UElectraDataChannelRecorder::StaticClass()->DefaultObject);

	return Default;
}


// Function ElectraDataChannelRuntime.ElectraDataChannelRecorder.UseTimeFromMediaPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlayer*                InMediaPlayer                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UElectraDataChannelRecorder::UseTimeFromMediaPlayer(class UMediaPlayer* InMediaPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ElectraDataChannelRecorder", "UseTimeFromMediaPlayer");

	Params::UElectraDataChannelRecorder_UseTimeFromMediaPlayer_Params Parms{};

	Parms.InMediaPlayer = InMediaPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ElectraDataChannelRuntime.ElectraDataChannelRecorder.StartRecording
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UElectraDataChannelRecorder::StartRecording()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ElectraDataChannelRecorder", "StartRecording");

	Params::UElectraDataChannelRecorder_StartRecording_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ElectraDataChannelRuntime.ElectraDataChannelRecorder.RecordToFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InFilename                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UElectraDataChannelRecorder::RecordToFile(const class FString& InFilename)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ElectraDataChannelRecorder", "RecordToFile");

	Params::UElectraDataChannelRecorder_RecordToFile_Params Parms{};

	Parms.InFilename = InFilename;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ElectraDataChannelRuntime.ElectraDataChannelRecorder.EndRecording
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UElectraDataChannelRecorder::EndRecording()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ElectraDataChannelRecorder", "EndRecording");

	Params::UElectraDataChannelRecorder_EndRecording_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ElectraDataChannelRuntime.ElectraDataChannelTarget
// (Actor)

class UClass* UElectraDataChannelTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElectraDataChannelTarget");

	return Clss;
}


// ElectraDataChannelTarget ElectraDataChannelRuntime.Default__ElectraDataChannelTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class UElectraDataChannelTarget* UElectraDataChannelTarget::GetDefaultObj()
{
	static class UElectraDataChannelTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<UElectraDataChannelTarget*>(UElectraDataChannelTarget::StaticClass()->DefaultObject);

	return Default;
}


// Function ElectraDataChannelRuntime.ElectraDataChannelTarget.SetTargetAlias
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InAlias                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UElectraDataChannelTarget::SetTargetAlias(const class FString& InAlias)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ElectraDataChannelTarget", "SetTargetAlias");

	Params::UElectraDataChannelTarget_SetTargetAlias_Params Parms{};

	Parms.InAlias = InAlias;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ElectraDataChannelRuntime.ElectraDataChannelTarget.GetTargetAlias
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UElectraDataChannelTarget::GetTargetAlias()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ElectraDataChannelTarget", "GetTargetAlias");

	Params::UElectraDataChannelTarget_GetTargetAlias_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


