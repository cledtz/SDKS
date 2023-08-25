#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEventTODM
// (Actor)

class UClass* UFortAthenaMutator_SpecialEventTODM::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_SpecialEventTODM");

	return Clss;
}


// FortAthenaMutator_SpecialEventTODM SpecialEventGameplayRuntime.Default__FortAthenaMutator_SpecialEventTODM
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaMutator_SpecialEventTODM* UFortAthenaMutator_SpecialEventTODM::GetDefaultObj()
{
	static class UFortAthenaMutator_SpecialEventTODM* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaMutator_SpecialEventTODM*>(UFortAthenaMutator_SpecialEventTODM::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEventTODM.OnPhaseActivated
// (Final, Native, Private)
// Parameters:
// class USpecialEventScript*         InSpecialEventScript                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USpecialEventPhase*          InSpecialEventPhase                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEventTODM::OnPhaseActivated(class USpecialEventScript* InSpecialEventScript, class USpecialEventPhase* InSpecialEventPhase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEventTODM", "OnPhaseActivated");

	Params::UFortAthenaMutator_SpecialEventTODM_OnPhaseActivated_Params Parms{};

	Parms.InSpecialEventScript = InSpecialEventScript;
	Parms.InSpecialEventPhase = InSpecialEventPhase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.FortCheatManager_DestroyActorsAndComponents
// (None)

class UClass* UFortCheatManager_DestroyActorsAndComponents::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCheatManager_DestroyActorsAndComponents");

	return Clss;
}


// FortCheatManager_DestroyActorsAndComponents SpecialEventGameplayRuntime.Default__FortCheatManager_DestroyActorsAndComponents
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCheatManager_DestroyActorsAndComponents* UFortCheatManager_DestroyActorsAndComponents::GetDefaultObj()
{
	static class UFortCheatManager_DestroyActorsAndComponents* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCheatManager_DestroyActorsAndComponents*>(UFortCheatManager_DestroyActorsAndComponents::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.FortCheatManager_DestroyActorsAndComponents.DestroyActorsAndComponentsMutator_SetActorDefinitionsEnabled
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FString                      TagString                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_DestroyActorsAndComponents::DestroyActorsAndComponentsMutator_SetActorDefinitionsEnabled(const class FString& TagString, bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_DestroyActorsAndComponents", "DestroyActorsAndComponentsMutator_SetActorDefinitionsEnabled");

	Params::UFortCheatManager_DestroyActorsAndComponents_DestroyActorsAndComponentsMutator_SetActorDefinitionsEnabled_Params Parms{};

	Parms.TagString = TagString;
	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_DestroyActorsAndComponents.DestroyActorsAndComponentsMutator_ListActorComponents
// (Final, Exec, Native, Public, Const)
// Parameters:
// class FString                      InActorName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_DestroyActorsAndComponents::DestroyActorsAndComponentsMutator_ListActorComponents(const class FString& InActorName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_DestroyActorsAndComponents", "DestroyActorsAndComponentsMutator_ListActorComponents");

	Params::UFortCheatManager_DestroyActorsAndComponents_DestroyActorsAndComponentsMutator_ListActorComponents_Params Parms{};

	Parms.InActorName = InActorName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents
// (Actor)

class UClass* UFortAthenaMutator_DestroyActorsAndComponents::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_DestroyActorsAndComponents");

	return Clss;
}


// FortAthenaMutator_DestroyActorsAndComponents SpecialEventGameplayRuntime.Default__FortAthenaMutator_DestroyActorsAndComponents
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaMutator_DestroyActorsAndComponents* UFortAthenaMutator_DestroyActorsAndComponents::GetDefaultObj()
{
	static class UFortAthenaMutator_DestroyActorsAndComponents* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaMutator_DestroyActorsAndComponents*>(UFortAthenaMutator_DestroyActorsAndComponents::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.SetActorDefinitionsEnabled
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       InTags                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_DestroyActorsAndComponents::SetActorDefinitionsEnabled(struct FGameplayTagContainer& InTags, bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_DestroyActorsAndComponents", "SetActorDefinitionsEnabled");

	Params::UFortAthenaMutator_DestroyActorsAndComponents_SetActorDefinitionsEnabled_Params Parms{};

	Parms.InTags = InTags;
	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.PermanentlyDisableActorDefinitions
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       InTags                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaMutator_DestroyActorsAndComponents::PermanentlyDisableActorDefinitions(struct FGameplayTagContainer& InTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_DestroyActorsAndComponents", "PermanentlyDisableActorDefinitions");

	Params::UFortAthenaMutator_DestroyActorsAndComponents_PermanentlyDisableActorDefinitions_Params Parms{};

	Parms.InTags = InTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.OnTrackedActorDestroyed
// (Final, Native, Private)
// Parameters:
// class UActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_DestroyActorsAndComponents::OnTrackedActorDestroyed(class UActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_DestroyActorsAndComponents", "OnTrackedActorDestroyed");

	Params::UFortAthenaMutator_DestroyActorsAndComponents_OnTrackedActorDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.OnRep_ActorDefinitions
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<struct FDestroyActorsAndComponentsMutator_ActorDefinition>OldActorDefinitions                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaMutator_DestroyActorsAndComponents::OnRep_ActorDefinitions(TArray<struct FDestroyActorsAndComponentsMutator_ActorDefinition>& OldActorDefinitions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_DestroyActorsAndComponents", "OnRep_ActorDefinitions");

	Params::UFortAthenaMutator_DestroyActorsAndComponents_OnRep_ActorDefinitions_Params Parms{};

	Parms.OldActorDefinitions = OldActorDefinitions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.OnActorSpawned
// (Final, Native, Private)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_DestroyActorsAndComponents::OnActorSpawned(class UActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_DestroyActorsAndComponents", "OnActorSpawned");

	Params::UFortAthenaMutator_DestroyActorsAndComponents_OnActorSpawned_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy
// (None)

class UClass* UFortCheatManager_FakeKillRelevancy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCheatManager_FakeKillRelevancy");

	return Clss;
}


// FortCheatManager_FakeKillRelevancy SpecialEventGameplayRuntime.Default__FortCheatManager_FakeKillRelevancy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCheatManager_FakeKillRelevancy* UFortCheatManager_FakeKillRelevancy::GetDefaultObj()
{
	static class UFortCheatManager_FakeKillRelevancy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCheatManager_FakeKillRelevancy*>(UFortCheatManager_FakeKillRelevancy::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_FakeKillRelevancy", "FakeKillRelevancyTestAlgorithm");

	Params::UFortCheatManager_FakeKillRelevancy_FakeKillRelevancyTestAlgorithm_Params Parms{};

	Parms.NumPlayers = NumPlayers;
	Parms.MaxPlayersRemainingAfterPhases = MaxPlayersRemainingAfterPhases;
	Parms.MinSquadSize = MinSquadSize;
	Parms.MaxSquadSize = MaxSquadSize;
	Parms.Iterations = Iterations;
	Parms.LogVerbosity = LogVerbosity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyStartNextWave
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortCheatManager_FakeKillRelevancy::FakeKillRelevancyStartNextWave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_FakeKillRelevancy", "FakeKillRelevancyStartNextWave");

	Params::UFortCheatManager_FakeKillRelevancy_FakeKillRelevancyStartNextWave_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_FakeKillRelevancy", "FakeKillRelevancySetUpPhase");

	Params::UFortCheatManager_FakeKillRelevancy_FakeKillRelevancySetUpPhase_Params Parms{};

	Parms.MaxPlayersRemaining = MaxPlayersRemaining;
	Parms.ReasonGameplayTagString = ReasonGameplayTagString;
	Parms.NumWaves = NumWaves;
	Parms.RelevancyDelay = RelevancyDelay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyReset
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortCheatManager_FakeKillRelevancy::FakeKillRelevancyReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_FakeKillRelevancy", "FakeKillRelevancyReset");

	Params::UFortCheatManager_FakeKillRelevancy_FakeKillRelevancyReset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyDebug
// (Final, Exec, Native, Public)
// Parameters:
// float                              TextScale                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_FakeKillRelevancy::FakeKillRelevancyDebug(float TextScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_FakeKillRelevancy", "FakeKillRelevancyDebug");

	Params::UFortCheatManager_FakeKillRelevancy_FakeKillRelevancyDebug_Params Parms{};

	Parms.TextScale = TextScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy
// (None)

class UClass* UFortControllerComponent_FakeKillRelevancy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortControllerComponent_FakeKillRelevancy");

	return Clss;
}


// FortControllerComponent_FakeKillRelevancy SpecialEventGameplayRuntime.Default__FortControllerComponent_FakeKillRelevancy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortControllerComponent_FakeKillRelevancy* UFortControllerComponent_FakeKillRelevancy::GetDefaultObj()
{
	static class UFortControllerComponent_FakeKillRelevancy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortControllerComponent_FakeKillRelevancy*>(UFortControllerComponent_FakeKillRelevancy::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.ResetRelevancy
// (Final, BlueprintAuthorityOnly, Native, Protected)
// Parameters:

void UFortControllerComponent_FakeKillRelevancy::ResetRelevancy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_FakeKillRelevancy", "ResetRelevancy");

	Params::UFortControllerComponent_FakeKillRelevancy_ResetRelevancy_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.PlayKillEffects
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFakeKillRelevancyPlayerDataEntryFakeKillData                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                              RelevancyDelay                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_FakeKillRelevancy::PlayKillEffects(struct FFakeKillRelevancyPlayerDataEntry& FakeKillData, float RelevancyDelay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_FakeKillRelevancy", "PlayKillEffects");

	Params::UFortControllerComponent_FakeKillRelevancy_PlayKillEffects_Params Parms{};

	Parms.FakeKillData = FakeKillData;
	Parms.RelevancyDelay = RelevancyDelay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.OnRep_ResetCounter
// (Final, Native, Private)
// Parameters:

void UFortControllerComponent_FakeKillRelevancy::OnRep_ResetCounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_FakeKillRelevancy", "OnRep_ResetCounter");

	Params::UFortControllerComponent_FakeKillRelevancy_OnRep_ResetCounter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.OnKillEffectsPlayed
// (Final, BlueprintCosmetic, Native, Protected, BlueprintCallable)
// Parameters:
// class UFortPlayerStateAthena*      PlayerState                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_FakeKillRelevancy::OnKillEffectsPlayed(class UFortPlayerStateAthena* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_FakeKillRelevancy", "OnKillEffectsPlayed");

	Params::UFortControllerComponent_FakeKillRelevancy_OnKillEffectsPlayed_Params Parms{};

	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.GetDeathLocation
// (Final, Native, Protected, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortPlayerStateAthena*      PlayerState                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UFortControllerComponent_FakeKillRelevancy::GetDeathLocation(class UFortPlayerStateAthena* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_FakeKillRelevancy", "GetDeathLocation");

	Params::UFortControllerComponent_FakeKillRelevancy_GetDeathLocation_Params Parms{};

	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.CancelKillEffectsOnServer
// (BlueprintAuthorityOnly, Event, Protected, BlueprintEvent)
// Parameters:

void UFortControllerComponent_FakeKillRelevancy::CancelKillEffectsOnServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_FakeKillRelevancy", "CancelKillEffectsOnServer");

	Params::UFortControllerComponent_FakeKillRelevancy_CancelKillEffectsOnServer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.CancelKillEffectsOnClient
// (BlueprintCosmetic, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class UFortPlayerStateAthena*>PlayerStates                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortControllerComponent_FakeKillRelevancy::CancelKillEffectsOnClient(TArray<class UFortPlayerStateAthena*>& PlayerStates)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_FakeKillRelevancy", "CancelKillEffectsOnClient");

	Params::UFortControllerComponent_FakeKillRelevancy_CancelKillEffectsOnClient_Params Parms{};

	Parms.PlayerStates = PlayerStates;

	UObject::ProcessEvent(Func, &Parms);

}


// Class SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy
// (Actor)

class UClass* UFortAthenaMutator_FakeKillRelevancy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_FakeKillRelevancy");

	return Clss;
}


// FortAthenaMutator_FakeKillRelevancy SpecialEventGameplayRuntime.Default__FortAthenaMutator_FakeKillRelevancy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaMutator_FakeKillRelevancy* UFortAthenaMutator_FakeKillRelevancy::GetDefaultObj()
{
	static class UFortAthenaMutator_FakeKillRelevancy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaMutator_FakeKillRelevancy*>(UFortAthenaMutator_FakeKillRelevancy::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.StartNextKillWave
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaMutator_FakeKillRelevancy::StartNextKillWave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_FakeKillRelevancy", "StartNextKillWave");

	Params::UFortAthenaMutator_FakeKillRelevancy_StartNextKillWave_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.SetUpKillPhase
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              MaxPlayersRemaining                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                Reason                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumWaves                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RelevancyDelay                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_FakeKillRelevancy::SetUpKillPhase(int32 MaxPlayersRemaining, struct FGameplayTag& Reason, int32 NumWaves, float RelevancyDelay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_FakeKillRelevancy", "SetUpKillPhase");

	Params::UFortAthenaMutator_FakeKillRelevancy_SetUpKillPhase_Params Parms{};

	Parms.MaxPlayersRemaining = MaxPlayersRemaining;
	Parms.Reason = Reason;
	Parms.NumWaves = NumWaves;
	Parms.RelevancyDelay = RelevancyDelay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.ResetRelevancy
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaMutator_FakeKillRelevancy::ResetRelevancy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_FakeKillRelevancy", "ResetRelevancy");

	Params::UFortAthenaMutator_FakeKillRelevancy_ResetRelevancy_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.EndWave
// (Final, Native, Private)
// Parameters:
// int32                              EndPhaseNum                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              WaveNum                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_FakeKillRelevancy::EndWave(int32 EndPhaseNum, int32 WaveNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_FakeKillRelevancy", "EndWave");

	Params::UFortAthenaMutator_FakeKillRelevancy_EndWave_Params Parms{};

	Parms.EndPhaseNum = EndPhaseNum;
	Parms.WaveNum = WaveNum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.FortAthenaMutator_LoadGameFeature
// (Actor)

class UClass* UFortAthenaMutator_LoadGameFeature::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_LoadGameFeature");

	return Clss;
}


// FortAthenaMutator_LoadGameFeature SpecialEventGameplayRuntime.Default__FortAthenaMutator_LoadGameFeature
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaMutator_LoadGameFeature* UFortAthenaMutator_LoadGameFeature::GetDefaultObj()
{
	static class UFortAthenaMutator_LoadGameFeature* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaMutator_LoadGameFeature*>(UFortAthenaMutator_LoadGameFeature::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_LoadGameFeature.OnPlaylistDataReady
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class UFortGameStateAthena*        GameState                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlaylist*               Playlist                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaMutator_LoadGameFeature::OnPlaylistDataReady(class UFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_LoadGameFeature", "OnPlaylistDataReady");

	Params::UFortAthenaMutator_LoadGameFeature_OnPlaylistDataReady_Params Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.FortAthenaMutator_RemoveGameFeatures
// (Actor)

class UClass* UFortAthenaMutator_RemoveGameFeatures::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_RemoveGameFeatures");

	return Clss;
}


// FortAthenaMutator_RemoveGameFeatures SpecialEventGameplayRuntime.Default__FortAthenaMutator_RemoveGameFeatures
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaMutator_RemoveGameFeatures* UFortAthenaMutator_RemoveGameFeatures::GetDefaultObj()
{
	static class UFortAthenaMutator_RemoveGameFeatures* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaMutator_RemoveGameFeatures*>(UFortAthenaMutator_RemoveGameFeatures::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_RemoveGameFeatures.OnPlaylistDataReady
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class UFortGameStateAthena*        GameState                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlaylist*               Playlist                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaMutator_RemoveGameFeatures::OnPlaylistDataReady(class UFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_RemoveGameFeatures", "OnPlaylistDataReady");

	Params::UFortAthenaMutator_RemoveGameFeatures_OnPlaylistDataReady_Params Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent
// (None)

class UClass* UFortCheatManager_SpecialEvent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCheatManager_SpecialEvent");

	return Clss;
}


// FortCheatManager_SpecialEvent SpecialEventGameplayRuntime.Default__FortCheatManager_SpecialEvent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCheatManager_SpecialEvent* UFortCheatManager_SpecialEvent::GetDefaultObj()
{
	static class UFortCheatManager_SpecialEvent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCheatManager_SpecialEvent*>(UFortCheatManager_SpecialEvent::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.UnloadTerrainMaps
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// class FName                        MapTag                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::UnloadTerrainMaps(class FName MapTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "UnloadTerrainMaps");

	Params::UFortCheatManager_SpecialEvent_UnloadTerrainMaps_Params Parms{};

	Parms.MapTag = MapTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ToggleDisableParachutes
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// bool                               bIsDisabled                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::ToggleDisableParachutes(bool bIsDisabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "ToggleDisableParachutes");

	Params::UFortCheatManager_SpecialEvent_ToggleDisableParachutes_Params Parms{};

	Parms.bIsDisabled = bIsDisabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.TeleportAllPlayers
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// int32                              SafeZoneIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::TeleportAllPlayers(int32 SafeZoneIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "TeleportAllPlayers");

	Params::UFortCheatManager_SpecialEvent_TeleportAllPlayers_Params Parms{};

	Parms.SafeZoneIndex = SafeZoneIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.StartEventScript
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// int32                              InStartingIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::StartEventScript(int32 InStartingIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "StartEventScript");

	Params::UFortCheatManager_SpecialEvent_StartEventScript_Params Parms{};

	Parms.InStartingIndex = InStartingIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SpecialEventSetAdditionalViewpoint
// (Final, Exec, Native, Protected)
// Parameters:
// float                              X                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Y                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Z                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::SpecialEventSetAdditionalViewpoint(float X, float Y, float Z)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "SpecialEventSetAdditionalViewpoint");

	Params::UFortCheatManager_SpecialEvent_SpecialEventSetAdditionalViewpoint_Params Parms{};

	Parms.X = X;
	Parms.Y = Y;
	Parms.Z = Z;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SpecialEventGameUserSettings_ClearDataForAllPlayers
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::SpecialEventGameUserSettings_ClearDataForAllPlayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "SpecialEventGameUserSettings_ClearDataForAllPlayers");

	Params::UFortCheatManager_SpecialEvent_SpecialEventGameUserSettings_ClearDataForAllPlayers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SpecialEventClearAdditionalViewpoint
// (Final, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::SpecialEventClearAdditionalViewpoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "SpecialEventClearAdditionalViewpoint");

	Params::UFortCheatManager_SpecialEvent_SpecialEventClearAdditionalViewpoint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ShrinkSafeZone
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::ShrinkSafeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "ShrinkSafeZone");

	Params::UFortCheatManager_SpecialEvent_ShrinkSafeZone_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetReturnToMainMenuDelay
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// float                              MinDelayReturnToMainMenu                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxDelayReturnToMainMenu                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::SetReturnToMainMenuDelay(float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "SetReturnToMainMenuDelay");

	Params::UFortCheatManager_SpecialEvent_SetReturnToMainMenuDelay_Params Parms{};

	Parms.MinDelayReturnToMainMenu = MinDelayReturnToMainMenu;
	Parms.MaxDelayReturnToMainMenu = MaxDelayReturnToMainMenu;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetMatchTime
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// int32                              NewMatchTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::SetMatchTime(int32 NewMatchTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "SetMatchTime");

	Params::UFortCheatManager_SpecialEvent_SetMatchTime_Params Parms{};

	Parms.NewMatchTime = NewMatchTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetLockingOnFocalPoint
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// bool                               bInLockingOnFocalPoint                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::SetLockingOnFocalPoint(bool bInLockingOnFocalPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "SetLockingOnFocalPoint");

	Params::UFortCheatManager_SpecialEvent_SetLockingOnFocalPoint_Params Parms{};

	Parms.bInLockingOnFocalPoint = bInLockingOnFocalPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetIsSimulatingDamage
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// bool                               bIsSimulating                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::SetIsSimulatingDamage(bool bIsSimulating)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "SetIsSimulatingDamage");

	Params::UFortCheatManager_SpecialEvent_SetIsSimulatingDamage_Params Parms{};

	Parms.bIsSimulating = bIsSimulating;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetDestroyVehiclesInStorm
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// bool                               bDestroyVehiclesInStorm                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::SetDestroyVehiclesInStorm(bool bDestroyVehiclesInStorm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "SetDestroyVehiclesInStorm");

	Params::UFortCheatManager_SpecialEvent_SetDestroyVehiclesInStorm_Params Parms{};

	Parms.bDestroyVehiclesInStorm = bDestroyVehiclesInStorm;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SendToNightNight
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::SendToNightNight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "SendToNightNight");

	Params::UFortCheatManager_SpecialEvent_SendToNightNight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResumeWinCondition
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::ResumeWinCondition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "ResumeWinCondition");

	Params::UFortCheatManager_SpecialEvent_ResumeWinCondition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResetWinConditionProgressToZero
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::ResetWinConditionProgressToZero()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "ResetWinConditionProgressToZero");

	Params::UFortCheatManager_SpecialEvent_ResetWinConditionProgressToZero_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResetWinCondition
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::ResetWinCondition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "ResetWinCondition");

	Params::UFortCheatManager_SpecialEvent_ResetWinCondition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResetSpecialEventAircraft
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::ResetSpecialEventAircraft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "ResetSpecialEventAircraft");

	Params::UFortCheatManager_SpecialEvent_ResetSpecialEventAircraft_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResetMatchTimeToPrevious
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::ResetMatchTimeToPrevious()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "ResetMatchTimeToPrevious");

	Params::UFortCheatManager_SpecialEvent_ResetMatchTimeToPrevious_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.PlacePlayersInAircraft
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::PlacePlayersInAircraft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "PlacePlayersInAircraft");

	Params::UFortCheatManager_SpecialEvent_PlacePlayersInAircraft_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.PauseWinCondition
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// bool                               bLockScores                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::PauseWinCondition(bool bLockScores)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "PauseWinCondition");

	Params::UFortCheatManager_SpecialEvent_PauseWinCondition_Params Parms{};

	Parms.bLockScores = bLockScores;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.CloseParachutes
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::CloseParachutes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "CloseParachutes");

	Params::UFortCheatManager_SpecialEvent_CloseParachutes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ChangeWinCondition
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// float                              NewGoalScore                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::ChangeWinCondition(float NewGoalScore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "ChangeWinCondition");

	Params::UFortCheatManager_SpecialEvent_ChangeWinCondition_Params Parms{};

	Parms.NewGoalScore = NewGoalScore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.AutobalanceTargetScore
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::AutobalanceTargetScore()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "AutobalanceTargetScore");

	Params::UFortCheatManager_SpecialEvent_AutobalanceTargetScore_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.AddCSVEvent
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// class FString                      CSVEventName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::AddCSVEvent(const class FString& CSVEventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "AddCSVEvent");

	Params::UFortCheatManager_SpecialEvent_AddCSVEvent_Params Parms{};

	Parms.CSVEventName = CSVEventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent
// (Actor)

class UClass* UFortAthenaMutator_SpecialEvent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_SpecialEvent");

	return Clss;
}


// FortAthenaMutator_SpecialEvent SpecialEventGameplayRuntime.Default__FortAthenaMutator_SpecialEvent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaMutator_SpecialEvent* UFortAthenaMutator_SpecialEvent::GetDefaultObj()
{
	static class UFortAthenaMutator_SpecialEvent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaMutator_SpecialEvent*>(UFortAthenaMutator_SpecialEvent::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.WarmUpIslandUpdated
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaMutator_SpecialEvent::WarmUpIslandUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "WarmUpIslandUpdated");

	Params::UFortAthenaMutator_SpecialEvent_WarmUpIslandUpdated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.UpdateBackfillStatus
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:

void UFortAthenaMutator_SpecialEvent::UpdateBackfillStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "UpdateBackfillStatus");

	Params::UFortAthenaMutator_SpecialEvent_UpdateBackfillStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.UnloadTerrainMaps
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                MapTag                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::UnloadTerrainMaps(struct FGameplayTag& MapTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "UnloadTerrainMaps");

	Params::UFortAthenaMutator_SpecialEvent_UnloadTerrainMaps_Params Parms{};

	Parms.MapTag = MapTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleHUDs
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bHide                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::ToggleHUDs(bool bHide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ToggleHUDs");

	Params::UFortAthenaMutator_SpecialEvent_ToggleHUDs_Params Parms{};

	Parms.bHide = bHide;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleDisableWeapons
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bDisableWeapons                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::ToggleDisableWeapons(bool bDisableWeapons)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ToggleDisableWeapons");

	Params::UFortAthenaMutator_SpecialEvent_ToggleDisableWeapons_Params Parms{};

	Parms.bDisableWeapons = bDisableWeapons;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleDisableParachutes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bDisable                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::ToggleDisableParachutes(bool bDisable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ToggleDisableParachutes");

	Params::UFortAthenaMutator_SpecialEvent_ToggleDisableParachutes_Params Parms{};

	Parms.bDisable = bDisable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleAllPlayersInvincibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInvincible                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::ToggleAllPlayersInvincibility(bool bInvincible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ToggleAllPlayersInvincibility");

	Params::UFortAthenaMutator_SpecialEvent_ToggleAllPlayersInvincibility_Params Parms{};

	Parms.bInvincible = bInvincible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.TeleportAllPlayers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       EventTags                                                        (Parm, NativeAccessSpecifierPublic)
// int32                              TeleportsPerFrame                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SafeZoneIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::TeleportAllPlayers(const struct FGameplayTagContainer& EventTags, int32 TeleportsPerFrame, int32 SafeZoneIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "TeleportAllPlayers");

	Params::UFortAthenaMutator_SpecialEvent_TeleportAllPlayers_Params Parms{};

	Parms.EventTags = EventTags;
	Parms.TeleportsPerFrame = TeleportsPerFrame;
	Parms.SafeZoneIndex = SafeZoneIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SwapBodyParts
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ArrayIndex                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlayerController*       FortPC                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::SwapBodyParts(int32 ArrayIndex, class UFortPlayerController* FortPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SwapBodyParts");

	Params::UFortAthenaMutator_SpecialEvent_SwapBodyParts_Params Parms{};

	Parms.ArrayIndex = ArrayIndex;
	Parms.FortPC = FortPC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.StartSafeZoneOverrideForEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SafeZoneIndexForEvent                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::StartSafeZoneOverrideForEvent(int32 SafeZoneIndexForEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "StartSafeZoneOverrideForEvent");

	Params::UFortAthenaMutator_SpecialEvent_StartSafeZoneOverrideForEvent_Params Parms{};

	Parms.SafeZoneIndexForEvent = SafeZoneIndexForEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ShrinkSafeZone
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaMutator_SpecialEvent::ShrinkSafeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ShrinkSafeZone");

	Params::UFortAthenaMutator_SpecialEvent_ShrinkSafeZone_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetWeightForContainerLootRoll
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Weight                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::SetWeightForContainerLootRoll(float Weight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SetWeightForContainerLootRoll");

	Params::UFortAthenaMutator_SpecialEvent_SetWeightForContainerLootRoll_Params Parms{};

	Parms.Weight = Weight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetReturnToMainMenuDelay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              MinDelayReturnToMainMenu                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxDelayReturnToMainMenu                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::SetReturnToMainMenuDelay(float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SetReturnToMainMenuDelay");

	Params::UFortAthenaMutator_SpecialEvent_SetReturnToMainMenuDelay_Params Parms{};

	Parms.MinDelayReturnToMainMenu = MinDelayReturnToMainMenu;
	Parms.MaxDelayReturnToMainMenu = MaxDelayReturnToMainMenu;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetNamedWeightForContainerLootRoll
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        WeightName                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::SetNamedWeightForContainerLootRoll(class FName WeightName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SetNamedWeightForContainerLootRoll");

	Params::UFortAthenaMutator_SpecialEvent_SetNamedWeightForContainerLootRoll_Params Parms{};

	Parms.WeightName = WeightName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetMatchTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewMatchTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::SetMatchTime(int32 NewMatchTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SetMatchTime");

	Params::UFortAthenaMutator_SpecialEvent_SetMatchTime_Params Parms{};

	Parms.NewMatchTime = NewMatchTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetLockingOnFocalPoint
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInLockingOnFocalPoint                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::SetLockingOnFocalPoint(bool bInLockingOnFocalPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SetLockingOnFocalPoint");

	Params::UFortAthenaMutator_SpecialEvent_SetLockingOnFocalPoint_Params Parms{};

	Parms.bInLockingOnFocalPoint = bInLockingOnFocalPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetIsSimulatingDamage
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsSimulating                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::SetIsSimulatingDamage(bool bIsSimulating)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SetIsSimulatingDamage");

	Params::UFortAthenaMutator_SpecialEvent_SetIsSimulatingDamage_Params Parms{};

	Parms.bIsSimulating = bIsSimulating;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetDestroyVehiclesInStorm
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bDestroyVehiclesInStorm                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::SetDestroyVehiclesInStorm(bool bDestroyVehiclesInStorm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SetDestroyVehiclesInStorm");

	Params::UFortAthenaMutator_SpecialEvent_SetDestroyVehiclesInStorm_Params Parms{};

	Parms.bDestroyVehiclesInStorm = bDestroyVehiclesInStorm;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetCanStreamBuildingFoundationsIn
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::SetCanStreamBuildingFoundationsIn(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SetCanStreamBuildingFoundationsIn");

	Params::UFortAthenaMutator_SpecialEvent_SetCanStreamBuildingFoundationsIn_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetAdditionalViewpoint
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     WorldLocation                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::SetAdditionalViewpoint(const struct FVector& WorldLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SetAdditionalViewpoint");

	Params::UFortAthenaMutator_SpecialEvent_SetAdditionalViewpoint_Params Parms{};

	Parms.WorldLocation = WorldLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SendToNightNight
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaMutator_SpecialEvent::SendToNightNight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SendToNightNight");

	Params::UFortAthenaMutator_SpecialEvent_SendToNightNight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResumeWinCondition
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaMutator_SpecialEvent::ResumeWinCondition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ResumeWinCondition");

	Params::UFortAthenaMutator_SpecialEvent_ResumeWinCondition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetWinConditionProgressToZero
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaMutator_SpecialEvent::ResetWinConditionProgressToZero()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ResetWinConditionProgressToZero");

	Params::UFortAthenaMutator_SpecialEvent_ResetWinConditionProgressToZero_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetWinCondition
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaMutator_SpecialEvent::ResetWinCondition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ResetWinCondition");

	Params::UFortAthenaMutator_SpecialEvent_ResetWinCondition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetSpecialEventAircraft
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaMutator_SpecialEvent::ResetSpecialEventAircraft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ResetSpecialEventAircraft");

	Params::UFortAthenaMutator_SpecialEvent_ResetSpecialEventAircraft_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetSafeZoneOverrideAfterEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              MinResetSafeZoneIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinDelayReturnToMainMenu                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxDelayReturnToMainMenu                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::ResetSafeZoneOverrideAfterEvent(int32 MinResetSafeZoneIndex, float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ResetSafeZoneOverrideAfterEvent");

	Params::UFortAthenaMutator_SpecialEvent_ResetSafeZoneOverrideAfterEvent_Params Parms{};

	Parms.MinResetSafeZoneIndex = MinResetSafeZoneIndex;
	Parms.MinDelayReturnToMainMenu = MinDelayReturnToMainMenu;
	Parms.MaxDelayReturnToMainMenu = MaxDelayReturnToMainMenu;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetMatchTimeToPrevious
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaMutator_SpecialEvent::ResetMatchTimeToPrevious()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ResetMatchTimeToPrevious");

	Params::UFortAthenaMutator_SpecialEvent_ResetMatchTimeToPrevious_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.RemoveFromBlockedNativeActions
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       Actions                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::RemoveFromBlockedNativeActions(struct FGameplayTagContainer& Actions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "RemoveFromBlockedNativeActions");

	Params::UFortAthenaMutator_SpecialEvent_RemoveFromBlockedNativeActions_Params Parms{};

	Parms.Actions = Actions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PushSpecialEventEmoteInputComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaMutator_SpecialEvent::PushSpecialEventEmoteInputComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "PushSpecialEventEmoteInputComponent");

	Params::UFortAthenaMutator_SpecialEvent_PushSpecialEventEmoteInputComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PopSpecialEventEmoteInputComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaMutator_SpecialEvent::PopSpecialEventEmoteInputComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "PopSpecialEventEmoteInputComponent");

	Params::UFortAthenaMutator_SpecialEvent_PopSpecialEventEmoteInputComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PlacePlayersInAircraft
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaMutator_SpecialEvent::PlacePlayersInAircraft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "PlacePlayersInAircraft");

	Params::UFortAthenaMutator_SpecialEvent_PlacePlayersInAircraft_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseWinCondition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bLockScores                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::PauseWinCondition(bool bLockScores)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "PauseWinCondition");

	Params::UFortAthenaMutator_SpecialEvent_PauseWinCondition_Params Parms{};

	Parms.bLockScores = bLockScores;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseSupplyDrops
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bPause                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::PauseSupplyDrops(bool bPause)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "PauseSupplyDrops");

	Params::UFortAthenaMutator_SpecialEvent_PauseSupplyDrops_Params Parms{};

	Parms.bPause = bPause;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseStormProgression
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bPause                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::PauseStormProgression(bool bPause)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "PauseStormProgression");

	Params::UFortAthenaMutator_SpecialEvent_PauseStormProgression_Params Parms{};

	Parms.bPause = bPause;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseStormDamage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bPause                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::PauseStormDamage(bool bPause)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "PauseStormDamage");

	Params::UFortAthenaMutator_SpecialEvent_PauseStormDamage_Params Parms{};

	Parms.bPause = bPause;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnWarmUpTeleportComplete
// (Final, Native, Protected)
// Parameters:
// class UFortPlayerPawn*             PlayerPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::OnWarmUpTeleportComplete(class UFortPlayerPawn* PlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnWarmUpTeleportComplete");

	Params::UFortAthenaMutator_SpecialEvent_OnWarmUpTeleportComplete_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_TerrainMapsToUnload
// (Final, Native, Protected)
// Parameters:

void UFortAthenaMutator_SpecialEvent::OnRep_TerrainMapsToUnload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_TerrainMapsToUnload");

	Params::UFortAthenaMutator_SpecialEvent_OnRep_TerrainMapsToUnload_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_LastCSVEventName
// (Final, Native, Protected)
// Parameters:

void UFortAthenaMutator_SpecialEvent::OnRep_LastCSVEventName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_LastCSVEventName");

	Params::UFortAthenaMutator_SpecialEvent_OnRep_LastCSVEventName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_GameResumed
// (Final, Native, Protected)
// Parameters:

void UFortAthenaMutator_SpecialEvent::OnRep_GameResumed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_GameResumed");

	Params::UFortAthenaMutator_SpecialEvent_OnRep_GameResumed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_DelayPlayersFromReturningToLobbyData
// (Final, Native, Protected)
// Parameters:

void UFortAthenaMutator_SpecialEvent::OnRep_DelayPlayersFromReturningToLobbyData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_DelayPlayersFromReturningToLobbyData");

	Params::UFortAthenaMutator_SpecialEvent_OnRep_DelayPlayersFromReturningToLobbyData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bPlayersAreInvincible
// (Final, Native, Protected)
// Parameters:

void UFortAthenaMutator_SpecialEvent::OnRep_bPlayersAreInvincible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_bPlayersAreInvincible");

	Params::UFortAthenaMutator_SpecialEvent_OnRep_bPlayersAreInvincible_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bLockingOnFocalPoint
// (Final, Native, Protected)
// Parameters:

void UFortAthenaMutator_SpecialEvent::OnRep_bLockingOnFocalPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_bLockingOnFocalPoint");

	Params::UFortAthenaMutator_SpecialEvent_OnRep_bLockingOnFocalPoint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bDisableHUD
// (Final, Native, Protected)
// Parameters:

void UFortAthenaMutator_SpecialEvent::OnRep_bDisableHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_bDisableHUD");

	Params::UFortAthenaMutator_SpecialEvent_OnRep_bDisableHUD_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bCanStreamBuildingFoundationsIn
// (Final, Native, Protected)
// Parameters:

void UFortAthenaMutator_SpecialEvent::OnRep_bCanStreamBuildingFoundationsIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_bCanStreamBuildingFoundationsIn");

	Params::UFortAthenaMutator_SpecialEvent_OnRep_bCanStreamBuildingFoundationsIn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_AllPlayerTeleportedCount
// (Final, Native, Protected)
// Parameters:

void UFortAthenaMutator_SpecialEvent::OnRep_AllPlayerTeleportedCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_AllPlayerTeleportedCount");

	Params::UFortAthenaMutator_SpecialEvent_OnRep_AllPlayerTeleportedCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_Aircraft
// (Final, Native, Protected)
// Parameters:

void UFortAthenaMutator_SpecialEvent::OnRep_Aircraft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_Aircraft");

	Params::UFortAthenaMutator_SpecialEvent_OnRep_Aircraft_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_AdditionalViewpoint
// (Final, Native, Protected)
// Parameters:

void UFortAthenaMutator_SpecialEvent::OnRep_AdditionalViewpoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_AdditionalViewpoint");

	Params::UFortAthenaMutator_SpecialEvent_OnRep_AdditionalViewpoint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnGameViewportActivationChanged
// (Final, Native, Public)
// Parameters:
// bool                               bHasFocus                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::OnGameViewportActivationChanged(bool bHasFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnGameViewportActivationChanged");

	Params::UFortAthenaMutator_SpecialEvent_OnGameViewportActivationChanged_Params Parms{};

	Parms.bHasFocus = bHasFocus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnGamePhaseStepChanged
// (Final, Native, Protected, HasOutParams)
// Parameters:
// TScriptInterface<class UFortSafeZoneInterface>SafeZoneInterface                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAthenaGamePhaseStep    GamePhaseStep                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::OnGamePhaseStepChanged(TScriptInterface<class UFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnGamePhaseStepChanged");

	Params::UFortAthenaMutator_SpecialEvent_OnGamePhaseStepChanged_Params Parms{};

	Parms.SafeZoneInterface = SafeZoneInterface;
	Parms.GamePhaseStep = GamePhaseStep;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnAircraftFlightEnded
// (Final, Native, Protected)
// Parameters:
// class UFortAthenaAircraft*         FortAthenaAircraft                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::OnAircraftFlightEnded(class UFortAthenaAircraft* FortAthenaAircraft)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnAircraftFlightEnded");

	Params::UFortAthenaMutator_SpecialEvent_OnAircraftFlightEnded_Params Parms{};

	Parms.FortAthenaAircraft = FortAthenaAircraft;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnAircraftExitedDropZone
// (Final, Native, Protected)
// Parameters:
// class UFortAthenaAircraft*         FortAthenaAircraft                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::OnAircraftExitedDropZone(class UFortAthenaAircraft* FortAthenaAircraft)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnAircraftExitedDropZone");

	Params::UFortAthenaMutator_SpecialEvent_OnAircraftExitedDropZone_Params Parms{};

	Parms.FortAthenaAircraft = FortAthenaAircraft;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnAircraftEnteredDropZone
// (Final, Native, Protected)
// Parameters:
// class UFortAthenaAircraft*         FortAthenaAircraft                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::OnAircraftEnteredDropZone(class UFortAthenaAircraft* FortAthenaAircraft)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnAircraftEnteredDropZone");

	Params::UFortAthenaMutator_SpecialEvent_OnAircraftEnteredDropZone_Params Parms{};

	Parms.FortAthenaAircraft = FortAthenaAircraft;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnActorSpawned
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::OnActorSpawned(class UActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnActorSpawned");

	Params::UFortAthenaMutator_SpecialEvent_OnActorSpawned_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnActorPreSpawnInitialization
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::OnActorPreSpawnInitialization(class UActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnActorPreSpawnInitialization");

	Params::UFortAthenaMutator_SpecialEvent_OnActorPreSpawnInitialization_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.NotifyClientsGameResumed
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaMutator_SpecialEvent::NotifyClientsGameResumed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "NotifyClientsGameResumed");

	Params::UFortAthenaMutator_SpecialEvent_NotifyClientsGameResumed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.NetMulticast_CheatClearSpecialEventGameUserSettings
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:

void UFortAthenaMutator_SpecialEvent::NetMulticast_CheatClearSpecialEventGameUserSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "NetMulticast_CheatClearSpecialEventGameUserSettings");

	Params::UFortAthenaMutator_SpecialEvent_NetMulticast_CheatClearSpecialEventGameUserSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.JumpToSafeZonePhase
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     PawnSpawnCenterLocation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PawnSpawnMinDistance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PawnSpawnMaxDistance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::JumpToSafeZonePhase(const struct FVector& PawnSpawnCenterLocation, float PawnSpawnMinDistance, float PawnSpawnMaxDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "JumpToSafeZonePhase");

	Params::UFortAthenaMutator_SpecialEvent_JumpToSafeZonePhase_Params Parms{};

	Parms.PawnSpawnCenterLocation = PawnSpawnCenterLocation;
	Parms.PawnSpawnMinDistance = PawnSpawnMinDistance;
	Parms.PawnSpawnMaxDistance = PawnSpawnMaxDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.HandleSpecialEventMannequinDestroyed
// (Final, Native, Protected)
// Parameters:
// class UActor*                      MannequinActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::HandleSpecialEventMannequinDestroyed(class UActor* MannequinActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "HandleSpecialEventMannequinDestroyed");

	Params::UFortAthenaMutator_SpecialEvent_HandleSpecialEventMannequinDestroyed_Params Parms{};

	Parms.MannequinActor = MannequinActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.GetScript
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USpecialEventScript*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USpecialEventScript* UFortAthenaMutator_SpecialEvent::GetScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "GetScript");

	Params::UFortAthenaMutator_SpecialEvent_GetScript_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.GetHasInfiniteSafeZonePhase
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaMutator_SpecialEvent::GetHasInfiniteSafeZonePhase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "GetHasInfiniteSafeZonePhase");

	Params::UFortAthenaMutator_SpecialEvent_GetHasInfiniteSafeZonePhase_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ForceSafeZoneFinalLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     NewFinalLocation                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DefaultAircraftOffsetFromMidLine                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinDefaultMidlineAngle                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxDefaultMidlineAngle                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::ForceSafeZoneFinalLocation(const struct FVector& NewFinalLocation, float DefaultAircraftOffsetFromMidLine, float MinDefaultMidlineAngle, float MaxDefaultMidlineAngle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ForceSafeZoneFinalLocation");

	Params::UFortAthenaMutator_SpecialEvent_ForceSafeZoneFinalLocation_Params Parms{};

	Parms.NewFinalLocation = NewFinalLocation;
	Parms.DefaultAircraftOffsetFromMidLine = DefaultAircraftOffsetFromMidLine;
	Parms.MinDefaultMidlineAngle = MinDefaultMidlineAngle;
	Parms.MaxDefaultMidlineAngle = MaxDefaultMidlineAngle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.FlushUnhandledPlayerControllers
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaMutator_SpecialEvent::FlushUnhandledPlayerControllers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "FlushUnhandledPlayerControllers");

	Params::UFortAthenaMutator_SpecialEvent_FlushUnhandledPlayerControllers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.CloseParachutes
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaMutator_SpecialEvent::CloseParachutes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "CloseParachutes");

	Params::UFortAthenaMutator_SpecialEvent_CloseParachutes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ClearBlockedNativeActions
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaMutator_SpecialEvent::ClearBlockedNativeActions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ClearBlockedNativeActions");

	Params::UFortAthenaMutator_SpecialEvent_ClearBlockedNativeActions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ClearAdditionalViewpoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaMutator_SpecialEvent::ClearAdditionalViewpoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ClearAdditionalViewpoint");

	Params::UFortAthenaMutator_SpecialEvent_ClearAdditionalViewpoint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ChangeWinCondition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewGoalScore                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::ChangeWinCondition(float NewGoalScore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ChangeWinCondition");

	Params::UFortAthenaMutator_SpecialEvent_ChangeWinCondition_Params Parms{};

	Parms.NewGoalScore = NewGoalScore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AutobalanceTargetScore
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaMutator_SpecialEvent::AutobalanceTargetScore()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "AutobalanceTargetScore");

	Params::UFortAthenaMutator_SpecialEvent_AutobalanceTargetScore_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AddToBlockedNativeActions
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       Actions                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bCancelAbilities                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::AddToBlockedNativeActions(struct FGameplayTagContainer& Actions, bool bCancelAbilities)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "AddToBlockedNativeActions");

	Params::UFortAthenaMutator_SpecialEvent_AddToBlockedNativeActions_Params Parms{};

	Parms.Actions = Actions;
	Parms.bCancelAbilities = bCancelAbilities;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AddCSVEvent
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      CSVEventName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldRepToClient                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::AddCSVEvent(const class FString& CSVEventName, bool bShouldRepToClient)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "AddCSVEvent");

	Params::UFortAthenaMutator_SpecialEvent_AddCSVEvent_Params Parms{};

	Parms.CSVEventName = CSVEventName;
	Parms.bShouldRepToClient = bShouldRepToClient;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AddClientCSVEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      CSVEventName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaMutator_SpecialEvent::AddClientCSVEvent(const class FString& CSVEventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "AddClientCSVEvent");

	Params::UFortAthenaMutator_SpecialEvent_AddClientCSVEvent_Params Parms{};

	Parms.CSVEventName = CSVEventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint
// (None)

class UClass* UFortCameraMode_SpecialEventFocalPoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCameraMode_SpecialEventFocalPoint");

	return Clss;
}


// FortCameraMode_SpecialEventFocalPoint SpecialEventGameplayRuntime.Default__FortCameraMode_SpecialEventFocalPoint
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCameraMode_SpecialEventFocalPoint* UFortCameraMode_SpecialEventFocalPoint::GetDefaultObj()
{
	static class UFortCameraMode_SpecialEventFocalPoint* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCameraMode_SpecialEventFocalPoint*>(UFortCameraMode_SpecialEventFocalPoint::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint.UpdateCameraBP
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UActor*                      ViewTarget                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTViewTarget                OutVT                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortCameraMode_SpecialEventFocalPoint::UpdateCameraBP(class UActor* ViewTarget, float DeltaTime, struct FTViewTarget& OutVT)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCameraMode_SpecialEventFocalPoint", "UpdateCameraBP");

	Params::UFortCameraMode_SpecialEventFocalPoint_UpdateCameraBP_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCameraMode_SpecialEventFocalPoint", "SetOverrideTransitionTime");

	Params::UFortCameraMode_SpecialEventFocalPoint_SetOverrideTransitionTime_Params Parms{};

	Parms.InTransitionTime = InTransitionTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint.OnBecomeInactiveBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UActor*                      ViewTarget                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCameraMode_SpecialEventFocalPoint::OnBecomeInactiveBP(class UActor* ViewTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCameraMode_SpecialEventFocalPoint", "OnBecomeInactiveBP");

	Params::UFortCameraMode_SpecialEventFocalPoint_OnBecomeInactiveBP_Params Parms{};

	Parms.ViewTarget = ViewTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint.OnBecomeActiveBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UActor*                      ViewTarget                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCameraMode_SpecialEventFocalPoint::OnBecomeActiveBP(class UActor* ViewTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCameraMode_SpecialEventFocalPoint", "OnBecomeActiveBP");

	Params::UFortCameraMode_SpecialEventFocalPoint_OnBecomeActiveBP_Params Parms{};

	Parms.ViewTarget = ViewTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Class SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent
// (None)

class UClass* UFortCharacterMovementMutatorComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCharacterMovementMutatorComponent");

	return Clss;
}


// FortCharacterMovementMutatorComponent SpecialEventGameplayRuntime.Default__FortCharacterMovementMutatorComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCharacterMovementMutatorComponent* UFortCharacterMovementMutatorComponent::GetDefaultObj()
{
	static class UFortCharacterMovementMutatorComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCharacterMovementMutatorComponent*>(UFortCharacterMovementMutatorComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.SetBuffetBubblesIntroTargetTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  Transform                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCharacterMovementMutatorComponent::SetBuffetBubblesIntroTargetTransform(struct FTransform& Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCharacterMovementMutatorComponent", "SetBuffetBubblesIntroTargetTransform");

	Params::UFortCharacterMovementMutatorComponent_SetBuffetBubblesIntroTargetTransform_Params Parms{};

	Parms.Transform = Transform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.SetBuffetBubblesInitialFollowBoxOffsetPercent
// (Final, Native, Protected, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     BoxOffsetPercent                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCharacterMovementMutatorComponent::SetBuffetBubblesInitialFollowBoxOffsetPercent(const struct FVector& BoxOffsetPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCharacterMovementMutatorComponent", "SetBuffetBubblesInitialFollowBoxOffsetPercent");

	Params::UFortCharacterMovementMutatorComponent_SetBuffetBubblesInitialFollowBoxOffsetPercent_Params Parms{};

	Parms.BoxOffsetPercent = BoxOffsetPercent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.SetBuffetBubblesFollowActor
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCharacterMovementMutatorComponent::SetBuffetBubblesFollowActor(class UActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCharacterMovementMutatorComponent", "SetBuffetBubblesFollowActor");

	Params::UFortCharacterMovementMutatorComponent_SetBuffetBubblesFollowActor_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OverrideBuffetFlyingVelocityDirectionInterpSpeed
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAsMultiplier                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCharacterMovementMutatorComponent::OverrideBuffetFlyingVelocityDirectionInterpSpeed(float Value, bool bAsMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCharacterMovementMutatorComponent", "OverrideBuffetFlyingVelocityDirectionInterpSpeed");

	Params::UFortCharacterMovementMutatorComponent_OverrideBuffetFlyingVelocityDirectionInterpSpeed_Params Parms{};

	Parms.Value = Value;
	Parms.bAsMultiplier = bAsMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OverrideBuffetFlyingMaxSpeed
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAsMultiplier                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InterpSpeed                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCharacterMovementMutatorComponent::OverrideBuffetFlyingMaxSpeed(float Value, bool bAsMultiplier, float InterpSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCharacterMovementMutatorComponent", "OverrideBuffetFlyingMaxSpeed");

	Params::UFortCharacterMovementMutatorComponent_OverrideBuffetFlyingMaxSpeed_Params Parms{};

	Parms.Value = Value;
	Parms.bAsMultiplier = bAsMultiplier;
	Parms.InterpSpeed = InterpSpeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OnRep_BuffetFlyingRicochetReplicatedData
// (Final, Native, Private)
// Parameters:

void UFortCharacterMovementMutatorComponent::OnRep_BuffetFlyingRicochetReplicatedData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCharacterMovementMutatorComponent", "OnRep_BuffetFlyingRicochetReplicatedData");

	Params::UFortCharacterMovementMutatorComponent_OnRep_BuffetFlyingRicochetReplicatedData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OnRep_BuffetBubblesFollowActor
// (Final, Native, Protected)
// Parameters:

void UFortCharacterMovementMutatorComponent::OnRep_BuffetBubblesFollowActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCharacterMovementMutatorComponent", "OnRep_BuffetBubblesFollowActor");

	Params::UFortCharacterMovementMutatorComponent_OnRep_BuffetBubblesFollowActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OnMovementModeChanged
// (Final, Native, Private)
// Parameters:
// class UCharacter*                  Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           PreviousMovementMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              PreviousCustomMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCharacterMovementMutatorComponent::OnMovementModeChanged(class UCharacter* Character, enum class EMovementMode PreviousMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCharacterMovementMutatorComponent", "OnMovementModeChanged");

	Params::UFortCharacterMovementMutatorComponent_OnMovementModeChanged_Params Parms{};

	Parms.Character = Character;
	Parms.PreviousMovementMode = PreviousMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.FortCharacterMovementMutator
// (Actor)

class UClass* UFortCharacterMovementMutator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCharacterMovementMutator");

	return Clss;
}


// FortCharacterMovementMutator SpecialEventGameplayRuntime.Default__FortCharacterMovementMutator
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCharacterMovementMutator* UFortCharacterMovementMutator::GetDefaultObj()
{
	static class UFortCharacterMovementMutator* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCharacterMovementMutator*>(UFortCharacterMovementMutator::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.FortCharacterMovementMutator.OnFortPawnChanged
// (Final, Native, Protected)
// Parameters:
// class UFortPawn*                   NewPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCharacterMovementMutator::OnFortPawnChanged(class UFortPawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCharacterMovementMutator", "OnFortPawnChanged");

	Params::UFortCharacterMovementMutator_OnFortPawnChanged_Params Parms{};

	Parms.NewPawn = NewPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic
// (None)

class UClass* UFortControllerComponent_GameplayCinematic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortControllerComponent_GameplayCinematic");

	return Clss;
}


// FortControllerComponent_GameplayCinematic SpecialEventGameplayRuntime.Default__FortControllerComponent_GameplayCinematic
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortControllerComponent_GameplayCinematic* UFortControllerComponent_GameplayCinematic::GetDefaultObj()
{
	static class UFortControllerComponent_GameplayCinematic* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortControllerComponent_GameplayCinematic*>(UFortControllerComponent_GameplayCinematic::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.ShowCinematicWidget
// (Final, BlueprintCosmetic, Exec, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        WidgetName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_GameplayCinematic::ShowCinematicWidget(class FName WidgetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_GameplayCinematic", "ShowCinematicWidget");

	Params::UFortControllerComponent_GameplayCinematic_ShowCinematicWidget_Params Parms{};

	Parms.WidgetName = WidgetName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.SetReadyForGameplay
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsReady                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_GameplayCinematic::SetReadyForGameplay(bool bIsReady)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_GameplayCinematic", "SetReadyForGameplay");

	Params::UFortControllerComponent_GameplayCinematic_SetReadyForGameplay_Params Parms{};

	Parms.bIsReady = bIsReady;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.ServerOnGameplayIntroFinished
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:

void UFortControllerComponent_GameplayCinematic::ServerOnGameplayIntroFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_GameplayCinematic", "ServerOnGameplayIntroFinished");

	Params::UFortControllerComponent_GameplayCinematic_ServerOnGameplayIntroFinished_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.OnRep_bIsReadyForGameplay
// (Final, Native, Protected)
// Parameters:

void UFortControllerComponent_GameplayCinematic::OnRep_bIsReadyForGameplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_GameplayCinematic", "OnRep_bIsReadyForGameplay");

	Params::UFortControllerComponent_GameplayCinematic_OnRep_bIsReadyForGameplay_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.HideHUDElementsForLoadingScreen
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bHideElements                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_GameplayCinematic::HideHUDElementsForLoadingScreen(bool bHideElements)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_GameplayCinematic", "HideHUDElementsForLoadingScreen");

	Params::UFortControllerComponent_GameplayCinematic_HideHUDElementsForLoadingScreen_Params Parms{};

	Parms.bHideElements = bHideElements;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent
// (None)

class UClass* UFortControllerComponent_SpecialEvent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortControllerComponent_SpecialEvent");

	return Clss;
}


// FortControllerComponent_SpecialEvent SpecialEventGameplayRuntime.Default__FortControllerComponent_SpecialEvent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortControllerComponent_SpecialEvent* UFortControllerComponent_SpecialEvent::GetDefaultObj()
{
	static class UFortControllerComponent_SpecialEvent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortControllerComponent_SpecialEvent*>(UFortControllerComponent_SpecialEvent::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent.ServerHandleSpecialClientEvent
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// struct FGameplayTag                EventTag                                                         (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Count                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_SpecialEvent::ServerHandleSpecialClientEvent(struct FGameplayTag& EventTag, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_SpecialEvent", "ServerHandleSpecialClientEvent");

	Params::UFortControllerComponent_SpecialEvent_ServerHandleSpecialClientEvent_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.Count = Count;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent.SendSpecialClientEvent
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                EventTag                                                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Count                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_SpecialEvent::SendSpecialClientEvent(const struct FGameplayTag& EventTag, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_SpecialEvent", "SendSpecialClientEvent");

	Params::UFortControllerComponent_SpecialEvent_SendSpecialClientEvent_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.Count = Count;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.FortCustomTickComponent
// (None)

class UClass* UFortCustomTickComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCustomTickComponent");

	return Clss;
}


// FortCustomTickComponent SpecialEventGameplayRuntime.Default__FortCustomTickComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCustomTickComponent* UFortCustomTickComponent::GetDefaultObj()
{
	static class UFortCustomTickComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCustomTickComponent*>(UFortCustomTickComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class SpecialEventGameplayRuntime.FortSpecialRelevancyActorSpawner
// (Actor)

class UClass* UFortSpecialRelevancyActorSpawner::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSpecialRelevancyActorSpawner");

	return Clss;
}


// FortSpecialRelevancyActorSpawner SpecialEventGameplayRuntime.Default__FortSpecialRelevancyActorSpawner
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSpecialRelevancyActorSpawner* UFortSpecialRelevancyActorSpawner::GetDefaultObj()
{
	static class UFortSpecialRelevancyActorSpawner* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSpecialRelevancyActorSpawner*>(UFortSpecialRelevancyActorSpawner::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.FortSpecialRelevancyActorSpawner.BP_OnActorSpawnedPerRelevancyGroup
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class UActor*>              InSpawnedActors                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortSpecialRelevancyActorSpawner::BP_OnActorSpawnedPerRelevancyGroup(TArray<class UActor*>& InSpawnedActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSpecialRelevancyActorSpawner", "BP_OnActorSpawnedPerRelevancyGroup");

	Params::UFortSpecialRelevancyActorSpawner_BP_OnActorSpawnedPerRelevancyGroup_Params Parms{};

	Parms.InSpawnedActors = InSpawnedActors;

	UObject::ProcessEvent(Func, &Parms);

}


// Class SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent
// (None)

class UClass* USpecialEventAudioAnalysisBaseComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpecialEventAudioAnalysisBaseComponent");

	return Clss;
}


// SpecialEventAudioAnalysisBaseComponent SpecialEventGameplayRuntime.Default__SpecialEventAudioAnalysisBaseComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USpecialEventAudioAnalysisBaseComponent* USpecialEventAudioAnalysisBaseComponent::GetDefaultObj()
{
	static class USpecialEventAudioAnalysisBaseComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USpecialEventAudioAnalysisBaseComponent*>(USpecialEventAudioAnalysisBaseComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateTime
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewTime                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventAudioAnalysisBaseComponent::UpdateTime(float NewTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventAudioAnalysisBaseComponent", "UpdateTime");

	Params::USpecialEventAudioAnalysisBaseComponent_UpdateTime_Params Parms{};

	Parms.NewTime = NewTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateOnset
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventAudioAnalysisBaseComponent::UpdateOnset(float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventAudioAnalysisBaseComponent", "UpdateOnset");

	Params::USpecialEventAudioAnalysisBaseComponent_UpdateOnset_Params Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateLoudness
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventAudioAnalysisBaseComponent::UpdateLoudness(float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventAudioAnalysisBaseComponent", "UpdateLoudness");

	Params::USpecialEventAudioAnalysisBaseComponent_UpdateLoudness_Params Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateConstantQ
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventAudioAnalysisBaseComponent::UpdateConstantQ(float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventAudioAnalysisBaseComponent", "UpdateConstantQ");

	Params::USpecialEventAudioAnalysisBaseComponent_UpdateConstantQ_Params Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetOnsetNRT
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UOnsetNRT*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnsetNRT* USpecialEventAudioAnalysisBaseComponent::GetOnsetNRT()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventAudioAnalysisBaseComponent", "GetOnsetNRT");

	Params::USpecialEventAudioAnalysisBaseComponent_GetOnsetNRT_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetLoudnessNRT
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULoudnessNRT*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULoudnessNRT* USpecialEventAudioAnalysisBaseComponent::GetLoudnessNRT()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventAudioAnalysisBaseComponent", "GetLoudnessNRT");

	Params::USpecialEventAudioAnalysisBaseComponent_GetLoudnessNRT_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetCurrentNormalizedLoudness
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USpecialEventAudioAnalysisBaseComponent::GetCurrentNormalizedLoudness()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventAudioAnalysisBaseComponent", "GetCurrentNormalizedLoudness");

	Params::USpecialEventAudioAnalysisBaseComponent_GetCurrentNormalizedLoudness_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetConstantQNRT
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UConstantQNRT*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UConstantQNRT* USpecialEventAudioAnalysisBaseComponent::GetConstantQNRT()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventAudioAnalysisBaseComponent", "GetConstantQNRT");

	Params::USpecialEventAudioAnalysisBaseComponent_GetConstantQNRT_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent
// (None)

class UClass* USpecialEventAudioHapticsComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpecialEventAudioHapticsComponent");

	return Clss;
}


// SpecialEventAudioHapticsComponent SpecialEventGameplayRuntime.Default__SpecialEventAudioHapticsComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USpecialEventAudioHapticsComponent* USpecialEventAudioHapticsComponent::GetDefaultObj()
{
	static class USpecialEventAudioHapticsComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USpecialEventAudioHapticsComponent*>(USpecialEventAudioHapticsComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent.StopHaptics
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpecialEventAudioHapticsComponent::StopHaptics()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventAudioHapticsComponent", "StopHaptics");

	Params::USpecialEventAudioHapticsComponent_StopHaptics_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent.StartHaptics
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpecialEventAudioHapticsComponent::StartHaptics()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventAudioHapticsComponent", "StartHaptics");

	Params::USpecialEventAudioHapticsComponent_StartHaptics_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent.AreHapticsActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventAudioHapticsComponent::AreHapticsActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventAudioHapticsComponent", "AreHapticsActive");

	Params::USpecialEventAudioHapticsComponent_AreHapticsActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SpecialEventGameplayRuntime.SpecialEventCinematicCameraMode
// (None)

class UClass* USpecialEventCinematicCameraMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpecialEventCinematicCameraMode");

	return Clss;
}


// SpecialEventCinematicCameraMode SpecialEventGameplayRuntime.Default__SpecialEventCinematicCameraMode
// (Public, ClassDefaultObject, ArchetypeObject)

class USpecialEventCinematicCameraMode* USpecialEventCinematicCameraMode::GetDefaultObj()
{
	static class USpecialEventCinematicCameraMode* Default = nullptr;

	if (!Default)
		Default = static_cast<USpecialEventCinematicCameraMode*>(USpecialEventCinematicCameraMode::StaticClass()->DefaultObject);

	return Default;
}


// Class SpecialEventGameplayRuntime.SpecialEventCursorInstigatorInterface
// (None)

class UClass* USpecialEventCursorInstigatorInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpecialEventCursorInstigatorInterface");

	return Clss;
}


// SpecialEventCursorInstigatorInterface SpecialEventGameplayRuntime.Default__SpecialEventCursorInstigatorInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class USpecialEventCursorInstigatorInterface* USpecialEventCursorInstigatorInterface::GetDefaultObj()
{
	static class USpecialEventCursorInstigatorInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<USpecialEventCursorInstigatorInterface*>(USpecialEventCursorInstigatorInterface::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorInstigatorInterface", "SpecialEventCursorTrace");

	Params::USpecialEventCursorInstigatorInterface_SpecialEventCursorTrace_Params Parms{};

	Parms.CursorPawnComponent = CursorPawnComponent;
	Parms.CursorModeTag = CursorModeTag;
	Parms.CameraComponent = CameraComponent;
	Parms.CursorWorldDirection = CursorWorldDirection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHitResult != nullptr)
		*OutHitResult = Parms.OutHitResult;

	return Parms.ReturnValue;

}


// Class SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent
// (None)

class UClass* USpecialEventCursorPawnComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpecialEventCursorPawnComponent");

	return Clss;
}


// SpecialEventCursorPawnComponent SpecialEventGameplayRuntime.Default__SpecialEventCursorPawnComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USpecialEventCursorPawnComponent* USpecialEventCursorPawnComponent::GetDefaultObj()
{
	static class USpecialEventCursorPawnComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USpecialEventCursorPawnComponent*>(USpecialEventCursorPawnComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.SetZoomAllowed
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInZoomAllowed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorPawnComponent::SetZoomAllowed(bool bInZoomAllowed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "SetZoomAllowed");

	Params::USpecialEventCursorPawnComponent_SetZoomAllowed_Params Parms{};

	Parms.bInZoomAllowed = bInZoomAllowed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.SetAllowOnNonOwningClients
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bAllow                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorPawnComponent::SetAllowOnNonOwningClients(bool bAllow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "SetAllowOnNonOwningClients");

	Params::USpecialEventCursorPawnComponent_SetAllowOnNonOwningClients_Params Parms{};

	Parms.bAllow = bAllow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.SetAdditiveRotationAllowed
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAdditiveRotationAllowed                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorPawnComponent::SetAdditiveRotationAllowed(bool bInAdditiveRotationAllowed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "SetAdditiveRotationAllowed");

	Params::USpecialEventCursorPawnComponent_SetAdditiveRotationAllowed_Params Parms{};

	Parms.bInAdditiveRotationAllowed = bInAdditiveRotationAllowed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ServerOnWorldLocationChanged
// (Final, Net, Native, Event, Private, NetServer, HasDefaults)
// Parameters:
// struct FVector                     WorldLocation                                                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorPawnComponent::ServerOnWorldLocationChanged(struct FVector& WorldLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "ServerOnWorldLocationChanged");

	Params::USpecialEventCursorPawnComponent_ServerOnWorldLocationChanged_Params Parms{};

	Parms.WorldLocation = WorldLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.PushCursor
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                CursorModeTag                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     InstigatingObject                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bActivate                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorPawnComponent::PushCursor(struct FGameplayTag& CursorModeTag, class UObject* InstigatingObject, bool bActivate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "PushCursor");

	Params::USpecialEventCursorPawnComponent_PushCursor_Params Parms{};

	Parms.CursorModeTag = CursorModeTag;
	Parms.InstigatingObject = InstigatingObject;
	Parms.bActivate = bActivate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.PopCursor
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                CursorModeTag                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     InstigatingObject                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeactivateIfStackEmpty                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorPawnComponent::PopCursor(struct FGameplayTag& CursorModeTag, class UObject* InstigatingObject, bool bDeactivateIfStackEmpty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "PopCursor");

	Params::USpecialEventCursorPawnComponent_PopCursor_Params Parms{};

	Parms.CursorModeTag = CursorModeTag;
	Parms.InstigatingObject = InstigatingObject;
	Parms.bDeactivateIfStackEmpty = bDeactivateIfStackEmpty;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.PopAllCursorsForObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     InstigatingObject                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeactivateIfStackEmpty                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorPawnComponent::PopAllCursorsForObject(class UObject* InstigatingObject, bool bDeactivateIfStackEmpty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "PopAllCursorsForObject");

	Params::USpecialEventCursorPawnComponent_PopAllCursorsForObject_Params Parms{};

	Parms.InstigatingObject = InstigatingObject;
	Parms.bDeactivateIfStackEmpty = bDeactivateIfStackEmpty;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnRep_ReplicatedWorldLocation
// (Final, Native, Private)
// Parameters:

void USpecialEventCursorPawnComponent::OnRep_ReplicatedWorldLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "OnRep_ReplicatedWorldLocation");

	Params::USpecialEventCursorPawnComponent_OnRep_ReplicatedWorldLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnRep_ReplicatedCursorStackEntry
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FSpecialEventCursorStackEntryOldCursorStackEntry                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USpecialEventCursorPawnComponent::OnRep_ReplicatedCursorStackEntry(struct FSpecialEventCursorStackEntry& OldCursorStackEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "OnRep_ReplicatedCursorStackEntry");

	Params::USpecialEventCursorPawnComponent_OnRep_ReplicatedCursorStackEntry_Params Parms{};

	Parms.OldCursorStackEntry = OldCursorStackEntry;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnRep_bAllowOnNonOwningClients
// (Final, Native, Private)
// Parameters:

void USpecialEventCursorPawnComponent::OnRep_bAllowOnNonOwningClients()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "OnRep_bAllowOnNonOwningClients");

	Params::USpecialEventCursorPawnComponent_OnRep_bAllowOnNonOwningClients_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnLocallyControlledCursorVisibilityChanged
// (Final, Native, Private, HasOutParams)
// Parameters:
// class USpecialEventCursorPawnComponent*CursorPawnComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                CursorModeTag                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldBeVisible                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorPawnComponent::OnLocallyControlledCursorVisibilityChanged(class USpecialEventCursorPawnComponent* CursorPawnComponent, struct FGameplayTag& CursorModeTag, bool bShouldBeVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "OnLocallyControlledCursorVisibilityChanged");

	Params::USpecialEventCursorPawnComponent_OnLocallyControlledCursorVisibilityChanged_Params Parms{};

	Parms.CursorPawnComponent = CursorPawnComponent;
	Parms.CursorModeTag = CursorModeTag;
	Parms.bShouldBeVisible = bShouldBeVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnInputMethodChanged
// (Final, Native, Private)
// Parameters:
// enum class ECommonInputType        InputType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorPawnComponent::OnInputMethodChanged(enum class ECommonInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "OnInputMethodChanged");

	Params::USpecialEventCursorPawnComponent_OnInputMethodChanged_Params Parms{};

	Parms.InputType = InputType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnHUDPostRender
// (Final, Native, Private)
// Parameters:
// class UHUD*                        HUD                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCanvas*                     Canvas                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorPawnComponent::OnHUDPostRender(class UHUD* HUD, class UCanvas* Canvas)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "OnHUDPostRender");

	Params::USpecialEventCursorPawnComponent_OnHUDPostRender_Params Parms{};

	Parms.HUD = HUD;
	Parms.Canvas = Canvas;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.MoveInputUpdate
// (Final, Native, Private, HasOutParams, HasDefaults)
// Parameters:
// struct FVector                     InInputVector                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorPawnComponent::MoveInputUpdate(struct FVector& InInputVector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "MoveInputUpdate");

	Params::USpecialEventCursorPawnComponent_MoveInputUpdate_Params Parms{};

	Parms.InInputVector = InInputVector;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.LookInputUpdate
// (Final, Native, Private, HasOutParams, HasDefaults)
// Parameters:
// struct FVector                     InInputVector                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorPawnComponent::LookInputUpdate(struct FVector& InInputVector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "LookInputUpdate");

	Params::USpecialEventCursorPawnComponent_LookInputUpdate_Params Parms{};

	Parms.InInputVector = InInputVector;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.IsZoomAllowed
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventCursorPawnComponent::IsZoomAllowed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "IsZoomAllowed");

	Params::USpecialEventCursorPawnComponent_IsZoomAllowed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.IsLocallyControlled
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventCursorPawnComponent::IsLocallyControlled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "IsLocallyControlled");

	Params::USpecialEventCursorPawnComponent_IsLocallyControlled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.IsAdditiveRotationAllowed
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventCursorPawnComponent::IsAdditiveRotationAllowed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "IsAdditiveRotationAllowed");

	Params::USpecialEventCursorPawnComponent_IsAdditiveRotationAllowed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.InputPressed
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FName                        ActionName                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPressed                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorPawnComponent::InputPressed(class FName& ActionName, bool bPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "InputPressed");

	Params::USpecialEventCursorPawnComponent_InputPressed_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.bPressed = bPressed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GyroInputUpdate
// (Final, Native, Private, HasOutParams, HasDefaults)
// Parameters:
// struct FVector                     InInputVector                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorPawnComponent::GyroInputUpdate(struct FVector& InInputVector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "GyroInputUpdate");

	Params::USpecialEventCursorPawnComponent_GyroInputUpdate_Params Parms{};

	Parms.InInputVector = InInputVector;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetWorldLocationAndDirection
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector                     OutWorldLocation                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutWorldDirection                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventCursorPawnComponent::GetWorldLocationAndDirection(struct FVector* OutWorldLocation, struct FVector* OutWorldDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "GetWorldLocationAndDirection");

	Params::USpecialEventCursorPawnComponent_GetWorldLocationAndDirection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "GetViewportSize");

	Params::USpecialEventCursorPawnComponent_GetViewportSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "GetViewportLocation");

	Params::USpecialEventCursorPawnComponent_GetViewportLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "GetViewportCenter");

	Params::USpecialEventCursorPawnComponent_GetViewportCenter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutViewportCenter != nullptr)
		*OutViewportCenter = Parms.OutViewportCenter;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetSpecialEventCursorPawnComponent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPawn*                       Pawn                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                CursorModeTag                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMustBeActive                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USpecialEventCursorPawnComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USpecialEventCursorPawnComponent* USpecialEventCursorPawnComponent::GetSpecialEventCursorPawnComponent(class UPawn* Pawn, struct FGameplayTag& CursorModeTag, bool bMustBeActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "GetSpecialEventCursorPawnComponent");

	Params::USpecialEventCursorPawnComponent_GetSpecialEventCursorPawnComponent_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.CursorModeTag = CursorModeTag;
	Parms.bMustBeActive = bMustBeActive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetNormalizedLocation
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USpecialEventCursorPawnComponent::GetNormalizedLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "GetNormalizedLocation");

	Params::USpecialEventCursorPawnComponent_GetNormalizedLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetLocalController
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPlayerController*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPlayerController* USpecialEventCursorPawnComponent::GetLocalController()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "GetLocalController");

	Params::USpecialEventCursorPawnComponent_GetLocalController_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetInputType
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECommonInputType        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECommonInputType USpecialEventCursorPawnComponent::GetInputType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "GetInputType");

	Params::USpecialEventCursorPawnComponent_GetInputType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCursorModeTagsForWidget
// (Final, RequiredAPI, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                 Widget                                                           (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer USpecialEventCursorPawnComponent::GetCursorModeTagsForWidget(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "GetCursorModeTagsForWidget");

	Params::USpecialEventCursorPawnComponent_GetCursorModeTagsForWidget_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCurrentWidget
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* USpecialEventCursorPawnComponent::GetCurrentWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "GetCurrentWidget");

	Params::USpecialEventCursorPawnComponent_GetCurrentWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCurrentHitResult
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FHitResult                  OutHitResult                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventCursorPawnComponent::GetCurrentHitResult(struct FHitResult* OutHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "GetCurrentHitResult");

	Params::USpecialEventCursorPawnComponent_GetCurrentHitResult_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "GetCurrentCursorModeTag");

	Params::USpecialEventCursorPawnComponent_GetCurrentCursorModeTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "GetCenteredWidgetLocation");

	Params::USpecialEventCursorPawnComponent_GetCenteredWidgetLocation_Params Parms{};

	Parms.Widget = Widget;
	Parms.ViewportLocation = ViewportLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCameraComponent
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCameraComponent*            ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCameraComponent* USpecialEventCursorPawnComponent::GetCameraComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "GetCameraComponent");

	Params::USpecialEventCursorPawnComponent_GetCameraComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "ConvertWorldToViewportLocation");

	Params::USpecialEventCursorPawnComponent_ConvertWorldToViewportLocation_Params Parms{};

	Parms.WorldLocation = WorldLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "ConvertWorldToNormalizedLocation");

	Params::USpecialEventCursorPawnComponent_ConvertWorldToNormalizedLocation_Params Parms{};

	Parms.WorldLocation = WorldLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "ConvertViewportToWorldLocationAndDirection");

	Params::USpecialEventCursorPawnComponent_ConvertViewportToWorldLocationAndDirection_Params Parms{};

	Parms.ViewportLocation = ViewportLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "ConvertViewportToNormalizedLocation");

	Params::USpecialEventCursorPawnComponent_ConvertViewportToNormalizedLocation_Params Parms{};

	Parms.ViewportLocation = ViewportLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "ConvertNormalizedToWorldLocationAndDirection");

	Params::USpecialEventCursorPawnComponent_ConvertNormalizedToWorldLocationAndDirection_Params Parms{};

	Parms.NormalizedLocation = NormalizedLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "ConvertNormalizedToViewportLocation");

	Params::USpecialEventCursorPawnComponent_ConvertNormalizedToViewportLocation_Params Parms{};

	Parms.NormalizedLocation = NormalizedLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorPawnComponent", "CanBeVisible");

	Params::USpecialEventCursorPawnComponent_CanBeVisible_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent
// (None)

class UClass* USpecialEventCursorWeaponComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpecialEventCursorWeaponComponent");

	return Clss;
}


// SpecialEventCursorWeaponComponent SpecialEventGameplayRuntime.Default__SpecialEventCursorWeaponComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USpecialEventCursorWeaponComponent* USpecialEventCursorWeaponComponent::GetDefaultObj()
{
	static class USpecialEventCursorWeaponComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USpecialEventCursorWeaponComponent*>(USpecialEventCursorWeaponComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnUnEquip
// (Final, Native, Private)
// Parameters:
// class UFortWeapon*                 Weapon                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorWeaponComponent::OnUnEquip(class UFortWeapon* Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorWeaponComponent", "OnUnEquip");

	Params::USpecialEventCursorWeaponComponent_OnUnEquip_Params Parms{};

	Parms.Weapon = Weapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnRep_CursorPawnComponent
// (Final, Native, Protected)
// Parameters:

void USpecialEventCursorWeaponComponent::OnRep_CursorPawnComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorWeaponComponent", "OnRep_CursorPawnComponent");

	Params::USpecialEventCursorWeaponComponent_OnRep_CursorPawnComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnPlayImpactFX
// (Final, Native, Private, HasOutParams)
// Parameters:
// class UFortWeapon*                 Weapon                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  HitResult                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UFXSystemComponent*          FXSystemComponent                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorWeaponComponent::OnPlayImpactFX(class UFortWeapon* Weapon, struct FHitResult& HitResult, class UFXSystemComponent* FXSystemComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorWeaponComponent", "OnPlayImpactFX");

	Params::USpecialEventCursorWeaponComponent_OnPlayImpactFX_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.HitResult = HitResult;
	Parms.FXSystemComponent = FXSystemComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnGetAimRotOverride
// (Final, Native, Private, HasOutParams, HasDefaults)
// Parameters:
// class UFortWeapon*                 Weapon                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortAbilityTargetingSourceTargetingSource                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    OutOverride                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bOutExecutionResult                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorWeaponComponent::OnGetAimRotOverride(class UFortWeapon* Weapon, enum class EFortAbilityTargetingSource TargetingSource, struct FRotator* OutOverride, bool* bOutExecutionResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorWeaponComponent", "OnGetAimRotOverride");

	Params::USpecialEventCursorWeaponComponent_OnGetAimRotOverride_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.TargetingSource = TargetingSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOverride != nullptr)
		*OutOverride = Parms.OutOverride;

	if (bOutExecutionResult != nullptr)
		*bOutExecutionResult = Parms.bOutExecutionResult;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnEquip
// (Final, Native, Private)
// Parameters:
// class UFortWeapon*                 Weapon                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorWeaponComponent::OnEquip(class UFortWeapon* Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorWeaponComponent", "OnEquip");

	Params::USpecialEventCursorWeaponComponent_OnEquip_Params Parms{};

	Parms.Weapon = Weapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnBeamFired
// (Final, Native, Private, HasOutParams, HasDefaults)
// Parameters:
// class UFortWeapon*                 Weapon                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUsePersistentBeam                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFXSystemComponent*          PSC                                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     BeamOrigin                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorWeaponComponent::OnBeamFired(class UFortWeapon* Weapon, bool bUsePersistentBeam, class UFXSystemComponent* PSC, struct FVector& BeamOrigin, struct FVector& HitLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorWeaponComponent", "OnBeamFired");

	Params::USpecialEventCursorWeaponComponent_OnBeamFired_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.bUsePersistentBeam = bUsePersistentBeam;
	Parms.PSC = PSC;
	Parms.BeamOrigin = BeamOrigin;
	Parms.HitLocation = HitLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetSpecialEventCursorPawnComponentForWeapon
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFortWeapon*                 Weapon                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USpecialEventCursorPawnComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USpecialEventCursorPawnComponent* USpecialEventCursorWeaponComponent::GetSpecialEventCursorPawnComponentForWeapon(class UFortWeapon* Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorWeaponComponent", "GetSpecialEventCursorPawnComponentForWeapon");

	Params::USpecialEventCursorWeaponComponent_GetSpecialEventCursorPawnComponentForWeapon_Params Parms{};

	Parms.Weapon = Weapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetSpecialEventCursorPawnComponentForCurrentWeapon
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFortPlayerPawn*             Pawn                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USpecialEventCursorPawnComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USpecialEventCursorPawnComponent* USpecialEventCursorWeaponComponent::GetSpecialEventCursorPawnComponentForCurrentWeapon(class UFortPlayerPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorWeaponComponent", "GetSpecialEventCursorPawnComponentForCurrentWeapon");

	Params::USpecialEventCursorWeaponComponent_GetSpecialEventCursorPawnComponentForCurrentWeapon_Params Parms{};

	Parms.Pawn = Pawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetCursorPawnComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USpecialEventCursorPawnComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USpecialEventCursorPawnComponent* USpecialEventCursorWeaponComponent::GetCursorPawnComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorWeaponComponent", "GetCursorPawnComponent");

	Params::USpecialEventCursorWeaponComponent_GetCursorPawnComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetCurrentSpecialEventCursorWeaponComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFortPlayerPawn*             Pawn                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USpecialEventCursorWeaponComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USpecialEventCursorWeaponComponent* USpecialEventCursorWeaponComponent::GetCurrentSpecialEventCursorWeaponComponent(class UFortPlayerPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorWeaponComponent", "GetCurrentSpecialEventCursorWeaponComponent");

	Params::USpecialEventCursorWeaponComponent_GetCurrentSpecialEventCursorWeaponComponent_Params Parms{};

	Parms.Pawn = Pawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetCurrentHitResult
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// struct FHitResult                  OutHitResult                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventCursorWeaponComponent::GetCurrentHitResult(struct FHitResult* OutHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorWeaponComponent", "GetCurrentHitResult");

	Params::USpecialEventCursorWeaponComponent_GetCurrentHitResult_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHitResult != nullptr)
		*OutHitResult = Parms.OutHitResult;

	return Parms.ReturnValue;

}


// Class SpecialEventGameplayRuntime.SpecialEventGameplayGlobals
// (None)

class UClass* USpecialEventGameplayGlobals::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpecialEventGameplayGlobals");

	return Clss;
}


// SpecialEventGameplayGlobals SpecialEventGameplayRuntime.Default__SpecialEventGameplayGlobals
// (Public, ClassDefaultObject, ArchetypeObject)

class USpecialEventGameplayGlobals* USpecialEventGameplayGlobals::GetDefaultObj()
{
	static class USpecialEventGameplayGlobals* Default = nullptr;

	if (!Default)
		Default = static_cast<USpecialEventGameplayGlobals*>(USpecialEventGameplayGlobals::StaticClass()->DefaultObject);

	return Default;
}


// Class SpecialEventGameplayRuntime.SpecialEventGameplayLibrary
// (None)

class UClass* USpecialEventGameplayLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpecialEventGameplayLibrary");

	return Clss;
}


// SpecialEventGameplayLibrary SpecialEventGameplayRuntime.Default__SpecialEventGameplayLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USpecialEventGameplayLibrary* USpecialEventGameplayLibrary::GetDefaultObj()
{
	static class USpecialEventGameplayLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USpecialEventGameplayLibrary*>(USpecialEventGameplayLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.StreamOutAllBuildingFoundations
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameplayLibrary::StreamOutAllBuildingFoundations(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "StreamOutAllBuildingFoundations");

	Params::USpecialEventGameplayLibrary_StreamOutAllBuildingFoundations_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.SetNextLoadingScreen
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAthenaLoadingScreenItemDefinition*LoadingScreenDefinition                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCanShowLoadingBar                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameplayLibrary::SetNextLoadingScreen(class UObject* WorldContextObject, class UAthenaLoadingScreenItemDefinition* LoadingScreenDefinition, bool bCanShowLoadingBar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "SetNextLoadingScreen");

	Params::USpecialEventGameplayLibrary_SetNextLoadingScreen_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LoadingScreenDefinition = LoadingScreenDefinition;
	Parms.bCanShowLoadingBar = bCanShowLoadingBar;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.SetLODOnLandscapProxies
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForced                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InLODValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameplayLibrary::SetLODOnLandscapProxies(class UObject* WorldContextObject, bool bForced, int32 InLODValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "SetLODOnLandscapProxies");

	Params::USpecialEventGameplayLibrary_SetLODOnLandscapProxies_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.bForced = bForced;
	Parms.InLODValue = InLODValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.HideSkydivingShadowProxy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameplayLibrary::HideSkydivingShadowProxy(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "HideSkydivingShadowProxy");

	Params::USpecialEventGameplayLibrary_HideSkydivingShadowProxy_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetSpecialEventScript
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USpecialEventScript*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USpecialEventScript* USpecialEventGameplayLibrary::GetSpecialEventScript(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "GetSpecialEventScript");

	Params::USpecialEventGameplayLibrary_GetSpecialEventScript_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetSpecialEventPlayerDisplayName
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFortPlayerControllerAthena* LocalController                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlayerStateAthena*      PlayerState                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USpecialEventGameplayLibrary::GetSpecialEventPlayerDisplayName(class UFortPlayerControllerAthena* LocalController, class UFortPlayerStateAthena* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "GetSpecialEventPlayerDisplayName");

	Params::USpecialEventGameplayLibrary_GetSpecialEventPlayerDisplayName_Params Parms{};

	Parms.LocalController = LocalController;
	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetSpecialEventMutator
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaMutator_SpecialEvent*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaMutator_SpecialEvent* USpecialEventGameplayLibrary::GetSpecialEventMutator(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "GetSpecialEventMutator");

	Params::USpecialEventGameplayLibrary_GetSpecialEventMutator_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetLocalPlayerLoadout
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortAthenaLoadout          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FFortAthenaLoadout USpecialEventGameplayLibrary::GetLocalPlayerLoadout(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "GetLocalPlayerLoadout");

	Params::USpecialEventGameplayLibrary_GetLocalPlayerLoadout_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetHasInfiniteSafeZonePhase
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventGameplayLibrary::GetHasInfiniteSafeZonePhase(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "GetHasInfiniteSafeZonePhase");

	Params::USpecialEventGameplayLibrary_GetHasInfiniteSafeZonePhase_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.ForceUpdateGrass
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameplayLibrary::ForceUpdateGrass(class UObject* WorldContextObject, const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "ForceUpdateGrass");

	Params::USpecialEventGameplayLibrary_ForceUpdateGrass_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.ForceDestroyComponents
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UActorComponent*>     Components                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               bPromoteChildren                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      LogContext                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameplayLibrary::ForceDestroyComponents(TArray<class UActorComponent*>& Components, bool bPromoteChildren, const class FString& LogContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "ForceDestroyComponents");

	Params::USpecialEventGameplayLibrary_ForceDestroyComponents_Params Parms{};

	Parms.Components = Components;
	Parms.bPromoteChildren = bPromoteChildren;
	Parms.LogContext = LogContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.FindSpecialEventComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UController*                 Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortControllerComponent_SpecialEvent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortControllerComponent_SpecialEvent* USpecialEventGameplayLibrary::FindSpecialEventComponent(class UController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "FindSpecialEventComponent");

	Params::USpecialEventGameplayLibrary_FindSpecialEventComponent_Params Parms{};

	Parms.Controller = Controller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.FindGameplayCinematicComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UController*                 Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortControllerComponent_GameplayCinematic*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortControllerComponent_GameplayCinematic* USpecialEventGameplayLibrary::FindGameplayCinematicComponent(class UController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "FindGameplayCinematicComponent");

	Params::USpecialEventGameplayLibrary_FindGameplayCinematicComponent_Params Parms{};

	Parms.Controller = Controller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.DetachPawnFromComponent
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFortPawn*                   Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             Component                                                        (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDetachmentRule         LocationRule                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDetachmentRule         RotationRule                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDetachmentRule         ScaleRule                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventGameplayLibrary::DetachPawnFromComponent(class UFortPawn* Pawn, class USceneComponent* Component, enum class EDetachmentRule LocationRule, enum class EDetachmentRule RotationRule, enum class EDetachmentRule ScaleRule)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "DetachPawnFromComponent");

	Params::USpecialEventGameplayLibrary_DetachPawnFromComponent_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.Component = Component;
	Parms.LocationRule = LocationRule;
	Parms.RotationRule = RotationRule;
	Parms.ScaleRule = ScaleRule;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.DetachPawn
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFortPawn*                   Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDetachmentRule         LocationRule                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDetachmentRule         RotationRule                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDetachmentRule         ScaleRule                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventGameplayLibrary::DetachPawn(class UFortPawn* Pawn, enum class EDetachmentRule LocationRule, enum class EDetachmentRule RotationRule, enum class EDetachmentRule ScaleRule)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "DetachPawn");

	Params::USpecialEventGameplayLibrary_DetachPawn_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.LocationRule = LocationRule;
	Parms.RotationRule = RotationRule;
	Parms.ScaleRule = ScaleRule;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.CreateSpecialEventPlayerEliminationWorldMarker
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UFortPlayerControllerAthena* LocalController                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlayerStateAthena*      VictimPlayerState                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     DeathLocation                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameplayLibrary::CreateSpecialEventPlayerEliminationWorldMarker(class UFortPlayerControllerAthena* LocalController, class UFortPlayerStateAthena* VictimPlayerState, struct FVector& DeathLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "CreateSpecialEventPlayerEliminationWorldMarker");

	Params::USpecialEventGameplayLibrary_CreateSpecialEventPlayerEliminationWorldMarker_Params Parms{};

	Parms.LocalController = LocalController;
	Parms.VictimPlayerState = VictimPlayerState;
	Parms.DeathLocation = DeathLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.AttachPawnToComponent
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFortPawn*                   Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             Component                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SocketName                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAttachmentRule         LocationRule                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAttachmentRule         RotationRule                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAttachmentRule         ScaleRule                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWeldSimulatedBodies                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventGameplayLibrary::AttachPawnToComponent(class UFortPawn* Pawn, class USceneComponent* Component, class FName SocketName, enum class EAttachmentRule LocationRule, enum class EAttachmentRule RotationRule, enum class EAttachmentRule ScaleRule, bool bWeldSimulatedBodies)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "AttachPawnToComponent");

	Params::USpecialEventGameplayLibrary_AttachPawnToComponent_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.Component = Component;
	Parms.SocketName = SocketName;
	Parms.LocationRule = LocationRule;
	Parms.RotationRule = RotationRule;
	Parms.ScaleRule = ScaleRule;
	Parms.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.AddSpecialEventRecentElimination
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlayerStateAthena*      PlayerState                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameplayLibrary::AddSpecialEventRecentElimination(struct FVector& Location, class UFortPlayerStateAthena* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "AddSpecialEventRecentElimination");

	Params::USpecialEventGameplayLibrary_AddSpecialEventRecentElimination_Params Parms{};

	Parms.Location = Location;
	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.AddSpecialEventKillFeedEntry
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlayerStateAthena*      VictimPlayerState                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlayerStateAthena*      KillerPlayerState                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        NonPlayerVictimName                                              (ConstParm, Parm, NativeAccessSpecifierPublic)
// class FText                        NonPlayerKillerName                                              (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FGameplayTag                DeathCauseTag                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDeathCauseReason       DeathCauseReason                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Distance                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameplayLibrary::AddSpecialEventKillFeedEntry(class UObject* WorldContextObject, class UFortPlayerStateAthena* VictimPlayerState, class UFortPlayerStateAthena* KillerPlayerState, class FText NonPlayerVictimName, class FText NonPlayerKillerName, struct FGameplayTag& DeathCauseTag, enum class EDeathCauseReason DeathCauseReason, float Distance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "AddSpecialEventKillFeedEntry");

	Params::USpecialEventGameplayLibrary_AddSpecialEventKillFeedEntry_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.VictimPlayerState = VictimPlayerState;
	Parms.KillerPlayerState = KillerPlayerState;
	Parms.NonPlayerVictimName = NonPlayerVictimName;
	Parms.NonPlayerKillerName = NonPlayerKillerName;
	Parms.DeathCauseTag = DeathCauseTag;
	Parms.DeathCauseReason = DeathCauseReason;
	Parms.Distance = Distance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.FortAsyncAction_GameplayCinematicComponentReady
// (None)

class UClass* UFortAsyncAction_GameplayCinematicComponentReady::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAsyncAction_GameplayCinematicComponentReady");

	return Clss;
}


// FortAsyncAction_GameplayCinematicComponentReady SpecialEventGameplayRuntime.Default__FortAsyncAction_GameplayCinematicComponentReady
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAsyncAction_GameplayCinematicComponentReady* UFortAsyncAction_GameplayCinematicComponentReady::GetDefaultObj()
{
	static class UFortAsyncAction_GameplayCinematicComponentReady* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAsyncAction_GameplayCinematicComponentReady*>(UFortAsyncAction_GameplayCinematicComponentReady::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.FortAsyncAction_GameplayCinematicComponentReady.FindGameplayCinematicComponentAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UController*                 Conroller                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAsyncAction_GameplayCinematicComponentReady*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAsyncAction_GameplayCinematicComponentReady* UFortAsyncAction_GameplayCinematicComponentReady::FindGameplayCinematicComponentAsync(class UController* Conroller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAsyncAction_GameplayCinematicComponentReady", "FindGameplayCinematicComponentAsync");

	Params::UFortAsyncAction_GameplayCinematicComponentReady_FindGameplayCinematicComponentAsync_Params Parms{};

	Parms.Conroller = Conroller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent
// (None)

class UClass* USpecialEventGameUserSettingsControllerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpecialEventGameUserSettingsControllerComponent");

	return Clss;
}


// SpecialEventGameUserSettingsControllerComponent SpecialEventGameplayRuntime.Default__SpecialEventGameUserSettingsControllerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USpecialEventGameUserSettingsControllerComponent* USpecialEventGameUserSettingsControllerComponent::GetDefaultObj()
{
	static class USpecialEventGameUserSettingsControllerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USpecialEventGameUserSettingsControllerComponent*>(USpecialEventGameUserSettingsControllerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SpecialEventGameUserSettings_ToggleDebug
// (Final, BlueprintCosmetic, Exec, Native, Public)
// Parameters:

void USpecialEventGameUserSettingsControllerComponent::SpecialEventGameUserSettings_ToggleDebug()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameUserSettingsControllerComponent", "SpecialEventGameUserSettings_ToggleDebug");

	Params::USpecialEventGameUserSettingsControllerComponent_SpecialEventGameUserSettings_ToggleDebug_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SpecialEventGameUserSettings_SetData
// (Final, BlueprintCosmetic, Exec, Native, Public)
// Parameters:
// class FString                      Data                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameUserSettingsControllerComponent::SpecialEventGameUserSettings_SetData(const class FString& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameUserSettingsControllerComponent", "SpecialEventGameUserSettings_SetData");

	Params::USpecialEventGameUserSettingsControllerComponent_SpecialEventGameUserSettings_SetData_Params Parms{};

	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SpecialEventGameUserSettings_LogData
// (Final, BlueprintCosmetic, Exec, Native, Public, Const)
// Parameters:

void USpecialEventGameUserSettingsControllerComponent::SpecialEventGameUserSettings_LogData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameUserSettingsControllerComponent", "SpecialEventGameUserSettings_LogData");

	Params::USpecialEventGameUserSettingsControllerComponent_SpecialEventGameUserSettings_LogData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SpecialEventGameUserSettings_ClearData
// (Final, BlueprintCosmetic, Exec, Native, Public)
// Parameters:

void USpecialEventGameUserSettingsControllerComponent::SpecialEventGameUserSettings_ClearData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameUserSettingsControllerComponent", "SpecialEventGameUserSettings_ClearData");

	Params::USpecialEventGameUserSettingsControllerComponent_SpecialEventGameUserSettings_ClearData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SetSavingBlocked
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bBlocked                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameUserSettingsControllerComponent::SetSavingBlocked(bool bBlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameUserSettingsControllerComponent", "SetSavingBlocked");

	Params::USpecialEventGameUserSettingsControllerComponent_SetSavingBlocked_Params Parms{};

	Parms.bBlocked = bBlocked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SetData
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Data                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowSave                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSaveNow                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameUserSettingsControllerComponent::SetData(const class FString& Data, bool bAllowSave, bool bSaveNow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameUserSettingsControllerComponent", "SetData");

	Params::USpecialEventGameUserSettingsControllerComponent_SetData_Params Parms{};

	Parms.Data = Data;
	Parms.bAllowSave = bAllowSave;
	Parms.bSaveNow = bSaveNow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.ParseLoadedData
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class FString                      Data                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameUserSettingsControllerComponent::ParseLoadedData(const class FString& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameUserSettingsControllerComponent", "ParseLoadedData");

	Params::USpecialEventGameUserSettingsControllerComponent_ParseLoadedData_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameUserSettingsControllerComponent", "GetSpecialEventGameUserSettingsControllerComponent");

	Params::USpecialEventGameUserSettingsControllerComponent_GetSpecialEventGameUserSettingsControllerComponent_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.GetData
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// enum class ESpecialEventGameUserSettingsResultOutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutData                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameUserSettingsControllerComponent::GetData(enum class ESpecialEventGameUserSettingsResult* OutResult, class FString* OutData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameUserSettingsControllerComponent", "GetData");

	Params::USpecialEventGameUserSettingsControllerComponent_GetData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	if (OutData != nullptr)
		*OutData = Parms.OutData;

}


// Class SpecialEventGameplayRuntime.FortAsyncAction_SpecialEventGameUserSettingsReady
// (None)

class UClass* UFortAsyncAction_SpecialEventGameUserSettingsReady::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAsyncAction_SpecialEventGameUserSettingsReady");

	return Clss;
}


// FortAsyncAction_SpecialEventGameUserSettingsReady SpecialEventGameplayRuntime.Default__FortAsyncAction_SpecialEventGameUserSettingsReady
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAsyncAction_SpecialEventGameUserSettingsReady* UFortAsyncAction_SpecialEventGameUserSettingsReady::GetDefaultObj()
{
	static class UFortAsyncAction_SpecialEventGameUserSettingsReady* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAsyncAction_SpecialEventGameUserSettingsReady*>(UFortAsyncAction_SpecialEventGameUserSettingsReady::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.FortAsyncAction_SpecialEventGameUserSettingsReady.SpecialEventGameUserSettingsReadyAsync
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAsyncAction_SpecialEventGameUserSettingsReady*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAsyncAction_SpecialEventGameUserSettingsReady* UFortAsyncAction_SpecialEventGameUserSettingsReady::SpecialEventGameUserSettingsReadyAsync(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAsyncAction_SpecialEventGameUserSettingsReady", "SpecialEventGameUserSettingsReadyAsync");

	Params::UFortAsyncAction_SpecialEventGameUserSettingsReady_SpecialEventGameUserSettingsReadyAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SpecialEventGameplayRuntime.SpecialEventPhase
// (Actor)

class UClass* USpecialEventPhase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpecialEventPhase");

	return Clss;
}


// SpecialEventPhase SpecialEventGameplayRuntime.Default__SpecialEventPhase
// (Public, ClassDefaultObject, ArchetypeObject)

class USpecialEventPhase* USpecialEventPhase::GetDefaultObj()
{
	static class USpecialEventPhase* Default = nullptr;

	if (!Default)
		Default = static_cast<USpecialEventPhase*>(USpecialEventPhase::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.SpecialEventPhase.SetHUDElementVisibility
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       HUDElementTags                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bHideElements                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventPhase::SetHUDElementVisibility(struct FGameplayTagContainer& HUDElementTags, bool bHideElements)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventPhase", "SetHUDElementVisibility");

	Params::USpecialEventPhase_SetHUDElementVisibility_Params Parms{};

	Parms.HUDElementTags = HUDElementTags;
	Parms.bHideElements = bHideElements;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventPhase.PrePhaseActivation_Server
// (Event, Protected, BlueprintEvent)
// Parameters:

void USpecialEventPhase::PrePhaseActivation_Server()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventPhase", "PrePhaseActivation_Server");

	Params::USpecialEventPhase_PrePhaseActivation_Server_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.SpecialEventPhase.OnRep_PhaseState
// (Final, Native, Protected)
// Parameters:

void USpecialEventPhase::OnRep_PhaseState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventPhase", "OnRep_PhaseState");

	Params::USpecialEventPhase_OnRep_PhaseState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseFinished
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void USpecialEventPhase::OnPhaseFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventPhase", "OnPhaseFinished");

	Params::USpecialEventPhase_OnPhaseFinished_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseDeactivation_Server
// (Event, Protected, BlueprintEvent)
// Parameters:

void USpecialEventPhase::OnPhaseDeactivation_Server()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventPhase", "OnPhaseDeactivation_Server");

	Params::USpecialEventPhase_OnPhaseDeactivation_Server_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseDeactivation_Client
// (Event, Protected, BlueprintEvent)
// Parameters:

void USpecialEventPhase::OnPhaseDeactivation_Client()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventPhase", "OnPhaseDeactivation_Client");

	Params::USpecialEventPhase_OnPhaseDeactivation_Client_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseActivation_Server
// (Event, Protected, BlueprintEvent)
// Parameters:

void USpecialEventPhase::OnPhaseActivation_Server()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventPhase", "OnPhaseActivation_Server");

	Params::USpecialEventPhase_OnPhaseActivation_Server_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseActivation_Client
// (Event, Protected, BlueprintEvent)
// Parameters:

void USpecialEventPhase::OnPhaseActivation_Client()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventPhase", "OnPhaseActivation_Client");

	Params::USpecialEventPhase_OnPhaseActivation_Client_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.SpecialEventPhase.GetPhaseTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag USpecialEventPhase::GetPhaseTag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventPhase", "GetPhaseTag");

	Params::USpecialEventPhase_GetPhaseTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventPhase.DebugActivatePhase
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void USpecialEventPhase::DebugActivatePhase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventPhase", "DebugActivatePhase");

	Params::USpecialEventPhase_DebugActivatePhase_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.SpecialEventPlayerMannequin
// (Actor)

class UClass* USpecialEventPlayerMannequin::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpecialEventPlayerMannequin");

	return Clss;
}


// SpecialEventPlayerMannequin SpecialEventGameplayRuntime.Default__SpecialEventPlayerMannequin
// (Public, ClassDefaultObject, ArchetypeObject)

class USpecialEventPlayerMannequin* USpecialEventPlayerMannequin::GetDefaultObj()
{
	static class USpecialEventPlayerMannequin* Default = nullptr;

	if (!Default)
		Default = static_cast<USpecialEventPlayerMannequin*>(USpecialEventPlayerMannequin::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.SpecialEventPlayerMannequin.RegisterWithSpecialEventMutator
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void USpecialEventPlayerMannequin::RegisterWithSpecialEventMutator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventPlayerMannequin", "RegisterWithSpecialEventMutator");

	Params::USpecialEventPlayerMannequin_RegisterWithSpecialEventMutator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventPlayerMannequin.HandleOnMutatorAdded
// (Final, Native, Protected)
// Parameters:
// class UFortGameplayMutator*        NewMutator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventPlayerMannequin::HandleOnMutatorAdded(class UFortGameplayMutator* NewMutator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventPlayerMannequin", "HandleOnMutatorAdded");

	Params::USpecialEventPlayerMannequin_HandleOnMutatorAdded_Params Parms{};

	Parms.NewMutator = NewMutator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventPlayerMannequin.DestroyUnusedSkeletalMeshComponents
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void USpecialEventPlayerMannequin::DestroyUnusedSkeletalMeshComponents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventPlayerMannequin", "DestroyUnusedSkeletalMeshComponents");

	Params::USpecialEventPlayerMannequin_DestroyUnusedSkeletalMeshComponents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.SpecialEventRewindComponent
// (None)

class UClass* USpecialEventRewindComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpecialEventRewindComponent");

	return Clss;
}


// SpecialEventRewindComponent SpecialEventGameplayRuntime.Default__SpecialEventRewindComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USpecialEventRewindComponent* USpecialEventRewindComponent::GetDefaultObj()
{
	static class USpecialEventRewindComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USpecialEventRewindComponent*>(USpecialEventRewindComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.SpecialEventRewindComponent.TryStartRewinding
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                              Duration                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PlaybackSpeed                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventRewindComponent::TryStartRewinding(float Duration, float PlaybackSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventRewindComponent", "TryStartRewinding");

	Params::USpecialEventRewindComponent_TryStartRewinding_Params Parms{};

	Parms.Duration = Duration;
	Parms.PlaybackSpeed = PlaybackSpeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventRewindComponent.OnRep_StateData
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FSpecialEventRewindComponentStateDataOldStateData                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USpecialEventRewindComponent::OnRep_StateData(struct FSpecialEventRewindComponentStateData& OldStateData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventRewindComponent", "OnRep_StateData");

	Params::USpecialEventRewindComponent_OnRep_StateData_Params Parms{};

	Parms.OldStateData = OldStateData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.SpecialEventRewindComponent_PlayerPawn
// (None)

class UClass* USpecialEventRewindComponent_PlayerPawn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpecialEventRewindComponent_PlayerPawn");

	return Clss;
}


// SpecialEventRewindComponent_PlayerPawn SpecialEventGameplayRuntime.Default__SpecialEventRewindComponent_PlayerPawn
// (Public, ClassDefaultObject, ArchetypeObject)

class USpecialEventRewindComponent_PlayerPawn* USpecialEventRewindComponent_PlayerPawn::GetDefaultObj()
{
	static class USpecialEventRewindComponent_PlayerPawn* Default = nullptr;

	if (!Default)
		Default = static_cast<USpecialEventRewindComponent_PlayerPawn*>(USpecialEventRewindComponent_PlayerPawn::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.SpecialEventRewindComponent_PlayerPawn.OnServerLanded
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void USpecialEventRewindComponent_PlayerPawn::OnServerLanded(struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventRewindComponent_PlayerPawn", "OnServerLanded");

	Params::USpecialEventRewindComponent_PlayerPawn_OnServerLanded_Params Parms{};

	Parms.Hit = Hit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.SpecialEventScript
// (Actor)

class UClass* USpecialEventScript::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpecialEventScript");

	return Clss;
}


// SpecialEventScript SpecialEventGameplayRuntime.Default__SpecialEventScript
// (Public, ClassDefaultObject, ArchetypeObject)

class USpecialEventScript* USpecialEventScript::GetDefaultObj()
{
	static class USpecialEventScript* Default = nullptr;

	if (!Default)
		Default = static_cast<USpecialEventScript*>(USpecialEventScript::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.SpecialEventScript.UpdateMasterSequence
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventScript::UpdateMasterSequence(float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventScript", "UpdateMasterSequence");

	Params::USpecialEventScript_UpdateMasterSequence_Params Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventScript.StartEventAtIndex
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InStartingIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventScript::StartEventAtIndex(int32 InStartingIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventScript", "StartEventAtIndex");

	Params::USpecialEventScript_StartEventAtIndex_Params Parms{};

	Parms.InStartingIndex = InStartingIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventScript.SetLocalPlayersSignificantForSpecialEventSequence
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// bool                               bIsSignificant                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventScript::SetLocalPlayersSignificantForSpecialEventSequence(bool bIsSignificant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventScript", "SetLocalPlayersSignificantForSpecialEventSequence");

	Params::USpecialEventScript_SetLocalPlayersSignificantForSpecialEventSequence_Params Parms{};

	Parms.bIsSignificant = bIsSignificant;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventScript.OnRep_ReplicatedActivePhaseIndex
// (Final, Native, Protected)
// Parameters:

void USpecialEventScript::OnRep_ReplicatedActivePhaseIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventScript", "OnRep_ReplicatedActivePhaseIndex");

	Params::USpecialEventScript_OnRep_ReplicatedActivePhaseIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventScript.GetActivePhaseIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USpecialEventScript::GetActivePhaseIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventScript", "GetActivePhaseIndex");

	Params::USpecialEventScript_GetActivePhaseIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventScript.BP_OnScriptReady
// (Event, Protected, BlueprintEvent)
// Parameters:

void USpecialEventScript::BP_OnScriptReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventScript", "BP_OnScriptReady");

	Params::USpecialEventScript_BP_OnScriptReady_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.SpecialEventScript.BP_OnScriptFinished
// (Event, Protected, BlueprintEvent)
// Parameters:

void USpecialEventScript::BP_OnScriptFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventScript", "BP_OnScriptFinished");

	Params::USpecialEventScript_BP_OnScriptFinished_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.SpecialEventScript.AttemptStartNextPhase
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                CurrentPhaseTag                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventScript::AttemptStartNextPhase(const struct FGameplayTag& CurrentPhaseTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventScript", "AttemptStartNextPhase");

	Params::USpecialEventScript_AttemptStartNextPhase_Params Parms{};

	Parms.CurrentPhaseTag = CurrentPhaseTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventScript.AttemptFinishPhase
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                PhaseTag                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventScript::AttemptFinishPhase(const struct FGameplayTag& PhaseTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventScript", "AttemptFinishPhase");

	Params::USpecialEventScript_AttemptFinishPhase_Params Parms{};

	Parms.PhaseTag = PhaseTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.SpecialEventScriptMeshActor
// (Actor)

class UClass* USpecialEventScriptMeshActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpecialEventScriptMeshActor");

	return Clss;
}


// SpecialEventScriptMeshActor SpecialEventGameplayRuntime.Default__SpecialEventScriptMeshActor
// (Public, ClassDefaultObject, ArchetypeObject)

class USpecialEventScriptMeshActor* USpecialEventScriptMeshActor::GetDefaultObj()
{
	static class USpecialEventScriptMeshActor* Default = nullptr;

	if (!Default)
		Default = static_cast<USpecialEventScriptMeshActor*>(USpecialEventScriptMeshActor::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.OnRep_RootStartTime
// (Final, Native, Protected)
// Parameters:

void USpecialEventScriptMeshActor::OnRep_RootStartTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventScriptMeshActor", "OnRep_RootStartTime");

	Params::USpecialEventScriptMeshActor_OnRep_RootStartTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootStartEvent
// (Final, Exec, Native, Public)
// Parameters:

void USpecialEventScriptMeshActor::MeshRootStartEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventScriptMeshActor", "MeshRootStartEvent");

	Params::USpecialEventScriptMeshActor_MeshRootStartEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootStartCalendarTimerOnly
// (Final, Exec, Native, Public)
// Parameters:

void USpecialEventScriptMeshActor::MeshRootStartCalendarTimerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventScriptMeshActor", "MeshRootStartCalendarTimerOnly");

	Params::USpecialEventScriptMeshActor_MeshRootStartCalendarTimerOnly_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootStartCalendarTimer
// (Final, Exec, Native, Public)
// Parameters:

void USpecialEventScriptMeshActor::MeshRootStartCalendarTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventScriptMeshActor", "MeshRootStartCalendarTimer");

	Params::USpecialEventScriptMeshActor_MeshRootStartCalendarTimer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootResetEvent
// (Final, Exec, Native, Public)
// Parameters:

void USpecialEventScriptMeshActor::MeshRootResetEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventScriptMeshActor", "MeshRootResetEvent");

	Params::USpecialEventScriptMeshActor_MeshRootResetEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootLogCalendarTimer
// (Final, Exec, Native, Public)
// Parameters:

void USpecialEventScriptMeshActor::MeshRootLogCalendarTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventScriptMeshActor", "MeshRootLogCalendarTimer");

	Params::USpecialEventScriptMeshActor_MeshRootLogCalendarTimer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootClearCalendarTimer
// (Final, Exec, Native, Public)
// Parameters:

void USpecialEventScriptMeshActor::MeshRootClearCalendarTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventScriptMeshActor", "MeshRootClearCalendarTimer");

	Params::USpecialEventScriptMeshActor_MeshRootClearCalendarTimer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.SpecialEventStatComponent
// (None)

class UClass* USpecialEventStatComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpecialEventStatComponent");

	return Clss;
}


// SpecialEventStatComponent SpecialEventGameplayRuntime.Default__SpecialEventStatComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USpecialEventStatComponent* USpecialEventStatComponent::GetDefaultObj()
{
	static class USpecialEventStatComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USpecialEventStatComponent*>(USpecialEventStatComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.SpecialEventStatComponent.GetStat
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               bOutValid                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                LookupTag                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSpecialEventStatArrayEntry ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FSpecialEventStatArrayEntry USpecialEventStatComponent::GetStat(bool* bOutValid, const struct FGameplayTag& LookupTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventStatComponent", "GetStat");

	Params::USpecialEventStatComponent_GetStat_Params Parms{};

	Parms.LookupTag = LookupTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOutValid != nullptr)
		*bOutValid = Parms.bOutValid;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventStatComponent.GetSpecialEventStat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               bOutValid                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                LookupTag                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSpecialEventStatArrayEntry ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FSpecialEventStatArrayEntry USpecialEventStatComponent::GetSpecialEventStat(bool* bOutValid, class UActor* Actor, const struct FGameplayTag& LookupTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventStatComponent", "GetSpecialEventStat");

	Params::USpecialEventStatComponent_GetSpecialEventStat_Params Parms{};

	Parms.Actor = Actor;
	Parms.LookupTag = LookupTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventStatComponent", "AdjustStat");

	Params::USpecialEventStatComponent_AdjustStat_Params Parms{};

	Parms.LookupTag = LookupTag;
	Parms.Adjustment = Adjustment;
	Parms.bLogError = bLogError;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventStatComponent.AdjustSpecialEventStat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                LookupTag                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Adjustment                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventStatComponent::AdjustSpecialEventStat(class UActor* Actor, const struct FGameplayTag& LookupTag, float Adjustment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventStatComponent", "AdjustSpecialEventStat");

	Params::USpecialEventStatComponent_AdjustSpecialEventStat_Params Parms{};

	Parms.Actor = Actor;
	Parms.LookupTag = LookupTag;
	Parms.Adjustment = Adjustment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.DamageRecordEntry
// (None)

class UClass* UDamageRecordEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageRecordEntry");

	return Clss;
}


// DamageRecordEntry SpecialEventGameplayRuntime.Default__DamageRecordEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class UDamageRecordEntry* UDamageRecordEntry::GetDefaultObj()
{
	static class UDamageRecordEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageRecordEntry*>(UDamageRecordEntry::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.DamageRecordEntry.OnRep_DamageTotal
// (Final, Native, Public)
// Parameters:

void UDamageRecordEntry::OnRep_DamageTotal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DamageRecordEntry", "OnRep_DamageTotal");

	Params::UDamageRecordEntry_OnRep_DamageTotal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent
// (None)

class UClass* USpecialRelevancyHealthComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpecialRelevancyHealthComponent");

	return Clss;
}


// SpecialRelevancyHealthComponent SpecialEventGameplayRuntime.Default__SpecialRelevancyHealthComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USpecialRelevancyHealthComponent* USpecialRelevancyHealthComponent::GetDefaultObj()
{
	static class USpecialRelevancyHealthComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USpecialRelevancyHealthComponent*>(USpecialRelevancyHealthComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.OnKilled
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPlayerState*            KillingPlayerState                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RelevancyGroupIndex                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialRelevancyHealthComponent::OnKilled(class UFortPlayerState* KillingPlayerState, int32 RelevancyGroupIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialRelevancyHealthComponent", "OnKilled");

	Params::USpecialRelevancyHealthComponent_OnKilled_Params Parms{};

	Parms.KillingPlayerState = KillingPlayerState;
	Parms.RelevancyGroupIndex = RelevancyGroupIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.OnDamaged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPlayerState*            DamagingPlayerState                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RelevancyGroupIndex                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DealtDamage                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ActualDealtDamage                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TotalDamage                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DealtDamagePercent                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ActualDealtDamagePercent                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TotalDamagePercent                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxHealth                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bKilled                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialRelevancyHealthComponent::OnDamaged(class UFortPlayerState* DamagingPlayerState, int32 RelevancyGroupIndex, float DealtDamage, float ActualDealtDamage, float TotalDamage, float DealtDamagePercent, float ActualDealtDamagePercent, float TotalDamagePercent, float MaxHealth, bool bKilled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialRelevancyHealthComponent", "OnDamaged");

	Params::USpecialRelevancyHealthComponent_OnDamaged_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialRelevancyHealthComponent", "GetHealthPercentFromRelevancyIndex");

	Params::USpecialRelevancyHealthComponent_GetHealthPercentFromRelevancyIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.GetHealthPercent
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      RelevancyActor                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USpecialRelevancyHealthComponent::GetHealthPercent(class UActor* RelevancyActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialRelevancyHealthComponent", "GetHealthPercent");

	Params::USpecialRelevancyHealthComponent_GetHealthPercent_Params Parms{};

	Parms.RelevancyActor = RelevancyActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.GetHealthFromRelevancyIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USpecialRelevancyHealthComponent::GetHealthFromRelevancyIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialRelevancyHealthComponent", "GetHealthFromRelevancyIndex");

	Params::USpecialRelevancyHealthComponent_GetHealthFromRelevancyIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.GetHealth
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      RelevancyActor                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USpecialRelevancyHealthComponent::GetHealth(class UActor* RelevancyActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialRelevancyHealthComponent", "GetHealth");

	Params::USpecialRelevancyHealthComponent_GetHealth_Params Parms{};

	Parms.RelevancyActor = RelevancyActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.ClientGetHealthPercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USpecialRelevancyHealthComponent::ClientGetHealthPercent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialRelevancyHealthComponent", "ClientGetHealthPercent");

	Params::USpecialRelevancyHealthComponent_ClientGetHealthPercent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.ClientGetHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USpecialRelevancyHealthComponent::ClientGetHealth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialRelevancyHealthComponent", "ClientGetHealth");

	Params::USpecialRelevancyHealthComponent_ClientGetHealth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


