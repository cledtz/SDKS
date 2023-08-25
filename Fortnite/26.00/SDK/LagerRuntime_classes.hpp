#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x348 - 0x290)
// Class LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler
class UFortAthenaLivingWorldPointProvidersEnabler : public UActor
{
public:
	TArray<TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>> EnabledLinkedPointProviders;                       // 0x290(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>> AvailableLinkedPointProviders;                     // 0x2A0(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 EnablerTags;                                       // 0x2B0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate)
	TArray<TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>> LinkedPointProviders;                              // 0x2D0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        PointProvidersToEnable;                            // 0x2E0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        EvaluateAutomatically;                             // 0x308(0x28)(Edit, NativeAccessSpecifierPrivate)
	uint8                                        Pad_6CA[0x8];                                      // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnCompletedEvaluationDelegate;                     // 0x338(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldPointProvidersEnabler* GetDefaultObj();

	void RemoveClosestPointProvidersToPoint(struct FVector& Point, float MaximumDistance, int32 PointsToDisable);
	void OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags);
	void OnCompletedEvaluation__DelegateSignature(TArray<TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>>& EnabledPointProviders);
	bool HasCompletedEvaluation();
	struct FGameplayTagContainer GetEnablerTags();
	TArray<TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>> GetEnabledLinkedPointProviders();
	void EvaluateAndEnablePointProviders();
	bool DoesStartEnabled();
};

// 0x0 (0x348 - 0x348)
// Class LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride
class UFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride : public UFortAthenaLivingWorldPointProvidersEnabler
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride* GetDefaultObj();

};

// 0x58 (0xF8 - 0xA0)
// Class LagerRuntime.FortAthenaLinearEncounterAnalyticComponent
class UFortAthenaLinearEncounterAnalyticComponent : public UActorComponent
{
public:
	uint8                                        Pad_717[0x58];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaLinearEncounterAnalyticComponent* GetDefaultObj();

