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


// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.DoFailSafeUnholster
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetConsoleVariableBoolValue_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetConsoleVariableBoolValue_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Ascender_Smash_C::DoFailSafeUnholster(bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_Ascender_Smash_C", "DoFailSafeUnholster");

	Params::UGA_Athena_Ascender_Smash_C_DoFailSafeUnholster_Params Parms;

	Parms.CallFunc_GetConsoleVariableBoolValue_ReturnValue = CallFunc_GetConsoleVariableBoolValue_ReturnValue;
	Parms.CallFunc_GetConsoleVariableBoolValue_ReturnValue_1 = CallFunc_GetConsoleVariableBoolValue_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.DoUnholster
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetConsoleVariableBoolValue_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Ascender_Smash_C::DoUnholster(bool CallFunc_GetConsoleVariableBoolValue_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_Ascender_Smash_C", "DoUnholster");

	Params::UGA_Athena_Ascender_Smash_C_DoUnholster_Params Parms;

	Parms.CallFunc_GetConsoleVariableBoolValue_ReturnValue = CallFunc_GetConsoleVariableBoolValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.DoHolster
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetConsoleVariableBoolValue_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Ascender_Smash_C::DoHolster(bool CallFunc_GetConsoleVariableBoolValue_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_Ascender_Smash_C", "DoHolster");

	Params::UGA_Athena_Ascender_Smash_C_DoHolster_Params Parms;

	Parms.CallFunc_GetConsoleVariableBoolValue_ReturnValue = CallFunc_GetConsoleVariableBoolValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.IsPlayerUsingHandle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_GetPawnUsingHandle_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_Athena_Ascender_Smash_C::IsPlayerUsingHandle(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFortPlayerPawn* CallFunc_GetPawnUsingHandle_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_Ascender_Smash_C", "IsPlayerUsingHandle");

	Params::UGA_Athena_Ascender_Smash_C_IsPlayerUsingHandle_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetPawnUsingHandle_ReturnValue = CallFunc_GetPawnUsingHandle_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.OnCancelled_899182BF4C098785CCBCFD85AA84455F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Ascender_Smash_C::OnCancelled_899182BF4C098785CCBCFD85AA84455F()
{
	static auto Func = Class->GetFunction("GA_Athena_Ascender_Smash_C", "OnCancelled_899182BF4C098785CCBCFD85AA84455F");

	Params::UGA_Athena_Ascender_Smash_C_OnCancelled_899182BF4C098785CCBCFD85AA84455F_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.OnInterrupted_899182BF4C098785CCBCFD85AA84455F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Ascender_Smash_C::OnInterrupted_899182BF4C098785CCBCFD85AA84455F()
{
	static auto Func = Class->GetFunction("GA_Athena_Ascender_Smash_C", "OnInterrupted_899182BF4C098785CCBCFD85AA84455F");

	Params::UGA_Athena_Ascender_Smash_C_OnInterrupted_899182BF4C098785CCBCFD85AA84455F_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.OnBlendOut_899182BF4C098785CCBCFD85AA84455F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Ascender_Smash_C::OnBlendOut_899182BF4C098785CCBCFD85AA84455F()
{
	static auto Func = Class->GetFunction("GA_Athena_Ascender_Smash_C", "OnBlendOut_899182BF4C098785CCBCFD85AA84455F");

	Params::UGA_Athena_Ascender_Smash_C_OnBlendOut_899182BF4C098785CCBCFD85AA84455F_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.OnCompleted_899182BF4C098785CCBCFD85AA84455F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Ascender_Smash_C::OnCompleted_899182BF4C098785CCBCFD85AA84455F()
{
	static auto Func = Class->GetFunction("GA_Athena_Ascender_Smash_C", "OnCompleted_899182BF4C098785CCBCFD85AA84455F");

	Params::UGA_Athena_Ascender_Smash_C_OnCompleted_899182BF4C098785CCBCFD85AA84455F_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.ZipliningComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Ascender_Smash_C::ZipliningComplete()
{
	static auto Func = Class->GetFunction("GA_Athena_Ascender_Smash_C", "ZipliningComplete");

	Params::UGA_Athena_Ascender_Smash_C_ZipliningComplete_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.SurroundingsCheck_SmashObjects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Ascender_Smash_C::SurroundingsCheck_SmashObjects()
{
	static auto Func = Class->GetFunction("GA_Athena_Ascender_Smash_C", "SurroundingsCheck_SmashObjects");

	Params::UGA_Athena_Ascender_Smash_C_SurroundingsCheck_SmashObjects_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.SurroundingsCheck_MotorCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Ascender_Smash_C::SurroundingsCheck_MotorCheck()
{
	static auto Func = Class->GetFunction("GA_Athena_Ascender_Smash_C", "SurroundingsCheck_MotorCheck");

	Params::UGA_Athena_Ascender_Smash_C_SurroundingsCheck_MotorCheck_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.GameplayTagEvent_ZiplineEnter
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_Ascender_Smash_C::GameplayTagEvent_ZiplineEnter(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GA_Athena_Ascender_Smash_C", "GameplayTagEvent_ZiplineEnter");

	Params::UGA_Athena_Ascender_Smash_C_GameplayTagEvent_ZiplineEnter_Params Parms;

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.GameplayTagEvent_ZiplineExit
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_Ascender_Smash_C::GameplayTagEvent_ZiplineExit(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GA_Athena_Ascender_Smash_C", "GameplayTagEvent_ZiplineExit");

	Params::UGA_Athena_Ascender_Smash_C_GameplayTagEvent_ZiplineExit_Params Parms;

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.FallingTagRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Ascender_Smash_C::FallingTagRemoved()
{
	static auto Func = Class->GetFunction("GA_Athena_Ascender_Smash_C", "FallingTagRemoved");

	Params::UGA_Athena_Ascender_Smash_C_FallingTagRemoved_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.Pre_BeginZiplinging
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Ascender_Smash_C::Pre_BeginZiplinging()
{
	static auto Func = Class->GetFunction("GA_Athena_Ascender_Smash_C", "Pre_BeginZiplinging");

	Params::UGA_Athena_Ascender_Smash_C_Pre_BeginZiplinging_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.HandleGameplayEventTag
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_Ascender_Smash_C::HandleGameplayEventTag(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GA_Athena_Ascender_Smash_C", "HandleGameplayEventTag");

	Params::UGA_Athena_Ascender_Smash_C_HandleGameplayEventTag_Params Parms;

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.ZiplinePostBegin_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Ascender_Smash_C::ZiplinePostBegin_Event()
{
	static auto Func = Class->GetFunction("GA_Athena_Ascender_Smash_C", "ZiplinePostBegin_Event");

	Params::UGA_Athena_Ascender_Smash_C_ZiplinePostBegin_Event_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.ExecuteUbergraph_GA_Athena_Ascender_Smash
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCustomGender       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerUsingHandle_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerUsingHandle_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerUsingHandle_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerUsingHandle_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData_2                                         (ConstParm)
// struct FGameplayEventData          K2Node_Event_EventData_1                                         (ConstParm)
// class UB_Athena_Zipline_Ascender_C*K2Node_DynamicCast_AsB_Athena_Zipline_Ascender                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_1                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1            (NoDestructor, HasGetValueTypeHash)
// enum class EFortCustomGender       CallFunc_GetCharacterGender_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Select_Default_2                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Ascender_Smash_C::ExecuteUbergraph_GA_Athena_Ascender_Smash(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, enum class EFortCustomGender Temp_byte_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsPlayerUsingHandle_ReturnValue, bool CallFunc_IsPlayerUsingHandle_ReturnValue_1, bool CallFunc_IsPlayerUsingHandle_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAnimMontage* K2Node_Select_Default, bool CallFunc_IsPlayerUsingHandle_ReturnValue_3, class UAnimMontage* K2Node_Select_Default_1, const struct FGameplayEventData& K2Node_Event_EventData_2, const struct FGameplayEventData& K2Node_Event_EventData_1, class UB_Athena_Zipline_Ascender_C* K2Node_DynamicCast_AsB_Athena_Zipline_Ascender, bool K2Node_DynamicCast_bSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1, enum class EFortCustomGender CallFunc_GetCharacterGender_ReturnValue, class UAnimMontage* K2Node_Select_Default_2, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool CallFunc_IsValid_ReturnValue_1)
{
	static auto Func = Class->GetFunction("GA_Athena_Ascender_Smash_C", "ExecuteUbergraph_GA_Athena_Ascender_Smash");

	Params::UGA_Athena_Ascender_Smash_C_ExecuteUbergraph_GA_Athena_Ascender_Smash_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_IsPlayerUsingHandle_ReturnValue = CallFunc_IsPlayerUsingHandle_ReturnValue;
	Parms.CallFunc_IsPlayerUsingHandle_ReturnValue_1 = CallFunc_IsPlayerUsingHandle_ReturnValue_1;
	Parms.CallFunc_IsPlayerUsingHandle_ReturnValue_2 = CallFunc_IsPlayerUsingHandle_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsPlayerUsingHandle_ReturnValue_3 = CallFunc_IsPlayerUsingHandle_ReturnValue_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Event_EventData_2 = K2Node_Event_EventData_2;
	Parms.K2Node_Event_EventData_1 = K2Node_Event_EventData_1;
	Parms.K2Node_DynamicCast_AsB_Athena_Zipline_Ascender = K2Node_DynamicCast_AsB_Athena_Zipline_Ascender;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_1 = CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1 = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1;
	Parms.CallFunc_GetCharacterGender_ReturnValue = CallFunc_GetCharacterGender_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
