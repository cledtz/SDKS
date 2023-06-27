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


// Function SwimmingAnimBP.SwimmingAnimBP_C.MovementMode_AimOffset
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InAimOffsetsPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InSourcePosePreAimOffsets                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_AimOffset                                           (Parm, OutParm, NoDestructor)

void USwimmingAnimBP_C::MovementMode_AimOffset(const struct FPoseLink& InAimOffsetsPose, const struct FPoseLink& InSourcePosePreAimOffsets, struct FPoseLink* MovementMode_AimOffset)
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "MovementMode_AimOffset");

	Params::USwimmingAnimBP_C_MovementMode_AimOffset_Params Parms;

	Parms.InAimOffsetsPose = InAimOffsetsPose;
	Parms.InSourcePosePreAimOffsets = InSourcePosePreAimOffsets;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_AimOffset != nullptr)
		*MovementMode_AimOffset = Parms.MovementMode_AimOffset;

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.MovementMode_FinalPoseOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InFinalPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_FinalPoseOverride                                   (Parm, OutParm, NoDestructor)

void USwimmingAnimBP_C::MovementMode_FinalPoseOverride(const struct FPoseLink& InFinalPose, struct FPoseLink* MovementMode_FinalPoseOverride)
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "MovementMode_FinalPoseOverride");

	Params::USwimmingAnimBP_C_MovementMode_FinalPoseOverride_Params Parms;

	Parms.InFinalPose = InFinalPose;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_FinalPoseOverride != nullptr)
		*MovementMode_FinalPoseOverride = Parms.MovementMode_FinalPoseOverride;

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.MovementMode_FullBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InputPoseFullBody                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_FullBodyOverride                                    (Parm, OutParm, NoDestructor)

void USwimmingAnimBP_C::MovementMode_FullBodyOverride(const struct FPoseLink& InputPoseFullBody, struct FPoseLink* MovementMode_FullBodyOverride)
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "MovementMode_FullBodyOverride");

	Params::USwimmingAnimBP_C_MovementMode_FullBodyOverride_Params Parms;

	Parms.InputPoseFullBody = InputPoseFullBody;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_FullBodyOverride != nullptr)
		*MovementMode_FullBodyOverride = Parms.MovementMode_FullBodyOverride;

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.MovementMode_LowerBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InLowerBodyPose                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InSourcePose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_LowerBodyOverride                                   (Parm, OutParm, NoDestructor)

void USwimmingAnimBP_C::MovementMode_LowerBodyOverride(const struct FPoseLink& InLowerBodyPose, const struct FPoseLink& InSourcePose, struct FPoseLink* MovementMode_LowerBodyOverride)
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "MovementMode_LowerBodyOverride");

	Params::USwimmingAnimBP_C_MovementMode_LowerBodyOverride_Params Parms;

	Parms.InLowerBodyPose = InLowerBodyPose;
	Parms.InSourcePose = InSourcePose;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_LowerBodyOverride != nullptr)
		*MovementMode_LowerBodyOverride = Parms.MovementMode_LowerBodyOverride;

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.MovementMode_LocomotionAdditives
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InLocomotionAdditivesPose                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_LocomotionAdditives                                 (Parm, OutParm, NoDestructor)

void USwimmingAnimBP_C::MovementMode_LocomotionAdditives(const struct FPoseLink& InLocomotionAdditivesPose, struct FPoseLink* MovementMode_LocomotionAdditives)
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "MovementMode_LocomotionAdditives");

	Params::USwimmingAnimBP_C_MovementMode_LocomotionAdditives_Params Parms;

	Parms.InLocomotionAdditivesPose = InLocomotionAdditivesPose;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_LocomotionAdditives != nullptr)
		*MovementMode_LocomotionAdditives = Parms.MovementMode_LocomotionAdditives;

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.MovementMode_SourcePose
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InSourcePoseBase                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_SourcePose                                          (Parm, OutParm, NoDestructor)

