#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MidMatchAssignedGameplayRuntime.FortGameStateComponent_AssignedObjective
// (None)

class UClass* UFortGameStateComponent_AssignedObjective::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameStateComponent_AssignedObjective");

	return Clss;
}


// FortGameStateComponent_AssignedObjective MidMatchAssignedGameplayRuntime.Default__FortGameStateComponent_AssignedObjective
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameStateComponent_AssignedObjective* UFortGameStateComponent_AssignedObjective::GetDefaultObj()
{
	static class UFortGameStateComponent_AssignedObjective* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameStateComponent_AssignedObjective*>(UFortGameStateComponent_AssignedObjective::StaticClass()->DefaultObject);

	return Default;
}


// Function MidMatchAssignedGameplayRuntime.FortGameStateComponent_AssignedObjective.StartAssignedObjectives
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortGameStateComponent_AssignedObjective::StartAssignedObjectives()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameStateComponent_AssignedObjective", "StartAssignedObjectives");

	Params::UFortGameStateComponent_AssignedObjective_StartAssignedObjectives_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MidMatchAssignedGameplayRuntime.FortGameStateComponent_AssignedObjective.OnAssignedObjectiveReady
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortAssignedObjectiveData  ObjectiveData                                                    (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortGameStateComponent_AssignedObjective::OnAssignedObjectiveReady(struct FFortAssignedObjectiveData& ObjectiveData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameStateComponent_AssignedObjective", "OnAssignedObjectiveReady");

	Params::UFortGameStateComponent_AssignedObjective_OnAssignedObjectiveReady_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameStateComponent_AssignedObjective", "CalculateSquadAvgLocation");

	Params::UFortGameStateComponent_AssignedObjective_CalculateSquadAvgLocation_Params Parms{};

	Parms.SquadId = SquadId;
	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MidMatchAssignedGameplayRuntime.FortQueryContext_SpawnedObjectiveLocations
// (None)

class UClass* UFortQueryContext_SpawnedObjectiveLocations::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_SpawnedObjectiveLocations");

	return Clss;
}


// FortQueryContext_SpawnedObjectiveLocations MidMatchAssignedGameplayRuntime.Default__FortQueryContext_SpawnedObjectiveLocations
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_SpawnedObjectiveLocations* UFortQueryContext_SpawnedObjectiveLocations::GetDefaultObj()
{
	static class UFortQueryContext_SpawnedObjectiveLocations* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_SpawnedObjectiveLocations*>(UFortQueryContext_SpawnedObjectiveLocations::StaticClass()->DefaultObject);

	return Default;
}


// Class MidMatchAssignedGameplayRuntime.FortQueryContext_SquadAvgLocationsForObjective
// (None)

class UClass* UFortQueryContext_SquadAvgLocationsForObjective::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_SquadAvgLocationsForObjective");

	return Clss;
}


// FortQueryContext_SquadAvgLocationsForObjective MidMatchAssignedGameplayRuntime.Default__FortQueryContext_SquadAvgLocationsForObjective
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_SquadAvgLocationsForObjective* UFortQueryContext_SquadAvgLocationsForObjective::GetDefaultObj()
{
	static class UFortQueryContext_SquadAvgLocationsForObjective* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_SquadAvgLocationsForObjective*>(UFortQueryContext_SquadAvgLocationsForObjective::StaticClass()->DefaultObject);

	return Default;
}


// Class MidMatchAssignedGameplayRuntime.FortQueryTest_ClosestPlayersToObjectiveDeltaDistance
// (None)

class UClass* UFortQueryTest_ClosestPlayersToObjectiveDeltaDistance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_ClosestPlayersToObjectiveDeltaDistance");

	return Clss;
}


// FortQueryTest_ClosestPlayersToObjectiveDeltaDistance MidMatchAssignedGameplayRuntime.Default__FortQueryTest_ClosestPlayersToObjectiveDeltaDistance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_ClosestPlayersToObjectiveDeltaDistance* UFortQueryTest_ClosestPlayersToObjectiveDeltaDistance::GetDefaultObj()
{
	static class UFortQueryTest_ClosestPlayersToObjectiveDeltaDistance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_ClosestPlayersToObjectiveDeltaDistance*>(UFortQueryTest_ClosestPlayersToObjectiveDeltaDistance::StaticClass()->DefaultObject);

	return Default;
}

}


