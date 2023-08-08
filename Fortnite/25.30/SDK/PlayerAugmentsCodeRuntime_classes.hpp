#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xC8 - 0xA8)
// Class PlayerAugmentsCodeRuntime.FortAthenaAIBotEvaluator_Augments
class UFortAthenaAIBotEvaluator_Augments : public UFortAthenaAIBotEvaluator
{
public:
	struct FGameplayTag                          InjectionTag;                                      // 0xA8(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D5B[0x4];                                     // Fixing Size After Last Property
	class UBehaviorTree*                         BehaviorAsset;                                     // 0xB0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  AugmentStatusKeyName;                              // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  AugmentItemKeyName;                                // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D5C[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Augments");
		return Clss;
	}

};

// 0x18 (0x88 - 0x70)
// Class PlayerAugmentsCodeRuntime.FortAthenaBTTask_Augments
class UFortAthenaBTTask_Augments : public UBTTaskNode
{
public:
	float                                        MinSelectionTime;                                  // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxSelectionTime;                                  // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  AugmentStatusKeyName;                              // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  AugmentItemKeyName;                                // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D62[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaBTTask_Augments");
		return Clss;
	}

};

// 0x78 (0xBA0 - 0xB28)
// Class PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility
class UFortAugmentSelectionToolAbility : public UFortGameplayAbility
{
public:
	class UInputComponent*                       SelectionInputComponent;                           // 0xB28(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        InputPriority;                                     // 0xB30(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	int32                                        NumChoices;                                        // 0xB58(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        HighlightedChoiceIndex;                            // 0xB5C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D82[0x10];                                    // Fixing Size After Last Property
	struct FScalableFloat                        RerollHoldInputSeconds;                            // 0xB70(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D83[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAugmentSelectionToolAbility");
		return Clss;
	}

	void SetHighlightedChoiceIndex(int32 NewChoiceIndex);
	void OnSelectedChoiceIndex(int32 ChoiceIndex);
	void OnRerollPressedAndCannotAfford();
	void OnHoldRerollInputChanged(bool bIsPressed, bool bCompletedHold);
	void OnHighlightSelectionUpdated(int32 NewHighlightedChoiceIndex);
};

// 0xA0 (0x148 - 0xA8)
// Class PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem
class UFortBattleRoyalePlayerAugmentSystem : public UFortControllerComponent
{
public:
	float                                        ServerGrantingStartedTimestamp;                    // 0xA8(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3DCD[0x4];                                     // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnMatchAugmentsResetEvent;                         // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bEnableAugmentCollectionUnlocking;                 // 0xC0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3DCE[0xF];                                     // Fixing Size After Last Property
	struct FScalableFloat                        NumRollsForUnlock;                                 // 0xD0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        EnableUnlocking;                                   // 0xF8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        EnableBRAugmentSystem;                             // 0x120(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBattleRoyalePlayerAugmentSystem");
		return Clss;
	}

	void TryIncrementUnlockRollCount();
	struct FFortAugmentPassiveUnlockResult TryClaimUnlock();
	void ResetMatchAugments();
	void OnServerAugmentGrantTimestampReplicated(float ServerGrantStartTimestamp);
	void OnRep_ServerGrantingStartedTimestamp();
	void OnPossedPawnChanged(class UPawn* OldPawn, class UPawn* NewPawn);
	void OnMatchAugmentsReset();
	void OnBattleRoyaleMatchAugmentResetDelegate__DelegateSignature();
	void HandlePossessedPawnChanged(class UPawn* OldPawn, class UPawn* NewPawn);
	float GetServerGrantingStartedTimestamp();
	struct FFortAugmentPassiveUnlockResult ChooseUnlockFromList(TArray<struct FPlayerAugmentLockStatus>& LockedList);
	void BP_GetAugmentPlayerPawn(enum class EFortBRAugmentSystemCastResult* OutExec, class UFortPlayerPawn** OutFortPlayerPawn);
	void BP_GetAugmentController(enum class EFortBRAugmentSystemCastResult* OutExec, class UController** OutController);
	void BlueprintAugmentLog(const class FString& Message, enum class EBattleRoyaleBPAugmentLogVerbosity Verbosity, bool bAutonomousProxyOnly);
	void AuthoritySetServerGrantingStartedTimestamp(float ServerTimestamp);
};

