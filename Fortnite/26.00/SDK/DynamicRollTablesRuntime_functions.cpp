#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DynamicRollTablesRuntime.FortControllerComponent_DynamicRollPlayerComponent
// (None)

class UClass* UFortControllerComponent_DynamicRollPlayerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortControllerComponent_DynamicRollPlayerComponent");

	return Clss;
}


// FortControllerComponent_DynamicRollPlayerComponent DynamicRollTablesRuntime.Default__FortControllerComponent_DynamicRollPlayerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortControllerComponent_DynamicRollPlayerComponent* UFortControllerComponent_DynamicRollPlayerComponent::GetDefaultObj()
{
	static class UFortControllerComponent_DynamicRollPlayerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortControllerComponent_DynamicRollPlayerComponent*>(UFortControllerComponent_DynamicRollPlayerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function DynamicRollTablesRuntime.FortControllerComponent_DynamicRollPlayerComponent.AuthorityRollChoices
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              NumChoices                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UFortItemDefinition*> IgnoreItems                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FFortDynamicRollResult>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FFortDynamicRollResult> UFortControllerComponent_DynamicRollPlayerComponent::AuthorityRollChoices(int32 NumChoices, TArray<class UFortItemDefinition*>& IgnoreItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_DynamicRollPlayerComponent", "AuthorityRollChoices");

	Params::UFortControllerComponent_DynamicRollPlayerComponent_AuthorityRollChoices_Params Parms{};

	Parms.NumChoices = NumChoices;
	Parms.IgnoreItems = IgnoreItems;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class DynamicRollTablesRuntime.FortGamestateComponent_DynamicRollTableManager
// (None)

class UClass* UFortGamestateComponent_DynamicRollTableManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGamestateComponent_DynamicRollTableManager");

	return Clss;
}


// FortGamestateComponent_DynamicRollTableManager DynamicRollTablesRuntime.Default__FortGamestateComponent_DynamicRollTableManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGamestateComponent_DynamicRollTableManager* UFortGamestateComponent_DynamicRollTableManager::GetDefaultObj()
{
	static class UFortGamestateComponent_DynamicRollTableManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGamestateComponent_DynamicRollTableManager*>(UFortGamestateComponent_DynamicRollTableManager::StaticClass()->DefaultObject);

	return Default;
}


// Function DynamicRollTablesRuntime.FortGamestateComponent_DynamicRollTableManager.HandlePlaylistDataReady
// (Final, Native, Private, HasOutParams)
// Parameters:
// class UFortGameStateAthena*        GameState                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlaylist*               Playlist                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortGamestateComponent_DynamicRollTableManager::HandlePlaylistDataReady(class UFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGamestateComponent_DynamicRollTableManager", "HandlePlaylistDataReady");

	Params::UFortGamestateComponent_DynamicRollTableManager_HandlePlaylistDataReady_Params Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


