#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x368 - 0x338)
// Class SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEventTODM
class UFortAthenaMutator_SpecialEventTODM : public UFortAthenaMutator
{
public:
	TArray<struct FSpecialEventTODMPhaseData>    PhaseDataArray;                                    // 0x338(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class USpecialEventScript*                   SpecialEventScript;                                // 0x348(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_46EB[0x10];                                    // Fixing Size After Last Property 
	class UFortTimeOfDayManager*                 SpawnedTODM;                                       // 0x360(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaMutator_SpecialEventTODM* GetDefaultObj();

	void OnPhaseActivated(class USpecialEventScript* InSpecialEventScript, class USpecialEventPhase* InSpecialEventPhase);
};

// 0x0 (0x38 - 0x38)
// Class SpecialEventGameplayRuntime.FortCheatManager_DestroyActorsAndComponents
class UFortCheatManager_DestroyActorsAndComponents : public UFortCheatManager_Coupled
{
public:

	static class UClass* StaticClass();
	static class UFortCheatManager_DestroyActorsAndComponents* GetDefaultObj();

	void DestroyActorsAndComponentsMutator_SetActorDefinitionsEnabled(const class FString& TagString, bool bEnabled);
	void DestroyActorsAndComponentsMutator_ListActorComponents(const class FString& InActorName);
};

// 0x30 (0x368 - 0x338)
// Class SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents
class UFortAthenaMutator_DestroyActorsAndComponents : public UFortAthenaMutator
{
public:
	TArray<struct FDestroyActorsAndComponentsMutator_ActorDefinition> ActorDefinitions;                                  // 0x338(0x10)(Edit, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_4725[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaMutator_DestroyActorsAndComponents* GetDefaultObj();

	void SetActorDefinitionsEnabled(struct FGameplayTagContainer& InTags, bool bEnabled);
	void PermanentlyDisableActorDefinitions(struct FGameplayTagContainer& InTags);
	void OnTrackedActorDestroyed(class UActor* DestroyedActor);
	void OnRep_ActorDefinitions(TArray<struct FDestroyActorsAndComponentsMutator_ActorDefinition>& OldActorDefinitions);
	void OnActorSpawned(class UActor* Actor);
};

// 0x0 (0x38 - 0x38)
// Class SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy
class UFortCheatManager_FakeKillRelevancy : public UFortCheatManager_Coupled
{
public:

	static class UClass* StaticClass();
	static class UFortCheatManager_FakeKillRelevancy* GetDefaultObj();

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
	TMap<class UFortPlayerStateAthena*, enum class EFakeKillRelevancyPlayerKillStep> ClientPlayerStateKillStepMap;                      // 0x1C8(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        ResetCounter;                                      // 0x218(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_479C[0x7];                                     // Fixing Size After Last Property 
	TArray<class UFortPlayerStateAthena*>        DebugSupergroupPlayerStates;                       // 0x220(0x10)(Net, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortControllerComponent_FakeKillRelevancy* GetDefaultObj();

	void ResetRelevancy();
	void PlayKillEffects(struct FFakeKillRelevancyPlayerDataEntry& FakeKillData, float RelevancyDelay);
	void OnRep_ResetCounter();
	void OnKillEffectsPlayed(class UFortPlayerStateAthena* PlayerState);
	struct FVector GetDeathLocation(class UFortPlayerStateAthena* PlayerState);
	void CancelKillEffectsOnServer();
	void CancelKillEffectsOnClient(TArray<class UFortPlayerStateAthena*>& PlayerStates);
};

// 0x60 (0x4A0 - 0x440)
// Class SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy
class UFortAthenaMutator_FakeKillRelevancy : public UFortAthenaMutator_SpecialRelevancy
{
public:
	TSubclassOf<class UFortControllerComponent_FakeKillRelevancy> FakeKillControllerComponentClass;                  // 0x440(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FFakeKillRelevancyPhaseData>   RelevancyPhaseDataArray;                           // 0x448(0x10)(Net, ZeroConstructor, NativeAccessSpecifierPrivate)
	int32                                        PhaseNum;                                          // 0x458(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_47AD[0x44];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaMutator_FakeKillRelevancy* GetDefaultObj();

	void StartNextKillWave();
	void SetUpKillPhase(int32 MaxPlayersRemaining, struct FGameplayTag& Reason, int32 NumWaves, float RelevancyDelay);
	void ResetRelevancy();
	void EndWave(int32 EndPhaseNum, int32 WaveNum);
};

// 0x10 (0x348 - 0x338)
// Class SpecialEventGameplayRuntime.FortAthenaMutator_LoadGameFeature
class UFortAthenaMutator_LoadGameFeature : public UFortAthenaMutator
{
public:
	class FString                                GameFeatureToLoad;                                 // 0x338(0x10)(Edit, ZeroConstructor, Config, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaMutator_LoadGameFeature* GetDefaultObj();