// 0x20 (0x50 - 0x30)
// Class PlayerAugmentsCodeRuntime.FortCollectionDataEntryPlayerAugment
class UFortCollectionDataEntryPlayerAugment : public UFortCollectionDataEntry
{
public:
	class UFortPlayerAugmentItemDefinition*      PlayerAugmentItemDefinition;                       // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  AdditionalDescription;                             // 0x38(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionDataEntryPlayerAugment");
		return Clss;
	}

};

// 0x0 (0x90 - 0x90)
// Class PlayerAugmentsCodeRuntime.FortCollectionDataPlayerAugment
class UFortCollectionDataPlayerAugment : public UFortCollectionData
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCollectionDataPlayerAugment");
		return Clss;
	}

};

// 0x0 (0xF8 - 0xF8)
// Class PlayerAugmentsCodeRuntime.FortContextualTutorial_MultipleAugmentsQueued
class UFortContextualTutorial_MultipleAugmentsQueued : public UFortContextualTutorial
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortContextualTutorial_MultipleAugmentsQueued");
		return Clss;
	}

	void HandleBindCompletionTrigger(class UFortPlayerControllerZone* FortPCZone);
	void HandleBindActivationTrigger(class UFortPlayerControllerZone* FortPCZone);
	void CompletionEventCallback(bool bIsOpened, bool bViewingAugmentInventory);
	void ActivationEventCallback(int8 NumPendingAugmentsToGrant);
};

