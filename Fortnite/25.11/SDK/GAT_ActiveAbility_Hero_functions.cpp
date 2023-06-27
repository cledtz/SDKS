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


// Function GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C.IncrementAbilityCostAndCooldown
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Energy_Cost                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Adjust_Cooldown                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Cooldown_Increment                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FActiveGameplayEffectHandle>Active_Cooldown_Modifiers                                        (Parm, OutParm)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingSpec_ReturnValue                            ()
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_AssignTagSetByCallerMagnitude_ReturnValue               ()
// struct FActiveGameplayEffectHandle CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue           (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingSpec_ReturnValue_1                          ()
// struct FGameplayEffectSpecHandle   CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1             ()
// struct FActiveGameplayEffectHandle CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue_1         (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_1  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_ActiveAbility_Hero_C::IncrementAbilityCostAndCooldown(double Energy_Cost, bool Adjust_Cooldown, double Cooldown_Increment, TArray<struct FActiveGameplayEffectHandle>* Active_Cooldown_Modifiers, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue_1, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue_1, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_1)
{
	static auto Func = Class->GetFunction("GAT_ActiveAbility_Hero_C", "IncrementAbilityCostAndCooldown");

	Params::UGAT_ActiveAbility_Hero_C_IncrementAbilityCostAndCooldown_Params Parms;

	Parms.Energy_Cost = Energy_Cost;
	Parms.Adjust_Cooldown = Adjust_Cooldown;
	Parms.Cooldown_Increment = Cooldown_Increment;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_MakeOutgoingSpec_ReturnValue = CallFunc_MakeOutgoingSpec_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue;
	Parms.CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue = CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_MakeOutgoingSpec_ReturnValue_1 = CallFunc_MakeOutgoingSpec_ReturnValue_1;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1 = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1;
	Parms.CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue_1 = CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue_1;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast = CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_1 = CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Active_Cooldown_Modifiers != nullptr)
		*Active_Cooldown_Modifiers = Parms.Active_Cooldown_Modifiers;

}


// Function GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C.CommitAbilityWithEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passed                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CheckAbilityCooldown_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CheckAbilityCost_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_ActiveAbility_Hero_C::CommitAbilityWithEvent(bool* Passed, bool CallFunc_K2_CheckAbilityCooldown_ReturnValue, bool CallFunc_K2_CheckAbilityCost_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue)
{
	static auto Func = Class->GetFunction("GAT_ActiveAbility_Hero_C", "CommitAbilityWithEvent");

	Params::UGAT_ActiveAbility_Hero_C_CommitAbilityWithEvent_Params Parms;

	Parms.CallFunc_K2_CheckAbilityCooldown_ReturnValue = CallFunc_K2_CheckAbilityCooldown_ReturnValue;
	Parms.CallFunc_K2_CheckAbilityCost_ReturnValue = CallFunc_K2_CheckAbilityCost_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Passed != nullptr)
		*Passed = Parms.Passed;

}


// Function GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGAT_ActiveAbility_Hero_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GAT_ActiveAbility_Hero_C", "K2_ActivateAbility");

	Params::UGAT_ActiveAbility_Hero_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_ActiveAbility_Hero_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GAT_ActiveAbility_Hero_C", "K2_OnEndAbility");

	Params::UGAT_ActiveAbility_Hero_C_K2_OnEndAbility_Params Parms;

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C.ExecuteUbergraph_GAT_ActiveAbility_Hero
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbilityCooldown_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_ActiveAbility_Hero_C::ExecuteUbergraph_GAT_ActiveAbility_Hero(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool K2Node_Event_bWasCancelled, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_K2_CommitAbilityCooldown_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_Array_Get_Item, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("GAT_ActiveAbility_Hero_C", "ExecuteUbergraph_GAT_ActiveAbility_Hero");

	Params::UGAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_CommitAbilityCooldown_ReturnValue = CallFunc_K2_CommitAbilityCooldown_ReturnValue;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
