#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x368 - 0x338)
// Class SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEventTODM
class AFortAthenaMutator_SpecialEventTODM : public AFortAthenaMutator
{
public:
	TArray<struct FSpecialEventTODMPhaseData>    PhaseDataArray;                                    // 0x338(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class ASpecialEventScript*                   SpecialEventScript;                                // 0x348(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_469E[0x10];                                    // Fixing Size After Last Property..
	class AFortTimeOfDayManager*                 SpawnedTODM;                                       // 0x360(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaMutator_SpecialEventTODM");
		return Clss;
	}

	void OnPhaseActivated(class ASpecialEventScript* InSpecialEventScript, class ASpecialEventPhase* InSpecialEventPhase);
};

// 0x0 (0x38 - 0x38)
// Class SpecialEventGameplayRuntime.FortCheatManager_DestroyActorsAndComponents
class UFortCheatManager_DestroyActorsAndComponents : public UFortCheatManager_Coupled
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCheatManager_DestroyActorsAndComponents");
		return Clss;
	}

	void DestroyActorsAndComponentsMutator_SetActorDefinitionsEnabled(const class FString& TagString, bool bEnabled);
	void DestroyActorsAndComponentsMutator_ListActorComponents(const class FString& InActorName);
};

// 0x30 (0x368 - 0x338)
// Class SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents
class AFortAthenaMutator_DestroyActorsAndComponents : public AFortAthenaMutator
{
public:
	TArray<struct FDestroyActorsAndComponentsMutator_ActorDefinition> ActorDefinitions;                                  // 0x338(0x10)(Edit, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_46A1[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaMutator_DestroyActorsAndComponents");
		return Clss;
	}

	void SetActorDefinitionsEnabled(struct FGameplayTagContainer& InTags, bool bEnabled);
	void PermanentlyDisableActorDefinitions(struct FGameplayTagContainer& InTags);
	void OnTrackedActorDestroyed(class AActor* DestroyedActor);
	void OnRep_ActorDefinitions(TArray<struct FDestroyActorsAndComponentsMutator_ActorDefinition>& OldActorDefinitions);
	void OnActorSpawned(class AActor* Actor);
};

// 0x0 (0x38 - 0x38)
// Class SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy
class UFortCheatManager_FakeKillRelevancy : public UFortCheatManager_Coupled
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCheatManager_FakeKillRelevancy");
		return Clss;
	}

	void FakeKillRelevancyTestAlgorithm(int32 NumPlayers, const class FString& MaxPlayersRemainingAfterPhases, int32 MinSquadSize, int32 MaxSquadSize, int32 Iterations, int32 LogVerbosity);
	void FakeKillRelevancyStartNextWave();
	void FakeKillRelevancySetUpPhase(int32 MaxPlayersRemaining, const class FString& ReasonGameplayTagString, int32 NumWaves, float RelevancyDelay);
	void FakeKillRelevancyReset();
	void FakeKillRelevancyDebug(float TextScale);
};

// 0x188 (0x230 - 0xA8)
// Class SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy
class UFortControllerComponent_FakeKillRelevancy : public UFortControllerComponent
{
public:
	struct FFakeKillRelevancyPlayerDataArray     PlayerDataArray;                                   // 0xA8(0x120)(Net, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class AFortPlayerStateAthena*, enum class EFakeKillRelevancyPlayerKillStep> ClientPlayerStateKillStepMap;                      // 0x1C8(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        ResetCounter;                                      // 0x218(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_46A5[0x7];                                     // Fixing Size After Last Property..
	TArray<class AFortPlayerStateAthena*>        DebugSupergroupPlayerStates;                       // 0x220(0x10)(Net, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortControllerComponent_FakeKillRelevancy");
		return Clss;
	}

	void ResetRelevancy();
	void PlayKillEffects(struct FFakeKillRelevancyPlayerDataEntry& FakeKillData, float RelevancyDelay);
	void OnRep_ResetCounter();
	void OnKillEffectsPlayed(class AFortPlayerStateAthena* PlayerState);
	struct FVector GetDeathLocation(class AFortPlayerStateAthena* PlayerState);
	void CancelKillEffectsOnServer();
	void CancelKillEffectsOnClient(TArray<class AFortPlayerStateAthena*>& PlayerStates);
};

// 0x60 (0x4A0 - 0x440)
// Class SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy
class AFortAthenaMutator_FakeKillRelevancy : public AFortAthenaMutator_SpecialRelevancy
{
public:
	TSubclassOf<class UFortControllerComponent_FakeKillRelevancy> FakeKillControllerComponentClass;                  // 0x440(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FFakeKillRelevancyPhaseData>   RelevancyPhaseDataArray;                           // 0x448(0x10)(Net, ZeroConstructor, NativeAccessSpecifierPrivate)
	int32                                        PhaseNum;                                          // 0x458(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_46A6[0x44];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaMutator_FakeKillRelevancy");
		return Clss;
	}

	void StartNextKillWave();
	void SetUpKillPhase(int32 MaxPlayersRemaining, struct FGameplayTag& Reason, int32 NumWaves, float RelevancyDelay);
	void ResetRelevancy();
	void EndWave(int32 EndPhaseNum, int32 WaveNum);
};

// 0x10 (0x348 - 0x338)
// Class SpecialEventGameplayRuntime.FortAthenaMutator_LoadGameFeature
class AFortAthenaMutator_LoadGameFeature : public AFortAthenaMutator
{
public:
	class FString                                GameFeatureToLoad;                                 // 0x338(0x10)(Edit, ZeroConstructor, Config, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaMutator_LoadGameFeature");
		return Clss;
	}

	void OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
};

// 0x10 (0x348 - 0x338)
// Class SpecialEventGameplayRuntime.FortAthenaMutator_RemoveGameFeatures
class AFortAthenaMutator_RemoveGameFeatures : public AFortAthenaMutator
{
public:
	TArray<class FString>                        AllowedGameFeatures;                               // 0x338(0x10)(Edit, ZeroConstructor, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaMutator_RemoveGameFeatures");
		return Clss;
	}

	void OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
};

