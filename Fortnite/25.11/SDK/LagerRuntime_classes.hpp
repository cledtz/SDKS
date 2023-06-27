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

// 0xB8 (0x340 - 0x288)
// Class LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler
class AFortAthenaLivingWorldPointProvidersEnabler : public AActor
{
public:
	TArray<FInterfaceProperty_>                  EnabledLinkedPointProviders;                       // 0x288(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<FInterfaceProperty_>                  AvailableLinkedPointProviders;                     // 0x298(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 EnablerTags;                                       // 0x2A8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate)
	TArray<FInterfaceProperty_>                  LinkedPointProviders;                              // 0x2C8(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        PointProvidersToEnable;                            // 0x2D8(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        EvaluateAutomatically;                             // 0x300(0x28)(Edit, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7A8D[0x8];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnCompletedEvaluationDelegate;                     // 0x330(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaLivingWorldPointProvidersEnabler");
		return Clss;
	}

	void RemoveClosestPointProvidersToPoint(struct FVector& Point, float MaximumDistance, int32 PointsToDisable);
	void OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags);
	void OnCompletedEvaluation__DelegateSignature(TArray<FInterfaceProperty_>& EnabledPointProviders);
	bool HasCompletedEvaluation();
	struct FGameplayTagContainer GetEnablerTags();
	TArray<FInterfaceProperty_> GetEnabledLinkedPointProviders();
	void EvaluateAndEnablePointProviders();
	bool DoesStartEnabled();
};

// 0x0 (0x340 - 0x340)
// Class LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride
class AFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride : public AFortAthenaLivingWorldPointProvidersEnabler
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride");
		return Clss;
	}

};

// 0x58 (0xF8 - 0xA0)
// Class LagerRuntime.FortAthenaLinearEncounterAnalyticComponent
class UFortAthenaLinearEncounterAnalyticComponent : public UActorComponent
{
public:
	uint8                                        Pad_7A94[0x58];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaLinearEncounterAnalyticComponent");
		return Clss;
	}

	void OnStageCompleted(TArray<class AFortPickup*>& SpawnedRewards);
	void OnEncounterStart(class UFortAthenaLivingWorldEncounterInstance* InAttackerEncounter, class UFortAthenaLivingWorldEncounterInstance* InDefenderEncounter);
	void OnEncounterEnd();
	void OnDefenderSpawned(class AActor* SpawnedDefender);
	void OnDefenderDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnDefenderDidDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnDefenderDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnAttackerSpawned(class AActor* SpawnedAttacker);
};

// 0x0 (0x38 - 0x38)
// Class LagerRuntime.FortAthenaLivingWorldConditionSchema
class UFortAthenaLivingWorldConditionSchema : public UWorldConditionSchema
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaLivingWorldConditionSchema");
		return Clss;
	}

};

// 0x8 (0x40 - 0x38)
// Class LagerRuntime.FortAthenaLivingWorldEventDataConditionSchema
class UFortAthenaLivingWorldEventDataConditionSchema : public UFortAthenaLivingWorldConditionSchema
{
public:
	uint8                                        Pad_7A95[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaLivingWorldEventDataConditionSchema");
		return Clss;
	}

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
	TSubclassOf<class AFortAthenaLivingWorldEQSHelper> EQSActorHelperClass;                               // 0x200(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        DelayEventGeneration;                              // 0x208(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaLivingWorldConfigData");
		return Clss;
	}

};

// 0x50 (0x190 - 0x140)
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
	uint8                                        Pad_7A96[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaLivingWorldDebugDensityMiniMapIndicator");
		return Clss;
	}

};

// 0x8 (0x40 - 0x38)
// Class LagerRuntime.FortAthenaLivingWorldDespawnConditionSchema
class UFortAthenaLivingWorldDespawnConditionSchema : public UFortAthenaLivingWorldConditionSchema
{
public:
	uint8                                        Pad_7A97[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaLivingWorldDespawnConditionSchema");
		return Clss;
	}

};

// 0x38 (0x68 - 0x30)
// Class LagerRuntime.FortAthenaLivingWorldEncounter
class UFortAthenaLivingWorldEncounter : public UDataAsset
{
public:
	struct FScalableFloat                        IntervalBetweenEventGeneration;                    // 0x30(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FFortAthenaLivingWorldEncounterStage> Stages;                                            // 0x58(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaLivingWorldEncounter");
		return Clss;
	}

};

