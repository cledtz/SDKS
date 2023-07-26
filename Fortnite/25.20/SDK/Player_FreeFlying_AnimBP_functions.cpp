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


// Function Player_FreeFlying_AnimBP.Player_FreeFlying_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UPlayer_FreeFlying_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("Player_FreeFlying_AnimBP_C", "AnimGraph");

	Params::UPlayer_FreeFlying_AnimBP_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function Player_FreeFlying_AnimBP.Player_FreeFlying_AnimBP_C.ExecuteUbergraph_Player_FreeFlying_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayer_FreeFlying_AnimBP_C::ExecuteUbergraph_Player_FreeFlying_AnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Player_FreeFlying_AnimBP_C", "ExecuteUbergraph_Player_FreeFlying_AnimBP");

	Params::UPlayer_FreeFlying_AnimBP_C_ExecuteUbergraph_Player_FreeFlying_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