// 0x0 (0x38 - 0x38)
// Class SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent
class UFortCheatManager_SpecialEvent : public UFortCheatManager_Coupled
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCheatManager_SpecialEvent");
		return Clss;
	}

	void UnloadTerrainMaps(class FName MapTag);
	void ToggleDisableParachutes(bool bIsDisabled);
	void TeleportAllPlayers(int32 SafeZoneIndex);
	void StartEventScript(int32 InStartingIndex);
	void SpecialEventSetAdditionalViewpoint(float X, float Y, float Z);
	void SpecialEventGameUserSettings_ClearDataForAllPlayers();
	void SpecialEventClearAdditionalViewpoint();
	void ShrinkSafeZone();
	void SetReturnToMainMenuDelay(float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu);
	void SetMatchTime(int32 NewMatchTime);
	void SetLockingOnFocalPoint(bool bInLockingOnFocalPoint);
	void SetIsSimulatingDamage(bool bIsSimulating);
	void SetDestroyVehiclesInStorm(bool bDestroyVehiclesInStorm);
	void SendToNightNight();
	void ResumeWinCondition();
	void ResetWinConditionProgressToZero();
	void ResetWinCondition();
	void ResetSpecialEventAircraft();
	void ResetMatchTimeToPrevious();
	void PlacePlayersInAircraft();
	void PauseWinCondition(bool bLockScores);
	void CloseParachutes();
	void ChangeWinCondition(float NewGoalScore);
	void AutobalanceTargetScore();
	void AddCSVEvent(const class FString& CSVEventName);
};

// 0x438 (0x770 - 0x338)
// Class SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent
class AFortAthenaMutator_SpecialEvent : public AFortAthenaMutator
{
public:
	FMulticastInlineDelegateProperty_            TeleportAllPlayersFinished;                        // 0x338(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPawnLoaded;                                      // 0x348(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnInitController;                                  // 0x358(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnResumeGame;                                      // 0x368(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSpecialClientEvent;                              // 0x378(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnHandleLogout;                                    // 0x388(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnClientInitialLoadingFinished;                    // 0x398(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_46AC[0x68];                                    // Fixing Size After Last Property..
	bool                                         bPlayersAreInvincible;                             // 0x410(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_46AD[0x27];                                    // Fixing Size After Last Property..
	int32                                        MinimumScoreBumpForAutomadeGoal;                   // 0x438(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_46AE[0x4];                                     // Fixing Size After Last Property..
	TArray<float>                                ScoreBrackets;                                     // 0x440(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bEnforceInfiniteSafeZonePhase;                     // 0x450(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_46AF[0x3];                                     // Fixing Size After Last Property..
	class FName                                  WarmupIslandPlayerStartTag;                        // 0x454(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowInventoryOpen;                               // 0x458(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_46B0[0x7];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        bAllowFullScreenMap;                               // 0x460(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	bool                                         bShouldClearFrontEndMapMarkers;                    // 0x488(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bBlockTeamIndicators;                              // 0x489(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_46B1[0x2];                                     // Fixing Size After Last Property..
	int32                                        ForceDisplaySquadInfoDuringGamePhases;             // 0x48C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowSquadListLocalPlayerInSplitscreen;           // 0x490(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_46B2[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 UIToHideDuringSpecialEvent;                        // 0x498(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 UIToHideWhenInInfiniteWarmup;                      // 0x4B8(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 ClientEventsThatUnhideHiddenWhileLoadingHUDElements; // 0x4D8(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	bool                                         bForceGarbageCollectionAfterUnloadOnServer;        // 0x4F8(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bForceGarbageCollectionAfterUnloadOnClient;        // 0x4F9(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bFullPurgeGC;                                      // 0x4FA(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_46B3[0x5];                                     // Fixing Size After Last Property..
	class AFortAthenaAircraft*                   EventAircraft;                                     // 0x500(0x8)(Net, ZeroConstructor, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAircraftFlightInfo                   EventAircraftInfo;                                 // 0x508(0x48)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class AFortAthenaAircraft>       EventAircraftClass;                                // 0x550(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ASpecialEventScript*                   ScriptActor;                                       // 0x558(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDisableHUD;                                       // 0x560(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        GameResumed;                                       // 0x561(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_46B4[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               AdditionalViewpoint;                               // 0x568(0x18)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bParachutesDisabled;                               // 0x580(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_46B5[0x7];                                     // Fixing Size After Last Property..
	class FString                                LastCSVEventName;                                  // 0x588(0x10)(Net, ZeroConstructor, RepNotify, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanStreamBuildingFoundationsIn;                   // 0x598(0x1)(Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_46B6[0x3];                                     // Fixing Size After Last Property..
	int32                                        AllPlayerTeleportedCount;                          // 0x59C(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFortDelayRTMMData                    DelayPlayersFromReturningToLobbyData;              // 0x5A0(0x10)(Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class FName                                  NamedWeightForContainerLootRoll;                   // 0x5B0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WeightForContainerLootRoll;                        // 0x5B4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_46B7[0x30];                                    // Fixing Size After Last Property..
	TArray<struct FFortSpecialEventEmoteData>    SpecialEventEmoteData;                             // 0x5E8(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 BlockedNativeActions;                              // 0x5F8(0x20)(Edit, Net, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	enum class EFortItemType                     DesiredQuickbarItemTypeAfterRemove;                // 0x618(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_46B8[0x7];                                     // Fixing Size After Last Property..
	class UInputComponent*                       SpecialEventsInputComponent;                       // 0x620(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bLockingOnFocalPoint;                              // 0x628(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_46B9[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FFortSpecialEventOverrideParts> SpecialEventOverrideParts;                         // 0x630(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FFortSpecialEventGEData               GameplayEffectToApplyOnSwapToDefault;              // 0x640(0x10)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TMap<struct FUniqueNetIdRepl, int32>         OverridePartsArrayIndexMap;                        // 0x650(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFortSpecialEventGEData>       GameplayEffectsToApplyOnLogin;                     // 0x6A0(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSpecialEventMapData>          TerrainMapsToUnload;                               // 0x6B0(0x10)(Edit, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_46BA[0x10];                                    // Fixing Size After Last Property..
	TArray<class AFortPlayerControllerAthena*>   UnhandledPlayerControllers;                        // 0x6D0(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class FName>                          HLODActorsToHideNames;                             // 0x6E0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                         bForceAllowCloth;                                  // 0x6F0(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_46BB[0x1];                                     // Fixing Size After Last Property..
	bool                                         bManageBackfill;                                   // 0x6F2(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_46BC[0x1];                                     // Fixing Size After Last Property..
	int32                                        PlayerCountToTriggerBackfill;                      // 0x6F4(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWaitForPlayerCountToTriggerBackfill;              // 0x6F8(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_46BD[0x3];                                     // Fixing Size After Last Property..
	float                                        UpdateBackfillStatusTime;                          // 0x6FC(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_46BE[0x10];                                    // Fixing Size After Last Property..
	bool                                         bServerHasBackfillActive;                          // 0x710(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanToggleCursorModeInStasis;                      // 0x711(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46BF[0x6];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        MannequinRecentlyRenderedCheckToleranceValue;      // 0x718(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<class ASpecialEventPlayerMannequin*>  SpecialEventMannequins;                            // 0x740(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class AActor>>            ActorSpawnDelegateClasses;                         // 0x750(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_46C0[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaMutator_SpecialEvent");
		return Clss;
	}

	void WarmUpIslandUpdated();
	void UpdateBackfillStatus();
	void UnloadTerrainMaps(struct FGameplayTag& MapTag);
	void ToggleHUDs(bool bHide);
	void ToggleDisableWeapons(bool bDisableWeapons);
	void ToggleDisableParachutes(bool bDisable);
	void ToggleAllPlayersInvincibility(bool bInvincible);
	void TeleportAllPlayers(const struct FGameplayTagContainer& EventTags, int32 TeleportsPerFrame, int32 SafeZoneIndex);
	void SwapBodyParts(int32 ArrayIndex, class AFortPlayerController* FortPC);
	void StartSafeZoneOverrideForEvent(int32 SafeZoneIndexForEvent);
	void ShrinkSafeZone();
	void SetWeightForContainerLootRoll(float Weight);
	void SetReturnToMainMenuDelay(float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu);
	void SetNamedWeightForContainerLootRoll(class FName WeightName);
	void SetMatchTime(int32 NewMatchTime);
	void SetLockingOnFocalPoint(bool bInLockingOnFocalPoint);
	void SetIsSimulatingDamage(bool bIsSimulating);
	void SetDestroyVehiclesInStorm(bool bDestroyVehiclesInStorm);
	void SetCanStreamBuildingFoundationsIn(bool bEnable);
	void SetAdditionalViewpoint(const struct FVector& WorldLocation);
	void SendToNightNight();
	void ResumeWinCondition();
	void ResetWinConditionProgressToZero();
	void ResetWinCondition();
	void ResetSpecialEventAircraft();
	void ResetSafeZoneOverrideAfterEvent(int32 MinResetSafeZoneIndex, float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu);
	void ResetMatchTimeToPrevious();
	void RemoveFromBlockedNativeActions(struct FGameplayTagContainer& Actions);
	void PushSpecialEventEmoteInputComponent();
	void PopSpecialEventEmoteInputComponent();
	void PlacePlayersInAircraft();
	void PauseWinCondition(bool bLockScores);
	void PauseSupplyDrops(bool bPause);
	void PauseStormProgression(bool bPause);
	void PauseStormDamage(bool bPause);
	void OnWarmUpTeleportComplete(class AFortPlayerPawn* PlayerPawn);
	void OnRep_TerrainMapsToUnload();
	void OnRep_LastCSVEventName();
	void OnRep_GameResumed();
	void OnRep_DelayPlayersFromReturningToLobbyData();
	void OnRep_bPlayersAreInvincible();
	void OnRep_bLockingOnFocalPoint();
	void OnRep_bDisableHUD();
	void OnRep_bCanStreamBuildingFoundationsIn();
	void OnRep_AllPlayerTeleportedCount();
	void OnRep_Aircraft();
	void OnRep_AdditionalViewpoint();
	void OnGameViewportActivationChanged(bool bHasFocus);
	void OnGamePhaseStepChanged(FInterfaceProperty_& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep);
	void OnGamePhaseChanged(enum class EAthenaGamePhase NewPhase);
	void OnAircraftFlightEnded(class AFortAthenaAircraft* FortAthenaAircraft);
	void OnAircraftExitedDropZone(class AFortAthenaAircraft* FortAthenaAircraft);
	void OnAircraftEnteredDropZone(class AFortAthenaAircraft* FortAthenaAircraft);
	void OnActorSpawned(class AActor* Actor);
	void OnActorPreSpawnInitialization(class AActor* Actor);
	void NotifyClientsGameResumed();
	void NetMulticast_CheatClearSpecialEventGameUserSettings();
	void JumpToSafeZonePhase(const struct FVector& PawnSpawnCenterLocation, float PawnSpawnMinDistance, float PawnSpawnMaxDistance);
	void HandleSpecialEventMannequinDestroyed(class AActor* MannequinActor);
	class ASpecialEventScript* GetScript();
	bool GetHasInfiniteSafeZonePhase();
	void ForceSafeZoneFinalLocation(const struct FVector& NewFinalLocation, float DefaultAircraftOffsetFromMidLine, float MinDefaultMidlineAngle, float MaxDefaultMidlineAngle);
	void FlushUnhandledPlayerControllers();
	void CloseParachutes();
	void ClearBlockedNativeActions();
	void ClearAdditionalViewpoint();
	void ChangeWinCondition(float NewGoalScore);
	void AutobalanceTargetScore();
	void AddToBlockedNativeActions(struct FGameplayTagContainer& Actions, bool bCancelAbilities);
	void AddCSVEvent(const class FString& CSVEventName, bool bShouldRepToClient);
	void AddClientCSVEvent(const class FString& CSVEventName);
};

