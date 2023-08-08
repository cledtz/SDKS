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


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.GetRidingInfoFromTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             JumpAttachGroundHeightMin                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             JumpAttachGroundHeightBuffer                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UsesAltRidingMessage                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::GetRidingInfoFromTarget(double* JumpAttachGroundHeightMin, double* JumpAttachGroundHeightBuffer, bool* UsesAltRidingMessage)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "GetRidingInfoFromTarget");

	Params::UCreatureBaseRidableComponent_C_GetRidingInfoFromTarget_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (JumpAttachGroundHeightMin != nullptr)
		*JumpAttachGroundHeightMin = Parms.JumpAttachGroundHeightMin;

	if (JumpAttachGroundHeightBuffer != nullptr)
		*JumpAttachGroundHeightBuffer = Parms.JumpAttachGroundHeightBuffer;

	if (UsesAltRidingMessage != nullptr)
		*UsesAltRidingMessage = Parms.UsesAltRidingMessage;

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.JumpFatigue_LandTimeStamp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::JumpFatigue_LandTimeStamp(double CallFunc_GetGameTimeInSeconds_ReturnValue)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "JumpFatigue_LandTimeStamp");

	Params::UCreatureBaseRidableComponent_C_JumpFatigue_LandTimeStamp_Params Parms;

	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.JumpFatigue_CheckApplyFatigue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortAIPawn*                 K2Node_DynamicCast_AsFort_AIPawn                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetValueAsBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetValueAsInteger_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue            (NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::JumpFatigue_CheckApplyFatigue(class UActor* CallFunc_GetOwner_ReturnValue, class UFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetValueAsBool_ReturnValue, int32 CallFunc_GetValueAsInteger_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "JumpFatigue_CheckApplyFatigue");

	Params::UCreatureBaseRidableComponent_C_JumpFatigue_CheckApplyFatigue_Params Parms;

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_AIPawn = K2Node_DynamicCast_AsFort_AIPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetValueAsBool_ReturnValue = CallFunc_GetValueAsBool_ReturnValue;
	Parms.CallFunc_GetValueAsInteger_ReturnValue = CallFunc_GetValueAsInteger_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.JumpFatigue_CountJumps
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetActiveGameplayEffectStackCount_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetValueAsBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_B_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::JumpFatigue_CountJumps(int32 CallFunc_GetActiveGameplayEffectStackCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, int32 Temp_int_Variable, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_GetValueAsBool_ReturnValue, double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "JumpFatigue_CountJumps");

	Params::UCreatureBaseRidableComponent_C_JumpFatigue_CountJumps_Params Parms;

	Parms.CallFunc_GetActiveGameplayEffectStackCount_ReturnValue = CallFunc_GetActiveGameplayEffectStackCount_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetValueAsBool_ReturnValue = CallFunc_GetValueAsBool_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_B_ImplicitCast = CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.JumpFatigue_RemoveFatigue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortAIPawn*                 K2Node_DynamicCast_AsFort_AIPawn                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveActiveGameplayEffect_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::JumpFatigue_RemoveFatigue(class UActor* CallFunc_GetOwner_ReturnValue, class UFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "JumpFatigue_RemoveFatigue");

	Params::UCreatureBaseRidableComponent_C_JumpFatigue_RemoveFatigue_Params Parms;

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_AIPawn = K2Node_DynamicCast_AsFort_AIPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_RemoveActiveGameplayEffect_ReturnValue = CallFunc_RemoveActiveGameplayEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.JumpFatigue_Landed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetActiveGameplayEffectStackCount_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetValueAsBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::JumpFatigue_Landed(int32 CallFunc_GetActiveGameplayEffectStackCount_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_GetValueAsBool_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "JumpFatigue_Landed");

	Params::UCreatureBaseRidableComponent_C_JumpFatigue_Landed_Params Parms;

	Parms.CallFunc_GetActiveGameplayEffectStackCount_ReturnValue = CallFunc_GetActiveGameplayEffectStackCount_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_GetValueAsBool_ReturnValue = CallFunc_GetValueAsBool_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Should Convert Jump Exit to Jump
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_B_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::Should_Convert_Jump_Exit_to_Jump(bool* Out, double CallFunc_GetTimeSeconds_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "Should Convert Jump Exit to Jump");

	Params::UCreatureBaseRidableComponent_C_Should_Convert_Jump_Exit_to_Jump_Params Parms;

	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_B_ImplicitCast = CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ShouldBufferJumpExitToRetryJump
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_SphereTraceSingle_OutHit                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceSingle_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::ShouldBufferJumpExitToRetryJump(bool* Output, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_GetTimeSeconds_ReturnValue, TArray<class UActor*>& Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, double CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "ShouldBufferJumpExitToRetryJump");

	Params::UCreatureBaseRidableComponent_C_ShouldBufferJumpExitToRetryJump_Params Parms;

	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_1 = CallFunc_GetValueAtLevel_ReturnValue_1;
	Parms.CallFunc_Conv_DoubleToVector_ReturnValue = CallFunc_Conv_DoubleToVector_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_2 = CallFunc_GetValueAtLevel_ReturnValue_2;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_SphereTraceSingle_OutHit = CallFunc_SphereTraceSingle_OutHit;
	Parms.CallFunc_SphereTraceSingle_ReturnValue = CallFunc_SphereTraceSingle_ReturnValue;
	Parms.CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast = CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.SetInfiniteStaminaBuff
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue_1                 (ContainsInstancedReference)
// class UActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::SetInfiniteStaminaBuff(bool Enabled, class UActor* CallFunc_GetOwner_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_1, class UActor* CallFunc_GetOwner_ReturnValue_1)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "SetInfiniteStaminaBuff");

	Params::UCreatureBaseRidableComponent_C_SetInfiniteStaminaBuff_Params Parms;

	Parms.Enabled = Enabled;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue_1 = CallFunc_MakeGameplayCueParameters_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CanBePet
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class URiderComponent*             Rider                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSurfaceSwimming_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UControllingRiderComponent*  K2Node_DynamicCast_AsControlling_Rider_Component                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTryingToMove_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanBePet_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UGameplayTagAssetInterface>CallFunc_HasAnyMatchingGameplayTags_self_CastInput               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UCreatureBaseRidableComponent_C::CanBePet(class URiderComponent* Rider, class UActor* CallFunc_GetOwner_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue_1, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsSurfaceSwimming_ReturnValue, class UControllingRiderComponent* K2Node_DynamicCast_AsControlling_Rider_Component, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsTryingToMove_ReturnValue, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_CanBePet_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TScriptInterface<class UGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "CanBePet");

	Params::UCreatureBaseRidableComponent_C_CanBePet_Params Parms;

	Parms.Rider = Rider;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsSurfaceSwimming_ReturnValue = CallFunc_IsSurfaceSwimming_ReturnValue;
	Parms.K2Node_DynamicCast_AsControlling_Rider_Component = K2Node_DynamicCast_AsControlling_Rider_Component;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsTryingToMove_ReturnValue = CallFunc_IsTryingToMove_ReturnValue;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_CanBePet_ReturnValue = CallFunc_CanBePet_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_HasAnyMatchingGameplayTags_self_CastInput = CallFunc_HasAnyMatchingGameplayTags_self_CastInput;
	Parms.CallFunc_HasAnyMatchingGameplayTags_ReturnValue = CallFunc_HasAnyMatchingGameplayTags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CanJumpExit
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CanJumpExit                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FScalableFloat              JumpExitDurationThreshold                                        (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_B_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::CanJumpExit(bool* CanJumpExit, const struct FScalableFloat& JumpExitDurationThreshold, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsFalling_ReturnValue, double CallFunc_GetTimeSeconds_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, double CallFunc_Greater_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "CanJumpExit");

	Params::UCreatureBaseRidableComponent_C_CanJumpExit_Params Parms;

	Parms.JumpExitDurationThreshold = JumpExitDurationThreshold;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_B_ImplicitCast = CallFunc_Greater_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CanJumpExit != nullptr)
		*CanJumpExit = Parms.CanJumpExit;

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UpdateLootAnimalGlow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromTag_ReturnValue             ()
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UNiagaraComponent*>   CallFunc_GetComponentsByTag_ReturnValue                          (ReferenceParm, ContainsInstancedReference)
// TScriptInterface<class UGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::UpdateLootAnimalGlow(double Scale, bool Temp_bool_Variable, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, TArray<class UNiagaraComponent*>& CallFunc_GetComponentsByTag_ReturnValue, TScriptInterface<class UGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, class UNiagaraComponent* CallFunc_Array_Get_Item, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, float CallFunc_SetFloatParameter_Param_ImplicitCast)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "UpdateLootAnimalGlow");

	Params::UCreatureBaseRidableComponent_C_UpdateLootAnimalGlow_Params Parms;

	Parms.Scale = Scale;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue = CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentsByTag_ReturnValue = CallFunc_GetComponentsByTag_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_HasAnyMatchingGameplayTags_ReturnValue = CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast = CallFunc_SetFloatParameter_Param_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnRep_currentEnergyValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::OnRep_currentEnergyValue(bool CallFunc_Greater_DoubleDouble_ReturnValue)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "OnRep_currentEnergyValue");

	Params::UCreatureBaseRidableComponent_C_OnRep_currentEnergyValue_Params Parms;

	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Propagate Immunity Fall Damage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScalableFloat              CanProbagateImmunityFallDanage                                   (Edit, BlueprintVisible)
