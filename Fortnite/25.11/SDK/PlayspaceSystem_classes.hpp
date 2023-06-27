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

// 0x20 (0x640 - 0x620)
// Class PlayspaceSystem.OverlapComponent
class UOverlapComponent : public UStaticMeshComponent
{
public:
	uint8                                        Pad_3625[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OverlapComponent");
		return Clss;
	}

	void OnEndActorOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnBeginActorOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
};

// 0x0 (0xA0 - 0xA0)
// Class PlayspaceSystem.PlayspaceComponent
class UPlayspaceComponent : public UGameFrameworkComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayspaceComponent");
		return Clss;
	}

};

// 0x10 (0xB0 - 0xA0)
// Class PlayspaceSystem.PlayspaceComponent_PlayerSpawning
class UPlayspaceComponent_PlayerSpawning : public UPlayspaceComponent
{
public:
	bool                                         bQueueUserForSpawnWhenAdded;                       // 0xA0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3626[0x3];                                     // Fixing Size After Last Property..
	float                                        SpawnDelayMin;                                     // 0xA4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SpawnDelayMax;                                     // 0xA8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3627[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayspaceComponent_PlayerSpawning");
		return Clss;
	}

};

// 0x0 (0xA0 - 0xA0)
// Class PlayspaceSystem.PlayspaceComponent_VoiceManager
class UPlayspaceComponent_VoiceManager : public UPlayspaceComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayspaceComponent_VoiceManager");
		return Clss;
	}

};

// 0x78 (0x118 - 0xA0)
// Class PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning
class UPlayspaceControllerComponent_PlayerSpawning : public UControllerComponent
{
public:
	FMulticastInlineDelegateProperty_            OnPlayerQueuedToSpawn;                             // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	class ACameraActor*                          SpawnCameraActor;                                  // 0xB0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bClientReadyForSpawning;                           // 0xB8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3628[0x7];                                     // Fixing Size After Last Property..
	struct FReplicatedSpawnInfo                  ReplicatedSpawnInfo;                               // 0xC0(0x58)(Net, Transient, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayspaceControllerComponent_PlayerSpawning");
		return Clss;
	}

	void ServerMarkReadyForSpawning();
	void OnRep_ReplicatedSpawnInfo();
	struct FReplicatedSpawnInfo GetSpawnInfo();
	void ClientReplicatedSpawnInfo(struct FReplicatedSpawnInfo& InReplicatedSpawnInfo);
};

// 0x0 (0xA0 - 0xA0)
// Class PlayspaceSystem.PlayspaceGameStateComponent
class UPlayspaceGameStateComponent : public UGameStateComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayspaceGameStateComponent");
		return Clss;
	}

};

// 0x58 (0xF8 - 0xA0)
// Class PlayspaceSystem.PlayspaceGameStateComponent_PlayerSpawningManager
class UPlayspaceGameStateComponent_PlayerSpawningManager : public UPlayspaceGameStateComponent
{
public:
	uint8                                        Pad_3629[0x48];                                    // Fixing Size After Last Property..
	TArray<struct FPlayspaceSpawningInfo>        SpawningUsersArray;                                // 0xE8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayspaceGameStateComponent_PlayerSpawningManager");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class PlayspaceSystem.GameFeatureAction_AddPlayspaceComponent
class UGameFeatureAction_AddPlayspaceComponent : public UGameFeatureAction
{
public:
	TArray<struct FPlayspaceComponentConfiguration> PlayspaceComponentDataList;                        // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_362A[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameFeatureAction_AddPlayspaceComponent");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class PlayspaceSystem.GameFeatureAction_CreatePlayspacesFromConfig
class UGameFeatureAction_CreatePlayspacesFromConfig : public UGameFeatureAction
{
public:
	TArray<struct FPlayspaceConfiguration>       PlayspaceDataList;                                 // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_362B[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameFeatureAction_CreatePlayspacesFromConfig");
		return Clss;
	}

};

// 0xA8 (0x330 - 0x288)
// Class PlayspaceSystem.GameplayVolume
class AGameplayVolume : public AActor
{
public:
	TSoftClassPtr<class APlayspace>              PlayspaceClassTemplate;                            // 0x288(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EPlayspaceCreationType            PlayspaceCreationType;                             // 0x2B0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_362C[0x7];                                     // Fixing Size After Last Property..
	TSubclassOf<class APlayspace>                PlayspaceClass;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDestroyPlayspaceOnEndPlay;                        // 0x2C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_362D[0x7];                                     // Fixing Size After Last Property..
	class APlayspace*                            Playspace;                                         // 0x2C8(0x8)(Net, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 VolumeTags;                                        // 0x2D0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Protected, NativeAccessSpecifierProtected)
	class UOverlapComponent*                     BoundsComponent;                                   // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_362E[0x38];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayVolume");
		return Clss;
	}

	void UpdateSize(struct FVector& NewScale);
	void OnOverlappedPawnControllerChanged(class APawn* Pawn, class AController* OldController, class AController* NewController);
	void InitializeBoundsComponent(class UOverlapComponent* NewBoundsComponent);
	class APlayspace* GetPlayspace();
};