// 0x10 (0x1B40 - 0x1B30)
// Class SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint
class UFortCameraMode_SpecialEventFocalPoint : public UFortCameraMode_FocalPoint
{
public:
	float                                        OverrideTransitionTime;                            // 0x1B30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_46C2[0xC];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCameraMode_SpecialEventFocalPoint");
		return Clss;
	}

	void UpdateCameraBP(class AActor* ViewTarget, float DeltaTime, struct FTViewTarget& OutVT);
	void SetOverrideTransitionTime(float InTransitionTime);
	void OnBecomeInactiveBP(class AActor* ViewTarget);
	void OnBecomeActiveBP(class AActor* ViewTarget);
};

// 0x880 (0x920 - 0xA0)
// Class SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent
class UFortCharacterMovementMutatorComponent : public UActorComponent
{
public:
	class ACharacter*                            CharacterOwner;                                    // 0xA0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortMovementComp_CharacterAthena*     MovementComponent;                                 // 0xA8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortMovementComp_CharacterAthena*     CDOMovementComponent;                              // 0xB0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_46C6[0x10];                                    // Fixing Size After Last Property..
	struct FScalableFloat                        BuffetBubblesMoveToBoxSpeed;                       // 0xC8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetBubblesRelativeVelocityInterpSpeed;          // 0xF0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetBubblesLocationInterpSpeed;                  // 0x118(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetBubblesRotationInterpSpeed;                  // 0x140(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetBubblesMinRelativeX;                         // 0x168(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetBubblesMaxRelativeX;                         // 0x190(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetBubblesMinRelativeY;                         // 0x1B8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetBubblesMaxRelativeY;                         // 0x1E0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetBubblesMinRelativeZ;                         // 0x208(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetBubblesMaxRelativeZ;                         // 0x230(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FRotator                              BuffetBubblesRotationRate;                         // 0x258(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetBubblesMaxAcceleration;                      // 0x270(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetBubblesMaxRelativeSpeed;                     // 0x298(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetBubblesRelativeDeceleration;                 // 0x2C0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetBubblesSphereRadius;                         // 0x2E8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class AActor*                                BuffetBubblesFollowActor;                          // 0x310(0x8)(Net, ZeroConstructor, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               BuffetBubblesInitialFollowBoxOffsetPercent;        // 0x318(0x18)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_46C7[0xE0];                                    // Fixing Size After Last Property..
	struct FBuffetBubblesReplicatedData          BuffetBubblesReplicatedData;                       // 0x410(0x80)(Net, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_46C8[0x280];                                   // Fixing Size After Last Property..
	struct FScalableFloat                        BuffetBubblesIntroSpeed;                           // 0x710(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_46C9[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            BuffetBubblesIntroTargetTransform;                 // 0x740(0x60)(Net, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetFlyingMaxPitchDegrees;                       // 0x7A0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetFlyingMaxSpeed;                              // 0x7C8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetFlyingVelocityDirectionInterpSpeed;          // 0x7F0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FRotator                              BuffetFlyingRotationRate;                          // 0x818(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        BuffetFlyingMaxSpeedOverride;                      // 0x830(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BuffetFlyingMaxSpeedInterpSpeed;                   // 0x834(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_46CA[0x4];                                     // Fixing Size After Last Property..
	float                                        BuffetFlyingVelocityDirectionInterpSpeedOverride;  // 0x83C(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        BuffetFlyingRicochetSphereSize;                    // 0x840(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetFlyingRicochetRotationDuration;              // 0x868(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetFlyingRicochetControlRotationInterpSpeed;    // 0x890(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_46CB[0x48];                                    // Fixing Size After Last Property..
	struct FBuffetFlyingRicochetReplicatedData   BuffetFlyingRicochetReplicatedData;                // 0x900(0x20)(Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCharacterMovementMutatorComponent");
		return Clss;
	}

	void SetBuffetBubblesIntroTargetTransform(struct FTransform& Transform);
	void SetBuffetBubblesInitialFollowBoxOffsetPercent(const struct FVector& BoxOffsetPercent);
	void SetBuffetBubblesFollowActor(class AActor* Actor);
	void OverrideBuffetFlyingVelocityDirectionInterpSpeed(float Value, bool bAsMultiplier);
	void OverrideBuffetFlyingMaxSpeed(float Value, bool bAsMultiplier, float InterpSpeed);
	void OnRep_BuffetFlyingRicochetReplicatedData();
	void OnRep_BuffetBubblesFollowActor();
	void OnMovementModeChanged(class ACharacter* Character, enum class EMovementMode PreviousMovementMode, uint8 PreviousCustomMode);
};