// class UActor*                      RiderActor                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// TArray<TSubclassOf<class UGameplayEffect>>GE_ImmunityFallDamage                                            (Edit, BlueprintVisible)
// TArray<TSubclassOf<class UGameplayEffect>>K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_GetValueAsBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::Propagate_Immunity_Fall_Damage(const struct FScalableFloat& CanProbagateImmunityFallDanage, class UActor* RiderActor, const TArray<TSubclassOf<class UGameplayEffect>>& GE_ImmunityFallDamage, TArray<TSubclassOf<class UGameplayEffect>>& K2Node_MakeArray_Array, bool CallFunc_GetValueAsBool_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue_1, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class UGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "Propagate Immunity Fall Damage");

	Params::UCreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage_Params Parms;

	Parms.CanProbagateImmunityFallDanage = CanProbagateImmunityFallDanage;
	Parms.RiderActor = RiderActor;
	Parms.GE_ImmunityFallDamage = GE_ImmunityFallDamage;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetValueAsBool_ReturnValue = CallFunc_GetValueAsBool_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CanRiderPlayEmote
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class URiderComponent*             Rider                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UCreatureBaseRidableComponent_C::CanRiderPlayEmote(class URiderComponent* Rider)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "CanRiderPlayEmote");

	Params::UCreatureBaseRidableComponent_C_CanRiderPlayEmote_Params Parms;

	Parms.Rider = Rider;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleEnemyFoleySoundLibrary
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorComponent*             Rider                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               bIsRiding                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundLibrarySubsystem*      CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortTeamAffiliation    CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_MaxFootstepDistance_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::HandleEnemyFoleySoundLibrary(class UActorComponent* Rider, bool bIsRiding, class USoundLibrarySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, double CallFunc_SelectFloat_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_VariableSet_MaxFootstepDistance_ImplicitCast)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "HandleEnemyFoleySoundLibrary");

	Params::UCreatureBaseRidableComponent_C_HandleEnemyFoleySoundLibrary_Params Parms;

	Parms.Rider = Rider;
	Parms.bIsRiding = bIsRiding;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue = CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_VariableSet_MaxFootstepDistance_ImplicitCast = K2Node_VariableSet_MaxFootstepDistance_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnMovementModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCharacter*                  Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMovementMode           PrevMovementMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              PreviousCustomMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSurfaceSwimming_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::OnMovementModeChanged(class UCharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsSurfaceSwimming_ReturnValue, bool CallFunc_IsFalling_ReturnValue, double CallFunc_GetTimeSeconds_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "OnMovementModeChanged");

	Params::UCreatureBaseRidableComponent_C_OnMovementModeChanged_Params Parms;

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsSurfaceSwimming_ReturnValue = CallFunc_IsSurfaceSwimming_ReturnValue;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.IsSwimming
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               IsSwimming                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSurfaceSwimming_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::IsSwimming(bool* IsSwimming, class UActor* CallFunc_GetOwner_ReturnValue, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsSurfaceSwimming_ReturnValue)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "IsSwimming");

	Params::UCreatureBaseRidableComponent_C_IsSwimming_Params Parms;

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsSurfaceSwimming_ReturnValue = CallFunc_IsSurfaceSwimming_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSwimming != nullptr)
		*IsSwimming = Parms.IsSwimming;

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.StopSprinting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::StopSprinting(class UActor* CallFunc_GetOwner_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue_1, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "StopSprinting");

	Params::UCreatureBaseRidableComponent_C_StopSprinting_Params Parms;

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetFortAbilitySystemComponent_ReturnValue = CallFunc_GetFortAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.RemoveGEByTag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       Tags                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::RemoveGEByTag(const struct FGameplayTagContainer& Tags, class UActor* CallFunc_GetOwner_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "RemoveGEByTag");

	Params::UCreatureBaseRidableComponent_C_RemoveGEByTag_Params Parms;

	Parms.Tags = Tags;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetFortAbilitySystemComponent_ReturnValue = CallFunc_GetFortAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue = CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ApplyGEToSelf
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UGameplayEffect> GameplayEffectClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               IsValidClass                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue            (NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::ApplyGEToSelf(TSubclassOf<class UGameplayEffect> GameplayEffectClass, bool* IsValidClass, class UActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "ApplyGEToSelf");

	Params::UCreatureBaseRidableComponent_C_ApplyGEToSelf_Params Parms;

	Parms.GameplayEffectClass = GameplayEffectClass;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetFortAbilitySystemComponent_ReturnValue = CallFunc_GetFortAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValidClass != nullptr)
		*IsValidClass = Parms.IsValidClass;

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.KickRiderOffSelf
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ToggleRiding_bChangedRiding                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::KickRiderOffSelf(class UActor* CallFunc_GetOwner_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ToggleRiding_bChangedRiding)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "KickRiderOffSelf");

	Params::UCreatureBaseRidableComponent_C_KickRiderOffSelf_Params Parms;

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ToggleRiding_bChangedRiding = CallFunc_ToggleRiding_bChangedRiding;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.DetermineRateOfChange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             RateOfChange                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSprinting_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EvaluateCurveTableRow_OutXY                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EvaluateCurveTableRow_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EvaluateCurveTableRow_OutXY_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EvaluateCurveTableRow_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBeingRidden_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLastUpdateVelocity_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_RateOfChange_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_RateOfChange_ImplicitCast_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::DetermineRateOfChange(double* RateOfChange, bool CallFunc_IsSprinting_ReturnValue, float CallFunc_EvaluateCurveTableRow_OutXY, bool CallFunc_EvaluateCurveTableRow_ReturnValue, float CallFunc_EvaluateCurveTableRow_OutXY_1, bool CallFunc_EvaluateCurveTableRow_ReturnValue_1, bool CallFunc_IsBeingRidden_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetLastUpdateVelocity_ReturnValue, double CallFunc_VSize_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double K2Node_FunctionResult_RateOfChange_ImplicitCast, double K2Node_FunctionResult_RateOfChange_ImplicitCast_1)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "DetermineRateOfChange");

	Params::UCreatureBaseRidableComponent_C_DetermineRateOfChange_Params Parms;

	Parms.CallFunc_IsSprinting_ReturnValue = CallFunc_IsSprinting_ReturnValue;
	Parms.CallFunc_EvaluateCurveTableRow_OutXY = CallFunc_EvaluateCurveTableRow_OutXY;
	Parms.CallFunc_EvaluateCurveTableRow_ReturnValue = CallFunc_EvaluateCurveTableRow_ReturnValue;
	Parms.CallFunc_EvaluateCurveTableRow_OutXY_1 = CallFunc_EvaluateCurveTableRow_OutXY_1;
	Parms.CallFunc_EvaluateCurveTableRow_ReturnValue_1 = CallFunc_EvaluateCurveTableRow_ReturnValue_1;
	Parms.CallFunc_IsBeingRidden_ReturnValue = CallFunc_IsBeingRidden_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLastUpdateVelocity_ReturnValue = CallFunc_GetLastUpdateVelocity_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_FunctionResult_RateOfChange_ImplicitCast = K2Node_FunctionResult_RateOfChange_ImplicitCast;
	Parms.K2Node_FunctionResult_RateOfChange_ImplicitCast_1 = K2Node_FunctionResult_RateOfChange_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (RateOfChange != nullptr)
		*RateOfChange = Parms.RateOfChange;

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CommitEnergyCosts
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               RequireAllEnergy                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             EnergyCost                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::CommitEnergyCosts(bool RequireAllEnergy, double EnergyCost, bool* Success, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "CommitEnergyCosts");

	Params::UCreatureBaseRidableComponent_C_CommitEnergyCosts_Params Parms;

	Parms.RequireAllEnergy = RequireAllEnergy;
	Parms.EnergyCost = EnergyCost;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.TestThreshold
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDecaying                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CurrentValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             TestTreshold                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PreviousState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CrossedThreshold                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::TestThreshold(bool IsDecaying, double CurrentValue, double TestTreshold, bool PreviousState, bool* CrossedThreshold, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "TestThreshold");

	Params::UCreatureBaseRidableComponent_C_TestThreshold_Params Parms;

	Parms.IsDecaying = IsDecaying;
	Parms.CurrentValue = CurrentValue;
	Parms.TestTreshold = TestTreshold;
	Parms.PreviousState = PreviousState;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CrossedThreshold != nullptr)
		*CrossedThreshold = Parms.CrossedThreshold;

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.SetWildlifeHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHealth_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxHealth_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::SetWildlifeHealth(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetHealth_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "SetWildlifeHealth");

	Params::UCreatureBaseRidableComponent_C_SetWildlifeHealth_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetHealth_ReturnValue = CallFunc_GetHealth_ReturnValue;
	Parms.CallFunc_GetMaxHealth_ReturnValue = CallFunc_GetMaxHealth_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UpdateValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TargetValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             RateOfChange                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             UpdatedValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               EnergyDepleted                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::UpdateValue(double TargetValue, double RateOfChange, double DeltaTime, double* UpdatedValue, bool* EnergyDepleted, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "UpdateValue");

	Params::UCreatureBaseRidableComponent_C_UpdateValue_Params Parms;

	Parms.TargetValue = TargetValue;
	Parms.RateOfChange = RateOfChange;
	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (UpdatedValue != nullptr)
		*UpdatedValue = Parms.UpdatedValue;

	if (EnergyDepleted != nullptr)
		*EnergyDepleted = Parms.EnergyDepleted;

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ToggleRiding
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldRide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bChangedRiding                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URiderComponent*             CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StopRidingActor_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StartRidingActor_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UControllingRiderComponent*  K2Node_DynamicCast_AsControlling_Rider_Component                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::ToggleRiding(class UActor* PlayerPawn, class UActor* Target, bool ShouldRide, bool* bChangedRiding, TScriptInterface<class UGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class UGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class URiderComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool CallFunc_StopRidingActor_ReturnValue, bool CallFunc_StartRidingActor_ReturnValue, class UControllingRiderComponent* K2Node_DynamicCast_AsControlling_Rider_Component, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "ToggleRiding");

	Params::UCreatureBaseRidableComponent_C_ToggleRiding_Params Parms;

	Parms.PlayerPawn = PlayerPawn;
	Parms.Target = Target;
	Parms.ShouldRide = ShouldRide;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_HasAnyMatchingGameplayTags_ReturnValue = CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	Parms.CallFunc_StopRidingActor_ReturnValue = CallFunc_StopRidingActor_ReturnValue;
	Parms.CallFunc_StartRidingActor_ReturnValue = CallFunc_StartRidingActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsControlling_Rider_Component = K2Node_DynamicCast_AsControlling_Rider_Component;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1 = CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (bChangedRiding != nullptr)
		*bChangedRiding = Parms.bChangedRiding;

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.RestoreCollisionResponses
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class ECollisionChannel>CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECollisionChannel       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class ECollisionChannel>K2Node_MakeArray_Array                                           (ReferenceParm)
// enum class ECollisionResponse      CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::RestoreCollisionResponses(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<enum class ECollisionChannel>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, enum class ECollisionChannel CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TArray<enum class ECollisionChannel>& K2Node_MakeArray_Array, enum class ECollisionResponse CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "RestoreCollisionResponses");

	Params::UCreatureBaseRidableComponent_C_RestoreCollisionResponses_Params Parms;

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ApplyCollisionResponse
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class ECollisionChannel>Channels                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ECollisionResponse      Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECollisionChannel       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCapsuleComponent*           CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECollisionResponse      CallFunc_GetCollisionResponseToChannel_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::ApplyCollisionResponse(TArray<enum class ECollisionChannel>& Channels, enum class ECollisionResponse Response, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, enum class ECollisionChannel CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCapsuleComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class ECollisionResponse CallFunc_GetCollisionResponseToChannel_ReturnValue)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "ApplyCollisionResponse");

	Params::UCreatureBaseRidableComponent_C_ApplyCollisionResponse_Params Parms;

	Parms.Channels = Channels;
	Parms.Response = Response;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCollisionResponseToChannel_ReturnValue = CallFunc_GetCollisionResponseToChannel_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ShouldCameraFocusOnRidable
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class URiderComponent*             Rider                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UCreatureBaseRidableComponent_C::ShouldCameraFocusOnRidable(class URiderComponent* Rider)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "ShouldCameraFocusOnRidable");

	Params::UCreatureBaseRidableComponent_C_ShouldCameraFocusOnRidable_Params Parms;

	Parms.Rider = Rider;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UpdateAnimInputBool
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPawn*                   FortPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsBeingRidden                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAnimInputEvent_Bool*    CallFunc_CreateAnimInputEvent_Bool_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::UpdateAnimInputBool(class UFortPawn* FortPawn, bool IsBeingRidden, class UFortAnimInputEvent_Bool* CallFunc_CreateAnimInputEvent_Bool_ReturnValue)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "UpdateAnimInputBool");

	Params::UCreatureBaseRidableComponent_C_UpdateAnimInputBool_Params Parms;

	Parms.FortPawn = FortPawn;
	Parms.IsBeingRidden = IsBeingRidden;
	Parms.CallFunc_CreateAnimInputEvent_Bool_ReturnValue = CallFunc_CreateAnimInputEvent_Bool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.GetRiderCapsuleSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class URiderComponent*             Rider                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             RiderCapsuleRadius                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             RiderCapsuleHH                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCapsuleComponent*           CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetUnscaledCapsuleSize_OutRadius                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetUnscaledCapsuleSize_OutHalfHeight                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_RiderCapsuleRadius_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_RiderCapsuleHH_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::GetRiderCapsuleSize(class URiderComponent* Rider, double* RiderCapsuleRadius, double* RiderCapsuleHH, bool CallFunc_IsValid_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UCapsuleComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_GetUnscaledCapsuleSize_OutRadius, float CallFunc_GetUnscaledCapsuleSize_OutHalfHeight, double K2Node_FunctionResult_RiderCapsuleRadius_ImplicitCast, double K2Node_FunctionResult_RiderCapsuleHH_ImplicitCast)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "GetRiderCapsuleSize");

	Params::UCreatureBaseRidableComponent_C_GetRiderCapsuleSize_Params Parms;

	Parms.Rider = Rider;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetUnscaledCapsuleSize_OutRadius = CallFunc_GetUnscaledCapsuleSize_OutRadius;
	Parms.CallFunc_GetUnscaledCapsuleSize_OutHalfHeight = CallFunc_GetUnscaledCapsuleSize_OutHalfHeight;
	Parms.K2Node_FunctionResult_RiderCapsuleRadius_ImplicitCast = K2Node_FunctionResult_RiderCapsuleRadius_ImplicitCast;
	Parms.K2Node_FunctionResult_RiderCapsuleHH_ImplicitCast = K2Node_FunctionResult_RiderCapsuleHH_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (RiderCapsuleRadius != nullptr)
		*RiderCapsuleRadius = Parms.RiderCapsuleRadius;

	if (RiderCapsuleHH != nullptr)
		*RiderCapsuleHH = Parms.RiderCapsuleHH;

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.GetRidingEmoteCapsuleSize
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class URiderComponent*             Rider                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              OriginalRadius                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OriginalHalfHeight                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutRadius                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutHalfHeight                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRidingCapsuleSize_OutRadius                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRidingCapsuleSize_OutHalfHeight                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_OutRadius_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_OutHalfHeight_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::GetRidingEmoteCapsuleSize(class URiderComponent* Rider, float OriginalRadius, float OriginalHalfHeight, float* OutRadius, float* OutHalfHeight, float CallFunc_GetRidingCapsuleSize_OutRadius, float CallFunc_GetRidingCapsuleSize_OutHalfHeight, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, float K2Node_FunctionResult_OutRadius_ImplicitCast, float K2Node_FunctionResult_OutHalfHeight_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "GetRidingEmoteCapsuleSize");

	Params::UCreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize_Params Parms;

	Parms.Rider = Rider;
	Parms.OriginalRadius = OriginalRadius;
	Parms.OriginalHalfHeight = OriginalHalfHeight;
	Parms.CallFunc_GetRidingCapsuleSize_OutRadius = CallFunc_GetRidingCapsuleSize_OutRadius;
	Parms.CallFunc_GetRidingCapsuleSize_OutHalfHeight = CallFunc_GetRidingCapsuleSize_OutHalfHeight;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.K2Node_FunctionResult_OutRadius_ImplicitCast = K2Node_FunctionResult_OutRadius_ImplicitCast;
	Parms.K2Node_FunctionResult_OutHalfHeight_ImplicitCast = K2Node_FunctionResult_OutHalfHeight_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_1 = CallFunc_Add_DoubleDouble_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutRadius != nullptr)
		*OutRadius = Parms.OutRadius;

	if (OutHalfHeight != nullptr)
		*OutHalfHeight = Parms.OutHalfHeight;

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.GetRidingCapsuleSize
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class URiderComponent*             Rider                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              OriginalRadius                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OriginalHalfHeight                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutRadius                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutHalfHeight                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetRiderCapsuleSize_RiderCapsuleRadius                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetRiderCapsuleSize_RiderCapsuleHH                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_OutRadius_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_OutHalfHeight_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::GetRidingCapsuleSize(class URiderComponent* Rider, float OriginalRadius, float OriginalHalfHeight, float* OutRadius, float* OutHalfHeight, double CallFunc_GetRiderCapsuleSize_RiderCapsuleRadius, double CallFunc_GetRiderCapsuleSize_RiderCapsuleHH, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_FMax_ReturnValue_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, float K2Node_FunctionResult_OutRadius_ImplicitCast, float K2Node_FunctionResult_OutHalfHeight_ImplicitCast)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "GetRidingCapsuleSize");

	Params::UCreatureBaseRidableComponent_C_GetRidingCapsuleSize_Params Parms;

	Parms.Rider = Rider;
	Parms.OriginalRadius = OriginalRadius;
	Parms.OriginalHalfHeight = OriginalHalfHeight;
	Parms.CallFunc_GetRiderCapsuleSize_RiderCapsuleRadius = CallFunc_GetRiderCapsuleSize_RiderCapsuleRadius;
	Parms.CallFunc_GetRiderCapsuleSize_RiderCapsuleHH = CallFunc_GetRiderCapsuleSize_RiderCapsuleHH;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FMax_ReturnValue_1 = CallFunc_FMax_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_1 = CallFunc_Add_DoubleDouble_A_ImplicitCast_1;
	Parms.K2Node_FunctionResult_OutRadius_ImplicitCast = K2Node_FunctionResult_OutRadius_ImplicitCast;
	Parms.K2Node_FunctionResult_OutHalfHeight_ImplicitCast = K2Node_FunctionResult_OutHalfHeight_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (OutRadius != nullptr)
		*OutRadius = Parms.OutRadius;

	if (OutHalfHeight != nullptr)
		*OutHalfHeight = Parms.OutHalfHeight;

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnRep_IdleAnim_Add
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreatureBaseRidableComponent_C::OnRep_IdleAnim_Add()
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "OnRep_IdleAnim_Add");

	Params::UCreatureBaseRidableComponent_C_OnRep_IdleAnim_Add_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ShouldSetAsViewTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class URiderComponent*             Rider                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UCreatureBaseRidableComponent_C::ShouldSetAsViewTarget(class URiderComponent* Rider)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "ShouldSetAsViewTarget");

	Params::UCreatureBaseRidableComponent_C_ShouldSetAsViewTarget_Params Parms;

	Parms.Rider = Rider;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.GetRiderLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::GetRiderLocation(struct FVector* Location, class UActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "GetRiderLocation");

	Params::UCreatureBaseRidableComponent_C_GetRiderLocation_Params Parms;

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = Parms.Location;

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Removed_AD51144144164FD235EE5BA4F6E87456
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreatureBaseRidableComponent_C::Removed_AD51144144164FD235EE5BA4F6E87456()
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "Removed_AD51144144164FD235EE5BA4F6E87456");

	Params::UCreatureBaseRidableComponent_C_Removed_AD51144144164FD235EE5BA4F6E87456_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Added_FBD936634BCC61A726DA279226E2F4BE
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreatureBaseRidableComponent_C::Added_FBD936634BCC61A726DA279226E2F4BE()
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "Added_FBD936634BCC61A726DA279226E2F4BE");

	Params::UCreatureBaseRidableComponent_C_Added_FBD936634BCC61A726DA279226E2F4BE_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Removed_C4C6E29B4217C014B9DE0E80B7134D6E
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreatureBaseRidableComponent_C::Removed_C4C6E29B4217C014B9DE0E80B7134D6E()
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "Removed_C4C6E29B4217C014B9DE0E80B7134D6E");

	Params::UCreatureBaseRidableComponent_C_Removed_C4C6E29B4217C014B9DE0E80B7134D6E_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ToggleRidingAlternative
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreatureBaseRidableComponent_C::ToggleRidingAlternative()
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "ToggleRidingAlternative");

	Params::UCreatureBaseRidableComponent_C_ToggleRidingAlternative_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UCreatureBaseRidableComponent_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "ReceiveBeginPlay");

	Params::UCreatureBaseRidableComponent_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleRiderStartedRiding
