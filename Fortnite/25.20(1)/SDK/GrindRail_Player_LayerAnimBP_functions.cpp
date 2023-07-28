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


// Function GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C.MovementMode_LowerBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InLowerBodyPose                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InSourcePose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_LowerBodyOverride                                   (Parm, OutParm, NoDestructor)

void UGrindRail_Player_LayerAnimBP_C::MovementMode_LowerBodyOverride(const struct FPoseLink& InLowerBodyPose, const struct FPoseLink& InSourcePose, struct FPoseLink* MovementMode_LowerBodyOverride)
{
	static auto Func = Class->GetFunction("GrindRail_Player_LayerAnimBP_C", "MovementMode_LowerBodyOverride");

	Params::UGrindRail_Player_LayerAnimBP_C_MovementMode_LowerBodyOverride_Params Parms;

	Parms.InLowerBodyPose = InLowerBodyPose;
	Parms.InSourcePose = InSourcePose;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_LowerBodyOverride != nullptr)
		*MovementMode_LowerBodyOverride = Parms.MovementMode_LowerBodyOverride;

}


// Function GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C.MovementMode_LocomotionAdditives
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InLocomotionAdditivesPose                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_LocomotionAdditives                                 (Parm, OutParm, NoDestructor)

void UGrindRail_Player_LayerAnimBP_C::MovementMode_LocomotionAdditives(const struct FPoseLink& InLocomotionAdditivesPose, struct FPoseLink* MovementMode_LocomotionAdditives)
{
	static auto Func = Class->GetFunction("GrindRail_Player_LayerAnimBP_C", "MovementMode_LocomotionAdditives");

	Params::UGrindRail_Player_LayerAnimBP_C_MovementMode_LocomotionAdditives_Params Parms;

	Parms.InLocomotionAdditivesPose = InLocomotionAdditivesPose;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_LocomotionAdditives != nullptr)
		*MovementMode_LocomotionAdditives = Parms.MovementMode_LocomotionAdditives;

}


// Function GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C.MovementMode_SourcePose
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InSourcePoseBase                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_SourcePose                                          (Parm, OutParm, NoDestructor)

void UGrindRail_Player_LayerAnimBP_C::MovementMode_SourcePose(const struct FPoseLink& InSourcePoseBase, struct FPoseLink* MovementMode_SourcePose)
{
	static auto Func = Class->GetFunction("GrindRail_Player_LayerAnimBP_C", "MovementMode_SourcePose");

	Params::UGrindRail_Player_LayerAnimBP_C_MovementMode_SourcePose_Params Parms;

	Parms.InSourcePoseBase = InSourcePoseBase;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_SourcePose != nullptr)
		*MovementMode_SourcePose = Parms.MovementMode_SourcePose;

}


// Function GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C.MovementMode_FullBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InputPoseFullBody                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_FullBodyOverride                                    (Parm, OutParm, NoDestructor)

void UGrindRail_Player_LayerAnimBP_C::MovementMode_FullBodyOverride(const struct FPoseLink& InputPoseFullBody, struct FPoseLink* MovementMode_FullBodyOverride)
{
	static auto Func = Class->GetFunction("GrindRail_Player_LayerAnimBP_C", "MovementMode_FullBodyOverride");

	Params::UGrindRail_Player_LayerAnimBP_C_MovementMode_FullBodyOverride_Params Parms;

	Parms.InputPoseFullBody = InputPoseFullBody;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_FullBodyOverride != nullptr)
		*MovementMode_FullBodyOverride = Parms.MovementMode_FullBodyOverride;

}


// Function GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C.MovementMode_FinalPoseOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InFinalPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_FinalPoseOverride                                   (Parm, OutParm, NoDestructor)

void UGrindRail_Player_LayerAnimBP_C::MovementMode_FinalPoseOverride(const struct FPoseLink& InFinalPose, struct FPoseLink* MovementMode_FinalPoseOverride)
{
	static auto Func = Class->GetFunction("GrindRail_Player_LayerAnimBP_C", "MovementMode_FinalPoseOverride");

	Params::UGrindRail_Player_LayerAnimBP_C_MovementMode_FinalPoseOverride_Params Parms;

	Parms.InFinalPose = InFinalPose;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_FinalPoseOverride != nullptr)
		*MovementMode_FinalPoseOverride = Parms.MovementMode_FinalPoseOverride;

}


// Function GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C.MovementMode_AimOffset
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InAimOffsetsPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InSourcePosePreAimOffsets                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_AimOffset                                           (Parm, OutParm, NoDestructor)

