#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MidMatchObjectivesGameplayRuntime.FortGameStateComponent_MidMatchObjectiveParent
// (None)

class UClass* UFortGameStateComponent_MidMatchObjectiveParent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameStateComponent_MidMatchObjectiveParent");

	return Clss;
}


// FortGameStateComponent_MidMatchObjectiveParent MidMatchObjectivesGameplayRuntime.Default__FortGameStateComponent_MidMatchObjectiveParent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameStateComponent_MidMatchObjectiveParent* UFortGameStateComponent_MidMatchObjectiveParent::GetDefaultObj()
{
	static class UFortGameStateComponent_MidMatchObjectiveParent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameStateComponent_MidMatchObjectiveParent*>(UFortGameStateComponent_MidMatchObjectiveParent::StaticClass()->DefaultObject);

	return Default;
}


// Function MidMatchObjectivesGameplayRuntime.FortGameStateComponent_MidMatchObjectiveParent.SetObjectiveCompletedStat
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// uint8                              SquadId                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameStateComponent_MidMatchObjectiveParent::SetObjectiveCompletedStat(uint8 SquadId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameStateComponent_MidMatchObjectiveParent", "SetObjectiveCompletedStat");

	Params::UFortGameStateComponent_MidMatchObjectiveParent_SetObjectiveCompletedStat_Params Parms{};

	Parms.SquadId = SquadId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


