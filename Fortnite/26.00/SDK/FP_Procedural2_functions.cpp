#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass FP_Procedural2.FP_Procedural2_C
// (None)

class UClass* UFP_Procedural2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FP_Procedural2_C");

	return Clss;
}


// FP_Procedural2_C FP_Procedural2.Default__FP_Procedural2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFP_Procedural2_C* UFP_Procedural2_C::GetDefaultObj()
{
	static class UFP_Procedural2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFP_Procedural2_C*>(UFP_Procedural2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FP_Procedural2.FP_Procedural2_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UFP_Procedural2_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FP_Procedural2_C", "AnimGraph");

	Params::UFP_Procedural2_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function FP_Procedural2.FP_Procedural2_C.ExecuteUbergraph_FP_Procedural2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFP_Procedural2_C::ExecuteUbergraph_FP_Procedural2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FP_Procedural2_C", "ExecuteUbergraph_FP_Procedural2");

	Params::UFP_Procedural2_C_ExecuteUbergraph_FP_Procedural2_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