// 0x8 (0x340 - 0x338)
// Class SpecialEventGameplayRuntime.FortCharacterMovementMutator
class AFortCharacterMovementMutator : public AFortAthenaMutator
{
public:
	TSubclassOf<class UFortCharacterMovementMutatorComponent> MovementMutatorComponentClass;                     // 0x338(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCharacterMovementMutator");
		return Clss;
	}

	void OnFortPawnChanged(class AFortPawn* NewPawn);
};

// 0x58 (0x100 - 0xA8)
// Class SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic
class UFortControllerComponent_GameplayCinematic : public UFortControllerComponent
{
public:
	uint8                                        Pad_46CC[0x30];                                    // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            BP_OnStartGameplayOutro;                           // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            BP_OnGameplayIntroFinished;                        // 0xE8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bIsReadyForGameplay;                               // 0xF8(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_46CD[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortControllerComponent_GameplayCinematic");
		return Clss;
	}

	void ShowCinematicWidget(class FName WidgetName);
	void SetReadyForGameplay(bool bIsReady);
	void ServerOnGameplayIntroFinished();
	void OnRep_bIsReadyForGameplay();
	void HideHUDElementsForLoadingScreen(bool bHideElements);
};

// 0x8 (0xB0 - 0xA8)
// Class SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent
class UFortControllerComponent_SpecialEvent : public UFortControllerComponent
{
public:
	TWeakObjectPtr<class AFortAthenaMutator_SpecialEvent> SpecialEventMutator;                               // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortControllerComponent_SpecialEvent");
		return Clss;
	}

	void ServerHandleSpecialClientEvent(struct FGameplayTag& EventTag, int32 Count);
	void SendSpecialClientEvent(const struct FGameplayTag& EventTag, int32 Count);
};

// 0x100 (0x1A0 - 0xA0)
// Class SpecialEventGameplayRuntime.FortCustomTickComponent
class UFortCustomTickComponent : public UActorComponent
{
public:
	enum class EFortCustomTickComponentCondition Condition;                                         // 0xA0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_46CE[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          AuthorityQualitySettingsTag;                       // 0xA4(0x4)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          DefaultClientQualitySettingsTag;                   // 0xA8(0x4)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_46CF[0x4];                                     // Fixing Size After Last Property..
	TMap<enum class ECommonPlatformType, struct FGameplayTag> ClientPlatformQualitySettingsTagMap;               // 0xB0(0x50)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<struct FGameplayTag, struct FCustomTickComonentQualitySettings> QualitySettingsMap;                                // 0x100(0x50)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                        WasRecentlyRenderedTolerance;                      // 0x150(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_46D0[0x4];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnCustomTick;                                      // 0x158(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_46D1[0x38];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCustomTickComponent");
		return Clss;
	}

};

// 0x8 (0x2C8 - 0x2C0)
// Class SpecialEventGameplayRuntime.FortSpecialRelevancyActorSpawner
class AFortSpecialRelevancyActorSpawner : public AFortActorSpawner
{
public:
	uint8                                        Pad_46D2[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSpecialRelevancyActorSpawner");
		return Clss;
	}

	void BP_OnActorSpawnedPerRelevancyGroup(TArray<class AActor*>& InSpawnedActors);
};

// 0x20 (0xC0 - 0xA0)
// Class SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent
class USpecialEventAudioAnalysisBaseComponent : public UActorComponent
{
public:
	float                                        CurrentTime;                                       // 0xA0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_46D3[0x4];                                     // Fixing Size After Last Property..
	class ULoudnessNRT*                          LoudnessNRT;                                       // 0xA8(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOnsetNRT*                             OnsetNRT;                                          // 0xB0(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UConstantQNRT*                         ConstantQNRT;                                      // 0xB8(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpecialEventAudioAnalysisBaseComponent");
		return Clss;
	}

	void UpdateTime(float NewTime);
	void UpdateOnset(float Time);
	void UpdateLoudness(float Time);
	void UpdateConstantQ(float Time);
	class UOnsetNRT* GetOnsetNRT();
	class ULoudnessNRT* GetLoudnessNRT();
	float GetCurrentNormalizedLoudness();
	class UConstantQNRT* GetConstantQNRT();
};