// 0x160 (0x188 - 0x28)
// Class LagerRuntime.FortAthenaLivingWorldEncounterInstance
class UFortAthenaLivingWorldEncounterInstance : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnActorSpawned;                                    // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFirstActorSpawned;                               // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnActorDestroyed;                                  // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLastActorDestroyed;                              // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnActorDied;                                       // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_7A9B[0x50];                                    // Fixing Size After Last Property..
	struct FFortAthenaLivingWorldConditionContainer ConditionContainer;                                // 0xC8(0x18)(Transient, NativeAccessSpecifierPrivate)
	TArray<FInterfaceProperty_>                  AllowedPointProviders;                             // 0xE0(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<FInterfaceProperty_>                  RegisteredPointProviders;                          // 0xF0(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UFortAthenaLivingWorldEventData*> RuntimeCreatedEventDatas;                          // 0x100(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7A9C[0x20];                                    // Fixing Size After Last Property..
	TSoftObjectPtr<class UFortAthenaLivingWorldEncounter> EncounterDefinition;                               // 0x130(0x28)(Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                ActorDensityReservoir;                             // 0x158(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AActor*>                        SpawnedActors;                                     // 0x160(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7A9D[0x8];                                     // Fixing Size After Last Property..
	int32                                        CurrentStageIndex;                                 // 0x178(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7A9E[0x4];                                     // Fixing Size After Last Property..
	bool                                         bIsPaused;                                         // 0x180(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7A9F[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaLivingWorldEncounterInstance");
		return Clss;
	}

	void StartEncounterStage(int32 StageIndex);
	void ResumeEncounter();
	void Reset();
	void RequestEventGeneration();
	void RemoveAllowedPointProvider(FInterfaceProperty_& PointProvider);
	void PauseEncounter();
	bool OwnsActor(class AActor* Actor);
	void OnEncounterActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnActorSpawned__DelegateSignature(class AActor* SpawnedActor);
	void OnActorDied__DelegateSignature(class AActor* DiedActor);
	void OnActorDestroyed__DelegateSignature(class AActor* DestroyedActor);
	bool HasReachedMaxSpawnedCount();
	int32 GetTotalActorCount();
	int32 GetAliveSpawnedActorCount();
	void AdvanceEncounterStage();
	void AddAllowedPointProvider(FInterfaceProperty_& PointProvider);
};

// 0x100 (0x130 - 0x30)
// Class LagerRuntime.FortAthenaLivingWorldEventData
class UFortAthenaLivingWorldEventData : public UDataAsset
{
public:
	int32                                        TimeOfDayFilters;                                  // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        WaterLevelIndexMin;                                // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        WaterLevelIndexMax;                                // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7AA0[0x4];                                     // Fixing Size After Last Property..
	struct FWorldConditionQueryDefinition        CanSpawnCondition;                                 // 0x40(0x18)(Edit, NativeAccessSpecifierPrivate)
	TArray<struct FFortAthenaLivingWorldDespawnCondition> DespawnConditions;                                 // 0x58(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FGameplayTagQuery                     ProviderFiltersTagQuery;                           // 0x68(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FPointProviderFilterEntry>     ProviderFiltersEntries;                            // 0xB0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FFortAthenaLivingWorldTaggedSpawnActionClass> SpawnActions;                                      // 0xC0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MinActorCountToSpawn;                              // 0xD0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxActorCountToSpawn;                              // 0xF8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FFortAthenaLivingWorldEventDataActorSpawnDescription> ActorDescriptions;                                 // 0x120(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaLivingWorldEventData");
		return Clss;
	}

};

