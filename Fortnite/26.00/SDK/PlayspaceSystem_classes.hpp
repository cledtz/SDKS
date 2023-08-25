#pragma once

// Dumped with Dumper-7!


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
	uint8                                        Pad_1BF7[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOverlapComponent* GetDefaultObj();

	void OnEndActorOverlap(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnBeginActorOverlap(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
};

// 0x0 (0xA0 - 0xA0)
// Class PlayspaceSystem.PlayspaceComponent
class UPlayspaceComponent : public UGameFrameworkComponent
{
public:

	static class UClass* StaticClass();
	static class UPlayspaceComponent* GetDefaultObj();

};

// 0x10 (0xB0 - 0xA0)
// Class PlayspaceSystem.PlayspaceComponent_PlayerSpawning
class UPlayspaceComponent_PlayerSpawning : public UPlayspaceComponent
{
public:
	bool                                         bQueueUserForSpawnWhenAdded;                       // 0xA0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BFD[0x3];                                     // Fixing Size After Last Property 
	float                                        SpawnDelayMin;                                     // 0xA4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SpawnDelayMax;                                     // 0xA8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BFE[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPlayspaceComponent_PlayerSpawning* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class PlayspaceSystem.PlayspaceComponent_VoiceManager
class UPlayspaceComponent_VoiceManager : public UPlayspaceComponent
{
public:

	static class UClass* StaticClass();
	static class UPlayspaceComponent_VoiceManager* GetDefaultObj();

};

// 0x78 (0x118 - 0xA0)
// Class PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning
class UPlayspaceControllerComponent_PlayerSpawning : public UControllerComponent
{
public:
	FMulticastInlineDelegateProperty_            OnPlayerQueuedToSpawn;                             // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	class UCameraActor*                          SpawnCameraActor;                                  // 0xB0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bClientReadyForSpawning;                           // 0xB8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1C03[0x7];                                     // Fixing Size After Last Property 
	struct FReplicatedSpawnInfo                  ReplicatedSpawnInfo;                               // 0xC0(0x58)(Net, Transient, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UPlayspaceControllerComponent_PlayerSpawning* GetDefaultObj();

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

	static class UClass* StaticClass();
	static class UPlayspaceGameStateComponent* GetDefaultObj();

};

// 0x58 (0xF8 - 0xA0)
// Class PlayspaceSystem.PlayspaceGameStateComponent_PlayerSpawningManager
class UPlayspaceGameStateComponent_PlayerSpawningManager : public UPlayspaceGameStateComponent
{
public:
	uint8                                        Pad_1C0A[0x48];                                    // Fixing Size After Last Property 
	TArray<struct FPlayspaceSpawningInfo>        SpawningUsersArray;                                // 0xE8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UPlayspaceGameStateComponent_PlayerSpawningManager* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class PlayspaceSystem.GameFeatureAction_AddPlayspaceComponent
class UGameFeatureAction_AddPlayspaceComponent : public UGameFeatureAction
{
public:
	TArray<struct FPlayspaceComponentConfiguration> PlayspaceComponentDataList;                        // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1C0B[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGameFeatureAction_AddPlayspaceComponent* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class PlayspaceSystem.GameFeatureAction_CreatePlayspacesFromConfig
class UGameFeatureAction_CreatePlayspacesFromConfig : public UGameFeatureAction
{
public:
	TArray<struct FPlayspaceConfiguration>       PlayspaceDataList;                                 // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1C0D[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGameFeatureAction_CreatePlayspacesFromConfig* GetDefaultObj();

};

// 0xA0 (0x330 - 0x290)
// Class PlayspaceSystem.GameplayVolume
class UGameplayVolume : public UActor
{
public:
	TSoftClassPtr<class UPlayspace>              PlayspaceClassTemplate;                            // 0x290(0x20)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EPlayspaceCreationType            PlayspaceCreationType;                             // 0x2B0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C12[0x7];                                     // Fixing Size After Last Property 
	TSubclassOf<class UPlayspace>                PlayspaceClass;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDestroyPlayspaceOnEndPlay;                        // 0x2C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C13[0x7];                                     // Fixing Size After Last Property 
	class UPlayspace*                            Playspace;                                         // 0x2C8(0x8)(Net, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 VolumeTags;                                        // 0x2D0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Protected, NativeAccessSpecifierProtected)
	class UOverlapComponent*                     BoundsComponent;                                   // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C14[0x38];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGameplayVolume* GetDefaultObj();

	void UpdateSize(struct FVector& NewScale);
	void OnOverlappedPawnControllerChanged(class UPawn* Pawn, class UController* OldController, class UController* NewController);
	void InitializeBoundsComponent(class UOverlapComponent* NewBoundsComponent);
	class UPlayspace* GetPlayspace();
};

// 0x2F0 (0x580 - 0x290)
// Class PlayspaceSystem.Playspace
class UPlayspace : public UInfo
{
public:
	FMulticastInlineDelegateProperty_            NotifyPlayspaceUserAdded;                          // 0x290(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C24[0x18];                                    // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            NotifyPlayspaceUserRemoved;                        // 0x2B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C25[0x18];                                    // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            NotifyPlayspaceInitialized;                        // 0x2E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C26[0x30];                                    // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            NotifyStartMatch;                                  // 0x320(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C27[0x18];                                    // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            NotifyEndMatch;                                    // 0x348(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C28[0x18];                                    // Fixing Size After Last Property 
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x370(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTag                          RequestedPlayspaceParentTag;                       // 0x390(0x4)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C2A[0x4];                                     // Fixing Size After Last Property 
	TArray<TSubclassOf<class UPlayspace>>        ChildPlayspaceClasses;                             // 0x398(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FPlayspaceUserList                    PlayspaceUsers;                                    // 0x3A8(0x178)(Net, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)
	TArray<class UPlayspace*>                    ChildPlayspaces;                                   // 0x520(0x10)(Net, ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<struct FUniqueNetIdRepl>              PendingUsers;                                      // 0x530(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	bool                                         bAutoStartMatchOnServerStart;                      // 0x540(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EWithinBoundsEvaluationType       BoundsEvaluationType;                              // 0x541(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C2C[0x6];                                     // Fixing Size After Last Property 
	class UPlayspaceManagerComponent*            PlayspaceManagerCached;                            // 0x548(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGameplayVolume*                       BoundGameplayVolume;                               // 0x550(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsInitialized;                                    // 0x558(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1C2F[0x1];                                     // Fixing Size After Last Property 
	bool                                         bMatchHasEnded;                                    // 0x55A(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1C31[0x1];                                     // Fixing Size After Last Property 
	float                                        MatchStartTime;                                    // 0x55C(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1C33[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPlayspace* GetDefaultObj();

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

	static class UClass* StaticClass();
	static class UPlayspaceComponent_Logic* GetDefaultObj();

};

// 0x120 (0x1C0 - 0xA0)
// Class PlayspaceSystem.PlayspaceComponent_PlayerManager
class UPlayspaceComponent_PlayerManager : public UPlayspaceComponent
{
public:
	TArray<struct FPlayspace_ControllerComponentInfo> ControllerComponents;                              // 0xA0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FPlayspace_PlayerStateComponentInfo> PlayerStateComponents;                             // 0xB0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FPlayspace_ActorComponentInfo> ActorComponents;                                   // 0xC0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C39[0xF0];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPlayspaceComponent_PlayerManager* GetDefaultObj();

	void OnPlayerPawnSet(class UPlayerState* Player, class UPawn* NewPawn, class UPawn* OldPawn);
};

// 0x0 (0x28 - 0x28)
// Class PlayspaceSystem.PlayspaceLibrary
class UPlayspaceLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPlayspaceLibrary* GetDefaultObj();

	class UPlayspace* GetPlayspaceForActor(class UObject* WorldContextObject, class UActor* InActor);
	void DestroyPlayspace(class UPlayspace* PlayspaceToDestroy);
};

// 0x10 (0x2A0 - 0x290)
// Class PlayspaceSystem.PlayspaceLogic
class UPlayspaceLogic : public UActor
{
public:
	class UPlayspace*                            Playspace;                                         // 0x290(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoStartMatchOnServerStart;                      // 0x298(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C40[0x1];                                     // Fixing Size After Last Property 
	bool                                         bMatchHasEnded;                                    // 0x29A(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1C41[0x1];                                     // Fixing Size After Last Property 
	float                                        MatchStartTime;                                    // 0x29C(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UPlayspaceLogic* GetDefaultObj();

	void OnRep_MatchStartTime();
	void OnRep_bMatchHasEnded();
};

// 0x1B0 (0x250 - 0xA0)
// Class PlayspaceSystem.PlayspaceManagerComponent
class UPlayspaceManagerComponent : public UGameStateComponent
{
public:
	uint8                                        Pad_1C48[0x18];                                    // Fixing Size After Last Property 
	class UPlayspace*                            RootPlayspace;                                     // 0xB8(0x8)(Net, ZeroConstructor, Transient, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EPlayspaceRootType                PlayspaceRootType;                                 // 0xC0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C49[0x11F];                                   // Fixing Size After Last Property 
	TArray<struct FActorOverlapEvent>            UnhandledEnterEvents;                              // 0x1E0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FActorOverlapEvent>            UnhandledExitEvents;                               // 0x1F0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TSet<class UPlayerController*>               UnassignedPlayers;                                 // 0x200(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UPlayspaceManagerComponent* GetDefaultObj();

	bool ProcessOverlapEvents(float DeltaTime);
	void OnRep_RootPlayspace();
	void OnPlayerEndOverlapGameplayVolume(class UPlayerState* PlayerState, class UGameplayVolume* Volume);
	void OnPlayerBeginOverlapGameplayVolume(class UPlayerState* PlayerState, class UGameplayVolume* Volume);
};

// 0x8 (0x298 - 0x290)
// Class PlayspaceSystem.PlayspaceSpawnActor
class UPlayspaceSpawnActor : public UActor
{
public:
	class USceneComponent*                       SceneComponent;                                    // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UPlayspaceSpawnActor* GetDefaultObj();

};

}