void USwimmingAnimBP_C::MovementMode_SourcePose(const struct FPoseLink& InSourcePoseBase, struct FPoseLink* MovementMode_SourcePose)
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "MovementMode_SourcePose");

	Params::USwimmingAnimBP_C_MovementMode_SourcePose_Params Parms;

	Parms.InSourcePoseBase = InSourcePoseBase;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_SourcePose != nullptr)
		*MovementMode_SourcePose = Parms.MovementMode_SourcePose;

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USwimmingAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "AnimGraph");

	Params::USwimmingAnimBP_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.On Dive Jump Ground Land Update
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FAnimationStateResultReferenceCallFunc_ConvertToAnimationStateResult_AnimationState            (NoDestructor)
// enum class EAnimNodeReferenceConversionResultCallFunc_ConvertToAnimationStateResult_Result                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRelevantAnimTimeRemaining_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USwimmingAnimBP_C::On_Dive_Jump_Ground_Land_Update(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FAnimationStateResultReference& CallFunc_ConvertToAnimationStateResult_AnimationState, enum class EAnimNodeReferenceConversionResult CallFunc_ConvertToAnimationStateResult_Result, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "On Dive Jump Ground Land Update");

	Params::USwimmingAnimBP_C_On_Dive_Jump_Ground_Land_Update_Params Parms;

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToAnimationStateResult_AnimationState = CallFunc_ConvertToAnimationStateResult_AnimationState;
	Parms.CallFunc_ConvertToAnimationStateResult_Result = CallFunc_ConvertToAnimationStateResult_Result;
	Parms.CallFunc_GetRelevantAnimTimeRemaining_ReturnValue = CallFunc_GetRelevantAnimTimeRemaining_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_63C0C596447D773617BA3F81E189DD6A
// (BlueprintEvent)
// Parameters:

void USwimmingAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_63C0C596447D773617BA3F81E189DD6A()
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_63C0C596447D773617BA3F81E189DD6A");

	Params::USwimmingAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_63C0C596447D773617BA3F81E189DD6A_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_A2BC0C1C4C08F505008D78822E2CDA35
// (BlueprintEvent)
// Parameters:

void USwimmingAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_A2BC0C1C4C08F505008D78822E2CDA35()
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_A2BC0C1C4C08F505008D78822E2CDA35");

	Params::USwimmingAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_A2BC0C1C4C08F505008D78822E2CDA35_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimSprintStart_Entered_Layer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USwimmingAnimBP_C::AnimNotify_SwimSprintStart_Entered_Layer()
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "AnimNotify_SwimSprintStart_Entered_Layer");

	Params::USwimmingAnimBP_C_AnimNotify_SwimSprintStart_Entered_Layer_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimSprintStart_Exited_Layer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USwimmingAnimBP_C::AnimNotify_SwimSprintStart_Exited_Layer()
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "AnimNotify_SwimSprintStart_Exited_Layer");

	Params::USwimmingAnimBP_C_AnimNotify_SwimSprintStart_Exited_Layer_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimSprint_Entered_Layer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USwimmingAnimBP_C::AnimNotify_SwimSprint_Entered_Layer()
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "AnimNotify_SwimSprint_Entered_Layer");

	Params::USwimmingAnimBP_C_AnimNotify_SwimSprint_Entered_Layer_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimSprintSlow_Entered_Layer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USwimmingAnimBP_C::AnimNotify_SwimSprintSlow_Entered_Layer()
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "AnimNotify_SwimSprintSlow_Entered_Layer");

	Params::USwimmingAnimBP_C_AnimNotify_SwimSprintSlow_Entered_Layer_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimStartAdditive_Entered_Layer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USwimmingAnimBP_C::AnimNotify_SwimStartAdditive_Entered_Layer()
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "AnimNotify_SwimStartAdditive_Entered_Layer");

	Params::USwimmingAnimBP_C_AnimNotify_SwimStartAdditive_Entered_Layer_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimMovementAccelAdditive_Exited_Layer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USwimmingAnimBP_C::AnimNotify_SwimMovementAccelAdditive_Exited_Layer()
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "AnimNotify_SwimMovementAccelAdditive_Exited_Layer");

	Params::USwimmingAnimBP_C_AnimNotify_SwimMovementAccelAdditive_Exited_Layer_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.ExecuteUbergraph_SwimmingAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRelevantAnimTime_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRelevantAnimTime_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_LocalAccelYawAngleAtStart_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USwimmingAnimBP_C::ExecuteUbergraph_SwimmingAnimBP(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_IsClosed_Variable, float CallFunc_GetRelevantAnimTime_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_GetRelevantAnimTime_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double K2Node_VariableSet_LocalAccelYawAngleAtStart_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1)
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "ExecuteUbergraph_SwimmingAnimBP");

	Params::USwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetRelevantAnimTime_ReturnValue = CallFunc_GetRelevantAnimTime_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetRelevantAnimTime_ReturnValue_1 = CallFunc_GetRelevantAnimTime_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_VariableSet_LocalAccelYawAngleAtStart_ImplicitCast = K2Node_VariableSet_LocalAccelYawAngleAtStart_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