// 0x28 (0xE8 - 0xC0)
// Class SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent
class USpecialEventAudioHapticsComponent : public USpecialEventAudioAnalysisBaseComponent
{
public:
	TArray<struct FSpecialEventAudioHapticsAction> HapticsActions;                                    // 0xC0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bStartHapticsOnBeginPlay;                          // 0xD0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46D4[0x3];                                     // Fixing Size After Last Property..
	float                                        IntensityMultiplier;                               // 0xD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46D5[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpecialEventAudioHapticsComponent");
		return Clss;
	}

	void StopHaptics();
	void StartHaptics();
	bool AreHapticsActive();
};

// 0x0 (0x68 - 0x68)
// Class SpecialEventGameplayRuntime.SpecialEventCinematicCameraMode
class USpecialEventCinematicCameraMode : public UFortCinematicCamera
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpecialEventCinematicCameraMode");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class SpecialEventGameplayRuntime.SpecialEventCursorInstigatorInterface
class USpecialEventCursorInstigatorInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpecialEventCursorInstigatorInterface");
		return Clss;
	}

	bool SpecialEventCursorTrace(struct FHitResult* OutHitResult, class USpecialEventCursorPawnComponent* CursorPawnComponent, struct FGameplayTag& CursorModeTag, class UCameraComponent* CameraComponent, struct FVector& CursorWorldDirection);
};

// 0x308 (0x3A8 - 0xA0)
// Class SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent
class USpecialEventCursorPawnComponent : public UPawnComponent
{
public:
	uint8                                        Pad_46EB[0x8];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnDesiredVisibilityChanged;                        // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bAllowOnNonOwningClients;                          // 0xB8(0x1)(Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_46EC[0x7];                                     // Fixing Size After Last Property..
	class APawn*                                 OwningPawn;                                        // 0xC0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortPlayerController*                 OwningController;                                  // 0xC8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_46ED[0x10];                                    // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnCursorModeChanged;                               // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FGameplayTag                          DefaultCursorModeTag;                              // 0xF0(0x4)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDefaultCursorModeAutoActivate;                    // 0xF4(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_46EE[0x3];                                     // Fixing Size After Last Property..
	TMap<struct FGameplayTag, struct FSpecialEventCursorMode> CursorModes;                                       // 0xF8(0x50)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSpecialEventCursorStackEntry> CursorStack;                                       // 0x148(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FSpecialEventCursorStackEntry         ReplicatedCursorStackEntry;                        // 0x158(0xC)(Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_46EF[0x4];                                     // Fixing Size After Last Property..
	TSubclassOf<class USpecialEventInputHelperComponent> InputHelperClass;                                  // 0x168(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseGamepadLookInput;                              // 0x170(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseGamepadMoveInput;                              // 0x171(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseGyroInput;                                     // 0x172(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bObeyInvertedPitchUserSetting;                     // 0x173(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_46F0[0x4];                                     // Fixing Size After Last Property..
	class UCommonInputSubsystem*                 CommonInputSubsystem;                              // 0x178(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USpecialEventInputHelperComponent*     InputHelperComponent;                              // 0x180(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_46F1[0x38];                                    // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnViewportLocationChanged;                         // 0x1C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScalableFloat                        NonOwningInterpSpeed;                              // 0x1D0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinDeltaToSendWorldLocationToServer;               // 0x1F8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_46F2[0x8];                                     // Fixing Size After Last Property..
	struct FVector                               ReplicatedWorldLocation;                           // 0x228(0x18)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_46F3[0x50];                                    // Fixing Size After Last Property..
	TArray<class UUserWidget*>                   Widgets;                                           // 0x290(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_46F4[0xE9];                                    // Fixing Size After Last Property..
	bool                                         bAdditiveRotationAllowedByDefault;                 // 0x389(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_46F5[0x1];                                     // Fixing Size After Last Property..
	bool                                         bZoomAllowedByDefault;                             // 0x38B(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ZoomActionName;                                    // 0x38C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_46F6[0x8];                                     // Fixing Size After Last Property..
	class UCameraComponent*                      AdditiveOffsetCameraComponent;                     // 0x398(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_46F7[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpecialEventCursorPawnComponent");
		return Clss;
	}

	void SetZoomAllowed(bool bInZoomAllowed);
	void SetAllowOnNonOwningClients(bool bAllow);
	void SetAdditiveRotationAllowed(bool bInAdditiveRotationAllowed);
	void ServerOnWorldLocationChanged(struct FVector& WorldLocation);
	void PushCursor(struct FGameplayTag& CursorModeTag, class UObject* InstigatingObject, bool bActivate);
	void PopCursor(struct FGameplayTag& CursorModeTag, class UObject* InstigatingObject, bool bDeactivateIfStackEmpty);
	void PopAllCursorsForObject(class UObject* InstigatingObject, bool bDeactivateIfStackEmpty);
	void OnRep_ReplicatedWorldLocation();
	void OnRep_ReplicatedCursorStackEntry(struct FSpecialEventCursorStackEntry& OldCursorStackEntry);
	void OnRep_bAllowOnNonOwningClients();
	void OnLocallyControlledCursorVisibilityChanged(class USpecialEventCursorPawnComponent* CursorPawnComponent, struct FGameplayTag& CursorModeTag, bool bShouldBeVisible);
	void OnInputMethodChanged(enum class ECommonInputType InputType);
	void OnHUDPostRender(class AHUD* HUD, class UCanvas* Canvas);
	void MoveInputUpdate(struct FVector& InInputVector);
	void LookInputUpdate(struct FVector& InInputVector);
	bool IsZoomAllowed();
	bool IsLocallyControlled();
	bool IsAdditiveRotationAllowed();
	void InputPressed(class FName& ActionName, bool bPressed);
	void GyroInputUpdate(struct FVector& InInputVector);
	bool GetWorldLocationAndDirection(struct FVector* OutWorldLocation, struct FVector* OutWorldDirection);
	bool GetViewportSize(struct FVector2D* OutViewportSize);
	bool GetViewportLocation(struct FVector2D* OutViewportLocation);
	bool GetViewportCenter(struct FVector2D* OutViewportCenter);
	class USpecialEventCursorPawnComponent* GetSpecialEventCursorPawnComponent(class APawn* Pawn, struct FGameplayTag& CursorModeTag, bool bMustBeActive);
	struct FVector2D GetNormalizedLocation();
	class APlayerController* GetLocalController();
	enum class ECommonInputType GetInputType();
	struct FGameplayTagContainer GetCursorModeTagsForWidget(class UUserWidget* Widget);
	class UUserWidget* GetCurrentWidget();
	bool GetCurrentHitResult(struct FHitResult* OutHitResult);
	struct FGameplayTag GetCurrentCursorModeTag();
	struct FVector2D GetCenteredWidgetLocation(class UUserWidget* Widget, struct FVector2D& ViewportLocation);
	class UCameraComponent* GetCameraComponent();
	bool ConvertWorldToViewportLocation(struct FVector2D* OutViewportLocation, struct FVector& WorldLocation);
	bool ConvertWorldToNormalizedLocation(struct FVector2D* OutNormalizedLocation, struct FVector& WorldLocation);
	bool ConvertViewportToWorldLocationAndDirection(struct FVector* OutWorldLocation, struct FVector* OutWorldDirection, struct FVector2D& ViewportLocation);
	bool ConvertViewportToNormalizedLocation(struct FVector2D* OutNormalizedLocation, struct FVector2D& ViewportLocation);
	bool ConvertNormalizedToWorldLocationAndDirection(struct FVector* OutWorldLocation, struct FVector* OutWorldDirection, struct FVector2D& NormalizedLocation);
	bool ConvertNormalizedToViewportLocation(struct FVector2D* OutViewportLocation, struct FVector2D& NormalizedLocation);
	bool CanBeVisible();
};

