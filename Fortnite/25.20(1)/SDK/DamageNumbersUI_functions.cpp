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


// Function DamageNumbersUI.CommonUserWidget_DamageNumbers.UpdateScreenSpacePosition
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UCommonUserWidget_DamageNumbers::UpdateScreenSpacePosition()
{
	static auto Func = Class->GetFunction("CommonUserWidget_DamageNumbers", "UpdateScreenSpacePosition");

	Params::UCommonUserWidget_DamageNumbers_UpdateScreenSpacePosition_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DamageNumbersUI.CommonUserWidget_DamageNumbers.Reset
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UCommonUserWidget_DamageNumbers::Reset()
{
	static auto Func = Class->GetFunction("CommonUserWidget_DamageNumbers", "Reset");

	Params::UCommonUserWidget_DamageNumbers_Reset_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DamageNumbersUI.CommonUserWidget_DamageNumbers.OnDamageDealt
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// double                             InDamage                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      InActor                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInShield                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInCrit                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InWorldSpacePos                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonUserWidget_DamageNumbers::OnDamageDealt(double InDamage, class UActor* InActor, bool bInShield, bool bInCrit, const struct FVector& InWorldSpacePos)
{
	static auto Func = Class->GetFunction("CommonUserWidget_DamageNumbers", "OnDamageDealt");

	Params::UCommonUserWidget_DamageNumbers_OnDamageDealt_Params Parms;

	Parms.InDamage = InDamage;
	Parms.InActor = InActor;
	Parms.bInShield = bInShield;
	Parms.bInCrit = bInCrit;
	Parms.InWorldSpacePos = InWorldSpacePos;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DamageNumbersUI.FortUserWidget_DamageNumbers.UpdateBinding
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortUserWidget_DamageNumbers::UpdateBinding()
{
	static auto Func = Class->GetFunction("FortUserWidget_DamageNumbers", "UpdateBinding");

	Params::UFortUserWidget_DamageNumbers_UpdateBinding_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DamageNumbersUI.FortUserWidget_DamageNumbers.OnPawnSet
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortUserWidget_DamageNumbers::OnPawnSet()
{
	static auto Func = Class->GetFunction("FortUserWidget_DamageNumbers", "OnPawnSet");

	Params::UFortUserWidget_DamageNumbers_OnPawnSet_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DamageNumbersUI.FortUserWidget_DamageNumbers.OnDamageNumberFinishedAnimating
// (Final, Native, Protected)
// Parameters:
// class UCommonUserWidget_DamageNumbers*Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortUserWidget_DamageNumbers::OnDamageNumberFinishedAnimating(class UCommonUserWidget_DamageNumbers* Widget)
{
	static auto Func = Class->GetFunction("FortUserWidget_DamageNumbers", "OnDamageNumberFinishedAnimating");

	Params::UFortUserWidget_DamageNumbers_OnDamageNumberFinishedAnimating_Params Parms;

	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DamageNumbersUI.FortUserWidget_DamageNumbers.OnDamageDealt
// (Final, Native, Protected, HasDefaults, BlueprintCallable)
// Parameters:
// double                             InDamage                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInCritical                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInFatal                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInShield                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      HitActor                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       Tags                                                             (Parm, NativeAccessSpecifierPublic)

void UFortUserWidget_DamageNumbers::OnDamageDealt(double InDamage, bool bInCritical, bool bInFatal, bool bInShield, class UActor* HitActor, const struct FVector& HitLocation, const struct FGameplayTagContainer& Tags)
{
	static auto Func = Class->GetFunction("FortUserWidget_DamageNumbers", "OnDamageDealt");

	Params::UFortUserWidget_DamageNumbers_OnDamageDealt_Params Parms;

	Parms.InDamage = InDamage;
	Parms.bInCritical = bInCritical;
	Parms.bInFatal = bInFatal;
	Parms.bInShield = bInShield;
	Parms.HitActor = HitActor;
	Parms.HitLocation = HitLocation;
	Parms.Tags = Tags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DamageNumbersUI.FortUserWidget_DamageNumbers.ClearBinding
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortUserWidget_DamageNumbers::ClearBinding()
{
	static auto Func = Class->GetFunction("FortUserWidget_DamageNumbers", "ClearBinding");

	Params::UFortUserWidget_DamageNumbers_ClearBinding_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
