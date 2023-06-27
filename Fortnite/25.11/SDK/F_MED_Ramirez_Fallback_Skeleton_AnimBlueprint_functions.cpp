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


// Function F_MED_Ramirez_Fallback_Skeleton_AnimBlueprint.F_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UF_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("F_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::UF_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function F_MED_Ramirez_Fallback_Skeleton_AnimBlueprint.F_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C.ExecuteUbergraph_F_MED_Ramirez_Fallback_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UF_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C::ExecuteUbergraph_F_MED_Ramirez_Fallback_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("F_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_F_MED_Ramirez_Fallback_Skeleton_AnimBlueprint");

	Params::UF_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C_ExecuteUbergraph_F_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