	void OnStageCompleted(TArray<class UFortPickup*>& SpawnedRewards);
	void OnEncounterStart(class UFortAthenaLivingWorldEncounterInstance* InAttackerEncounter, class UFortAthenaLivingWorldEncounterInstance* InDefenderEncounter);
	void OnEncounterEnd();
	void OnDefenderSpawned(class UActor* SpawnedDefender);
	void OnDefenderDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnDefenderDidDamage(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnDefenderDamaged(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnAttackerSpawned(class UActor* SpawnedAttacker);
};

// 0x0 (0x38 - 0x38)
// Class LagerRuntime.FortAthenaLivingWorldConditionSchema
class UFortAthenaLivingWorldConditionSchema : public UWorldConditionSchema
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldConditionSchema* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class LagerRuntime.FortAthenaLivingWorldEventDataConditionSchema
class UFortAthenaLivingWorldEventDataConditionSchema : public UFortAthenaLivingWorldConditionSchema
{
public:
	uint8                                        Pad_71A[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldEventDataConditionSchema* GetDefaultObj();

};

// 0x200 (0x230 - 0x30)
// Class LagerRuntime.FortAthenaLivingWorldConfigData
class UFortAthenaLivingWorldConfigData : public UDataAsset
{
public:
	TArray<struct FFortAthenaLivingWorldCategoryTableData> CategoryTableDatas;                                // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxActorCount;                                     // 0x40(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxEventSpawnPerTick;                              // 0x68(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxActorDespawnPerTick;                            // 0x90(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MinimumEventGenerationInterval;                    // 0xB8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxActorDensity;                                   // 0xE0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxActorUpdatesPerTick;                            // 0x108(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ActorDensityGridCellSize;                          // 0x130(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        PointClusterSize;                                  // 0x158(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MinNumberOfPlayerForAggressiveSpawning;            // 0x180(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FFortAthenaLivingWorldTagDensityGridData> TagDensityGridData;                                // 0x1A8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FGameplayTagQuery                     SingleUseSpawnerDataQuery;                         // 0x1B8(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortAthenaLivingWorldEQSHelper> EQSActorHelperClass;                               // 0x200(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        DelayEventGeneration;                              // 0x208(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldConfigData* GetDefaultObj();

};

// 0x60 (0x1A0 - 0x140)
// Class LagerRuntime.FortAthenaLivingWorldDebugDensityMiniMapIndicator
class UFortAthenaLivingWorldDebugDensityMiniMapIndicator : public UFortMiniMapIndicator
{
public:
	TArray<struct FFortAthenaActorDensityDebugInfo> ActorDebugInfos;                                   // 0x140(0x10)(Net, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<float>                                DensityGridValues;                                 // 0x150(0x10)(Net, ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FVector                               GridOrigin;                                        // 0x160(0x18)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FIntVector                            MaxGridSize;                                       // 0x178(0xC)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CellSize;                                          // 0x184(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxDensity;                                        // 0x188(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_720[0x4];                                      // Fixing Size After Last Property 
	class FString                                DisplayName;                                       // 0x190(0x10)(Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldDebugDensityMiniMapIndicator* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class LagerRuntime.FortAthenaLivingWorldDespawnConditionSchema
class UFortAthenaLivingWorldDespawnConditionSchema : public UFortAthenaLivingWorldConditionSchema
{
public:
	uint8                                        Pad_725[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldDespawnConditionSchema* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class LagerRuntime.FortAthenaLivingWorldEncounter
class UFortAthenaLivingWorldEncounter : public UDataAsset
{
public:
	struct FScalableFloat                        IntervalBetweenEventGeneration;                    // 0x30(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FFortAthenaLivingWorldEncounterStage> Stages;                                            // 0x58(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldEncounter* GetDefaultObj();

};

// 0x158 (0x180 - 0x28)
// Class LagerRuntime.FortAthenaLivingWorldEncounterInstance
class UFortAthenaLivingWorldEncounterInstance : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnActorSpawned;                                    // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFirstActorSpawned;                               // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnActorDestroyed;                                  // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLastActorDestroyed;                              // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnActorDied;                                       // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_753[0x50];                                     // Fixing Size After Last Property 
	struct FFortAthenaLivingWorldConditionContainer ConditionContainer;                                // 0xC8(0x18)(Transient, NativeAccessSpecifierPrivate)
	TArray<TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>> AllowedPointProviders;                             // 0xE0(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>> RegisteredPointProviders;                          // 0xF0(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UFortAthenaLivingWorldEventData*> RuntimeCreatedEventDatas;                          // 0x100(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_755[0x20];                                     // Fixing Size After Last Property 
	TSoftObjectPtr<class UFortAthenaLivingWorldEncounter> EncounterDefinition;                               // 0x130(0x20)(Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UActor*                                ActorDensityReservoir;                             // 0x150(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UActor*>                        SpawnedActors;                                     // 0x158(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_75E[0x8];                                      // Fixing Size After Last Property 
	int32                                        CurrentStageIndex;                                 // 0x170(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_75F[0x4];                                      // Fixing Size After Last Property 
	bool                                         bIsPaused;                                         // 0x178(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_760[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldEncounterInstance* GetDefaultObj();

	void StartEncounterStage(int32 StageIndex);
	void ResumeEncounter();
	void Reset();
	void RequestEventGeneration();
	void RemoveAllowedPointProvider(TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>& PointProvider);
	void PauseEncounter();
	bool OwnsActor(class UActor* Actor);
	void OnEncounterActorDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnActorSpawned__DelegateSignature(class UActor* SpawnedActor);
	void OnActorDied__DelegateSignature(class UActor* DiedActor);
	void OnActorDestroyed__DelegateSignature(class UActor* DestroyedActor);
	bool HasReachedMaxSpawnedCount();
	int32 GetTotalActorCount();
	int32 GetAliveSpawnedActorCount();
	void AdvanceEncounterStage();
	void AddAllowedPointProvider(TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>& PointProvider);
};

// 0x110 (0x140 - 0x30)
// Class LagerRuntime.FortAthenaLivingWorldEventData
class UFortAthenaLivingWorldEventData : public UDataAsset
{
public:
	int32                                        TimeOfDayFilters;                                  // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        WaterLevelIndexMin;                                // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        WaterLevelIndexMax;                                // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_778[0x4];                                      // Fixing Size After Last Property 
	struct FWorldConditionQueryDefinition        CanSpawnCondition;                                 // 0x40(0x18)(Edit, NativeAccessSpecifierPrivate)
	TArray<struct FFortAthenaLivingWorldDespawnCondition> DespawnConditions;                                 // 0x58(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FGameplayTagQuery                     ProviderFiltersTagQuery;                           // 0x68(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FPointProviderFilterEntry>     ProviderFiltersEntries;                            // 0xB0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FInstancedStruct                      PointProviderSelector;                             // 0xC0(0x10)(Edit, NativeAccessSpecifierPrivate)
	TArray<struct FFortAthenaLivingWorldTaggedSpawnActionClass> SpawnActions;                                      // 0xD0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MinActorCountToSpawn;                              // 0xE0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxActorCountToSpawn;                              // 0x108(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FFortAthenaLivingWorldEventDataActorSpawnDescription> ActorDescriptions;                                 // 0x130(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldEventData* GetDefaultObj();

};

// 0xA50 (0xAF0 - 0xA0)
// Class LagerRuntime.FortAthenaLivingWorldManager
class UFortAthenaLivingWorldManager : public UGameStateComponent
{
public:
	uint8                                        Pad_85B[0x8];                                      // Fixing Size After Last Property 
	TSoftObjectPtr<class UFortAthenaLivingWorldConfigData> DefaultLagerConfig;                                // 0xA8(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FFortLivingWorldConfigOverride> LagerConfigOverrides;                              // 0xC8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LagerEnabled;                                      // 0xD8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TMap<struct FGameplayTag, TSubclassOf<class UFortAthenaLivingWorldSpawnAction>> TaggedSpawnActionClassMap;                         // 0x100(0x50)(Edit, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>> PointProviders;                                    // 0x150(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           SpecialActorMinimapIconBrush;                      // 0x160(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FVector2D                             SpecialActorMinimapIconScale;                      // 0x220(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           SpecialActorCompassIconBrush;                      // 0x230(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FVector2D                             SpecialActorCompassIconScale;                      // 0x2F0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class UFortAthenaSpawnerDataBase>> SpawnedSingleUseSpawnerData;                       // 0x300(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UWorld*                                CachedWorld;                                       // 0x310(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaLivingWorldConfigData*      CachedConfig;                                      // 0x318(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortAthenaLivingWorldEncounterInstance*> RunningEncounterInstances;                         // 0x320(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UFortSeasonalEventManager*             CachedSeasonalEventManager;                        // 0x330(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<TSoftClassPtr<class UActor>>          ActorClassToPreloadOnClient;                       // 0x338(0x10)(Net, ZeroConstructor, RepNotify, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FFortAthenaLivingWorldActorUpdateHandler ActorUpdateHandler;                                // 0x348(0xB0)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FFortAthenaLivingWorldPlayerTracker   PlayerTracker;                                     // 0x3F8(0xB0)(Transient, NativeAccessSpecifierPrivate)
	struct FFortAthenaLivingWorldPreloader       Preloader;                                         // 0x4A8(0xE0)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FFortAthenaLivingWorldConditionContainer GlobalConditionContainer;                          // 0x588(0x18)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_864[0x258];                                    // Fixing Size After Last Property 
	TArray<class UActor*>                        RuntimePointProviderList;                          // 0x7F8(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TSet<class UActor*>                          RuntimePointProviderOwners;                        // 0x808(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_866[0x210];                                    // Fixing Size After Last Property 
	TMap<TSubclassOf<class UFortAthenaLivingWorldSpawnAction>, class UFortAthenaLivingWorldSpawnAction*> SpawnActionCache;                                  // 0xA68(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UFortAthenaLivingWorldEQSHelper*       EQSHelper;                                         // 0xAB8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaLivingWorldDebugDensityMiniMapIndicator* DebugDensityMinimapIndicator;                      // 0xAC0(0x8)(Net, ZeroConstructor, Transient, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_867[0x28];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldManager* GetDefaultObj();

	void UnregisterDensityReservoir(class UActor* ActorDensityReservoir);
	bool TrySpawnEvent(const struct FDataTableRowHandle& EventEntry, const struct FTransform& SpawnLocation, FDelegateProperty_& OnRequestFinished, int32* RequestID);
	class UFortAthenaLivingWorldEncounterInstance* StartEncounter(TSoftObjectPtr<class UFortAthenaLivingWorldEncounter> EncounterType, TArray<TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>>& EncounterPointProviders, class UActor* ActorDensityReservoir);
	void ResetEncounter(class UFortAthenaLivingWorldEncounterInstance* EncounterInstance);
	void RequestEventGeneration();
	void RegisterTagDensityReservoir(class UActor* ActorDensityReservoir, TArray<struct FFortAthenaLivingWorldEventTagDensityRegistration>& TagsDensity);
	void RegisterDensityReservoir(class UActor* ActorDensityReservoir, float Density, float Range);
	int32 QueryEventBudget(const struct FDataTableRowHandle& EventEntry, class UActor* SpawnLocation);
	void OnWorldFinishedInitialization(struct FGameplayTagContainer& ContextTags);
	void OnUnmanagedDensityReservoirActorDestroy(class UActor* DestroyedActor);
	void OnSpawnedActorDestroy(class UActor* DestroyedActor);
	void OnRep_DebugDensityMinimapIndicator(class UFortAthenaLivingWorldDebugDensityMiniMapIndicator* OldMapIndicator);
	void OnRep_ActorClassToPreloadOnClient();
	void OnPatrolPathAdded(class UFortAthenaPatrolPath* PatrolPath);
	void OnDebugSpawnEventSpawned(TArray<class UActor*>& SpawnedActors, bool bSuccess);
	void OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags);
	void OnActorSpawned(class UActor* Actor, int32 RequestID);
	void LWMTAM(const class FString& Name);
	void LWMF();
	void LivingWorldManagerUnregisterPointProvider(class UActor* PointProvider);
	void LivingWorldManagerToggleVerboseLogging();
	void LivingWorldManagerToggleGenerateEvents();
	void LivingWorldManagerToggleDensityDisplay();
	void LivingWorldManagerToggleActorMinimap(const class FString& Name);
	void LivingWorldManagerSwitchDensityDisplay(int32 DensityMapIndex);
	void LivingWorldManagerSetEventGenerationEnabled(bool bInGenerateEvents);
	void LivingWorldManagerRegisterPointProvider(class UActor* PointProvider);
	void LivingWorldManagerProviderDebugActor(int32 ProviderIndex);
	void LivingWorldManagerGenerateEvents();
	void LivingWorldManagerFlush();
	void LivingWorldManagerDumpSpawnCount();
	void LivingWorldManagerDumpPrefabLevelBounds();
	void LivingWorldManagerDumpEventInstances();
	void LivingWorldManagerDebugEvent(const class FString& EventName, int32 DebugIndex, const class FString& RuntimeSpawnDataName, const class FString& EncounterName);
	bool IsEncounterCategoryActive(TSoftObjectPtr<class UFortAthenaLivingWorldEncounter> EncounterType);
	class UFortAthenaLivingWorldEncounterInstance* GetOwningEncounter(class UActor* Actor);
	class UFortAthenaLivingWorldManager* GetLivingWorldManager(class UObject* WorldContextObject);
	void EndEncounter(class UFortAthenaLivingWorldEncounterInstance* EncounterInstance);
	void CancelSpawnRequest(int32 RequestID);
	bool BuildDataRegistryResolverScope_Implementation(TArray<class FName>* InOutResolverScopes, int32* InOutPriority);
};

// 0xF0 (0x190 - 0xA0)
// Class LagerRuntime.FortAthenaLivingWorldNavigationInvokerComponent
class UFortAthenaLivingWorldNavigationInvokerComponent : public UActorComponent
{
public:
	struct FScalableFloat                        GenerationRadius;                                  // 0xA0(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FNavAgentSelector                     SupportedAgents;                                   // 0xC8(0x4)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_885[0x4];                                      // Fixing Size After Last Property 
	struct FScalableFloat                        DistanceToPlayer;                                  // 0xD0(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DistanceToPlayerHysteresis;                        // 0xF8(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        RegistrationDistanceToPlayer;                      // 0x120(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        RegistrationDistanceToPlayerHysteresis;            // 0x148(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortAthenaLivingWorldManager> LivingWorldManager;                                // 0x170(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_889[0x18];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldNavigationInvokerComponent* GetDefaultObj();

	void OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags);
};

// 0x0 (0x28 - 0x28)
// Class LagerRuntime.FortAthenaLivingWorldPointProviderInterface
class UFortAthenaLivingWorldPointProviderInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldPointProviderInterface* GetDefaultObj();

	float GetPointProviderMaxRadius();
	struct FVector GetPointProviderLocation();
	void GetFiltersTags(struct FGameplayTagContainer* FilterTags);
	void EnablePointProvider();
	void DisablePointProvider();
};

// 0x0 (0x1C0 - 0x1C0)
// Class LagerRuntime.FortAthenaLivingWorldPrefabLevelStreaming
class UFortAthenaLivingWorldPrefabLevelStreaming : public ULevelStreamingLevelInstance
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldPrefabLevelStreaming* GetDefaultObj();

};

// 0x150 (0x918 - 0x7C8)
// Class LagerRuntime.FortAthenaLivingWorldPrefab
class UFortAthenaLivingWorldPrefab : public UFortLevelInstancePrefab
{
public:
	TArray<struct FFortAthenaLivingWorldPrefabActorSpawnerData> ActorSpawnerDatas;                                 // 0x7C8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FBox                                  LocalLevelBounds;                                  // 0x7D8(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FBox                                  LocalGrassRemovalBox;                              // 0x810(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnAllActorSpawnedDelegate;                         // 0x848(0x10)(ZeroConstructor, Transient, InstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_92E[0x18];                                     // Fixing Size After Last Property 
	TArray<TWeakObjectPtr<class UBuildingActor>> BuildingsToKill;                                   // 0x870(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TWeakObjectPtr<class UActor>>         SpawnedActors;                                     // 0x880(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	FDelegateProperty_                           FinishedDestroyingBuildingCallback;                // 0x890(0xC)(ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasFinishedSpawn;                                 // 0x89C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasRemovedFoliage;                                // 0x89D(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_93A[0x2];                                      // Fixing Size After Last Property 
	struct FScalableFloat                        bIsEnabled;                                        // 0x8A0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        Weight;                                            // 0x8C8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                         bShouldLevelBeVisible;                             // 0x8F0(0x1)(Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldSpawnerBeAllowedToSpawn;                    // 0x8F1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldAlwaysSnapAboveLandscape;                   // 0x8F2(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_93E[0x5];                                      // Fixing Size After Last Property 
	struct FWorldConditionQueryDefinition        CanSpawnCondition;                                 // 0x8F8(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_93F[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldPrefab* GetDefaultObj();

