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


// Function Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UGameplay_FaceSystem_StateMachine_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("Gameplay_FaceSystem_StateMachine_AnimBP_C", "AnimGraph");

	Params::UGameplay_FaceSystem_StateMachine_AnimBP_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C.ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameplay_FaceSystem_StateMachine_AnimBP_C::ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Gameplay_FaceSystem_StateMachine_AnimBP_C", "ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP");

	Params::UGameplay_FaceSystem_StateMachine_AnimBP_C_ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