	void OnPlaylistDataReady(class UFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
};

// 0x10 (0x348 - 0x338)
// Class SpecialEventGameplayRuntime.FortAthenaMutator_RemoveGameFeatures
class UFortAthenaMutator_RemoveGameFeatures : public UFortAthenaMutator
{
public:
	TArray<class FString>                        AllowedGameFeatures;                               // 0x338(0x10)(Edit, ZeroConstructor, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaMutator_RemoveGameFeatures* GetDefaultObj();

	void OnPlaylistDataReady(class UFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
};

// 0x0 (0x38 - 0x38)
// Class SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent
class UFortCheatManager_SpecialEvent : public UFortCheatManager_Coupled
{
public:

	static class UClass* StaticClass();
	static class UFortCheatManager_SpecialEvent* GetDefaultObj();

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

// 0x458 (0x790 - 0x338)
// Class SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent
class UFortAthenaMutator_SpecialEvent : public UFortAthenaMutator
{
public:
	FMulticastInlineDelegateProperty_            TeleportAllPlayersFinished;                        // 0x338(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPawnLoaded;                                      // 0x348(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnInitController;                                  // 0x358(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnResumeGame;                                      // 0x368(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSpecialClientEvent;                              // 0x378(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnHandleLogout;                                    // 0x388(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnClientInitialLoadingFinished;                    // 0x398(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_4872[0x68];                                    // Fixing Size After Last Property 
	bool                                         bPlayersAreInvincible;                             // 0x410(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4873[0x27];                                    // Fixing Size After Last Property 
	int32                                        MinimumScoreBumpForAutomadeGoal;                   // 0x438(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4874[0x4];                                     // Fixing Size After Last Property 
	TArray<float>                                ScoreBrackets;                                     // 0x440(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bEnforceInfiniteSafeZonePhase;                     // 0x450(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4875[0x3];                                     // Fixing Size After Last Property 
	class FName                                  WarmupIslandPlayerStartTag;                        // 0x454(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowInventoryOpen;                               // 0x458(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4876[0x7];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        bAllowFullScreenMap;                               // 0x460(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	bool                                         bShouldClearFrontEndMapMarkers;                    // 0x488(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bBlockTeamIndicators;                              // 0x489(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4878[0x2];                                     // Fixing Size After Last Property 
	int32                                        ForceDisplaySquadInfoDuringGamePhases;             // 0x48C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowSquadListLocalPlayerInSplitscreen;           // 0x490(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4879[0x7];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 UIToHideDuringSpecialEvent;                        // 0x498(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 UIToHideWhenInInfiniteWarmup;                      // 0x4B8(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 ClientEventsThatUnhideHiddenWhileLoadingHUDElements; // 0x4D8(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	bool                                         bForceGarbageCollectionAfterUnloadOnServer;        // 0x4F8(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bForceGarbageCollectionAfterUnloadOnClient;        // 0x4F9(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bFullPurgeGC;                                      // 0x4FA(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_487C[0x5];                                     // Fixing Size After Last Property 
	class UFortAthenaAircraft*                   EventAircraft;                                     // 0x500(0x8)(Net, ZeroConstructor, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAircraftFlightInfo                   EventAircraftInfo;                                 // 0x508(0x48)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortAthenaAircraft>       EventAircraftClass;                                // 0x550(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USpecialEventScript*                   ScriptActor;                                       // 0x558(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDisableHUD;                                       // 0x560(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        GameResumed;                                       // 0x561(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4880[0x6];                                     // Fixing Size After Last Property 
	struct FVector                               AdditionalViewpoint;                               // 0x568(0x18)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bParachutesDisabled;                               // 0x580(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4881[0x7];                                     // Fixing Size After Last Property 
	class FString                                LastCSVEventName;                                  // 0x588(0x10)(Net, ZeroConstructor, RepNotify, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanStreamBuildingFoundationsIn;                   // 0x598(0x1)(Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4882[0x3];                                     // Fixing Size After Last Property 
	int32                                        AllPlayerTeleportedCount;                          // 0x59C(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFortDelayRTMMData                    DelayPlayersFromReturningToLobbyData;              // 0x5A0(0x10)(Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class FName                                  NamedWeightForContainerLootRoll;                   // 0x5B0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WeightForContainerLootRoll;                        // 0x5B4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4884[0x30];                                    // Fixing Size After Last Property 
	TArray<struct FFortSpecialEventEmoteData>    SpecialEventEmoteData;                             // 0x5E8(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 BlockedNativeActions;                              // 0x5F8(0x20)(Edit, Net, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	enum class EFortItemType                     DesiredQuickbarItemTypeAfterRemove;                // 0x618(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4888[0x7];                                     // Fixing Size After Last Property 
	class UInputComponent*                       SpecialEventsInputComponent;                       // 0x620(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bLockingOnFocalPoint;                              // 0x628(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4889[0x7];                                     // Fixing Size After Last Property 
	TArray<struct FFortSpecialEventOverrideParts> SpecialEventOverrideParts;                         // 0x630(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FFortSpecialEventGEData               GameplayEffectToApplyOnSwapToDefault;              // 0x640(0x10)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TMap<struct FUniqueNetIdRepl, int32>         OverridePartsArrayIndexMap;                        // 0x650(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFortSpecialEventGEData>       GameplayEffectsToApplyOnLogin;                     // 0x6A0(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSpecialEventMapData>          TerrainMapsToUnload;                               // 0x6B0(0x10)(Edit, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_488B[0x10];                                    // Fixing Size After Last Property 
	TArray<class UFortPlayerControllerAthena*>   UnhandledPlayerControllers;                        // 0x6D0(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class FName>                          HLODActorsToHideNames;                             // 0x6E0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                         bForceAllowCloth;                                  // 0x6F0(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_488C[0x1];                                     // Fixing Size After Last Property 
	bool                                         bManageBackfill;                                   // 0x6F2(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_488F[0x1];                                     // Fixing Size After Last Property 
	int32                                        PlayerCountToTriggerBackfill;                      // 0x6F4(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWaitForPlayerCountToTriggerBackfill;              // 0x6F8(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4891[0x3];                                     // Fixing Size After Last Property 
	float                                        UpdateBackfillStatusTime;                          // 0x6FC(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4893[0x10];                                    // Fixing Size After Last Property 
	bool                                         bServerHasBackfillActive;                          // 0x710(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanToggleCursorModeInStasis;                      // 0x711(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4894[0x6];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        MannequinRecentlyRenderedCheckToleranceValue;      // 0x718(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<class USpecialEventPlayerMannequin*>  SpecialEventMannequins;                            // 0x740(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UActor>>            ActorSpawnDelegateClasses;                         // 0x750(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_4897[0x30];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaMutator_SpecialEvent* GetDefaultObj();

