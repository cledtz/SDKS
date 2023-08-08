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


// Function Player_Locomotion_Prototype_Template.Player_Locomotion_Prototype_Template_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InSourcePose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UPlayer_Locomotion_Prototype_Template_C::AnimGraph(const struct FPoseLink& InSourcePose, struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("Player_Locomotion_Prototype_Template_C", "AnimGraph");

	Params::UPlayer_Locomotion_Prototype_Template_C_AnimGraph_Params Parms;

	Parms.InSourcePose = InSourcePose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function Player_Locomotion_Prototype_Template.Player_Locomotion_Prototype_Template_C.ExecuteUbergraph_Player_Locomotion_Prototype_Template
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayer_Locomotion_Prototype_Template_C::ExecuteUbergraph_Player_Locomotion_Prototype_Template(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Player_Locomotion_Prototype_Template_C", "ExecuteUbergraph_Player_Locomotion_Prototype_Template");

	Params::UPlayer_Locomotion_Prototype_Template_C_ExecuteUbergraph_Player_Locomotion_Prototype_Template_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