// 0x510 (0x5B8 - 0xA8)
// Class PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem
class UFortControllerComponent_AugmentGrantingSystem : public UFortControllerComponent
{
public:
	FMulticastInlineDelegateProperty_            OnCanSelectAugmentChanged;                         // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSelectedAugmentForGrant;                         // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAvailableAugmentsForGrantingUpdated;             // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAuthorityRequestAugmentChoices;                  // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLocalReroll;                                     // 0xE8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E62[0x20];                                    // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnReplicateNumPendingAugmentsToGrant;              // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UFortWeaponItemDefinition*             AugmentSelectionModeItem;                          // 0x128(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItemDefinition>    CachedResourceCurrencyOverride;                    // 0x130(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortWorldItem*                        SelectionModeWorldItem;                            // 0x138(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        Enabled;                                           // 0x140(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	int8                                         ReplicatedNumPendingAugmentsToGrant;               // 0x168(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E65[0x7];                                     // Fixing Size After Last Property
	TArray<struct FPlayerAugmentChoiceDatum>     ReplicatedAugmentChoices;                          // 0x170(0x10)(Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate)
	int8                                         NumFreeRerolls;                                    // 0x180(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int8                                         NumLockedSelectionChoices;                         // 0x181(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E67[0x6];                                     // Fixing Size After Last Property
	class UInputComponent*                       PrimaryInputComponentWeaponMode;                   // 0x188(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInputComponent*                       PrimaryInputComponentBuildMode;                    // 0x190(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInputComponent*                       TemporaryInputComponent;                           // 0x198(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        AugmentSelectInputPriority;                        // 0x1A0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 SelectionBlockedPlayerTags;                        // 0x1C8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 AugmentSelectInputDisablePlayerTags;               // 0x1E8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E68[0x28];                                    // Fixing Size After Last Property
	TArray<struct FFortAugmentRerollCost>        RerollCosts;                                       // 0x230(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FFortItemEntry                        SelectorItemEntry;                                 // 0x240(0x1A0)(Net, Transient, RepNotify, NativeAccessSpecifierPrivate)
	struct FFortItemEntry                        LocalCachedPreviousWeapon;                         // 0x3E0(0x1A0)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E69[0x38];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortControllerComponent_AugmentGrantingSystem");
		return Clss;
	}

	void ServerRequestReroll();
	void ServerGrantAugment(class UFortPlayerAugmentItemDefinition* ChosenAugmentDef);
	void OnSelectedAugmentForGrantDelegate__DelegateSignature(class UFortPlayerAugmentItemDefinition* SelectedAugment);
	void OnReplicateNumPendingAugmentsToGrantDelegate__DelegateSignature(int8 NumPendingAugmentsToGrant);
	void OnRep_SelectorItemEntry();
	void OnRep_ReplicatedNumPendingAugmentsToGrant();
	void OnRep_ReplicatedAugmentChoices();
	void OnRep_NumLockedSelectionChoices();
	void OnRep_NumFreeRerolls();
	void OnNumLockedSelectionChoicesUpdatedDelegate__DelegateSignature(int32 NewNumFreeRerolls);
	void OnMinigameStarted();
	void OnLocalUnequipAugmentSelectionPressed();
	void OnLocalRerollDelegate__DelegateSignature();
	void OnLocalEquipAugmentSelectionPressed();
	void OnFreeRerollsUpdatedDelegate__DelegateSignature(int32 NewNumFreeRerolls);
	void OnAvailableAugmentsForGrantingUpdatedDelegate__DelegateSignature(class UFortControllerComponent_AugmentGrantingSystem* GrantingComponent);
	void OnAuthorityRequestAugmentChoicesDelegate__DelegateSignature(TArray<class UFortPlayerAugmentItemDefinition*>& IgnoreInRoll);
	bool IsSelectionItemEquipped();
	bool IsSelectionChoicesLocked();
	void HandleUnHolsteredEvent();
	void HandleToggleFullscreenMap(bool bVisible);
	void HandlePossessedPawnChanged(class UPawn* OldPawn, class UPawn* NewPawn);
	void HandleHolsteredEvent();
	void HandleGamePhaseChanged(enum class EAthenaGamePhase GamePhase);
	void HandleChangedBuildMode(bool bEnteredBuildMode);
	int32 GetPendingAugmentsToGrant();
	int32 GetNumFreeRerolls();
	TArray<struct FPlayerAugmentChoiceDatum> GetAvailableAugmentsToGrant();
	class UFortControllerComponent_AugmentGrantingSystem* GetAugmentGrantingComponentFromController(class UController* Controller);
	void ClientSelectAvailableAugmentToGrant(class UFortPlayerAugmentItemDefinition* ChosenAugmentDef);
	void CanSelectAugmentChangedDelegate__DelegateSignature(bool bCanSelectAugment);
	bool CanReroll();
	void AuthoritySetAvailableAugmentChoices(TArray<struct FPlayerAugmentChoiceDatum>& AvailableAugmentsToGrant);
	void AuthorityResetAugmentData();
	void AuthorityRequestSelectionToolItemGrant(class UObject* Instigator);
	void AuthorityIncrementLockedSelectionChoices(int32 NumLocksToAdd);
	void AuthorityGrantNewAugment();
	void AuthorityGrantFreeReroll();
};

// 0x0 (0x28 - 0x28)
// Class PlayerAugmentsCodeRuntime.AugmentFuctionLibrary
class UAugmentFuctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AugmentFuctionLibrary");
		return Clss;
	}

	class UFortWorldItem* GiveAugmentWithPreventDropping(class UFortPlayerAugmentItemDefinition* ChosenAugmentDef, TScriptInterface<class UFortInventoryOwnerInterface> InventoryOwner);
};