	void WarmUpIslandUpdated();
	void UpdateBackfillStatus();
	void UnloadTerrainMaps(struct FGameplayTag& MapTag);
	void ToggleHUDs(bool bHide);
	void ToggleDisableWeapons(bool bDisableWeapons);
	void ToggleDisableParachutes(bool bDisable);
	void ToggleAllPlayersInvincibility(bool bInvincible);
	void TeleportAllPlayers(const struct FGameplayTagContainer& EventTags, int32 TeleportsPerFrame, int32 SafeZoneIndex);
	void SwapBodyParts(int32 ArrayIndex, class UFortPlayerController* FortPC);
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
	void OnWarmUpTeleportComplete(class UFortPlayerPawn* PlayerPawn);
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
	void OnGamePhaseStepChanged(TScriptInterface<class UFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep);
	void OnAircraftFlightEnded(class UFortAthenaAircraft* FortAthenaAircraft);
	void OnAircraftExitedDropZone(class UFortAthenaAircraft* FortAthenaAircraft);
	void OnAircraftEnteredDropZone(class UFortAthenaAircraft* FortAthenaAircraft);
	void OnActorSpawned(class UActor* Actor);
	void OnActorPreSpawnInitialization(class UActor* Actor);
	void NotifyClientsGameResumed();
	void NetMulticast_CheatClearSpecialEventGameUserSettings();
	void JumpToSafeZonePhase(const struct FVector& PawnSpawnCenterLocation, float PawnSpawnMinDistance, float PawnSpawnMaxDistance);
	void HandleSpecialEventMannequinDestroyed(class UActor* MannequinActor);
	class USpecialEventScript* GetScript();
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

// 0x10 (0x1B50 - 0x1B40)
// Class SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint
class UFortCameraMode_SpecialEventFocalPoint : public UFortCameraMode_FocalPoint
{
public:
	float                                        OverrideTransitionTime;                            // 0x1B40(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_48B2[0xC];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortCameraMode_SpecialEventFocalPoint* GetDefaultObj();

