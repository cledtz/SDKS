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


// Function HitTicksUI.FortUserWidget_HitTicks.UpdateTickMarkerOpacity
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              NewOpacity                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortUserWidget_HitTicks::UpdateTickMarkerOpacity(float NewOpacity)
{
	static auto Func = Class->GetFunction("FortUserWidget_HitTicks", "UpdateTickMarkerOpacity");

	Params::UFortUserWidget_HitTicks_UpdateTickMarkerOpacity_Params Parms;

	Parms.NewOpacity = NewOpacity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HitTicksUI.FortUserWidget_HitTicks.OnShieldBreak
// (Final, Native, Protected)
// Parameters:
// bool                               bInOverShield                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortUserWidget_HitTicks::OnShieldBreak(bool bInOverShield)
{
	static auto Func = Class->GetFunction("FortUserWidget_HitTicks", "OnShieldBreak");

	Params::UFortUserWidget_HitTicks_OnShieldBreak_Params Parms;

	Parms.bInOverShield = bInOverShield;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HitTicksUI.FortUserWidget_HitTicks.OnReticleSettingsChanged
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortUserWidget_HitTicks::OnReticleSettingsChanged()
{
	static auto Func = Class->GetFunction("FortUserWidget_HitTicks", "OnReticleSettingsChanged");

	Params::UFortUserWidget_HitTicks_OnReticleSettingsChanged_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HitTicksUI.FortUserWidget_HitTicks.OnPawnSet
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortUserWidget_HitTicks::OnPawnSet()
{
	static auto Func = Class->GetFunction("FortUserWidget_HitTicks", "OnPawnSet");

	Params::UFortUserWidget_HitTicks_OnPawnSet_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HitTicksUI.FortUserWidget_HitTicks.OnDisplayHitNotify
// (Final, Native, Protected, HasDefaults, BlueprintCallable)
// Parameters:
// double                             InDamage                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInCritical                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInFatal                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInShield                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      InPawn                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       Tags                                                             (Parm, NativeAccessSpecifierPublic)

void UFortUserWidget_HitTicks::OnDisplayHitNotify(double InDamage, bool bInCritical, bool bInFatal, bool bInShield, class UActor* InPawn, const struct FVector& HitLocation, const struct FGameplayTagContainer& Tags)
{
	static auto Func = Class->GetFunction("FortUserWidget_HitTicks", "OnDisplayHitNotify");

	Params::UFortUserWidget_HitTicks_OnDisplayHitNotify_Params Parms;

	Parms.InDamage = InDamage;
	Parms.bInCritical = bInCritical;
	Parms.bInFatal = bInFatal;
	Parms.bInShield = bInShield;
	Parms.InPawn = InPawn;
	Parms.HitLocation = HitLocation;
	Parms.Tags = Tags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HitTicksUI.FortUserWidget_HitTicks.HudScaleChanged
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortUserWidget_HitTicks::HudScaleChanged()
{
	static auto Func = Class->GetFunction("FortUserWidget_HitTicks", "HudScaleChanged");

	Params::UFortUserWidget_HitTicks_HudScaleChanged_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
