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


// Function NitroFlow_Axe_AnimBP.NitroFlow_Axe_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UNitroFlow_Axe_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("NitroFlow_Axe_AnimBP_C", "AnimGraph");

	Params::UNitroFlow_Axe_AnimBP_C_AnimGraph_Params Parms;

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function NitroFlow_Axe_AnimBP.NitroFlow_Axe_AnimBP_C.ExecuteUbergraph_NitroFlow_Axe_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNitroFlow_Axe_AnimBP_C::ExecuteUbergraph_NitroFlow_Axe_AnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("NitroFlow_Axe_AnimBP_C", "ExecuteUbergraph_NitroFlow_Axe_AnimBP");

	Params::UNitroFlow_Axe_AnimBP_C_ExecuteUbergraph_NitroFlow_Axe_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