	void UpdateCameraBP(class UActor* ViewTarget, float DeltaTime, struct FTViewTarget& OutVT);
	void SetOverrideTransitionTime(float InTransitionTime);
	void OnBecomeInactiveBP(class UActor* ViewTarget);
	void OnBecomeActiveBP(class UActor* ViewTarget);
};

// 0x880 (0x920 - 0xA0)
// Class SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent
class UFortCharacterMovementMutatorComponent : public UActorComponent
{
public:
	class UCharacter*                            CharacterOwner;                                    // 0xA0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortMovementComp_CharacterAthena*     MovementComponent;                                 // 0xA8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortMovementComp_CharacterAthena*     CDOMovementComponent;                              // 0xB0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_48C9[0x10];                                    // Fixing Size After Last Property 
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
	class UActor*                                BuffetBubblesFollowActor;                          // 0x310(0x8)(Net, ZeroConstructor, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               BuffetBubblesInitialFollowBoxOffsetPercent;        // 0x318(0x18)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_48CD[0xE0];                                    // Fixing Size After Last Property 
	struct FBuffetBubblesReplicatedData          BuffetBubblesReplicatedData;                       // 0x410(0x80)(Net, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_48CE[0x280];                                   // Fixing Size After Last Property 
	struct FScalableFloat                        BuffetBubblesIntroSpeed;                           // 0x710(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_48CF[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            BuffetBubblesIntroTargetTransform;                 // 0x740(0x60)(Net, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetFlyingMaxPitchDegrees;                       // 0x7A0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetFlyingMaxSpeed;                              // 0x7C8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetFlyingVelocityDirectionInterpSpeed;          // 0x7F0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FRotator                              BuffetFlyingRotationRate;                          // 0x818(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        BuffetFlyingMaxSpeedOverride;                      // 0x830(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BuffetFlyingMaxSpeedInterpSpeed;                   // 0x834(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_48D2[0x4];                                     // Fixing Size After Last Property 
	float                                        BuffetFlyingVelocityDirectionInterpSpeedOverride;  // 0x83C(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        BuffetFlyingRicochetSphereSize;                    // 0x840(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetFlyingRicochetRotationDuration;              // 0x868(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuffetFlyingRicochetControlRotationInterpSpeed;    // 0x890(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_48D5[0x48];                                    // Fixing Size After Last Property 
	struct FBuffetFlyingRicochetReplicatedData   BuffetFlyingRicochetReplicatedData;                // 0x900(0x20)(Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortCharacterMovementMutatorComponent* GetDefaultObj();

	void SetBuffetBubblesIntroTargetTransform(struct FTransform& Transform);
	void SetBuffetBubblesInitialFollowBoxOffsetPercent(const struct FVector& BoxOffsetPercent);
	void SetBuffetBubblesFollowActor(class UActor* Actor);
	void OverrideBuffetFlyingVelocityDirectionInterpSpeed(float Value, bool bAsMultiplier);
	void OverrideBuffetFlyingMaxSpeed(float Value, bool bAsMultiplier, float InterpSpeed);
	void OnRep_BuffetFlyingRicochetReplicatedData();
	void OnRep_BuffetBubblesFollowActor();
	void OnMovementModeChanged(class UCharacter* Character, enum class EMovementMode PreviousMovementMode, uint8 PreviousCustomMode);
};

// 0x8 (0x340 - 0x338)
// Class SpecialEventGameplayRuntime.FortCharacterMovementMutator
class UFortCharacterMovementMutator : public UFortAthenaMutator
{
public:
	TSubclassOf<class UFortCharacterMovementMutatorComponent> MovementMutatorComponentClass;                     // 0x338(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortCharacterMovementMutator* GetDefaultObj();

	void OnFortPawnChanged(class UFortPawn* NewPawn);
};

// 0x58 (0x100 - 0xA8)
// Class SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic
class UFortControllerComponent_GameplayCinematic : public UFortControllerComponent
{
public:
	uint8                                        Pad_48E5[0x30];                                    // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            BP_OnStartGameplayOutro;                           // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            BP_OnGameplayIntroFinished;                        // 0xE8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bIsReadyForGameplay;                               // 0xF8(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_48E6[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortControllerComponent_GameplayCinematic* GetDefaultObj();

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
	TWeakObjectPtr<class UFortAthenaMutator_SpecialEvent> SpecialEventMutator;                               // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortControllerComponent_SpecialEvent* GetDefaultObj();

	void ServerHandleSpecialClientEvent(struct FGameplayTag& EventTag, int32 Count);
	void SendSpecialClientEvent(const struct FGameplayTag& EventTag, int32 Count);
};

// 0x100 (0x1A0 - 0xA0)
// Class SpecialEventGameplayRuntime.FortCustomTickComponent
class UFortCustomTickComponent : public UActorComponent
{
public:
	enum class EFortCustomTickComponentCondition Condition;                                         // 0xA0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_48F3[0x3];                                     // Fixing Size After Last Property 
	struct FGameplayTag                          AuthorityQualitySettingsTag;                       // 0xA4(0x4)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          DefaultClientQualitySettingsTag;                   // 0xA8(0x4)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_48F4[0x4];                                     // Fixing Size After Last Property 
	TMap<enum class ECommonPlatformType, struct FGameplayTag> ClientPlatformQualitySettingsTagMap;               // 0xB0(0x50)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<struct FGameplayTag, struct FCustomTickComonentQualitySettings> QualitySettingsMap;                                // 0x100(0x50)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                        WasRecentlyRenderedTolerance;                      // 0x150(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_48F5[0x4];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnCustomTick;                                      // 0x158(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_48F6[0x38];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortCustomTickComponent* GetDefaultObj();

};

// 0x8 (0x2C0 - 0x2B8)
// Class SpecialEventGameplayRuntime.FortSpecialRelevancyActorSpawner
class UFortSpecialRelevancyActorSpawner : public UFortActorSpawner
{
public:
	uint8                                        Pad_48FC[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortSpecialRelevancyActorSpawner* GetDefaultObj();

	void BP_OnActorSpawnedPerRelevancyGroup(TArray<class UActor*>& InSpawnedActors);
};

// 0x20 (0xC0 - 0xA0)
// Class SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent
class USpecialEventAudioAnalysisBaseComponent : public UActorComponent
{
public:
	float                                        CurrentTime;                                       // 0xA0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4911[0x4];                                     // Fixing Size After Last Property 
	class ULoudnessNRT*                          LoudnessNRT;                                       // 0xA8(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOnsetNRT*                             OnsetNRT;                                          // 0xB0(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UConstantQNRT*                         ConstantQNRT;                                      // 0xB8(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USpecialEventAudioAnalysisBaseComponent* GetDefaultObj();

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
	uint8                                        Pad_491B[0x3];                                     // Fixing Size After Last Property 
	float                                        IntensityMultiplier;                               // 0xD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_491D[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USpecialEventAudioHapticsComponent* GetDefaultObj();

