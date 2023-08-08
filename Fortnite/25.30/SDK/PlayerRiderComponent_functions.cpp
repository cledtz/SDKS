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


// Function PlayerRiderComponent.PlayerRiderComponent_C.GetRidingInfoFromTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             JumpAttachGroundHeightMin                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             JumpAttachGroundHeightBuffer                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UsesAltRidingMessage                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerRiderComponent_C::GetRidingInfoFromTarget(double* JumpAttachGroundHeightMin, double* JumpAttachGroundHeightBuffer, bool* UsesAltRidingMessage)
{
	static auto Func = Class->GetFunction("PlayerRiderComponent_C", "GetRidingInfoFromTarget");

	Params::UPlayerRiderComponent_C_GetRidingInfoFromTarget_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (JumpAttachGroundHeightMin != nullptr)
		*JumpAttachGroundHeightMin = Parms.JumpAttachGroundHeightMin;

	if (JumpAttachGroundHeightBuffer != nullptr)
		*JumpAttachGroundHeightBuffer = Parms.JumpAttachGroundHeightBuffer;

	if (UsesAltRidingMessage != nullptr)
		*UsesAltRidingMessage = Parms.UsesAltRidingMessage;

}


// Function PlayerRiderComponent.PlayerRiderComponent_C.OnRep_targetHealth
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerRiderComponent_C::OnRep_targetHealth()
{
	static auto Func = Class->GetFunction("PlayerRiderComponent_C", "OnRep_targetHealth");

	Params::UPlayerRiderComponent_C_OnRep_targetHealth_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRiderComponent.PlayerRiderComponent_C.OnRep_targetEnergy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerRiderComponent_C::OnRep_targetEnergy()
{
	static auto Func = Class->GetFunction("PlayerRiderComponent_C", "OnRep_targetEnergy");

	Params::UPlayerRiderComponent_C_OnRep_targetEnergy_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRiderComponent.PlayerRiderComponent_C.GetJumpInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             TargetActorComponent                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             JumpAttach_GroundHeightMin                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             JumpAttach_GroundHeightBuffer                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseAltRidingMessage                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCreatureBaseNonRidableComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCreatureBaseRidableComponent_C*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerRiderComponent_C::GetJumpInfo(class UActor* TargetActor, class UActorComponent** TargetActorComponent, double* JumpAttach_GroundHeightMin, double* JumpAttach_GroundHeightBuffer, bool* UseAltRidingMessage, class UCreatureBaseNonRidableComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UCreatureBaseRidableComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static auto Func = Class->GetFunction("PlayerRiderComponent_C", "GetJumpInfo");

	Params::UPlayerRiderComponent_C_GetJumpInfo_Params Parms;

	Parms.TargetActor = TargetActor;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetActorComponent != nullptr)
		*TargetActorComponent = Parms.TargetActorComponent;

	if (JumpAttach_GroundHeightMin != nullptr)
		*JumpAttach_GroundHeightMin = Parms.JumpAttach_GroundHeightMin;

	if (JumpAttach_GroundHeightBuffer != nullptr)
		*JumpAttach_GroundHeightBuffer = Parms.JumpAttach_GroundHeightBuffer;

	if (UseAltRidingMessage != nullptr)
		*UseAltRidingMessage = Parms.UseAltRidingMessage;

}


// Function PlayerRiderComponent.PlayerRiderComponent_C.TestIfValidForRidingAttempt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     TargetObject                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               UseAltRidingMessage                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             CallFunc_GetJumpInfo_TargetActorComponent                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetJumpInfo_JumpAttach_GroundHeightMin                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetJumpInfo_JumpAttach_GroundHeightBuffer               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetJumpInfo_UseAltRidingMessage                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPawnComponent_Convert*  CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetOnlyLeaderInteraction_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_GetConverterPawn_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerRiderComponent_C::TestIfValidForRidingAttempt(class UObject* Object, bool* Success, class UObject** TargetObject, bool* UseAltRidingMessage, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UActorComponent* CallFunc_GetJumpInfo_TargetActorComponent, double CallFunc_GetJumpInfo_JumpAttach_GroundHeightMin, double CallFunc_GetJumpInfo_JumpAttach_GroundHeightBuffer, bool CallFunc_GetJumpInfo_UseAltRidingMessage, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_IsValid_ReturnValue_1, class UObject* K2Node_Select_Default, class UFortPawnComponent_Convert* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_GetOnlyLeaderInteraction_ReturnValue, class UFortPlayerPawn* CallFunc_GetConverterPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue_1, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue_3, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1)
{
	static auto Func = Class->GetFunction("PlayerRiderComponent_C", "TestIfValidForRidingAttempt");

	Params::UPlayerRiderComponent_C_TestIfValidForRidingAttempt_Params Parms;

	Parms.Object = Object;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetJumpInfo_TargetActorComponent = CallFunc_GetJumpInfo_TargetActorComponent;
	Parms.CallFunc_GetJumpInfo_JumpAttach_GroundHeightMin = CallFunc_GetJumpInfo_JumpAttach_GroundHeightMin;
	Parms.CallFunc_GetJumpInfo_JumpAttach_GroundHeightBuffer = CallFunc_GetJumpInfo_JumpAttach_GroundHeightBuffer;
	Parms.CallFunc_GetJumpInfo_UseAltRidingMessage = CallFunc_GetJumpInfo_UseAltRidingMessage;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetScaledCapsuleHalfHeight_ReturnValue = CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetOnlyLeaderInteraction_ReturnValue = CallFunc_GetOnlyLeaderInteraction_ReturnValue;
	Parms.CallFunc_GetConverterPawn_ReturnValue = CallFunc_GetConverterPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetScaledCapsuleHalfHeight_ReturnValue_1 = CallFunc_GetScaledCapsuleHalfHeight_ReturnValue_1;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_2 = CallFunc_Subtract_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_3 = CallFunc_Subtract_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1 = CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (TargetObject != nullptr)
		*TargetObject = Parms.TargetObject;

	if (UseAltRidingMessage != nullptr)
		*UseAltRidingMessage = Parms.UseAltRidingMessage;

}


// Function PlayerRiderComponent.PlayerRiderComponent_C.ToggleRiding
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

void UPlayerRiderComponent_C::ToggleRiding(class UActor* PlayerPawn, class UActor* Target, bool ShouldRide, bool* bChangedRiding, TScriptInterface<class UGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class UGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class URiderComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool CallFunc_StopRidingActor_ReturnValue, bool CallFunc_StartRidingActor_ReturnValue, class UControllingRiderComponent* K2Node_DynamicCast_AsControlling_Rider_Component, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static auto Func = Class->GetFunction("PlayerRiderComponent_C", "ToggleRiding");

	Params::UPlayerRiderComponent_C_ToggleRiding_Params Parms;

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


// Function PlayerRiderComponent.PlayerRiderComponent_C.EventReceived_E5B5FB5340DB5660002329825657B406
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerRiderComponent_C::EventReceived_E5B5FB5340DB5660002329825657B406(const struct FGameplayEventData& Payload)
{
	static auto Func = Class->GetFunction("PlayerRiderComponent_C", "EventReceived_E5B5FB5340DB5660002329825657B406");

	Params::UPlayerRiderComponent_C_EventReceived_E5B5FB5340DB5660002329825657B406_Params Parms;

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRiderComponent.PlayerRiderComponent_C.Added_42EF586645CCFF06FFA4D9A5D59B1298
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerRiderComponent_C::Added_42EF586645CCFF06FFA4D9A5D59B1298()
{
	static auto Func = Class->GetFunction("PlayerRiderComponent_C", "Added_42EF586645CCFF06FFA4D9A5D59B1298");

	Params::UPlayerRiderComponent_C_Added_42EF586645CCFF06FFA4D9A5D59B1298_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRiderComponent.PlayerRiderComponent_C.Added_A83C775344FE0F6BDAAC4B971F57425E
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerRiderComponent_C::Added_A83C775344FE0F6BDAAC4B971F57425E()
{
	static auto Func = Class->GetFunction("PlayerRiderComponent_C", "Added_A83C775344FE0F6BDAAC4B971F57425E");

	Params::UPlayerRiderComponent_C_Added_A83C775344FE0F6BDAAC4B971F57425E_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRiderComponent.PlayerRiderComponent_C.EventReceived_3DA19BC649FB853BA2CC0FADFF8D08F6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerRiderComponent_C::EventReceived_3DA19BC649FB853BA2CC0FADFF8D08F6(const struct FGameplayEventData& Payload)
{
	static auto Func = Class->GetFunction("PlayerRiderComponent_C", "EventReceived_3DA19BC649FB853BA2CC0FADFF8D08F6");

	Params::UPlayerRiderComponent_C_EventReceived_3DA19BC649FB853BA2CC0FADFF8D08F6_Params Parms;

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRiderComponent.PlayerRiderComponent_C.Added_D3DFE4374EED456A4C597E95375A2028
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerRiderComponent_C::Added_D3DFE4374EED456A4C597E95375A2028()
{
	static auto Func = Class->GetFunction("PlayerRiderComponent_C", "Added_D3DFE4374EED456A4C597E95375A2028");

	Params::UPlayerRiderComponent_C_Added_D3DFE4374EED456A4C597E95375A2028_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRiderComponent.PlayerRiderComponent_C.ToggleRidingAlternative
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerRiderComponent_C::ToggleRidingAlternative()
{
	static auto Func = Class->GetFunction("PlayerRiderComponent_C", "ToggleRidingAlternative");

	Params::UPlayerRiderComponent_C_ToggleRidingAlternative_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRiderComponent.PlayerRiderComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UPlayerRiderComponent_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("PlayerRiderComponent_C", "ReceiveBeginPlay");

	Params::UPlayerRiderComponent_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRiderComponent.PlayerRiderComponent_C.HandleStartedRiding
// (Event, Protected, BlueprintEvent)
// Parameters:
// class URidableComponent*           Ridable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UPlayerRiderComponent_C::HandleStartedRiding(class URidableComponent* Ridable)
{
	static auto Func = Class->GetFunction("PlayerRiderComponent_C", "HandleStartedRiding");

	Params::UPlayerRiderComponent_C_HandleStartedRiding_Params Parms;

	Parms.Ridable = Ridable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRiderComponent.PlayerRiderComponent_C.HandleStoppedRiding
// (Event, Protected, BlueprintEvent)
// Parameters:
// class URidableComponent*           Ridable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UPlayerRiderComponent_C::HandleStoppedRiding(class URidableComponent* Ridable)
{
	static auto Func = Class->GetFunction("PlayerRiderComponent_C", "HandleStoppedRiding");

	Params::UPlayerRiderComponent_C_HandleStoppedRiding_Params Parms;

	Parms.Ridable = Ridable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRiderComponent.PlayerRiderComponent_C.ToggleRidingOnServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     TargetObject                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               UseAltRidingMessage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerRiderComponent_C::ToggleRidingOnServer(class UObject* TargetObject, bool UseAltRidingMessage)
{
	static auto Func = Class->GetFunction("PlayerRiderComponent_C", "ToggleRidingOnServer");

	Params::UPlayerRiderComponent_C_ToggleRidingOnServer_Params Parms;

	Parms.TargetObject = TargetObject;
	Parms.UseAltRidingMessage = UseAltRidingMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRiderComponent.PlayerRiderComponent_C.SetTargetHealth
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TargetHealth                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerRiderComponent_C::SetTargetHealth(double TargetHealth)
{
	static auto Func = Class->GetFunction("PlayerRiderComponent_C", "SetTargetHealth");

	Params::UPlayerRiderComponent_C_SetTargetHealth_Params Parms;

	Parms.TargetHealth = TargetHealth;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRiderComponent.PlayerRiderComponent_C.RiderUIStartClient
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateBrush                 Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UActor*                      Ridable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPlayerRiderComponent_C::RiderUIStartClient(class FText Name, const struct FSlateBrush& Icon, class UActor* Ridable)
{
	static auto Func = Class->GetFunction("PlayerRiderComponent_C", "RiderUIStartClient");

	Params::UPlayerRiderComponent_C_RiderUIStartClient_Params Parms;

	Parms.Name = Name;
	Parms.Icon = Icon;
	Parms.Ridable = Ridable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRiderComponent.PlayerRiderComponent_C.RiderUIEndClient
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      Ridable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPlayerRiderComponent_C::RiderUIEndClient(class UActor* Ridable)
{
	static auto Func = Class->GetFunction("PlayerRiderComponent_C", "RiderUIEndClient");

	Params::UPlayerRiderComponent_C_RiderUIEndClient_Params Parms;

	Parms.Ridable = Ridable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRiderComponent.PlayerRiderComponent_C.MovementModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCharacter*                  Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMovementMode           PrevMovementMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              PreviousCustomMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerRiderComponent_C::MovementModeChanged(class UCharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static auto Func = Class->GetFunction("PlayerRiderComponent_C", "MovementModeChanged");

	Params::UPlayerRiderComponent_C_MovementModeChanged_Params Parms;

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRiderComponent.PlayerRiderComponent_C.MountLanded
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UPlayerRiderComponent_C::MountLanded(struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("PlayerRiderComponent_C", "MountLanded");

	Params::UPlayerRiderComponent_C_MountLanded_Params Parms;

	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRiderComponent.PlayerRiderComponent_C.HandleRequestPettingStart
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerRiderComponent_C::HandleRequestPettingStart()
{
	static auto Func = Class->GetFunction("PlayerRiderComponent_C", "HandleRequestPettingStart");

	Params::UPlayerRiderComponent_C_HandleRequestPettingStart_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRiderComponent.PlayerRiderComponent_C.HandleRequestPettingStop
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerRiderComponent_C::HandleRequestPettingStop()
{
	static auto Func = Class->GetFunction("PlayerRiderComponent_C", "HandleRequestPettingStop");

	Params::UPlayerRiderComponent_C_HandleRequestPettingStop_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRiderComponent.PlayerRiderComponent_C.HandleRidableFound
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  HitResult                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UPlayerRiderComponent_C::HandleRidableFound(struct FHitResult& HitResult)
{
	static auto Func = Class->GetFunction("PlayerRiderComponent_C", "HandleRidableFound");

	Params::UPlayerRiderComponent_C_HandleRidableFound_Params Parms;

	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRiderComponent.PlayerRiderComponent_C.ExecuteUbergraph_PlayerRiderComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Temp_struct_Variable                                             ()
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URidableComponent*           K2Node_Event_Ridable_1                                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class URidableComponent*           K2Node_Event_Ridable                                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_DynamicCast_AsFort_Pawn_1                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_4                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ENetRole                CallFunc_GetLocalRole_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue            (NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_5                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_6                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_TargetObject                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_UseAltRidingMessage                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class URidingGeneric_Interafce_C>K2Node_DynamicCast_AsRiding_Generic_Interafce                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ToggleRiding_bChangedRiding                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          Temp_struct_Variable_1                                           ()
// double                             K2Node_CustomEvent_targetHealth                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Name                                          ()
// struct FSlateBrush                 K2Node_CustomEvent_Icon                                          ()
// class UActor*                      K2Node_CustomEvent_Ridable_1                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_CustomEvent_Ridable                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCharacter*                  K2Node_CustomEvent_Character                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMovementMode           K2Node_CustomEvent_PrevMovementMode                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              K2Node_CustomEvent_PreviousCustomMode                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StopRidingActor_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_7                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityAsync_WaitGameplayEvent*CallFunc_WaitGameplayEventToActor_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityAsync_WaitGameplayEvent*CallFunc_WaitGameplayEventToActor_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_Payload_1                                     ()
// bool                               CallFunc_StopRidingActor_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          Temp_struct_Variable_2                                           ()
// class UActor*                      CallFunc_GetOwner_ReturnValue_8                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityAsync_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAddToActor_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityAsync_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAddToActor_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_Payload                                       ()
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_CustomEvent_Hit                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UActor*                      CallFunc_GetOwner_ReturnValue_9                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_10                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_DynamicCast_AsFort_Pawn_2                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_11                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCreatureBaseRidableComponent_C*K2Node_DynamicCast_AsCreature_Base_Ridable_Component             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector3f_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector3f_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector3f_Z                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)
// class UActor*                      CallFunc_GetOwner_ReturnValue_12                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ENetRole                CallFunc_GetLocalRole_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRidingActor_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_13                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanBePet_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_14                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue_1             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_15                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue_2             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitResult                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TestIfValidForRidingAttempt_Success                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_TestIfValidForRidingAttempt_TargetObject                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TestIfValidForRidingAttempt_UseAltRidingMessage         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_16                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityAsync_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAddToActor_ReturnValue_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue_17                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              ()
// struct FGameplayTagContainer       CallFunc_GetOwnedGameplayTags_TagContainer                       ()
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector3f                   CallFunc_BreakVector3f_InVec_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerRiderComponent_C::ExecuteUbergraph_PlayerRiderComponent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTagContainer& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class URidableComponent* K2Node_Event_Ridable_1, class URidableComponent* K2Node_Event_Ridable, class UActor* CallFunc_GetOwner_ReturnValue_2, class UActor* CallFunc_GetOwner_ReturnValue_3, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, class UActor* CallFunc_GetOwner_ReturnValue_4, enum class ENetRole CallFunc_GetLocalRole_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, class UActor* CallFunc_GetOwner_ReturnValue_6, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_2, class UObject* K2Node_CustomEvent_TargetObject, bool K2Node_CustomEvent_UseAltRidingMessage, TScriptInterface<class URidingGeneric_Interafce_C> K2Node_DynamicCast_AsRiding_Generic_Interafce, bool K2Node_DynamicCast_bSuccess_3, class UActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_ToggleRiding_bChangedRiding, const struct FGameplayEventData& Temp_struct_Variable_1, double K2Node_CustomEvent_targetHealth, class FText K2Node_CustomEvent_Name, const struct FSlateBrush& K2Node_CustomEvent_Icon, class UActor* K2Node_CustomEvent_Ridable_1, class UActor* K2Node_CustomEvent_Ridable, class UCharacter* K2Node_CustomEvent_Character, enum class EMovementMode K2Node_CustomEvent_PrevMovementMode, uint8 K2Node_CustomEvent_PreviousCustomMode, bool CallFunc_StopRidingActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_3, class UActor* CallFunc_GetOwner_ReturnValue_7, class UAbilityAsync_WaitGameplayEvent* CallFunc_WaitGameplayEventToActor_ReturnValue, class UAbilityAsync_WaitGameplayEvent* CallFunc_WaitGameplayEventToActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, const struct FGameplayEventData& K2Node_CustomEvent_Payload_1, bool CallFunc_StopRidingActor_ReturnValue_1, const struct FGameplayEventData& Temp_struct_Variable_2, class UActor* CallFunc_GetOwner_ReturnValue_8, class UAbilityAsync_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAddToActor_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue_6, class UAbilityAsync_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAddToActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, const struct FGameplayEventData& K2Node_CustomEvent_Payload, bool Temp_bool_Has_Been_Initd_Variable, const struct FHitResult& K2Node_CustomEvent_Hit, class UActor* CallFunc_GetOwner_ReturnValue_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValid_ReturnValue_8, class UActor* CallFunc_GetOwner_ReturnValue_10, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn_2, bool K2Node_DynamicCast_bSuccess_5, class UActor* CallFunc_GetOwner_ReturnValue_11, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, class UCreatureBaseRidableComponent_C* K2Node_DynamicCast_AsCreature_Base_Ridable_Component, bool K2Node_DynamicCast_bSuccess_6, float CallFunc_BreakVector3f_X, float CallFunc_BreakVector3f_Y, float CallFunc_BreakVector3f_Z, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue_12, enum class ENetRole CallFunc_GetLocalRole_ReturnValue_1, bool CallFunc_IsRidingActor_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UActor* CallFunc_GetOwner_ReturnValue_13, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_HasAuthority_ReturnValue_3, bool CallFunc_CanBePet_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_11, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue_1, class UActor* CallFunc_GetOwner_ReturnValue_15, bool CallFunc_IsValid_ReturnValue_12, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue_2, bool Temp_bool_IsClosed_Variable, const struct FHitResult& K2Node_Event_HitResult, class UFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class UActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsValid_ReturnValue_13, bool CallFunc_TestIfValidForRidingAttempt_Success, class UObject* CallFunc_TestIfValidForRidingAttempt_TargetObject, bool CallFunc_TestIfValidForRidingAttempt_UseAltRidingMessage, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue_16, class UAbilityAsync_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAddToActor_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsValid_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_15, class UActor* CallFunc_GetOwner_ReturnValue_17, TScriptInterface<class UGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess_7, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_IsValid_ReturnValue_16, const struct FVector3f& CallFunc_BreakVector3f_InVec_ImplicitCast)
{
	static auto Func = Class->GetFunction("PlayerRiderComponent_C", "ExecuteUbergraph_PlayerRiderComponent");

	Params::UPlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Event_Ridable_1 = K2Node_Event_Ridable_1;
	Parms.K2Node_Event_Ridable = K2Node_Event_Ridable;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue_3 = CallFunc_GetOwner_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Pawn_1 = K2Node_DynamicCast_AsFort_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetOwner_ReturnValue_4 = CallFunc_GetOwner_ReturnValue_4;
	Parms.CallFunc_GetLocalRole_ReturnValue = CallFunc_GetLocalRole_ReturnValue;
	Parms.CallFunc_GetFortAbilitySystemComponent_ReturnValue = CallFunc_GetFortAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_5 = CallFunc_GetOwner_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue = CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue_6 = CallFunc_GetOwner_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CustomEvent_TargetObject = K2Node_CustomEvent_TargetObject;
	Parms.K2Node_CustomEvent_UseAltRidingMessage = K2Node_CustomEvent_UseAltRidingMessage;
	Parms.K2Node_DynamicCast_AsRiding_Generic_Interafce = K2Node_DynamicCast_AsRiding_Generic_Interafce;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_ToggleRiding_bChangedRiding = CallFunc_ToggleRiding_bChangedRiding;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_CustomEvent_targetHealth = K2Node_CustomEvent_targetHealth;
	Parms.K2Node_CustomEvent_Name = K2Node_CustomEvent_Name;
	Parms.K2Node_CustomEvent_Icon = K2Node_CustomEvent_Icon;
	Parms.K2Node_CustomEvent_Ridable_1 = K2Node_CustomEvent_Ridable_1;
	Parms.K2Node_CustomEvent_Ridable = K2Node_CustomEvent_Ridable;
	Parms.K2Node_CustomEvent_Character = K2Node_CustomEvent_Character;
	Parms.K2Node_CustomEvent_PrevMovementMode = K2Node_CustomEvent_PrevMovementMode;
	Parms.K2Node_CustomEvent_PreviousCustomMode = K2Node_CustomEvent_PreviousCustomMode;
	Parms.CallFunc_StopRidingActor_ReturnValue = CallFunc_StopRidingActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetOwner_ReturnValue_7 = CallFunc_GetOwner_ReturnValue_7;
	Parms.CallFunc_WaitGameplayEventToActor_ReturnValue = CallFunc_WaitGameplayEventToActor_ReturnValue;
	Parms.CallFunc_WaitGameplayEventToActor_ReturnValue_1 = CallFunc_WaitGameplayEventToActor_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_CustomEvent_Payload_1 = K2Node_CustomEvent_Payload_1;
	Parms.CallFunc_StopRidingActor_ReturnValue_1 = CallFunc_StopRidingActor_ReturnValue_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_GetOwner_ReturnValue_8 = CallFunc_GetOwner_ReturnValue_8;
	Parms.CallFunc_WaitGameplayTagAddToActor_ReturnValue = CallFunc_WaitGameplayTagAddToActor_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_WaitGameplayTagAddToActor_ReturnValue_1 = CallFunc_WaitGameplayTagAddToActor_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_CustomEvent_Payload = K2Node_CustomEvent_Payload;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CustomEvent_Hit = K2Node_CustomEvent_Hit;
	Parms.CallFunc_GetOwner_ReturnValue_9 = CallFunc_GetOwner_ReturnValue_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GetOwner_ReturnValue_10 = CallFunc_GetOwner_ReturnValue_10;
	Parms.K2Node_DynamicCast_AsFort_Pawn_2 = K2Node_DynamicCast_AsFort_Pawn_2;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetOwner_ReturnValue_11 = CallFunc_GetOwner_ReturnValue_11;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.K2Node_DynamicCast_AsCreature_Base_Ridable_Component = K2Node_DynamicCast_AsCreature_Base_Ridable_Component;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_BreakVector3f_X = CallFunc_BreakVector3f_X;
	Parms.CallFunc_BreakVector3f_Y = CallFunc_BreakVector3f_Y;
	Parms.CallFunc_BreakVector3f_Z = CallFunc_BreakVector3f_Z;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_12 = CallFunc_GetOwner_ReturnValue_12;
	Parms.CallFunc_GetLocalRole_ReturnValue_1 = CallFunc_GetLocalRole_ReturnValue_1;
	Parms.CallFunc_IsRidingActor_ReturnValue = CallFunc_IsRidingActor_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_13 = CallFunc_GetOwner_ReturnValue_13;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_HasAuthority_ReturnValue_3 = CallFunc_HasAuthority_ReturnValue_3;
	Parms.CallFunc_CanBePet_ReturnValue = CallFunc_CanBePet_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_14 = CallFunc_GetOwner_ReturnValue_14;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_GetFortAbilitySystemComponent_ReturnValue_1 = CallFunc_GetFortAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_15 = CallFunc_GetOwner_ReturnValue_15;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.CallFunc_GetFortAbilitySystemComponent_ReturnValue_2 = CallFunc_GetFortAbilitySystemComponent_ReturnValue_2;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_HitResult = K2Node_Event_HitResult;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue = CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.CallFunc_TestIfValidForRidingAttempt_Success = CallFunc_TestIfValidForRidingAttempt_Success;
	Parms.CallFunc_TestIfValidForRidingAttempt_TargetObject = CallFunc_TestIfValidForRidingAttempt_TargetObject;
	Parms.CallFunc_TestIfValidForRidingAttempt_UseAltRidingMessage = CallFunc_TestIfValidForRidingAttempt_UseAltRidingMessage;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_16 = CallFunc_GetOwner_ReturnValue_16;
	Parms.CallFunc_WaitGameplayTagAddToActor_ReturnValue_2 = CallFunc_WaitGameplayTagAddToActor_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.CallFunc_GetOwner_ReturnValue_17 = CallFunc_GetOwner_ReturnValue_17;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_GetOwnedGameplayTags_TagContainer = CallFunc_GetOwnedGameplayTags_TagContainer;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.CallFunc_BreakVector3f_InVec_ImplicitCast = CallFunc_BreakVector3f_InVec_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRiderComponent.PlayerRiderComponent_C.RiderUIUpdateHealth__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Health                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerRiderComponent_C::RiderUIUpdateHealth__DelegateSignature(double Health)
{
	static auto Func = Class->GetFunction("PlayerRiderComponent_C", "RiderUIUpdateHealth__DelegateSignature");

	Params::UPlayerRiderComponent_C_RiderUIUpdateHealth__DelegateSignature_Params Parms;

	Parms.Health = Health;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRiderComponent.PlayerRiderComponent_C.RiderUIUpdateEnergy__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Energy                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerRiderComponent_C::RiderUIUpdateEnergy__DelegateSignature(double Energy)
{
	static auto Func = Class->GetFunction("PlayerRiderComponent_C", "RiderUIUpdateEnergy__DelegateSignature");

	Params::UPlayerRiderComponent_C_RiderUIUpdateEnergy__DelegateSignature_Params Parms;

	Parms.Energy = Energy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRiderComponent.PlayerRiderComponent_C.RiderUIEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      RidableActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPlayerRiderComponent_C::RiderUIEnd__DelegateSignature(class UActor* RidableActor)
{
	static auto Func = Class->GetFunction("PlayerRiderComponent_C", "RiderUIEnd__DelegateSignature");

	Params::UPlayerRiderComponent_C_RiderUIEnd__DelegateSignature_Params Parms;

	Parms.RidableActor = RidableActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRiderComponent.PlayerRiderComponent_C.RiderUINewStats__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateBrush                 Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UActor*                      RidableActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPlayerRiderComponent_C::RiderUINewStats__DelegateSignature(class FText Name, const struct FSlateBrush& Icon, class UActor* RidableActor)
{
	static auto Func = Class->GetFunction("PlayerRiderComponent_C", "RiderUINewStats__DelegateSignature");

	Params::UPlayerRiderComponent_C_RiderUINewStats__DelegateSignature_Params Parms;

	Parms.Name = Name;
	Parms.Icon = Icon;
	Parms.RidableActor = RidableActor;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
