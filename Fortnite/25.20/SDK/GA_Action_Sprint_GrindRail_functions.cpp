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


// Function GA_Action_Sprint_GrindRail.GA_Action_Sprint_GrindRail_C.OnPress_BBDAB9B94E9778E3575BD1A1551EA10E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TimeWaited                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Action_Sprint_GrindRail_C::OnPress_BBDAB9B94E9778E3575BD1A1551EA10E(float TimeWaited)
{
	static auto Func = Class->GetFunction("GA_Action_Sprint_GrindRail_C", "OnPress_BBDAB9B94E9778E3575BD1A1551EA10E");

	Params::UGA_Action_Sprint_GrindRail_C_OnPress_BBDAB9B94E9778E3575BD1A1551EA10E_Params Parms;

	Parms.TimeWaited = TimeWaited;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Action_Sprint_GrindRail.GA_Action_Sprint_GrindRail_C.OnRelease_5B08467A452F5716E7C96290186D3E19
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TimeHeld                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Action_Sprint_GrindRail_C::OnRelease_5B08467A452F5716E7C96290186D3E19(float TimeHeld)
{
	static auto Func = Class->GetFunction("GA_Action_Sprint_GrindRail_C", "OnRelease_5B08467A452F5716E7C96290186D3E19");

	Params::UGA_Action_Sprint_GrindRail_C_OnRelease_5B08467A452F5716E7C96290186D3E19_Params Parms;

	Parms.TimeHeld = TimeHeld;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Action_Sprint_GrindRail.GA_Action_Sprint_GrindRail_C.OnPress_EB1E0A904B5B510E2C8590AD3B367EDD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TimeWaited                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Action_Sprint_GrindRail_C::OnPress_EB1E0A904B5B510E2C8590AD3B367EDD(float TimeWaited)
{
	static auto Func = Class->GetFunction("GA_Action_Sprint_GrindRail_C", "OnPress_EB1E0A904B5B510E2C8590AD3B367EDD");

	Params::UGA_Action_Sprint_GrindRail_C_OnPress_EB1E0A904B5B510E2C8590AD3B367EDD_Params Parms;

	Parms.TimeWaited = TimeWaited;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Action_Sprint_GrindRail.GA_Action_Sprint_GrindRail_C.OnRelease_CFE6F71C4CB50BE9AD6253AFAA0862C2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TimeHeld                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Action_Sprint_GrindRail_C::OnRelease_CFE6F71C4CB50BE9AD6253AFAA0862C2(float TimeHeld)
{
	static auto Func = Class->GetFunction("GA_Action_Sprint_GrindRail_C", "OnRelease_CFE6F71C4CB50BE9AD6253AFAA0862C2");

	Params::UGA_Action_Sprint_GrindRail_C_OnRelease_CFE6F71C4CB50BE9AD6253AFAA0862C2_Params Parms;

	Parms.TimeHeld = TimeHeld;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Action_Sprint_GrindRail.GA_Action_Sprint_GrindRail_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Action_Sprint_GrindRail_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_Action_Sprint_GrindRail_C", "K2_ActivateAbility");

	Params::UGA_Action_Sprint_GrindRail_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Action_Sprint_GrindRail.GA_Action_Sprint_GrindRail_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Action_Sprint_GrindRail_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GA_Action_Sprint_GrindRail_C", "K2_OnEndAbility");

	Params::UGA_Action_Sprint_GrindRail_C_K2_OnEndAbility_Params Parms;

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Action_Sprint_GrindRail.GA_Action_Sprint_GrindRail_C.FailedToActivatePassiveAbility
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UGA_Action_Sprint_GrindRail_C::FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo)
{
	static auto Func = Class->GetFunction("GA_Action_Sprint_GrindRail_C", "FailedToActivatePassiveAbility");

	Params::UGA_Action_Sprint_GrindRail_C_FailedToActivatePassiveAbility_Params Parms;

	Parms.ActorInfo = ActorInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Action_Sprint_GrindRail.GA_Action_Sprint_GrindRail_C.ExecuteUbergraph_GA_Action_Sprint_GrindRail
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_TimeHeld_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitInputRelease*CallFunc_WaitInputRelease_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_TimeWaited                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitInputPress* CallFunc_WaitInputPress_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_TimeHeld                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitInputRelease*CallFunc_WaitInputRelease_ReturnValue_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitInputPress* CallFunc_WaitInputPress_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// class APlayerPawn_Athena_C*        K2Node_DynamicCast_AsPlayer_Pawn_Athena                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GrindingComponent_C*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityActorInfo   K2Node_Event_ActorInfo                                           (ContainsInstancedReference)
// float                              Temp_real_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_TimeWaited_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_HasAuthority_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Action_Sprint_GrindRail_C::ExecuteUbergraph_GA_Action_Sprint_GrindRail(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_TimeHeld_1, float Temp_real_Variable, class UAbilityTask_WaitInputRelease* CallFunc_WaitInputRelease_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float K2Node_CustomEvent_TimeWaited, float Temp_real_Variable_1, class UAbilityTask_WaitInputPress* CallFunc_WaitInputPress_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float K2Node_CustomEvent_TimeHeld, float Temp_real_Variable_2, class UAbilityTask_WaitInputRelease* CallFunc_WaitInputRelease_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_Event_bWasCancelled, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAbilityTask_WaitInputPress* CallFunc_WaitInputPress_ReturnValue_1, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_3, class UBP_GrindingComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, const struct FGameplayAbilityActorInfo& K2Node_Event_ActorInfo, float Temp_real_Variable_3, float K2Node_CustomEvent_TimeWaited_1, bool CallFunc_K2_HasAuthority_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Action_Sprint_GrindRail_C", "ExecuteUbergraph_GA_Action_Sprint_GrindRail");

	Params::UGA_Action_Sprint_GrindRail_C_ExecuteUbergraph_GA_Action_Sprint_GrindRail_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_TimeHeld_1 = K2Node_CustomEvent_TimeHeld_1;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_WaitInputRelease_ReturnValue = CallFunc_WaitInputRelease_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_TimeWaited = K2Node_CustomEvent_TimeWaited;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.CallFunc_WaitInputPress_ReturnValue = CallFunc_WaitInputPress_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_TimeHeld = K2Node_CustomEvent_TimeHeld;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.CallFunc_WaitInputRelease_ReturnValue_1 = CallFunc_WaitInputRelease_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_WaitInputPress_ReturnValue_1 = CallFunc_WaitInputPress_ReturnValue_1;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Athena = K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_Event_ActorInfo = K2Node_Event_ActorInfo;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.K2Node_CustomEvent_TimeWaited_1 = K2Node_CustomEvent_TimeWaited_1;
	Parms.CallFunc_K2_HasAuthority_ReturnValue = CallFunc_K2_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
