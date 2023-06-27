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

// 0x0 (0x28 - 0x28)
// Class ClamberingCodeRuntime.ClamberingAnalytics
class UClamberingAnalytics : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClamberingAnalytics");
		return Clss;
	}

};

// 0xA18 (0xAC0 - 0xA8)
// Class ClamberingCodeRuntime.ClamberingComponent
class UClamberingComponent : public UFortPawnOverrideComponent
{
public:
	uint8                                        Pad_7D90[0x8];                                     // Fixing Size After Last Property..
	enum class EClamberingState                  LocalClamberingState;                              // 0xB0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EClamberingState                  ReplicatedClamberingState;                         // 0xB1(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7D91[0x6];                                     // Fixing Size After Last Property..
	struct FClamberingTargetingData              LockedTargetingData;                               // 0xB8(0xD0)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FReplicatedClamberingTargetingData_SimClient ReplicatedTargetingData;                           // 0x188(0x38)(Net, Transient, RepNotify, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_7D92[0x8];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        ClamberingEnabled;                                 // 0x1C8(0x28)(Edit, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ClamberIndicatorEnabled;                           // 0x1F0(0x28)(Edit, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ClamberStartMaxFallingDamageFraction;              // 0x218(0x28)(Edit, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                         bPerformTargetingWhileWalking;                     // 0x240(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPerformTargetingWhileSwimming;                    // 0x241(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7D93[0x6];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        ServerFailDelay;                                   // 0x248(0x28)(Edit, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ServerValidatePlayerMaxDistance;                   // 0x270(0x28)(Edit, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FClamberingInputConfig                InputConfig;                                       // 0x298(0x210)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FClamberingTargetingConfig_Ledge      TargetingConfig_Ledge;                             // 0x4A8(0x320)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FClamberingTargetingConfig_Ledge_CachedContextualValues TargetingConfig_Ledge_CachedContextualValues;      // 0x7C8(0x14)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_7D94[0x4];                                     // Fixing Size After Last Property..
	struct FClamberingMovementConfig_Ledge       MoveConfig_Ledge;                                  // 0x7E0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ClamberSyncTargetLedgeOffset;                      // 0x830(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ClamberingMaxAnalyticsEvents;                      // 0x858(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SynchedActionFailDelay;                            // 0x880(0x28)(Edit, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	double                                       LastTeleportTime;                                  // 0x8A8(0x8)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bTutorialModeEnabled;                              // 0x8B0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7D95[0x7];                                     // Fixing Size After Last Property..
	struct FClamberingTargetingData              LocalTargetingData;                                // 0x8B8(0xD0)(Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FClamberingTargetingData              ParallelTargetingData;                             // 0x988(0xD0)(Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	float                                        QueuedInputTimer;                                  // 0xA58(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        InputEnabledTimer;                                 // 0xA5C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bJumpInputPressed;                                 // 0xA60(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7D96[0x3];                                     // Fixing Size After Last Property..
	float                                        JumpHeldInAirTime;                                 // 0xA64(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7D97[0x50];                                    // Fixing Size After Last Property..
	struct FGameplayTag                          Tag_DisableClambering;                             // 0xAB8(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7D98[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClamberingComponent");
		return Clss;
	}

	void UnregisterMutatorUpdatedDelegate();
	bool ShouldShowClamberIndicator();
	void SetTutorialModeEnabled(bool bEnabled);
	void ServerStartClambering(const struct FReplicatedClamberingTargetingData& InReplicatedTargetingData, double ClientLastTeleportTime);
	void RegisterMutatorUpdatedDelegate(class APawn* AffectedPawn);
	void OnRep_ReplicatedTargetingData();
	void OnRep_ReplicatedLastTeleportTime();
	void OnRep_ReplicatedClamberingState();
	void OnPlayerStatePawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);
	void OnMutatorUpdated();
	void NetMulticast_ClamberingLedgeFailed(enum class EClamberingFailedReason FailedReason, enum class EClamberingState FailedState);
	bool IsTutorialModeEnabled();
	bool IsClamberingEnabled();
	bool IsAutoClamberingEnabled();
	void HandleTargetingDataValid(struct FClamberingTargetingData& TargetingData);
	void HandleTargetingDataInvalid();
	void HandleTargetActorHealthChanged();
	void HandleTargetActorDestroyed(class AActor* Actor);
	void HandleOwnerTeleported(class AFortPawn* TeleportedOwner);
	void HandleOwnerMovementModeChanged(class ACharacter* Character, enum class EMovementMode PreviousMovementMode, uint8 PreviousCustomMode);
	void HandleOwnerJumpInput(bool bPressed);
	void HandleOwnerDied(class AFortPawn* DeadPawn);
	void HandleOwnerDBNO();
	void HandleOwnerASCInvalidated();
	void HandleOwnerASCInitialized(class UFortAbilitySystemComponent* AbilitySystemComponent, class AFortPlayerPawn* AffectedPawn);
	void HandleClamberingTargetOutOfActivationRange();
	void HandleClamberingTargetInActivationRange();
	void DrawDebugHUD(class AHUD* HUD, class UCanvas* Canvas);
	void BP_TutorialModeEnabled();
	void BP_TutorialModeDisabled();
	void BP_IsValidTargetActor(class AActor* TargetActor, bool* bIsValidTargetActor);
	void BP_HandleSynchedActionStarted(struct FSynchedActionInfo& SynchedActionInfo);
	void BP_HandleClamberingStateChanged(enum class EClamberingState OldClamberingState, enum class EClamberingState NewClamberingState);
	void BP_CanStartTargeting(bool* bCanStartTargeting);
	void BP_CanStartClambering(bool* bCanStartClambering);
};

// 0x0 (0x28 - 0x28)
// Class ClamberingCodeRuntime.ClamberingLibrary
class UClamberingLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClamberingLibrary");
		return Clss;
	}

	bool PerformClamberingTargeting(class ACharacter* Character, struct FClamberingTargetingData* OutTargetingData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
