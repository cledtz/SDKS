#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function MidMatchObjectivesGameplayRuntime.FortGameStateComponent_MidMatchObjectiveParent.SetObjectiveCompletedStat
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// uint8                              SquadId                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameStateComponent_MidMatchObjectiveParent::SetObjectiveCompletedStat(uint8 SquadId)
{
	static auto Func = Class->GetFunction("FortGameStateComponent_MidMatchObjectiveParent", "SetObjectiveCompletedStat");

	Params::UFortGameStateComponent_MidMatchObjectiveParent_SetObjectiveCompletedStat_Params Parms;

	Parms.SquadId = SquadId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
