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


// Function MANG_PatrolLayerAnimBP.MANG_PatrolLayerAnimBP_C.CharacterSkeletalControlPostLegIK
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPosePostLegIK                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   CharacterSkeletalControlPostLegIK                                (Parm, OutParm, NoDestructor)

void UMANG_PatrolLayerAnimBP_C::CharacterSkeletalControlPostLegIK(const struct FPoseLink& InPosePostLegIK, struct FPoseLink* CharacterSkeletalControlPostLegIK)
{
	static auto Func = Class->GetFunction("MANG_PatrolLayerAnimBP_C", "CharacterSkeletalControlPostLegIK");

	Params::UMANG_PatrolLayerAnimBP_C_CharacterSkeletalControlPostLegIK_Params Parms;

	Parms.InPosePostLegIK = InPosePostLegIK;

	UObject::ProcessEvent(Func, &Parms);

	if (CharacterSkeletalControlPostLegIK != nullptr)
		*CharacterSkeletalControlPostLegIK = Parms.CharacterSkeletalControlPostLegIK;

}


// Function MANG_PatrolLayerAnimBP.MANG_PatrolLayerAnimBP_C.FullBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   PassThroughFullBodyPose                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   FullBodyOverride                                                 (Parm, OutParm, NoDestructor)

void UMANG_PatrolLayerAnimBP_C::FullBodyOverride(const struct FPoseLink& PassThroughFullBodyPose, struct FPoseLink* FullBodyOverride)
{
	static auto Func = Class->GetFunction("MANG_PatrolLayerAnimBP_C", "FullBodyOverride");

	Params::UMANG_PatrolLayerAnimBP_C_FullBodyOverride_Params Parms;

	Parms.PassThroughFullBodyPose = PassThroughFullBodyPose;

	UObject::ProcessEvent(Func, &Parms);

	if (FullBodyOverride != nullptr)
		*FullBodyOverride = Parms.FullBodyOverride;

}


// Function MANG_PatrolLayerAnimBP.MANG_PatrolLayerAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UMANG_PatrolLayerAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("MANG_PatrolLayerAnimBP_C", "AnimGraph");

	Params::UMANG_PatrolLayerAnimBP_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function MANG_PatrolLayerAnimBP.MANG_PatrolLayerAnimBP_C.ExecuteUbergraph_MANG_PatrolLayerAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMANG_PatrolLayerAnimBP_C::ExecuteUbergraph_MANG_PatrolLayerAnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("MANG_PatrolLayerAnimBP_C", "ExecuteUbergraph_MANG_PatrolLayerAnimBP");

	Params::UMANG_PatrolLayerAnimBP_C_ExecuteUbergraph_MANG_PatrolLayerAnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