// (Event, Protected, BlueprintEvent)
// Parameters:
// class URiderComponent*             Rider                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::HandleRiderStartedRiding(class URiderComponent* Rider)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "HandleRiderStartedRiding");

	Params::UCreatureBaseRidableComponent_C_HandleRiderStartedRiding_Params Parms;

	Parms.Rider = Rider;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleRiderStoppedRiding
// (Event, Protected, BlueprintEvent)
// Parameters:
// class URiderComponent*             Rider                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::HandleRiderStoppedRiding(class URiderComponent* Rider)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "HandleRiderStoppedRiding");

	Params::UCreatureBaseRidableComponent_C_HandleRiderStoppedRiding_Params Parms;

	Parms.Rider = Rider;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UpdateDebug
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreatureBaseRidableComponent_C::UpdateDebug()
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "UpdateDebug");

	Params::UCreatureBaseRidableComponent_C_UpdateDebug_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleAbilityHeld
// (Event, Public, BlueprintEvent)
// Parameters:

void UCreatureBaseRidableComponent_C::HandleAbilityHeld()
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "HandleAbilityHeld");

	Params::UCreatureBaseRidableComponent_C_HandleAbilityHeld_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleAbilityStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UCreatureBaseRidableComponent_C::HandleAbilityStarted()
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "HandleAbilityStarted");

	Params::UCreatureBaseRidableComponent_C_HandleAbilityStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleAbilityStopped
