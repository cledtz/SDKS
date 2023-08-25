#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class HealthShieldRegenRuntime.FortHealthShieldRegenComponent
// (None)

class UClass* UFortHealthShieldRegenComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortHealthShieldRegenComponent");

	return Clss;
}


// FortHealthShieldRegenComponent HealthShieldRegenRuntime.Default__FortHealthShieldRegenComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortHealthShieldRegenComponent* UFortHealthShieldRegenComponent::GetDefaultObj()
{
	static class UFortHealthShieldRegenComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortHealthShieldRegenComponent*>(UFortHealthShieldRegenComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function HealthShieldRegenRuntime.FortHealthShieldRegenComponent.ClearHealthShieldRegen_ShieldListenerDelegates
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHealthShieldRegenComponent::ClearHealthShieldRegen_ShieldListenerDelegates(class UGameplayAbility* OwningAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHealthShieldRegenComponent", "ClearHealthShieldRegen_ShieldListenerDelegates");

	Params::UFortHealthShieldRegenComponent_ClearHealthShieldRegen_ShieldListenerDelegates_Params Parms{};

	Parms.OwningAbility = OwningAbility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HealthShieldRegenRuntime.FortHealthShieldRegenComponent.ClearHealthShieldRegen_HealthListenerDelegates
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHealthShieldRegenComponent::ClearHealthShieldRegen_HealthListenerDelegates(class UGameplayAbility* OwningAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHealthShieldRegenComponent", "ClearHealthShieldRegen_HealthListenerDelegates");

	Params::UFortHealthShieldRegenComponent_ClearHealthShieldRegen_HealthListenerDelegates_Params Parms{};

	Parms.OwningAbility = OwningAbility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HealthShieldRegenRuntime.FortHealthShieldRegenComponent.AssignHealthShieldRegen_ShieldListenerDelegates
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortHealthShieldRegen_ShieldDelegateContainerDelegates                                                        (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UFortHealthShieldRegenComponent::AssignHealthShieldRegen_ShieldListenerDelegates(class UGameplayAbility* OwningAbility, const struct FFortHealthShieldRegen_ShieldDelegateContainer& Delegates)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHealthShieldRegenComponent", "AssignHealthShieldRegen_ShieldListenerDelegates");

	Params::UFortHealthShieldRegenComponent_AssignHealthShieldRegen_ShieldListenerDelegates_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.Delegates = Delegates;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HealthShieldRegenRuntime.FortHealthShieldRegenComponent.AssignHealthShieldRegen_HealthListenerDelegates
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortHealthShieldRegen_HealthDelegateContainerDelegates                                                        (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UFortHealthShieldRegenComponent::AssignHealthShieldRegen_HealthListenerDelegates(class UGameplayAbility* OwningAbility, const struct FFortHealthShieldRegen_HealthDelegateContainer& Delegates)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHealthShieldRegenComponent", "AssignHealthShieldRegen_HealthListenerDelegates");

	Params::UFortHealthShieldRegenComponent_AssignHealthShieldRegen_HealthListenerDelegates_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.Delegates = Delegates;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HealthShieldRegenRuntime.FortHealthShieldRegenComponent.AllowHealthShieldRegen
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortHealthShieldRegenComponent::AllowHealthShieldRegen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHealthShieldRegenComponent", "AllowHealthShieldRegen");

	Params::UFortHealthShieldRegenComponent_AllowHealthShieldRegen_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