	void StopHaptics();
	void StartHaptics();
	bool AreHapticsActive();
};

// 0x0 (0x68 - 0x68)
// Class SpecialEventGameplayRuntime.SpecialEventCinematicCameraMode
class USpecialEventCinematicCameraMode : public UFortCinematicCamera
{
public:

	static class UClass* StaticClass();
	static class USpecialEventCinematicCameraMode* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SpecialEventGameplayRuntime.SpecialEventCursorInstigatorInterface
class USpecialEventCursorInstigatorInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class USpecialEventCursorInstigatorInterface* GetDefaultObj();

	bool SpecialEventCursorTrace(struct FHitResult* OutHitResult, class USpecialEventCursorPawnComponent* CursorPawnComponent, struct FGameplayTag& CursorModeTag, class UCameraComponent* CameraComponent, struct FVector& CursorWorldDirection);
};

// 0x308 (0x3A8 - 0xA0)
// Class SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent
class USpecialEventCursorPawnComponent : public UPawnComponent
{
public:
	uint8                                        Pad_49EF[0x8];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnDesiredVisibilityChanged;                        // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bAllowOnNonOwningClients;                          // 0xB8(0x1)(Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_49F2[0x7];                                     // Fixing Size After Last Property 
	class UPawn*                                 OwningPawn;                                        // 0xC0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortPlayerController*                 OwningController;                                  // 0xC8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_49F3[0x10];                                    // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnCursorModeChanged;                               // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FGameplayTag                          DefaultCursorModeTag;                              // 0xF0(0x4)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDefaultCursorModeAutoActivate;                    // 0xF4(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_49F6[0x3];                                     // Fixing Size After Last Property 
	TMap<struct FGameplayTag, struct FSpecialEventCursorMode> CursorModes;                                       // 0xF8(0x50)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSpecialEventCursorStackEntry> CursorStack;                                       // 0x148(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FSpecialEventCursorStackEntry         ReplicatedCursorStackEntry;                        // 0x158(0xC)(Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_49F7[0x4];                                     // Fixing Size After Last Property 
	TSubclassOf<class USpecialEventInputHelperComponent> InputHelperClass;                                  // 0x168(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseGamepadLookInput;                              // 0x170(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseGamepadMoveInput;                              // 0x171(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseGyroInput;                                     // 0x172(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bObeyInvertedPitchUserSetting;                     // 0x173(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_49F9[0x4];                                     // Fixing Size After Last Property 
	class UCommonInputSubsystem*                 CommonInputSubsystem;                              // 0x178(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USpecialEventInputHelperComponent*     InputHelperComponent;                              // 0x180(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_49FA[0x38];                                    // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnViewportLocationChanged;                         // 0x1C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScalableFloat                        NonOwningInterpSpeed;                              // 0x1D0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinDeltaToSendWorldLocationToServer;               // 0x1F8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_49FC[0x8];                                     // Fixing Size After Last Property 
	struct FVector                               ReplicatedWorldLocation;                           // 0x228(0x18)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_49FE[0x50];                                    // Fixing Size After Last Property 
	TArray<class UUserWidget*>                   Widgets;                                           // 0x290(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_49FF[0xE9];                                    // Fixing Size After Last Property 
	bool                                         bAdditiveRotationAllowedByDefault;                 // 0x389(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4A00[0x1];                                     // Fixing Size After Last Property 
	bool                                         bZoomAllowedByDefault;                             // 0x38B(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ZoomActionName;                                    // 0x38C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4A02[0x8];                                     // Fixing Size After Last Property 
	class UCameraComponent*                      AdditiveOffsetCameraComponent;                     // 0x398(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4A03[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USpecialEventCursorPawnComponent* GetDefaultObj();

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
	void OnHUDPostRender(class UHUD* HUD, class UCanvas* Canvas);
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
	class USpecialEventCursorPawnComponent* GetSpecialEventCursorPawnComponent(class UPawn* Pawn, struct FGameplayTag& CursorModeTag, bool bMustBeActive);
	struct FVector2D GetNormalizedLocation();
	class UPlayerController* GetLocalController();
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
	uint8                                        Pad_4A3C[0x8];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnCursorPawnComponentSet;                          // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TSubclassOf<class USpecialEventCursorPawnComponent> CursorPawnComponentClass;                          // 0xB8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          CursorModeTag;                                     // 0xC0(0x4)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAlignFXToCursor;                                  // 0xC4(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4A40[0x3];                                     // Fixing Size After Last Property 
	class UFortWeapon*                           OwningWeapon;                                      // 0xC8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortPlayerPawn*                       Pawn;                                              // 0xD0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USpecialEventCursorPawnComponent*      CursorPawnComponent;                               // 0xD8(0x8)(ExportObject, Net, ZeroConstructor, Transient, InstancedReference, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4A41[0x58];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USpecialEventCursorWeaponComponent* GetDefaultObj();