// (Event, Public, BlueprintEvent)
// Parameters:

void UCreatureBaseRidableComponent_C::HandleAbilityStopped()
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "HandleAbilityStopped");

	Params::UCreatureBaseRidableComponent_C_HandleAbilityStopped_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleJumpStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UCreatureBaseRidableComponent_C::HandleJumpStarted()
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "HandleJumpStarted");

	Params::UCreatureBaseRidableComponent_C_HandleJumpStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnJumping
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             JumpPitchInterpSpeed                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::OnJumping(double JumpPitchInterpSpeed)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "OnJumping");

	Params::UCreatureBaseRidableComponent_C_OnJumping_Params Parms;

	Parms.JumpPitchInterpSpeed = JumpPitchInterpSpeed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnJumpingApex
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreatureBaseRidableComponent_C::OnJumpingApex()
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "OnJumpingApex");

	Params::UCreatureBaseRidableComponent_C_OnJumpingApex_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.NPCPawnInteractWithDispatcher_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      AIPawn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             InteractingPlayerPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::NPCPawnInteractWithDispatcher_Event_0(class UActor* AIPawn, class UFortPlayerPawn* InteractingPlayerPawn)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "NPCPawnInteractWithDispatcher_Event_0");

	Params::UCreatureBaseRidableComponent_C_NPCPawnInteractWithDispatcher_Event_0_Params Parms;

	Parms.AIPawn = AIPawn;
	Parms.InteractingPlayerPawn = InteractingPlayerPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.EnergyTrackingStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreatureBaseRidableComponent_C::EnergyTrackingStart()
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "EnergyTrackingStart");

	Params::UCreatureBaseRidableComponent_C_EnergyTrackingStart_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.EnergyTrackingStop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreatureBaseRidableComponent_C::EnergyTrackingStop()
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "EnergyTrackingStop");

	Params::UCreatureBaseRidableComponent_C_EnergyTrackingStop_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "ReceiveEndPlay");

	Params::UCreatureBaseRidableComponent_C_ReceiveEndPlay_Params Parms;

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UpdateEnergy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreatureBaseRidableComponent_C::UpdateEnergy()
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "UpdateEnergy");

	Params::UCreatureBaseRidableComponent_C_UpdateEnergy_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ConvertedDispatcher_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Converted                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   InstigatorPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::ConvertedDispatcher_Event_0(bool Converted, class UFortPawn* InstigatorPawn)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "ConvertedDispatcher_Event_0");

	Params::UCreatureBaseRidableComponent_C_ConvertedDispatcher_Event_0_Params Parms;

	Parms.Converted = Converted;
	Parms.InstigatorPawn = InstigatorPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnPawnHealthChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreatureBaseRidableComponent_C::OnPawnHealthChanged_Event_0()
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "OnPawnHealthChanged_Event_0");

	Params::UCreatureBaseRidableComponent_C_OnPawnHealthChanged_Event_0_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UseEnergyAmountServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             EnergyCost                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::UseEnergyAmountServer(double EnergyCost)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "UseEnergyAmountServer");

	Params::UCreatureBaseRidableComponent_C_UseEnergyAmountServer_Params Parms;

	Parms.EnergyCost = EnergyCost;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleCancelSprint
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bAbilityInputHeld                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bForceCancel                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::HandleCancelSprint(bool bAbilityInputHeld, bool bForceCancel)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "HandleCancelSprint");

	Params::UCreatureBaseRidableComponent_C_HandleCancelSprint_Params Parms;

	Parms.bAbilityInputHeld = bAbilityInputHeld;
	Parms.bForceCancel = bForceCancel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CheatSetStaminaPercent
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                              StaminaPercent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::CheatSetStaminaPercent(float StaminaPercent)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "CheatSetStaminaPercent");

	Params::UCreatureBaseRidableComponent_C_CheatSetStaminaPercent_Params Parms;

	Parms.StaminaPercent = StaminaPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnEnergyUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Energy                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWarningActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::OnEnergyUpdate(double Energy, bool bWarningActive)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "OnEnergyUpdate");

	Params::UCreatureBaseRidableComponent_C_OnEnergyUpdate_Params Parms;

	Parms.Energy = Energy;
	Parms.bWarningActive = bWarningActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnEnergyDepletedClient
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreatureBaseRidableComponent_C::OnEnergyDepletedClient()
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "OnEnergyDepletedClient");

	Params::UCreatureBaseRidableComponent_C_OnEnergyDepletedClient_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnSprintStarted
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreatureBaseRidableComponent_C::OnSprintStarted()
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "OnSprintStarted");

	Params::UCreatureBaseRidableComponent_C_OnSprintStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnEatToRefuel
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             EnergyCost                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::OnEatToRefuel(double EnergyCost)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "OnEatToRefuel");

	Params::UCreatureBaseRidableComponent_C_OnEatToRefuel_Params Parms;

	Parms.EnergyCost = EnergyCost;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ReTryJumpExit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreatureBaseRidableComponent_C::ReTryJumpExit()
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "ReTryJumpExit");

	Params::UCreatureBaseRidableComponent_C_ReTryJumpExit_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ManualEnergyDepleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreatureBaseRidableComponent_C::ManualEnergyDepleted()
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "ManualEnergyDepleted");

	Params::UCreatureBaseRidableComponent_C_ManualEnergyDepleted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Check Regen on Stopped Riding
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreatureBaseRidableComponent_C::Check_Regen_on_Stopped_Riding()
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "Check Regen on Stopped Riding");

	Params::UCreatureBaseRidableComponent_C_Check_Regen_on_Stopped_Riding_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Check Regen on Started Riding
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreatureBaseRidableComponent_C::Check_Regen_on_Started_Riding()
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "Check Regen on Started Riding");

	Params::UCreatureBaseRidableComponent_C_Check_Regen_on_Started_Riding_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Activate Regen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreatureBaseRidableComponent_C::Activate_Regen()
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "Activate Regen");

	Params::UCreatureBaseRidableComponent_C_Activate_Regen_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Deactivate Regen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreatureBaseRidableComponent_C::Deactivate_Regen()
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "Deactivate Regen");

	Params::UCreatureBaseRidableComponent_C_Deactivate_Regen_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleJumpStopped
// (Event, Public, BlueprintEvent)
// Parameters:

void UCreatureBaseRidableComponent_C::HandleJumpStopped()
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "HandleJumpStopped");

	Params::UCreatureBaseRidableComponent_C_HandleJumpStopped_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ExecuteBufferedJumpExit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreatureBaseRidableComponent_C::ExecuteBufferedJumpExit()
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "ExecuteBufferedJumpExit");

	Params::UCreatureBaseRidableComponent_C_ExecuteBufferedJumpExit_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CancelJumpExitAndJump
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreatureBaseRidableComponent_C::CancelJumpExitAndJump()
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "CancelJumpExitAndJump");

	Params::UCreatureBaseRidableComponent_C_CancelJumpExitAndJump_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.MountLandedClient
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UCreatureBaseRidableComponent_C::MountLandedClient(struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "MountLandedClient");

	Params::UCreatureBaseRidableComponent_C_MountLandedClient_Params Parms;

	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.TryConvertBufferedJumpExitToJump
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreatureBaseRidableComponent_C::TryConvertBufferedJumpExitToJump()
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "TryConvertBufferedJumpExitToJump");

	Params::UCreatureBaseRidableComponent_C_TryConvertBufferedJumpExitToJump_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.MountLandedServer_JumpFatigue
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UCreatureBaseRidableComponent_C::MountLandedServer_JumpFatigue(struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "MountLandedServer_JumpFatigue");

	Params::UCreatureBaseRidableComponent_C_MountLandedServer_JumpFatigue_Params Parms;

	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ExecuteUbergraph_CreatureBaseRidableComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetRiderLocation_Location                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Vector_IsZero_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize2D_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_4                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_5                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAIPawn*                 K2Node_DynamicCast_AsFort_AIPawn                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class ECollisionChannel>K2Node_MakeArray_Array                                           (ReferenceParm)
