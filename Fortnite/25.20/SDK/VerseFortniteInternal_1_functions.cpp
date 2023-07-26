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


// Function VerseFortniteInternal.FortControllerStateHandlerComponent.NotifyOfStateChange
// (Final, Native, Public, HasOutParams)
// Parameters:
// class FString                      State                                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Active                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerStateHandlerComponent::NotifyOfStateChange(class FString* State, bool Active)
{
	static auto Func = Class->GetFunction("FortControllerStateHandlerComponent", "NotifyOfStateChange");

	Params::UFortControllerStateHandlerComponent_NotifyOfStateChange_Params Parms;

	Parms.Active = Active;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (State != nullptr)
		*State = Parms.State;

}


// Function VerseFortniteInternal.FortBuildingSettingsComponentBase.OnRep_Settings
// (Final, Native, Private)
// Parameters:

void UFortBuildingSettingsComponentBase::OnRep_Settings()
{
	static auto Func = Class->GetFunction("FortBuildingSettingsComponentBase", "OnRep_Settings");

	Params::UFortBuildingSettingsComponentBase_OnRep_Settings_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseFortniteInternal.FortPlayspaceComponentHelper.HandlePlayerPawnPossessed
// (Final, Native, Public)
// Parameters:
// class APawn*                       Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayspaceComponentHelper::HandlePlayerPawnPossessed(class APawn* Pawn)
{
	static auto Func = Class->GetFunction("FortPlayspaceComponentHelper", "HandlePlayerPawnPossessed");

	Params::UFortPlayspaceComponentHelper_HandlePlayerPawnPossessed_Params Parms;

	Parms.Pawn = Pawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseFortniteInternal.FortPlayspaceComponentHelper.HandlePlayerDied
// (Final, Native, Public)
// Parameters:
// class AFortPlayerPawnAthena*       FortPlayerPawnAthena                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayspaceComponentHelper::HandlePlayerDied(class AFortPlayerPawnAthena* FortPlayerPawnAthena)
{
	static auto Func = Class->GetFunction("FortPlayspaceComponentHelper", "HandlePlayerDied");

	Params::UFortPlayspaceComponentHelper_HandlePlayerDied_Params Parms;

	Parms.FortPlayerPawnAthena = FortPlayerPawnAthena;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
