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


// Function FortOvershieldHelpers.FortOvershieldHelperComponent.ClearOvershieldListenerDelegates
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortOvershieldHelperComponent::ClearOvershieldListenerDelegates(class UGameplayAbility* OwningAbility)
{
	static auto Func = Class->GetFunction("FortOvershieldHelperComponent", "ClearOvershieldListenerDelegates");

	Params::UFortOvershieldHelperComponent_ClearOvershieldListenerDelegates_Params Parms;

	Parms.OwningAbility = OwningAbility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortOvershieldHelpers.FortOvershieldHelperComponent.AssignOvershieldListenerDelegates
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortOvershieldDelegateContainerDelegates                                                        (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UFortOvershieldHelperComponent::AssignOvershieldListenerDelegates(class UGameplayAbility* OwningAbility, const struct FFortOvershieldDelegateContainer& Delegates)
{
	static auto Func = Class->GetFunction("FortOvershieldHelperComponent", "AssignOvershieldListenerDelegates");

	Params::UFortOvershieldHelperComponent_AssignOvershieldListenerDelegates_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.Delegates = Delegates;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