	void RemoveFoliageInsideLevelBound();
	void OnRep_ShouldLevelBeVisible();
	void OnBuildingInLevelBoundsDestroyed__DelegateSignature();
	void OnAllActorSpawnedDelegate__DelegateSignature(TArray<class UActor*>& SpawnedActors);
	void OnAllActorSpawned__DelegateSignature(TArray<class UActor*>& SpawnedActors);
	void MakeLevelVisible();
	class UFortAthenaLivingWorldPrefab* GetOwningLivingWorldPrefab(class UObject* WorldContextObject);
	struct FBox GetLevelBounds();
	void DestroyBuildingsInLevelBounds(FDelegateProperty_& FinishedDelegate);
	void CallWhenAllActorHaveSpawned(FDelegateProperty_& DelegateToCall);
	void AllowSpawnerToSpawn();
};

// 0x130 (0x3C0 - 0x290)
// Class LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner
class UFortAthenaLivingWorldPrefabActorSpawner : public UActor
{
public:
	struct FFortAthenaLivingWorldActorSpawnDescription ActorDescription;                                  // 0x290(0x100)(Edit, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnActorSpawnedDelegate;                            // 0x390(0x10)(ZeroConstructor, Transient, InstancedReference, Protected, NativeAccessSpecifierProtected)
	class UFortAthenaPatrolPath*                 PatrolPath;                                        // 0x3A0(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                 Guid;                                              // 0x3A8(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UActor>                 SpawnedActor;                                      // 0x3B8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldPrefabActorSpawner* GetDefaultObj();

