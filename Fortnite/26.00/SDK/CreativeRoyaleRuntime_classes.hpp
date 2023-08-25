#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x710 - 0x698)
// Class CreativeRoyaleRuntime.CreativeRoyaleIslandPlayspace
class UCreativeRoyaleIslandPlayspace : public UFortPlayspace
{
public:
	class UFortProjectEditComponent_CreativeRoyale* ProjectEditComponent;                              // 0x698(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayspaceComponent_PlayStopPauseManager* PlayStopPauseManager;                              // 0x6A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayspaceComponent_CreativeLoadingStateProxy* CreativeLoadingStateProxy;                         // 0x6A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayspaceComponent_SpatialGameplay*   SpatialGameplayComponent;                          // 0x6B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayspaceComponent_DeviceTracking*    DeviceTrackerComponent;                            // 0x6B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayspaceComponent_CreativeModifyEmotes* CreativeModifyEmotesComponent;                     // 0x6C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortPlayspaceComponent_WorldTimeOfDayOverride* WorldTimeOfDayOverrideComponent;                   // 0x6C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCreativeRoyalePlayspaceComponent_LoadingScreen* LoadingScreenComponent;                            // 0x6D0(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayspaceComponent_ActorMemoryTracker* ActorMemoryTracker;                                // 0x6D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortPoiSwapManager*                   FortPoiSwapManager;                                // 0x6E0(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_12B6[0x8];                                     // Fixing Size After Last Property 
	TArray<class UActor*>                        FoundActors;                                       // 0x6F0(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	int32                                        IslandMemoryBudget;                                // 0x700(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxMemorySamplingHeight;                           // 0x704(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxMemorySamplingCellSize;                         // 0x708(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_12B8[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCreativeRoyaleIslandPlayspace* GetDefaultObj();

};

// 0xA0 (0x140 - 0xA0)
// Class CreativeRoyaleRuntime.FortPoiSwapManager
class UFortPoiSwapManager : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnPlayspaceLoadedContentDelegate;                  // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPlayspaceUnloadedContentDelegate;                // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPrePlayspaceContentUnloadDelegate;               // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_130D[0x50];                                    // Fixing Size After Last Property 
	TWeakObjectPtr<class UFortMcpProfileCreative> CachedIslandOwnerProfile;                          // 0x120(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               PoiPlotLocationOffset;                             // 0x128(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortPoiSwapManager* GetDefaultObj();

	void SwapPoi(class UFortPoiVolume* PoiToSwap);
	void SetPoiSubPlot(class UFortPoiVolume* POIVolume, const class FString& SubPlotName, const class FString& SubPlotLinkCode);
	void OnPrePlayspaceContentUnload(class UFortPoiSwapPlayspace* PoiSwapPlayspace);
	void OnPlayspaceContentLoadingStateChanged(class UFortPoiSwapPlayspace* PoiSwapPlayspace, enum class EFortPoiSwapUserContentState& ContentLoadingState);
	class FString GetPoiSubPlotLinkCode(class UFortPoiVolume* POIVolume);
	class UFortPoiSwapPlayspace* GetPlayspaceForPoi(class UFortPoiVolume* POIVolume);
};

// 0xB0 (0x748 - 0x698)
// Class CreativeRoyaleRuntime.FortPoiSwapPlayspace
class UFortPoiSwapPlayspace : public UFortPlayspace
{
public:
	FMulticastInlineDelegateProperty_            OnContentStateChangedDelegate;                     // 0x698(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPreContentUnloadDelegate;                        // 0x6A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class USceneComponent*                       SceneComponent;                                    // 0x6B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortLevelSaveComponent*               LevelSaveComponent;                                // 0x6C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlaysetLevelStreamComponent*          PlaysetLevelStreamComponent;                       // 0x6C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortPoiVolume>         PoiToReplace;                                      // 0x6D0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortCreativeRealEstatePlotItem> PlotToLoad;                                        // 0x6D8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortCreativeRealEstatePlotItem> LoadedPlot;                                        // 0x6E0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FOnlineLinkId                         LinkCodeToLoad;                                    // 0x6E8(0x18)(Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UActor*>                        SpawnedActors;                                     // 0x700(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_131E[0x38];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortPoiSwapPlayspace* GetDefaultObj();

