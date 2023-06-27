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


// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ACinematicSequenceDeviceBase::Stop()
{
	static auto Func = Class->GetFunction("CinematicSequenceDeviceBase", "Stop");

	Params::ACinematicSequenceDeviceBase_Stop_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ACinematicSequenceDeviceBase::Play()
{
	static auto Func = Class->GetFunction("CinematicSequenceDeviceBase", "Play");

	Params::ACinematicSequenceDeviceBase_Play_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ACinematicSequenceDeviceBase::Pause()
{
	static auto Func = Class->GetFunction("CinematicSequenceDeviceBase", "Pause");

	Params::ACinematicSequenceDeviceBase_Pause_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.HandleSequencePlayerCreated
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class ULevelSequencePlayer*        Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACinematicSequenceDeviceBase::HandleSequencePlayerCreated(class ULevelSequencePlayer* Player)
{
	static auto Func = Class->GetFunction("CinematicSequenceDeviceBase", "HandleSequencePlayerCreated");

	Params::ACinematicSequenceDeviceBase_HandleSequencePlayerCreated_Params Parms;

	Parms.Player = Player;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.GetSequencePlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMovieSceneSequencePlayer*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieSceneSequencePlayer* ACinematicSequenceDeviceBase::GetSequencePlayer()
{
	static auto Func = Class->GetFunction("CinematicSequenceDeviceBase", "GetSequencePlayer");

	Params::ACinematicSequenceDeviceBase_GetSequencePlayer_Params Parms;


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
