#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass GoldenGuard_Axe_AnimBP.GoldenGuard_Axe_AnimBP_C
// (None)

class UClass* UGoldenGuard_Axe_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GoldenGuard_Axe_AnimBP_C");

	return Clss;
}


// GoldenGuard_Axe_AnimBP_C GoldenGuard_Axe_AnimBP.Default__GoldenGuard_Axe_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGoldenGuard_Axe_AnimBP_C* UGoldenGuard_Axe_AnimBP_C::GetDefaultObj()
{
	static class UGoldenGuard_Axe_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGoldenGuard_Axe_AnimBP_C*>(UGoldenGuard_Axe_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GoldenGuard_Axe_AnimBP.GoldenGuard_Axe_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UGoldenGuard_Axe_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoldenGuard_Axe_AnimBP_C", "AnimGraph");

	Params::UGoldenGuard_Axe_AnimBP_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function GoldenGuard_Axe_AnimBP.GoldenGuard_Axe_AnimBP_C.ExecuteUbergraph_GoldenGuard_Axe_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGoldenGuard_Axe_AnimBP_C::ExecuteUbergraph_GoldenGuard_Axe_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoldenGuard_Axe_AnimBP_C", "ExecuteUbergraph_GoldenGuard_Axe_AnimBP");

	Params::UGoldenGuard_Axe_AnimBP_C_ExecuteUbergraph_GoldenGuard_Axe_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