	void OnUnEquip(class UFortWeapon* Weapon);
	void OnRep_CursorPawnComponent();
	void OnPlayImpactFX(class UFortWeapon* Weapon, struct FHitResult& HitResult, class UFXSystemComponent* FXSystemComponent);
	void OnGetAimRotOverride(class UFortWeapon* Weapon, enum class EFortAbilityTargetingSource TargetingSource, struct FRotator* OutOverride, bool* bOutExecutionResult);
	void OnEquip(class UFortWeapon* Weapon);
	void OnBeamFired(class UFortWeapon* Weapon, bool bUsePersistentBeam, class UFXSystemComponent* PSC, struct FVector& BeamOrigin, struct FVector& HitLocation);
	class USpecialEventCursorPawnComponent* GetSpecialEventCursorPawnComponentForWeapon(class UFortWeapon* Weapon);
	class USpecialEventCursorPawnComponent* GetSpecialEventCursorPawnComponentForCurrentWeapon(class UFortPlayerPawn* Pawn);
	class USpecialEventCursorPawnComponent* GetCursorPawnComponent();
	class USpecialEventCursorWeaponComponent* GetCurrentSpecialEventCursorWeaponComponent(class UFortPlayerPawn* Pawn);
	bool GetCurrentHitResult(struct FHitResult* OutHitResult);
};

// 0x0 (0x28 - 0x28)
// Class SpecialEventGameplayRuntime.SpecialEventGameplayGlobals
class USpecialEventGameplayGlobals : public UObject
{
public:

	static class UClass* StaticClass();
	static class USpecialEventGameplayGlobals* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SpecialEventGameplayRuntime.SpecialEventGameplayLibrary
class USpecialEventGameplayLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USpecialEventGameplayLibrary* GetDefaultObj();

	void StreamOutAllBuildingFoundations(class UObject* WorldContextObject);
	void SetNextLoadingScreen(class UObject* WorldContextObject, class UAthenaLoadingScreenItemDefinition* LoadingScreenDefinition, bool bCanShowLoadingBar);
	void SetLODOnLandscapProxies(class UObject* WorldContextObject, bool bForced, int32 InLODValue);
	void HideSkydivingShadowProxy(class UObject* WorldContextObject);
	class USpecialEventScript* GetSpecialEventScript(class UObject* WorldContextObject);
	class FString GetSpecialEventPlayerDisplayName(class UFortPlayerControllerAthena* LocalController, class UFortPlayerStateAthena* PlayerState);
	class UFortAthenaMutator_SpecialEvent* GetSpecialEventMutator(class UObject* WorldContextObject);
	struct FFortAthenaLoadout GetLocalPlayerLoadout(class UObject* WorldContextObject);
	bool GetHasInfiniteSafeZonePhase(class UObject* WorldContextObject);
	void ForceUpdateGrass(class UObject* WorldContextObject, const struct FVector& Location);
	void ForceDestroyComponents(TArray<class UActorComponent*>& Components, bool bPromoteChildren, const class FString& LogContext);
	class UFortControllerComponent_SpecialEvent* FindSpecialEventComponent(class UController* Controller);
	class UFortControllerComponent_GameplayCinematic* FindGameplayCinematicComponent(class UController* Controller);
	bool DetachPawnFromComponent(class UFortPawn* Pawn, class USceneComponent* Component, enum class EDetachmentRule LocationRule, enum class EDetachmentRule RotationRule, enum class EDetachmentRule ScaleRule);
	bool DetachPawn(class UFortPawn* Pawn, enum class EDetachmentRule LocationRule, enum class EDetachmentRule RotationRule, enum class EDetachmentRule ScaleRule);
	void CreateSpecialEventPlayerEliminationWorldMarker(class UFortPlayerControllerAthena* LocalController, class UFortPlayerStateAthena* VictimPlayerState, struct FVector& DeathLocation);
	bool AttachPawnToComponent(class UFortPawn* Pawn, class USceneComponent* Component, class FName SocketName, enum class EAttachmentRule LocationRule, enum class EAttachmentRule RotationRule, enum class EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
	void AddSpecialEventRecentElimination(struct FVector& Location, class UFortPlayerStateAthena* PlayerState);
	void AddSpecialEventKillFeedEntry(class UObject* WorldContextObject, class UFortPlayerStateAthena* VictimPlayerState, class UFortPlayerStateAthena* KillerPlayerState, class FText NonPlayerVictimName, class FText NonPlayerKillerName, struct FGameplayTag& DeathCauseTag, enum class EDeathCauseReason DeathCauseReason, float Distance);
};

// 0x18 (0x48 - 0x30)
// Class SpecialEventGameplayRuntime.FortAsyncAction_GameplayCinematicComponentReady
class UFortAsyncAction_GameplayCinematicComponentReady : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnReady;                                           // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_4AB4[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAsyncAction_GameplayCinematicComponentReady* GetDefaultObj();