// class UActor*                      CallFunc_GetOwner_ReturnValue_6                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_DynamicCast_AsFort_Pawn_1                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_JumpPitchInterpSpeed                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_7                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortAIPawn*                 K2Node_DynamicCast_AsFort_AIPawn_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_8                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAIPawn*                 K2Node_DynamicCast_AsFort_AIPawn_2                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_CustomEvent_AIPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             K2Node_CustomEvent_InteractingPlayerPawn                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_9                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ToggleRiding_bChangedRiding                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNPC_Pawn_Wildlife_Parent_C* K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNPC_Pawn_Parent_C*          K2Node_DynamicCast_AsNPC_Pawn_Parent                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAIPawn*                 K2Node_DynamicCast_AsFort_AIPawn_3                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_UpdateInteract_EnabledInteract                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Converted                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_CustomEvent_InstigatorPawn                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBeingRidden_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBeingRidden_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TestThreshold_crossedThreshold                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBeingRidden_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBeingRidden_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TestThreshold_crossedThreshold_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBeingRidden_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTimeSeconds_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_EnergyCost_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_DetermineRateOfChange_RateOfChange                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateValue_updatedValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateValue_energyDepleted                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URiderComponent*             K2Node_Event_Rider                                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class URiderComponent*             K2Node_Event_Rider_1                                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyGEToSelf_isValidClass                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyGEToSelf_isValidClass_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyGEToSelf_isValidClass_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_10                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_DynamicCast_AsFort_Pawn_2                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_11                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bAbilityInputHeld                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bForceCancel                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSwimming_IsSwimming                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEvaluateCurveTableResultCallFunc_EvaluateCurveTableRow_OutResult                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EvaluateCurveTableRow_OutXY                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBeingRidden_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_12                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNPC_Pawn_Parent_C*          K2Node_DynamicCast_AsNPC_Pawn_Parent_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNPC_Pawn_Parent_C*          K2Node_DynamicCast_AsNPC_Pawn_Parent_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_UpdateInteract_EnabledInteract_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_CanBeInteractedWith_CanInteract                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_UpdateInteract_EnabledInteract_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue            (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue_1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerRiderComponent_C*     K2Node_DynamicCast_AsPlayer_Rider_Component                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_13                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityAsync_WaitGameplayTagRemoved*CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSprintToggleable_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSprintToggleable_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSprintToggleable_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UGameplayTagAssetInterface>CallFunc_HasAnyMatchingGameplayTags_self_CastInput               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSprintToggleable_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_StaminaPercent                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Energy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWarningActive                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_14                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawnAthena*       K2Node_DynamicCast_AsFort_Player_Pawn_Athena                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_EnergyCost                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_15                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_16                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_19                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_20                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_17                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_21                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_22                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanJumpExit_CanJumpExit                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_23                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_24                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanStartSprinting_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanStartSprinting_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyGEToSelf_isValidClass_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EvaluateCurveTableRow_OutXY_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EvaluateCurveTableRow_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_18                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityAsync_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAddToActor_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_25                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityAsync_WaitGameplayTagRemoved*CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_26                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EEvaluateCurveTableResultCallFunc_EvaluateCurveTableRow_OutResult_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EvaluateCurveTableRow_OutXY_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_19                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldBufferJumpExitToRetryJump_Output                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAIPawn*                 K2Node_DynamicCast_AsFort_AIPawn_4                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_CustomEvent_Hit_1                                         (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UGameplayEffect> K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue_1          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Should_Convert_Jump_Exit_to_Jump_Out                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCurveTableRowHandle        K2Node_MakeStruct_CurveTableRowHandle                            (NoDestructor, HasGetValueTypeHash)
// struct FScalableFloat              K2Node_MakeStruct_ScalableFloat                                  ()
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCurveTableRowHandle        K2Node_MakeStruct_CurveTableRowHandle_1                          (NoDestructor, HasGetValueTypeHash)
// struct FScalableFloat              K2Node_MakeStruct_ScalableFloat_1                                ()
// class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue_1             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_CustomEvent_Hit                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_ShouldBufferJumpExitToRetryJump_Output_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetValueAsBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_27                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetValueAsBool_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetValueAsBool_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRidingPettingData          CallFunc_GetPettingData_ReturnValue                              (ConstParm)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_currentEnergyValue_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_CurrentEnergyRateOfRecharge_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateLootAnimalGlow_Scale_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateLootAnimalGlow_Scale_ImplicitCast_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::ExecuteUbergraph_CreatureBaseRidableComponent(int32 EntryPoint, class UActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_1, const struct FVector& CallFunc_GetRiderLocation_Location, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Vector_IsZero_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, double CallFunc_VSize2D_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_HasAuthority_ReturnValue_2, class UActor* CallFunc_GetOwner_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_HasAuthority_ReturnValue_3, class UActor* CallFunc_GetOwner_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_HasAuthority_ReturnValue_4, bool CallFunc_NotEqual_NameName_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue_5, bool CallFunc_IsValidClass_ReturnValue, class UFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess, TArray<enum class ECollisionChannel>& K2Node_MakeArray_Array, class UActor* CallFunc_GetOwner_ReturnValue_6, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_1, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_2, double K2Node_CustomEvent_JumpPitchInterpSpeed, class UActor* CallFunc_GetOwner_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn_1, bool K2Node_DynamicCast_bSuccess_3, class UActor* CallFunc_GetOwner_ReturnValue_8, bool CallFunc_IsDedicatedServer_ReturnValue, class UFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn_2, bool K2Node_DynamicCast_bSuccess_4, class UActor* K2Node_CustomEvent_AIPawn, class UFortPlayerPawn* K2Node_CustomEvent_InteractingPlayerPawn, class UActor* CallFunc_GetOwner_ReturnValue_9, bool CallFunc_ToggleRiding_bChangedRiding, class UNPC_Pawn_Wildlife_Parent_C* K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent, bool K2Node_DynamicCast_bSuccess_5, class UNPC_Pawn_Parent_C* K2Node_DynamicCast_AsNPC_Pawn_Parent, bool K2Node_DynamicCast_bSuccess_6, class UFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn_3, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_NPC_UpdateInteract_EnabledInteract, bool CallFunc_IsDedicatedServer_ReturnValue_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool K2Node_CustomEvent_Converted, class UFortPawn* K2Node_CustomEvent_InstigatorPawn, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double CallFunc_GetTimeSeconds_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_IsBeingRidden_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsBeingRidden_ReturnValue_1, bool CallFunc_TestThreshold_crossedThreshold, bool CallFunc_IsBeingRidden_ReturnValue_2, bool CallFunc_IsBeingRidden_ReturnValue_3, bool CallFunc_TestThreshold_crossedThreshold_1, bool CallFunc_IsBeingRidden_ReturnValue_4, double CallFunc_GetTimeSeconds_ReturnValue_1, double K2Node_CustomEvent_EnergyCost_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_DetermineRateOfChange_RateOfChange, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, double CallFunc_UpdateValue_updatedValue, bool CallFunc_UpdateValue_energyDepleted, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, class URiderComponent* K2Node_Event_Rider, class URiderComponent* K2Node_Event_Rider_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_ApplyGEToSelf_isValidClass, bool CallFunc_ApplyGEToSelf_isValidClass_1, bool CallFunc_ApplyGEToSelf_isValidClass_2, bool CallFunc_IsValid_ReturnValue_11, class UActor* CallFunc_GetOwner_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_12, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn_2, bool K2Node_DynamicCast_bSuccess_8, class UActor* CallFunc_GetOwner_ReturnValue_11, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_Event_bAbilityInputHeld, bool K2Node_Event_bForceCancel, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_13, bool CallFunc_IsSwimming_IsSwimming, bool CallFunc_IsValid_ReturnValue_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsBeingRidden_ReturnValue_5, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_1, class UActor* CallFunc_GetOwner_ReturnValue_12, class UNPC_Pawn_Parent_C* K2Node_DynamicCast_AsNPC_Pawn_Parent_1, bool K2Node_DynamicCast_bSuccess_9, class UNPC_Pawn_Parent_C* K2Node_DynamicCast_AsNPC_Pawn_Parent_2, bool K2Node_DynamicCast_bSuccess_10, bool CallFunc_NPC_UpdateInteract_EnabledInteract_1, bool CallFunc_NPC_CanBeInteractedWith_CanInteract, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue, bool CallFunc_NPC_UpdateInteract_EnabledInteract_2, const struct FActiveGameplayEffectHandle& CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue_1, class UPlayerRiderComponent_C* K2Node_DynamicCast_AsPlayer_Rider_Component, bool K2Node_DynamicCast_bSuccess_11, class UActor* CallFunc_GetOwner_ReturnValue_13, class UAbilityAsync_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue_15, bool CallFunc_IsSprintToggleable_ReturnValue, bool CallFunc_IsSprintToggleable_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_16, bool CallFunc_IsSprintToggleable_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, TScriptInterface<class UGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_IsSprintToggleable_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, float K2Node_Event_StaminaPercent, double K2Node_CustomEvent_Energy, bool K2Node_CustomEvent_bWarningActive, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_17, class UActor* CallFunc_GetOwner_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_18, class UFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_12, double K2Node_CustomEvent_EnergyCost, class UActor* CallFunc_GetOwner_ReturnValue_15, class UActor* CallFunc_GetOwner_ReturnValue_16, bool CallFunc_IsValid_ReturnValue_19, bool CallFunc_IsValid_ReturnValue_20, bool CallFunc_HasAuthority_ReturnValue_5, bool CallFunc_HasAuthority_ReturnValue_6, class UActor* CallFunc_GetOwner_ReturnValue_17, bool CallFunc_IsValid_ReturnValue_21, bool CallFunc_IsValid_ReturnValue_22, bool CallFunc_HasAuthority_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_CanJumpExit_CanJumpExit, bool CallFunc_IsValid_ReturnValue_23, bool CallFunc_IsValid_ReturnValue_24, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_CanStartSprinting_ReturnValue, bool CallFunc_CanStartSprinting_ReturnValue_1, bool CallFunc_ApplyGEToSelf_isValidClass_3, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, float CallFunc_EvaluateCurveTableRow_OutXY_1, bool CallFunc_EvaluateCurveTableRow_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue_18, bool CallFunc_BooleanAND_ReturnValue_4, class UAbilityAsync_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAddToActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_25, class UAbilityAsync_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_26, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult_1, float CallFunc_EvaluateCurveTableRow_OutXY_2, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class UActor* CallFunc_GetOwner_ReturnValue_19, bool CallFunc_ShouldBufferJumpExitToRetryJump_Output, class UFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn_4, bool K2Node_DynamicCast_bSuccess_13, const struct FHitResult& K2Node_CustomEvent_Hit_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool Temp_bool_Variable, TSubclassOf<class UGameplayEffect> K2Node_Select_Default, const struct FActiveGameplayEffectHandle& CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue_1, bool CallFunc_Should_Convert_Jump_Exit_to_Jump_Out, const struct FCurveTableRowHandle& K2Node_MakeStruct_CurveTableRowHandle, const struct FScalableFloat& K2Node_MakeStruct_ScalableFloat, float CallFunc_GetValueAtLevel_ReturnValue, const struct FCurveTableRowHandle& K2Node_MakeStruct_CurveTableRowHandle_1, const struct FScalableFloat& K2Node_MakeStruct_ScalableFloat_1, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_1, const struct FHitResult& K2Node_CustomEvent_Hit, bool CallFunc_ShouldBufferJumpExitToRetryJump_Output_1, bool CallFunc_GetValueAsBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_27, bool CallFunc_GetValueAsBool_ReturnValue_1, bool CallFunc_GetValueAsBool_ReturnValue_2, const struct FRidingPettingData& CallFunc_GetPettingData_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, double K2Node_VariableSet_currentEnergyValue_ImplicitCast, double K2Node_VariableSet_CurrentEnergyRateOfRecharge_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_UpdateLootAnimalGlow_Scale_ImplicitCast, double CallFunc_UpdateLootAnimalGlow_Scale_ImplicitCast_1)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "ExecuteUbergraph_CreatureBaseRidableComponent");

	Params::UCreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_GetRiderLocation_Location = CallFunc_GetRiderLocation_Location;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Vector_IsZero_ReturnValue = CallFunc_Vector_IsZero_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue = CallFunc_Conv_VectorToVector2D_ReturnValue;
	Parms.CallFunc_VSize2D_ReturnValue = CallFunc_VSize2D_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue_3 = CallFunc_GetOwner_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_HasAuthority_ReturnValue_3 = CallFunc_HasAuthority_ReturnValue_3;
	Parms.CallFunc_GetOwner_ReturnValue_4 = CallFunc_GetOwner_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_HasAuthority_ReturnValue_4 = CallFunc_HasAuthority_ReturnValue_4;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_5 = CallFunc_GetOwner_ReturnValue_5;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_AIPawn = K2Node_DynamicCast_AsFort_AIPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetOwner_ReturnValue_6 = CallFunc_GetOwner_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsFort_Pawn_1 = K2Node_DynamicCast_AsFort_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CustomEvent_JumpPitchInterpSpeed = K2Node_CustomEvent_JumpPitchInterpSpeed;
	Parms.CallFunc_GetOwner_ReturnValue_7 = CallFunc_GetOwner_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsFort_AIPawn_1 = K2Node_DynamicCast_AsFort_AIPawn_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetOwner_ReturnValue_8 = CallFunc_GetOwner_ReturnValue_8;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_AIPawn_2 = K2Node_DynamicCast_AsFort_AIPawn_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_CustomEvent_AIPawn = K2Node_CustomEvent_AIPawn;
	Parms.K2Node_CustomEvent_InteractingPlayerPawn = K2Node_CustomEvent_InteractingPlayerPawn;
	Parms.CallFunc_GetOwner_ReturnValue_9 = CallFunc_GetOwner_ReturnValue_9;
	Parms.CallFunc_ToggleRiding_bChangedRiding = CallFunc_ToggleRiding_bChangedRiding;
	Parms.K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent = K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsNPC_Pawn_Parent = K2Node_DynamicCast_AsNPC_Pawn_Parent;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_DynamicCast_AsFort_AIPawn_3 = K2Node_DynamicCast_AsFort_AIPawn_3;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_NPC_UpdateInteract_EnabledInteract = CallFunc_NPC_UpdateInteract_EnabledInteract;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_CustomEvent_Converted = K2Node_CustomEvent_Converted;
	Parms.K2Node_CustomEvent_InstigatorPawn = K2Node_CustomEvent_InstigatorPawn;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsBeingRidden_ReturnValue = CallFunc_IsBeingRidden_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsBeingRidden_ReturnValue_1 = CallFunc_IsBeingRidden_ReturnValue_1;
	Parms.CallFunc_TestThreshold_crossedThreshold = CallFunc_TestThreshold_crossedThreshold;
	Parms.CallFunc_IsBeingRidden_ReturnValue_2 = CallFunc_IsBeingRidden_ReturnValue_2;
	Parms.CallFunc_IsBeingRidden_ReturnValue_3 = CallFunc_IsBeingRidden_ReturnValue_3;
	Parms.CallFunc_TestThreshold_crossedThreshold_1 = CallFunc_TestThreshold_crossedThreshold_1;
	Parms.CallFunc_IsBeingRidden_ReturnValue_4 = CallFunc_IsBeingRidden_ReturnValue_4;
	Parms.CallFunc_GetTimeSeconds_ReturnValue_1 = CallFunc_GetTimeSeconds_ReturnValue_1;
	Parms.K2Node_CustomEvent_EnergyCost_1 = K2Node_CustomEvent_EnergyCost_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_DetermineRateOfChange_RateOfChange = CallFunc_DetermineRateOfChange_RateOfChange;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_UpdateValue_updatedValue = CallFunc_UpdateValue_updatedValue;
	Parms.CallFunc_UpdateValue_energyDepleted = CallFunc_UpdateValue_energyDepleted;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.K2Node_Event_Rider = K2Node_Event_Rider;
	Parms.K2Node_Event_Rider_1 = K2Node_Event_Rider_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_ApplyGEToSelf_isValidClass = CallFunc_ApplyGEToSelf_isValidClass;
	Parms.CallFunc_ApplyGEToSelf_isValidClass_1 = CallFunc_ApplyGEToSelf_isValidClass_1;
	Parms.CallFunc_ApplyGEToSelf_isValidClass_2 = CallFunc_ApplyGEToSelf_isValidClass_2;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_GetOwner_ReturnValue_10 = CallFunc_GetOwner_ReturnValue_10;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.K2Node_DynamicCast_AsFort_Pawn_2 = K2Node_DynamicCast_AsFort_Pawn_2;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_GetOwner_ReturnValue_11 = CallFunc_GetOwner_ReturnValue_11;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_Event_bAbilityInputHeld = K2Node_Event_bAbilityInputHeld;
	Parms.K2Node_Event_bForceCancel = K2Node_Event_bForceCancel;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.CallFunc_IsSwimming_IsSwimming = CallFunc_IsSwimming_IsSwimming;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_EvaluateCurveTableRow_OutResult = CallFunc_EvaluateCurveTableRow_OutResult;
	Parms.CallFunc_EvaluateCurveTableRow_OutXY = CallFunc_EvaluateCurveTableRow_OutXY;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsBeingRidden_ReturnValue_5 = CallFunc_IsBeingRidden_ReturnValue_5;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_1 = CallFunc_NotEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_12 = CallFunc_GetOwner_ReturnValue_12;
	Parms.K2Node_DynamicCast_AsNPC_Pawn_Parent_1 = K2Node_DynamicCast_AsNPC_Pawn_Parent_1;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.K2Node_DynamicCast_AsNPC_Pawn_Parent_2 = K2Node_DynamicCast_AsNPC_Pawn_Parent_2;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_NPC_UpdateInteract_EnabledInteract_1 = CallFunc_NPC_UpdateInteract_EnabledInteract_1;
	Parms.CallFunc_NPC_CanBeInteractedWith_CanInteract = CallFunc_NPC_CanBeInteractedWith_CanInteract;
	Parms.CallFunc_GetFortAbilitySystemComponent_ReturnValue = CallFunc_GetFortAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_NPC_UpdateInteract_EnabledInteract_2 = CallFunc_NPC_UpdateInteract_EnabledInteract_2;
	Parms.CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue;
	Parms.CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue = CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue;
	Parms.CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue_1 = CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPlayer_Rider_Component = K2Node_DynamicCast_AsPlayer_Rider_Component;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_GetOwner_ReturnValue_13 = CallFunc_GetOwner_ReturnValue_13;
	Parms.CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue = CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.CallFunc_IsSprintToggleable_ReturnValue = CallFunc_IsSprintToggleable_ReturnValue;
	Parms.CallFunc_IsSprintToggleable_ReturnValue_1 = CallFunc_IsSprintToggleable_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.CallFunc_IsSprintToggleable_ReturnValue_2 = CallFunc_IsSprintToggleable_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_HasAnyMatchingGameplayTags_self_CastInput = CallFunc_HasAnyMatchingGameplayTags_self_CastInput;
	Parms.CallFunc_HasAnyMatchingGameplayTags_ReturnValue = CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_IsSprintToggleable_ReturnValue_3 = CallFunc_IsSprintToggleable_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_Event_StaminaPercent = K2Node_Event_StaminaPercent;
	Parms.K2Node_CustomEvent_Energy = K2Node_CustomEvent_Energy;
	Parms.K2Node_CustomEvent_bWarningActive = K2Node_CustomEvent_bWarningActive;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_17 = CallFunc_IsValid_ReturnValue_17;
	Parms.CallFunc_GetOwner_ReturnValue_14 = CallFunc_GetOwner_ReturnValue_14;
	Parms.CallFunc_IsValid_ReturnValue_18 = CallFunc_IsValid_ReturnValue_18;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_Athena = K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.K2Node_CustomEvent_EnergyCost = K2Node_CustomEvent_EnergyCost;
	Parms.CallFunc_GetOwner_ReturnValue_15 = CallFunc_GetOwner_ReturnValue_15;
	Parms.CallFunc_GetOwner_ReturnValue_16 = CallFunc_GetOwner_ReturnValue_16;
	Parms.CallFunc_IsValid_ReturnValue_19 = CallFunc_IsValid_ReturnValue_19;
	Parms.CallFunc_IsValid_ReturnValue_20 = CallFunc_IsValid_ReturnValue_20;
	Parms.CallFunc_HasAuthority_ReturnValue_5 = CallFunc_HasAuthority_ReturnValue_5;
	Parms.CallFunc_HasAuthority_ReturnValue_6 = CallFunc_HasAuthority_ReturnValue_6;
	Parms.CallFunc_GetOwner_ReturnValue_17 = CallFunc_GetOwner_ReturnValue_17;
	Parms.CallFunc_IsValid_ReturnValue_21 = CallFunc_IsValid_ReturnValue_21;
	Parms.CallFunc_IsValid_ReturnValue_22 = CallFunc_IsValid_ReturnValue_22;
	Parms.CallFunc_HasAuthority_ReturnValue_7 = CallFunc_HasAuthority_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_CanJumpExit_CanJumpExit = CallFunc_CanJumpExit_CanJumpExit;
	Parms.CallFunc_IsValid_ReturnValue_23 = CallFunc_IsValid_ReturnValue_23;
	Parms.CallFunc_IsValid_ReturnValue_24 = CallFunc_IsValid_ReturnValue_24;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_CanStartSprinting_ReturnValue = CallFunc_CanStartSprinting_ReturnValue;
	Parms.CallFunc_CanStartSprinting_ReturnValue_1 = CallFunc_CanStartSprinting_ReturnValue_1;
	Parms.CallFunc_ApplyGEToSelf_isValidClass_3 = CallFunc_ApplyGEToSelf_isValidClass_3;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_1 = CallFunc_LessEqual_DoubleDouble_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_EvaluateCurveTableRow_OutXY_1 = CallFunc_EvaluateCurveTableRow_OutXY_1;
	Parms.CallFunc_EvaluateCurveTableRow_ReturnValue = CallFunc_EvaluateCurveTableRow_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_18 = CallFunc_GetOwner_ReturnValue_18;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_WaitGameplayTagAddToActor_ReturnValue = CallFunc_WaitGameplayTagAddToActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_25 = CallFunc_IsValid_ReturnValue_25;
	Parms.CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue_1 = CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_26 = CallFunc_IsValid_ReturnValue_26;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_EvaluateCurveTableRow_OutResult_1 = CallFunc_EvaluateCurveTableRow_OutResult_1;
	Parms.CallFunc_EvaluateCurveTableRow_OutXY_2 = CallFunc_EvaluateCurveTableRow_OutXY_2;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetOwner_ReturnValue_19 = CallFunc_GetOwner_ReturnValue_19;
	Parms.CallFunc_ShouldBufferJumpExitToRetryJump_Output = CallFunc_ShouldBufferJumpExitToRetryJump_Output;
	Parms.K2Node_DynamicCast_AsFort_AIPawn_4 = K2Node_DynamicCast_AsFort_AIPawn_4;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.K2Node_CustomEvent_Hit_1 = K2Node_CustomEvent_Hit_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue_1 = CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue_1;
	Parms.CallFunc_Should_Convert_Jump_Exit_to_Jump_Out = CallFunc_Should_Convert_Jump_Exit_to_Jump_Out;
	Parms.K2Node_MakeStruct_CurveTableRowHandle = K2Node_MakeStruct_CurveTableRowHandle;
	Parms.K2Node_MakeStruct_ScalableFloat = K2Node_MakeStruct_ScalableFloat;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.K2Node_MakeStruct_CurveTableRowHandle_1 = K2Node_MakeStruct_CurveTableRowHandle_1;
	Parms.K2Node_MakeStruct_ScalableFloat_1 = K2Node_MakeStruct_ScalableFloat_1;
	Parms.CallFunc_GetFortAbilitySystemComponent_ReturnValue_1 = CallFunc_GetFortAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_1 = CallFunc_GetValueAtLevel_ReturnValue_1;
	Parms.K2Node_CustomEvent_Hit = K2Node_CustomEvent_Hit;
	Parms.CallFunc_ShouldBufferJumpExitToRetryJump_Output_1 = CallFunc_ShouldBufferJumpExitToRetryJump_Output_1;
	Parms.CallFunc_GetValueAsBool_ReturnValue = CallFunc_GetValueAsBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_27 = CallFunc_IsValid_ReturnValue_27;
	Parms.CallFunc_GetValueAsBool_ReturnValue_1 = CallFunc_GetValueAsBool_ReturnValue_1;
	Parms.CallFunc_GetValueAsBool_ReturnValue_2 = CallFunc_GetValueAsBool_ReturnValue_2;
	Parms.CallFunc_GetPettingData_ReturnValue = CallFunc_GetPettingData_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.K2Node_VariableSet_currentEnergyValue_ImplicitCast = K2Node_VariableSet_currentEnergyValue_ImplicitCast;
	Parms.K2Node_VariableSet_CurrentEnergyRateOfRecharge_ImplicitCast = K2Node_VariableSet_CurrentEnergyRateOfRecharge_ImplicitCast;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_UpdateLootAnimalGlow_Scale_ImplicitCast = CallFunc_UpdateLootAnimalGlow_Scale_ImplicitCast;
	Parms.CallFunc_UpdateLootAnimalGlow_Scale_ImplicitCast_1 = CallFunc_UpdateLootAnimalGlow_Scale_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.RidableUIUpdateEnergy__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Energy                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsResting                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::RidableUIUpdateEnergy__DelegateSignature(double Energy, bool bIsResting)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "RidableUIUpdateEnergy__DelegateSignature");

	Params::UCreatureBaseRidableComponent_C_RidableUIUpdateEnergy__DelegateSignature_Params Parms;

	Parms.Energy = Energy;
	Parms.bIsResting = bIsResting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.RidableUIStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateBrush                 Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UCreatureBaseRidableComponent_C::RidableUIStart__DelegateSignature(class FText Name, const struct FSlateBrush& Icon)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "RidableUIStart__DelegateSignature");

	Params::UCreatureBaseRidableComponent_C_RidableUIStart__DelegateSignature_Params Parms;

	Parms.Name = Name;
	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.AudioOnJumpApex__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreatureBaseRidableComponent_C::AudioOnJumpApex__DelegateSignature()
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "AudioOnJumpApex__DelegateSignature");

	Params::UCreatureBaseRidableComponent_C_AudioOnJumpApex__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.AudioOnJump__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             JumpPitchInterpSpeed                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseRidableComponent_C::AudioOnJump__DelegateSignature(double JumpPitchInterpSpeed)
{
	static auto Func = Class->GetFunction("CreatureBaseRidableComponent_C", "AudioOnJump__DelegateSignature");

	Params::UCreatureBaseRidableComponent_C_AudioOnJump__DelegateSignature_Params Parms;

	Parms.JumpPitchInterpSpeed = JumpPitchInterpSpeed;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
