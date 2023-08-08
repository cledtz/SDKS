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


// Function HighTower_Tapas_Axe_AnimBP.HighTower_Tapas_Axe_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UHighTower_Tapas_Axe_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("HighTower_Tapas_Axe_AnimBP_C", "AnimGraph");

	Params::UHighTower_Tapas_Axe_AnimBP_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function HighTower_Tapas_Axe_AnimBP.HighTower_Tapas_Axe_AnimBP_C.ExecuteUbergraph_HighTower_Tapas_Axe_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHighTower_Tapas_Axe_AnimBP_C::ExecuteUbergraph_HighTower_Tapas_Axe_AnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("HighTower_Tapas_Axe_AnimBP_C", "ExecuteUbergraph_HighTower_Tapas_Axe_AnimBP");

	Params::UHighTower_Tapas_Axe_AnimBP_C_ExecuteUbergraph_HighTower_Tapas_Axe_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
