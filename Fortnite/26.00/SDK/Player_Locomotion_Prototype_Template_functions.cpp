#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Player_Locomotion_Prototype_Template.Player_Locomotion_Prototype_Template_C
// (None)

class UClass* UPlayer_Locomotion_Prototype_Template_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Player_Locomotion_Prototype_Template_C");

	return Clss;
}


// Player_Locomotion_Prototype_Template_C Player_Locomotion_Prototype_Template.Default__Player_Locomotion_Prototype_Template_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayer_Locomotion_Prototype_Template_C* UPlayer_Locomotion_Prototype_Template_C::GetDefaultObj()
{
	static class UPlayer_Locomotion_Prototype_Template_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayer_Locomotion_Prototype_Template_C*>(UPlayer_Locomotion_Prototype_Template_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Player_Locomotion_Prototype_Template.Player_Locomotion_Prototype_Template_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InSourcePose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UPlayer_Locomotion_Prototype_Template_C::AnimGraph(const struct FPoseLink& InSourcePose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_Locomotion_Prototype_Template_C", "AnimGraph");

	Params::UPlayer_Locomotion_Prototype_Template_C_AnimGraph_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_Locomotion_Prototype_Template_C", "ExecuteUbergraph_Player_Locomotion_Prototype_Template");

	Params::UPlayer_Locomotion_Prototype_Template_C_ExecuteUbergraph_Player_Locomotion_Prototype_Template_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