void UGrindRail_Player_LayerAnimBP_C::MovementMode_AimOffset(const struct FPoseLink& InAimOffsetsPose, const struct FPoseLink& InSourcePosePreAimOffsets, struct FPoseLink* MovementMode_AimOffset)
{
	static auto Func = Class->GetFunction("GrindRail_Player_LayerAnimBP_C", "MovementMode_AimOffset");

	Params::UGrindRail_Player_LayerAnimBP_C_MovementMode_AimOffset_Params Parms;

	Parms.InAimOffsetsPose = InAimOffsetsPose;
	Parms.InSourcePosePreAimOffsets = InSourcePosePreAimOffsets;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_AimOffset != nullptr)
		*MovementMode_AimOffset = Parms.MovementMode_AimOffset;

}


// Function GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C.LocomotionAdditiveGroup
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseLocomotionAdditive                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   LocomotionAdditiveGroup                                          (Parm, OutParm, NoDestructor)

void UGrindRail_Player_LayerAnimBP_C::LocomotionAdditiveGroup(const struct FPoseLink& InPoseLocomotionAdditive, struct FPoseLink* LocomotionAdditiveGroup)
{
	static auto Func = Class->GetFunction("GrindRail_Player_LayerAnimBP_C", "LocomotionAdditiveGroup");

	Params::UGrindRail_Player_LayerAnimBP_C_LocomotionAdditiveGroup_Params Parms;

	Parms.InPoseLocomotionAdditive = InPoseLocomotionAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (LocomotionAdditiveGroup != nullptr)
		*LocomotionAdditiveGroup = Parms.LocomotionAdditiveGroup;

}


// Function GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UGrindRail_Player_LayerAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("GrindRail_Player_LayerAnimBP_C", "AnimGraph");

	Params::UGrindRail_Player_LayerAnimBP_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_1A4025C94AC4E34FBC9B23AB49CFD72E
// (BlueprintEvent)
// Parameters:

void UGrindRail_Player_LayerAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_1A4025C94AC4E34FBC9B23AB49CFD72E()
{
	static auto Func = Class->GetFunction("GrindRail_Player_LayerAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_1A4025C94AC4E34FBC9B23AB49CFD72E");

	Params::UGrindRail_Player_LayerAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_1A4025C94AC4E34FBC9B23AB49CFD72E_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_CFB7F39F4D881298D08C1D96AD6AA6FA
// (BlueprintEvent)
// Parameters:

void UGrindRail_Player_LayerAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_CFB7F39F4D881298D08C1D96AD6AA6FA()
{
	static auto Func = Class->GetFunction("GrindRail_Player_LayerAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_CFB7F39F4D881298D08C1D96AD6AA6FA");

	Params::UGrindRail_Player_LayerAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_CFB7F39F4D881298D08C1D96AD6AA6FA_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_FD09E8AA456E65281CC87F8A6C4113AC
// (BlueprintEvent)
// Parameters:

void UGrindRail_Player_LayerAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_FD09E8AA456E65281CC87F8A6C4113AC()
{
	static auto Func = Class->GetFunction("GrindRail_Player_LayerAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_FD09E8AA456E65281CC87F8A6C4113AC");

	Params::UGrindRail_Player_LayerAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_FD09E8AA456E65281CC87F8A6C4113AC_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_DF95C1FE4A2F5813CB01DE80C013E1C6
// (BlueprintEvent)
// Parameters:

void UGrindRail_Player_LayerAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_DF95C1FE4A2F5813CB01DE80C013E1C6()
{
	static auto Func = Class->GetFunction("GrindRail_Player_LayerAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_DF95C1FE4A2F5813CB01DE80C013E1C6");

	Params::UGrindRail_Player_LayerAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_DF95C1FE4A2F5813CB01DE80C013E1C6_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_5697EE674F17ADBB80BF75A833AFA309
// (BlueprintEvent)
// Parameters:

void UGrindRail_Player_LayerAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_5697EE674F17ADBB80BF75A833AFA309()
{
	static auto Func = Class->GetFunction("GrindRail_Player_LayerAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_5697EE674F17ADBB80BF75A833AFA309");

	Params::UGrindRail_Player_LayerAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_5697EE674F17ADBB80BF75A833AFA309_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_3BE669A04B6B559EC4783B8E897AD836
// (BlueprintEvent)
// Parameters:

void UGrindRail_Player_LayerAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_3BE669A04B6B559EC4783B8E897AD836()
{
	static auto Func = Class->GetFunction("GrindRail_Player_LayerAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_3BE669A04B6B559EC4783B8E897AD836");

	Params::UGrindRail_Player_LayerAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_3BE669A04B6B559EC4783B8E897AD836_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C.ExecuteUbergraph_GrindRail_Player_LayerAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGrindRail_Player_LayerAnimBP_C::ExecuteUbergraph_GrindRail_Player_LayerAnimBP(int32 EntryPoint, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2)
{
	static auto Func = Class->GetFunction("GrindRail_Player_LayerAnimBP_C", "ExecuteUbergraph_GrindRail_Player_LayerAnimBP");

	Params::UGrindRail_Player_LayerAnimBP_C_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