// 0x2F0 (0x578 - 0x288)
// Class PlayspaceSystem.Playspace
class APlayspace : public AInfo
{
public:
	FMulticastInlineDelegateProperty_            NotifyPlayspaceUserAdded;                          // 0x288(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_362F[0x18];                                    // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            NotifyPlayspaceUserRemoved;                        // 0x2B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3630[0x18];                                    // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            NotifyPlayspaceInitialized;                        // 0x2D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3631[0x30];                                    // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            NotifyStartMatch;                                  // 0x318(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3632[0x18];                                    // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            NotifyEndMatch;                                    // 0x340(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3633[0x18];                                    // Fixing Size After Last Property..
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x368(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTag                          RequestedPlayspaceParentTag;                       // 0x388(0x4)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3634[0x4];                                     // Fixing Size After Last Property..
	TArray<TSubclassOf<class APlayspace>>        ChildPlayspaceClasses;                             // 0x390(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FPlayspaceUserList                    PlayspaceUsers;                                    // 0x3A0(0x178)(Net, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)
	TArray<class APlayspace*>                    ChildPlayspaces;                                   // 0x518(0x10)(Net, ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<struct FUniqueNetIdRepl>              PendingUsers;                                      // 0x528(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	bool                                         bAutoStartMatchOnServerStart;                      // 0x538(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EWithinBoundsEvaluationType       BoundsEvaluationType;                              // 0x539(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3635[0x6];                                     // Fixing Size After Last Property..
	class UPlayspaceManagerComponent*            PlayspaceManagerCached;                            // 0x540(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AGameplayVolume*                       BoundGameplayVolume;                               // 0x548(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsInitialized;                                    // 0x550(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3636[0x1];                                     // Fixing Size After Last Property..
	bool                                         bMatchHasEnded;                                    // 0x552(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3637[0x1];                                     // Fixing Size After Last Property..
	float                                        MatchStartTime;                                    // 0x554(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3638[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Playspace");
		return Clss;
	}

	void OnRep_PlayspaceUsers();
	void OnRep_MatchStartTime();
	void OnRep_bMatchHasEnded();
	void OnRep_bIsInitialized();
};

// 0x0 (0xA0 - 0xA0)
// Class PlayspaceSystem.PlayspaceComponent_Logic
class UPlayspaceComponent_Logic : public UGameFrameworkComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayspaceComponent_Logic");
		return Clss;
	}

};

// 0x120 (0x1C0 - 0xA0)
// Class PlayspaceSystem.PlayspaceComponent_PlayerManager
class UPlayspaceComponent_PlayerManager : public UPlayspaceComponent
{
public:
	TArray<struct FPlayspace_ControllerComponentInfo> ControllerComponents;                              // 0xA0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FPlayspace_PlayerStateComponentInfo> PlayerStateComponents;                             // 0xB0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FPlayspace_ActorComponentInfo> ActorComponents;                                   // 0xC0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3639[0xF0];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayspaceComponent_PlayerManager");
		return Clss;
	}

	void OnPlayerPawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);
};

// 0x0 (0x28 - 0x28)
// Class PlayspaceSystem.PlayspaceLibrary
class UPlayspaceLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayspaceLibrary");
		return Clss;
	}

	class APlayspace* GetPlayspaceForActor(class UObject* WorldContextObject, class AActor* InActor);
	void DestroyPlayspace(class APlayspace* PlayspaceToDestroy);
};

// 0x10 (0x298 - 0x288)
// Class PlayspaceSystem.PlayspaceLogic
class APlayspaceLogic : public AActor
{
public:
	class APlayspace*                            Playspace;                                         // 0x288(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoStartMatchOnServerStart;                      // 0x290(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_363A[0x1];                                     // Fixing Size After Last Property..
	bool                                         bMatchHasEnded;                                    // 0x292(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_363B[0x1];                                     // Fixing Size After Last Property..
	float                                        MatchStartTime;                                    // 0x294(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayspaceLogic");
		return Clss;
	}

	void OnRep_MatchStartTime();
	void OnRep_bMatchHasEnded();
};

// 0x1B0 (0x250 - 0xA0)
// Class PlayspaceSystem.PlayspaceManagerComponent
class UPlayspaceManagerComponent : public UGameStateComponent
{
public:
	uint8                                        Pad_363D[0x18];                                    // Fixing Size After Last Property..
	class APlayspace*                            RootPlayspace;                                     // 0xB8(0x8)(Net, ZeroConstructor, Transient, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EPlayspaceRootType                PlayspaceRootType;                                 // 0xC0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_363E[0x11F];                                   // Fixing Size After Last Property..
	TArray<struct FActorOverlapEvent>            UnhandledEnterEvents;                              // 0x1E0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FActorOverlapEvent>            UnhandledExitEvents;                               // 0x1F0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TSet<class APlayerController*>               UnassignedPlayers;                                 // 0x200(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayspaceManagerComponent");
		return Clss;
	}

	bool ProcessOverlapEvents(float DeltaTime);
	void OnRep_RootPlayspace();
	void OnPlayerEndOverlapGameplayVolume(class APlayerState* PlayerState, class AGameplayVolume* Volume);
	void OnPlayerBeginOverlapGameplayVolume(class APlayerState* PlayerState, class AGameplayVolume* Volume);
};

// 0x8 (0x290 - 0x288)
// Class PlayspaceSystem.PlayspaceSpawnActor
class APlayspaceSpawnActor : public AActor
{
public:
	class USceneComponent*                       SceneComponent;                                    // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayspaceSpawnActor");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
