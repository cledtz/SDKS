#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2B0 - 0x290)
// Class EncountersRuntime.EncounterMobAnchor
class UEncounterMobAnchor : public UActor
{
public:
	struct FGameplayTagContainer                 FilterTags;                                        // 0x290(0x20)(Edit, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEncounterMobAnchor* GetDefaultObj();

};

// 0x178 (0x218 - 0xA0)
// Class EncountersRuntime.EncounterMobManagerComponent
class UEncounterMobManagerComponent : public UGameFrameworkComponent
{
public:
	TArray<struct FEncounterMobInstance>         SpawnedMobs;                                       // 0xA0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FEncounterMobSpawnData>        MobEncounterSpawnData;                             // 0xB0(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FEncounterMobSpawnInfo                DefaultMobSpawnInfo;                               // 0xC0(0xA0)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        LWMDensityWeight;                                  // 0x160(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        LWMDensityRange;                                   // 0x188(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnEncounterStarted;                                // 0x1B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEncounterPaused;                                 // 0x1C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEncounterResumed;                                // 0x1D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEncounterActorSpawned;                           // 0x1E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEncounterActorDead;                              // 0x1F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEncounterEnded;                                  // 0x200(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class ULivingWorldEncounterPrefab> EncounterPrefab;                                   // 0x210(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEncounterMobManagerComponent* GetDefaultObj();

	bool StartMobEncounter(struct FGameplayTag& MobIdentifier);
	void ResumeMobEncounter(struct FGameplayTag& MobIdentifier);
	void PauseMobEncounter(struct FGameplayTag& MobIdentifier);
	void OnMobPawnEndPlay(class UActor* Mob, enum class EEndPlayReason EndPlayReason);
	void OnMobActorSpawn(class UActor* SpawnedActor);
	void OnMobActorDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnEncounterStarted__DelegateSignature(const struct FGameplayTag& MobIdentifier);
	void OnEncounterResumed__DelegateSignature(const struct FGameplayTag& MobIdentifier);
	void OnEncounterPaused__DelegateSignature(const struct FGameplayTag& MobIdentifier);
	void OnEncounterEnded__DelegateSignature(const struct FGameplayTag& MobIdentifier);
	void OnEncounterActorSpawned__DelegateSignature(const struct FGameplayTag& MobIdentifier, class UActor* SpawnedActor);
	void OnEncounterActorDead__DelegateSignature(const struct FGameplayTag& MobIdentifier, class UActor* DamagedActor, class UActor* DamageCauser);
	void EndMobEncounter(struct FGameplayTag& MobIdentifier);
	void EndAndCleanupAllMobEncounters();
};

// 0x8 (0x30 - 0x28)
// Class EncountersRuntime.StartLWMEncounterDelegateHandler
class UStartLWMEncounterDelegateHandler : public UObject
{
public:
	uint8                                        Pad_4329[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UStartLWMEncounterDelegateHandler* GetDefaultObj();

	void OnMobPawnEndPlay(class UActor* Mob, enum class EEndPlayReason EndPlayReason);
	void OnMobActorSpawn(class UActor* SpawnedActor);
	void OnMobActorDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& Momentum);
};

// 0x38 (0x88 - 0x50)
// Class EncountersRuntime.EncounterActorSpawnerData
class UEncounterActorSpawnerData : public UFortAthenaActorSpawnerData
{
public:
	struct FEncounterPrefabEntry                 EncounterEntry;                                    // 0x50(0x38)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEncounterActorSpawnerData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class EncountersRuntime.EncounterBlueprintLibrary
class UEncounterBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UEncounterBlueprintLibrary* GetDefaultObj();

	class UEncounterMobManagerComponent* GetRelevantMobManagerComponentForActor(class UActor* Actor);
};

// 0x78 (0x3A8 - 0x330)
// Class EncountersRuntime.EncounterGameplayVolume
class UEncounterGameplayVolume : public UGameplayVolume
{
public:
	uint8                                        Pad_4344[0x18];                                    // Fixing Size After Last Property 
	bool                                         bShouldPersist;                                    // 0x348(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4346[0x1F];                                    // Fixing Size After Last Property 
	struct FGuid                                 SavedActorGuid;                                    // 0x368(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEncounterStateTreeComponent*          EncounterStateTreeComponent;                       // 0x378(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_434F[0x28];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEncounterGameplayVolume* GetDefaultObj();

	void OnCleanup();
	bool IsDoneCleaningUp();
};

