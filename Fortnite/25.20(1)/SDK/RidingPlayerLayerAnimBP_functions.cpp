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


// Function RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.VehicleFinalPoseOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InFinalPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleFinalPoseOverride                                         (Parm, OutParm, NoDestructor)

void URidingPlayerLayerAnimBP_C::VehicleFinalPoseOverride(const struct FPoseLink& InFinalPose, struct FPoseLink* VehicleFinalPoseOverride)
{
	static auto Func = Class->GetFunction("RidingPlayerLayerAnimBP_C", "VehicleFinalPoseOverride");

	Params::URidingPlayerLayerAnimBP_C_VehicleFinalPoseOverride_Params Parms;

	Parms.InFinalPose = InFinalPose;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleFinalPoseOverride != nullptr)
		*VehicleFinalPoseOverride = Parms.VehicleFinalPoseOverride;

}


// Function RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.VehicleFullBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseFullBody                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleFullBodyOverride                                          (Parm, OutParm, NoDestructor)

void URidingPlayerLayerAnimBP_C::VehicleFullBodyOverride(const struct FPoseLink& InPoseFullBody, struct FPoseLink* VehicleFullBodyOverride)
{
	static auto Func = Class->GetFunction("RidingPlayerLayerAnimBP_C", "VehicleFullBodyOverride");

	Params::URidingPlayerLayerAnimBP_C_VehicleFullBodyOverride_Params Parms;

	Parms.InPoseFullBody = InPoseFullBody;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleFullBodyOverride != nullptr)
		*VehicleFullBodyOverride = Parms.VehicleFullBodyOverride;

}


// Function RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.VehicleLowerBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyDefault                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InPoseUpperBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleLowerBodyOverride                                         (Parm, OutParm, NoDestructor)

void URidingPlayerLayerAnimBP_C::VehicleLowerBodyOverride(const struct FPoseLink& InPoseLowerBodyDefault, const struct FPoseLink& InPoseUpperBody, struct FPoseLink* VehicleLowerBodyOverride)
{
	static auto Func = Class->GetFunction("RidingPlayerLayerAnimBP_C", "VehicleLowerBodyOverride");

	Params::URidingPlayerLayerAnimBP_C_VehicleLowerBodyOverride_Params Parms;

	Parms.InPoseLowerBodyDefault = InPoseLowerBodyDefault;
	Parms.InPoseUpperBody = InPoseUpperBody;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleLowerBodyOverride != nullptr)
		*VehicleLowerBodyOverride = Parms.VehicleLowerBodyOverride;

}


// Function RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.VehicleSplitBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseSplitBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InPoseUpperAndLowerBody                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InPoseUpperAndLowerBodyRemoveRoot                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleSplitBodyOverride                                         (Parm, OutParm, NoDestructor)

void URidingPlayerLayerAnimBP_C::VehicleSplitBodyOverride(const struct FPoseLink& InPoseSplitBody, const struct FPoseLink& InPoseUpperAndLowerBody, const struct FPoseLink& InPoseUpperAndLowerBodyRemoveRoot, struct FPoseLink* VehicleSplitBodyOverride)
{
	static auto Func = Class->GetFunction("RidingPlayerLayerAnimBP_C", "VehicleSplitBodyOverride");

	Params::URidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride_Params Parms;

	Parms.InPoseSplitBody = InPoseSplitBody;
	Parms.InPoseUpperAndLowerBody = InPoseUpperAndLowerBody;
	Parms.InPoseUpperAndLowerBodyRemoveRoot = InPoseUpperAndLowerBodyRemoveRoot;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleSplitBodyOverride != nullptr)
		*VehicleSplitBodyOverride = Parms.VehicleSplitBodyOverride;

}


// Function RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void URidingPlayerLayerAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("RidingPlayerLayerAnimBP_C", "AnimGraph");

	Params::URidingPlayerLayerAnimBP_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_D1B22730415169A7290CBFAD6C915976
// (BlueprintEvent)
// Parameters:

void URidingPlayerLayerAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_D1B22730415169A7290CBFAD6C915976()
{
	static auto Func = Class->GetFunction("RidingPlayerLayerAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_D1B22730415169A7290CBFAD6C915976");

	Params::URidingPlayerLayerAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_D1B22730415169A7290CBFAD6C915976_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_RotateRootBone_D73766CE4BF0C956278D7FA8259A40CA
// (BlueprintEvent)
// Parameters:

void URidingPlayerLayerAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_RotateRootBone_D73766CE4BF0C956278D7FA8259A40CA()
{
	static auto Func = Class->GetFunction("RidingPlayerLayerAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_RotateRootBone_D73766CE4BF0C956278D7FA8259A40CA");

	Params::URidingPlayerLayerAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_RotateRootBone_D73766CE4BF0C956278D7FA8259A40CA_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URidingPlayerLayerAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto Func = Class->GetFunction("RidingPlayerLayerAnimBP_C", "BlueprintUpdateAnimation");

	Params::URidingPlayerLayerAnimBP_C_BlueprintUpdateAnimation_Params Parms;

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.ExecuteUbergraph_RidingPlayerLayerAnimBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URiderComponent*             CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCreatureBaseRidableComponent_C*K2Node_DynamicCast_AsCreature_Base_Ridable_Component             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAIPawn*                 K2Node_DynamicCast_AsFort_AIPawn                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetBaseAimRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetBaseAimRotation_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NormalizeAxis_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasCurrentMontage_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_TransformRotation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_StructMemberSet_Yaw_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NormalizeAxis_Angle_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_LowerBodyYaw_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URidingPlayerLayerAnimBP_C::ExecuteUbergraph_RidingPlayerLayerAnimBP(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetVelocity_ReturnValue, double CallFunc_VSize_ReturnValue, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue_1, class URiderComponent* CallFunc_GetComponentByClass_ReturnValue, class UCreatureBaseRidableComponent_C* K2Node_DynamicCast_AsCreature_Base_Ridable_Component, bool K2Node_DynamicCast_bSuccess, class UActor* CallFunc_GetOwner_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class UFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess_1, float K2Node_Event_DeltaTimeX, class UActor* CallFunc_GetOwningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_SelectFloat_ReturnValue, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_2, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, const struct FRotator& CallFunc_GetBaseAimRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_GetBaseAimRotation_ReturnValue_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, float CallFunc_NormalizeAxis_ReturnValue, bool CallFunc_HasCurrentMontage_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FRotator& CallFunc_TransformRotation_ReturnValue, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, float K2Node_StructMemberSet_Yaw_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float CallFunc_NormalizeAxis_Angle_ImplicitCast, double K2Node_VariableSet_LowerBodyYaw_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1, float CallFunc_MakeRotator_Yaw_ImplicitCast)
{
	static auto Func = Class->GetFunction("RidingPlayerLayerAnimBP_C", "ExecuteUbergraph_RidingPlayerLayerAnimBP");

	Params::URidingPlayerLayerAnimBP_C_ExecuteUbergraph_RidingPlayerLayerAnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue_1 = CallFunc_HasTag_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsCreature_Base_Ridable_Component = K2Node_DynamicCast_AsCreature_Base_Ridable_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_AIPawn = K2Node_DynamicCast_AsFort_AIPawn;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_1 = CallFunc_LessEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetBaseAimRotation_ReturnValue = CallFunc_GetBaseAimRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_GetBaseAimRotation_ReturnValue_1 = CallFunc_GetBaseAimRotation_ReturnValue_1;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_NormalizeAxis_ReturnValue = CallFunc_NormalizeAxis_ReturnValue;
	Parms.CallFunc_HasCurrentMontage_ReturnValue = CallFunc_HasCurrentMontage_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_TransformRotation_ReturnValue = CallFunc_TransformRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll_2 = CallFunc_BreakRotator_Roll_2;
	Parms.CallFunc_BreakRotator_Pitch_2 = CallFunc_BreakRotator_Pitch_2;
	Parms.CallFunc_BreakRotator_Yaw_2 = CallFunc_BreakRotator_Yaw_2;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_2 = CallFunc_Subtract_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_2 = CallFunc_LessEqual_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_StructMemberSet_Yaw_ImplicitCast = K2Node_StructMemberSet_Yaw_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_NormalizeAxis_Angle_ImplicitCast = CallFunc_NormalizeAxis_Angle_ImplicitCast;
	Parms.K2Node_VariableSet_LowerBodyYaw_ImplicitCast = K2Node_VariableSet_LowerBodyYaw_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1 = CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
