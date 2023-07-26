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


// Function LoudPhoenix_Axe_AnimBP.LoudPhoenix_Axe_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void ULoudPhoenix_Axe_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("LoudPhoenix_Axe_AnimBP_C", "AnimGraph");

	Params::ULoudPhoenix_Axe_AnimBP_C_AnimGraph_Params Parms;

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function LoudPhoenix_Axe_AnimBP.LoudPhoenix_Axe_AnimBP_C.ExecuteUbergraph_LoudPhoenix_Axe_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoudPhoenix_Axe_AnimBP_C::ExecuteUbergraph_LoudPhoenix_Axe_AnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("LoudPhoenix_Axe_AnimBP_C", "ExecuteUbergraph_LoudPhoenix_Axe_AnimBP");

	Params::ULoudPhoenix_Axe_AnimBP_C_ExecuteUbergraph_LoudPhoenix_Axe_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
