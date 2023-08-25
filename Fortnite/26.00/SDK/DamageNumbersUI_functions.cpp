#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DamageNumbersUI.CommonUserWidget_DamageNumbers
// (None)

class UClass* UCommonUserWidget_DamageNumbers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonUserWidget_DamageNumbers");

	return Clss;
}


// CommonUserWidget_DamageNumbers DamageNumbersUI.Default__CommonUserWidget_DamageNumbers
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonUserWidget_DamageNumbers* UCommonUserWidget_DamageNumbers::GetDefaultObj()
{
	static class UCommonUserWidget_DamageNumbers* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonUserWidget_DamageNumbers*>(UCommonUserWidget_DamageNumbers::StaticClass()->DefaultObject);

	return Default;
}


// Function DamageNumbersUI.CommonUserWidget_DamageNumbers.UpdateScreenSpacePosition
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UCommonUserWidget_DamageNumbers::UpdateScreenSpacePosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUserWidget_DamageNumbers", "UpdateScreenSpacePosition");

	Params::UCommonUserWidget_DamageNumbers_UpdateScreenSpacePosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DamageNumbersUI.CommonUserWidget_DamageNumbers.Reset
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UCommonUserWidget_DamageNumbers::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUserWidget_DamageNumbers", "Reset");

	Params::UCommonUserWidget_DamageNumbers_Reset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DamageNumbersUI.CommonUserWidget_DamageNumbers.OnShieldBreak
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsOvershield                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonUserWidget_DamageNumbers::OnShieldBreak(bool bIsOvershield)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUserWidget_DamageNumbers", "OnShieldBreak");

	Params::UCommonUserWidget_DamageNumbers_OnShieldBreak_Params Parms{};

	Parms.bIsOvershield = bIsOvershield;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DamageNumbersUI.CommonUserWidget_DamageNumbers.OnDamageDealt
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// double                             InDamage                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      InActor                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInShield                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInCrit                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InWorldSpacePos                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInEMP                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonUserWidget_DamageNumbers::OnDamageDealt(double InDamage, class UActor* InActor, bool bInShield, bool bInCrit, const struct FVector& InWorldSpacePos, bool bInEMP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUserWidget_DamageNumbers", "OnDamageDealt");

	Params::UCommonUserWidget_DamageNumbers_OnDamageDealt_Params Parms{};

	Parms.InDamage = InDamage;
	Parms.InActor = InActor;
	Parms.bInShield = bInShield;
	Parms.bInCrit = bInCrit;
	Parms.InWorldSpacePos = InWorldSpacePos;
	Parms.bInEMP = bInEMP;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class DamageNumbersUI.FortUserWidget_DamageNumbers
// (None)

class UClass* UFortUserWidget_DamageNumbers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortUserWidget_DamageNumbers");

	return Clss;
}


// FortUserWidget_DamageNumbers DamageNumbersUI.Default__FortUserWidget_DamageNumbers
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortUserWidget_DamageNumbers* UFortUserWidget_DamageNumbers::GetDefaultObj()
{
	static class UFortUserWidget_DamageNumbers* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortUserWidget_DamageNumbers*>(UFortUserWidget_DamageNumbers::StaticClass()->DefaultObject);

	return Default;
}


// Function DamageNumbersUI.FortUserWidget_DamageNumbers.UpdateBinding
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortUserWidget_DamageNumbers::UpdateBinding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUserWidget_DamageNumbers", "UpdateBinding");

	Params::UFortUserWidget_DamageNumbers_UpdateBinding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DamageNumbersUI.FortUserWidget_DamageNumbers.OnShieldBreak
// (Final, Native, Protected)
// Parameters:
// bool                               bInOverShield                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortUserWidget_DamageNumbers::OnShieldBreak(bool bInOverShield)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUserWidget_DamageNumbers", "OnShieldBreak");

	Params::UFortUserWidget_DamageNumbers_OnShieldBreak_Params Parms{};

	Parms.bInOverShield = bInOverShield;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DamageNumbersUI.FortUserWidget_DamageNumbers.OnPawnSet
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortUserWidget_DamageNumbers::OnPawnSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUserWidget_DamageNumbers", "OnPawnSet");

	Params::UFortUserWidget_DamageNumbers_OnPawnSet_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DamageNumbersUI.FortUserWidget_DamageNumbers.OnDamageNumberFinishedAnimating
// (Final, Native, Protected)
// Parameters:
// class UCommonUserWidget_DamageNumbers*Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortUserWidget_DamageNumbers::OnDamageNumberFinishedAnimating(class UCommonUserWidget_DamageNumbers* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUserWidget_DamageNumbers", "OnDamageNumberFinishedAnimating");

	Params::UFortUserWidget_DamageNumbers_OnDamageNumberFinishedAnimating_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUserWidget_DamageNumbers", "OnDamageDealt");

	Params::UFortUserWidget_DamageNumbers_OnDamageDealt_Params Parms{};

	Parms.InDamage = InDamage;
	Parms.bInCritical = bInCritical;
	Parms.bInFatal = bInFatal;
	Parms.bInShield = bInShield;
	Parms.HitActor = HitActor;
	Parms.HitLocation = HitLocation;
	Parms.Tags = Tags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DamageNumbersUI.FortUserWidget_DamageNumbers.ClearBinding
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortUserWidget_DamageNumbers::ClearBinding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUserWidget_DamageNumbers", "ClearBinding");

	Params::UFortUserWidget_DamageNumbers_ClearBinding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class DamageNumbersUI.FortGameSettingRegistryExtension_DamageNumbers
// (None)

class UClass* UFortGameSettingRegistryExtension_DamageNumbers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameSettingRegistryExtension_DamageNumbers");

	return Clss;
}


// FortGameSettingRegistryExtension_DamageNumbers DamageNumbersUI.Default__FortGameSettingRegistryExtension_DamageNumbers
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameSettingRegistryExtension_DamageNumbers* UFortGameSettingRegistryExtension_DamageNumbers::GetDefaultObj()
{
	static class UFortGameSettingRegistryExtension_DamageNumbers* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameSettingRegistryExtension_DamageNumbers*>(UFortGameSettingRegistryExtension_DamageNumbers::StaticClass()->DefaultObject);

	return Default;
}

}


