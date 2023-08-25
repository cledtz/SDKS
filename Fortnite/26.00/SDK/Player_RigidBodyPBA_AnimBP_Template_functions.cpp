#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Player_RigidBodyPBA_AnimBP_Template.Player_RigidBodyPBA_AnimBP_Template_C
// (None)

class UClass* UPlayer_RigidBodyPBA_AnimBP_Template_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Player_RigidBodyPBA_AnimBP_Template_C");

	return Clss;
}


// Player_RigidBodyPBA_AnimBP_Template_C Player_RigidBodyPBA_AnimBP_Template.Default__Player_RigidBodyPBA_AnimBP_Template_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayer_RigidBodyPBA_AnimBP_Template_C* UPlayer_RigidBodyPBA_AnimBP_Template_C::GetDefaultObj()
{
	static class UPlayer_RigidBodyPBA_AnimBP_Template_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayer_RigidBodyPBA_AnimBP_Template_C*>(UPlayer_RigidBodyPBA_AnimBP_Template_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Player_RigidBodyPBA_AnimBP_Template.Player_RigidBodyPBA_AnimBP_Template_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UPlayer_RigidBodyPBA_AnimBP_Template_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_RigidBodyPBA_AnimBP_Template_C", "AnimGraph");

	Params::UPlayer_RigidBodyPBA_AnimBP_Template_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function Player_RigidBodyPBA_AnimBP_Template.Player_RigidBodyPBA_AnimBP_Template_C.ExecuteUbergraph_Player_RigidBodyPBA_AnimBP_Template
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayer_RigidBodyPBA_AnimBP_Template_C::ExecuteUbergraph_Player_RigidBodyPBA_AnimBP_Template(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_RigidBodyPBA_AnimBP_Template_C", "ExecuteUbergraph_Player_RigidBodyPBA_AnimBP_Template");

	Params::UPlayer_RigidBodyPBA_AnimBP_Template_C_ExecuteUbergraph_Player_RigidBodyPBA_AnimBP_Template_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


