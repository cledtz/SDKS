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


// Function WheelGrenadeRuntime.WheelGrenadeWheel.HandleOutOfHealth
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              InDamage                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       InTags                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleInEffectContext                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UController*                 InEventInstigator                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      InDamageCauser                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheelGrenadeWheel::HandleOutOfHealth(float InDamage, struct FGameplayTagContainer& InTags, struct FGameplayEffectContextHandle& InEffectContext, class UController* InEventInstigator, class UActor* InDamageCauser)
{
	static auto Func = Class->GetFunction("WheelGrenadeWheel", "HandleOutOfHealth");

	Params::UWheelGrenadeWheel_HandleOutOfHealth_Params Parms;

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
// class UController*                 EventInstigator                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheelGrenadeWheel::HandleDamaged(float Damage, struct FGameplayTagContainer& InTags, struct FGameplayEffectContextHandle& EffectContext, class UController* EventInstigator, class UActor* DamageCauser)
{
	static auto Func = Class->GetFunction("WheelGrenadeWheel", "HandleDamaged");

	Params::UWheelGrenadeWheel_HandleDamaged_Params Parms;

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

float UWheelGrenadeWheel::GetMaxHealth()
{
	static auto Func = Class->GetFunction("WheelGrenadeWheel", "GetMaxHealth");

	Params::UWheelGrenadeWheel_GetMaxHealth_Params Parms;


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

float UWheelGrenadeWheel::GetHealth()
{
	static auto Func = Class->GetFunction("WheelGrenadeWheel", "GetHealth");

	Params::UWheelGrenadeWheel_GetHealth_Params Parms;


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
