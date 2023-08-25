#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class EnergyRuntime.FortComponent_Energy
// (None)

class UClass* UFortComponent_Energy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortComponent_Energy");

	return Clss;
}


// FortComponent_Energy EnergyRuntime.Default__FortComponent_Energy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortComponent_Energy* UFortComponent_Energy::GetDefaultObj()
{
	static class UFortComponent_Energy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortComponent_Energy*>(UFortComponent_Energy::StaticClass()->DefaultObject);

	return Default;
}


// Function EnergyRuntime.FortComponent_Energy.UseEnergy
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              OutAmountOfEnergyUsed                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AmountOfEnergyToUse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseEnergyEvenOnFailure                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     OptionalEnergyUser                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bBroadcastEnergyPercentChanged                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortComponent_Energy::UseEnergy(float* OutAmountOfEnergyUsed, float AmountOfEnergyToUse, bool bUseEnergyEvenOnFailure, class UObject* OptionalEnergyUser, bool bBroadcastEnergyPercentChanged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortComponent_Energy", "UseEnergy");

	Params::UFortComponent_Energy_UseEnergy_Params Parms{};

	Parms.AmountOfEnergyToUse = AmountOfEnergyToUse;
	Parms.bUseEnergyEvenOnFailure = bUseEnergyEvenOnFailure;
	Parms.OptionalEnergyUser = OptionalEnergyUser;
	Parms.bBroadcastEnergyPercentChanged = bBroadcastEnergyPercentChanged;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAmountOfEnergyUsed != nullptr)
		*OutAmountOfEnergyUsed = Parms.OutAmountOfEnergyUsed;

	return Parms.ReturnValue;

}


