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


// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCinematicSequenceDeviceBase::Stop()
{
	static auto Func = Class->GetFunction("CinematicSequenceDeviceBase", "Stop");

	Params::UCinematicSequenceDeviceBase_Stop_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCinematicSequenceDeviceBase::Play()
{
	static auto Func = Class->GetFunction("CinematicSequenceDeviceBase", "Play");

	Params::UCinematicSequenceDeviceBase_Play_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCinematicSequenceDeviceBase::Pause()
{
	static auto Func = Class->GetFunction("CinematicSequenceDeviceBase", "Pause");

	Params::UCinematicSequenceDeviceBase_Pause_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRD_CinematicSequence.CinematicSequenceDeviceBase.HandleSequencePlayerCreated
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class ULevelSequencePlayer*        Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCinematicSequenceDeviceBase::HandleSequencePlayerCreated(class ULevelSequencePlayer* Player)
{
	static auto Func = Class->GetFunction("CinematicSequenceDeviceBase", "HandleSequencePlayerCreated");

	Params::UCinematicSequenceDeviceBase_HandleSequencePlayerCreated_Params Parms;

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

class UMovieSceneSequencePlayer* UCinematicSequenceDeviceBase::GetSequencePlayer()
{
	static auto Func = Class->GetFunction("CinematicSequenceDeviceBase", "GetSequencePlayer");

	Params::UCinematicSequenceDeviceBase_GetSequencePlayer_Params Parms;


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