	void OnSnapCompleted(class UFortSnapOnSurfaceComponent* Component, struct FTransform& OldTransform, struct FTransform& NewTransfom);
	void OnActorSpawnedDelegate__DelegateSignature(class UActor* SpawnedActor);
	void OnActorSpawned__DelegateSignature(class UActor* SpawnedActor);
	class UActor* GetSpawnedActor();
	void CallWhenActorSpawned(FDelegateProperty_& DelegateToCall);
};

// 0x0 (0x28 - 0x28)
// Class LagerRuntime.FortAthenaLivingWorldSpawnAction
class UFortAthenaLivingWorldSpawnAction : public UObject
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldSpawnAction* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LagerRuntime.FortAthenaLivingWorldSpawnActionBlueprint
class UFortAthenaLivingWorldSpawnActionBlueprint : public UFortAthenaLivingWorldSpawnAction
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldSpawnActionBlueprint* GetDefaultObj();

	void K2_OnAllActorSpawned(TArray<class UActor*>& SpawnedActor, TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>& SourcePointProvider);
};

// 0xE0 (0x370 - 0x290)
// Class LagerRuntime.FortAthenaLivingWorldStaticPointProvider
class UFortAthenaLivingWorldStaticPointProvider : public UActor
{
public:
	uint8                                        Pad_A23[0x8];                                      // Fixing Size After Last Property 
	struct FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter;                                      // 0x298(0x68)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 FiltersTags;                                       // 0x300(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	TArray<struct FTransform>                    SpawnPoints;                                       // 0x320(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bStartEnabled;                                     // 0x330(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRandomizeStartPoint;                              // 0x331(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRandomizePointRotation;                           // 0x332(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A29[0x5];                                      // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnActorSpawned;                                    // 0x338(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	TArray<struct FPointProviderTagDebugColor>   DebugColors;                                       // 0x348(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UFortGameStateAthena*                  CachedGameState;                                   // 0x358(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAthenaLivingWorldManager*         CachedLivingWorldManager;                          // 0x360(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A2D[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldStaticPointProvider* GetDefaultObj();

