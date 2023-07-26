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

// 0x78 (0x710 - 0x698)
// Class CreativeRoyaleRuntime.CreativeRoyaleIslandPlayspace
class ACreativeRoyaleIslandPlayspace : public AFortPlayspace
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
	uint8                                        Pad_8086[0x8];                                     // Fixing Size After Last Property..
	TArray<class AActor*>                        FoundActors;                                       // 0x6F0(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	int32                                        IslandMemoryBudget;                                // 0x700(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxMemorySamplingHeight;                           // 0x704(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxMemorySamplingCellSize;                         // 0x708(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8087[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeRoyaleIslandPlayspace");
		return Clss;
	}

};

// 0xA0 (0x140 - 0xA0)
// Class CreativeRoyaleRuntime.FortPoiSwapManager
class UFortPoiSwapManager : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnPlayspaceLoadedContentDelegate;                  // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPlayspaceUnloadedContentDelegate;                // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPrePlayspaceContentUnloadDelegate;               // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_8089[0x50];                                    // Fixing Size After Last Property..
	TWeakObjectPtr<class UFortMcpProfileCreative> CachedIslandOwnerProfile;                          // 0x120(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               PoiPlotLocationOffset;                             // 0x128(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPoiSwapManager");
		return Clss;
	}

	void SwapPoi(class AFortPoiVolume* PoiToSwap);
	void SetPoiSubPlot(class AFortPoiVolume* POIVolume, const class FString& SubPlotName, const class FString& SubPlotLinkCode);
	void OnPrePlayspaceContentUnload(class AFortPoiSwapPlayspace* PoiSwapPlayspace);
	void OnPlayspaceContentLoadingStateChanged(class AFortPoiSwapPlayspace* PoiSwapPlayspace, enum class EFortPoiSwapUserContentState& ContentLoadingState);
	class FString GetPoiSubPlotLinkCode(class AFortPoiVolume* POIVolume);
	class AFortPoiSwapPlayspace* GetPlayspaceForPoi(class AFortPoiVolume* POIVolume);
};

// 0xB0 (0x748 - 0x698)
// Class CreativeRoyaleRuntime.FortPoiSwapPlayspace
class AFortPoiSwapPlayspace : public AFortPlayspace
{
public:
	FMulticastInlineDelegateProperty_            OnContentStateChangedDelegate;                     // 0x698(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPreContentUnloadDelegate;                        // 0x6A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class USceneComponent*                       SceneComponent;                                    // 0x6B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortLevelSaveComponent*               LevelSaveComponent;                                // 0x6C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlaysetLevelStreamComponent*          PlaysetLevelStreamComponent;                       // 0x6C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AFortPoiVolume>         PoiToReplace;                                      // 0x6D0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortCreativeRealEstatePlotItem> PlotToLoad;                                        // 0x6D8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortCreativeRealEstatePlotItem> LoadedPlot;                                        // 0x6E0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FOnlineLinkId                         LinkCodeToLoad;                                    // 0x6E8(0x18)(Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AActor*>                        SpawnedActors;                                     // 0x700(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_808A[0x38];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPoiSwapPlayspace");
		return Clss;
	}

	void OnUserContentUnloaded(struct FAsyncTaskResult& Result);
	void OnUserContentLoaded();
};

// 0x30 (0x1360 - 0x1330)
// Class CreativeRoyaleRuntime.AthenaAIServicePlayerBots_CreativeRoyale
class UAthenaAIServicePlayerBots_CreativeRoyale : public UAthenaAIServiceCreativePlayerBots
{
public:
	struct FScalableFloat                        PlayerBotsEnabled;                                 // 0x1330(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_808B[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaAIServicePlayerBots_CreativeRoyale");
		return Clss;
	}

	void StartLootClustering();
	void OnPlayerJoiningInProgress(class AFortPlayerState* FortPlayerState);
};

// 0x180 (0x220 - 0xA0)
// Class CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset
class UCreativeRoyalePlayspaceComponent_LevelReset : public UPlayspaceComponent
{
public:
	TWeakObjectPtr<class ULevelSaveRecord>       CachedLevelSaveRecord;                             // 0xA0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSpawnFromGameplay;                                // 0xA8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8092[0x7];                                     // Fixing Size After Last Property..
	TArray<TWeakObjectPtr<class AActor>>         SavedFoundActors;                                  // 0xB0(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<TWeakObjectPtr<class AActor>, struct FSpawnBuildingActorParameters> SavedDeadActors;                                   // 0xC0(0x50)(Transient, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class AActor>>         SavedDamagedActors;                                // 0x110(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class AActor>>         FoundActorsDied;                                   // 0x120(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FGuid>                         FoundActorsDiedGuid;                               // 0x130(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TMap<struct FGuid, struct FAttachedBuildingActorGuids> SavedParentWithAttachedBuildings;                  // 0x140(0x50)(Transient, NativeAccessSpecifierPrivate)
	TMap<struct FGuid, TWeakObjectPtr<class AActor>> CurrentActorForBuildingGuid;                       // 0x190(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class AActor>>         FoundActorsDamaged;                                // 0x1E0(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FGuid>                         FoundActorsDamagedGuid;                            // 0x1F0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UFortPoiSwapManager>    CachedPoiSwapManager;                              // 0x200(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8093[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeRoyalePlayspaceComponent_LevelReset");
		return Clss;
	}

	void SaveParentToAttachToInformation(const struct FGuid& ActorToAttachGuid, class AActor* ActorToAttach);
	void SaveDamagedActor(class AActor* DamagedActor);
	void SaveActorToBeRespawned(class AActor* ActorToBeRespawned, bool bRemoveDamagedActor);
	void RestoreAttachedBuildingActors(const struct FGuid& SpawnableActorGuid, class AActor* Actor);
	void RespawnDeadActors();
	void OnSpawningFromSaveFinish();
	void OnPlotLoadComplete();
	void HandleMinigameStateChanged(class AFortMinigame* Minigame, enum class EFortMinigameState NewMinigameState);
	void HandleBuildingDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void HandleBuildingDestroyed(TWeakObjectPtr<class ABuildingActor> DestroyedBuilding);
	void HandleBuildingDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	class UFortPoiSwapManager* GetPoiSwapManager();
	class ULevelSaveRecord* GetLevelSaveRecord();
	void DestroyDamagedActors();
	void ClearFoundActors();
	void CachePoiSwapManager();
	void BindActorToCallbacks(class AActor* Actor);
	void AddActorToTrack(class AActor* ActorToTrack);
};

