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
struct AVerseAISpawner_RequestSpawn_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function VerseAIBase.VerseAISpawner.OnSpawned
struct AVerseAISpawner_OnSpawned_Params
{
public:
	class AFortPawn*                             Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function VerseAIBase.VerseAISpawner.OnPropertiesLoaded
struct AVerseAISpawner_OnPropertiesLoaded_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function VerseAIBase.VerseAISpawner.OnPreSpawn
struct AVerseAISpawner_OnPreSpawn_Params
{
public:
	class UFortAthenaAISpawnerDataComponentList* ComponentList;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VerseAIBase.VerseAISpawner.OnEQSFinished
struct AVerseAISpawner_OnEQSFinished_Params
{
public:
	TArray<struct FVector>                       QueryResultLocations;                              // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VerseAIBase.VerseAISpawner.KillAllBots
struct AVerseAISpawner_KillAllBots_Params
{
public:
	bool                                         bForceDoNotDropLoot;                               // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VerseAIBase.VerseAISpawner.InternalOnSpawned
struct AVerseAISpawner_InternalOnSpawned_Params
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequestID;                                         // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DD2[0x4];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// Function VerseAIBase.VerseAISpawner.InternalOnAIDied
struct AVerseAISpawner_InternalOnAIDied_Params
{
public:
	class AController*                           KilledController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsABot;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DD3[0x7];                                     // Fixing Size After Last Property..
	class AFortPawn*                             KilledAIPawn;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerPawn*                       KilledPlayerPawn;                                  // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                           KillerController;                                  // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
