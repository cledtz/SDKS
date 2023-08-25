#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass LoudPhoenix_Axe_AnimBP.LoudPhoenix_Axe_AnimBP_C
// (None)

class UClass* ULoudPhoenix_Axe_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoudPhoenix_Axe_AnimBP_C");

	return Clss;
}


// LoudPhoenix_Axe_AnimBP_C LoudPhoenix_Axe_AnimBP.Default__LoudPhoenix_Axe_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoudPhoenix_Axe_AnimBP_C* ULoudPhoenix_Axe_AnimBP_C::GetDefaultObj()
{
	static class ULoudPhoenix_Axe_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoudPhoenix_Axe_AnimBP_C*>(ULoudPhoenix_Axe_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LoudPhoenix_Axe_AnimBP.LoudPhoenix_Axe_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void ULoudPhoenix_Axe_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoudPhoenix_Axe_AnimBP_C", "AnimGraph");

	Params::ULoudPhoenix_Axe_AnimBP_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function LoudPhoenix_Axe_AnimBP.LoudPhoenix_Axe_AnimBP_C.ExecuteUbergraph_LoudPhoenix_Axe_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoudPhoenix_Axe_AnimBP_C::ExecuteUbergraph_LoudPhoenix_Axe_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoudPhoenix_Axe_AnimBP_C", "ExecuteUbergraph_LoudPhoenix_Axe_AnimBP");

	Params::ULoudPhoenix_Axe_AnimBP_C_ExecuteUbergraph_LoudPhoenix_Axe_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


