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


// Function Player_PropertiesDebug_AnimBP.Player_PropertiesDebug_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UPlayer_PropertiesDebug_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("Player_PropertiesDebug_AnimBP_C", "AnimGraph");

	Params::UPlayer_PropertiesDebug_AnimBP_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function Player_PropertiesDebug_AnimBP.Player_PropertiesDebug_AnimBP_C.ExecuteUbergraph_Player_PropertiesDebug_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayer_PropertiesDebug_AnimBP_C::ExecuteUbergraph_Player_PropertiesDebug_AnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Player_PropertiesDebug_AnimBP_C", "ExecuteUbergraph_Player_PropertiesDebug_AnimBP");

	Params::UPlayer_PropertiesDebug_AnimBP_C_ExecuteUbergraph_Player_PropertiesDebug_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
