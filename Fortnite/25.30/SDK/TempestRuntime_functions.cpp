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


// Function TempestRuntime.FortCheatManager_Tempest.EndTempestStorm
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FString                      StormName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_Tempest::EndTempestStorm(const class FString& StormName)
{
	static auto Func = Class->GetFunction("FortCheatManager_Tempest", "EndTempestStorm");

	Params::UFortCheatManager_Tempest_EndTempestStorm_Params Parms;

	Parms.StormName = StormName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function TempestRuntime.TempestMovementComponent.OnRep_MovementData
// (Final, Native, Private, Const)
// Parameters:

void UTempestMovementComponent::OnRep_MovementData()
{
	static auto Func = Class->GetFunction("TempestMovementComponent", "OnRep_MovementData");

	Params::UTempestMovementComponent_OnRep_MovementData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function TempestRuntime.TempestStateMachineComponent.OnRep_CurrentStateInfo
// (Final, Native, Private)
// Parameters:

void UTempestStateMachineComponent::OnRep_CurrentStateInfo()
{
	static auto Func = Class->GetFunction("TempestStateMachineComponent", "OnRep_CurrentStateInfo");

	Params::UTempestStateMachineComponent_OnRep_CurrentStateInfo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function TempestRuntime.TempestStateMachineComponent.GetCurrentStateInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTempestStateInfo           ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FTempestStateInfo UTempestStateMachineComponent::GetCurrentStateInfo()
{
	static auto Func = Class->GetFunction("TempestStateMachineComponent", "GetCurrentStateInfo");

	Params::UTempestStateMachineComponent_GetCurrentStateInfo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TempestRuntime.TempestStateMachineComponent.GetCurrentStateCompletionPercentage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTempestStateMachineComponent::GetCurrentStateCompletionPercentage()
{
	static auto Func = Class->GetFunction("TempestStateMachineComponent", "GetCurrentStateCompletionPercentage");

	Params::UTempestStateMachineComponent_GetCurrentStateCompletionPercentage_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TempestRuntime.TempestStateMachineComponent.GetCurrentState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ETempestState           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ETempestState UTempestStateMachineComponent::GetCurrentState()
{
	static auto Func = Class->GetFunction("TempestStateMachineComponent", "GetCurrentState");

	Params::UTempestStateMachineComponent_GetCurrentState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TempestRuntime.TempestStateMachineComponent.ForceDissipate
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InDissipationReason                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTempestStateMachineComponent::ForceDissipate(const class FString& InDissipationReason)
{
	static auto Func = Class->GetFunction("TempestStateMachineComponent", "ForceDissipate");

	Params::UTempestStateMachineComponent_ForceDissipate_Params Parms;

	Parms.InDissipationReason = InDissipationReason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
