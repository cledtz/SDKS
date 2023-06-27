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

// 0x8 (0x338 - 0x330)
// Class CRDLevelInstanceRuntime.FortAthenaMutator_LevelInstanceDevice
class AFortAthenaMutator_LevelInstanceDevice : public AFortAthenaMutator
{
public:
	TWeakObjectPtr<class ALevelInstanceGameplayVolume> CachedGameplayVolume;                              // 0x330(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaMutator_LevelInstanceDevice");
		return Clss;
	}

};

// 0x188 (0x4B8 - 0x330)
// Class CRDLevelInstanceRuntime.LevelInstanceGameplayVolume
class ALevelInstanceGameplayVolume : public AGameplayVolume
{
public:
	uint8                                        Pad_4223[0x8];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnLevelInstanceResolved;                           // 0x338(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_4224[0x30];                                    // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnDisabledStateChanged;                            // 0x378(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLevelInstanceGuidChanged;                        // 0x388(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLevelInstanceNameChanged;                        // 0x398(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLevelInstanceSizeChanged;                        // 0x3A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLevelInstanceContentCollectionChanged;           // 0x3B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_4225[0x1];                                     // Fixing Size After Last Property..
	bool                                         bEditMode;                                         // 0x3C9(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDisabled;                                         // 0x3CA(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESpatialLoadingState              LoadingState;                                      // 0x3CB(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4226[0x4];                                     // Fixing Size After Last Property..
	class FString                                LevelInstanceName;                                 // 0x3D0(0x10)(Net, ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInstanceLoaded;                                   // 0x3E0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWantsLevelLoaded;                                 // 0x3E1(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4227[0x1];                                     // Fixing Size After Last Property..
	bool                                         bConvertStructuresToProps;                         // 0x3E3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4228[0x4];                                     // Fixing Size After Last Property..
	class AFortMinigame*                         CachedMinigame;                                    // 0x3E8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortMutatorListComponent*             MutatorListComponent;                              // 0x3F0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortClassTrackerComponent*            ClassFilterComponent;                              // 0x3F8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UObject>>           BlacklistedClasses;                                // 0x400(0x10)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_4229[0x50];                                    // Fixing Size After Last Property..
	struct FGuid                                 LevelInstanceSaveActorGuid;                        // 0x460(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AFortLevelInstanceSaveActor*           LevelInstanceSaveActor;                            // 0x470(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_422A[0x40];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LevelInstanceGameplayVolume");
		return Clss;
	}

	void SetWantsLevelLoaded(bool bInWantsLevelLoaded);
	void SetReadyForInstantiation(bool bReady);
	void SetLevelInstanceName(const class FString& InName);
	void SetLevelInstanceContentCollection(TSoftObjectPtr<class UFortCreativeActorCollection> ContentCollection);
	void SetLevelInstanceActorGuid(const struct FGuid& InLevelInstanceActorGuid);
	void SetEditMode(bool bInEditMode);
	void RemoveActorWhenEndPlay(class AActor* Actor, enum class EEndPlayReason EndPlayReason);
	void RemoveActorWhenDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnVolumeChanged();
	void OnRep_IsDisabled();
	void OnRep_InstanceLoaded();
	void OnRep_EditMode();
	void OnMinigameStateChanged(class AFortMinigame* Minigame, enum class EFortMinigameState MinigameState);
	void LevelInstanceSizeChanged(class AActor* InstigatorActor);
	void LevelInstanceNameChanged(const class FString& Name);
	void LevelInstanceContentCollectionChanged(class AActor* InstigatorActor, TSoftObjectPtr<class UFortCreativeActorCollection> ContentCollection);
	void LevelInstanceContentChanged(class AActor* InstigatorActor);
	void LevelInstanceBeingDestroyed();
	bool IsPreviewActor();
	bool IsInEditMode();
	bool IsDisabled();
	void InstantiateFromLevelInstanceSaveActor();
	void HandleActorHealthChanged(class AActor* Actor, float NewHealth);
	class FString GetLevelInstanceName();
	class AFortLevelInstanceSaveActor* CreateLevelInstanceSaveActor();
	void CheckForOverlappingVolumes();
};

// 0x0 (0x128 - 0x128)
// Class CRDLevelInstanceRuntime.LevelInstanceItemListComponent
class ULevelInstanceItemListComponent : public UFortMinigameItemContainerComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LevelInstanceItemListComponent");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
