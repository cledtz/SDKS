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


// Function Player_SourcePose_AnimBP.Player_SourcePose_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UPlayer_SourcePose_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("Player_SourcePose_AnimBP_C", "AnimGraph");

	Params::UPlayer_SourcePose_AnimBP_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function Player_SourcePose_AnimBP.Player_SourcePose_AnimBP_C.ResetBlendListNode
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// enum class EAnimNodeReferenceConversionResultCallFunc_ConvertToBlendListBase_Result                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBlendListBaseReference     CallFunc_ConvertToBlendListBase_ReturnValue                      (NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayer_SourcePose_AnimBP_C::ResetBlendListNode(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult CallFunc_ConvertToBlendListBase_Result, const struct FBlendListBaseReference& CallFunc_ConvertToBlendListBase_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("Player_SourcePose_AnimBP_C", "ResetBlendListNode");

	Params::UPlayer_SourcePose_AnimBP_C_ResetBlendListNode_Params Parms;

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToBlendListBase_Result = CallFunc_ConvertToBlendListBase_Result;
	Parms.CallFunc_ConvertToBlendListBase_ReturnValue = CallFunc_ConvertToBlendListBase_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Player_SourcePose_AnimBP.Player_SourcePose_AnimBP_C.ExecuteUbergraph_Player_SourcePose_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayer_SourcePose_AnimBP_C::ExecuteUbergraph_Player_SourcePose_AnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Player_SourcePose_AnimBP_C", "ExecuteUbergraph_Player_SourcePose_AnimBP");

	Params::UPlayer_SourcePose_AnimBP_C_ExecuteUbergraph_Player_SourcePose_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