// 0xA60 (0xB00 - 0xA0)
// Class LagerRuntime.FortAthenaLivingWorldManager
class UFortAthenaLivingWorldManager : public UGameStateComponent
{
public:
	uint8                                        Pad_7AA9[0x8];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class UFortAthenaLivingWorldConfigData> DefaultLagerConfig;                                // 0xA8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FFortLivingWorldConfigOverride> LagerConfigOverrides;                              // 0xD0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LagerEnabled;                                      // 0xE0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TMap<struct FGameplayTag, TSubclassOf<class UFortAthenaLivingWorldSpawnAction>> TaggedSpawnActionClassMap;                         // 0x108(0x50)(Edit, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<FInterfaceProperty_>                  PointProviders;                                    // 0x158(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7AAA[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           SpecialActorMinimapIconBrush;                      // 0x170(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FVector2D                             SpecialActorMinimapIconScale;                      // 0x230(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           SpecialActorCompassIconBrush;                      // 0x240(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FVector2D                             SpecialActorCompassIconScale;                      // 0x300(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class UFortAthenaSpawnerDataBase>> SpawnedSingleUseSpawnerData;                       // 0x310(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UWorld*                                CachedWorld;                                       // 0x320(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaLivingWorldConfigData*      CachedConfig;                                      // 0x328(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortAthenaLivingWorldEncounterInstance*> RunningEncounterInstances;                         // 0x330(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UFortSeasonalEventManager*             CachedSeasonalEventManager;                        // 0x340(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<TSoftClassPtr<class AActor>>          ActorClassToPreloadOnClient;                       // 0x348(0x10)(Net, ZeroConstructor, RepNotify, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FFortAthenaLivingWorldActorUpdateHandler ActorUpdateHandler;                                // 0x358(0xB0)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FFortAthenaLivingWorldPlayerTracker   PlayerTracker;                                     // 0x408(0xB0)(Transient, NativeAccessSpecifierPrivate)
	struct FFortAthenaLivingWorldPreloader       Preloader;                                         // 0x4B8(0xE0)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FFortAthenaLivingWorldConditionContainer GlobalConditionContainer;                          // 0x598(0x18)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7AAB[0x258];                                   // Fixing Size After Last Property..
	TArray<class AActor*>                        RuntimePointProviderList;                          // 0x808(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TSet<class AActor*>                          RuntimePointProviderOwners;                        // 0x818(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7AAC[0x208];                                   // Fixing Size After Last Property..
	TMap<TSubclassOf<class UFortAthenaLivingWorldSpawnAction>, class UFortAthenaLivingWorldSpawnAction*> SpawnActionCache;                                  // 0xA70(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	class AFortAthenaLivingWorldEQSHelper*       EQSHelper;                                         // 0xAC0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaLivingWorldDebugDensityMiniMapIndicator* DebugDensityMinimapIndicator;                      // 0xAC8(0x8)(Net, ZeroConstructor, Transient, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7AAD[0x30];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaLivingWorldManager");
		return Clss;
	}

	void UnregisterDensityReservoir(class AActor* ActorDensityReservoir);
	bool TrySpawnEvent(const struct FDataTableRowHandle& EventEntry, const struct FTransform& SpawnLocation, FDelegateProperty_& OnRequestFinished, int32* RequestID);
	class UFortAthenaLivingWorldEncounterInstance* StartEncounter(TSoftObjectPtr<class UFortAthenaLivingWorldEncounter> EncounterType, TArray<FInterfaceProperty_>& EncounterPointProviders, class AActor* ActorDensityReservoir);
	void ResetEncounter(class UFortAthenaLivingWorldEncounterInstance* EncounterInstance);
	void RequestEventGeneration();
	void RegisterTagDensityReservoir(class AActor* ActorDensityReservoir, TArray<struct FFortAthenaLivingWorldEventTagDensityRegistration>& TagsDensity);
	void RegisterDensityReservoir(class AActor* ActorDensityReservoir, float Density, float Range);
	int32 QueryEventBudget(const struct FDataTableRowHandle& EventEntry, class AActor* SpawnLocation);
	void OnWorldFinishedInitialization(struct FGameplayTagContainer& ContextTags);
	void OnUnmanagedDensityReservoirActorDestroy(class AActor* DestroyedActor);
	void OnSpawnedActorDestroy(class AActor* DestroyedActor);
	void OnRep_DebugDensityMinimapIndicator(class UFortAthenaLivingWorldDebugDensityMiniMapIndicator* OldMapIndicator);
	void OnRep_ActorClassToPreloadOnClient();
	void OnPatrolPathAdded(class AFortAthenaPatrolPath* PatrolPath);
	void OnDebugSpawnEventSpawned(TArray<class AActor*>& SpawnedActors, bool bSuccess);
	void OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags);
	void OnActorSpawned(class AActor* Actor, int32 RequestID);
	void LWMTAM(const class FString& Name);
	void LWMF();
	void LivingWorldManagerUnregisterPointProvider(class AActor* PointProvider);
	void LivingWorldManagerToggleVerboseLogging();
	void LivingWorldManagerToggleGenerateEvents();
	void LivingWorldManagerToggleDensityDisplay();
	void LivingWorldManagerToggleActorMinimap(const class FString& Name);
	void LivingWorldManagerSetEventGenerationEnabled(bool bInGenerateEvents);
	void LivingWorldManagerRegisterPointProvider(class AActor* PointProvider);
	void LivingWorldManagerProviderDebugActor(int32 ProviderIndex);
	void LivingWorldManagerGenerateEvents();
	void LivingWorldManagerFlush();
	void LivingWorldManagerDumpSpawnCount();
	void LivingWorldManagerDumpPrefabLevelBounds();
	void LivingWorldManagerDumpEventInstances();
	void LivingWorldManagerDebugEvent(const class FString& EventName, int32 DebugIndex, const class FString& RuntimeSpawnDataName, const class FString& EncounterName);
	bool IsEncounterCategoryActive(TSoftObjectPtr<class UFortAthenaLivingWorldEncounter> EncounterType);
	class UFortAthenaLivingWorldEncounterInstance* GetOwningEncounter(class AActor* Actor);
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
	uint8                                        Pad_7AAF[0x4];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        DistanceToPlayer;                                  // 0xD0(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DistanceToPlayerHysteresis;                        // 0xF8(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        RegistrationDistanceToPlayer;                      // 0x120(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        RegistrationDistanceToPlayerHysteresis;            // 0x148(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortAthenaLivingWorldManager> LivingWorldManager;                                // 0x170(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7AB0[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaLivingWorldNavigationInvokerComponent");
		return Clss;
	}

	void OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags);
};

