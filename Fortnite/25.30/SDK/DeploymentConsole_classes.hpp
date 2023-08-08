#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x198 (0x238 - 0xA0)
// Class DeploymentConsole.DeploymentConsoleComponent
class UDeploymentConsoleComponent : public UActorComponent
{
public:
	uint8                                        Pad_4424[0x28];                                    // Fixing Size After Last Property
	TArray<struct FDeploymentConsoleAircraftData> Aircrafts;                                         // 0xC8(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        RadiusPercentForRespawnMin;                        // 0xD8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        RadiusPercentForRespawnMax;                        // 0x100(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxRespawnRadius;                                  // 0x128(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TeamMemberSpread;                                  // 0x150(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TraceForGroundStart;                               // 0x178(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TraceForGroundEnd;                                 // 0x1A0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinHeightFromGround;                               // 0x1C8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinHeightFromZero;                                 // 0x1F0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FVector2D>                     SpawnPoints;                                       // 0x218(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FDeploymentConsoleTeamData>    TeamSpawnData;                                     // 0x228(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DeploymentConsoleComponent");
		return Clss;
	}

	TArray<struct FDeploymentConsoleAircraftData> SpawnAircrafts(bool bSpawnAircraftForEachTeam);
	class UFortAthenaAircraft* SpawnAircraft(int32 FlightIndex);
	void SetupTeamSpawnPoints(bool bGroupTeams);
	void SetPlayerIsWaiting(class UController* InController, bool bInPlayerIsWaiting);
	void SetAircraftLock(bool bIsLocked);
	void SetAircraftDropZone(struct FBox2D& InDropZone);
	struct FVector2D RetrievePlayerSpawnLocation(bool bIsGameInProgress, bool bGroupTeams, uint8 InTeam);
	void ResetSpawnPoints();
	struct FBox2D MoveBoxTo(struct FBox2D& InBox, struct FVector2D& VectorToMoveTo);
	void InitializeFlightPath(class UFortGameStateAthena* GSA, struct FAircraftFlightConstructionInfo& FlightPathConstructionInfo);
	TArray<struct FDeploymentConsoleTeamData> GetTeamSpawnData();
	TArray<struct FVector2D> GetSpawnPoints();
	TArray<uint8> GetMinigameTeamsWithPlayers(class UFortMinigame* InMinigame);
	class UFortAthenaMapInfo* GetMapInfo();
	struct FAircraftFlightConstructionInfo GetDefaultFlightPathConstructionInfo(class UFortGameStateAthena* GameStateAthena, enum class EAirCraftBehavior AirCraftBehavior);
	struct FBox2D GetCachedAircraftSpawnZone();
	void ForcePlayerEnterAircraft(class UFortPlayerControllerAthena* InController, class UFortAthenaAircraft* InAircraft);
	void ConstructInventoryOnController(class UFortPlayerControllerAthena* InController);
	void ClearFlightInfos();
	struct FRotator CalculateSpawnRotationFromLocation(struct FVector& InSpawnLocation);
	struct FVector AdjustLocationToValidHeight(struct FVector& RespawnLocation);
};

// 0x0 (0x338 - 0x338)
// Class DeploymentConsole.FortAthenaMutator_CR_Respawn
class UFortAthenaMutator_CR_Respawn : public UFortAthenaMutator
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaMutator_CR_Respawn");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
