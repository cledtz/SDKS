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


// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.MovementMode_AimOffset
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InAimOffsetsPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InSourcePosePreAimOffsets                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_AimOffset                                           (Parm, OutParm, NoDestructor)

void USlidingLayerAnimBP_C::MovementMode_AimOffset(const struct FPoseLink& InAimOffsetsPose, const struct FPoseLink& InSourcePosePreAimOffsets, struct FPoseLink* MovementMode_AimOffset)
{
	static auto Func = Class->GetFunction("SlidingLayerAnimBP_C", "MovementMode_AimOffset");

	Params::USlidingLayerAnimBP_C_MovementMode_AimOffset_Params Parms;

	Parms.InAimOffsetsPose = InAimOffsetsPose;
	Parms.InSourcePosePreAimOffsets = InSourcePosePreAimOffsets;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_AimOffset != nullptr)
		*MovementMode_AimOffset = Parms.MovementMode_AimOffset;

}


// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.MovementMode_FinalPoseOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InFinalPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_FinalPoseOverride                                   (Parm, OutParm, NoDestructor)

void USlidingLayerAnimBP_C::MovementMode_FinalPoseOverride(const struct FPoseLink& InFinalPose, struct FPoseLink* MovementMode_FinalPoseOverride)
{
	static auto Func = Class->GetFunction("SlidingLayerAnimBP_C", "MovementMode_FinalPoseOverride");

	Params::USlidingLayerAnimBP_C_MovementMode_FinalPoseOverride_Params Parms;

	Parms.InFinalPose = InFinalPose;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_FinalPoseOverride != nullptr)
		*MovementMode_FinalPoseOverride = Parms.MovementMode_FinalPoseOverride;

}


// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.MovementMode_FullBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InputPoseFullBody                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_FullBodyOverride                                    (Parm, OutParm, NoDestructor)

void USlidingLayerAnimBP_C::MovementMode_FullBodyOverride(const struct FPoseLink& InputPoseFullBody, struct FPoseLink* MovementMode_FullBodyOverride)
{
	static auto Func = Class->GetFunction("SlidingLayerAnimBP_C", "MovementMode_FullBodyOverride");

	Params::USlidingLayerAnimBP_C_MovementMode_FullBodyOverride_Params Parms;

	Parms.InputPoseFullBody = InputPoseFullBody;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_FullBodyOverride != nullptr)
		*MovementMode_FullBodyOverride = Parms.MovementMode_FullBodyOverride;

}


// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.MovementMode_SourcePose
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InSourcePoseBase                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_SourcePose                                          (Parm, OutParm, NoDestructor)

void USlidingLayerAnimBP_C::MovementMode_SourcePose(const struct FPoseLink& InSourcePoseBase, struct FPoseLink* MovementMode_SourcePose)
{
	static auto Func = Class->GetFunction("SlidingLayerAnimBP_C", "MovementMode_SourcePose");

	Params::USlidingLayerAnimBP_C_MovementMode_SourcePose_Params Parms;

	Parms.InSourcePoseBase = InSourcePoseBase;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_SourcePose != nullptr)
		*MovementMode_SourcePose = Parms.MovementMode_SourcePose;

}


// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.MovementMode_LowerBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InLowerBodyPose                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InSourcePose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_LowerBodyOverride                                   (Parm, OutParm, NoDestructor)

void USlidingLayerAnimBP_C::MovementMode_LowerBodyOverride(const struct FPoseLink& InLowerBodyPose, const struct FPoseLink& InSourcePose, struct FPoseLink* MovementMode_LowerBodyOverride)
{
	static auto Func = Class->GetFunction("SlidingLayerAnimBP_C", "MovementMode_LowerBodyOverride");

	Params::USlidingLayerAnimBP_C_MovementMode_LowerBodyOverride_Params Parms;

	Parms.InLowerBodyPose = InLowerBodyPose;
	Parms.InSourcePose = InSourcePose;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_LowerBodyOverride != nullptr)
		*MovementMode_LowerBodyOverride = Parms.MovementMode_LowerBodyOverride;

}


// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.MovementMode_LocomotionAdditives
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InLocomotionAdditivesPose                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_LocomotionAdditives                                 (Parm, OutParm, NoDestructor)

void USlidingLayerAnimBP_C::MovementMode_LocomotionAdditives(const struct FPoseLink& InLocomotionAdditivesPose, struct FPoseLink* MovementMode_LocomotionAdditives)
{
	static auto Func = Class->GetFunction("SlidingLayerAnimBP_C", "MovementMode_LocomotionAdditives");

	Params::USlidingLayerAnimBP_C_MovementMode_LocomotionAdditives_Params Parms;

	Parms.InLocomotionAdditivesPose = InLocomotionAdditivesPose;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_LocomotionAdditives != nullptr)
		*MovementMode_LocomotionAdditives = Parms.MovementMode_LocomotionAdditives;

}


// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USlidingLayerAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("SlidingLayerAnimBP_C", "AnimGraph");

	Params::USlidingLayerAnimBP_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USlidingLayerAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto Func = Class->GetFunction("SlidingLayerAnimBP_C", "BlueprintUpdateAnimation");

	Params::USlidingLayerAnimBP_C_BlueprintUpdateAnimation_Params Parms;

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void USlidingLayerAnimBP_C::BlueprintInitializeAnimation()
{
	static auto Func = Class->GetFunction("SlidingLayerAnimBP_C", "BlueprintInitializeAnimation");

	Params::USlidingLayerAnimBP_C_BlueprintInitializeAnimation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SlidingLayerAnimBP_AnimGraphNode_ApplyMeshSpaceAdditive_CA45D1154A0385BF8F15FBB40CA66AD6
// (BlueprintEvent)
// Parameters:

void USlidingLayerAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SlidingLayerAnimBP_AnimGraphNode_ApplyMeshSpaceAdditive_CA45D1154A0385BF8F15FBB40CA66AD6()
{
	static auto Func = Class->GetFunction("SlidingLayerAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SlidingLayerAnimBP_AnimGraphNode_ApplyMeshSpaceAdditive_CA45D1154A0385BF8F15FBB40CA66AD6");

	Params::USlidingLayerAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SlidingLayerAnimBP_AnimGraphNode_ApplyMeshSpaceAdditive_CA45D1154A0385BF8F15FBB40CA66AD6_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.ExecuteUbergraph_SlidingLayerAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NormalizeToRange_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_A_ImplicitCast                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_StructMemberSet_Alpha_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USlidingLayerAnimBP_C::ExecuteUbergraph_SlidingLayerAnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, double CallFunc_Abs_ReturnValue, double CallFunc_NormalizeToRange_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Abs_A_ImplicitCast, float K2Node_StructMemberSet_Alpha_ImplicitCast)
{
	static auto Func = Class->GetFunction("SlidingLayerAnimBP_C", "ExecuteUbergraph_SlidingLayerAnimBP");

	Params::USlidingLayerAnimBP_C_ExecuteUbergraph_SlidingLayerAnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_NormalizeToRange_ReturnValue = CallFunc_NormalizeToRange_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Abs_A_ImplicitCast = CallFunc_Abs_A_ImplicitCast;
	Parms.K2Node_StructMemberSet_Alpha_ImplicitCast = K2Node_StructMemberSet_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