// 0x0 (0x28 - 0x28)
// Class LagerRuntime.FortAthenaLivingWorldPointProviderInterface
class UFortAthenaLivingWorldPointProviderInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaLivingWorldPointProviderInterface");
		return Clss;
	}

	struct FVector GetPointProviderLocation();
	void GetFiltersTags(struct FGameplayTagContainer* FilterTags);
	void EnablePointProvider();
	void DisablePointProvider();
};

// 0x0 (0x1D0 - 0x1D0)
// Class LagerRuntime.FortAthenaLivingWorldPrefabLevelStreaming
class UFortAthenaLivingWorldPrefabLevelStreaming : public ULevelStreamingLevelInstance
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaLivingWorldPrefabLevelStreaming");
		return Clss;
	}

};

// 0x150 (0x910 - 0x7C0)
// Class LagerRuntime.FortAthenaLivingWorldPrefab
class AFortAthenaLivingWorldPrefab : public AFortLevelInstancePrefab
{
public:
	TArray<struct FFortAthenaLivingWorldPrefabActorSpawnerData> ActorSpawnerDatas;                                 // 0x7C0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FBox                                  LocalLevelBounds;                                  // 0x7D0(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FBox                                  LocalGrassRemovalBox;                              // 0x808(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnAllActorSpawnedDelegate;                         // 0x840(0x10)(ZeroConstructor, Transient, InstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_7AB1[0x18];                                    // Fixing Size After Last Property..
	TArray<TWeakObjectPtr<class ABuildingActor>> BuildingsToKill;                                   // 0x868(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TWeakObjectPtr<class AActor>>         SpawnedActors;                                     // 0x878(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	FDelegateProperty_                           FinishedDestroyingBuildingCallback;                // 0x888(0xC)(ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasFinishedSpawn;                                 // 0x894(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasRemovedFoliage;                                // 0x895(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7AB2[0x2];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        bIsEnabled;                                        // 0x898(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        Weight;                                            // 0x8C0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                         bShouldLevelBeVisible;                             // 0x8E8(0x1)(Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldSpawnerBeAllowedToSpawn;                    // 0x8E9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldAlwaysSnapAboveLandscape;                   // 0x8EA(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7AB3[0x5];                                     // Fixing Size After Last Property..
	struct FWorldConditionQueryDefinition        CanSpawnCondition;                                 // 0x8F0(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_7AB4[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaLivingWorldPrefab");
		return Clss;
	}

	void RemoveFoliageInsideLevelBound();
	void OnRep_ShouldLevelBeVisible();
	void OnBuildingInLevelBoundsDestroyed__DelegateSignature();
	void OnAllActorSpawnedDelegate__DelegateSignature(TArray<class AActor*>& SpawnedActors);
	void OnAllActorSpawned__DelegateSignature(TArray<class AActor*>& SpawnedActors);
	void MakeLevelVisible();
	class AFortAthenaLivingWorldPrefab* GetOwningLivingWorldPrefab(class UObject* WorldContextObject);
	struct FBox GetLevelBounds();
	void DestroyBuildingsInLevelBounds(FDelegateProperty_& FinishedDelegate);
	void CallWhenAllActorHaveSpawned(FDelegateProperty_& DelegateToCall);
	void AllowSpawnerToSpawn();
};