// 0x98 (0x138 - 0xA0)
// Class SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent
class USpecialEventCursorWeaponComponent : public UFortWeaponComponent
{
public:
	uint8                                        Pad_46FC[0x8];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnCursorPawnComponentSet;                          // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TSubclassOf<class USpecialEventCursorPawnComponent> CursorPawnComponentClass;                          // 0xB8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          CursorModeTag;                                     // 0xC0(0x4)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAlignFXToCursor;                                  // 0xC4(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_46FD[0x3];                                     // Fixing Size After Last Property..
	class AFortWeapon*                           OwningWeapon;                                      // 0xC8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortPlayerPawn*                       Pawn;                                              // 0xD0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USpecialEventCursorPawnComponent*      CursorPawnComponent;                               // 0xD8(0x8)(ExportObject, Net, ZeroConstructor, Transient, InstancedReference, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_46FE[0x58];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpecialEventCursorWeaponComponent");
		return Clss;
	}

	void OnUnEquip(class AFortWeapon* Weapon);
	void OnRep_CursorPawnComponent();
	void OnPlayImpactFX(class AFortWeapon* Weapon, struct FHitResult& HitResult, class UFXSystemComponent* FXSystemComponent);
	void OnGetAimRotOverride(class AFortWeapon* Weapon, enum class EFortAbilityTargetingSource TargetingSource, struct FRotator* OutOverride, bool* bOutExecutionResult);
	void OnEquip(class AFortWeapon* Weapon);
	void OnBeamFired(class AFortWeapon* Weapon, bool bUsePersistentBeam, class UFXSystemComponent* PSC, struct FVector& BeamOrigin, struct FVector& HitLocation);
	class USpecialEventCursorPawnComponent* GetSpecialEventCursorPawnComponentForWeapon(class AFortWeapon* Weapon);
	class USpecialEventCursorPawnComponent* GetSpecialEventCursorPawnComponentForCurrentWeapon(class AFortPlayerPawn* Pawn);
	class USpecialEventCursorPawnComponent* GetCursorPawnComponent();
	class USpecialEventCursorWeaponComponent* GetCurrentSpecialEventCursorWeaponComponent(class AFortPlayerPawn* Pawn);
	bool GetCurrentHitResult(struct FHitResult* OutHitResult);
};

// 0x0 (0x28 - 0x28)
// Class SpecialEventGameplayRuntime.SpecialEventGameplayGlobals
class USpecialEventGameplayGlobals : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpecialEventGameplayGlobals");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class SpecialEventGameplayRuntime.SpecialEventGameplayLibrary
class USpecialEventGameplayLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpecialEventGameplayLibrary");
		return Clss;
	}

	void StreamOutAllBuildingFoundations(class UObject* WorldContextObject);
	void SetNextLoadingScreen(class UObject* WorldContextObject, class UAthenaLoadingScreenItemDefinition* LoadingScreenDefinition, bool bCanShowLoadingBar);
	void SetLODOnLandscapProxies(class UObject* WorldContextObject, bool bForced, int32 InLODValue);
	void HideSkydivingShadowProxy(class UObject* WorldContextObject);
	class ASpecialEventScript* GetSpecialEventScript(class UObject* WorldContextObject);
	class FString GetSpecialEventPlayerDisplayName(class AFortPlayerControllerAthena* LocalController, class AFortPlayerStateAthena* PlayerState);
	class AFortAthenaMutator_SpecialEvent* GetSpecialEventMutator(class UObject* WorldContextObject);
	struct FFortAthenaLoadout GetLocalPlayerLoadout(class UObject* WorldContextObject);
	bool GetHasInfiniteSafeZonePhase(class UObject* WorldContextObject);
	void ForceUpdateGrass(class UObject* WorldContextObject, const struct FVector& Location);
	void ForceDestroyComponents(TArray<class UActorComponent*>& Components, bool bPromoteChildren, const class FString& LogContext);
	class UFortControllerComponent_SpecialEvent* FindSpecialEventComponent(class AController* Controller);
	class UFortControllerComponent_GameplayCinematic* FindGameplayCinematicComponent(class AController* Controller);
	bool DetachPawnFromComponent(class AFortPawn* Pawn, class USceneComponent* Component, enum class EDetachmentRule LocationRule, enum class EDetachmentRule RotationRule, enum class EDetachmentRule ScaleRule);
	bool DetachPawn(class AFortPawn* Pawn, enum class EDetachmentRule LocationRule, enum class EDetachmentRule RotationRule, enum class EDetachmentRule ScaleRule);
	void CreateSpecialEventPlayerEliminationWorldMarker(class AFortPlayerControllerAthena* LocalController, class AFortPlayerStateAthena* VictimPlayerState, struct FVector& DeathLocation);
	bool AttachPawnToComponent(class AFortPawn* Pawn, class USceneComponent* Component, class FName SocketName, enum class EAttachmentRule LocationRule, enum class EAttachmentRule RotationRule, enum class EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
	void AddSpecialEventRecentElimination(struct FVector& Location, class AFortPlayerStateAthena* PlayerState);
	void AddSpecialEventKillFeedEntry(class UObject* WorldContextObject, class AFortPlayerStateAthena* VictimPlayerState, class AFortPlayerStateAthena* KillerPlayerState, class FText NonPlayerVictimName, class FText NonPlayerKillerName, struct FGameplayTag& DeathCauseTag, enum class EDeathCauseReason DeathCauseReason, float Distance);
};

