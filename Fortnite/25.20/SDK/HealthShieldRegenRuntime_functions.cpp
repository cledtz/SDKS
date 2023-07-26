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


// Function HealthShieldRegenRuntime.FortHealthShieldRegenComponent.ClearHealthShieldRegen_ShieldListenerDelegates
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHealthShieldRegenComponent::ClearHealthShieldRegen_ShieldListenerDelegates(class UGameplayAbility* OwningAbility)
{
	static auto Func = Class->GetFunction("FortHealthShieldRegenComponent", "ClearHealthShieldRegen_ShieldListenerDelegates");

	Params::UFortHealthShieldRegenComponent_ClearHealthShieldRegen_ShieldListenerDelegates_Params Parms;

	Parms.OwningAbility = OwningAbility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HealthShieldRegenRuntime.FortHealthShieldRegenComponent.ClearHealthShieldRegen_HealthListenerDelegates
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHealthShieldRegenComponent::ClearHealthShieldRegen_HealthListenerDelegates(class UGameplayAbility* OwningAbility)
{
	static auto Func = Class->GetFunction("FortHealthShieldRegenComponent", "ClearHealthShieldRegen_HealthListenerDelegates");

	Params::UFortHealthShieldRegenComponent_ClearHealthShieldRegen_HealthListenerDelegates_Params Parms;

	Parms.OwningAbility = OwningAbility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HealthShieldRegenRuntime.FortHealthShieldRegenComponent.AssignHealthShieldRegen_ShieldListenerDelegates
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortHealthShieldRegen_ShieldDelegateContainerDelegates                                                        (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UFortHealthShieldRegenComponent::AssignHealthShieldRegen_ShieldListenerDelegates(class UGameplayAbility* OwningAbility, const struct FFortHealthShieldRegen_ShieldDelegateContainer& Delegates)
{
	static auto Func = Class->GetFunction("FortHealthShieldRegenComponent", "AssignHealthShieldRegen_ShieldListenerDelegates");

	Params::UFortHealthShieldRegenComponent_AssignHealthShieldRegen_ShieldListenerDelegates_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.Delegates = Delegates;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HealthShieldRegenRuntime.FortHealthShieldRegenComponent.AssignHealthShieldRegen_HealthListenerDelegates
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortHealthShieldRegen_HealthDelegateContainerDelegates                                                        (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UFortHealthShieldRegenComponent::AssignHealthShieldRegen_HealthListenerDelegates(class UGameplayAbility* OwningAbility, const struct FFortHealthShieldRegen_HealthDelegateContainer& Delegates)
{
	static auto Func = Class->GetFunction("FortHealthShieldRegenComponent", "AssignHealthShieldRegen_HealthListenerDelegates");

	Params::UFortHealthShieldRegenComponent_AssignHealthShieldRegen_HealthListenerDelegates_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.Delegates = Delegates;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HealthShieldRegenRuntime.FortHealthShieldRegenComponent.AllowHealthShieldRegen
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortHealthShieldRegenComponent::AllowHealthShieldRegen()
{
	static auto Func = Class->GetFunction("FortHealthShieldRegenComponent", "AllowHealthShieldRegen");

	Params::UFortHealthShieldRegenComponent_AllowHealthShieldRegen_Params Parms;


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