	void OnUserContentUnloaded(struct FAsyncTaskResult& Result);
	void OnUserContentLoaded();
};

// 0x78 (0x1380 - 0x1308)
// Class CreativeRoyaleRuntime.AthenaAIServicePlayerBots_CreativeRoyale
class UAthenaAIServicePlayerBots_CreativeRoyale : public UAthenaAIServiceCreativePlayerBots
{
public:
	struct FScalableFloat                        PlayerBotsEnabled;                                 // 0x1308(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BotsAllowedOnHumanTeam;                            // 0x1330(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ForceAllPlayerBotsToOneTeam;                       // 0x1358(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAthenaAIServicePlayerBots_CreativeRoyale* GetDefaultObj();

	void StartLootClustering();
	void OnPlayerJoiningInProgress(class UFortPlayerState* FortPlayerState);
};

// 0x180 (0x220 - 0xA0)
// Class CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset
class UCreativeRoyalePlayspaceComponent_LevelReset : public UPlayspaceComponent
{
public:
	TWeakObjectPtr<class ULevelSaveRecord>       CachedLevelSaveRecord;                             // 0xA0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSpawnFromGameplay;                                // 0xA8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13A2[0x7];                                     // Fixing Size After Last Property 
	TArray<TWeakObjectPtr<class UActor>>         SavedFoundActors;                                  // 0xB0(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<TWeakObjectPtr<class UActor>, struct FSpawnBuildingActorParameters> SavedDeadActors;                                   // 0xC0(0x50)(Transient, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class UActor>>         SavedDamagedActors;                                // 0x110(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class UActor>>         FoundActorsDied;                                   // 0x120(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FGuid>                         FoundActorsDiedGuid;                               // 0x130(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TMap<struct FGuid, struct FAttachedBuildingActorGuids> SavedParentWithAttachedBuildings;                  // 0x140(0x50)(Transient, NativeAccessSpecifierPrivate)
	TMap<struct FGuid, TWeakObjectPtr<class UActor>> CurrentActorForBuildingGuid;                       // 0x190(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class UActor>>         FoundActorsDamaged;                                // 0x1E0(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FGuid>                         FoundActorsDamagedGuid;                            // 0x1F0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UFortPoiSwapManager>    CachedPoiSwapManager;                              // 0x200(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13A3[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCreativeRoyalePlayspaceComponent_LevelReset* GetDefaultObj();

	void SaveParentToAttachToInformation(const struct FGuid& ActorToAttachGuid, class UActor* ActorToAttach);
	void SaveDamagedActor(class UActor* DamagedActor);
	void SaveActorToBeRespawned(class UActor* ActorToBeRespawned, bool bRemoveDamagedActor);
	void RestoreAttachedBuildingActors(const struct FGuid& SpawnableActorGuid, class UActor* Actor);
	void RespawnDeadActors();
	void OnSpawningFromSaveFinish();
	void OnPlotLoadComplete();
	void HandleMinigameStateChanged(class UFortMinigame* Minigame, enum class EFortMinigameState NewMinigameState);
	void HandleBuildingDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void HandleBuildingDestroyed(TWeakObjectPtr<class UBuildingActor> DestroyedBuilding);
	void HandleBuildingDamaged(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	class UFortPoiSwapManager* GetPoiSwapManager();
	class ULevelSaveRecord* GetLevelSaveRecord();
	void DestroyDamagedActors();
	void ClearFoundActors();
	void CachePoiSwapManager();
	void BindActorToCallbacks(class UActor* Actor);
	void AddActorToTrack(class UActor* ActorToTrack);
};

// 0x88 (0x128 - 0xA0)
// Class CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LoadingScreen
class UCreativeRoyalePlayspaceComponent_LoadingScreen : public UPlayspaceComponent_LoadingScreen
{
public:
	bool                                         bShouldDisplayLoadingScreenDuringPostGame;         // 0xA0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13B4[0x7];                                     // Fixing Size After Last Property 
	class FText                                  PlotNotFinishedLoadingContext;                     // 0xA8(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class FText                                  MinigameResetContext;                              // 0xC0(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13B7[0x18];                                    // Fixing Size After Last Property 
	struct FScalableFloat                        FailsafeTimeoutLength;                             // 0xF0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13B8[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCreativeRoyalePlayspaceComponent_LoadingScreen* GetDefaultObj();

