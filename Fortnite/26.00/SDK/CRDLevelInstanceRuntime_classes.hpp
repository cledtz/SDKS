#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x340 - 0x338)
// Class CRDLevelInstanceRuntime.FortAthenaMutator_LevelInstanceDevice
class UFortAthenaMutator_LevelInstanceDevice : public UFortAthenaMutator
{
public:
	TWeakObjectPtr<class ULevelInstanceGameplayVolume> CachedGameplayVolume;                              // 0x338(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaMutator_LevelInstanceDevice* GetDefaultObj();

};

// 0x188 (0x4B8 - 0x330)
// Class CRDLevelInstanceRuntime.LevelInstanceGameplayVolume
class ULevelInstanceGameplayVolume : public UGameplayVolume
{
public:
	uint8                                        Pad_406A[0x8];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnLevelInstanceResolved;                           // 0x338(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_406B[0x30];                                    // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnDisabledStateChanged;                            // 0x378(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLevelInstanceGuidChanged;                        // 0x388(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLevelInstanceNameChanged;                        // 0x398(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLevelInstanceSizeChanged;                        // 0x3A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLevelInstanceContentCollectionChanged;           // 0x3B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_4071[0x1];                                     // Fixing Size After Last Property 
	bool                                         bEditMode;                                         // 0x3C9(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDisabled;                                         // 0x3CA(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESpatialLoadingState              LoadingState;                                      // 0x3CB(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4077[0x4];                                     // Fixing Size After Last Property 
	class FString                                LevelInstanceName;                                 // 0x3D0(0x10)(Net, ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInstanceLoaded;                                   // 0x3E0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWantsLevelLoaded;                                 // 0x3E1(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_407C[0x1];                                     // Fixing Size After Last Property 
	bool                                         bConvertStructuresToProps;                         // 0x3E3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_407E[0x4];                                     // Fixing Size After Last Property 
	class UFortMinigame*                         CachedMinigame;                                    // 0x3E8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortMutatorListComponent*             MutatorListComponent;                              // 0x3F0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortClassTrackerComponent*            ClassFilterComponent;                              // 0x3F8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UObject>>           BlacklistedClasses;                                // 0x400(0x10)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_4082[0x50];                                    // Fixing Size After Last Property 
	struct FGuid                                 LevelInstanceSaveActorGuid;                        // 0x460(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortLevelInstanceSaveActor*           LevelInstanceSaveActor;                            // 0x470(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4083[0x40];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class ULevelInstanceGameplayVolume* GetDefaultObj();

	void SetWantsLevelLoaded(bool bInWantsLevelLoaded);
	void SetReadyForInstantiation(bool bReady);
	void SetLevelInstanceName(const class FString& InName);
	void SetLevelInstanceContentCollection(TSoftObjectPtr<class UFortCreativeActorCollection> ContentCollection);
	void SetLevelInstanceActorGuid(const struct FGuid& InLevelInstanceActorGuid);
	void SetEditMode(bool bInEditMode);
	void RemoveActorWhenEndPlay(class UActor* Actor, enum class EEndPlayReason EndPlayReason);
	void RemoveActorWhenDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnVolumeChanged();
	void OnRep_IsDisabled();
	void OnRep_InstanceLoaded();
	void OnRep_EditMode();
	void OnMinigameStateChanged(class UFortMinigame* Minigame, enum class EFortMinigameState MinigameState);
	void LevelInstanceSizeChanged(class UActor* InstigatorActor);
	void LevelInstanceNameChanged(const class FString& Name);
	void LevelInstanceContentCollectionChanged(class UActor* InstigatorActor, TSoftObjectPtr<class UFortCreativeActorCollection> ContentCollection);
	void LevelInstanceContentChanged(class UActor* InstigatorActor);
	void LevelInstanceBeingDestroyed();
	bool IsPreviewActor();
	bool IsInEditMode();
	bool IsDisabled();
	void InstantiateFromLevelInstanceSaveActor();
	void HandleActorHealthChanged(class UActor* Actor, float NewHealth);
	class FString GetLevelInstanceName();
	class UFortLevelInstanceSaveActor* CreateLevelInstanceSaveActor();
	void CheckForOverlappingVolumes();
};

// 0x0 (0x128 - 0x128)
// Class CRDLevelInstanceRuntime.LevelInstanceItemListComponent
class ULevelInstanceItemListComponent : public UFortMinigameItemContainerComponent
{
public:

	static class UClass* StaticClass();
	static class ULevelInstanceItemListComponent* GetDefaultObj();

};

}


