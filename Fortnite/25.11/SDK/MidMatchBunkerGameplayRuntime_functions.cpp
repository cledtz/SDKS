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


// Function MidMatchBunkerGameplayRuntime.FortAthenaMutator_MidMatchBunkerGameplay.OnPlaylistDataReady
// (Final, Native, Private, HasOutParams)
// Parameters:
// class AFortGameStateAthena*        GameState                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlaylist*               Playlist                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortAthenaMutator_MidMatchBunkerGameplay::OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_MidMatchBunkerGameplay", "OnPlaylistDataReady");

	Params::AFortAthenaMutator_MidMatchBunkerGameplay_OnPlaylistDataReady_Params Parms;

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