	void OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags);
	void OnActorSpawned__DelegateSignature(class UActor* SpawnedActor);
	void EnablePointProvider();
	void DisablePointProvider();
};

// 0x50 (0x3C0 - 0x370)
// Class LagerRuntime.FortAthenaLivingWorldVehiclePointProvider
class UFortAthenaLivingWorldVehiclePointProvider : public UFortAthenaLivingWorldStaticPointProvider
{
public:
	struct FGameplayTagContainer                 ForceMods;                                         // 0x370(0x20)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ForceModsAllowed;                                  // 0x390(0x28)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	enum class EVehicleInitialOverlapBehavior    InitialOverlapBehavior;                            // 0x3B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A36[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldVehiclePointProvider* GetDefaultObj();

};

// 0x2F8 (0x5C0 - 0x2C8)
// Class LagerRuntime.FortAthenaLivingWorldVolume
class UFortAthenaLivingWorldVolume : public UVolume
{
public:
	uint8                                        Pad_A84[0x8];                                      // Fixing Size After Last Property 
	bool                                         bStartEnabled;                                     // 0x2D0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A86[0x7];                                      // Fixing Size After Last Property 
	struct FGameplayTagContainer                 FiltersTags;                                       // 0x2D8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate)
	class UEnvQuery*                             EnvironmentQuery;                                  // 0x2F8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FAIDynamicParam>               QueryConfig;                                       // 0x300(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                         bRemoveUsedPoint;                                  // 0x310(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bRemoveUsedPointPermenantly;                       // 0x311(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A8B[0x6];                                      // Fixing Size After Last Property 
	struct FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter;                                      // 0x318(0x68)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        EQSRefreshInterval;                                // 0x380(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        WaterLevelIndexMin;                                // 0x3A8(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        WaterLevelIndexMax;                                // 0x3D0(0x28)(Edit, NativeAccessSpecifierPrivate)
	class UFortGameStateAthena*                  CachedGameState;                                   // 0x3F8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnActorSpawnedResult;                              // 0x400(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnPointProviderRegistered;                         // 0x410(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	class UFortAthenaLivingWorldManager*         CachedLivingWorldManager;                          // 0x420(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A90[0x198];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldVolume* GetDefaultObj();

