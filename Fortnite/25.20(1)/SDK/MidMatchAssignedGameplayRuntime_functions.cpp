#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function MidMatchAssignedGameplayRuntime.FortGameStateComponent_AssignedObjective.StartAssignedObjectives
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortGameStateComponent_AssignedObjective::StartAssignedObjectives()
{
	static auto Func = Class->GetFunction("FortGameStateComponent_AssignedObjective", "StartAssignedObjectives");

	Params::UFortGameStateComponent_AssignedObjective_StartAssignedObjectives_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MidMatchAssignedGameplayRuntime.FortGameStateComponent_AssignedObjective.OnAssignedObjectiveReady
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortAssignedObjectiveData  ObjectiveData                                                    (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortGameStateComponent_AssignedObjective::OnAssignedObjectiveReady(struct FFortAssignedObjectiveData& ObjectiveData)
{
	static auto Func = Class->GetFunction("FortGameStateComponent_AssignedObjective", "OnAssignedObjectiveReady");

	Params::UFortGameStateComponent_AssignedObjective_OnAssignedObjectiveReady_Params Parms;

	Parms.ObjectiveData = ObjectiveData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MidMatchAssignedGameplayRuntime.FortGameStateComponent_AssignedObjective.CalculateSquadAvgLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// uint8                              SquadId                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UFortGameStateComponent_AssignedObjective::CalculateSquadAvgLocation(uint8 SquadId, class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("FortGameStateComponent_AssignedObjective", "CalculateSquadAvgLocation");

	Params::UFortGameStateComponent_AssignedObjective_CalculateSquadAvgLocation_Params Parms;

	Parms.SquadId = SquadId;
	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