// 0x20 (0xA8 - 0x88)
// Class EncountersRuntime.EncounterItem
class UEncounterItem : public UFortItem
{
public:
	class UEncounterItemDefinition*              EncounterItemDefinition;                           // 0x88(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class ULivingWorldEncounterPrefab> EncounterPrefab;                                   // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UEncounterManagerComponent> EncounterManager;                                  // 0x98(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4351[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEncounterItem* GetDefaultObj();

};

// 0x138 (0x4B0 - 0x378)
// Class EncountersRuntime.EncounterItemDefinition
class UEncounterItemDefinition : public UFortItemDefinition
{
public:
	bool                                         bAutoHandleSuccessFailure;                         // 0x378(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4355[0x7];                                     // Fixing Size After Last Property 
	TSoftObjectPtr<class UWorld>                 Level;                                             // 0x380(0x20)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStateTree*                            StateTreeOverride;                                 // 0x3A0(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayCueTag                       ProximityGameplayCueTag;                           // 0x3A8(0x4)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueTag                       ActorCleanupGameplayCueTag;                        // 0x3AC(0x4)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<class FName>                          SuccessRewards;                                    // 0x3B0(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FEncounterRewardBehavior              SuccessRewardBehavior;                             // 0x3C0(0x38)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueTag                       ActorSuccessGameplayCueTag;                        // 0x3F8(0x4)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueTag                       PlayerSuccessGameplayCueTag;                       // 0x3FC(0x4)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<class FName>                          FailureRewards;                                    // 0x400(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FEncounterRewardBehavior              FailureRewardBehavior;                             // 0x410(0x38)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueTag                       ActorFailureGameplayCueTag;                        // 0x448(0x4)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueTag                       PlayerFailureGameplayCueTag;                       // 0x44C(0x4)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        LWMDensityWeight;                                  // 0x450(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        LWMDensityRange;                                   // 0x478(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	TArray<struct FInstancedStruct>              Vars;                                              // 0x4A0(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UEncounterItemDefinition* GetDefaultObj();

};

// 0x68 (0x108 - 0xA0)
// Class EncountersRuntime.EncounterManagerComponent
class UEncounterManagerComponent : public UGameFrameworkComponent
{
public:
	TWeakObjectPtr<class UEncounterGameplayVolume> EncounterVolume;                                   // 0xA0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UActor>                 CenterActorOverride;                               // 0xA8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSet<class UPlayerController*>               ExplicitContributors;                              // 0xB0(0x50)(Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UEncounterItem>         EncounterItem;                                     // 0x100(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEncounterManagerComponent* GetDefaultObj();

	void RemoveExplicitContributor(class UPlayerController* Contributor);
	void OnStateTreeStatusChanged(enum class EStateTreeRunStatus Status);
	void HandleEncounterSuccess(int32 RewardIndex);
	void HandleEncounterFailure(int32 RewardIndex);
	struct FGameplayTagQuery GetVariable_TagQuery(struct FGameplayTag& VarName);
	class UFortAthenaLivingWorldEncounter* GetVariable_LWMEncounter(struct FGameplayTag& VarName);
	class UFortWorldItemDefinition* GetVariable_ItemDefinition(struct FGameplayTag& VarName);
	int32 GetVariable_Int(struct FGameplayTag& VarName);
	struct FGameplayTag GetVariable_GameplayTag(struct FGameplayTag& VarName);
	float GetVariable_Float(struct FGameplayTag& VarName);
	bool GetVariable_Bool(struct FGameplayTag& VarName);
	void AddExplicitContributor(class UPlayerController* Contributor);
};

// 0x0 (0x148 - 0x148)
// Class EncountersRuntime.EncounterStateTreeComponent
class UEncounterStateTreeComponent : public UStateTreeComponent
{
public:

	static class UClass* StaticClass();
	static class UEncounterStateTreeComponent* GetDefaultObj();

};

// 0x60 (0x978 - 0x918)
// Class EncountersRuntime.LivingWorldEncounterPrefab
class ULivingWorldEncounterPrefab : public UFortAthenaLivingWorldPrefab
{
public:
	uint8                                        Pad_439C[0x40];                                    // Fixing Size After Last Property 
	TArray<struct FEncounterPrefabEntry>         EncounterEntries;                                  // 0x958(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UEncounterItem*                        EncounterItem;                                     // 0x968(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UEncounterItemDefinition> EncounterDefinition;                               // 0x970(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ULivingWorldEncounterPrefab* GetDefaultObj();

	void OnRep_EncounterDefinition();
};

}