	void SetSpawnRotation(struct FRotator& Rotation);
	void SetFiltersTags(struct FGameplayTagContainer& TagContainer);
	void SetEQSQueryConfigParam(class FName ParameterName, float Value);
	void SetEQSQuery(class UEnvQuery* Query);
	void RunEQS();
	void ResetSpawnRotation();
	void OnWorldFinishedInitialization(struct FGameplayTagContainer& ContextTags);
	void OnPointProviderRegistered__DelegateSignature(class UFortAthenaLivingWorldVolume* PointProviderVolume);
	void OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags);
	void OnActorSpawnedResult__DelegateSignature(class UActor* SpawnedActor, bool bResult);
	bool IsPointProviderEnabled();
	void EnablePointProvider();
	bool DoesStartEnabled();
	void DisablePointProvider();
};

// 0x10 (0xB0 - 0xA0)
// Class LagerRuntime.FortAthenaLivingWorldWardComponent
class UFortAthenaLivingWorldWardComponent : public UActorComponent
{
public:
	float                                        DefaultRadius;                                     // 0xA0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A9B[0xC];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldWardComponent* GetDefaultObj();

	void SetWardRadius(float Radius);
	void OnWorldFinishedInitialization(struct FGameplayTagContainer& ContextTags);
	void OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags);
};

