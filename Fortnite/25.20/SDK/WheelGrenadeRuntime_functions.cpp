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


// Function WheelGrenadeRuntime.WheelGrenadeWheel.HandleOutOfHealth
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              InDamage                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       InTags                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleInEffectContext                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class AController*                 InEventInstigator                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      InDamageCauser                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWheelGrenadeWheel::HandleOutOfHealth(float InDamage, struct FGameplayTagContainer& InTags, struct FGameplayEffectContextHandle& InEffectContext, class AController* InEventInstigator, class AActor* InDamageCauser)
{
	static auto Func = Class->GetFunction("WheelGrenadeWheel", "HandleOutOfHealth");

	Params::AWheelGrenadeWheel_HandleOutOfHealth_Params Parms;

	Parms.InDamage = InDamage;
	Parms.InTags = InTags;
	Parms.InEffectContext = InEffectContext;
	Parms.InEventInstigator = InEventInstigator;
	Parms.InDamageCauser = InDamageCauser;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function WheelGrenadeRuntime.WheelGrenadeWheel.HandleDamaged
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       InTags                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleEffectContext                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class AController*                 EventInstigator                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWheelGrenadeWheel::HandleDamaged(float Damage, struct FGameplayTagContainer& InTags, struct FGameplayEffectContextHandle& EffectContext, class AController* EventInstigator, class AActor* DamageCauser)
{
	static auto Func = Class->GetFunction("WheelGrenadeWheel", "HandleDamaged");

	Params::AWheelGrenadeWheel_HandleDamaged_Params Parms;

	Parms.Damage = Damage;
	Parms.InTags = InTags;
	Parms.EffectContext = EffectContext;
	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WheelGrenadeRuntime.WheelGrenadeWheel.GetMaxHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AWheelGrenadeWheel::GetMaxHealth()
{
	static auto Func = Class->GetFunction("WheelGrenadeWheel", "GetMaxHealth");

	Params::AWheelGrenadeWheel_GetMaxHealth_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function WheelGrenadeRuntime.WheelGrenadeWheel.GetHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AWheelGrenadeWheel::GetHealth()
{
	static auto Func = Class->GetFunction("WheelGrenadeWheel", "GetHealth");

	Params::AWheelGrenadeWheel_GetHealth_Params Parms;


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
