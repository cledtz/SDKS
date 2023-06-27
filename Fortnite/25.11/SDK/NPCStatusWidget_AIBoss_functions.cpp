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


// Function NPCStatusWidget_AIBoss.NPCStatusWidget_AIBoss_C.SetMaxShield
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             MaxShield                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_FFloor64_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCStatusWidget_AIBoss_C::SetMaxShield(double MaxShield, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, int64 CallFunc_FFloor64_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("NPCStatusWidget_AIBoss_C", "SetMaxShield");

	Params::UNPCStatusWidget_AIBoss_C_SetMaxShield_Params Parms;

	Parms.MaxShield = MaxShield;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_FFloor64_ReturnValue = CallFunc_FFloor64_ReturnValue;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusWidget_AIBoss.NPCStatusWidget_AIBoss_C.SetMaxHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             MaxHealth                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_FFloor64_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCStatusWidget_AIBoss_C::SetMaxHealth(double MaxHealth, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, int64 CallFunc_FFloor64_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("NPCStatusWidget_AIBoss_C", "SetMaxHealth");

	Params::UNPCStatusWidget_AIBoss_C_SetMaxHealth_Params Parms;

	Parms.MaxHealth = MaxHealth;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_FFloor64_ReturnValue = CallFunc_FFloor64_ReturnValue;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusWidget_AIBoss.NPCStatusWidget_AIBoss_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UNPCStatusWidget_AIBoss_C::Construct()
{
	static auto Func = Class->GetFunction("NPCStatusWidget_AIBoss_C", "Construct");

	Params::UNPCStatusWidget_AIBoss_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusWidget_AIBoss.NPCStatusWidget_AIBoss_C.EventUpdateStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Health                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Shield                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MaxHealth                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MaxShield                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowShield                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCStatusWidget_AIBoss_C::EventUpdateStatus(double Health, double Shield, double MaxHealth, double MaxShield, bool ShowShield)
{
	static auto Func = Class->GetFunction("NPCStatusWidget_AIBoss_C", "EventUpdateStatus");

	Params::UNPCStatusWidget_AIBoss_C_EventUpdateStatus_Params Parms;

	Parms.Health = Health;
	Parms.Shield = Shield;
	Parms.MaxHealth = MaxHealth;
	Parms.MaxShield = MaxShield;
	Parms.ShowShield = ShowShield;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusWidget_AIBoss.NPCStatusWidget_AIBoss_C.EventHideStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPCStatusWidget_AIBoss_C::EventHideStatus()
{
	static auto Func = Class->GetFunction("NPCStatusWidget_AIBoss_C", "EventHideStatus");

	Params::UNPCStatusWidget_AIBoss_C_EventHideStatus_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusWidget_AIBoss.NPCStatusWidget_AIBoss_C.ChangeWidgetVisibleDuration
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             StatusWidgetVisibleDuration                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCStatusWidget_AIBoss_C::ChangeWidgetVisibleDuration(double StatusWidgetVisibleDuration)
{
	static auto Func = Class->GetFunction("NPCStatusWidget_AIBoss_C", "ChangeWidgetVisibleDuration");

	Params::UNPCStatusWidget_AIBoss_C_ChangeWidgetVisibleDuration_Params Parms;

	Parms.StatusWidgetVisibleDuration = StatusWidgetVisibleDuration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusWidget_AIBoss.NPCStatusWidget_AIBoss_C.ExecuteUbergraph_NPCStatusWidget_AIBoss
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_StatusWidgetVisibleDuration                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_health                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_shield                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_maxHealth                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_maxShield                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ShowShield                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCStatusWidget_AIBoss_C::ExecuteUbergraph_NPCStatusWidget_AIBoss(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double K2Node_CustomEvent_StatusWidgetVisibleDuration, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, double K2Node_CustomEvent_health, double K2Node_CustomEvent_shield, double K2Node_CustomEvent_maxHealth, double K2Node_CustomEvent_maxShield, bool K2Node_CustomEvent_ShowShield, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static auto Func = Class->GetFunction("NPCStatusWidget_AIBoss_C", "ExecuteUbergraph_NPCStatusWidget_AIBoss");

	Params::UNPCStatusWidget_AIBoss_C_ExecuteUbergraph_NPCStatusWidget_AIBoss_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_StatusWidgetVisibleDuration = K2Node_CustomEvent_StatusWidgetVisibleDuration;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.K2Node_CustomEvent_health = K2Node_CustomEvent_health;
	Parms.K2Node_CustomEvent_shield = K2Node_CustomEvent_shield;
	Parms.K2Node_CustomEvent_maxHealth = K2Node_CustomEvent_maxHealth;
	Parms.K2Node_CustomEvent_maxShield = K2Node_CustomEvent_maxShield;
	Parms.K2Node_CustomEvent_ShowShield = K2Node_CustomEvent_ShowShield;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusWidget_AIBoss.NPCStatusWidget_AIBoss_C.VisibilityChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCStatusWidget_AIBoss_C::VisibilityChanged__DelegateSignature(bool bVisible)
{
	static auto Func = Class->GetFunction("NPCStatusWidget_AIBoss_C", "VisibilityChanged__DelegateSignature");

	Params::UNPCStatusWidget_AIBoss_C_VisibilityChanged__DelegateSignature_Params Parms;

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
