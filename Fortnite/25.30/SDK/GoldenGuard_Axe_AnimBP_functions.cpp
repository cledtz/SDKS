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


// Function GoldenGuard_Axe_AnimBP.GoldenGuard_Axe_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UGoldenGuard_Axe_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("GoldenGuard_Axe_AnimBP_C", "AnimGraph");

	Params::UGoldenGuard_Axe_AnimBP_C_AnimGraph_Params Parms;

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function GoldenGuard_Axe_AnimBP.GoldenGuard_Axe_AnimBP_C.ExecuteUbergraph_GoldenGuard_Axe_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGoldenGuard_Axe_AnimBP_C::ExecuteUbergraph_GoldenGuard_Axe_AnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("GoldenGuard_Axe_AnimBP_C", "ExecuteUbergraph_GoldenGuard_Axe_AnimBP");

	Params::UGoldenGuard_Axe_AnimBP_C_ExecuteUbergraph_GoldenGuard_Axe_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
