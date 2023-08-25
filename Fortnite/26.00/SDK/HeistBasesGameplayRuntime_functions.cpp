#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class HeistBasesGameplayRuntime.FortGameStateComponent_HeistDisplayCaseItemManager
// (None)

class UClass* UFortGameStateComponent_HeistDisplayCaseItemManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameStateComponent_HeistDisplayCaseItemManager");

	return Clss;
}


// FortGameStateComponent_HeistDisplayCaseItemManager HeistBasesGameplayRuntime.Default__FortGameStateComponent_HeistDisplayCaseItemManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameStateComponent_HeistDisplayCaseItemManager* UFortGameStateComponent_HeistDisplayCaseItemManager::GetDefaultObj()
{
	static class UFortGameStateComponent_HeistDisplayCaseItemManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameStateComponent_HeistDisplayCaseItemManager*>(UFortGameStateComponent_HeistDisplayCaseItemManager::StaticClass()->DefaultObject);

	return Default;
}


// Function HeistBasesGameplayRuntime.FortGameStateComponent_HeistDisplayCaseItemManager.IsDataReady
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortGameStateComponent_HeistDisplayCaseItemManager::IsDataReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameStateComponent_HeistDisplayCaseItemManager", "IsDataReady");

	Params::UFortGameStateComponent_HeistDisplayCaseItemManager_IsDataReady_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeistBasesGameplayRuntime.FortGameStateComponent_HeistDisplayCaseItemManager.HandlePlaylistDataReady
// (Final, Native, Private, HasOutParams)
// Parameters:
// class UFortGameStateAthena*        GameState                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlaylist*               Playlist                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortGameStateComponent_HeistDisplayCaseItemManager::HandlePlaylistDataReady(class UFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameStateComponent_HeistDisplayCaseItemManager", "HandlePlaylistDataReady");

	Params::UFortGameStateComponent_HeistDisplayCaseItemManager_HandlePlaylistDataReady_Params Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeistBasesGameplayRuntime.FortGameStateComponent_HeistDisplayCaseItemManager.GetDisplayCaseItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                DisplayCaseGroupTag                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortWorldItemDefinition*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortWorldItemDefinition* UFortGameStateComponent_HeistDisplayCaseItemManager::GetDisplayCaseItem(const struct FGameplayTag& DisplayCaseGroupTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameStateComponent_HeistDisplayCaseItemManager", "GetDisplayCaseItem");

	Params::UFortGameStateComponent_HeistDisplayCaseItemManager_GetDisplayCaseItem_Params Parms{};

	Parms.DisplayCaseGroupTag = DisplayCaseGroupTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class HeistBasesGameplayRuntime.FortHeistDisplayCase
// (Actor)

class UClass* UFortHeistDisplayCase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortHeistDisplayCase");

	return Clss;
}


// FortHeistDisplayCase HeistBasesGameplayRuntime.Default__FortHeistDisplayCase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortHeistDisplayCase* UFortHeistDisplayCase::GetDefaultObj()
{
	static class UFortHeistDisplayCase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortHeistDisplayCase*>(UFortHeistDisplayCase::StaticClass()->DefaultObject);

	return Default;
}


// Function HeistBasesGameplayRuntime.FortHeistDisplayCase.OnServerNotifyStartDisplayCaseLongUse
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPlayerPawn*             InteractingPawn                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHeistDisplayCase::OnServerNotifyStartDisplayCaseLongUse(class UFortPlayerPawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeistDisplayCase", "OnServerNotifyStartDisplayCaseLongUse");

	Params::UFortHeistDisplayCase_OnServerNotifyStartDisplayCaseLongUse_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeistBasesGameplayRuntime.FortHeistDisplayCase.OnServerNotifyEndDisplayCaseLongUse
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPlayerPawn*             InteractingPawn                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHeistDisplayCase::OnServerNotifyEndDisplayCaseLongUse(class UFortPlayerPawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeistDisplayCase", "OnServerNotifyEndDisplayCaseLongUse");

	Params::UFortHeistDisplayCase_OnServerNotifyEndDisplayCaseLongUse_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


