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


// Function Player_TacticalState_AnimBP.Player_TacticalState_AnimBP_C.WeaponBoneFixLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   WeaponBoneFixLayer                                               (Parm, OutParm, NoDestructor)

void UPlayer_TacticalState_AnimBP_C::WeaponBoneFixLayer(const struct FPoseLink& InPose, struct FPoseLink* WeaponBoneFixLayer)
{
	static auto Func = Class->GetFunction("Player_TacticalState_AnimBP_C", "WeaponBoneFixLayer");

	Params::UPlayer_TacticalState_AnimBP_C_WeaponBoneFixLayer_Params Parms;

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (WeaponBoneFixLayer != nullptr)
		*WeaponBoneFixLayer = Parms.WeaponBoneFixLayer;

}


// Function Player_TacticalState_AnimBP.Player_TacticalState_AnimBP_C.TacticalSprintLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   TacticalSprintLayer                                              (Parm, OutParm, NoDestructor)

void UPlayer_TacticalState_AnimBP_C::TacticalSprintLayer(struct FPoseLink* TacticalSprintLayer)
{
	static auto Func = Class->GetFunction("Player_TacticalState_AnimBP_C", "TacticalSprintLayer");

	Params::UPlayer_TacticalState_AnimBP_C_TacticalSprintLayer_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (TacticalSprintLayer != nullptr)
		*TacticalSprintLayer = Parms.TacticalSprintLayer;

}


// Function Player_TacticalState_AnimBP.Player_TacticalState_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UPlayer_TacticalState_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("Player_TacticalState_AnimBP_C", "AnimGraph");

	Params::UPlayer_TacticalState_AnimBP_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function Player_TacticalState_AnimBP.Player_TacticalState_AnimBP_C.ExecuteUbergraph_Player_TacticalState_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayer_TacticalState_AnimBP_C::ExecuteUbergraph_Player_TacticalState_AnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Player_TacticalState_AnimBP_C", "ExecuteUbergraph_Player_TacticalState_AnimBP");

	Params::UPlayer_TacticalState_AnimBP_C_ExecuteUbergraph_Player_TacticalState_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
