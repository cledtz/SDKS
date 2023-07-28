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


// Function KnockbackRuntime.FortAthenaMutator_Knockback.SetPlayersShouldBreakThroughStructures
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bActive                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlayerPawn*             PlayerPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_Knockback::SetPlayersShouldBreakThroughStructures(bool bActive, class UFortPlayerPawn* PlayerPawn)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_Knockback", "SetPlayersShouldBreakThroughStructures");

	Params::UFortAthenaMutator_Knockback_SetPlayersShouldBreakThroughStructures_Params Parms;

	Parms.bActive = bActive;
	Parms.PlayerPawn = PlayerPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function KnockbackRuntime.FortAthenaMutator_Knockback.HandleBlockedCharacterMovement
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FHitResult                  InOutImpact                                                      (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UFortPawn*                   FortPawn                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_Knockback::HandleBlockedCharacterMovement(struct FHitResult* InOutImpact, class UFortPawn* FortPawn)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_Knockback", "HandleBlockedCharacterMovement");

	Params::UFortAthenaMutator_Knockback_HandleBlockedCharacterMovement_Params Parms;

	Parms.FortPawn = FortPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutImpact != nullptr)
		*InOutImpact = Parms.InOutImpact;

}


// Function KnockbackRuntime.FortAthenaMutator_Knockback.GetPercentDamageMediumMaxThreshold
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAthenaMutator_Knockback::GetPercentDamageMediumMaxThreshold()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_Knockback", "GetPercentDamageMediumMaxThreshold");

	Params::UFortAthenaMutator_Knockback_GetPercentDamageMediumMaxThreshold_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function KnockbackRuntime.FortAthenaMutator_Knockback.GetPercentDamageLowMaxThreshold
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAthenaMutator_Knockback::GetPercentDamageLowMaxThreshold()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_Knockback", "GetPercentDamageLowMaxThreshold");

	Params::UFortAthenaMutator_Knockback_GetPercentDamageLowMaxThreshold_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function KnockbackRuntime.FortAthenaMutator_Knockback.GetKnockbackMultiplierInitialValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAthenaMutator_Knockback::GetKnockbackMultiplierInitialValue()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_Knockback", "GetKnockbackMultiplierInitialValue");

	Params::UFortAthenaMutator_Knockback_GetKnockbackMultiplierInitialValue_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function KnockbackRuntime.FortAthenaMutator_Knockback.GetAllPlayersKnockbackData
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FKnockbackMutatorData>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FKnockbackMutatorData> UFortAthenaMutator_Knockback::GetAllPlayersKnockbackData()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_Knockback", "GetAllPlayersKnockbackData");

	Params::UFortAthenaMutator_Knockback_GetAllPlayersKnockbackData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function KnockbackRuntime.FortGameplayAbility_KnockbackMutator.SaveKnockbackData
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKnockbackMutatorData       InKnockbackData                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortGameplayAbility_KnockbackMutator::SaveKnockbackData(struct FKnockbackMutatorData& InKnockbackData)
{
	static auto Func = Class->GetFunction("FortGameplayAbility_KnockbackMutator", "SaveKnockbackData");

	Params::UFortGameplayAbility_KnockbackMutator_SaveKnockbackData_Params Parms;

	Parms.InKnockbackData = InKnockbackData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function KnockbackRuntime.FortGameplayAbility_KnockbackMutator.GetCachedMutator
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class UFortAthenaMutator_Knockback*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaMutator_Knockback* UFortGameplayAbility_KnockbackMutator::GetCachedMutator()
{
	static auto Func = Class->GetFunction("FortGameplayAbility_KnockbackMutator", "GetCachedMutator");

	Params::UFortGameplayAbility_KnockbackMutator_GetCachedMutator_Params Parms;


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
