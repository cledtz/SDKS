#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass MetalScout_Axe_AnimBP.MetalScout_Axe_AnimBP_C
// (None)

class UClass* UMetalScout_Axe_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetalScout_Axe_AnimBP_C");

	return Clss;
}


// MetalScout_Axe_AnimBP_C MetalScout_Axe_AnimBP.Default__MetalScout_Axe_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMetalScout_Axe_AnimBP_C* UMetalScout_Axe_AnimBP_C::GetDefaultObj()
{
	static class UMetalScout_Axe_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMetalScout_Axe_AnimBP_C*>(UMetalScout_Axe_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MetalScout_Axe_AnimBP.MetalScout_Axe_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UMetalScout_Axe_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetalScout_Axe_AnimBP_C", "AnimGraph");

	Params::UMetalScout_Axe_AnimBP_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function MetalScout_Axe_AnimBP.MetalScout_Axe_AnimBP_C.ExecuteUbergraph_MetalScout_Axe_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMetalScout_Axe_AnimBP_C::ExecuteUbergraph_MetalScout_Axe_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetalScout_Axe_AnimBP_C", "ExecuteUbergraph_MetalScout_Axe_AnimBP");

	Params::UMetalScout_Axe_AnimBP_C_ExecuteUbergraph_MetalScout_Axe_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


