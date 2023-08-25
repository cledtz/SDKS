#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C
// (None)

class UClass* UGameplay_FaceSystem_StateMachine_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Gameplay_FaceSystem_StateMachine_AnimBP_C");

	return Clss;
}


// Gameplay_FaceSystem_StateMachine_AnimBP_C Gameplay_FaceSystem_StateMachine_AnimBP.Default__Gameplay_FaceSystem_StateMachine_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGameplay_FaceSystem_StateMachine_AnimBP_C* UGameplay_FaceSystem_StateMachine_AnimBP_C::GetDefaultObj()
{
	static class UGameplay_FaceSystem_StateMachine_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplay_FaceSystem_StateMachine_AnimBP_C*>(UGameplay_FaceSystem_StateMachine_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UGameplay_FaceSystem_StateMachine_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Gameplay_FaceSystem_StateMachine_AnimBP_C", "AnimGraph");

	Params::UGameplay_FaceSystem_StateMachine_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C.ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameplay_FaceSystem_StateMachine_AnimBP_C::ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Gameplay_FaceSystem_StateMachine_AnimBP_C", "ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP");

	Params::UGameplay_FaceSystem_StateMachine_AnimBP_C_ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