// 0x88 (0x128 - 0xA0)
// Class CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LoadingScreen
class UCreativeRoyalePlayspaceComponent_LoadingScreen : public UPlayspaceComponent_LoadingScreen
{
public:
	bool                                         bShouldDisplayLoadingScreenDuringPostGame;         // 0xA0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8095[0x7];                                     // Fixing Size After Last Property..
	class FText                                  PlotNotFinishedLoadingContext;                     // 0xA8(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class FText                                  MinigameResetContext;                              // 0xC0(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8096[0x18];                                    // Fixing Size After Last Property..
	struct FScalableFloat                        FailsafeTimeoutLength;                             // 0xF0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8097[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeRoyalePlayspaceComponent_LoadingScreen");
		return Clss;
	}

	void OnPlotLoadComplete();
	void OnPlayspaceUserAdded(struct FPlayspaceUser* AddedUser);
	void OnMinigameStateChanged(class AFortMinigame* Minigame, enum class EFortMinigameState MinigameState);
};

// 0x0 (0xB0 - 0xB0)
// Class CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_PlayerSpawning
class UCreativeRoyalePlayspaceComponent_PlayerSpawning : public UFortPlayspaceComponent_PlayerSpawning
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeRoyalePlayspaceComponent_PlayerSpawning");
		return Clss;
	}

};

// 0x28 (0xC8 - 0xA0)
// Class CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_RemoveItems
class UCreativeRoyalePlayspaceComponent_RemoveItems : public UPlayspaceComponent
{
public:
	bool                                         bSpawnFromGameplay;                                // 0xA0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8099[0x27];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeRoyalePlayspaceComponent_RemoveItems");
		return Clss;
	}

	void OnSpawningFromSaveFinish();
	void OnPlotLoadComplete();
	void HandleMinigameStateChanged(class AFortMinigame* Minigame, enum class EFortMinigameState NewMinigameState);
};

// 0x38 (0x6D0 - 0x698)
// Class CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace
class ACreativeRoyaleRootPlayspace : public AFortPlayspace
{
public:
	uint8                                        Pad_809B[0x18];                                    // Fixing Size After Last Property..
	class AFortPlayerControllerAthena*           EditorIslandOwnerPlayerController;                 // 0x6B0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_809C[0x8];                                     // Fixing Size After Last Property..
	bool                                         bHasPlotLoaded;                                    // 0x6C0(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_809D[0xF];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeRoyaleRootPlayspace");
		return Clss;
	}

	void TeleportPlayersToPlayerStarts();
	void OnRep_bHasPlotLoaded();
	void OnPlotLoadComplete();
	void Cheat_LoadEditorIsland();
	bool BuildDataRegistryResolverScope_Implementation(TArray<class FName>* InOutResolverScopes, int32* InOutPriority);
};

// 0x0 (0x338 - 0x338)
// Class CreativeRoyaleRuntime.FortAthenaMutator_CreativeRoyaleSafeZoneOverride
class AFortAthenaMutator_CreativeRoyaleSafeZoneOverride : public AFortAthenaMutator
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaMutator_CreativeRoyaleSafeZoneOverride");
		return Clss;
	}

};

// 0x10 (0x48 - 0x38)
// Class CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale
class UFortCheatManager_CreativeRoyale : public UFortCheatManager_Coupled
{
public:
	class UFortCreativeRealEstatePlotItemDefinition* CreativeRoyaleEditPlotDefinition;                  // 0x38(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          CreativeRoyaleVolumeTag;                           // 0x40(0x4)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_809E[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCheatManager_CreativeRoyale");
		return Clss;
	}

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
	uint8                                        Pad_809F[0x8];                                     // Fixing Size After Last Property..
	class UFortCreativeRealEstatePlotItemDefinition* CreativeRoyaleEditPlotDefinition;                  // 0x508(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortProjectEditComponent_CreativeRoyale");
		return Clss;
	}

	void OnPlayerLoggedIn(class APlayerController* PlayerController);
	void LoadPlotFromProject();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
