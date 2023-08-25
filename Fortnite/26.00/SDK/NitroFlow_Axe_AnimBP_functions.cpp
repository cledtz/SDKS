#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass NitroFlow_Axe_AnimBP.NitroFlow_Axe_AnimBP_C
// (None)

class UClass* UNitroFlow_Axe_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NitroFlow_Axe_AnimBP_C");

	return Clss;
}


// NitroFlow_Axe_AnimBP_C NitroFlow_Axe_AnimBP.Default__NitroFlow_Axe_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNitroFlow_Axe_AnimBP_C* UNitroFlow_Axe_AnimBP_C::GetDefaultObj()
{
	static class UNitroFlow_Axe_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNitroFlow_Axe_AnimBP_C*>(UNitroFlow_Axe_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NitroFlow_Axe_AnimBP.NitroFlow_Axe_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UNitroFlow_Axe_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitroFlow_Axe_AnimBP_C", "AnimGraph");

	Params::UNitroFlow_Axe_AnimBP_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function NitroFlow_Axe_AnimBP.NitroFlow_Axe_AnimBP_C.ExecuteUbergraph_NitroFlow_Axe_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNitroFlow_Axe_AnimBP_C::ExecuteUbergraph_NitroFlow_Axe_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NitroFlow_Axe_AnimBP_C", "ExecuteUbergraph_NitroFlow_Axe_AnimBP");

	Params::UNitroFlow_Axe_AnimBP_C_ExecuteUbergraph_NitroFlow_Axe_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