	class UFortAsyncAction_GameplayCinematicComponentReady* FindGameplayCinematicComponentAsync(class UController* Conroller);
};

// 0x48 (0xE8 - 0xA0)
// Class SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent
class USpecialEventGameUserSettingsControllerComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnLoaded;                                          // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                Version;                                           // 0xB0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinTimeBetweenSaves;                               // 0xC0(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4AD1[0x24];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USpecialEventGameUserSettingsControllerComponent* GetDefaultObj();

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
	uint8                                        Pad_4AD6[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAsyncAction_SpecialEventGameUserSettingsReady* GetDefaultObj();

	class UFortAsyncAction_SpecialEventGameUserSettingsReady* SpecialEventGameUserSettingsReadyAsync(class UObject* WorldContextObject);
};

// 0xA0 (0x330 - 0x290)
// Class SpecialEventGameplayRuntime.SpecialEventPhase
class USpecialEventPhase : public UInfo
{
public:
	uint8                                        Pad_4AEF[0x18];                                    // Fixing Size After Last Property 
	struct FGameplayTag                          PhaseTag;                                          // 0x2A8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bApplyGameplayEffects;                             // 0x2AC(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4AF2[0x3];                                     // Fixing Size After Last Property 
	TArray<TSubclassOf<class UGameplayEffect>>   GameplayEffectsToApply;                            // 0x2B0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<struct FSpecialEventPhaseComponentNetModeInfo> ControllerComponentsToApplyInfoList;               // 0x2C0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSpecialEventPhaseComponentNetModeInfo> PawnComponentsToApplyInfoList;                     // 0x2D0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UCameraModifier>           CameraModifierToApply;                             // 0x2E0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRemoveModifierOnPhaseDeactivation;                // 0x2E8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRemoveGameplayEffects;                            // 0x2E9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4AF4[0x6];                                     // Fixing Size After Last Property 
	TArray<TSubclassOf<class UGameplayEffect>>   GameplayEffectsToRemove;                           // 0x2F0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<struct FSpecialEventPhaseComponentNetModeInfo> ControllerComponentsToRemoveInfoList;              // 0x300(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSpecialEventPhaseComponentNetModeInfo> PawnComponentsToRemoveInfoList;                    // 0x310(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UCameraModifier*                       AppliedCameraModifier;                             // 0x320(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESpecialEventPhaseState           PhaseState;                                        // 0x328(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4AF6[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USpecialEventPhase* GetDefaultObj();

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
class USpecialEventPlayerMannequin : public UFortPlayerMannequin
{
public:
	uint8                                        bDisableCollisionOnBeginPlay : 1;                  // Mask: 0x1, PropSize: 0x10x618(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bDisableComponentsTickOnServer : 1;                // Mask: 0x2, PropSize: 0x10x618(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRegisterWithSpecialEventMutatorOnClient : 1;      // Mask: 0x4, PropSize: 0x10x618(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bDestroyUnusedSkeletalMeshComponentsOnClientFirstInitialization : 1; // Mask: 0x8, PropSize: 0x10x618(0x1)(Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4B03[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USpecialEventPlayerMannequin* GetDefaultObj();

	void RegisterWithSpecialEventMutator();
	void HandleOnMutatorAdded(class UFortGameplayMutator* NewMutator);
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
	uint8                                        Pad_4B16[0x3];                                     // Fixing Size After Last Property 
	float                                        RewindLerpTime;                                    // 0xB0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DefaultRewindDuration;                             // 0xB4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DefaultRewindPlaybackSpeed;                        // 0xB8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSpecialEventRewindComponentStateData StateData;                                         // 0xBC(0x8)(Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)
	float                                        ReplicatedRewindDuration;                          // 0xC4(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USpecialEventRewindComponent* GetDefaultObj();

