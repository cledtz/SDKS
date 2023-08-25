#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SubtitlesWidgets.SubtitleDisplayOptions
// (None)

class UClass* USubtitleDisplayOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubtitleDisplayOptions");

	return Clss;
}


// SubtitleDisplayOptions SubtitlesWidgets.Default__SubtitleDisplayOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class USubtitleDisplayOptions* USubtitleDisplayOptions::GetDefaultObj()
{
	static class USubtitleDisplayOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<USubtitleDisplayOptions*>(USubtitleDisplayOptions::StaticClass()->DefaultObject);

	return Default;
}


// Class SubtitlesWidgets.SubtitleDisplay
// (None)

class UClass* USubtitleDisplay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubtitleDisplay");

	return Clss;
}


// SubtitleDisplay SubtitlesWidgets.Default__SubtitleDisplay
// (Public, ClassDefaultObject, ArchetypeObject)

class USubtitleDisplay* USubtitleDisplay::GetDefaultObj()
{
	static class USubtitleDisplay* Default = nullptr;

	if (!Default)
		Default = static_cast<USubtitleDisplay*>(USubtitleDisplay::StaticClass()->DefaultObject);

	return Default;
}


// Function SubtitlesWidgets.SubtitleDisplay.HasSubtitles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USubtitleDisplay::HasSubtitles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubtitleDisplay", "HasSubtitles");

	Params::USubtitleDisplay_HasSubtitles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SubtitlesWidgets.SubtitleDisplayNative
// (None)

class UClass* USubtitleDisplayNative::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubtitleDisplayNative");

	return Clss;
}


// SubtitleDisplayNative SubtitlesWidgets.Default__SubtitleDisplayNative
// (Public, ClassDefaultObject, ArchetypeObject)

class USubtitleDisplayNative* USubtitleDisplayNative::GetDefaultObj()
{
	static class USubtitleDisplayNative* Default = nullptr;

	if (!Default)
		Default = static_cast<USubtitleDisplayNative*>(USubtitleDisplayNative::StaticClass()->DefaultObject);

	return Default;
}


// Class SubtitlesWidgets.FortMediaSubtitlesPlayer
// (None)

class UClass* UFortMediaSubtitlesPlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMediaSubtitlesPlayer");

	return Clss;
}


// FortMediaSubtitlesPlayer SubtitlesWidgets.Default__FortMediaSubtitlesPlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMediaSubtitlesPlayer* UFortMediaSubtitlesPlayer::GetDefaultObj()
{
	static class UFortMediaSubtitlesPlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMediaSubtitlesPlayer*>(UFortMediaSubtitlesPlayer::StaticClass()->DefaultObject);

	return Default;
}


// Function SubtitlesWidgets.FortMediaSubtitlesPlayer.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortMediaSubtitlesPlayer::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMediaSubtitlesPlayer", "Stop");

	Params::UFortMediaSubtitlesPlayer_Stop_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SubtitlesWidgets.FortMediaSubtitlesPlayer.SetSubtitles
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOverlays*                   Subtitles                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMediaSubtitlesPlayer::SetSubtitles(class UOverlays* Subtitles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMediaSubtitlesPlayer", "SetSubtitles");

	Params::UFortMediaSubtitlesPlayer_SetSubtitles_Params Parms{};

	Parms.Subtitles = Subtitles;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SubtitlesWidgets.FortMediaSubtitlesPlayer.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortMediaSubtitlesPlayer::Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMediaSubtitlesPlayer", "Play");

	Params::UFortMediaSubtitlesPlayer_Play_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SubtitlesWidgets.FortMediaSubtitlesPlayer.BindToMediaPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlayer*                InMediaPlayer                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMediaSubtitlesPlayer::BindToMediaPlayer(class UMediaPlayer* InMediaPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMediaSubtitlesPlayer", "BindToMediaPlayer");

	Params::UFortMediaSubtitlesPlayer_BindToMediaPlayer_Params Parms{};

	Parms.InMediaPlayer = InMediaPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SubtitlesWidgets.SubtitleDisplaySubsystem
// (None)

class UClass* USubtitleDisplaySubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubtitleDisplaySubsystem");

	return Clss;
}


// SubtitleDisplaySubsystem SubtitlesWidgets.Default__SubtitleDisplaySubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class USubtitleDisplaySubsystem* USubtitleDisplaySubsystem::GetDefaultObj()
{
	static class USubtitleDisplaySubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<USubtitleDisplaySubsystem*>(USubtitleDisplaySubsystem::StaticClass()->DefaultObject);

	return Default;
}

}


