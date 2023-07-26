#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct DeploymentConsole.DeploymentConsoleAircraftData
struct FDeploymentConsoleAircraftData
{
public:
	uint8                                        Team;                                              // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38BC[0x7];                                     // Fixing Size After Last Property..
	class AFortAthenaAircraft*                   Aircraft;                                          // 0x8(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct DeploymentConsole.DeploymentConsoleTeamData
struct FDeploymentConsoleTeamData
{
public:
	uint8                                        Team;                                              // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38BD[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FVector2D>                     SpawnLocations;                                    // 0x8(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