// 0x140 (0x3C8 - 0x288)
// Class LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner
class AFortAthenaLivingWorldPrefabActorSpawner : public AActor
{
public:
	struct FFortAthenaLivingWorldActorSpawnDescription ActorDescription;                                  // 0x288(0x110)(Edit, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnActorSpawnedDelegate;                            // 0x398(0x10)(ZeroConstructor, Transient, InstancedReference, Protected, NativeAccessSpecifierProtected)
	class AFortAthenaPatrolPath*                 PatrolPath;                                        // 0x3A8(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                 Guid;                                              // 0x3B0(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AActor>                 SpawnedActor;                                      // 0x3C0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaLivingWorldPrefabActorSpawner");
		return Clss;
	}

	void OnSnapCompleted(class UFortSnapOnSurfaceComponent* Component, struct FTransform& OldTransform, struct FTransform& NewTransfom);
	void OnActorSpawnedDelegate__DelegateSignature(class AActor* SpawnedActor);
	void OnActorSpawned__DelegateSignature(class AActor* SpawnedActor);
	class AActor* GetSpawnedActor();
	void CallWhenActorSpawned(FDelegateProperty_& DelegateToCall);
};

// 0x0 (0x28 - 0x28)
// Class LagerRuntime.FortAthenaLivingWorldSpawnAction
class UFortAthenaLivingWorldSpawnAction : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaLivingWorldSpawnAction");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class LagerRuntime.FortAthenaLivingWorldSpawnActionBlueprint
class UFortAthenaLivingWorldSpawnActionBlueprint : public UFortAthenaLivingWorldSpawnAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaLivingWorldSpawnActionBlueprint");
		return Clss;
	}

	void K2_OnAllActorSpawned(TArray<class AActor*>& SpawnedActor);
};

// 0xE0 (0x368 - 0x288)
// Class LagerRuntime.FortAthenaLivingWorldStaticPointProvider
class AFortAthenaLivingWorldStaticPointProvider : public AActor
{
public:
	uint8                                        Pad_7AB7[0x8];                                     // Fixing Size After Last Property..
	struct FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter;                                      // 0x290(0x68)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 FiltersTags;                                       // 0x2F8(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	TArray<struct FTransform>                    SpawnPoints;                                       // 0x318(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bStartEnabled;                                     // 0x328(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRandomizeStartPoint;                              // 0x329(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRandomizePointRotation;                           // 0x32A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7AB8[0x5];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnActorSpawned;                                    // 0x330(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	TArray<struct FPointProviderTagDebugColor>   DebugColors;                                       // 0x340(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class AFortGameStateAthena*                  CachedGameState;                                   // 0x350(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAthenaLivingWorldManager*         CachedLivingWorldManager;                          // 0x358(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7AB9[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaLivingWorldStaticPointProvider");
		return Clss;
	}

	void OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags);
	void OnActorSpawned__DelegateSignature(class AActor* SpawnedActor);
	void EnablePointProvider();
	void DisablePointProvider();
};

// 0x50 (0x3B8 - 0x368)
// Class LagerRuntime.FortAthenaLivingWorldVehiclePointProvider
class AFortAthenaLivingWorldVehiclePointProvider : public AFortAthenaLivingWorldStaticPointProvider
{
public:
	struct FGameplayTagContainer                 ForceMods;                                         // 0x368(0x20)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ForceModsAllowed;                                  // 0x388(0x28)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	enum class EVehicleInitialOverlapBehavior    InitialOverlapBehavior;                            // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7ABA[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaLivingWorldVehiclePointProvider");
		return Clss;
	}

};

