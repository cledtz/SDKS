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


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEventTODM.OnPhaseActivated
// (Final, Native, Private)
// Parameters:
// class ASpecialEventScript*         InSpecialEventScript                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ASpecialEventPhase*          InSpecialEventPhase                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEventTODM::OnPhaseActivated(class ASpecialEventScript* InSpecialEventScript, class ASpecialEventPhase* InSpecialEventPhase)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEventTODM", "OnPhaseActivated");

	Params::AFortAthenaMutator_SpecialEventTODM_OnPhaseActivated_Params Parms;

	Parms.InSpecialEventScript = InSpecialEventScript;
	Parms.InSpecialEventPhase = InSpecialEventPhase;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_DestroyActorsAndComponents.DestroyActorsAndComponentsMutator_SetActorDefinitionsEnabled
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FString                      TagString                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_DestroyActorsAndComponents::DestroyActorsAndComponentsMutator_SetActorDefinitionsEnabled(const class FString& TagString, bool bEnabled)
{
	static auto Func = Class->GetFunction("FortCheatManager_DestroyActorsAndComponents", "DestroyActorsAndComponentsMutator_SetActorDefinitionsEnabled");

	Params::UFortCheatManager_DestroyActorsAndComponents_DestroyActorsAndComponentsMutator_SetActorDefinitionsEnabled_Params Parms;

	Parms.TagString = TagString;
	Parms.bEnabled = bEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_DestroyActorsAndComponents.DestroyActorsAndComponentsMutator_ListActorComponents
// (Final, Exec, Native, Public, Const)
// Parameters:
// class FString                      InActorName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_DestroyActorsAndComponents::DestroyActorsAndComponentsMutator_ListActorComponents(const class FString& InActorName)
{
	static auto Func = Class->GetFunction("FortCheatManager_DestroyActorsAndComponents", "DestroyActorsAndComponentsMutator_ListActorComponents");

	Params::UFortCheatManager_DestroyActorsAndComponents_DestroyActorsAndComponentsMutator_ListActorComponents_Params Parms;

	Parms.InActorName = InActorName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.SetActorDefinitionsEnabled
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       InTags                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_DestroyActorsAndComponents::SetActorDefinitionsEnabled(struct FGameplayTagContainer& InTags, bool bEnabled)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_DestroyActorsAndComponents", "SetActorDefinitionsEnabled");

	Params::AFortAthenaMutator_DestroyActorsAndComponents_SetActorDefinitionsEnabled_Params Parms;

	Parms.InTags = InTags;
	Parms.bEnabled = bEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.PermanentlyDisableActorDefinitions
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       InTags                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortAthenaMutator_DestroyActorsAndComponents::PermanentlyDisableActorDefinitions(struct FGameplayTagContainer& InTags)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_DestroyActorsAndComponents", "PermanentlyDisableActorDefinitions");

	Params::AFortAthenaMutator_DestroyActorsAndComponents_PermanentlyDisableActorDefinitions_Params Parms;

	Parms.InTags = InTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.OnTrackedActorDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_DestroyActorsAndComponents::OnTrackedActorDestroyed(class AActor* DestroyedActor)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_DestroyActorsAndComponents", "OnTrackedActorDestroyed");

	Params::AFortAthenaMutator_DestroyActorsAndComponents_OnTrackedActorDestroyed_Params Parms;

	Parms.DestroyedActor = DestroyedActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.OnRep_ActorDefinitions
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<struct FDestroyActorsAndComponentsMutator_ActorDefinition>OldActorDefinitions                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void AFortAthenaMutator_DestroyActorsAndComponents::OnRep_ActorDefinitions(TArray<struct FDestroyActorsAndComponentsMutator_ActorDefinition>& OldActorDefinitions)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_DestroyActorsAndComponents", "OnRep_ActorDefinitions");

	Params::AFortAthenaMutator_DestroyActorsAndComponents_OnRep_ActorDefinitions_Params Parms;

	Parms.OldActorDefinitions = OldActorDefinitions;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.OnActorSpawned
// (Final, Native, Private)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_DestroyActorsAndComponents::OnActorSpawned(class AActor* Actor)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_DestroyActorsAndComponents", "OnActorSpawned");

	Params::AFortAthenaMutator_DestroyActorsAndComponents_OnActorSpawned_Params Parms;

	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyTestAlgorithm
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// int32                              NumPlayers                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MaxPlayersRemainingAfterPhases                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MinSquadSize                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxSquadSize                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Iterations                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LogVerbosity                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_FakeKillRelevancy::FakeKillRelevancyTestAlgorithm(int32 NumPlayers, const class FString& MaxPlayersRemainingAfterPhases, int32 MinSquadSize, int32 MaxSquadSize, int32 Iterations, int32 LogVerbosity)
{
	static auto Func = Class->GetFunction("FortCheatManager_FakeKillRelevancy", "FakeKillRelevancyTestAlgorithm");

	Params::UFortCheatManager_FakeKillRelevancy_FakeKillRelevancyTestAlgorithm_Params Parms;

	Parms.NumPlayers = NumPlayers;
	Parms.MaxPlayersRemainingAfterPhases = MaxPlayersRemainingAfterPhases;
	Parms.MinSquadSize = MinSquadSize;
	Parms.MaxSquadSize = MaxSquadSize;
	Parms.Iterations = Iterations;
	Parms.LogVerbosity = LogVerbosity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyStartNextWave
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortCheatManager_FakeKillRelevancy::FakeKillRelevancyStartNextWave()
{
	static auto Func = Class->GetFunction("FortCheatManager_FakeKillRelevancy", "FakeKillRelevancyStartNextWave");

	Params::UFortCheatManager_FakeKillRelevancy_FakeKillRelevancyStartNextWave_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancySetUpPhase
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// int32                              MaxPlayersRemaining                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReasonGameplayTagString                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumWaves                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RelevancyDelay                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_FakeKillRelevancy::FakeKillRelevancySetUpPhase(int32 MaxPlayersRemaining, const class FString& ReasonGameplayTagString, int32 NumWaves, float RelevancyDelay)
{
	static auto Func = Class->GetFunction("FortCheatManager_FakeKillRelevancy", "FakeKillRelevancySetUpPhase");

	Params::UFortCheatManager_FakeKillRelevancy_FakeKillRelevancySetUpPhase_Params Parms;

	Parms.MaxPlayersRemaining = MaxPlayersRemaining;
	Parms.ReasonGameplayTagString = ReasonGameplayTagString;
	Parms.NumWaves = NumWaves;
	Parms.RelevancyDelay = RelevancyDelay;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyReset
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortCheatManager_FakeKillRelevancy::FakeKillRelevancyReset()
{
	static auto Func = Class->GetFunction("FortCheatManager_FakeKillRelevancy", "FakeKillRelevancyReset");

	Params::UFortCheatManager_FakeKillRelevancy_FakeKillRelevancyReset_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyDebug
// (Final, Exec, Native, Public)
// Parameters:
// float                              TextScale                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_FakeKillRelevancy::FakeKillRelevancyDebug(float TextScale)
{
	static auto Func = Class->GetFunction("FortCheatManager_FakeKillRelevancy", "FakeKillRelevancyDebug");

	Params::UFortCheatManager_FakeKillRelevancy_FakeKillRelevancyDebug_Params Parms;

	Parms.TextScale = TextScale;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.ResetRelevancy
// (Final, BlueprintAuthorityOnly, Native, Protected)
// Parameters:

void UFortControllerComponent_FakeKillRelevancy::ResetRelevancy()
{
	static auto Func = Class->GetFunction("FortControllerComponent_FakeKillRelevancy", "ResetRelevancy");

	Params::UFortControllerComponent_FakeKillRelevancy_ResetRelevancy_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.PlayKillEffects
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFakeKillRelevancyPlayerDataEntryFakeKillData                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                              RelevancyDelay                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_FakeKillRelevancy::PlayKillEffects(struct FFakeKillRelevancyPlayerDataEntry& FakeKillData, float RelevancyDelay)
{
	static auto Func = Class->GetFunction("FortControllerComponent_FakeKillRelevancy", "PlayKillEffects");

	Params::UFortControllerComponent_FakeKillRelevancy_PlayKillEffects_Params Parms;

	Parms.FakeKillData = FakeKillData;
	Parms.RelevancyDelay = RelevancyDelay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.OnRep_ResetCounter
// (Final, Native, Private)
// Parameters:

void UFortControllerComponent_FakeKillRelevancy::OnRep_ResetCounter()
{
	static auto Func = Class->GetFunction("FortControllerComponent_FakeKillRelevancy", "OnRep_ResetCounter");

	Params::UFortControllerComponent_FakeKillRelevancy_OnRep_ResetCounter_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.OnKillEffectsPlayed
// (Final, BlueprintCosmetic, Native, Protected, BlueprintCallable)
// Parameters:
// class AFortPlayerStateAthena*      PlayerState                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_FakeKillRelevancy::OnKillEffectsPlayed(class AFortPlayerStateAthena* PlayerState)
{
	static auto Func = Class->GetFunction("FortControllerComponent_FakeKillRelevancy", "OnKillEffectsPlayed");

	Params::UFortControllerComponent_FakeKillRelevancy_OnKillEffectsPlayed_Params Parms;

	Parms.PlayerState = PlayerState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.GetDeathLocation
// (Final, Native, Protected, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortPlayerStateAthena*      PlayerState                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UFortControllerComponent_FakeKillRelevancy::GetDeathLocation(class AFortPlayerStateAthena* PlayerState)
{
	static auto Func = Class->GetFunction("FortControllerComponent_FakeKillRelevancy", "GetDeathLocation");

	Params::UFortControllerComponent_FakeKillRelevancy_GetDeathLocation_Params Parms;

	Parms.PlayerState = PlayerState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.CancelKillEffectsOnServer
// (BlueprintAuthorityOnly, Event, Protected, BlueprintEvent)
// Parameters:

void UFortControllerComponent_FakeKillRelevancy::CancelKillEffectsOnServer()
{
	static auto Func = Class->GetFunction("FortControllerComponent_FakeKillRelevancy", "CancelKillEffectsOnServer");

	Params::UFortControllerComponent_FakeKillRelevancy_CancelKillEffectsOnServer_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.CancelKillEffectsOnClient
// (BlueprintCosmetic, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class AFortPlayerStateAthena*>PlayerStates                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortControllerComponent_FakeKillRelevancy::CancelKillEffectsOnClient(TArray<class AFortPlayerStateAthena*>& PlayerStates)
{
	static auto Func = Class->GetFunction("FortControllerComponent_FakeKillRelevancy", "CancelKillEffectsOnClient");

	Params::UFortControllerComponent_FakeKillRelevancy_CancelKillEffectsOnClient_Params Parms;

	Parms.PlayerStates = PlayerStates;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.StartNextKillWave
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_FakeKillRelevancy::StartNextKillWave()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_FakeKillRelevancy", "StartNextKillWave");

	Params::AFortAthenaMutator_FakeKillRelevancy_StartNextKillWave_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.SetUpKillPhase
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              MaxPlayersRemaining                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                Reason                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumWaves                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RelevancyDelay                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_FakeKillRelevancy::SetUpKillPhase(int32 MaxPlayersRemaining, struct FGameplayTag& Reason, int32 NumWaves, float RelevancyDelay)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_FakeKillRelevancy", "SetUpKillPhase");

	Params::AFortAthenaMutator_FakeKillRelevancy_SetUpKillPhase_Params Parms;

	Parms.MaxPlayersRemaining = MaxPlayersRemaining;
	Parms.Reason = Reason;
	Parms.NumWaves = NumWaves;
	Parms.RelevancyDelay = RelevancyDelay;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.ResetRelevancy
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_FakeKillRelevancy::ResetRelevancy()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_FakeKillRelevancy", "ResetRelevancy");

	Params::AFortAthenaMutator_FakeKillRelevancy_ResetRelevancy_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.EndWave
// (Final, Native, Private)
// Parameters:
// int32                              EndPhaseNum                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              WaveNum                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_FakeKillRelevancy::EndWave(int32 EndPhaseNum, int32 WaveNum)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_FakeKillRelevancy", "EndWave");

	Params::AFortAthenaMutator_FakeKillRelevancy_EndWave_Params Parms;

	Parms.EndPhaseNum = EndPhaseNum;
	Parms.WaveNum = WaveNum;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_LoadGameFeature.OnPlaylistDataReady
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class AFortGameStateAthena*        GameState                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlaylist*               Playlist                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortAthenaMutator_LoadGameFeature::OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_LoadGameFeature", "OnPlaylistDataReady");

	Params::AFortAthenaMutator_LoadGameFeature_OnPlaylistDataReady_Params Parms;

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_RemoveGameFeatures.OnPlaylistDataReady
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class AFortGameStateAthena*        GameState                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlaylist*               Playlist                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortAthenaMutator_RemoveGameFeatures::OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_RemoveGameFeatures", "OnPlaylistDataReady");

	Params::AFortAthenaMutator_RemoveGameFeatures_OnPlaylistDataReady_Params Parms;

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.UnloadTerrainMaps
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// class FName                        MapTag                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::UnloadTerrainMaps(class FName MapTag)
{
	static auto Func = Class->GetFunction("FortCheatManager_SpecialEvent", "UnloadTerrainMaps");

	Params::UFortCheatManager_SpecialEvent_UnloadTerrainMaps_Params Parms;

	Parms.MapTag = MapTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ToggleDisableParachutes
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// bool                               bIsDisabled                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::ToggleDisableParachutes(bool bIsDisabled)
{
	static auto Func = Class->GetFunction("FortCheatManager_SpecialEvent", "ToggleDisableParachutes");

	Params::UFortCheatManager_SpecialEvent_ToggleDisableParachutes_Params Parms;

	Parms.bIsDisabled = bIsDisabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.TeleportAllPlayers
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// int32                              SafeZoneIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::TeleportAllPlayers(int32 SafeZoneIndex)
{
	static auto Func = Class->GetFunction("FortCheatManager_SpecialEvent", "TeleportAllPlayers");

	Params::UFortCheatManager_SpecialEvent_TeleportAllPlayers_Params Parms;

	Parms.SafeZoneIndex = SafeZoneIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.StartEventScript
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// int32                              InStartingIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::StartEventScript(int32 InStartingIndex)
{
	static auto Func = Class->GetFunction("FortCheatManager_SpecialEvent", "StartEventScript");

	Params::UFortCheatManager_SpecialEvent_StartEventScript_Params Parms;

	Parms.InStartingIndex = InStartingIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SpecialEventSetAdditionalViewpoint
// (Final, Exec, Native, Protected)
// Parameters:
// float                              X                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Y                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Z                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::SpecialEventSetAdditionalViewpoint(float X, float Y, float Z)
{
	static auto Func = Class->GetFunction("FortCheatManager_SpecialEvent", "SpecialEventSetAdditionalViewpoint");

	Params::UFortCheatManager_SpecialEvent_SpecialEventSetAdditionalViewpoint_Params Parms;

	Parms.X = X;
	Parms.Y = Y;
	Parms.Z = Z;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SpecialEventGameUserSettings_ClearDataForAllPlayers
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::SpecialEventGameUserSettings_ClearDataForAllPlayers()
{
	static auto Func = Class->GetFunction("FortCheatManager_SpecialEvent", "SpecialEventGameUserSettings_ClearDataForAllPlayers");

	Params::UFortCheatManager_SpecialEvent_SpecialEventGameUserSettings_ClearDataForAllPlayers_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SpecialEventClearAdditionalViewpoint
// (Final, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::SpecialEventClearAdditionalViewpoint()
{
	static auto Func = Class->GetFunction("FortCheatManager_SpecialEvent", "SpecialEventClearAdditionalViewpoint");

	Params::UFortCheatManager_SpecialEvent_SpecialEventClearAdditionalViewpoint_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ShrinkSafeZone
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::ShrinkSafeZone()
{
	static auto Func = Class->GetFunction("FortCheatManager_SpecialEvent", "ShrinkSafeZone");

	Params::UFortCheatManager_SpecialEvent_ShrinkSafeZone_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetReturnToMainMenuDelay
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// float                              MinDelayReturnToMainMenu                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxDelayReturnToMainMenu                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::SetReturnToMainMenuDelay(float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu)
{
	static auto Func = Class->GetFunction("FortCheatManager_SpecialEvent", "SetReturnToMainMenuDelay");

	Params::UFortCheatManager_SpecialEvent_SetReturnToMainMenuDelay_Params Parms;

	Parms.MinDelayReturnToMainMenu = MinDelayReturnToMainMenu;
	Parms.MaxDelayReturnToMainMenu = MaxDelayReturnToMainMenu;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetMatchTime
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// int32                              NewMatchTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::SetMatchTime(int32 NewMatchTime)
{
	static auto Func = Class->GetFunction("FortCheatManager_SpecialEvent", "SetMatchTime");

	Params::UFortCheatManager_SpecialEvent_SetMatchTime_Params Parms;

	Parms.NewMatchTime = NewMatchTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetLockingOnFocalPoint
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// bool                               bInLockingOnFocalPoint                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::SetLockingOnFocalPoint(bool bInLockingOnFocalPoint)
{
	static auto Func = Class->GetFunction("FortCheatManager_SpecialEvent", "SetLockingOnFocalPoint");

	Params::UFortCheatManager_SpecialEvent_SetLockingOnFocalPoint_Params Parms;

	Parms.bInLockingOnFocalPoint = bInLockingOnFocalPoint;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetIsSimulatingDamage
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// bool                               bIsSimulating                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::SetIsSimulatingDamage(bool bIsSimulating)
{
	static auto Func = Class->GetFunction("FortCheatManager_SpecialEvent", "SetIsSimulatingDamage");

	Params::UFortCheatManager_SpecialEvent_SetIsSimulatingDamage_Params Parms;

	Parms.bIsSimulating = bIsSimulating;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetDestroyVehiclesInStorm
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// bool                               bDestroyVehiclesInStorm                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::SetDestroyVehiclesInStorm(bool bDestroyVehiclesInStorm)
{
	static auto Func = Class->GetFunction("FortCheatManager_SpecialEvent", "SetDestroyVehiclesInStorm");

	Params::UFortCheatManager_SpecialEvent_SetDestroyVehiclesInStorm_Params Parms;

	Parms.bDestroyVehiclesInStorm = bDestroyVehiclesInStorm;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SendToNightNight
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::SendToNightNight()
{
	static auto Func = Class->GetFunction("FortCheatManager_SpecialEvent", "SendToNightNight");

	Params::UFortCheatManager_SpecialEvent_SendToNightNight_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResumeWinCondition
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::ResumeWinCondition()
{
	static auto Func = Class->GetFunction("FortCheatManager_SpecialEvent", "ResumeWinCondition");

	Params::UFortCheatManager_SpecialEvent_ResumeWinCondition_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResetWinConditionProgressToZero
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::ResetWinConditionProgressToZero()
{
	static auto Func = Class->GetFunction("FortCheatManager_SpecialEvent", "ResetWinConditionProgressToZero");

	Params::UFortCheatManager_SpecialEvent_ResetWinConditionProgressToZero_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResetWinCondition
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::ResetWinCondition()
{
	static auto Func = Class->GetFunction("FortCheatManager_SpecialEvent", "ResetWinCondition");

	Params::UFortCheatManager_SpecialEvent_ResetWinCondition_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResetSpecialEventAircraft
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::ResetSpecialEventAircraft()
{
	static auto Func = Class->GetFunction("FortCheatManager_SpecialEvent", "ResetSpecialEventAircraft");

	Params::UFortCheatManager_SpecialEvent_ResetSpecialEventAircraft_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResetMatchTimeToPrevious
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::ResetMatchTimeToPrevious()
{
	static auto Func = Class->GetFunction("FortCheatManager_SpecialEvent", "ResetMatchTimeToPrevious");

	Params::UFortCheatManager_SpecialEvent_ResetMatchTimeToPrevious_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.PlacePlayersInAircraft
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::PlacePlayersInAircraft()
{
	static auto Func = Class->GetFunction("FortCheatManager_SpecialEvent", "PlacePlayersInAircraft");

	Params::UFortCheatManager_SpecialEvent_PlacePlayersInAircraft_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.PauseWinCondition
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// bool                               bLockScores                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::PauseWinCondition(bool bLockScores)
{
	static auto Func = Class->GetFunction("FortCheatManager_SpecialEvent", "PauseWinCondition");

	Params::UFortCheatManager_SpecialEvent_PauseWinCondition_Params Parms;

	Parms.bLockScores = bLockScores;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.CloseParachutes
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::CloseParachutes()
{
	static auto Func = Class->GetFunction("FortCheatManager_SpecialEvent", "CloseParachutes");

	Params::UFortCheatManager_SpecialEvent_CloseParachutes_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ChangeWinCondition
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// float                              NewGoalScore                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::ChangeWinCondition(float NewGoalScore)
{
	static auto Func = Class->GetFunction("FortCheatManager_SpecialEvent", "ChangeWinCondition");

	Params::UFortCheatManager_SpecialEvent_ChangeWinCondition_Params Parms;

	Parms.NewGoalScore = NewGoalScore;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.AutobalanceTargetScore
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::AutobalanceTargetScore()
{
	static auto Func = Class->GetFunction("FortCheatManager_SpecialEvent", "AutobalanceTargetScore");

	Params::UFortCheatManager_SpecialEvent_AutobalanceTargetScore_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.AddCSVEvent
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// class FString                      CSVEventName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::AddCSVEvent(const class FString& CSVEventName)
{
	static auto Func = Class->GetFunction("FortCheatManager_SpecialEvent", "AddCSVEvent");

	Params::UFortCheatManager_SpecialEvent_AddCSVEvent_Params Parms;

	Parms.CSVEventName = CSVEventName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.WarmUpIslandUpdated
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::WarmUpIslandUpdated()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "WarmUpIslandUpdated");

	Params::AFortAthenaMutator_SpecialEvent_WarmUpIslandUpdated_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.UpdateBackfillStatus
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::UpdateBackfillStatus()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "UpdateBackfillStatus");

	Params::AFortAthenaMutator_SpecialEvent_UpdateBackfillStatus_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.UnloadTerrainMaps
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                MapTag                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::UnloadTerrainMaps(struct FGameplayTag& MapTag)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "UnloadTerrainMaps");

	Params::AFortAthenaMutator_SpecialEvent_UnloadTerrainMaps_Params Parms;

	Parms.MapTag = MapTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleHUDs
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bHide                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::ToggleHUDs(bool bHide)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ToggleHUDs");

	Params::AFortAthenaMutator_SpecialEvent_ToggleHUDs_Params Parms;

	Parms.bHide = bHide;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleDisableWeapons
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bDisableWeapons                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::ToggleDisableWeapons(bool bDisableWeapons)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ToggleDisableWeapons");

	Params::AFortAthenaMutator_SpecialEvent_ToggleDisableWeapons_Params Parms;

	Parms.bDisableWeapons = bDisableWeapons;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleDisableParachutes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bDisable                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::ToggleDisableParachutes(bool bDisable)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ToggleDisableParachutes");

	Params::AFortAthenaMutator_SpecialEvent_ToggleDisableParachutes_Params Parms;

	Parms.bDisable = bDisable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleAllPlayersInvincibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInvincible                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::ToggleAllPlayersInvincibility(bool bInvincible)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ToggleAllPlayersInvincibility");

	Params::AFortAthenaMutator_SpecialEvent_ToggleAllPlayersInvincibility_Params Parms;

	Parms.bInvincible = bInvincible;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.TeleportAllPlayers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       EventTags                                                        (Parm, NativeAccessSpecifierPublic)
// int32                              TeleportsPerFrame                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SafeZoneIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::TeleportAllPlayers(const struct FGameplayTagContainer& EventTags, int32 TeleportsPerFrame, int32 SafeZoneIndex)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "TeleportAllPlayers");

	Params::AFortAthenaMutator_SpecialEvent_TeleportAllPlayers_Params Parms;

	Parms.EventTags = EventTags;
	Parms.TeleportsPerFrame = TeleportsPerFrame;
	Parms.SafeZoneIndex = SafeZoneIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SwapBodyParts
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ArrayIndex                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerController*       FortPC                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::SwapBodyParts(int32 ArrayIndex, class AFortPlayerController* FortPC)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SwapBodyParts");

	Params::AFortAthenaMutator_SpecialEvent_SwapBodyParts_Params Parms;

	Parms.ArrayIndex = ArrayIndex;
	Parms.FortPC = FortPC;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.StartSafeZoneOverrideForEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SafeZoneIndexForEvent                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::StartSafeZoneOverrideForEvent(int32 SafeZoneIndexForEvent)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "StartSafeZoneOverrideForEvent");

	Params::AFortAthenaMutator_SpecialEvent_StartSafeZoneOverrideForEvent_Params Parms;

	Parms.SafeZoneIndexForEvent = SafeZoneIndexForEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ShrinkSafeZone
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::ShrinkSafeZone()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ShrinkSafeZone");

	Params::AFortAthenaMutator_SpecialEvent_ShrinkSafeZone_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetWeightForContainerLootRoll
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Weight                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::SetWeightForContainerLootRoll(float Weight)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SetWeightForContainerLootRoll");

	Params::AFortAthenaMutator_SpecialEvent_SetWeightForContainerLootRoll_Params Parms;

	Parms.Weight = Weight;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetReturnToMainMenuDelay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              MinDelayReturnToMainMenu                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxDelayReturnToMainMenu                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::SetReturnToMainMenuDelay(float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SetReturnToMainMenuDelay");

	Params::AFortAthenaMutator_SpecialEvent_SetReturnToMainMenuDelay_Params Parms;

	Parms.MinDelayReturnToMainMenu = MinDelayReturnToMainMenu;
	Parms.MaxDelayReturnToMainMenu = MaxDelayReturnToMainMenu;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetNamedWeightForContainerLootRoll
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        WeightName                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::SetNamedWeightForContainerLootRoll(class FName WeightName)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SetNamedWeightForContainerLootRoll");

	Params::AFortAthenaMutator_SpecialEvent_SetNamedWeightForContainerLootRoll_Params Parms;

	Parms.WeightName = WeightName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetMatchTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewMatchTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::SetMatchTime(int32 NewMatchTime)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SetMatchTime");

	Params::AFortAthenaMutator_SpecialEvent_SetMatchTime_Params Parms;

	Parms.NewMatchTime = NewMatchTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetLockingOnFocalPoint
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInLockingOnFocalPoint                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::SetLockingOnFocalPoint(bool bInLockingOnFocalPoint)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SetLockingOnFocalPoint");

	Params::AFortAthenaMutator_SpecialEvent_SetLockingOnFocalPoint_Params Parms;

	Parms.bInLockingOnFocalPoint = bInLockingOnFocalPoint;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetIsSimulatingDamage
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsSimulating                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::SetIsSimulatingDamage(bool bIsSimulating)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SetIsSimulatingDamage");

	Params::AFortAthenaMutator_SpecialEvent_SetIsSimulatingDamage_Params Parms;

	Parms.bIsSimulating = bIsSimulating;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetDestroyVehiclesInStorm
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bDestroyVehiclesInStorm                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::SetDestroyVehiclesInStorm(bool bDestroyVehiclesInStorm)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SetDestroyVehiclesInStorm");

	Params::AFortAthenaMutator_SpecialEvent_SetDestroyVehiclesInStorm_Params Parms;

	Parms.bDestroyVehiclesInStorm = bDestroyVehiclesInStorm;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetCanStreamBuildingFoundationsIn
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::SetCanStreamBuildingFoundationsIn(bool bEnable)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SetCanStreamBuildingFoundationsIn");

	Params::AFortAthenaMutator_SpecialEvent_SetCanStreamBuildingFoundationsIn_Params Parms;

	Parms.bEnable = bEnable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetAdditionalViewpoint
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     WorldLocation                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::SetAdditionalViewpoint(const struct FVector& WorldLocation)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SetAdditionalViewpoint");

	Params::AFortAthenaMutator_SpecialEvent_SetAdditionalViewpoint_Params Parms;

	Parms.WorldLocation = WorldLocation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SendToNightNight
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::SendToNightNight()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SendToNightNight");

	Params::AFortAthenaMutator_SpecialEvent_SendToNightNight_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResumeWinCondition
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::ResumeWinCondition()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ResumeWinCondition");

	Params::AFortAthenaMutator_SpecialEvent_ResumeWinCondition_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetWinConditionProgressToZero
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::ResetWinConditionProgressToZero()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ResetWinConditionProgressToZero");

	Params::AFortAthenaMutator_SpecialEvent_ResetWinConditionProgressToZero_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetWinCondition
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::ResetWinCondition()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ResetWinCondition");

	Params::AFortAthenaMutator_SpecialEvent_ResetWinCondition_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetSpecialEventAircraft
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::ResetSpecialEventAircraft()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ResetSpecialEventAircraft");

	Params::AFortAthenaMutator_SpecialEvent_ResetSpecialEventAircraft_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetSafeZoneOverrideAfterEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              MinResetSafeZoneIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinDelayReturnToMainMenu                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxDelayReturnToMainMenu                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::ResetSafeZoneOverrideAfterEvent(int32 MinResetSafeZoneIndex, float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ResetSafeZoneOverrideAfterEvent");

	Params::AFortAthenaMutator_SpecialEvent_ResetSafeZoneOverrideAfterEvent_Params Parms;

	Parms.MinResetSafeZoneIndex = MinResetSafeZoneIndex;
	Parms.MinDelayReturnToMainMenu = MinDelayReturnToMainMenu;
	Parms.MaxDelayReturnToMainMenu = MaxDelayReturnToMainMenu;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetMatchTimeToPrevious
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::ResetMatchTimeToPrevious()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ResetMatchTimeToPrevious");

	Params::AFortAthenaMutator_SpecialEvent_ResetMatchTimeToPrevious_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.RemoveFromBlockedNativeActions
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       Actions                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::RemoveFromBlockedNativeActions(struct FGameplayTagContainer& Actions)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "RemoveFromBlockedNativeActions");

	Params::AFortAthenaMutator_SpecialEvent_RemoveFromBlockedNativeActions_Params Parms;

	Parms.Actions = Actions;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PushSpecialEventEmoteInputComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::PushSpecialEventEmoteInputComponent()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "PushSpecialEventEmoteInputComponent");

	Params::AFortAthenaMutator_SpecialEvent_PushSpecialEventEmoteInputComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PopSpecialEventEmoteInputComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::PopSpecialEventEmoteInputComponent()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "PopSpecialEventEmoteInputComponent");

	Params::AFortAthenaMutator_SpecialEvent_PopSpecialEventEmoteInputComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PlacePlayersInAircraft
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::PlacePlayersInAircraft()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "PlacePlayersInAircraft");

	Params::AFortAthenaMutator_SpecialEvent_PlacePlayersInAircraft_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseWinCondition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bLockScores                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::PauseWinCondition(bool bLockScores)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "PauseWinCondition");

	Params::AFortAthenaMutator_SpecialEvent_PauseWinCondition_Params Parms;

	Parms.bLockScores = bLockScores;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseSupplyDrops
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bPause                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::PauseSupplyDrops(bool bPause)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "PauseSupplyDrops");

	Params::AFortAthenaMutator_SpecialEvent_PauseSupplyDrops_Params Parms;

	Parms.bPause = bPause;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseStormProgression
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bPause                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::PauseStormProgression(bool bPause)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "PauseStormProgression");

	Params::AFortAthenaMutator_SpecialEvent_PauseStormProgression_Params Parms;

	Parms.bPause = bPause;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseStormDamage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bPause                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::PauseStormDamage(bool bPause)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "PauseStormDamage");

	Params::AFortAthenaMutator_SpecialEvent_PauseStormDamage_Params Parms;

	Parms.bPause = bPause;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnWarmUpTeleportComplete
// (Final, Native, Protected)
// Parameters:
// class AFortPlayerPawn*             PlayerPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::OnWarmUpTeleportComplete(class AFortPlayerPawn* PlayerPawn)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnWarmUpTeleportComplete");

	Params::AFortAthenaMutator_SpecialEvent_OnWarmUpTeleportComplete_Params Parms;

	Parms.PlayerPawn = PlayerPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_TerrainMapsToUnload
// (Final, Native, Protected)
// Parameters:

void AFortAthenaMutator_SpecialEvent::OnRep_TerrainMapsToUnload()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_TerrainMapsToUnload");

	Params::AFortAthenaMutator_SpecialEvent_OnRep_TerrainMapsToUnload_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_LastCSVEventName
// (Final, Native, Protected)
// Parameters:

void AFortAthenaMutator_SpecialEvent::OnRep_LastCSVEventName()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_LastCSVEventName");

	Params::AFortAthenaMutator_SpecialEvent_OnRep_LastCSVEventName_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_GameResumed
// (Final, Native, Protected)
// Parameters:

void AFortAthenaMutator_SpecialEvent::OnRep_GameResumed()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_GameResumed");

	Params::AFortAthenaMutator_SpecialEvent_OnRep_GameResumed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_DelayPlayersFromReturningToLobbyData
// (Final, Native, Protected)
// Parameters:

void AFortAthenaMutator_SpecialEvent::OnRep_DelayPlayersFromReturningToLobbyData()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_DelayPlayersFromReturningToLobbyData");

	Params::AFortAthenaMutator_SpecialEvent_OnRep_DelayPlayersFromReturningToLobbyData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bPlayersAreInvincible
// (Final, Native, Protected)
// Parameters:

void AFortAthenaMutator_SpecialEvent::OnRep_bPlayersAreInvincible()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_bPlayersAreInvincible");

	Params::AFortAthenaMutator_SpecialEvent_OnRep_bPlayersAreInvincible_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bLockingOnFocalPoint
// (Final, Native, Protected)
// Parameters:

void AFortAthenaMutator_SpecialEvent::OnRep_bLockingOnFocalPoint()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_bLockingOnFocalPoint");

	Params::AFortAthenaMutator_SpecialEvent_OnRep_bLockingOnFocalPoint_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bDisableHUD
// (Final, Native, Protected)
// Parameters:

void AFortAthenaMutator_SpecialEvent::OnRep_bDisableHUD()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_bDisableHUD");

	Params::AFortAthenaMutator_SpecialEvent_OnRep_bDisableHUD_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bCanStreamBuildingFoundationsIn
// (Final, Native, Protected)
// Parameters:

void AFortAthenaMutator_SpecialEvent::OnRep_bCanStreamBuildingFoundationsIn()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_bCanStreamBuildingFoundationsIn");

	Params::AFortAthenaMutator_SpecialEvent_OnRep_bCanStreamBuildingFoundationsIn_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_AllPlayerTeleportedCount
// (Final, Native, Protected)
// Parameters:

void AFortAthenaMutator_SpecialEvent::OnRep_AllPlayerTeleportedCount()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_AllPlayerTeleportedCount");

	Params::AFortAthenaMutator_SpecialEvent_OnRep_AllPlayerTeleportedCount_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_Aircraft
// (Final, Native, Protected)
// Parameters:

void AFortAthenaMutator_SpecialEvent::OnRep_Aircraft()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_Aircraft");

	Params::AFortAthenaMutator_SpecialEvent_OnRep_Aircraft_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_AdditionalViewpoint
// (Final, Native, Protected)
// Parameters:

void AFortAthenaMutator_SpecialEvent::OnRep_AdditionalViewpoint()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_AdditionalViewpoint");

	Params::AFortAthenaMutator_SpecialEvent_OnRep_AdditionalViewpoint_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnGameViewportActivationChanged
// (Final, Native, Public)
// Parameters:
// bool                               bHasFocus                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::OnGameViewportActivationChanged(bool bHasFocus)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnGameViewportActivationChanged");

	Params::AFortAthenaMutator_SpecialEvent_OnGameViewportActivationChanged_Params Parms;

	Parms.bHasFocus = bHasFocus;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnGamePhaseStepChanged
// (Final, Native, Protected, HasOutParams)
// Parameters:
// FInterfaceProperty_                SafeZoneInterface                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAthenaGamePhaseStep    GamePhaseStep                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::OnGamePhaseStepChanged(FInterfaceProperty_& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnGamePhaseStepChanged");

	Params::AFortAthenaMutator_SpecialEvent_OnGamePhaseStepChanged_Params Parms;

	Parms.SafeZoneInterface = SafeZoneInterface;
	Parms.GamePhaseStep = GamePhaseStep;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnGamePhaseChanged
// (Native, Protected)
// Parameters:
// enum class EAthenaGamePhase        NewPhase                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::OnGamePhaseChanged(enum class EAthenaGamePhase NewPhase)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnGamePhaseChanged");

	Params::AFortAthenaMutator_SpecialEvent_OnGamePhaseChanged_Params Parms;

	Parms.NewPhase = NewPhase;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnAircraftFlightEnded
// (Final, Native, Protected)
// Parameters:
// class AFortAthenaAircraft*         FortAthenaAircraft                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::OnAircraftFlightEnded(class AFortAthenaAircraft* FortAthenaAircraft)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnAircraftFlightEnded");

	Params::AFortAthenaMutator_SpecialEvent_OnAircraftFlightEnded_Params Parms;

	Parms.FortAthenaAircraft = FortAthenaAircraft;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnAircraftExitedDropZone
// (Final, Native, Protected)
// Parameters:
// class AFortAthenaAircraft*         FortAthenaAircraft                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::OnAircraftExitedDropZone(class AFortAthenaAircraft* FortAthenaAircraft)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnAircraftExitedDropZone");

	Params::AFortAthenaMutator_SpecialEvent_OnAircraftExitedDropZone_Params Parms;

	Parms.FortAthenaAircraft = FortAthenaAircraft;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnAircraftEnteredDropZone
// (Final, Native, Protected)
// Parameters:
// class AFortAthenaAircraft*         FortAthenaAircraft                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::OnAircraftEnteredDropZone(class AFortAthenaAircraft* FortAthenaAircraft)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnAircraftEnteredDropZone");

	Params::AFortAthenaMutator_SpecialEvent_OnAircraftEnteredDropZone_Params Parms;

	Parms.FortAthenaAircraft = FortAthenaAircraft;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnActorSpawned
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::OnActorSpawned(class AActor* Actor)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnActorSpawned");

	Params::AFortAthenaMutator_SpecialEvent_OnActorSpawned_Params Parms;

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnActorPreSpawnInitialization
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::OnActorPreSpawnInitialization(class AActor* Actor)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnActorPreSpawnInitialization");

	Params::AFortAthenaMutator_SpecialEvent_OnActorPreSpawnInitialization_Params Parms;

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.NotifyClientsGameResumed
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::NotifyClientsGameResumed()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "NotifyClientsGameResumed");

	Params::AFortAthenaMutator_SpecialEvent_NotifyClientsGameResumed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.NetMulticast_CheatClearSpecialEventGameUserSettings
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:

void AFortAthenaMutator_SpecialEvent::NetMulticast_CheatClearSpecialEventGameUserSettings()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "NetMulticast_CheatClearSpecialEventGameUserSettings");

	Params::AFortAthenaMutator_SpecialEvent_NetMulticast_CheatClearSpecialEventGameUserSettings_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.JumpToSafeZonePhase
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     PawnSpawnCenterLocation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PawnSpawnMinDistance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PawnSpawnMaxDistance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::JumpToSafeZonePhase(const struct FVector& PawnSpawnCenterLocation, float PawnSpawnMinDistance, float PawnSpawnMaxDistance)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "JumpToSafeZonePhase");

	Params::AFortAthenaMutator_SpecialEvent_JumpToSafeZonePhase_Params Parms;

	Parms.PawnSpawnCenterLocation = PawnSpawnCenterLocation;
	Parms.PawnSpawnMinDistance = PawnSpawnMinDistance;
	Parms.PawnSpawnMaxDistance = PawnSpawnMaxDistance;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.HandleSpecialEventMannequinDestroyed
// (Final, Native, Protected)
// Parameters:
// class AActor*                      MannequinActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::HandleSpecialEventMannequinDestroyed(class AActor* MannequinActor)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "HandleSpecialEventMannequinDestroyed");

	Params::AFortAthenaMutator_SpecialEvent_HandleSpecialEventMannequinDestroyed_Params Parms;

	Parms.MannequinActor = MannequinActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.GetScript
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ASpecialEventScript*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ASpecialEventScript* AFortAthenaMutator_SpecialEvent::GetScript()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "GetScript");

	Params::AFortAthenaMutator_SpecialEvent_GetScript_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.GetHasInfiniteSafeZonePhase
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortAthenaMutator_SpecialEvent::GetHasInfiniteSafeZonePhase()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "GetHasInfiniteSafeZonePhase");

	Params::AFortAthenaMutator_SpecialEvent_GetHasInfiniteSafeZonePhase_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ForceSafeZoneFinalLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     NewFinalLocation                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DefaultAircraftOffsetFromMidLine                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinDefaultMidlineAngle                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxDefaultMidlineAngle                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::ForceSafeZoneFinalLocation(const struct FVector& NewFinalLocation, float DefaultAircraftOffsetFromMidLine, float MinDefaultMidlineAngle, float MaxDefaultMidlineAngle)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ForceSafeZoneFinalLocation");

	Params::AFortAthenaMutator_SpecialEvent_ForceSafeZoneFinalLocation_Params Parms;

	Parms.NewFinalLocation = NewFinalLocation;
	Parms.DefaultAircraftOffsetFromMidLine = DefaultAircraftOffsetFromMidLine;
	Parms.MinDefaultMidlineAngle = MinDefaultMidlineAngle;
	Parms.MaxDefaultMidlineAngle = MaxDefaultMidlineAngle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.FlushUnhandledPlayerControllers
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::FlushUnhandledPlayerControllers()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "FlushUnhandledPlayerControllers");

	Params::AFortAthenaMutator_SpecialEvent_FlushUnhandledPlayerControllers_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.CloseParachutes
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::CloseParachutes()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "CloseParachutes");

	Params::AFortAthenaMutator_SpecialEvent_CloseParachutes_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ClearBlockedNativeActions
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::ClearBlockedNativeActions()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ClearBlockedNativeActions");

	Params::AFortAthenaMutator_SpecialEvent_ClearBlockedNativeActions_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ClearAdditionalViewpoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::ClearAdditionalViewpoint()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ClearAdditionalViewpoint");

	Params::AFortAthenaMutator_SpecialEvent_ClearAdditionalViewpoint_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ChangeWinCondition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewGoalScore                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::ChangeWinCondition(float NewGoalScore)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ChangeWinCondition");

	Params::AFortAthenaMutator_SpecialEvent_ChangeWinCondition_Params Parms;

	Parms.NewGoalScore = NewGoalScore;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AutobalanceTargetScore
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::AutobalanceTargetScore()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "AutobalanceTargetScore");

	Params::AFortAthenaMutator_SpecialEvent_AutobalanceTargetScore_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AddToBlockedNativeActions
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       Actions                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bCancelAbilities                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::AddToBlockedNativeActions(struct FGameplayTagContainer& Actions, bool bCancelAbilities)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "AddToBlockedNativeActions");

	Params::AFortAthenaMutator_SpecialEvent_AddToBlockedNativeActions_Params Parms;

	Parms.Actions = Actions;
	Parms.bCancelAbilities = bCancelAbilities;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AddCSVEvent
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      CSVEventName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldRepToClient                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::AddCSVEvent(const class FString& CSVEventName, bool bShouldRepToClient)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "AddCSVEvent");

	Params::AFortAthenaMutator_SpecialEvent_AddCSVEvent_Params Parms;

	Parms.CSVEventName = CSVEventName;
	Parms.bShouldRepToClient = bShouldRepToClient;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AddClientCSVEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      CSVEventName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::AddClientCSVEvent(const class FString& CSVEventName)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "AddClientCSVEvent");

	Params::AFortAthenaMutator_SpecialEvent_AddClientCSVEvent_Params Parms;

	Parms.CSVEventName = CSVEventName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint.UpdateCameraBP
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      ViewTarget                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTViewTarget                OutVT                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortCameraMode_SpecialEventFocalPoint::UpdateCameraBP(class AActor* ViewTarget, float DeltaTime, struct FTViewTarget& OutVT)
{
	static auto Func = Class->GetFunction("FortCameraMode_SpecialEventFocalPoint", "UpdateCameraBP");

	Params::UFortCameraMode_SpecialEventFocalPoint_UpdateCameraBP_Params Parms;

	Parms.ViewTarget = ViewTarget;
	Parms.DeltaTime = DeltaTime;
	Parms.OutVT = OutVT;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint.SetOverrideTransitionTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InTransitionTime                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCameraMode_SpecialEventFocalPoint::SetOverrideTransitionTime(float InTransitionTime)
{
	static auto Func = Class->GetFunction("FortCameraMode_SpecialEventFocalPoint", "SetOverrideTransitionTime");

	Params::UFortCameraMode_SpecialEventFocalPoint_SetOverrideTransitionTime_Params Parms;

	Parms.InTransitionTime = InTransitionTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint.OnBecomeInactiveBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      ViewTarget                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCameraMode_SpecialEventFocalPoint::OnBecomeInactiveBP(class AActor* ViewTarget)
{
	static auto Func = Class->GetFunction("FortCameraMode_SpecialEventFocalPoint", "OnBecomeInactiveBP");

	Params::UFortCameraMode_SpecialEventFocalPoint_OnBecomeInactiveBP_Params Parms;

	Parms.ViewTarget = ViewTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint.OnBecomeActiveBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      ViewTarget                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCameraMode_SpecialEventFocalPoint::OnBecomeActiveBP(class AActor* ViewTarget)
{
	static auto Func = Class->GetFunction("FortCameraMode_SpecialEventFocalPoint", "OnBecomeActiveBP");

	Params::UFortCameraMode_SpecialEventFocalPoint_OnBecomeActiveBP_Params Parms;

	Parms.ViewTarget = ViewTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.SetBuffetBubblesIntroTargetTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  Transform                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCharacterMovementMutatorComponent::SetBuffetBubblesIntroTargetTransform(struct FTransform& Transform)
{
	static auto Func = Class->GetFunction("FortCharacterMovementMutatorComponent", "SetBuffetBubblesIntroTargetTransform");

	Params::UFortCharacterMovementMutatorComponent_SetBuffetBubblesIntroTargetTransform_Params Parms;

	Parms.Transform = Transform;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.SetBuffetBubblesInitialFollowBoxOffsetPercent
// (Final, Native, Protected, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     BoxOffsetPercent                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCharacterMovementMutatorComponent::SetBuffetBubblesInitialFollowBoxOffsetPercent(const struct FVector& BoxOffsetPercent)
{
	static auto Func = Class->GetFunction("FortCharacterMovementMutatorComponent", "SetBuffetBubblesInitialFollowBoxOffsetPercent");

	Params::UFortCharacterMovementMutatorComponent_SetBuffetBubblesInitialFollowBoxOffsetPercent_Params Parms;

	Parms.BoxOffsetPercent = BoxOffsetPercent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.SetBuffetBubblesFollowActor
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCharacterMovementMutatorComponent::SetBuffetBubblesFollowActor(class AActor* Actor)
{
	static auto Func = Class->GetFunction("FortCharacterMovementMutatorComponent", "SetBuffetBubblesFollowActor");

	Params::UFortCharacterMovementMutatorComponent_SetBuffetBubblesFollowActor_Params Parms;

	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OverrideBuffetFlyingVelocityDirectionInterpSpeed
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAsMultiplier                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCharacterMovementMutatorComponent::OverrideBuffetFlyingVelocityDirectionInterpSpeed(float Value, bool bAsMultiplier)
{
	static auto Func = Class->GetFunction("FortCharacterMovementMutatorComponent", "OverrideBuffetFlyingVelocityDirectionInterpSpeed");

	Params::UFortCharacterMovementMutatorComponent_OverrideBuffetFlyingVelocityDirectionInterpSpeed_Params Parms;

	Parms.Value = Value;
	Parms.bAsMultiplier = bAsMultiplier;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OverrideBuffetFlyingMaxSpeed
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAsMultiplier                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InterpSpeed                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCharacterMovementMutatorComponent::OverrideBuffetFlyingMaxSpeed(float Value, bool bAsMultiplier, float InterpSpeed)
{
	static auto Func = Class->GetFunction("FortCharacterMovementMutatorComponent", "OverrideBuffetFlyingMaxSpeed");

	Params::UFortCharacterMovementMutatorComponent_OverrideBuffetFlyingMaxSpeed_Params Parms;

	Parms.Value = Value;
	Parms.bAsMultiplier = bAsMultiplier;
	Parms.InterpSpeed = InterpSpeed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OnRep_BuffetFlyingRicochetReplicatedData
// (Final, Native, Private)
// Parameters:

void UFortCharacterMovementMutatorComponent::OnRep_BuffetFlyingRicochetReplicatedData()
{
	static auto Func = Class->GetFunction("FortCharacterMovementMutatorComponent", "OnRep_BuffetFlyingRicochetReplicatedData");

	Params::UFortCharacterMovementMutatorComponent_OnRep_BuffetFlyingRicochetReplicatedData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OnRep_BuffetBubblesFollowActor
// (Final, Native, Protected)
// Parameters:

void UFortCharacterMovementMutatorComponent::OnRep_BuffetBubblesFollowActor()
{
	static auto Func = Class->GetFunction("FortCharacterMovementMutatorComponent", "OnRep_BuffetBubblesFollowActor");

	Params::UFortCharacterMovementMutatorComponent_OnRep_BuffetBubblesFollowActor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OnMovementModeChanged
// (Final, Native, Private)
// Parameters:
// class ACharacter*                  Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           PreviousMovementMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              PreviousCustomMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCharacterMovementMutatorComponent::OnMovementModeChanged(class ACharacter* Character, enum class EMovementMode PreviousMovementMode, uint8 PreviousCustomMode)
{
	static auto Func = Class->GetFunction("FortCharacterMovementMutatorComponent", "OnMovementModeChanged");

	Params::UFortCharacterMovementMutatorComponent_OnMovementModeChanged_Params Parms;

	Parms.Character = Character;
	Parms.PreviousMovementMode = PreviousMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortCharacterMovementMutator.OnFortPawnChanged
// (Final, Native, Protected)
// Parameters:
// class AFortPawn*                   NewPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortCharacterMovementMutator::OnFortPawnChanged(class AFortPawn* NewPawn)
{
	static auto Func = Class->GetFunction("FortCharacterMovementMutator", "OnFortPawnChanged");

	Params::AFortCharacterMovementMutator_OnFortPawnChanged_Params Parms;

	Parms.NewPawn = NewPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.ShowCinematicWidget
// (Final, BlueprintCosmetic, Exec, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        WidgetName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_GameplayCinematic::ShowCinematicWidget(class FName WidgetName)
{
	static auto Func = Class->GetFunction("FortControllerComponent_GameplayCinematic", "ShowCinematicWidget");

	Params::UFortControllerComponent_GameplayCinematic_ShowCinematicWidget_Params Parms;

	Parms.WidgetName = WidgetName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.SetReadyForGameplay
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsReady                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_GameplayCinematic::SetReadyForGameplay(bool bIsReady)
{
	static auto Func = Class->GetFunction("FortControllerComponent_GameplayCinematic", "SetReadyForGameplay");

	Params::UFortControllerComponent_GameplayCinematic_SetReadyForGameplay_Params Parms;

	Parms.bIsReady = bIsReady;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.ServerOnGameplayIntroFinished
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:

void UFortControllerComponent_GameplayCinematic::ServerOnGameplayIntroFinished()
{
	static auto Func = Class->GetFunction("FortControllerComponent_GameplayCinematic", "ServerOnGameplayIntroFinished");

	Params::UFortControllerComponent_GameplayCinematic_ServerOnGameplayIntroFinished_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.OnRep_bIsReadyForGameplay
// (Final, Native, Protected)
// Parameters:

void UFortControllerComponent_GameplayCinematic::OnRep_bIsReadyForGameplay()
{
	static auto Func = Class->GetFunction("FortControllerComponent_GameplayCinematic", "OnRep_bIsReadyForGameplay");

	Params::UFortControllerComponent_GameplayCinematic_OnRep_bIsReadyForGameplay_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.HideHUDElementsForLoadingScreen
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bHideElements                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_GameplayCinematic::HideHUDElementsForLoadingScreen(bool bHideElements)
{
	static auto Func = Class->GetFunction("FortControllerComponent_GameplayCinematic", "HideHUDElementsForLoadingScreen");

	Params::UFortControllerComponent_GameplayCinematic_HideHUDElementsForLoadingScreen_Params Parms;

	Parms.bHideElements = bHideElements;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent.ServerHandleSpecialClientEvent
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// struct FGameplayTag                EventTag                                                         (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Count                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_SpecialEvent::ServerHandleSpecialClientEvent(struct FGameplayTag& EventTag, int32 Count)
{
	static auto Func = Class->GetFunction("FortControllerComponent_SpecialEvent", "ServerHandleSpecialClientEvent");

	Params::UFortControllerComponent_SpecialEvent_ServerHandleSpecialClientEvent_Params Parms;

	Parms.EventTag = EventTag;
	Parms.Count = Count;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent.SendSpecialClientEvent
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                EventTag                                                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Count                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_SpecialEvent::SendSpecialClientEvent(const struct FGameplayTag& EventTag, int32 Count)
{
	static auto Func = Class->GetFunction("FortControllerComponent_SpecialEvent", "SendSpecialClientEvent");

	Params::UFortControllerComponent_SpecialEvent_SendSpecialClientEvent_Params Parms;

	Parms.EventTag = EventTag;
	Parms.Count = Count;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortSpecialRelevancyActorSpawner.BP_OnActorSpawnedPerRelevancyGroup
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              InSpawnedActors                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void AFortSpecialRelevancyActorSpawner::BP_OnActorSpawnedPerRelevancyGroup(TArray<class AActor*>& InSpawnedActors)
{
	static auto Func = Class->GetFunction("FortSpecialRelevancyActorSpawner", "BP_OnActorSpawnedPerRelevancyGroup");

	Params::AFortSpecialRelevancyActorSpawner_BP_OnActorSpawnedPerRelevancyGroup_Params Parms;

	Parms.InSpawnedActors = InSpawnedActors;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateTime
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewTime                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventAudioAnalysisBaseComponent::UpdateTime(float NewTime)
{
	static auto Func = Class->GetFunction("SpecialEventAudioAnalysisBaseComponent", "UpdateTime");

	Params::USpecialEventAudioAnalysisBaseComponent_UpdateTime_Params Parms;

	Parms.NewTime = NewTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateOnset
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventAudioAnalysisBaseComponent::UpdateOnset(float Time)
{
	static auto Func = Class->GetFunction("SpecialEventAudioAnalysisBaseComponent", "UpdateOnset");

	Params::USpecialEventAudioAnalysisBaseComponent_UpdateOnset_Params Parms;

	Parms.Time = Time;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateLoudness
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventAudioAnalysisBaseComponent::UpdateLoudness(float Time)
{
	static auto Func = Class->GetFunction("SpecialEventAudioAnalysisBaseComponent", "UpdateLoudness");

	Params::USpecialEventAudioAnalysisBaseComponent_UpdateLoudness_Params Parms;

	Parms.Time = Time;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateConstantQ
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventAudioAnalysisBaseComponent::UpdateConstantQ(float Time)
{
	static auto Func = Class->GetFunction("SpecialEventAudioAnalysisBaseComponent", "UpdateConstantQ");

	Params::USpecialEventAudioAnalysisBaseComponent_UpdateConstantQ_Params Parms;

	Parms.Time = Time;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetOnsetNRT
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UOnsetNRT*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnsetNRT* USpecialEventAudioAnalysisBaseComponent::GetOnsetNRT()
{
	static auto Func = Class->GetFunction("SpecialEventAudioAnalysisBaseComponent", "GetOnsetNRT");

	Params::USpecialEventAudioAnalysisBaseComponent_GetOnsetNRT_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetLoudnessNRT
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULoudnessNRT*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULoudnessNRT* USpecialEventAudioAnalysisBaseComponent::GetLoudnessNRT()
{
	static auto Func = Class->GetFunction("SpecialEventAudioAnalysisBaseComponent", "GetLoudnessNRT");

	Params::USpecialEventAudioAnalysisBaseComponent_GetLoudnessNRT_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetCurrentNormalizedLoudness
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USpecialEventAudioAnalysisBaseComponent::GetCurrentNormalizedLoudness()
{
	static auto Func = Class->GetFunction("SpecialEventAudioAnalysisBaseComponent", "GetCurrentNormalizedLoudness");

	Params::USpecialEventAudioAnalysisBaseComponent_GetCurrentNormalizedLoudness_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetConstantQNRT
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UConstantQNRT*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UConstantQNRT* USpecialEventAudioAnalysisBaseComponent::GetConstantQNRT()
{
	static auto Func = Class->GetFunction("SpecialEventAudioAnalysisBaseComponent", "GetConstantQNRT");

	Params::USpecialEventAudioAnalysisBaseComponent_GetConstantQNRT_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent.StopHaptics
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpecialEventAudioHapticsComponent::StopHaptics()
{
	static auto Func = Class->GetFunction("SpecialEventAudioHapticsComponent", "StopHaptics");

	Params::USpecialEventAudioHapticsComponent_StopHaptics_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent.StartHaptics
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpecialEventAudioHapticsComponent::StartHaptics()
{
	static auto Func = Class->GetFunction("SpecialEventAudioHapticsComponent", "StartHaptics");

	Params::USpecialEventAudioHapticsComponent_StartHaptics_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent.AreHapticsActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventAudioHapticsComponent::AreHapticsActive()
{
	static auto Func = Class->GetFunction("SpecialEventAudioHapticsComponent", "AreHapticsActive");

	Params::USpecialEventAudioHapticsComponent_AreHapticsActive_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorInstigatorInterface.SpecialEventCursorTrace
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FHitResult                  OutHitResult                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class USpecialEventCursorPawnComponent*CursorPawnComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                CursorModeTag                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCameraComponent*            CameraComponent                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     CursorWorldDirection                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventCursorInstigatorInterface::SpecialEventCursorTrace(struct FHitResult* OutHitResult, class USpecialEventCursorPawnComponent* CursorPawnComponent, struct FGameplayTag& CursorModeTag, class UCameraComponent* CameraComponent, struct FVector& CursorWorldDirection)
{
	static auto Func = Class->GetFunction("SpecialEventCursorInstigatorInterface", "SpecialEventCursorTrace");

	Params::USpecialEventCursorInstigatorInterface_SpecialEventCursorTrace_Params Parms;

	Parms.CursorPawnComponent = CursorPawnComponent;
	Parms.CursorModeTag = CursorModeTag;
	Parms.CameraComponent = CameraComponent;
	Parms.CursorWorldDirection = CursorWorldDirection;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutHitResult != nullptr)
		*OutHitResult = Parms.OutHitResult;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.SetZoomAllowed
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInZoomAllowed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorPawnComponent::SetZoomAllowed(bool bInZoomAllowed)
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "SetZoomAllowed");

	Params::USpecialEventCursorPawnComponent_SetZoomAllowed_Params Parms;

	Parms.bInZoomAllowed = bInZoomAllowed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.SetAllowOnNonOwningClients
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bAllow                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorPawnComponent::SetAllowOnNonOwningClients(bool bAllow)
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "SetAllowOnNonOwningClients");

	Params::USpecialEventCursorPawnComponent_SetAllowOnNonOwningClients_Params Parms;

	Parms.bAllow = bAllow;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.SetAdditiveRotationAllowed
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAdditiveRotationAllowed                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorPawnComponent::SetAdditiveRotationAllowed(bool bInAdditiveRotationAllowed)
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "SetAdditiveRotationAllowed");

	Params::USpecialEventCursorPawnComponent_SetAdditiveRotationAllowed_Params Parms;

	Parms.bInAdditiveRotationAllowed = bInAdditiveRotationAllowed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ServerOnWorldLocationChanged
// (Final, Net, Native, Event, Private, NetServer, HasDefaults)
// Parameters:
// struct FVector                     WorldLocation                                                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorPawnComponent::ServerOnWorldLocationChanged(struct FVector& WorldLocation)
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "ServerOnWorldLocationChanged");

	Params::USpecialEventCursorPawnComponent_ServerOnWorldLocationChanged_Params Parms;

	Parms.WorldLocation = WorldLocation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.PushCursor
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                CursorModeTag                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     InstigatingObject                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bActivate                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorPawnComponent::PushCursor(struct FGameplayTag& CursorModeTag, class UObject* InstigatingObject, bool bActivate)
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "PushCursor");

	Params::USpecialEventCursorPawnComponent_PushCursor_Params Parms;

	Parms.CursorModeTag = CursorModeTag;
	Parms.InstigatingObject = InstigatingObject;
	Parms.bActivate = bActivate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.PopCursor
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                CursorModeTag                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     InstigatingObject                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeactivateIfStackEmpty                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorPawnComponent::PopCursor(struct FGameplayTag& CursorModeTag, class UObject* InstigatingObject, bool bDeactivateIfStackEmpty)
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "PopCursor");

	Params::USpecialEventCursorPawnComponent_PopCursor_Params Parms;

	Parms.CursorModeTag = CursorModeTag;
	Parms.InstigatingObject = InstigatingObject;
	Parms.bDeactivateIfStackEmpty = bDeactivateIfStackEmpty;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.PopAllCursorsForObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     InstigatingObject                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeactivateIfStackEmpty                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorPawnComponent::PopAllCursorsForObject(class UObject* InstigatingObject, bool bDeactivateIfStackEmpty)
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "PopAllCursorsForObject");

	Params::USpecialEventCursorPawnComponent_PopAllCursorsForObject_Params Parms;

	Parms.InstigatingObject = InstigatingObject;
	Parms.bDeactivateIfStackEmpty = bDeactivateIfStackEmpty;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnRep_ReplicatedWorldLocation
// (Final, Native, Private)
// Parameters:

void USpecialEventCursorPawnComponent::OnRep_ReplicatedWorldLocation()
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "OnRep_ReplicatedWorldLocation");

	Params::USpecialEventCursorPawnComponent_OnRep_ReplicatedWorldLocation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnRep_ReplicatedCursorStackEntry
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FSpecialEventCursorStackEntryOldCursorStackEntry                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USpecialEventCursorPawnComponent::OnRep_ReplicatedCursorStackEntry(struct FSpecialEventCursorStackEntry& OldCursorStackEntry)
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "OnRep_ReplicatedCursorStackEntry");

	Params::USpecialEventCursorPawnComponent_OnRep_ReplicatedCursorStackEntry_Params Parms;

	Parms.OldCursorStackEntry = OldCursorStackEntry;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnRep_bAllowOnNonOwningClients
// (Final, Native, Private)
// Parameters:

void USpecialEventCursorPawnComponent::OnRep_bAllowOnNonOwningClients()
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "OnRep_bAllowOnNonOwningClients");

	Params::USpecialEventCursorPawnComponent_OnRep_bAllowOnNonOwningClients_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnLocallyControlledCursorVisibilityChanged
// (Final, Native, Private, HasOutParams)
// Parameters:
// class USpecialEventCursorPawnComponent*CursorPawnComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                CursorModeTag                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldBeVisible                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorPawnComponent::OnLocallyControlledCursorVisibilityChanged(class USpecialEventCursorPawnComponent* CursorPawnComponent, struct FGameplayTag& CursorModeTag, bool bShouldBeVisible)
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "OnLocallyControlledCursorVisibilityChanged");

	Params::USpecialEventCursorPawnComponent_OnLocallyControlledCursorVisibilityChanged_Params Parms;

	Parms.CursorPawnComponent = CursorPawnComponent;
	Parms.CursorModeTag = CursorModeTag;
	Parms.bShouldBeVisible = bShouldBeVisible;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnInputMethodChanged
// (Final, Native, Private)
// Parameters:
// enum class ECommonInputType        InputType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorPawnComponent::OnInputMethodChanged(enum class ECommonInputType InputType)
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "OnInputMethodChanged");

	Params::USpecialEventCursorPawnComponent_OnInputMethodChanged_Params Parms;

	Parms.InputType = InputType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnHUDPostRender
// (Final, Native, Private)
// Parameters:
// class AHUD*                        HUD                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCanvas*                     Canvas                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorPawnComponent::OnHUDPostRender(class AHUD* HUD, class UCanvas* Canvas)
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "OnHUDPostRender");

	Params::USpecialEventCursorPawnComponent_OnHUDPostRender_Params Parms;

	Parms.HUD = HUD;
	Parms.Canvas = Canvas;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.MoveInputUpdate
// (Final, Native, Private, HasOutParams, HasDefaults)
// Parameters:
// struct FVector                     InInputVector                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorPawnComponent::MoveInputUpdate(struct FVector& InInputVector)
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "MoveInputUpdate");

	Params::USpecialEventCursorPawnComponent_MoveInputUpdate_Params Parms;

	Parms.InInputVector = InInputVector;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.LookInputUpdate
// (Final, Native, Private, HasOutParams, HasDefaults)
// Parameters:
// struct FVector                     InInputVector                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorPawnComponent::LookInputUpdate(struct FVector& InInputVector)
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "LookInputUpdate");

	Params::USpecialEventCursorPawnComponent_LookInputUpdate_Params Parms;

	Parms.InInputVector = InInputVector;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.IsZoomAllowed
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventCursorPawnComponent::IsZoomAllowed()
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "IsZoomAllowed");

	Params::USpecialEventCursorPawnComponent_IsZoomAllowed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.IsLocallyControlled
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventCursorPawnComponent::IsLocallyControlled()
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "IsLocallyControlled");

	Params::USpecialEventCursorPawnComponent_IsLocallyControlled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.IsAdditiveRotationAllowed
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventCursorPawnComponent::IsAdditiveRotationAllowed()
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "IsAdditiveRotationAllowed");

	Params::USpecialEventCursorPawnComponent_IsAdditiveRotationAllowed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.InputPressed
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FName                        ActionName                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPressed                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorPawnComponent::InputPressed(class FName& ActionName, bool bPressed)
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "InputPressed");

	Params::USpecialEventCursorPawnComponent_InputPressed_Params Parms;

	Parms.ActionName = ActionName;
	Parms.bPressed = bPressed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GyroInputUpdate
// (Final, Native, Private, HasOutParams, HasDefaults)
// Parameters:
// struct FVector                     InInputVector                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorPawnComponent::GyroInputUpdate(struct FVector& InInputVector)
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "GyroInputUpdate");

	Params::USpecialEventCursorPawnComponent_GyroInputUpdate_Params Parms;

	Parms.InInputVector = InInputVector;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetWorldLocationAndDirection
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector                     OutWorldLocation                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutWorldDirection                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventCursorPawnComponent::GetWorldLocationAndDirection(struct FVector* OutWorldLocation, struct FVector* OutWorldDirection)
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "GetWorldLocationAndDirection");

	Params::USpecialEventCursorPawnComponent_GetWorldLocationAndDirection_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutWorldLocation != nullptr)
		*OutWorldLocation = Parms.OutWorldLocation;

	if (OutWorldDirection != nullptr)
		*OutWorldDirection = Parms.OutWorldDirection;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetViewportSize
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector2D                   OutViewportSize                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventCursorPawnComponent::GetViewportSize(struct FVector2D* OutViewportSize)
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "GetViewportSize");

	Params::USpecialEventCursorPawnComponent_GetViewportSize_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutViewportSize != nullptr)
		*OutViewportSize = Parms.OutViewportSize;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetViewportLocation
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector2D                   OutViewportLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventCursorPawnComponent::GetViewportLocation(struct FVector2D* OutViewportLocation)
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "GetViewportLocation");

	Params::USpecialEventCursorPawnComponent_GetViewportLocation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutViewportLocation != nullptr)
		*OutViewportLocation = Parms.OutViewportLocation;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetViewportCenter
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector2D                   OutViewportCenter                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventCursorPawnComponent::GetViewportCenter(struct FVector2D* OutViewportCenter)
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "GetViewportCenter");

	Params::USpecialEventCursorPawnComponent_GetViewportCenter_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutViewportCenter != nullptr)
		*OutViewportCenter = Parms.OutViewportCenter;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetSpecialEventCursorPawnComponent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APawn*                       Pawn                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                CursorModeTag                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMustBeActive                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USpecialEventCursorPawnComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USpecialEventCursorPawnComponent* USpecialEventCursorPawnComponent::GetSpecialEventCursorPawnComponent(class APawn* Pawn, struct FGameplayTag& CursorModeTag, bool bMustBeActive)
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "GetSpecialEventCursorPawnComponent");

	Params::USpecialEventCursorPawnComponent_GetSpecialEventCursorPawnComponent_Params Parms;

	Parms.Pawn = Pawn;
	Parms.CursorModeTag = CursorModeTag;
	Parms.bMustBeActive = bMustBeActive;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetNormalizedLocation
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USpecialEventCursorPawnComponent::GetNormalizedLocation()
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "GetNormalizedLocation");

	Params::USpecialEventCursorPawnComponent_GetNormalizedLocation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetLocalController
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APlayerController* USpecialEventCursorPawnComponent::GetLocalController()
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "GetLocalController");

	Params::USpecialEventCursorPawnComponent_GetLocalController_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetInputType
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECommonInputType        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECommonInputType USpecialEventCursorPawnComponent::GetInputType()
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "GetInputType");

	Params::USpecialEventCursorPawnComponent_GetInputType_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCursorModeTagsForWidget
// (Final, RequiredAPI, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                 Widget                                                           (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer USpecialEventCursorPawnComponent::GetCursorModeTagsForWidget(class UUserWidget* Widget)
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "GetCursorModeTagsForWidget");

	Params::USpecialEventCursorPawnComponent_GetCursorModeTagsForWidget_Params Parms;

	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCurrentWidget
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* USpecialEventCursorPawnComponent::GetCurrentWidget()
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "GetCurrentWidget");

	Params::USpecialEventCursorPawnComponent_GetCurrentWidget_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCurrentHitResult
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FHitResult                  OutHitResult                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventCursorPawnComponent::GetCurrentHitResult(struct FHitResult* OutHitResult)
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "GetCurrentHitResult");

	Params::USpecialEventCursorPawnComponent_GetCurrentHitResult_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutHitResult != nullptr)
		*OutHitResult = Parms.OutHitResult;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCurrentCursorModeTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag USpecialEventCursorPawnComponent::GetCurrentCursorModeTag()
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "GetCurrentCursorModeTag");

	Params::USpecialEventCursorPawnComponent_GetCurrentCursorModeTag_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCenteredWidgetLocation
// (Final, RequiredAPI, BlueprintCosmetic, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                 Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ViewportLocation                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USpecialEventCursorPawnComponent::GetCenteredWidgetLocation(class UUserWidget* Widget, struct FVector2D& ViewportLocation)
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "GetCenteredWidgetLocation");

	Params::USpecialEventCursorPawnComponent_GetCenteredWidgetLocation_Params Parms;

	Parms.Widget = Widget;
	Parms.ViewportLocation = ViewportLocation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCameraComponent
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCameraComponent*            ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCameraComponent* USpecialEventCursorPawnComponent::GetCameraComponent()
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "GetCameraComponent");

	Params::USpecialEventCursorPawnComponent_GetCameraComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertWorldToViewportLocation
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector2D                   OutViewportLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     WorldLocation                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventCursorPawnComponent::ConvertWorldToViewportLocation(struct FVector2D* OutViewportLocation, struct FVector& WorldLocation)
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "ConvertWorldToViewportLocation");

	Params::USpecialEventCursorPawnComponent_ConvertWorldToViewportLocation_Params Parms;

	Parms.WorldLocation = WorldLocation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutViewportLocation != nullptr)
		*OutViewportLocation = Parms.OutViewportLocation;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertWorldToNormalizedLocation
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector2D                   OutNormalizedLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     WorldLocation                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventCursorPawnComponent::ConvertWorldToNormalizedLocation(struct FVector2D* OutNormalizedLocation, struct FVector& WorldLocation)
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "ConvertWorldToNormalizedLocation");

	Params::USpecialEventCursorPawnComponent_ConvertWorldToNormalizedLocation_Params Parms;

	Parms.WorldLocation = WorldLocation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutNormalizedLocation != nullptr)
		*OutNormalizedLocation = Parms.OutNormalizedLocation;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertViewportToWorldLocationAndDirection
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector                     OutWorldLocation                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutWorldDirection                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ViewportLocation                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventCursorPawnComponent::ConvertViewportToWorldLocationAndDirection(struct FVector* OutWorldLocation, struct FVector* OutWorldDirection, struct FVector2D& ViewportLocation)
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "ConvertViewportToWorldLocationAndDirection");

	Params::USpecialEventCursorPawnComponent_ConvertViewportToWorldLocationAndDirection_Params Parms;

	Parms.ViewportLocation = ViewportLocation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutWorldLocation != nullptr)
		*OutWorldLocation = Parms.OutWorldLocation;

	if (OutWorldDirection != nullptr)
		*OutWorldDirection = Parms.OutWorldDirection;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertViewportToNormalizedLocation
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector2D                   OutNormalizedLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ViewportLocation                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventCursorPawnComponent::ConvertViewportToNormalizedLocation(struct FVector2D* OutNormalizedLocation, struct FVector2D& ViewportLocation)
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "ConvertViewportToNormalizedLocation");

	Params::USpecialEventCursorPawnComponent_ConvertViewportToNormalizedLocation_Params Parms;

	Parms.ViewportLocation = ViewportLocation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutNormalizedLocation != nullptr)
		*OutNormalizedLocation = Parms.OutNormalizedLocation;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertNormalizedToWorldLocationAndDirection
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector                     OutWorldLocation                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutWorldDirection                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   NormalizedLocation                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventCursorPawnComponent::ConvertNormalizedToWorldLocationAndDirection(struct FVector* OutWorldLocation, struct FVector* OutWorldDirection, struct FVector2D& NormalizedLocation)
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "ConvertNormalizedToWorldLocationAndDirection");

	Params::USpecialEventCursorPawnComponent_ConvertNormalizedToWorldLocationAndDirection_Params Parms;

	Parms.NormalizedLocation = NormalizedLocation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutWorldLocation != nullptr)
		*OutWorldLocation = Parms.OutWorldLocation;

	if (OutWorldDirection != nullptr)
		*OutWorldDirection = Parms.OutWorldDirection;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertNormalizedToViewportLocation
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector2D                   OutViewportLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   NormalizedLocation                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventCursorPawnComponent::ConvertNormalizedToViewportLocation(struct FVector2D* OutViewportLocation, struct FVector2D& NormalizedLocation)
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "ConvertNormalizedToViewportLocation");

	Params::USpecialEventCursorPawnComponent_ConvertNormalizedToViewportLocation_Params Parms;

	Parms.NormalizedLocation = NormalizedLocation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutViewportLocation != nullptr)
		*OutViewportLocation = Parms.OutViewportLocation;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.CanBeVisible
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventCursorPawnComponent::CanBeVisible()
{
	static auto Func = Class->GetFunction("SpecialEventCursorPawnComponent", "CanBeVisible");

	Params::USpecialEventCursorPawnComponent_CanBeVisible_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnUnEquip
// (Final, Native, Private)
// Parameters:
// class AFortWeapon*                 Weapon                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorWeaponComponent::OnUnEquip(class AFortWeapon* Weapon)
{
	static auto Func = Class->GetFunction("SpecialEventCursorWeaponComponent", "OnUnEquip");

	Params::USpecialEventCursorWeaponComponent_OnUnEquip_Params Parms;

	Parms.Weapon = Weapon;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnRep_CursorPawnComponent
// (Final, Native, Protected)
// Parameters:

void USpecialEventCursorWeaponComponent::OnRep_CursorPawnComponent()
{
	static auto Func = Class->GetFunction("SpecialEventCursorWeaponComponent", "OnRep_CursorPawnComponent");

	Params::USpecialEventCursorWeaponComponent_OnRep_CursorPawnComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnPlayImpactFX
// (Final, Native, Private, HasOutParams)
// Parameters:
// class AFortWeapon*                 Weapon                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  HitResult                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UFXSystemComponent*          FXSystemComponent                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorWeaponComponent::OnPlayImpactFX(class AFortWeapon* Weapon, struct FHitResult& HitResult, class UFXSystemComponent* FXSystemComponent)
{
	static auto Func = Class->GetFunction("SpecialEventCursorWeaponComponent", "OnPlayImpactFX");

	Params::USpecialEventCursorWeaponComponent_OnPlayImpactFX_Params Parms;

	Parms.Weapon = Weapon;
	Parms.HitResult = HitResult;
	Parms.FXSystemComponent = FXSystemComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnGetAimRotOverride
// (Final, Native, Private, HasOutParams, HasDefaults)
// Parameters:
// class AFortWeapon*                 Weapon                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortAbilityTargetingSourceTargetingSource                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    OutOverride                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bOutExecutionResult                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorWeaponComponent::OnGetAimRotOverride(class AFortWeapon* Weapon, enum class EFortAbilityTargetingSource TargetingSource, struct FRotator* OutOverride, bool* bOutExecutionResult)
{
	static auto Func = Class->GetFunction("SpecialEventCursorWeaponComponent", "OnGetAimRotOverride");

	Params::USpecialEventCursorWeaponComponent_OnGetAimRotOverride_Params Parms;

	Parms.Weapon = Weapon;
	Parms.TargetingSource = TargetingSource;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutOverride != nullptr)
		*OutOverride = Parms.OutOverride;

	if (bOutExecutionResult != nullptr)
		*bOutExecutionResult = Parms.bOutExecutionResult;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnEquip
// (Final, Native, Private)
// Parameters:
// class AFortWeapon*                 Weapon                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorWeaponComponent::OnEquip(class AFortWeapon* Weapon)
{
	static auto Func = Class->GetFunction("SpecialEventCursorWeaponComponent", "OnEquip");

	Params::USpecialEventCursorWeaponComponent_OnEquip_Params Parms;

	Parms.Weapon = Weapon;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnBeamFired
// (Final, Native, Private, HasOutParams, HasDefaults)
// Parameters:
// class AFortWeapon*                 Weapon                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUsePersistentBeam                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFXSystemComponent*          PSC                                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     BeamOrigin                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorWeaponComponent::OnBeamFired(class AFortWeapon* Weapon, bool bUsePersistentBeam, class UFXSystemComponent* PSC, struct FVector& BeamOrigin, struct FVector& HitLocation)
{
	static auto Func = Class->GetFunction("SpecialEventCursorWeaponComponent", "OnBeamFired");

	Params::USpecialEventCursorWeaponComponent_OnBeamFired_Params Parms;

	Parms.Weapon = Weapon;
	Parms.bUsePersistentBeam = bUsePersistentBeam;
	Parms.PSC = PSC;
	Parms.BeamOrigin = BeamOrigin;
	Parms.HitLocation = HitLocation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetSpecialEventCursorPawnComponentForWeapon
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AFortWeapon*                 Weapon                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USpecialEventCursorPawnComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USpecialEventCursorPawnComponent* USpecialEventCursorWeaponComponent::GetSpecialEventCursorPawnComponentForWeapon(class AFortWeapon* Weapon)
{
	static auto Func = Class->GetFunction("SpecialEventCursorWeaponComponent", "GetSpecialEventCursorPawnComponentForWeapon");

	Params::USpecialEventCursorWeaponComponent_GetSpecialEventCursorPawnComponentForWeapon_Params Parms;

	Parms.Weapon = Weapon;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetSpecialEventCursorPawnComponentForCurrentWeapon
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AFortPlayerPawn*             Pawn                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USpecialEventCursorPawnComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USpecialEventCursorPawnComponent* USpecialEventCursorWeaponComponent::GetSpecialEventCursorPawnComponentForCurrentWeapon(class AFortPlayerPawn* Pawn)
{
	static auto Func = Class->GetFunction("SpecialEventCursorWeaponComponent", "GetSpecialEventCursorPawnComponentForCurrentWeapon");

	Params::USpecialEventCursorWeaponComponent_GetSpecialEventCursorPawnComponentForCurrentWeapon_Params Parms;

	Parms.Pawn = Pawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetCursorPawnComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USpecialEventCursorPawnComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USpecialEventCursorPawnComponent* USpecialEventCursorWeaponComponent::GetCursorPawnComponent()
{
	static auto Func = Class->GetFunction("SpecialEventCursorWeaponComponent", "GetCursorPawnComponent");

	Params::USpecialEventCursorWeaponComponent_GetCursorPawnComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetCurrentSpecialEventCursorWeaponComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AFortPlayerPawn*             Pawn                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USpecialEventCursorWeaponComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USpecialEventCursorWeaponComponent* USpecialEventCursorWeaponComponent::GetCurrentSpecialEventCursorWeaponComponent(class AFortPlayerPawn* Pawn)
{
	static auto Func = Class->GetFunction("SpecialEventCursorWeaponComponent", "GetCurrentSpecialEventCursorWeaponComponent");

	Params::USpecialEventCursorWeaponComponent_GetCurrentSpecialEventCursorWeaponComponent_Params Parms;

	Parms.Pawn = Pawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetCurrentHitResult
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// struct FHitResult                  OutHitResult                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventCursorWeaponComponent::GetCurrentHitResult(struct FHitResult* OutHitResult)
{
	static auto Func = Class->GetFunction("SpecialEventCursorWeaponComponent", "GetCurrentHitResult");

	Params::USpecialEventCursorWeaponComponent_GetCurrentHitResult_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutHitResult != nullptr)
		*OutHitResult = Parms.OutHitResult;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.StreamOutAllBuildingFoundations
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameplayLibrary::StreamOutAllBuildingFoundations(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("SpecialEventGameplayLibrary", "StreamOutAllBuildingFoundations");

	Params::USpecialEventGameplayLibrary_StreamOutAllBuildingFoundations_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.SetNextLoadingScreen
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAthenaLoadingScreenItemDefinition*LoadingScreenDefinition                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCanShowLoadingBar                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameplayLibrary::SetNextLoadingScreen(class UObject* WorldContextObject, class UAthenaLoadingScreenItemDefinition* LoadingScreenDefinition, bool bCanShowLoadingBar)
{
	static auto Func = Class->GetFunction("SpecialEventGameplayLibrary", "SetNextLoadingScreen");

	Params::USpecialEventGameplayLibrary_SetNextLoadingScreen_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.LoadingScreenDefinition = LoadingScreenDefinition;
	Parms.bCanShowLoadingBar = bCanShowLoadingBar;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.SetLODOnLandscapProxies
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForced                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InLODValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameplayLibrary::SetLODOnLandscapProxies(class UObject* WorldContextObject, bool bForced, int32 InLODValue)
{
	static auto Func = Class->GetFunction("SpecialEventGameplayLibrary", "SetLODOnLandscapProxies");

	Params::USpecialEventGameplayLibrary_SetLODOnLandscapProxies_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.bForced = bForced;
	Parms.InLODValue = InLODValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.HideSkydivingShadowProxy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameplayLibrary::HideSkydivingShadowProxy(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("SpecialEventGameplayLibrary", "HideSkydivingShadowProxy");

	Params::USpecialEventGameplayLibrary_HideSkydivingShadowProxy_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetSpecialEventScript
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ASpecialEventScript*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ASpecialEventScript* USpecialEventGameplayLibrary::GetSpecialEventScript(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("SpecialEventGameplayLibrary", "GetSpecialEventScript");

	Params::USpecialEventGameplayLibrary_GetSpecialEventScript_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetSpecialEventPlayerDisplayName
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AFortPlayerControllerAthena* LocalController                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerStateAthena*      PlayerState                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USpecialEventGameplayLibrary::GetSpecialEventPlayerDisplayName(class AFortPlayerControllerAthena* LocalController, class AFortPlayerStateAthena* PlayerState)
{
	static auto Func = Class->GetFunction("SpecialEventGameplayLibrary", "GetSpecialEventPlayerDisplayName");

	Params::USpecialEventGameplayLibrary_GetSpecialEventPlayerDisplayName_Params Parms;

	Parms.LocalController = LocalController;
	Parms.PlayerState = PlayerState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetSpecialEventMutator
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortAthenaMutator_SpecialEvent*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AFortAthenaMutator_SpecialEvent* USpecialEventGameplayLibrary::GetSpecialEventMutator(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("SpecialEventGameplayLibrary", "GetSpecialEventMutator");

	Params::USpecialEventGameplayLibrary_GetSpecialEventMutator_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetLocalPlayerLoadout
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortAthenaLoadout          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FFortAthenaLoadout USpecialEventGameplayLibrary::GetLocalPlayerLoadout(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("SpecialEventGameplayLibrary", "GetLocalPlayerLoadout");

	Params::USpecialEventGameplayLibrary_GetLocalPlayerLoadout_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetHasInfiniteSafeZonePhase
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventGameplayLibrary::GetHasInfiniteSafeZonePhase(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("SpecialEventGameplayLibrary", "GetHasInfiniteSafeZonePhase");

	Params::USpecialEventGameplayLibrary_GetHasInfiniteSafeZonePhase_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.ForceUpdateGrass
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameplayLibrary::ForceUpdateGrass(class UObject* WorldContextObject, const struct FVector& Location)
{
	static auto Func = Class->GetFunction("SpecialEventGameplayLibrary", "ForceUpdateGrass");

	Params::USpecialEventGameplayLibrary_ForceUpdateGrass_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Location = Location;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.ForceDestroyComponents
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UActorComponent*>     Components                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               bPromoteChildren                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      LogContext                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameplayLibrary::ForceDestroyComponents(TArray<class UActorComponent*>& Components, bool bPromoteChildren, const class FString& LogContext)
{
	static auto Func = Class->GetFunction("SpecialEventGameplayLibrary", "ForceDestroyComponents");

	Params::USpecialEventGameplayLibrary_ForceDestroyComponents_Params Parms;

	Parms.Components = Components;
	Parms.bPromoteChildren = bPromoteChildren;
	Parms.LogContext = LogContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.FindSpecialEventComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AController*                 Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortControllerComponent_SpecialEvent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortControllerComponent_SpecialEvent* USpecialEventGameplayLibrary::FindSpecialEventComponent(class AController* Controller)
{
	static auto Func = Class->GetFunction("SpecialEventGameplayLibrary", "FindSpecialEventComponent");

	Params::USpecialEventGameplayLibrary_FindSpecialEventComponent_Params Parms;

	Parms.Controller = Controller;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.FindGameplayCinematicComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AController*                 Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortControllerComponent_GameplayCinematic*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortControllerComponent_GameplayCinematic* USpecialEventGameplayLibrary::FindGameplayCinematicComponent(class AController* Controller)
{
	static auto Func = Class->GetFunction("SpecialEventGameplayLibrary", "FindGameplayCinematicComponent");

	Params::USpecialEventGameplayLibrary_FindGameplayCinematicComponent_Params Parms;

	Parms.Controller = Controller;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.DetachPawnFromComponent
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AFortPawn*                   Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             Component                                                        (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDetachmentRule         LocationRule                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDetachmentRule         RotationRule                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDetachmentRule         ScaleRule                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventGameplayLibrary::DetachPawnFromComponent(class AFortPawn* Pawn, class USceneComponent* Component, enum class EDetachmentRule LocationRule, enum class EDetachmentRule RotationRule, enum class EDetachmentRule ScaleRule)
{
	static auto Func = Class->GetFunction("SpecialEventGameplayLibrary", "DetachPawnFromComponent");

	Params::USpecialEventGameplayLibrary_DetachPawnFromComponent_Params Parms;

	Parms.Pawn = Pawn;
	Parms.Component = Component;
	Parms.LocationRule = LocationRule;
	Parms.RotationRule = RotationRule;
	Parms.ScaleRule = ScaleRule;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.DetachPawn
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AFortPawn*                   Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDetachmentRule         LocationRule                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDetachmentRule         RotationRule                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDetachmentRule         ScaleRule                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventGameplayLibrary::DetachPawn(class AFortPawn* Pawn, enum class EDetachmentRule LocationRule, enum class EDetachmentRule RotationRule, enum class EDetachmentRule ScaleRule)
{
	static auto Func = Class->GetFunction("SpecialEventGameplayLibrary", "DetachPawn");

	Params::USpecialEventGameplayLibrary_DetachPawn_Params Parms;

	Parms.Pawn = Pawn;
	Parms.LocationRule = LocationRule;
	Parms.RotationRule = RotationRule;
	Parms.ScaleRule = ScaleRule;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.CreateSpecialEventPlayerEliminationWorldMarker
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AFortPlayerControllerAthena* LocalController                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerStateAthena*      VictimPlayerState                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     DeathLocation                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameplayLibrary::CreateSpecialEventPlayerEliminationWorldMarker(class AFortPlayerControllerAthena* LocalController, class AFortPlayerStateAthena* VictimPlayerState, struct FVector& DeathLocation)
{
	static auto Func = Class->GetFunction("SpecialEventGameplayLibrary", "CreateSpecialEventPlayerEliminationWorldMarker");

	Params::USpecialEventGameplayLibrary_CreateSpecialEventPlayerEliminationWorldMarker_Params Parms;

	Parms.LocalController = LocalController;
	Parms.VictimPlayerState = VictimPlayerState;
	Parms.DeathLocation = DeathLocation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.AttachPawnToComponent
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AFortPawn*                   Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             Component                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SocketName                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAttachmentRule         LocationRule                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAttachmentRule         RotationRule                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAttachmentRule         ScaleRule                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWeldSimulatedBodies                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventGameplayLibrary::AttachPawnToComponent(class AFortPawn* Pawn, class USceneComponent* Component, class FName SocketName, enum class EAttachmentRule LocationRule, enum class EAttachmentRule RotationRule, enum class EAttachmentRule ScaleRule, bool bWeldSimulatedBodies)
{
	static auto Func = Class->GetFunction("SpecialEventGameplayLibrary", "AttachPawnToComponent");

	Params::USpecialEventGameplayLibrary_AttachPawnToComponent_Params Parms;

	Parms.Pawn = Pawn;
	Parms.Component = Component;
	Parms.SocketName = SocketName;
	Parms.LocationRule = LocationRule;
	Parms.RotationRule = RotationRule;
	Parms.ScaleRule = ScaleRule;
	Parms.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.AddSpecialEventRecentElimination
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerStateAthena*      PlayerState                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameplayLibrary::AddSpecialEventRecentElimination(struct FVector& Location, class AFortPlayerStateAthena* PlayerState)
{
	static auto Func = Class->GetFunction("SpecialEventGameplayLibrary", "AddSpecialEventRecentElimination");

	Params::USpecialEventGameplayLibrary_AddSpecialEventRecentElimination_Params Parms;

	Parms.Location = Location;
	Parms.PlayerState = PlayerState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.AddSpecialEventKillFeedEntry
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerStateAthena*      VictimPlayerState                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerStateAthena*      KillerPlayerState                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        NonPlayerVictimName                                              (ConstParm, Parm, NativeAccessSpecifierPublic)
// class FText                        NonPlayerKillerName                                              (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FGameplayTag                DeathCauseTag                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDeathCauseReason       DeathCauseReason                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Distance                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameplayLibrary::AddSpecialEventKillFeedEntry(class UObject* WorldContextObject, class AFortPlayerStateAthena* VictimPlayerState, class AFortPlayerStateAthena* KillerPlayerState, class FText NonPlayerVictimName, class FText NonPlayerKillerName, struct FGameplayTag& DeathCauseTag, enum class EDeathCauseReason DeathCauseReason, float Distance)
{
	static auto Func = Class->GetFunction("SpecialEventGameplayLibrary", "AddSpecialEventKillFeedEntry");

	Params::USpecialEventGameplayLibrary_AddSpecialEventKillFeedEntry_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.VictimPlayerState = VictimPlayerState;
	Parms.KillerPlayerState = KillerPlayerState;
	Parms.NonPlayerVictimName = NonPlayerVictimName;
	Parms.NonPlayerKillerName = NonPlayerKillerName;
	Parms.DeathCauseTag = DeathCauseTag;
	Parms.DeathCauseReason = DeathCauseReason;
	Parms.Distance = Distance;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.FortAsyncAction_GameplayCinematicComponentReady.FindGameplayCinematicComponentAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AController*                 Conroller                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAsyncAction_GameplayCinematicComponentReady*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAsyncAction_GameplayCinematicComponentReady* UFortAsyncAction_GameplayCinematicComponentReady::FindGameplayCinematicComponentAsync(class AController* Conroller)
{
	static auto Func = Class->GetFunction("FortAsyncAction_GameplayCinematicComponentReady", "FindGameplayCinematicComponentAsync");

	Params::UFortAsyncAction_GameplayCinematicComponentReady_FindGameplayCinematicComponentAsync_Params Parms;

	Parms.Conroller = Conroller;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SpecialEventGameUserSettings_ToggleDebug
// (Final, BlueprintCosmetic, Exec, Native, Public)
// Parameters:

void USpecialEventGameUserSettingsControllerComponent::SpecialEventGameUserSettings_ToggleDebug()
{
	static auto Func = Class->GetFunction("SpecialEventGameUserSettingsControllerComponent", "SpecialEventGameUserSettings_ToggleDebug");

	Params::USpecialEventGameUserSettingsControllerComponent_SpecialEventGameUserSettings_ToggleDebug_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SpecialEventGameUserSettings_SetData
// (Final, BlueprintCosmetic, Exec, Native, Public)
// Parameters:
// class FString                      Data                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameUserSettingsControllerComponent::SpecialEventGameUserSettings_SetData(const class FString& Data)
{
	static auto Func = Class->GetFunction("SpecialEventGameUserSettingsControllerComponent", "SpecialEventGameUserSettings_SetData");

	Params::USpecialEventGameUserSettingsControllerComponent_SpecialEventGameUserSettings_SetData_Params Parms;

	Parms.Data = Data;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SpecialEventGameUserSettings_LogData
// (Final, BlueprintCosmetic, Exec, Native, Public, Const)
// Parameters:

void USpecialEventGameUserSettingsControllerComponent::SpecialEventGameUserSettings_LogData()
{
	static auto Func = Class->GetFunction("SpecialEventGameUserSettingsControllerComponent", "SpecialEventGameUserSettings_LogData");

	Params::USpecialEventGameUserSettingsControllerComponent_SpecialEventGameUserSettings_LogData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SpecialEventGameUserSettings_ClearData
// (Final, BlueprintCosmetic, Exec, Native, Public)
// Parameters:

void USpecialEventGameUserSettingsControllerComponent::SpecialEventGameUserSettings_ClearData()
{
	static auto Func = Class->GetFunction("SpecialEventGameUserSettingsControllerComponent", "SpecialEventGameUserSettings_ClearData");

	Params::USpecialEventGameUserSettingsControllerComponent_SpecialEventGameUserSettings_ClearData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SetSavingBlocked
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bBlocked                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameUserSettingsControllerComponent::SetSavingBlocked(bool bBlocked)
{
	static auto Func = Class->GetFunction("SpecialEventGameUserSettingsControllerComponent", "SetSavingBlocked");

	Params::USpecialEventGameUserSettingsControllerComponent_SetSavingBlocked_Params Parms;

	Parms.bBlocked = bBlocked;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SetData
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Data                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowSave                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSaveNow                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameUserSettingsControllerComponent::SetData(const class FString& Data, bool bAllowSave, bool bSaveNow)
{
	static auto Func = Class->GetFunction("SpecialEventGameUserSettingsControllerComponent", "SetData");

	Params::USpecialEventGameUserSettingsControllerComponent_SetData_Params Parms;

	Parms.Data = Data;
	Parms.bAllowSave = bAllowSave;
	Parms.bSaveNow = bSaveNow;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.ParseLoadedData
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class FString                      Data                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameUserSettingsControllerComponent::ParseLoadedData(const class FString& Data)
{
	static auto Func = Class->GetFunction("SpecialEventGameUserSettingsControllerComponent", "ParseLoadedData");

	Params::USpecialEventGameUserSettingsControllerComponent_ParseLoadedData_Params Parms;

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.GetSpecialEventGameUserSettingsControllerComponent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USpecialEventGameUserSettingsControllerComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USpecialEventGameUserSettingsControllerComponent* USpecialEventGameUserSettingsControllerComponent::GetSpecialEventGameUserSettingsControllerComponent(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("SpecialEventGameUserSettingsControllerComponent", "GetSpecialEventGameUserSettingsControllerComponent");

	Params::USpecialEventGameUserSettingsControllerComponent_GetSpecialEventGameUserSettingsControllerComponent_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.GetData
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// enum class ESpecialEventGameUserSettingsResultOutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutData                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameUserSettingsControllerComponent::GetData(enum class ESpecialEventGameUserSettingsResult* OutResult, class FString* OutData)
{
	static auto Func = Class->GetFunction("SpecialEventGameUserSettingsControllerComponent", "GetData");

	Params::USpecialEventGameUserSettingsControllerComponent_GetData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	if (OutData != nullptr)
		*OutData = Parms.OutData;

}


// Function SpecialEventGameplayRuntime.FortAsyncAction_SpecialEventGameUserSettingsReady.SpecialEventGameUserSettingsReadyAsync
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAsyncAction_SpecialEventGameUserSettingsReady*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAsyncAction_SpecialEventGameUserSettingsReady* UFortAsyncAction_SpecialEventGameUserSettingsReady::SpecialEventGameUserSettingsReadyAsync(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("FortAsyncAction_SpecialEventGameUserSettingsReady", "SpecialEventGameUserSettingsReadyAsync");

	Params::UFortAsyncAction_SpecialEventGameUserSettingsReady_SpecialEventGameUserSettingsReadyAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventPhase.SetHUDElementVisibility
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       HUDElementTags                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bHideElements                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASpecialEventPhase::SetHUDElementVisibility(struct FGameplayTagContainer& HUDElementTags, bool bHideElements)
{
	static auto Func = Class->GetFunction("SpecialEventPhase", "SetHUDElementVisibility");

	Params::ASpecialEventPhase_SetHUDElementVisibility_Params Parms;

	Parms.HUDElementTags = HUDElementTags;
	Parms.bHideElements = bHideElements;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventPhase.PrePhaseActivation_Server
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASpecialEventPhase::PrePhaseActivation_Server()
{
	static auto Func = Class->GetFunction("SpecialEventPhase", "PrePhaseActivation_Server");

	Params::ASpecialEventPhase_PrePhaseActivation_Server_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.SpecialEventPhase.OnRep_PhaseState
// (Final, Native, Protected)
// Parameters:

void ASpecialEventPhase::OnRep_PhaseState()
{
	static auto Func = Class->GetFunction("SpecialEventPhase", "OnRep_PhaseState");

	Params::ASpecialEventPhase_OnRep_PhaseState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseFinished
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void ASpecialEventPhase::OnPhaseFinished()
{
	static auto Func = Class->GetFunction("SpecialEventPhase", "OnPhaseFinished");

	Params::ASpecialEventPhase_OnPhaseFinished_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseDeactivation_Server
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASpecialEventPhase::OnPhaseDeactivation_Server()
{
	static auto Func = Class->GetFunction("SpecialEventPhase", "OnPhaseDeactivation_Server");

	Params::ASpecialEventPhase_OnPhaseDeactivation_Server_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseDeactivation_Client
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASpecialEventPhase::OnPhaseDeactivation_Client()
{
	static auto Func = Class->GetFunction("SpecialEventPhase", "OnPhaseDeactivation_Client");

	Params::ASpecialEventPhase_OnPhaseDeactivation_Client_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseActivation_Server
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASpecialEventPhase::OnPhaseActivation_Server()
{
	static auto Func = Class->GetFunction("SpecialEventPhase", "OnPhaseActivation_Server");

	Params::ASpecialEventPhase_OnPhaseActivation_Server_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseActivation_Client
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASpecialEventPhase::OnPhaseActivation_Client()
{
	static auto Func = Class->GetFunction("SpecialEventPhase", "OnPhaseActivation_Client");

	Params::ASpecialEventPhase_OnPhaseActivation_Client_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.SpecialEventPhase.GetPhaseTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag ASpecialEventPhase::GetPhaseTag()
{
	static auto Func = Class->GetFunction("SpecialEventPhase", "GetPhaseTag");

	Params::ASpecialEventPhase_GetPhaseTag_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventPhase.DebugActivatePhase
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void ASpecialEventPhase::DebugActivatePhase()
{
	static auto Func = Class->GetFunction("SpecialEventPhase", "DebugActivatePhase");

	Params::ASpecialEventPhase_DebugActivatePhase_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventPlayerMannequin.RegisterWithSpecialEventMutator
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void ASpecialEventPlayerMannequin::RegisterWithSpecialEventMutator()
{
	static auto Func = Class->GetFunction("SpecialEventPlayerMannequin", "RegisterWithSpecialEventMutator");

	Params::ASpecialEventPlayerMannequin_RegisterWithSpecialEventMutator_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventPlayerMannequin.HandleOnMutatorAdded
// (Final, Native, Protected)
// Parameters:
// class AFortGameplayMutator*        NewMutator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASpecialEventPlayerMannequin::HandleOnMutatorAdded(class AFortGameplayMutator* NewMutator)
{
	static auto Func = Class->GetFunction("SpecialEventPlayerMannequin", "HandleOnMutatorAdded");

	Params::ASpecialEventPlayerMannequin_HandleOnMutatorAdded_Params Parms;

	Parms.NewMutator = NewMutator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventPlayerMannequin.DestroyUnusedSkeletalMeshComponents
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void ASpecialEventPlayerMannequin::DestroyUnusedSkeletalMeshComponents()
{
	static auto Func = Class->GetFunction("SpecialEventPlayerMannequin", "DestroyUnusedSkeletalMeshComponents");

	Params::ASpecialEventPlayerMannequin_DestroyUnusedSkeletalMeshComponents_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventRewindComponent.TryStartRewinding
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                              Duration                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PlaybackSpeed                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventRewindComponent::TryStartRewinding(float Duration, float PlaybackSpeed)
{
	static auto Func = Class->GetFunction("SpecialEventRewindComponent", "TryStartRewinding");

	Params::USpecialEventRewindComponent_TryStartRewinding_Params Parms;

	Parms.Duration = Duration;
	Parms.PlaybackSpeed = PlaybackSpeed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventRewindComponent.OnRep_StateData
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FSpecialEventRewindComponentStateDataOldStateData                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USpecialEventRewindComponent::OnRep_StateData(struct FSpecialEventRewindComponentStateData& OldStateData)
{
	static auto Func = Class->GetFunction("SpecialEventRewindComponent", "OnRep_StateData");

	Params::USpecialEventRewindComponent_OnRep_StateData_Params Parms;

	Parms.OldStateData = OldStateData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventRewindComponent_PlayerPawn.OnServerLanded
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void USpecialEventRewindComponent_PlayerPawn::OnServerLanded(struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("SpecialEventRewindComponent_PlayerPawn", "OnServerLanded");

	Params::USpecialEventRewindComponent_PlayerPawn_OnServerLanded_Params Parms;

	Parms.Hit = Hit;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventScript.UpdateMasterSequence
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASpecialEventScript::UpdateMasterSequence(float Time)
{
	static auto Func = Class->GetFunction("SpecialEventScript", "UpdateMasterSequence");

	Params::ASpecialEventScript_UpdateMasterSequence_Params Parms;

	Parms.Time = Time;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventScript.StartEventAtIndex
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InStartingIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASpecialEventScript::StartEventAtIndex(int32 InStartingIndex)
{
	static auto Func = Class->GetFunction("SpecialEventScript", "StartEventAtIndex");

	Params::ASpecialEventScript_StartEventAtIndex_Params Parms;

	Parms.InStartingIndex = InStartingIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventScript.SetLocalPlayersSignificantForSpecialEventSequence
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// bool                               bIsSignificant                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASpecialEventScript::SetLocalPlayersSignificantForSpecialEventSequence(bool bIsSignificant)
{
	static auto Func = Class->GetFunction("SpecialEventScript", "SetLocalPlayersSignificantForSpecialEventSequence");

	Params::ASpecialEventScript_SetLocalPlayersSignificantForSpecialEventSequence_Params Parms;

	Parms.bIsSignificant = bIsSignificant;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventScript.OnRep_ReplicatedActivePhaseIndex
// (Final, Native, Protected)
// Parameters:

void ASpecialEventScript::OnRep_ReplicatedActivePhaseIndex()
{
	static auto Func = Class->GetFunction("SpecialEventScript", "OnRep_ReplicatedActivePhaseIndex");

	Params::ASpecialEventScript_OnRep_ReplicatedActivePhaseIndex_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventScript.GetActivePhaseIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ASpecialEventScript::GetActivePhaseIndex()
{
	static auto Func = Class->GetFunction("SpecialEventScript", "GetActivePhaseIndex");

	Params::ASpecialEventScript_GetActivePhaseIndex_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventScript.BP_OnScriptReady
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASpecialEventScript::BP_OnScriptReady()
{
	static auto Func = Class->GetFunction("SpecialEventScript", "BP_OnScriptReady");

	Params::ASpecialEventScript_BP_OnScriptReady_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.SpecialEventScript.BP_OnScriptFinished
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASpecialEventScript::BP_OnScriptFinished()
{
	static auto Func = Class->GetFunction("SpecialEventScript", "BP_OnScriptFinished");

	Params::ASpecialEventScript_BP_OnScriptFinished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.SpecialEventScript.AttemptStartNextPhase
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                CurrentPhaseTag                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASpecialEventScript::AttemptStartNextPhase(const struct FGameplayTag& CurrentPhaseTag)
{
	static auto Func = Class->GetFunction("SpecialEventScript", "AttemptStartNextPhase");

	Params::ASpecialEventScript_AttemptStartNextPhase_Params Parms;

	Parms.CurrentPhaseTag = CurrentPhaseTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventScript.AttemptFinishPhase
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                PhaseTag                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASpecialEventScript::AttemptFinishPhase(const struct FGameplayTag& PhaseTag)
{
	static auto Func = Class->GetFunction("SpecialEventScript", "AttemptFinishPhase");

	Params::ASpecialEventScript_AttemptFinishPhase_Params Parms;

	Parms.PhaseTag = PhaseTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.OnRep_RootStartTime
// (Final, Native, Protected)
// Parameters:

void ASpecialEventScriptMeshActor::OnRep_RootStartTime()
{
	static auto Func = Class->GetFunction("SpecialEventScriptMeshActor", "OnRep_RootStartTime");

	Params::ASpecialEventScriptMeshActor_OnRep_RootStartTime_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootStartEvent
// (Final, Exec, Native, Public)
// Parameters:

void ASpecialEventScriptMeshActor::MeshRootStartEvent()
{
	static auto Func = Class->GetFunction("SpecialEventScriptMeshActor", "MeshRootStartEvent");

	Params::ASpecialEventScriptMeshActor_MeshRootStartEvent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootStartCalendarTimerOnly
// (Final, Exec, Native, Public)
// Parameters:

void ASpecialEventScriptMeshActor::MeshRootStartCalendarTimerOnly()
{
	static auto Func = Class->GetFunction("SpecialEventScriptMeshActor", "MeshRootStartCalendarTimerOnly");

	Params::ASpecialEventScriptMeshActor_MeshRootStartCalendarTimerOnly_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootStartCalendarTimer
// (Final, Exec, Native, Public)
// Parameters:

void ASpecialEventScriptMeshActor::MeshRootStartCalendarTimer()
{
	static auto Func = Class->GetFunction("SpecialEventScriptMeshActor", "MeshRootStartCalendarTimer");

	Params::ASpecialEventScriptMeshActor_MeshRootStartCalendarTimer_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootResetEvent
// (Final, Exec, Native, Public)
// Parameters:

void ASpecialEventScriptMeshActor::MeshRootResetEvent()
{
	static auto Func = Class->GetFunction("SpecialEventScriptMeshActor", "MeshRootResetEvent");

	Params::ASpecialEventScriptMeshActor_MeshRootResetEvent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootLogCalendarTimer
// (Final, Exec, Native, Public)
// Parameters:

void ASpecialEventScriptMeshActor::MeshRootLogCalendarTimer()
{
	static auto Func = Class->GetFunction("SpecialEventScriptMeshActor", "MeshRootLogCalendarTimer");

	Params::ASpecialEventScriptMeshActor_MeshRootLogCalendarTimer_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootClearCalendarTimer
// (Final, Exec, Native, Public)
// Parameters:

void ASpecialEventScriptMeshActor::MeshRootClearCalendarTimer()
{
	static auto Func = Class->GetFunction("SpecialEventScriptMeshActor", "MeshRootClearCalendarTimer");

	Params::ASpecialEventScriptMeshActor_MeshRootClearCalendarTimer_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialEventStatComponent.GetStat
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               bOutValid                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                LookupTag                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSpecialEventStatArrayEntry ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FSpecialEventStatArrayEntry USpecialEventStatComponent::GetStat(bool* bOutValid, const struct FGameplayTag& LookupTag)
{
	static auto Func = Class->GetFunction("SpecialEventStatComponent", "GetStat");

	Params::USpecialEventStatComponent_GetStat_Params Parms;

	Parms.LookupTag = LookupTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (bOutValid != nullptr)
		*bOutValid = Parms.bOutValid;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventStatComponent.GetSpecialEventStat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               bOutValid                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                LookupTag                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSpecialEventStatArrayEntry ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FSpecialEventStatArrayEntry USpecialEventStatComponent::GetSpecialEventStat(bool* bOutValid, class AActor* Actor, const struct FGameplayTag& LookupTag)
{
	static auto Func = Class->GetFunction("SpecialEventStatComponent", "GetSpecialEventStat");

	Params::USpecialEventStatComponent_GetSpecialEventStat_Params Parms;

	Parms.Actor = Actor;
	Parms.LookupTag = LookupTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (bOutValid != nullptr)
		*bOutValid = Parms.bOutValid;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventStatComponent.AdjustStat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                LookupTag                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Adjustment                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLogError                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventStatComponent::AdjustStat(const struct FGameplayTag& LookupTag, float Adjustment, bool bLogError)
{
	static auto Func = Class->GetFunction("SpecialEventStatComponent", "AdjustStat");

	Params::USpecialEventStatComponent_AdjustStat_Params Parms;

	Parms.LookupTag = LookupTag;
	Parms.Adjustment = Adjustment;
	Parms.bLogError = bLogError;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventStatComponent.AdjustSpecialEventStat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                LookupTag                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Adjustment                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventStatComponent::AdjustSpecialEventStat(class AActor* Actor, const struct FGameplayTag& LookupTag, float Adjustment)
{
	static auto Func = Class->GetFunction("SpecialEventStatComponent", "AdjustSpecialEventStat");

	Params::USpecialEventStatComponent_AdjustSpecialEventStat_Params Parms;

	Parms.Actor = Actor;
	Parms.LookupTag = LookupTag;
	Parms.Adjustment = Adjustment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.DamageRecordEntry.OnRep_DamageTotal
// (Final, Native, Public)
// Parameters:

void UDamageRecordEntry::OnRep_DamageTotal()
{
	static auto Func = Class->GetFunction("DamageRecordEntry", "OnRep_DamageTotal");

	Params::UDamageRecordEntry_OnRep_DamageTotal_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.OnKilled
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerState*            KillingPlayerState                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RelevancyGroupIndex                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialRelevancyHealthComponent::OnKilled(class AFortPlayerState* KillingPlayerState, int32 RelevancyGroupIndex)
{
	static auto Func = Class->GetFunction("SpecialRelevancyHealthComponent", "OnKilled");

	Params::USpecialRelevancyHealthComponent_OnKilled_Params Parms;

	Parms.KillingPlayerState = KillingPlayerState;
	Parms.RelevancyGroupIndex = RelevancyGroupIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.OnDamaged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerState*            DamagingPlayerState                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RelevancyGroupIndex                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DealtDamage                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ActualDealtDamage                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TotalDamage                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DealtDamagePercent                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ActualDealtDamagePercent                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TotalDamagePercent                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxHealth                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bKilled                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialRelevancyHealthComponent::OnDamaged(class AFortPlayerState* DamagingPlayerState, int32 RelevancyGroupIndex, float DealtDamage, float ActualDealtDamage, float TotalDamage, float DealtDamagePercent, float ActualDealtDamagePercent, float TotalDamagePercent, float MaxHealth, bool bKilled)
{
	static auto Func = Class->GetFunction("SpecialRelevancyHealthComponent", "OnDamaged");

	Params::USpecialRelevancyHealthComponent_OnDamaged_Params Parms;

	Parms.DamagingPlayerState = DamagingPlayerState;
	Parms.RelevancyGroupIndex = RelevancyGroupIndex;
	Parms.DealtDamage = DealtDamage;
	Parms.ActualDealtDamage = ActualDealtDamage;
	Parms.TotalDamage = TotalDamage;
	Parms.DealtDamagePercent = DealtDamagePercent;
	Parms.ActualDealtDamagePercent = ActualDealtDamagePercent;
	Parms.TotalDamagePercent = TotalDamagePercent;
	Parms.MaxHealth = MaxHealth;
	Parms.bKilled = bKilled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.GetHealthPercentFromRelevancyIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USpecialRelevancyHealthComponent::GetHealthPercentFromRelevancyIndex(int32 Index)
{
	static auto Func = Class->GetFunction("SpecialRelevancyHealthComponent", "GetHealthPercentFromRelevancyIndex");

	Params::USpecialRelevancyHealthComponent_GetHealthPercentFromRelevancyIndex_Params Parms;

	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.GetHealthPercent
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      RelevancyActor                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USpecialRelevancyHealthComponent::GetHealthPercent(class AActor* RelevancyActor)
{
	static auto Func = Class->GetFunction("SpecialRelevancyHealthComponent", "GetHealthPercent");

	Params::USpecialRelevancyHealthComponent_GetHealthPercent_Params Parms;

	Parms.RelevancyActor = RelevancyActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.GetHealthFromRelevancyIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USpecialRelevancyHealthComponent::GetHealthFromRelevancyIndex(int32 Index)
{
	static auto Func = Class->GetFunction("SpecialRelevancyHealthComponent", "GetHealthFromRelevancyIndex");

	Params::USpecialRelevancyHealthComponent_GetHealthFromRelevancyIndex_Params Parms;

	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.GetHealth
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      RelevancyActor                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USpecialRelevancyHealthComponent::GetHealth(class AActor* RelevancyActor)
{
	static auto Func = Class->GetFunction("SpecialRelevancyHealthComponent", "GetHealth");

	Params::USpecialRelevancyHealthComponent_GetHealth_Params Parms;

	Parms.RelevancyActor = RelevancyActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.ClientGetHealthPercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USpecialRelevancyHealthComponent::ClientGetHealthPercent()
{
	static auto Func = Class->GetFunction("SpecialRelevancyHealthComponent", "ClientGetHealthPercent");

	Params::USpecialRelevancyHealthComponent_ClientGetHealthPercent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.ClientGetHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USpecialRelevancyHealthComponent::ClientGetHealth()
{
	static auto Func = Class->GetFunction("SpecialRelevancyHealthComponent", "ClientGetHealth");

	Params::USpecialRelevancyHealthComponent_ClientGetHealth_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
