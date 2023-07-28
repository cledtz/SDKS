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


// Function DynamicRollTablesRuntime.FortControllerComponent_DynamicRollPlayerComponent.AuthorityRollChoices
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              NumChoices                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UFortItemDefinition*> IgnoreItems                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FFortDynamicRollResult>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FFortDynamicRollResult> UFortControllerComponent_DynamicRollPlayerComponent::AuthorityRollChoices(int32 NumChoices, TArray<class UFortItemDefinition*>& IgnoreItems)
{
	static auto Func = Class->GetFunction("FortControllerComponent_DynamicRollPlayerComponent", "AuthorityRollChoices");

	Params::UFortControllerComponent_DynamicRollPlayerComponent_AuthorityRollChoices_Params Parms;

	Parms.NumChoices = NumChoices;
	Parms.IgnoreItems = IgnoreItems;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DynamicRollTablesRuntime.FortGamestateComponent_DynamicRollTableManager.HandlePlaylistDataReady
// (Final, Native, Private, HasOutParams)
// Parameters:
// class UFortGameStateAthena*        GameState                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlaylist*               Playlist                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortGamestateComponent_DynamicRollTableManager::HandlePlaylistDataReady(class UFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)
{
	static auto Func = Class->GetFunction("FortGamestateComponent_DynamicRollTableManager", "HandlePlaylistDataReady");

	Params::UFortGamestateComponent_DynamicRollTableManager_HandlePlaylistDataReady_Params Parms;

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
