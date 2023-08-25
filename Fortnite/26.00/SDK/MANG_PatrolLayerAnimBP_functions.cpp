#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass MANG_PatrolLayerAnimBP.MANG_PatrolLayerAnimBP_C
// (None)

class UClass* UMANG_PatrolLayerAnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MANG_PatrolLayerAnimBP_C");

	return Clss;
}


// MANG_PatrolLayerAnimBP_C MANG_PatrolLayerAnimBP.Default__MANG_PatrolLayerAnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMANG_PatrolLayerAnimBP_C* UMANG_PatrolLayerAnimBP_C::GetDefaultObj()
{
	static class UMANG_PatrolLayerAnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMANG_PatrolLayerAnimBP_C*>(UMANG_PatrolLayerAnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MANG_PatrolLayerAnimBP.MANG_PatrolLayerAnimBP_C.CharacterSkeletalControlPostLegIK
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPosePostLegIK                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   CharacterSkeletalControlPostLegIK                                (Parm, OutParm, NoDestructor)

void UMANG_PatrolLayerAnimBP_C::CharacterSkeletalControlPostLegIK(const struct FPoseLink& InPosePostLegIK, struct FPoseLink* CharacterSkeletalControlPostLegIK)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MANG_PatrolLayerAnimBP_C", "CharacterSkeletalControlPostLegIK");

	Params::UMANG_PatrolLayerAnimBP_C_CharacterSkeletalControlPostLegIK_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MANG_PatrolLayerAnimBP_C", "FullBodyOverride");

	Params::UMANG_PatrolLayerAnimBP_C_FullBodyOverride_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MANG_PatrolLayerAnimBP_C", "AnimGraph");

	Params::UMANG_PatrolLayerAnimBP_C_AnimGraph_Params Parms{};


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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MANG_PatrolLayerAnimBP_C", "ExecuteUbergraph_MANG_PatrolLayerAnimBP");

	Params::UMANG_PatrolLayerAnimBP_C_ExecuteUbergraph_MANG_PatrolLayerAnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