// 0x2F8 (0x5B8 - 0x2C0)
// Class LagerRuntime.FortAthenaLivingWorldVolume
class AFortAthenaLivingWorldVolume : public AVolume
{
public:
	uint8                                        Pad_7ABD[0x8];                                     // Fixing Size After Last Property..
	bool                                         bStartEnabled;                                     // 0x2C8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7ABE[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 FiltersTags;                                       // 0x2D0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate)
	class UEnvQuery*                             EnvironmentQuery;                                  // 0x2F0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FAIDynamicParam>               QueryConfig;                                       // 0x2F8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                         bRemoveUsedPoint;                                  // 0x308(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bRemoveUsedPointPermenantly;                       // 0x309(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7ABF[0x6];                                     // Fixing Size After Last Property..
	struct FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter;                                      // 0x310(0x68)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        EQSRefreshInterval;                                // 0x378(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        WaterLevelIndexMin;                                // 0x3A0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        WaterLevelIndexMax;                                // 0x3C8(0x28)(Edit, NativeAccessSpecifierPrivate)
	class AFortGameStateAthena*                  CachedGameState;                                   // 0x3F0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnActorSpawnedResult;                              // 0x3F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnPointProviderRegistered;                         // 0x408(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	class UFortAthenaLivingWorldManager*         CachedLivingWorldManager;                          // 0x418(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7AC0[0x198];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaLivingWorldVolume");
		return Clss;
	}

	void SetSpawnRotation(struct FRotator& Rotation);
	void SetFiltersTags(struct FGameplayTagContainer& TagContainer);
	void SetEQSQueryConfigParam(class FName ParameterName, float Value);
	void SetEQSQuery(class UEnvQuery* Query);
	void RunEQS();
	void ResetSpawnRotation();
	void OnWorldFinishedInitialization(struct FGameplayTagContainer& ContextTags);
	void OnPointProviderRegistered__DelegateSignature(class AFortAthenaLivingWorldVolume* PointProviderVolume);
	void OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags);
	void OnActorSpawnedResult__DelegateSignature(class AActor* SpawnedActor, bool bResult);
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
	uint8                                        Pad_7AC2[0xC];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaLivingWorldWardComponent");
		return Clss;
	}

	void SetWardRadius(float Radius);
	void OnWorldFinishedInitialization(struct FGameplayTagContainer& ContextTags);
	void OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags);
};

// 0xD0 (0x358 - 0x288)
// Class LagerRuntime.FortAthenaPatrolPathPointProvider
class AFortAthenaPatrolPathPointProvider : public AActor
{
public:
	uint8                                        Pad_7AC5[0x8];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 FiltersTags;                                       // 0x290(0x20)(Edit, NativeAccessSpecifierPrivate)
	class AFortAthenaPatrolPath*                 AssociatedPatrolPath;                              // 0x2B0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bStartEnabled : 1;                                 // Mask: 0x1, PropSize: 0x10x2B8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bSpawnOnPatrolPath : 1;                            // Mask: 0x2, PropSize: 0x10x2B8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bAlignOrientationToPath : 1;                       // Mask: 0x4, PropSize: 0x10x2B8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_40A : 5;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_7AC6[0x7];                                     // Fixing Size After Last Property..
	struct FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter;                                      // 0x2C0(0x68)(Edit, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnActorSpawnedResult;                              // 0x328(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class AFortAthenaPatrolPath>  RuntimePatrolPathWeakPtr;                          // 0x338(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortGameStateAthena*                  CachedGameState;                                   // 0x340(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaLivingWorldManager*         CachedLivingWorldManager;                          // 0x348(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7AC7[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaPatrolPathPointProvider");
		return Clss;
	}

	void OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags);
	void OnActorSpawnedResult__DelegateSignature(class AActor* SpawnedActor, bool bResult);
	void EnablePointProvider();
	void DisablePointProvider();
};

// 0xC0 (0x348 - 0x288)
// Class LagerRuntime.FortAthenaPointAroundPlayerProvider
class AFortAthenaPointAroundPlayerProvider : public AActor
{
public:
	uint8                                        Pad_7ACA[0x8];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 FiltersTags;                                       // 0x290(0x20)(Edit, NativeAccessSpecifierPrivate)
	class UEnvQuery*                             QueryTemplate;                                     // 0x2B0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EEnvQueryRunMode                  RunMode;                                           // 0x2B8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bStartEnabled : 1;                                 // Mask: 0x1, PropSize: 0x10x2B9(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bGenerateAroundPlayerBots : 1;                     // Mask: 0x2, PropSize: 0x10x2B9(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_40B : 6;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_7ACB[0x2];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          IgnorePlayerWithTag;                               // 0x2BC(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter;                                      // 0x2C0(0x68)(Edit, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnActorSpawnedResult;                              // 0x328(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	class AFortGameStateAthena*                  CachedGameState;                                   // 0x338(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7ACC[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaPointAroundPlayerProvider");
		return Clss;
	}

	void OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags);
	void OnActorSpawnedResult__DelegateSignature(class AActor* SpawnedActor, bool bResult);
	void EnablePointProvider();
	void DisablePointProvider();
};

