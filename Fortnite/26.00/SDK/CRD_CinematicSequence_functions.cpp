#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CRD_CinematicSequence.CinematicSequenceDeviceBase
// (Actor)

class UClass* UCinematicSequenceDeviceBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CinematicSequenceDeviceBase");

	return Clss;
}


// CinematicSequenceDeviceBase CRD_CinematicSequence.Default__CinematicSequenceDeviceBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UCinematicSequenceDeviceBase* UCinematicSequenceDeviceBase::GetDefaultObj()
{
	static class UCinematicSequenceDeviceBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UCinematicSequenceDeviceBase*>(UCinematicSequenceDeviceBase::StaticClass()->DefaultObject);

	return Default;
}


// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCinematicSequenceDeviceBase::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CinematicSequenceDeviceBase", "Stop");

	Params::UCinematicSequenceDeviceBase_Stop_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.SetSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*              Sequence                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCinematicSequenceDeviceBase::SetSequence(class ULevelSequence* Sequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CinematicSequenceDeviceBase", "SetSequence");

	Params::UCinematicSequenceDeviceBase_SetSequence_Params Parms{};

	Parms.Sequence = Sequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.SetPlayRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              PlayRate                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCinematicSequenceDeviceBase::SetPlayRate(float PlayRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CinematicSequenceDeviceBase", "SetPlayRate");

	Params::UCinematicSequenceDeviceBase_SetPlayRate_Params Parms{};

	Parms.PlayRate = PlayRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.SetPlaybackTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCinematicSequenceDeviceBase::SetPlaybackTime(float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CinematicSequenceDeviceBase", "SetPlaybackTime");

	Params::UCinematicSequenceDeviceBase_SetPlaybackTime_Params Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.SetPlaybackFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Frame                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCinematicSequenceDeviceBase::SetPlaybackFrame(int32 Frame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CinematicSequenceDeviceBase", "SetPlaybackFrame");

	Params::UCinematicSequenceDeviceBase_SetPlaybackFrame_Params Parms{};

	Parms.Frame = Frame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCinematicSequenceDeviceBase::Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CinematicSequenceDeviceBase", "Play");

	Params::UCinematicSequenceDeviceBase_Play_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCinematicSequenceDeviceBase::Pause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CinematicSequenceDeviceBase", "Pause");

	Params::UCinematicSequenceDeviceBase_Pause_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.HandleSequencePlayerCreated
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class ULevelSequencePlayer*        Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCinematicSequenceDeviceBase::HandleSequencePlayerCreated(class ULevelSequencePlayer* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CinematicSequenceDeviceBase", "HandleSequencePlayerCreated");

	Params::UCinematicSequenceDeviceBase_HandleSequencePlayerCreated_Params Parms{};

	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.GoToEndAndStop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCinematicSequenceDeviceBase::GoToEndAndStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CinematicSequenceDeviceBase", "GoToEndAndStop");

	Params::UCinematicSequenceDeviceBase_GoToEndAndStop_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.GetSequencePlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMovieSceneSequencePlayer*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieSceneSequencePlayer* UCinematicSequenceDeviceBase::GetSequencePlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CinematicSequenceDeviceBase", "GetSequencePlayer");

	Params::UCinematicSequenceDeviceBase_GetSequencePlayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.GetPlayRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UCinematicSequenceDeviceBase::GetPlayRate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CinematicSequenceDeviceBase", "GetPlayRate");

	Params::UCinematicSequenceDeviceBase_GetPlayRate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.GetPlaybackTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UCinematicSequenceDeviceBase::GetPlaybackTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CinematicSequenceDeviceBase", "GetPlaybackTime");

	Params::UCinematicSequenceDeviceBase_GetPlaybackTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.GetPlaybackFrame
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCinematicSequenceDeviceBase::GetPlaybackFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CinematicSequenceDeviceBase", "GetPlaybackFrame");

	Params::UCinematicSequenceDeviceBase_GetPlaybackFrame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