// 0xA8 (0x150 - 0xA8)
// Class PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents
class UFortControllerComponent_AugmentUIEvents : public UFortControllerComponent
{
public:
	uint8                                        Pad_3E9F[0x20];                                    // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnAugmentSelectorHighlightedChoice;                // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAugmentStartedSelectionOfChoice;                 // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAugmentGrantingTimersFinishedForMatch;           // 0xE8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAugmentGrantingTimersResetForMatch;              // 0xF8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            AugmentHoldInputRerollChanged;                     // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAugmentToolViewSwap;                             // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EA0[0x18];                                    // Fixing Size After Last Property
	int32                                        NumAugmentGrantRoundsForPlaylist;                  // 0x140(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3EA2[0xC];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortControllerComponent_AugmentUIEvents");
		return Clss;
	}

	void UpdatedTimerProgress(float TimeRemaining, float TimePercentage);
	void SetNumGrantableAugmentsForPlaylist(int32 NewNumRounds);
	void OnGrantTimerProgressUpdatedDelegate__DelegateSignature(float TimeRemaining, float TimePercentage);
	void OnAugmentToolViewSwapDelegate__DelegateSignature(bool ViewingInventoryAugments);
	void OnAugmentStartedSelectionOfChoiceDelegate__DelegateSignature(int32 ChoiceIndex);
	void OnAugmentSelectorOpenedStatusChangedDelegate__DelegateSignature(bool bIsOpened, bool bViewingInventory);
	void OnAugmentSelectorHighlightedChoiceDelegate__DelegateSignature(int32 ChoiceIndex);
	void OnAugmentGrantingTimersResetForMatchDelegate__DelegateSignature();
	void OnAugmentGrantingTimersFinishedForMatchDelegate__DelegateSignature();
	void NotifyGrantingTimersReset();
	void NotifyGrantingTimersFinished();
	void HandleAugmentSelectorOpenedStatusChanged(bool bIsOpened, bool bViewingInventory);
	void AugmentHoldInputRerollChangedDelegate__DelegateSignature(enum class EAugmentHoldInputRerollState HoldState, float HoldDurationSeconds);
};

// 0xF8 (0x1A0 - 0xA8)
// Class PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence
class UFortControllerComponent_PlayerAugmentPersistence : public UFortControllerComponent
{
public:
	struct FScalableFloat                        Enabled;                                           // 0xA8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        LockMissingCollectionAugmentsEnabled;              // 0xD0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UFortPlayerControllerAthena*           PlayerController;                                  // 0xF8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortCollectionDataPlayerAugment*      CollectionData;                                    // 0x100(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FPlayerAugmentsPersistenceData        LivePlayerAugmentsPersistenceData;                 // 0x108(0x18)(Edit, Net, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPrivate)
	TSet<class UFortPlayerAugmentItemDefinition*> AugmentsCollectedThisMatch;                        // 0x120(0x50)(Edit, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPrivate)
	TArray<struct FReplicatedSharedPlayerAugment> ReplicatedSharedPlayerAugments;                    // 0x170(0x10)(Edit, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3ED1[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortControllerComponent_PlayerAugmentPersistence");
		return Clss;
	}

	void HandleMcpProfilesInitialized();
	void HandleCollectionDataTableLoaded(TSoftObjectPtr<class UFortCollectionsDataTable> CollectionsDataTableSoftPtr);
	void HandleCollectionDataLoaded(TSoftObjectPtr<class UFortCollectionData> BaseCollectionDataSoftPtr);
	void HandleAthenaGamePhaseChanged(enum class EAthenaGamePhase GamePhase);
	int32 GetRollCountSinceLastRandomUnlock();
	void GetLockStatusForAll(TArray<struct FPlayerAugmentLockStatus>* OutLockStatusArray);
	struct FPlayerAugmentLockStatus GetLockStatus(class UFortPlayerAugmentItemDefinition* PlayerAugmentItemDefinition);
	void GetLockedList(TArray<struct FPlayerAugmentLockStatus>* OutLockedList, bool bIncludeSharedAugments);
	void GetCarryOverPlayerAugments(TArray<struct FCarryOverPlayerAugment>* OutCarryOverPlayerAugments);
	void AuthorityUnlockPlayerAugment(class UFortPlayerAugmentItemDefinition* PlayerAugmentToUnlock);
	void AuthoritySetRollCountSinceLastRandomUnlock(int32 NewRollCount);
	void AuthoritySetCarryOverPlayerAugments(TArray<struct FCarryOverPlayerAugment>& NewCarryOverPlayerAugments);
};

// 0x50 (0x328 - 0x2D8)
// Class PlayerAugmentsCodeRuntime.FortGamestateComponent_AugmentTableManager
class UFortGamestateComponent_AugmentTableManager : public UFortGamestateComponent_DynamicRollTableManager
{
public:
	uint8                                        Pad_3ED6[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGamestateComponent_AugmentTableManager");
		return Clss;
	}

};

