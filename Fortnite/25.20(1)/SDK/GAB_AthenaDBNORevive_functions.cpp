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


// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Get DBNO Outro Montage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimMontage*                DBNOMontageOutro                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSurfaceSwimming_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_AthenaDBNORevive_C::Get_DBNO_Outro_Montage(class UAnimMontage** DBNOMontageOutro, bool CallFunc_IsSurfaceSwimming_ReturnValue)
{
	static auto Func = Class->GetFunction("GAB_AthenaDBNORevive_C", "Get DBNO Outro Montage");

	Params::UGAB_AthenaDBNORevive_C_Get_DBNO_Outro_Montage_Params Parms;

	Parms.CallFunc_IsSurfaceSwimming_ReturnValue = CallFunc_IsSurfaceSwimming_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DBNOMontageOutro != nullptr)
		*DBNOMontageOutro = Parms.DBNOMontageOutro;

}


// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Completed_23712DBC45E68EA0C91A4895CBD8B3A6
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_AthenaDBNORevive_C::Completed_23712DBC45E68EA0C91A4895CBD8B3A6(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_AthenaDBNORevive_C", "Completed_23712DBC45E68EA0C91A4895CBD8B3A6");

	Params::UGAB_AthenaDBNORevive_C_Completed_23712DBC45E68EA0C91A4895CBD8B3A6_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_AthenaDBNORevive_C::Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_AthenaDBNORevive_C", "Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6");

	Params::UGAB_AthenaDBNORevive_C_Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Triggered_23712DBC45E68EA0C91A4895CBD8B3A6
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_AthenaDBNORevive_C::Triggered_23712DBC45E68EA0C91A4895CBD8B3A6(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_AthenaDBNORevive_C", "Triggered_23712DBC45E68EA0C91A4895CBD8B3A6");

	Params::UGAB_AthenaDBNORevive_C_Triggered_23712DBC45E68EA0C91A4895CBD8B3A6_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Cancelled_779E7BAA49FEAD286C5164B83CDFD609
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_AthenaDBNORevive_C::Cancelled_779E7BAA49FEAD286C5164B83CDFD609(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_AthenaDBNORevive_C", "Cancelled_779E7BAA49FEAD286C5164B83CDFD609");

	Params::UGAB_AthenaDBNORevive_C_Cancelled_779E7BAA49FEAD286C5164B83CDFD609_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Targeted_779E7BAA49FEAD286C5164B83CDFD609
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_AthenaDBNORevive_C::Targeted_779E7BAA49FEAD286C5164B83CDFD609(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_AthenaDBNORevive_C", "Targeted_779E7BAA49FEAD286C5164B83CDFD609");

	Params::UGAB_AthenaDBNORevive_C_Targeted_779E7BAA49FEAD286C5164B83CDFD609_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Removed_620488CD4F8BFC035EC7328664732683
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_AthenaDBNORevive_C::Removed_620488CD4F8BFC035EC7328664732683()
{
	static auto Func = Class->GetFunction("GAB_AthenaDBNORevive_C", "Removed_620488CD4F8BFC035EC7328664732683");

	Params::UGAB_AthenaDBNORevive_C_Removed_620488CD4F8BFC035EC7328664732683_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_AthenaDBNORevive_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GAB_AthenaDBNORevive_C", "K2_ActivateAbilityFromEvent");

	Params::UGAB_AthenaDBNORevive_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_AthenaDBNORevive_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GAB_AthenaDBNORevive_C", "K2_OnEndAbility");

	Params::UGAB_AthenaDBNORevive_C_K2_OnEndAbility_Params Parms;

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.ExecuteUbergraph_GAB_AthenaDBNORevive
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData_3                                  (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag_3                              (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData_2                                  (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag_2                              (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTemp_struct_Variable_1                                           ()
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData_1                                  (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag_1                              (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData                                    (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag                                (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_2                                           (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTemp_struct_Variable_3                                           ()
// class UFortAbilityTask_WaitTargetSelection*CallFunc_WaitTargetSelection_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitGameplayTagRemoved*CallFunc_WaitGameplayTagRemove_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// class UFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetSocketRotation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector_NetQuantize10       CallFunc_MakeVector_NetQuantize10_ReturnValue                    (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector_NetQuantizeNormal   CallFunc_MakeVector_NetQuantizeNormal_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData_4                                  (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag_4                              (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Get_DBNO_Outro_Montage_DBNOMontageOutro                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFortGameplayAbilityMontageInfoK2Node_MakeStruct_FortGameplayAbilityMontageInfo                 ()
// class UFortAbilityTask_PlayMontageWaitTarget*CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_AthenaDBNORevive_C::ExecuteUbergraph_GAB_AthenaDBNORevive(int32 EntryPoint, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_3, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_3, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_3, class UFortAbilityTask_WaitTargetSelection* CallFunc_WaitTargetSelection_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAbilityTask_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemove_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector_NetQuantize10& CallFunc_MakeVector_NetQuantize10_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector_NetQuantizeNormal& CallFunc_MakeVector_NetQuantizeNormal_ReturnValue, bool K2Node_Event_bWasCancelled, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_4, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UAnimMontage* CallFunc_Get_DBNO_Outro_Montage_DBNOMontageOutro, const struct FFortGameplayAbilityMontageInfo& K2Node_MakeStruct_FortGameplayAbilityMontageInfo, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static auto Func = Class->GetFunction("GAB_AthenaDBNORevive_C", "ExecuteUbergraph_GAB_AthenaDBNORevive");

	Params::UGAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_TargetData_3 = K2Node_CustomEvent_TargetData_3;
	Parms.K2Node_CustomEvent_ApplicationTag_3 = K2Node_CustomEvent_ApplicationTag_3;
	Parms.K2Node_CustomEvent_TargetData_2 = K2Node_CustomEvent_TargetData_2;
	Parms.K2Node_CustomEvent_ApplicationTag_2 = K2Node_CustomEvent_ApplicationTag_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_CustomEvent_TargetData_1 = K2Node_CustomEvent_TargetData_1;
	Parms.K2Node_CustomEvent_ApplicationTag_1 = K2Node_CustomEvent_ApplicationTag_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_TargetData = K2Node_CustomEvent_TargetData;
	Parms.K2Node_CustomEvent_ApplicationTag = K2Node_CustomEvent_ApplicationTag;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.CallFunc_WaitTargetSelection_ReturnValue = CallFunc_WaitTargetSelection_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_WaitGameplayTagRemove_ReturnValue = CallFunc_WaitGameplayTagRemove_ReturnValue;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_GetSocketRotation_ReturnValue = CallFunc_GetSocketRotation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_MakeVector_NetQuantize10_ReturnValue = CallFunc_MakeVector_NetQuantize10_ReturnValue;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_MakeVector_NetQuantizeNormal_ReturnValue = CallFunc_MakeVector_NetQuantizeNormal_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_TargetData_4 = K2Node_CustomEvent_TargetData_4;
	Parms.K2Node_CustomEvent_ApplicationTag_4 = K2Node_CustomEvent_ApplicationTag_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_Get_DBNO_Outro_Montage_DBNOMontageOutro = CallFunc_Get_DBNO_Outro_Montage_DBNOMontageOutro;
	Parms.K2Node_MakeStruct_FortGameplayAbilityMontageInfo = K2Node_MakeStruct_FortGameplayAbilityMontageInfo;
	Parms.CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue = CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
