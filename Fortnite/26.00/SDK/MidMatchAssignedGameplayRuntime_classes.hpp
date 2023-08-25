#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0x1D0 - 0xA8)
// Class MidMatchAssignedGameplayRuntime.FortGameStateComponent_AssignedObjective
class UFortGameStateComponent_AssignedObjective : public UFortGameStateComponent_MidMatchObjectiveParent
{
public:
	struct FScalableFloat                        IdealNumSquadsPerObjective;                        // 0xA8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        bAllowUnopposedSquads;                             // 0xD0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MinPairedSquadDistForUnopposed;                    // 0xF8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        UnopposedSquad_FakeSquadMaxSafeZonePct;            // 0x120(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        UnopposedSquad_FakeSquadMinDistToSquad;            // 0x148(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        SpawnObjectivesInsideSafeZonePct;                  // 0x170(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UEnvQuery>              AssignedObjectiveLocationEnvQuery;                 // 0x198(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FFortAssignedObjectiveData>    AssignedObjectives;                                // 0x1B8(0x10)(BlueprintVisible, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_4515[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortGameStateComponent_AssignedObjective* GetDefaultObj();

	void StartAssignedObjectives();
	void OnAssignedObjectiveReady(struct FFortAssignedObjectiveData& ObjectiveData);
	struct FVector CalculateSquadAvgLocation(uint8 SquadId, class UObject* WorldContextObject);
};

// 0x0 (0x28 - 0x28)
// Class MidMatchAssignedGameplayRuntime.FortQueryContext_SpawnedObjectiveLocations
class UFortQueryContext_SpawnedObjectiveLocations : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UFortQueryContext_SpawnedObjectiveLocations* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MidMatchAssignedGameplayRuntime.FortQueryContext_SquadAvgLocationsForObjective
class UFortQueryContext_SquadAvgLocationsForObjective : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UFortQueryContext_SquadAvgLocationsForObjective* GetDefaultObj();

};

// 0x8 (0x200 - 0x1F8)
// Class MidMatchAssignedGameplayRuntime.FortQueryTest_ClosestPlayersToObjectiveDeltaDistance
class UFortQueryTest_ClosestPlayersToObjectiveDeltaDistance : public UEnvQueryTest
{
public:
	bool                                         bUseDistance2D;                                    // 0x1F8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_451A[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortQueryTest_ClosestPlayersToObjectiveDeltaDistance* GetDefaultObj();

};

}