	bool TryStartRewinding(float Duration, float PlaybackSpeed);
	void OnRep_StateData(struct FSpecialEventRewindComponentStateData& OldStateData);
};

// 0x2C0 (0x388 - 0xC8)
// Class SpecialEventGameplayRuntime.SpecialEventRewindComponent_PlayerPawn
class USpecialEventRewindComponent_PlayerPawn : public USpecialEventRewindComponent
{
public:
	bool                                         bStartServerRecordingOnLastGroundFrame;            // 0xC8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4B1F[0x27];                                    // Fixing Size After Last Property 
	struct FSpecialEventRewindComponentRecording_PlayerPawn ReplicatedRecording;                               // 0xF0(0x20)(Net, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4B20[0x118];                                   // Fixing Size After Last Property 
	struct FSpecialEventRewindComponentRecordingFastArray_PlayerPawn ReplicatedRecordingFastArray;                      // 0x228(0x118)(Net, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4B21[0x48];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USpecialEventRewindComponent_PlayerPawn* GetDefaultObj();

	void OnServerLanded(struct FHitResult& Hit);
};

// 0x80 (0x310 - 0x290)
// Class SpecialEventGameplayRuntime.SpecialEventScript
class USpecialEventScript : public UInfo
{
public:
	FMulticastInlineDelegateProperty_            OnSpecialEventPhaseActivated;                      // 0x290(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSpecialEventPhaseDeactivated;                    // 0x2A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FPhaseInfo>                    PhaseInfoArray;                                    // 0x2B0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class ULevelSequenceActor*                   MasterSequence;                                    // 0x2C0(0x8)(Net, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
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
	uint8                                        Pad_4B38[0x1];                                     // Fixing Size After Last Property 
	int32                                        ReplicatedActivePhaseIndex;                        // 0x2E8(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4B39[0xC];                                     // Fixing Size After Last Property 
	class UMeshNetworkComponent*                 MeshNetworkComponent;                              // 0x2F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4B3A[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USpecialEventScript* GetDefaultObj();

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
class USpecialEventScriptMeshActor : public UInfo
{
public:
	struct FDateTime                             RootStartTime;                                     // 0x290(0x8)(Net, ZeroConstructor, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                CalendarEventName;                                 // 0x298(0x10)(Edit, ZeroConstructor, Config, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CalenderEventOffsetInSeconds;                      // 0x2A8(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EncryptionKeyDeliveryTimeOffset;                   // 0x2AC(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4B43[0x8];                                     // Fixing Size After Last Property 
	class UMeshNetworkComponent*                 MeshNetworkComponent;                              // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USpecialEventScriptMeshActor* GetDefaultObj();

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

	static class UClass* StaticClass();
	static class USpecialEventStatComponent* GetDefaultObj();

	struct FSpecialEventStatArrayEntry GetStat(bool* bOutValid, const struct FGameplayTag& LookupTag);
	struct FSpecialEventStatArrayEntry GetSpecialEventStat(bool* bOutValid, class UActor* Actor, const struct FGameplayTag& LookupTag);
	bool AdjustStat(const struct FGameplayTag& LookupTag, float Adjustment, bool bLogError);
	void AdjustSpecialEventStat(class UActor* Actor, const struct FGameplayTag& LookupTag, float Adjustment);
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
	uint8                                        Pad_4B58[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDamageRecordEntry* GetDefaultObj();

	void OnRep_DamageTotal();
};

// 0x68 (0x108 - 0xA0)
// Class SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent
class USpecialRelevancyHealthComponent : public USpecialRelevancyComponentBase
{
public:
	struct FScalableFloat                        RelevancyDeathTimeLength;                          // 0xA0(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	bool                                         bSetLifespanOnLastRelevancyDeath;                  // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4B74[0x3];                                     // Fixing Size After Last Property 
	float                                        OwnerMaxHealthCached;                              // 0xCC(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UDamageRecordEntry*>            ReplicatedDamageRecords;                           // 0xD0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSpecialRelevancyDeath;                           // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSpecialRelevancyDamage;                          // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	class UFortAthenaMutator_SpecialRelevancy*   CachedMutator;                                     // 0x100(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USpecialRelevancyHealthComponent* GetDefaultObj();

	void OnKilled(class UFortPlayerState* KillingPlayerState, int32 RelevancyGroupIndex);
	void OnDamaged(class UFortPlayerState* DamagingPlayerState, int32 RelevancyGroupIndex, float DealtDamage, float ActualDealtDamage, float TotalDamage, float DealtDamagePercent, float ActualDealtDamagePercent, float TotalDamagePercent, float MaxHealth, bool bKilled);
	float GetHealthPercentFromRelevancyIndex(int32 Index);
	float GetHealthPercent(class UActor* RelevancyActor);
	float GetHealthFromRelevancyIndex(int32 Index);
	float GetHealth(class UActor* RelevancyActor);
	float ClientGetHealthPercent();
	float ClientGetHealth();
};

}