// 0x18 (0x48 - 0x30)
// Class SpecialEventGameplayRuntime.FortAsyncAction_GameplayCinematicComponentReady
class UFortAsyncAction_GameplayCinematicComponentReady : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnReady;                                           // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_4708[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAsyncAction_GameplayCinematicComponentReady");
		return Clss;
	}

	class UFortAsyncAction_GameplayCinematicComponentReady* FindGameplayCinematicComponentAsync(class AController* Conroller);
};

// 0x48 (0xE8 - 0xA0)
// Class SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent
class USpecialEventGameUserSettingsControllerComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnLoaded;                                          // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                Version;                                           // 0xB0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinTimeBetweenSaves;                               // 0xC0(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_470B[0x24];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpecialEventGameUserSettingsControllerComponent");
		return Clss;
	}

	void SpecialEventGameUserSettings_ToggleDebug();
	void SpecialEventGameUserSettings_SetData(const class FString& Data);
	void SpecialEventGameUserSettings_LogData();
	void SpecialEventGameUserSettings_ClearData();
	void SetSavingBlocked(bool bBlocked);
	void SetData(const class FString& Data, bool bAllowSave, bool bSaveNow);
	void ParseLoadedData(const class FString& Data);
	class USpecialEventGameUserSettingsControllerComponent* GetSpecialEventGameUserSettingsControllerComponent(class UObject* WorldContextObject);
	void GetData(enum class ESpecialEventGameUserSettingsResult* OutResult, class FString* OutData);
};

// 0x18 (0x48 - 0x30)
// Class SpecialEventGameplayRuntime.FortAsyncAction_SpecialEventGameUserSettingsReady
class UFortAsyncAction_SpecialEventGameUserSettingsReady : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnReady;                                           // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_470C[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAsyncAction_SpecialEventGameUserSettingsReady");
		return Clss;
	}

	class UFortAsyncAction_SpecialEventGameUserSettingsReady* SpecialEventGameUserSettingsReadyAsync(class UObject* WorldContextObject);
};

// 0xA0 (0x330 - 0x290)
// Class SpecialEventGameplayRuntime.SpecialEventPhase
class ASpecialEventPhase : public AInfo
{
public:
	uint8                                        Pad_470E[0x18];                                    // Fixing Size After Last Property..
	struct FGameplayTag                          PhaseTag;                                          // 0x2A8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bApplyGameplayEffects;                             // 0x2AC(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_470F[0x3];                                     // Fixing Size After Last Property..
	TArray<TSubclassOf<class UGameplayEffect>>   GameplayEffectsToApply;                            // 0x2B0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<struct FSpecialEventPhaseComponentNetModeInfo> ControllerComponentsToApplyInfoList;               // 0x2C0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSpecialEventPhaseComponentNetModeInfo> PawnComponentsToApplyInfoList;                     // 0x2D0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UCameraModifier>           CameraModifierToApply;                             // 0x2E0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRemoveModifierOnPhaseDeactivation;                // 0x2E8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRemoveGameplayEffects;                            // 0x2E9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4710[0x6];                                     // Fixing Size After Last Property..
	TArray<TSubclassOf<class UGameplayEffect>>   GameplayEffectsToRemove;                           // 0x2F0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<struct FSpecialEventPhaseComponentNetModeInfo> ControllerComponentsToRemoveInfoList;              // 0x300(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSpecialEventPhaseComponentNetModeInfo> PawnComponentsToRemoveInfoList;                    // 0x310(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UCameraModifier*                       AppliedCameraModifier;                             // 0x320(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESpecialEventPhaseState           PhaseState;                                        // 0x328(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4711[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpecialEventPhase");
		return Clss;
	}

	void SetHUDElementVisibility(struct FGameplayTagContainer& HUDElementTags, bool bHideElements);
	void PrePhaseActivation_Server();
	void OnRep_PhaseState();
	void OnPhaseFinished();
	void OnPhaseDeactivation_Server();
	void OnPhaseDeactivation_Client();
	void OnPhaseActivation_Server();
	void OnPhaseActivation_Client();
	struct FGameplayTag GetPhaseTag();
	void DebugActivatePhase();
};

// 0x8 (0x620 - 0x618)
// Class SpecialEventGameplayRuntime.SpecialEventPlayerMannequin
class ASpecialEventPlayerMannequin : public AFortPlayerMannequin
{
public:
	uint8                                        bDisableCollisionOnBeginPlay : 1;                  // Mask: 0x1, PropSize: 0x10x618(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bDisableComponentsTickOnServer : 1;                // Mask: 0x2, PropSize: 0x10x618(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRegisterWithSpecialEventMutatorOnClient : 1;      // Mask: 0x4, PropSize: 0x10x618(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bDestroyUnusedSkeletalMeshComponentsOnClientFirstInitialization : 1; // Mask: 0x8, PropSize: 0x10x618(0x1)(Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4712[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpecialEventPlayerMannequin");
		return Clss;
	}

	void RegisterWithSpecialEventMutator();
	void HandleOnMutatorAdded(class AFortGameplayMutator* NewMutator);
	void DestroyUnusedSkeletalMeshComponents();
};

// 0x28 (0xC8 - 0xA0)
// Class SpecialEventGameplayRuntime.SpecialEventRewindComponent
class USpecialEventRewindComponent : public UActorComponent
{
public:
	float                                        MaxRecordingDuration;                              // 0xA0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LocalRecordingFPS;                                 // 0xA4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ReplicatedRecordingFPS;                            // 0xA8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoStartRecording;                               // 0xAC(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4714[0x3];                                     // Fixing Size After Last Property..
	float                                        RewindLerpTime;                                    // 0xB0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DefaultRewindDuration;                             // 0xB4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DefaultRewindPlaybackSpeed;                        // 0xB8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSpecialEventRewindComponentStateData StateData;                                         // 0xBC(0x8)(Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)
	float                                        ReplicatedRewindDuration;                          // 0xC4(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpecialEventRewindComponent");
		return Clss;
	}

	bool TryStartRewinding(float Duration, float PlaybackSpeed);
	void OnRep_StateData(struct FSpecialEventRewindComponentStateData& OldStateData);
};

