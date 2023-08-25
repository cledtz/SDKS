#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Player_SkyDiveAndGlide_AnimBP.Player_SkyDiveAndGlide_AnimBP_C
// (None)

class UClass* UPlayer_SkyDiveAndGlide_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Player_SkyDiveAndGlide_AnimBP_C");

	return Clss;
}


// Player_SkyDiveAndGlide_AnimBP_C Player_SkyDiveAndGlide_AnimBP.Default__Player_SkyDiveAndGlide_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayer_SkyDiveAndGlide_AnimBP_C* UPlayer_SkyDiveAndGlide_AnimBP_C::GetDefaultObj()
{
	static class UPlayer_SkyDiveAndGlide_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayer_SkyDiveAndGlide_AnimBP_C*>(UPlayer_SkyDiveAndGlide_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Player_SkyDiveAndGlide_AnimBP.Player_SkyDiveAndGlide_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UPlayer_SkyDiveAndGlide_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_SkyDiveAndGlide_AnimBP_C", "AnimGraph");

	Params::UPlayer_SkyDiveAndGlide_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function Player_SkyDiveAndGlide_AnimBP.Player_SkyDiveAndGlide_AnimBP_C.ExecuteUbergraph_Player_SkyDiveAndGlide_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayer_SkyDiveAndGlide_AnimBP_C::ExecuteUbergraph_Player_SkyDiveAndGlide_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_SkyDiveAndGlide_AnimBP_C", "ExecuteUbergraph_Player_SkyDiveAndGlide_AnimBP");

	Params::UPlayer_SkyDiveAndGlide_AnimBP_C_ExecuteUbergraph_Player_SkyDiveAndGlide_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


