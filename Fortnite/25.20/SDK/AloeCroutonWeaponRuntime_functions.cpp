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


// Function AloeCroutonWeaponRuntime.FortChargingSet_AloeCrouton.OnRep_Charge
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FFortGameplayAttributeData  OldValue                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortChargingSet_AloeCrouton::OnRep_Charge(struct FFortGameplayAttributeData& OldValue)
{
	static auto Func = Class->GetFunction("FortChargingSet_AloeCrouton", "OnRep_Charge");

	Params::UFortChargingSet_AloeCrouton_OnRep_Charge_Params Parms;

	Parms.OldValue = OldValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AloeCroutonWeaponRuntime.FortChargingSet_AloeCrouton.GetCooldownRemaining
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortChargingSet_AloeCrouton::GetCooldownRemaining()
{
	static auto Func = Class->GetFunction("FortChargingSet_AloeCrouton", "GetCooldownRemaining");

	Params::UFortChargingSet_AloeCrouton_GetCooldownRemaining_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AloeCroutonWeaponRuntime.FortChargingSet_AloeCrouton.GetCooldownDuration
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortChargingSet_AloeCrouton::GetCooldownDuration()
{
	static auto Func = Class->GetFunction("FortChargingSet_AloeCrouton", "GetCooldownDuration");

	Params::UFortChargingSet_AloeCrouton_GetCooldownDuration_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AloeCroutonWeaponRuntime.FortCosmeticStatObject_AloeCroutonCharge.HandleChargeCountChanged
// (Final, Native, Private)
// Parameters:
// float                              OldChargeCount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewChargeCount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerController*       PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCosmeticStatObject_AloeCroutonCharge::HandleChargeCountChanged(float OldChargeCount, float NewChargeCount, class AFortPlayerController* PlayerController)
{
	static auto Func = Class->GetFunction("FortCosmeticStatObject_AloeCroutonCharge", "HandleChargeCountChanged");

	Params::UFortCosmeticStatObject_AloeCroutonCharge_HandleChargeCountChanged_Params Parms;

	Parms.OldChargeCount = OldChargeCount;
	Parms.NewChargeCount = NewChargeCount;
	Parms.PlayerController = PlayerController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
