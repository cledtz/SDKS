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


// Function Fringe_Plank_AnimBP.Fringe_Plank_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UFringe_Plank_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("Fringe_Plank_AnimBP_C", "AnimGraph");

	Params::UFringe_Plank_AnimBP_C_AnimGraph_Params Parms;

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function Fringe_Plank_AnimBP.Fringe_Plank_AnimBP_C.ExecuteUbergraph_Fringe_Plank_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFringe_Plank_AnimBP_C::ExecuteUbergraph_Fringe_Plank_AnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Fringe_Plank_AnimBP_C", "ExecuteUbergraph_Fringe_Plank_AnimBP");

	Params::UFringe_Plank_AnimBP_C_ExecuteUbergraph_Fringe_Plank_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