// 0xD0 (0x360 - 0x290)
// Class LagerRuntime.FortAthenaPatrolPathPointProvider
class UFortAthenaPatrolPathPointProvider : public UActor
{
public:
	uint8                                        Pad_AA3[0x8];                                      // Fixing Size After Last Property 
	struct FGameplayTagContainer                 FiltersTags;                                       // 0x298(0x20)(Edit, NativeAccessSpecifierPrivate)
	class UFortAthenaPatrolPath*                 AssociatedPatrolPath;                              // 0x2B8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bStartEnabled : 1;                                 // Mask: 0x1, PropSize: 0x10x2C0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bSpawnOnPatrolPath : 1;                            // Mask: 0x2, PropSize: 0x10x2C0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bAlignOrientationToPath : 1;                       // Mask: 0x4, PropSize: 0x10x2C0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_46 : 5;                                     // Fixing Bit-Field Size 
	uint8                                        Pad_AA7[0x7];                                      // Fixing Size After Last Property 
	struct FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter;                                      // 0x2C8(0x68)(Edit, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnActorSpawnedResult;                              // 0x330(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UFortAthenaPatrolPath>  RuntimePatrolPathWeakPtr;                          // 0x340(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortGameStateAthena*                  CachedGameState;                                   // 0x348(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaLivingWorldManager*         CachedLivingWorldManager;                          // 0x350(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AA8[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaPatrolPathPointProvider* GetDefaultObj();

	void OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags);
	void OnActorSpawnedResult__DelegateSignature(class UActor* SpawnedActor, bool bResult);
	void EnablePointProvider();
	void DisablePointProvider();
};

// 0xC0 (0x350 - 0x290)
// Class LagerRuntime.FortAthenaPointAroundPlayerProvider
class UFortAthenaPointAroundPlayerProvider : public UActor
{
public:
	uint8                                        Pad_AB9[0x8];                                      // Fixing Size After Last Property 
	struct FGameplayTagContainer                 FiltersTags;                                       // 0x298(0x20)(Edit, NativeAccessSpecifierPrivate)
	class UEnvQuery*                             QueryTemplate;                                     // 0x2B8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EEnvQueryRunMode                  RunMode;                                           // 0x2C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bStartEnabled : 1;                                 // Mask: 0x1, PropSize: 0x10x2C1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bGenerateAroundPlayerBots : 1;                     // Mask: 0x2, PropSize: 0x10x2C1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_48 : 6;                                     // Fixing Bit-Field Size 
	uint8                                        Pad_ABC[0x2];                                      // Fixing Size After Last Property 
	struct FGameplayTag                          IgnorePlayerWithTag;                               // 0x2C4(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter;                                      // 0x2C8(0x68)(Edit, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnActorSpawnedResult;                              // 0x330(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	class UFortGameStateAthena*                  CachedGameState;                                   // 0x340(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AC0[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaPointAroundPlayerProvider* GetDefaultObj();

	void OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags);
	void OnActorSpawnedResult__DelegateSignature(class UActor* SpawnedActor, bool bResult);
	void EnablePointProvider();
	void DisablePointProvider();
};

// 0x48 (0x70 - 0x28)
// Class LagerRuntime.FortCheatManager_LivingWorldManager
class UFortCheatManager_LivingWorldManager : public UChildCheatManager
{
public:
	int32                                        CheatTeleportToCount;                              // 0x28(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AE1[0x4];                                      // Fixing Size After Last Property 
	class FString                                CheatTeleportLastEventDataName;                    // 0x30(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        CheatSpawnEventCount;                              // 0x40(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AE2[0x4];                                      // Fixing Size After Last Property 
	class FString                                CheatSpawnEventName;                               // 0x48(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        CheatTriggerEventCount;                            // 0x58(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AE3[0x4];                                      // Fixing Size After Last Property 
	class FString                                CheatTriggerEventName;                             // 0x60(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortCheatManager_LivingWorldManager* GetDefaultObj();

