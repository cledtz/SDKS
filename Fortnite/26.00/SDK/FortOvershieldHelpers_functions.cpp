#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class FortOvershieldHelpers.FortOvershieldHelperComponent
// (None)

class UClass* UFortOvershieldHelperComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortOvershieldHelperComponent");

	return Clss;
}


// FortOvershieldHelperComponent FortOvershieldHelpers.Default__FortOvershieldHelperComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortOvershieldHelperComponent* UFortOvershieldHelperComponent::GetDefaultObj()
{
	static class UFortOvershieldHelperComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortOvershieldHelperComponent*>(UFortOvershieldHelperComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function FortOvershieldHelpers.FortOvershieldHelperComponent.ClearOvershieldListenerDelegates
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortOvershieldHelperComponent::ClearOvershieldListenerDelegates(class UGameplayAbility* OwningAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortOvershieldHelperComponent", "ClearOvershieldListenerDelegates");

	Params::UFortOvershieldHelperComponent_ClearOvershieldListenerDelegates_Params Parms{};

	Parms.OwningAbility = OwningAbility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortOvershieldHelpers.FortOvershieldHelperComponent.AssignOvershieldListenerDelegates
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortOvershieldDelegateContainerDelegates                                                        (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UFortOvershieldHelperComponent::AssignOvershieldListenerDelegates(class UGameplayAbility* OwningAbility, const struct FFortOvershieldDelegateContainer& Delegates)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortOvershieldHelperComponent", "AssignOvershieldListenerDelegates");

	Params::UFortOvershieldHelperComponent_AssignOvershieldListenerDelegates_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.Delegates = Delegates;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


