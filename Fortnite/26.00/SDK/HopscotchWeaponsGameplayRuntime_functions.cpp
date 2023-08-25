#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class HopscotchWeaponsGameplayRuntime.FortGameplayAbility_AppleSunSmall_Passive
// (None)

class UClass* UFortGameplayAbility_AppleSunSmall_Passive::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameplayAbility_AppleSunSmall_Passive");

	return Clss;
}


// FortGameplayAbility_AppleSunSmall_Passive HopscotchWeaponsGameplayRuntime.Default__FortGameplayAbility_AppleSunSmall_Passive
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameplayAbility_AppleSunSmall_Passive* UFortGameplayAbility_AppleSunSmall_Passive::GetDefaultObj()
{
	static class UFortGameplayAbility_AppleSunSmall_Passive* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameplayAbility_AppleSunSmall_Passive*>(UFortGameplayAbility_AppleSunSmall_Passive::StaticClass()->DefaultObject);

	return Default;
}


// Function HopscotchWeaponsGameplayRuntime.FortGameplayAbility_AppleSunSmall_Passive.UpdateIsCloseToGround
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortGameplayAbility_AppleSunSmall_Passive::UpdateIsCloseToGround()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_AppleSunSmall_Passive", "UpdateIsCloseToGround");

	Params::UFortGameplayAbility_AppleSunSmall_Passive_UpdateIsCloseToGround_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HopscotchWeaponsGameplayRuntime.FortGameplayAbility_AppleSunSmall_Passive.UpdateCanCrashpad
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortGameplayAbility_AppleSunSmall_Passive::UpdateCanCrashpad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_AppleSunSmall_Passive", "UpdateCanCrashpad");

	Params::UFortGameplayAbility_AppleSunSmall_Passive_UpdateCanCrashpad_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HopscotchWeaponsGameplayRuntime.FortGameplayAbility_AppleSunSmall_Passive.OnPlayerMovementModeChanged
// (Final, Native, Private)
// Parameters:
// class UCharacter*                  Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           PrevMovementMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              PreviousCustomMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameplayAbility_AppleSunSmall_Passive::OnPlayerMovementModeChanged(class UCharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_AppleSunSmall_Passive", "OnPlayerMovementModeChanged");

	Params::UFortGameplayAbility_AppleSunSmall_Passive_OnPlayerMovementModeChanged_Params Parms{};

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


