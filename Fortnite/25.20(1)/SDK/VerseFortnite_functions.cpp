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


// Function VerseFortnite.VerseFortniteBRTeamCollection.OnActiveTeamArrayBuilt
// (Final, Native, Private)
// Parameters:

void UVerseFortniteBRTeamCollection::OnActiveTeamArrayBuilt()
{
	static auto Func = Class->GetFunction("VerseFortniteBRTeamCollection", "OnActiveTeamArrayBuilt");

	Params::UVerseFortniteBRTeamCollection_OnActiveTeamArrayBuilt_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseFortnite.VerseFortniteMinigameTeamCollection.OnMinigameSetUp
// (Final, Native, Private)
// Parameters:
// class UFortMinigame*               InMinigame                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteMinigameTeamCollection::OnMinigameSetUp(class UFortMinigame* InMinigame)
{
	static auto Func = Class->GetFunction("VerseFortniteMinigameTeamCollection", "OnMinigameSetUp");

	Params::UVerseFortniteMinigameTeamCollection_OnMinigameSetUp_Params Parms;

	Parms.InMinigame = InMinigame;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseFortnite.VerseFortniteMinigameTeamCollection.OnMinigameDestroyed
// (Final, Native, Private)
// Parameters:
// class UActor*                      DestroyedMinigame                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteMinigameTeamCollection::OnMinigameDestroyed(class UActor* DestroyedMinigame)
{
	static auto Func = Class->GetFunction("VerseFortniteMinigameTeamCollection", "OnMinigameDestroyed");

	Params::UVerseFortniteMinigameTeamCollection_OnMinigameDestroyed_Params Parms;

	Parms.DestroyedMinigame = DestroyedMinigame;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseFortnite.VerseFortniteActorWrapper.OnActorDestroyed
// (Final, Native, Private)
// Parameters:
// class UActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteActorWrapper::OnActorDestroyed(class UActor* DestroyedActor)
{
	static auto Func = Class->GetFunction("VerseFortniteActorWrapper", "OnActorDestroyed");

	Params::UVerseFortniteActorWrapper_OnActorDestroyed_Params Parms;

	Parms.DestroyedActor = DestroyedActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseFortnite.VerseFortniteCharacter.HandlePossessedPawnChanged
// (Final, Native, Private)
// Parameters:
// class UPawn*                       OldPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       NewPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteCharacter::HandlePossessedPawnChanged(class UPawn* OldPawn, class UPawn* NewPawn)
{
	static auto Func = Class->GetFunction("VerseFortniteCharacter", "HandlePossessedPawnChanged");

	Params::UVerseFortniteCharacter_HandlePossessedPawnChanged_Params Parms;

	Parms.OldPawn = OldPawn;
	Parms.NewPawn = NewPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseFortnite.VerseFortniteCharacter.HandlePawnEliminated
// (Native, Protected)
// Parameters:
// class UFortPlayerPawnAthena*       EliminatedPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteCharacter::HandlePawnEliminated(class UFortPlayerPawnAthena* EliminatedPawn)
{
	static auto Func = Class->GetFunction("VerseFortniteCharacter", "HandlePawnEliminated");

	Params::UVerseFortniteCharacter_HandlePawnEliminated_Params Parms;

	Parms.EliminatedPawn = EliminatedPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseFortnite.VerseFortnitePlayspace.OnMinigameSetUp
// (Final, Native, Private)
// Parameters:
// class UFortMinigame*               Minigame                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortnitePlayspace::OnMinigameSetUp(class UFortMinigame* Minigame)
{
	static auto Func = Class->GetFunction("VerseFortnitePlayspace", "OnMinigameSetUp");

	Params::UVerseFortnitePlayspace_OnMinigameSetUp_Params Parms;

	Parms.Minigame = Minigame;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseFortnite.VerseFortnitePlayspace.OnMinigamePlayerAdded
// (Final, Native, Private)
// Parameters:
// struct FUniqueNetIdRepl            UniqueNetId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsLocalPlayer                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortnitePlayspace::OnMinigamePlayerAdded(const struct FUniqueNetIdRepl& UniqueNetId, bool bIsLocalPlayer)
{
	static auto Func = Class->GetFunction("VerseFortnitePlayspace", "OnMinigamePlayerAdded");

	Params::UVerseFortnitePlayspace_OnMinigamePlayerAdded_Params Parms;

	Parms.UniqueNetId = UniqueNetId;
	Parms.bIsLocalPlayer = bIsLocalPlayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
