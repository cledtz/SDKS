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

// 0x0 (0x0 - 0x0)
// Function VerseFortnite.VerseFortniteBRTeamCollection.OnActiveTeamArrayBuilt
struct UVerseFortniteBRTeamCollection_OnActiveTeamArrayBuilt_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function VerseFortnite.VerseFortniteMinigameTeamCollection.OnMinigameSetUp
struct UVerseFortniteMinigameTeamCollection_OnMinigameSetUp_Params
{
public:
	class AFortMinigame*                         InMinigame;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VerseFortnite.VerseFortniteMinigameTeamCollection.OnMinigameDestroyed
struct UVerseFortniteMinigameTeamCollection_OnMinigameDestroyed_Params
{
public:
	class AActor*                                DestroyedMinigame;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VerseFortnite.VerseFortniteActorWrapper.OnActorDestroyed
struct UVerseFortniteActorWrapper_OnActorDestroyed_Params
{
public:
	class AActor*                                DestroyedActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortnite.VerseFortniteCharacter.HandlePossessedPawnChanged
struct UVerseFortniteCharacter_HandlePossessedPawnChanged_Params
{
public:
	class APawn*                                 OldPawn;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                 NewPawn;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VerseFortnite.VerseFortniteCharacter.HandlePawnEliminated
struct UVerseFortniteCharacter_HandlePawnEliminated_Params
{
public:
	class AFortPlayerPawnAthena*                 EliminatedPawn;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VerseFortnite.VerseFortnitePlayspace.OnMinigameSetUp
struct UVerseFortnitePlayspace_OnMinigameSetUp_Params
{
public:
	class AFortMinigame*                         Minigame;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function VerseFortnite.VerseFortnitePlayspace.OnMinigamePlayerAdded
struct UVerseFortnitePlayspace_OnMinigamePlayerAdded_Params
{
public:
	struct FUniqueNetIdRepl                      UniqueNetId;                                       // 0x0(0x30)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLocalPlayer;                                    // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_79D9[0x7];                                     // Fixing Size Of Struct..
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