// 0x2C0 (0x388 - 0xC8)
// Class SpecialEventGameplayRuntime.SpecialEventRewindComponent_PlayerPawn
class USpecialEventRewindComponent_PlayerPawn : public USpecialEventRewindComponent
{
public:
	bool                                         bStartServerRecordingOnLastGroundFrame;            // 0xC8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4715[0x27];                                    // Fixing Size After Last Property..
	struct FSpecialEventRewindComponentRecording_PlayerPawn ReplicatedRecording;                               // 0xF0(0x20)(Net, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4716[0x118];                                   // Fixing Size After Last Property..
	struct FSpecialEventRewindComponentRecordingFastArray_PlayerPawn ReplicatedRecordingFastArray;                      // 0x228(0x118)(Net, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4717[0x48];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpecialEventRewindComponent_PlayerPawn");
		return Clss;
	}

	void OnServerLanded(struct FHitResult& Hit);
};

// 0x80 (0x310 - 0x290)
// Class SpecialEventGameplayRuntime.SpecialEventScript
class ASpecialEventScript : public AInfo
{
public:
	FMulticastInlineDelegateProperty_            OnSpecialEventPhaseActivated;                      // 0x290(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSpecialEventPhaseDeactivated;                    // 0x2A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FPhaseInfo>                    PhaseInfoArray;                                    // 0x2B0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class ALevelSequenceActor*                   MasterSequence;                                    // 0x2C0(0x8)(Net, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DropDeadWindowSizeInSeconds;                       // 0x2C8(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DelayAfterConentLoad;                              // 0x2CC(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DelayAfterWarmup;                                  // 0x2D0(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ForceReturnToMainMenuTime;                         // 0x2D4(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ForceReturnToMainMenuTimeRandomness;               // 0x2D8(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinDelayReturnToMainMenu;                          // 0x2DC(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxDelayReturnToMainMenu;                          // 0x2E0(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPreloadAllLevelsOnServer;                         // 0x2E4(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowGarbageCollectionAfterUnload;                // 0x2E5(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bFullPurgeGC;                                      // 0x2E6(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4718[0x1];                                     // Fixing Size After Last Property..
	int32                                        ReplicatedActivePhaseIndex;                        // 0x2E8(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4719[0xC];                                     // Fixing Size After Last Property..
	class UMeshNetworkComponent*                 MeshNetworkComponent;                              // 0x2F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_471A[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpecialEventScript");
		return Clss;
	}

	void UpdateMasterSequence(float Time);
	void StartEventAtIndex(int32 InStartingIndex);
	void SetLocalPlayersSignificantForSpecialEventSequence(bool bIsSignificant);
	void OnRep_ReplicatedActivePhaseIndex();
	int32 GetActivePhaseIndex();
	void BP_OnScriptReady();
	void BP_OnScriptFinished();
	void AttemptStartNextPhase(const struct FGameplayTag& CurrentPhaseTag);
	void AttemptFinishPhase(const struct FGameplayTag& PhaseTag);
};

// 0x30 (0x2C0 - 0x290)
// Class SpecialEventGameplayRuntime.SpecialEventScriptMeshActor
class ASpecialEventScriptMeshActor : public AInfo
{
public:
	struct FDateTime                             RootStartTime;                                     // 0x290(0x8)(Net, ZeroConstructor, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                CalendarEventName;                                 // 0x298(0x10)(Edit, ZeroConstructor, Config, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CalenderEventOffsetInSeconds;                      // 0x2A8(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EncryptionKeyDeliveryTimeOffset;                   // 0x2AC(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_471B[0x8];                                     // Fixing Size After Last Property..
	class UMeshNetworkComponent*                 MeshNetworkComponent;                              // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpecialEventScriptMeshActor");
		return Clss;
	}

	void OnRep_RootStartTime();
	void MeshRootStartEvent();
	void MeshRootStartCalendarTimerOnly();
	void MeshRootStartCalendarTimer();
	void MeshRootResetEvent();
	void MeshRootLogCalendarTimer();
	void MeshRootClearCalendarTimer();
};

// 0x140 (0x1E0 - 0xA0)
// Class SpecialEventGameplayRuntime.SpecialEventStatComponent
class USpecialEventStatComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnValueChangedDelegate;                            // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FSpecialEventStatDefinition>   StatDefinitions;                                   // 0xB0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FSpecialEventStatArray                StatFastArray;                                     // 0xC0(0x120)(Net, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpecialEventStatComponent");
		return Clss;
	}

	struct FSpecialEventStatArrayEntry GetStat(bool* bOutValid, const struct FGameplayTag& LookupTag);
	struct FSpecialEventStatArrayEntry GetSpecialEventStat(bool* bOutValid, class AActor* Actor, const struct FGameplayTag& LookupTag);
	bool AdjustStat(const struct FGameplayTag& LookupTag, float Adjustment, bool bLogError);
	void AdjustSpecialEventStat(class AActor* Actor, const struct FGameplayTag& LookupTag, float Adjustment);
};

// 0x120 (0x148 - 0x28)
// Class SpecialEventGameplayRuntime.DamageRecordEntry
class UDamageRecordEntry : public UObject
{
public:
	float                                        DamageTotal;                                       // 0x28(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndReplicationTime;                                // 0x2C(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 DamageTags;                                        // 0x30(0x20)(Net, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x50(0x18)(Net, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                GameplayCueParams;                                 // 0x68(0xD0)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_4720[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DamageRecordEntry");
		return Clss;
	}

	void OnRep_DamageTotal();
};

// 0x68 (0x108 - 0xA0)
// Class SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent
class USpecialRelevancyHealthComponent : public USpecialRelevancyComponentBase
{
public:
	struct FScalableFloat                        RelevancyDeathTimeLength;                          // 0xA0(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	bool                                         bSetLifespanOnLastRelevancyDeath;                  // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4725[0x3];                                     // Fixing Size After Last Property..
	float                                        OwnerMaxHealthCached;                              // 0xCC(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UDamageRecordEntry*>            ReplicatedDamageRecords;                           // 0xD0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSpecialRelevancyDeath;                           // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSpecialRelevancyDamage;                          // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	class AFortAthenaMutator_SpecialRelevancy*   CachedMutator;                                     // 0x100(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpecialRelevancyHealthComponent");
		return Clss;
	}

	void OnKilled(class AFortPlayerState* KillingPlayerState, int32 RelevancyGroupIndex);
	void OnDamaged(class AFortPlayerState* DamagingPlayerState, int32 RelevancyGroupIndex, float DealtDamage, float ActualDealtDamage, float TotalDamage, float DealtDamagePercent, float ActualDealtDamagePercent, float TotalDamagePercent, float MaxHealth, bool bKilled);
	float GetHealthPercentFromRelevancyIndex(int32 Index);
	float GetHealthPercent(class AActor* RelevancyActor);
	float GetHealthFromRelevancyIndex(int32 Index);
	float GetHealth(class AActor* RelevancyActor);
	float ClientGetHealthPercent();
	float ClientGetHealth();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