// 0x0 (0x1A0 - 0x1A0)
// Class PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentDynamicRollPlayerComponent
class UFortControllerComponent_AugmentDynamicRollPlayerComponent : public UFortControllerComponent_DynamicRollPlayerComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortControllerComponent_AugmentDynamicRollPlayerComponent");
		return Clss;
	}

};

// 0x10 (0xA8 - 0x98)
// Class PlayerAugmentsCodeRuntime.FortMcpCollectionPlayerAugment
class UFortMcpCollectionPlayerAugment : public UFortMcpCollectionBase
{
public:
	uint8                                        Pad_3EED[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMcpCollectionPlayerAugment");
		return Clss;
	}

	void MarkSeenForPlayer(class UFortPlayerController* PlayerController, const struct FGameplayTag& VariantTag);
	void AddToPlayerCollection(class UFortPlayerController* PlayerController, const struct FGameplayTag& PlayerAugmentVariantTag);
};

// 0x0 (0x28 - 0x28)
// Class PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager
class UFortPlayerAugmentCheatManager : public UChildCheatManager
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerAugmentCheatManager");
		return Clss;
	}

	void StartAugmentGrantingFlow();
	void SetPlayerAugmentRollCountSinceLastUnlock(int32 RollCount);
	void ServerLogDynamicWeightsForPlayer(bool bVeryDetailedReport);
	void ResetAugmentGrantingToSeed(int32 Seed);
	void RemoveAllAugmentsFromBots();
	void RemoveAllAugments();
	void LogPlayerAugmentsLockStatus();
	void GiveAugmentToBots(const class FString& AugmentName);
	void GiveAugment(const class FString& AugmentName);
	void ForceSelectionAugments(const class FString& AugmentNameFirst, const class FString& AugmentNameSecond);
	void CollectPlayerAugment(const class FString& TagMatch);
	void CollectAllPlayerAugments();
};

// 0x108 (0x1A8 - 0xA0)
// Class PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem
class UFortPlayerStateComponent_PlayerAugmentSystem : public UFortPlayerStateComponent
{
public:
	uint8                                        Pad_3F1B[0x18];                                    // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnAugmentListUpdated;                              // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScalableFloat                        EnableAugmentsFeature;                             // 0xC8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UGameplayEffect>           DynamicTagGEClass;                                 // 0xF0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FPrimaryAssetId, struct FPlayerAugmentTrackedData> AugmentToRuntimeDataMap;                           // 0xF8(0x50)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UFortPlayerAugmentItemDefinition*> ActiveAugments;                                    // 0x148(0x10)(Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate)
	TMap<struct FGameplayTag, double>            RuntimeAugmentMatchDataCacheFloat;                 // 0x158(0x50)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerStateComponent_PlayerAugmentSystem");
		return Clss;
	}

	void SetAugmentMatchDataCacheFloat(const struct FGameplayTag& TargetAugmentCacheTag, double InData);
	void OnRep_ActiveAugments();
	void OnAugmentListUpdatedEventDispatcher__DelegateSignature(class UFortPlayerStateComponent_PlayerAugmentSystem* AugmentComponent);
	void HandlePlayerPawnSpawned();
	void HandleBotPlayerPawnSpawned(class UFortAthenaAIBotController* BotController, class UFortPlayerPawnAthena* BotPawn);
	double GetAugmentMatchDataCacheFloat(enum class EAugmentExecResult* OutExec, const struct FGameplayTag& TargetAugmentCacheTag);
	class UFortPlayerStateComponent_PlayerAugmentSystem* GetAugmentComponentValidated(enum class EAugmentExecResult* OutExec, class UActor* PlayerContextActor);
	class UFortPlayerStateComponent_PlayerAugmentSystem* GetAugmentComponent(class UActor* PlayerContextActor);
	TArray<class UFortPlayerAugmentItemDefinition*> GetActiveAugments(class UActor* Actor);
	void ClientClearMatchAugmentDataCache();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