// Function EnergyRuntime.FortComponent_Energy.StopUsingEnergy
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                EnergyUseIdentifier                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     OptionalEnergyUser                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortComponent_Energy::StopUsingEnergy(struct FGameplayTag& EnergyUseIdentifier, class UObject* OptionalEnergyUser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortComponent_Energy", "StopUsingEnergy");

	Params::UFortComponent_Energy_StopUsingEnergy_Params Parms{};

	Parms.EnergyUseIdentifier = EnergyUseIdentifier;
	Parms.OptionalEnergyUser = OptionalEnergyUser;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnergyRuntime.FortComponent_Energy.StopAddingEnergy
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                EnergyUseIdentifier                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     OptionalEnergySource                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortComponent_Energy::StopAddingEnergy(struct FGameplayTag& EnergyUseIdentifier, class UObject* OptionalEnergySource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortComponent_Energy", "StopAddingEnergy");

	Params::UFortComponent_Energy_StopAddingEnergy_Params Parms{};

	Parms.EnergyUseIdentifier = EnergyUseIdentifier;
	Parms.OptionalEnergySource = OptionalEnergySource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnergyRuntime.FortComponent_Energy.StartUsingEnergy
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              EnergyToUseToStart                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EnergyToUsePerSecond                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                EnergyUseIdentifier                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     OptionalEnergyUser                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortComponent_Energy::StartUsingEnergy(float EnergyToUseToStart, float EnergyToUsePerSecond, struct FGameplayTag& EnergyUseIdentifier, class UObject* OptionalEnergyUser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortComponent_Energy", "StartUsingEnergy");

	Params::UFortComponent_Energy_StartUsingEnergy_Params Parms{};

	Parms.EnergyToUseToStart = EnergyToUseToStart;
	Parms.EnergyToUsePerSecond = EnergyToUsePerSecond;
	Parms.EnergyUseIdentifier = EnergyUseIdentifier;
	Parms.OptionalEnergyUser = OptionalEnergyUser;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnergyRuntime.FortComponent_Energy.StartAddingEnergy
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              EnergyToAddPerSecond                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                EnergySourceIdentifier                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     OptionalEnergySource                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortComponent_Energy::StartAddingEnergy(float EnergyToAddPerSecond, struct FGameplayTag& EnergySourceIdentifier, class UObject* OptionalEnergySource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortComponent_Energy", "StartAddingEnergy");

	Params::UFortComponent_Energy_StartAddingEnergy_Params Parms{};

	Parms.EnergyToAddPerSecond = EnergyToAddPerSecond;
	Parms.EnergySourceIdentifier = EnergySourceIdentifier;
	Parms.OptionalEnergySource = OptionalEnergySource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnergyRuntime.FortComponent_Energy.SetAllEnergyUsageFree
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShouldEnergyUsageBeFree                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortComponent_Energy::SetAllEnergyUsageFree(bool bShouldEnergyUsageBeFree)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortComponent_Energy", "SetAllEnergyUsageFree");

	Params::UFortComponent_Energy_SetAllEnergyUsageFree_Params Parms{};

	Parms.bShouldEnergyUsageBeFree = bShouldEnergyUsageBeFree;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnergyRuntime.FortComponent_Energy.RemoveRegenDataOverride
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                RegenOverrideIdentifier                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortComponent_Energy::RemoveRegenDataOverride(struct FGameplayTag& RegenOverrideIdentifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortComponent_Energy", "RemoveRegenDataOverride");

	Params::UFortComponent_Energy_RemoveRegenDataOverride_Params Parms{};

	Parms.RegenOverrideIdentifier = RegenOverrideIdentifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnergyRuntime.FortComponent_Energy.RegisterMutatorUpdatedDelegate
// (Final, Native, Private)
// Parameters:
// class UPawn*                       AffectedPawn                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortComponent_Energy::RegisterMutatorUpdatedDelegate(class UPawn* AffectedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortComponent_Energy", "RegisterMutatorUpdatedDelegate");

	Params::UFortComponent_Energy_RegisterMutatorUpdatedDelegate_Params Parms{};

	Parms.AffectedPawn = AffectedPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnergyRuntime.FortComponent_Energy.OnPlayerStatePawnSet
// (Final, Native, Private)
// Parameters:
// class UPlayerState*                Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       NewPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       OldPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortComponent_Energy::OnPlayerStatePawnSet(class UPlayerState* Player, class UPawn* NewPawn, class UPawn* OldPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortComponent_Energy", "OnPlayerStatePawnSet");

	Params::UFortComponent_Energy_OnPlayerStatePawnSet_Params Parms{};

	Parms.Player = Player;
	Parms.NewPawn = NewPawn;
	Parms.OldPawn = OldPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnergyRuntime.FortComponent_Energy.OnMutatorUpdated
// (Final, Native, Private)
// Parameters:

void UFortComponent_Energy::OnMutatorUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortComponent_Energy", "OnMutatorUpdated");

	Params::UFortComponent_Energy_OnMutatorUpdated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnergyRuntime.FortComponent_Energy.HasSufficientEnergy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              EnergyAmountToTest                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortComponent_Energy::HasSufficientEnergy(float EnergyAmountToTest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortComponent_Energy", "HasSufficientEnergy");

	Params::UFortComponent_Energy_HasSufficientEnergy_Params Parms{};

	Parms.EnergyAmountToTest = EnergyAmountToTest;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnergyRuntime.FortComponent_Energy.HandleAbilitySystemComponentInvalidated
// (Final, Native, Private)
// Parameters:

void UFortComponent_Energy::HandleAbilitySystemComponentInvalidated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortComponent_Energy", "HandleAbilitySystemComponentInvalidated");

	Params::UFortComponent_Energy_HandleAbilitySystemComponentInvalidated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnergyRuntime.FortComponent_Energy.HandleAbilitySystemComponentInitialized
// (Final, Native, Private)
// Parameters:
// class UFortAbilitySystemComponent* AbilitySystemComponent                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlayerPawn*             PlayerPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortComponent_Energy::HandleAbilitySystemComponentInitialized(class UFortAbilitySystemComponent* AbilitySystemComponent, class UFortPlayerPawn* PlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortComponent_Energy", "HandleAbilitySystemComponentInitialized");

	Params::UFortComponent_Energy_HandleAbilitySystemComponentInitialized_Params Parms{};

	Parms.AbilitySystemComponent = AbilitySystemComponent;
	Parms.PlayerPawn = PlayerPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnergyRuntime.FortComponent_Energy.GetCurrentEnergyPercentage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortComponent_Energy::GetCurrentEnergyPercentage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortComponent_Energy", "GetCurrentEnergyPercentage");

	Params::UFortComponent_Energy_GetCurrentEnergyPercentage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnergyRuntime.FortComponent_Energy.ApplyRegenDataOverride
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                RegenOverrideIdentifier                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewRechargeAmountPerSecond                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewRechargeDelayInSeconds                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewRechargePercentageLimit                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortComponent_Energy::ApplyRegenDataOverride(struct FGameplayTag& RegenOverrideIdentifier, float NewRechargeAmountPerSecond, float NewRechargeDelayInSeconds, float NewRechargePercentageLimit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortComponent_Energy", "ApplyRegenDataOverride");

	Params::UFortComponent_Energy_ApplyRegenDataOverride_Params Parms{};

	Parms.RegenOverrideIdentifier = RegenOverrideIdentifier;
	Parms.NewRechargeAmountPerSecond = NewRechargeAmountPerSecond;
	Parms.NewRechargeDelayInSeconds = NewRechargeDelayInSeconds;
	Parms.NewRechargePercentageLimit = NewRechargePercentageLimit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnergyRuntime.FortComponent_Energy.AddEnergy
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              OutAmountOfEnergyAdded                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AmountOfEnergyToAdd                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     OptionalEnergySource                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bBroadcastEnergyPercentChanged                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortComponent_Energy::AddEnergy(float* OutAmountOfEnergyAdded, float AmountOfEnergyToAdd, class UObject* OptionalEnergySource, bool bBroadcastEnergyPercentChanged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortComponent_Energy", "AddEnergy");

	Params::UFortComponent_Energy_AddEnergy_Params Parms{};

	Parms.AmountOfEnergyToAdd = AmountOfEnergyToAdd;
	Parms.OptionalEnergySource = OptionalEnergySource;
	Parms.bBroadcastEnergyPercentChanged = bBroadcastEnergyPercentChanged;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAmountOfEnergyAdded != nullptr)
		*OutAmountOfEnergyAdded = Parms.OutAmountOfEnergyAdded;

	return Parms.ReturnValue;

}

}