// 0x48 (0x70 - 0x28)
// Class LagerRuntime.FortCheatManager_LivingWorldManager
class UFortCheatManager_LivingWorldManager : public UChildCheatManager
{
public:
	int32                                        CheatTeleportToCount;                              // 0x28(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7ACD[0x4];                                     // Fixing Size After Last Property..
	class FString                                CheatTeleportLastEventDataName;                    // 0x30(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        CheatSpawnEventCount;                              // 0x40(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7ACE[0x4];                                     // Fixing Size After Last Property..
	class FString                                CheatSpawnEventName;                               // 0x48(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        CheatTriggerEventCount;                            // 0x58(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7ACF[0x4];                                     // Fixing Size After Last Property..
	class FString                                CheatTriggerEventName;                             // 0x60(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCheatManager_LivingWorldManager");
		return Clss;
	}

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGameFeatureAction_AddCategoryTableToConfig");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class LagerRuntime.FortGameFeatureAction_AddLagerConfig
class UFortGameFeatureAction_AddLagerConfig : public UGameFeatureAction
{
public:
	TArray<struct FFortLivingWorldConfigOverride> LagerConfigOverrides;                              // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGameFeatureAction_AddLagerConfig");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class LagerRuntime.FortGameFeatureAction_MapMarkerTagsProvider_PatrolPath
class UFortGameFeatureAction_MapMarkerTagsProvider_PatrolPath : public UFortGameFeatureAction_MapMarkerTagsProvider
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGameFeatureAction_MapMarkerTagsProvider_PatrolPath");
		return Clss;
	}

};

// 0x20 (0xC8 - 0xA8)
// Class LagerRuntime.FortPawnComponent_LivingWorldSpawnAroundPlayer
class UFortPawnComponent_LivingWorldSpawnAroundPlayer : public UFortPawnComponent
{
public:
	TArray<struct FLivingWorldSpawnAroundPlayerRuntimeData> RuntimeData;                                       // 0xA8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FLivingWorldSpawnAroundPlayerConfiguration> PerPlayerConfigurations;                           // 0xB8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPawnComponent_LivingWorldSpawnAroundPlayer");
		return Clss;
	}

};

// 0x0 (0x1F8 - 0x1F8)
// Class LagerRuntime.FortQueryTest_IsCloseToLivingWorldWard
class UFortQueryTest_IsCloseToLivingWorldWard : public UEnvQueryTest
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortQueryTest_IsCloseToLivingWorldWard");
		return Clss;
	}

};

// 0x70 (0x2F8 - 0x288)
// Class LagerRuntime.FortAthenaLivingWorldEQSHelper
class AFortAthenaLivingWorldEQSHelper : public AActor
{
public:
	uint8                                        Pad_7AD0[0x40];                                    // Fixing Size After Last Property..
	struct FNavAgentProperties                   NavAgentProperties;                                // 0x2C8(0x30)(Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaLivingWorldEQSHelper");
		return Clss;
	}

};

// 0x20 (0x48 - 0x28)
// Class LagerRuntime.FortAthenaLivingWorldSpawnAction_AddAIToGroup
class UFortAthenaLivingWorldSpawnAction_AddAIToGroup : public UFortAthenaLivingWorldSpawnAction
{
public:
	struct FGameplayTagContainer                 GroupTags;                                         // 0x28(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaLivingWorldSpawnAction_AddAIToGroup");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class LagerRuntime.FortAthenaLivingWorldSpawnAction_SeatPawnInVehicle
class UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle : public UFortAthenaLivingWorldSpawnAction
{
public:
	TArray<struct FFortAthenaLivingWorldTagQueryToSeatMapping> SeatMappings;                                      // 0x28(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaLivingWorldSpawnAction_SeatPawnInVehicle");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
