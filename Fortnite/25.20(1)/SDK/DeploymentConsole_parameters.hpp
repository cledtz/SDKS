#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// Function DeploymentConsole.DeploymentConsoleComponent.SpawnAircrafts
struct UDeploymentConsoleComponent_SpawnAircrafts_Params
{
public:
	bool                                         bSpawnAircraftForEachTeam;                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3856[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FDeploymentConsoleAircraftData> ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DeploymentConsole.DeploymentConsoleComponent.SpawnAircraft
struct UDeploymentConsoleComponent_SpawnAircraft_Params
{
public:
	int32                                        FlightIndex;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3857[0x4];                                     // Fixing Size After Last Property..
	class UFortAthenaAircraft*                   ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DeploymentConsole.DeploymentConsoleComponent.SetupTeamSpawnPoints
struct UDeploymentConsoleComponent_SetupTeamSpawnPoints_Params
{
public:
	bool                                         bGroupTeams;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DeploymentConsole.DeploymentConsoleComponent.SetPlayerIsWaiting
struct UDeploymentConsoleComponent_SetPlayerIsWaiting_Params
{
public:
	class UController*                           InController;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInPlayerIsWaiting;                                // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3858[0x7];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function DeploymentConsole.DeploymentConsoleComponent.SetAircraftLock
struct UDeploymentConsoleComponent_SetAircraftLock_Params
{
public:
	bool                                         bIsLocked;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function DeploymentConsole.DeploymentConsoleComponent.SetAircraftDropZone
struct UDeploymentConsoleComponent_SetAircraftDropZone_Params
{
public:
	struct FBox2D                                InDropZone;                                        // 0x0(0x28)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function DeploymentConsole.DeploymentConsoleComponent.RetrievePlayerSpawnLocation
struct UDeploymentConsoleComponent_RetrievePlayerSpawnLocation_Params
{
public:
	bool                                         bIsGameInProgress;                                 // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGroupTeams;                                       // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        InTeam;                                            // 0x2(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3859[0x5];                                     // Fixing Size After Last Property..
	struct FVector2D                             ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DeploymentConsole.DeploymentConsoleComponent.ResetSpawnPoints
struct UDeploymentConsoleComponent_ResetSpawnPoints_Params
{
public:
};

// 0x60 (0x60 - 0x0)
// Function DeploymentConsole.DeploymentConsoleComponent.MoveBoxTo
struct UDeploymentConsoleComponent_MoveBoxTo_Params
{
public:
	struct FBox2D                                InBox;                                             // 0x0(0x28)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             VectorToMoveTo;                                    // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox2D                                ReturnValue;                                       // 0x38(0x28)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function DeploymentConsole.DeploymentConsoleComponent.InitializeFlightPath
struct UDeploymentConsoleComponent_InitializeFlightPath_Params
{
public:
	class UFortGameStateAthena*                  GSA;                                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAircraftFlightConstructionInfo       FlightPathConstructionInfo;                        // 0x8(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DeploymentConsole.DeploymentConsoleComponent.GetTeamSpawnData
struct UDeploymentConsoleComponent_GetTeamSpawnData_Params
{
public:
	TArray<struct FDeploymentConsoleTeamData>    ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DeploymentConsole.DeploymentConsoleComponent.GetSpawnPoints
struct UDeploymentConsoleComponent_GetSpawnPoints_Params
{
public:
	TArray<struct FVector2D>                     ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function DeploymentConsole.DeploymentConsoleComponent.GetMinigameTeamsWithPlayers
struct UDeploymentConsoleComponent_GetMinigameTeamsWithPlayers_Params
{
public:
	class UFortMinigame*                         InMinigame;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DeploymentConsole.DeploymentConsoleComponent.GetMapInfo
struct UDeploymentConsoleComponent_GetMapInfo_Params
{
public:
	class UFortAthenaMapInfo*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function DeploymentConsole.DeploymentConsoleComponent.GetDefaultFlightPathConstructionInfo
struct UDeploymentConsoleComponent_GetDefaultFlightPathConstructionInfo_Params
{
public:
	class UFortGameStateAthena*                  GameStateAthena;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAirCraftBehavior                 AirCraftBehavior;                                  // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_385A[0x7];                                     // Fixing Size After Last Property..
	struct FAircraftFlightConstructionInfo       ReturnValue;                                       // 0x10(0x78)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function DeploymentConsole.DeploymentConsoleComponent.GetCachedAircraftSpawnZone
struct UDeploymentConsoleComponent_GetCachedAircraftSpawnZone_Params
{
public:
	struct FBox2D                                ReturnValue;                                       // 0x0(0x28)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DeploymentConsole.DeploymentConsoleComponent.ForcePlayerEnterAircraft
struct UDeploymentConsoleComponent_ForcePlayerEnterAircraft_Params
{
public:
	class UFortPlayerControllerAthena*           InController;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAthenaAircraft*                   InAircraft;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DeploymentConsole.DeploymentConsoleComponent.ConstructInventoryOnController
struct UDeploymentConsoleComponent_ConstructInventoryOnController_Params
{
public:
	class UFortPlayerControllerAthena*           InController;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DeploymentConsole.DeploymentConsoleComponent.ClearFlightInfos
struct UDeploymentConsoleComponent_ClearFlightInfos_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function DeploymentConsole.DeploymentConsoleComponent.CalculateSpawnRotationFromLocation
struct UDeploymentConsoleComponent_CalculateSpawnRotationFromLocation_Params
{
public:
	struct FVector                               InSpawnLocation;                                   // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function DeploymentConsole.DeploymentConsoleComponent.AdjustLocationToValidHeight
struct UDeploymentConsoleComponent_AdjustLocationToValidHeight_Params
{
public:
	struct FVector                               RespawnLocation;                                   // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