	void OnPlotLoadComplete();
	void OnPlayspaceUserAdded(struct FPlayspaceUser* AddedUser);
	void OnMinigameStateChanged(class UFortMinigame* Minigame, enum class EFortMinigameState MinigameState);
};

// 0x0 (0xB0 - 0xB0)
// Class CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_PlayerSpawning
class UCreativeRoyalePlayspaceComponent_PlayerSpawning : public UFortPlayspaceComponent_PlayerSpawning
{
public:

	static class UClass* StaticClass();
	static class UCreativeRoyalePlayspaceComponent_PlayerSpawning* GetDefaultObj();

};

// 0x28 (0xC8 - 0xA0)
// Class CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_RemoveItems
class UCreativeRoyalePlayspaceComponent_RemoveItems : public UPlayspaceComponent
{
public:
	bool                                         bSpawnFromGameplay;                                // 0xA0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13CE[0x27];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCreativeRoyalePlayspaceComponent_RemoveItems* GetDefaultObj();

	void OnSpawningFromSaveFinish();
	void OnPlotLoadComplete();
	void HandleMinigameStateChanged(class UFortMinigame* Minigame, enum class EFortMinigameState NewMinigameState);
};

// 0x38 (0x6D0 - 0x698)
// Class CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace
class UCreativeRoyaleRootPlayspace : public UFortPlayspace
{
public:
	uint8                                        Pad_13E4[0x18];                                    // Fixing Size After Last Property 
	class UFortPlayerControllerAthena*           EditorIslandOwnerPlayerController;                 // 0x6B0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13E5[0x8];                                     // Fixing Size After Last Property 
	bool                                         bHasPlotLoaded;                                    // 0x6C0(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13E6[0xF];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCreativeRoyaleRootPlayspace* GetDefaultObj();

	void TeleportPlayersToPlayerStarts();
	void OnRep_bHasPlotLoaded();
	void OnPlotLoadComplete();
	void Cheat_LoadEditorIsland();
	bool BuildDataRegistryResolverScope_Implementation(TArray<class FName>* InOutResolverScopes, int32* InOutPriority);
};

// 0x0 (0x338 - 0x338)
// Class CreativeRoyaleRuntime.FortAthenaMutator_CreativeRoyaleSafeZoneOverride
class UFortAthenaMutator_CreativeRoyaleSafeZoneOverride : public UFortAthenaMutator
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaMutator_CreativeRoyaleSafeZoneOverride* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale
class UFortCheatManager_CreativeRoyale : public UFortCheatManager_Coupled
{
public:
	class UFortCreativeRealEstatePlotItemDefinition* CreativeRoyaleEditPlotDefinition;                  // 0x38(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          CreativeRoyaleVolumeTag;                           // 0x40(0x4)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13F1[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortCheatManager_CreativeRoyale* GetDefaultObj();

	void TeleportToPlotAferLoad();
	void CreativeRoyaleTeleportToEditZone();
	void CreativeRoyaleResetIslandFile();
	void CreativeRoyaleLoadEditPlot();
};

// 0x10 (0x510 - 0x500)
// Class CreativeRoyaleRuntime.FortProjectEditComponent_CreativeRoyale
class UFortProjectEditComponent_CreativeRoyale : public UFortProjectEditComponent
{
public:
	uint8                                        Pad_13F8[0x8];                                     // Fixing Size After Last Property 
	class UFortCreativeRealEstatePlotItemDefinition* CreativeRoyaleEditPlotDefinition;                  // 0x508(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortProjectEditComponent_CreativeRoyale* GetDefaultObj();

	void OnPlayerLoggedIn(class UPlayerController* PlayerController);
	void LoadPlotFromProject();
};

}


