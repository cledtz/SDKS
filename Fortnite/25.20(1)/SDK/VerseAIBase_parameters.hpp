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

// 0x8 (0x8 - 0x0)
// Function VerseAIBase.AIBehaviorScriptComponent.GetBehaviorScript
struct UAIBehaviorScriptComponent_GetBehaviorScript_Params
{
public:
	class UAIBehaviorScript*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VerseAIBase.FortAthenaAISpawnerDataComponent_Verse.AddUniqueEntityComponentInstance
struct UFortAthenaAISpawnerDataComponent_Verse_AddUniqueEntityComponentInstance_Params
{
public:
	class UEntityComponent*                      EntityComponent;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VerseAIBase.FortAthenaAISpawnerDataComponent_Verse.AddUniqueEntityComponent
struct UFortAthenaAISpawnerDataComponent_Verse_AddUniqueEntityComponent_Params
{
public:
	TSubclassOf<class UEntityComponent>          EntityComponent;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function VerseAIBase.VerseAISpawner.RequestSpawn
struct UVerseAISpawner_RequestSpawn_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function VerseAIBase.VerseAISpawner.OnSpawned
struct UVerseAISpawner_OnSpawned_Params
{
public:
	class UFortPawn*                             Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function VerseAIBase.VerseAISpawner.OnPropertiesLoaded
struct UVerseAISpawner_OnPropertiesLoaded_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function VerseAIBase.VerseAISpawner.OnPreSpawn
struct UVerseAISpawner_OnPreSpawn_Params
{
public:
	class UFortAthenaAISpawnerDataComponentList* ComponentList;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VerseAIBase.VerseAISpawner.OnEQSFinished
struct UVerseAISpawner_OnEQSFinished_Params
{
public:
	TArray<struct FVector>                       QueryResultLocations;                              // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VerseAIBase.VerseAISpawner.KillAllBots
struct UVerseAISpawner_KillAllBots_Params
{
public:
	bool                                         bForceDoNotDropLoot;                               // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VerseAIBase.VerseAISpawner.InternalOnSpawned
struct UVerseAISpawner_InternalOnSpawned_Params
{
public:
	class UPawn*                                 Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequestID;                                         // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36DC[0x4];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// Function VerseAIBase.VerseAISpawner.InternalOnAIDied
struct UVerseAISpawner_InternalOnAIDied_Params
{
public:
	class UController*                           KilledController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsABot;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36DD[0x7];                                     // Fixing Size After Last Property..
	class UFortPawn*                             KilledAIPawn;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPlayerPawn*                       KilledPlayerPawn;                                  // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UController*                           KillerController;                                  // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
