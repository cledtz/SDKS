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


// Function EventModeRuntime.FortGameFrameworkComponent_EventMode.OnPlayerPawnPossessed
// (Final, Native, Private)
// Parameters:
// class APawn*                       PossessedPawn                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameFrameworkComponent_EventMode::OnPlayerPawnPossessed(class APawn* PossessedPawn)
{
	static auto Func = Class->GetFunction("FortGameFrameworkComponent_EventMode", "OnPlayerPawnPossessed");

	Params::UFortGameFrameworkComponent_EventMode_OnPlayerPawnPossessed_Params Parms;

	Parms.PossessedPawn = PossessedPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EventModeRuntime.FortGameFrameworkComponent_EventMode.OnExitVehicle
// (Final, Native, Private)
// Parameters:

void UFortGameFrameworkComponent_EventMode::OnExitVehicle()
{
	static auto Func = Class->GetFunction("FortGameFrameworkComponent_EventMode", "OnExitVehicle");

	Params::UFortGameFrameworkComponent_EventMode_OnExitVehicle_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EventModeRuntime.FortGameFrameworkComponent_EventMode.OnEnterVehicle
// (Final, Native, Private)
// Parameters:

void UFortGameFrameworkComponent_EventMode::OnEnterVehicle()
{
	static auto Func = Class->GetFunction("FortGameFrameworkComponent_EventMode", "OnEnterVehicle");

	Params::UFortGameFrameworkComponent_EventMode_OnEnterVehicle_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsFocusing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortGameFrameworkComponent_EventMode::GetIsFocusing()
{
	static auto Func = Class->GetFunction("FortGameFrameworkComponent_EventMode", "GetIsFocusing");

	Params::UFortGameFrameworkComponent_EventMode_GetIsFocusing_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsFocusAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortGameFrameworkComponent_EventMode::GetIsFocusAvailable()
{
	static auto Func = Class->GetFunction("FortGameFrameworkComponent_EventMode", "GetIsFocusAvailable");

	Params::UFortGameFrameworkComponent_EventMode_GetIsFocusAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsEventModeActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortGameFrameworkComponent_EventMode::GetIsEventModeActive()
{
	static auto Func = Class->GetFunction("FortGameFrameworkComponent_EventMode", "GetIsEventModeActive");

	Params::UFortGameFrameworkComponent_EventMode_GetIsEventModeActive_Params Parms;


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