	void LWMTE(const class FString& EventDataName);
	void LWMSE(const class FString& EventDataName, const class FString& SpawnerDataNames);
	void LWMS(const class FString& EventDataName);
	void LivingWorldManagerTriggerEvent(const class FString& EventDataName);
	void LivingWorldManagerTeleportToSpawnPosition(const class FString& EventDataName);
	void LivingWorldManagerTeleportTo(const class FString& EventDataName);
	void LivingWorldManagerSpawnEventAtLocation(const class FString& EventDataName, const struct FVector& Location, const struct FRotator& Rotation, const class FString& SpawnerDataNames);
	void LivingWorldManagerSpawnEvent(const class FString& EventDataName, const class FString& SpawnerDataNames);
	void LivingWorldManagerSpawnAtLocation(const class FString& EventDataName, const struct FVector& Location, const struct FRotator& Rotation);
	void LivingWorldManagerSpawn(const class FString& EventDataName);
	void LivingWorldManagerGDTNextDensityGrid();
	void LivingWorldManagerDisplaySpawnPoints(float MaxDisplayDistance);
};

// 0x50 (0x78 - 0x28)
// Class LagerRuntime.FortGameFeatureAction_AddCategoryTableToConfig
class UFortGameFeatureAction_AddCategoryTableToConfig : public UGameFeatureAction
{
public:
	TMap<TSoftObjectPtr<class UFortAthenaLivingWorldConfigData>, struct FFortAthenaLivingWorldCategoryTableDataList> ConfigToCategoryTableDatas;                        // 0x28(0x50)(Edit, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortGameFeatureAction_AddCategoryTableToConfig* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class LagerRuntime.FortGameFeatureAction_AddLagerConfig
class UFortGameFeatureAction_AddLagerConfig : public UGameFeatureAction
{
public:
	TArray<struct FFortLivingWorldConfigOverride> LagerConfigOverrides;                              // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortGameFeatureAction_AddLagerConfig* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LagerRuntime.FortGameFeatureAction_MapMarkerTagsProvider_PatrolPath
class UFortGameFeatureAction_MapMarkerTagsProvider_PatrolPath : public UFortGameFeatureAction_MapMarkerTagsProvider
{
public:

	static class UClass* StaticClass();
	static class UFortGameFeatureAction_MapMarkerTagsProvider_PatrolPath* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class LagerRuntime.FortPawnComponent_LivingWorldSpawnAroundPlayer
class UFortPawnComponent_LivingWorldSpawnAroundPlayer : public UFortPawnComponent
{
public:
	TArray<struct FLivingWorldSpawnAroundPlayerRuntimeData> RuntimeData;                                       // 0xA8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FLivingWorldSpawnAroundPlayerConfiguration> PerPlayerConfigurations;                           // 0xB8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortPawnComponent_LivingWorldSpawnAroundPlayer* GetDefaultObj();

};

// 0x0 (0x1F8 - 0x1F8)
// Class LagerRuntime.FortQueryTest_IsCloseToLivingWorldWard
class UFortQueryTest_IsCloseToLivingWorldWard : public UEnvQueryTest
{
public:

	static class UClass* StaticClass();
	static class UFortQueryTest_IsCloseToLivingWorldWard* GetDefaultObj();

};

// 0x70 (0x300 - 0x290)
// Class LagerRuntime.FortAthenaLivingWorldEQSHelper
class UFortAthenaLivingWorldEQSHelper : public UActor
{
public:
	uint8                                        Pad_AF5[0x40];                                     // Fixing Size After Last Property 
	struct FNavAgentProperties                   NavAgentProperties;                                // 0x2D0(0x30)(Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldEQSHelper* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class LagerRuntime.FortAthenaLivingWorldSpawnAction_AddAIToGroup
class UFortAthenaLivingWorldSpawnAction_AddAIToGroup : public UFortAthenaLivingWorldSpawnAction
{
public:
	struct FGameplayTagContainer                 GroupTags;                                         // 0x28(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldSpawnAction_AddAIToGroup* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class LagerRuntime.FortAthenaLivingWorldSpawnAction_SeatPawnInVehicle
class UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle : public UFortAthenaLivingWorldSpawnAction
{
public:
	TArray<struct FFortAthenaLivingWorldTagQueryToSeatMapping> SeatMappings;                                      // 0x28(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle* GetDefaultObj();

};

}


