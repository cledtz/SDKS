#pragma once

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

// 0xB18 (0xBC0 - 0xA8)
// Class ClamberingCodeRuntime.ClamberingComponent
class UClamberingComponent : public UFortPawnOverrideComponent
{
public:
	uint8                                        Pad_3B39[0x8];                                     // Fixing Size After Last Property
	enum class EClamberingState                  LocalClamberingState;                              // 0xB0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EClamberingState                  ReplicatedClamberingState;                         // 0xB1(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B3B[0x6];                                     // Fixing Size After Last Property
	struct FClamberingTargetingData              LockedTargetingData;                               // 0xB8(0xD0)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FReplicatedClamberingTargetingData_SimClient ReplicatedTargetingData;                           // 0x188(0x38)(Net, Transient, RepNotify, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B3C[0x8];                                     // Fixing Size After Last Property
	struct FScalableFloat                        ClamberingEnabled;                                 // 0x1C8(0x28)(Edit, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ClamberIndicatorEnabled;                           // 0x1F0(0x28)(Edit, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ClamberStartMaxFallingDamageFraction;              // 0x218(0x28)(Edit, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                         bPerformTargetingWhileWalking;                     // 0x240(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPerformTargetingWhileSwimming;                    // 0x241(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B3F[0x6];                                     // Fixing Size After Last Property
	struct FScalableFloat                        ServerFailDelay;                                   // 0x248(0x28)(Edit, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ServerValidatePlayerMaxDistance;                   // 0x270(0x28)(Edit, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FClamberingInputConfig                InputConfig;                                       // 0x298(0x210)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FClamberingTargetingConfig_Ledge      TargetingConfig_Ledge;                             // 0x4A8(0x378)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FClamberingInputConfig_CachedValues   InputConfigCachedValues;                           // 0x820(0x38)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FClamberingTargetingConfig_Ledge_CachedContextualValues TargetingConfig_Ledge_CachedContextualValues;      // 0x858(0x60)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FClamberingMovementConfig_Ledge       MoveConfig_Ledge;                                  // 0x8B8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ClamberSyncTargetLedgeOffset;                      // 0x908(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ClamberingMaxAnalyticsEvents;                      // 0x930(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SynchedActionFailDelay;                            // 0x958(0x28)(Edit, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UDataTable*                            ClamberingAnimations;                              // 0x980(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                            PrototypeClamberingAnimations;                     // 0x988(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                       LastTeleportTime;                                  // 0x990(0x8)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bTutorialModeEnabled;                              // 0x998(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B42[0x7];                                     // Fixing Size After Last Property
	struct FClamberingTargetingData              LocalTargetingData;                                // 0x9A0(0xD0)(Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FClamberingTargetingData              ParallelTargetingData;                             // 0xA70(0xD0)(Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	float                                        QueuedInputTimer;                                  // 0xB40(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        InputEnabledTimer;                                 // 0xB44(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bJumpInputPressed;                                 // 0xB48(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3B43[0x3];                                     // Fixing Size After Last Property
	float                                        JumpHeldInAirTime;                                 // 0xB4C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3B44[0x68];                                    // Fixing Size After Last Property
	struct FGameplayTag                          Tag_DisableClambering;                             // 0xBB8(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3B45[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClamberingComponent");
		return Clss;
	}

	void UnregisterMutatorUpdatedDelegate();
	bool ShouldShowClamberIndicator();
	void SetTutorialModeEnabled(bool bEnabled);
	void ServerStartClambering(const struct FReplicatedClamberingTargetingData& InReplicatedTargetingData, double ClientLastTeleportTime);
	void RegisterMutatorUpdatedDelegate(class UPawn* AffectedPawn);
	void OnRep_ReplicatedTargetingData();
	void OnRep_ReplicatedLastTeleportTime();
	void OnRep_ReplicatedClamberingState();
	void OnPlayerStatePawnSet(class UPlayerState* Player, class UPawn* NewPawn, class UPawn* OldPawn);
	void OnMutatorUpdated();
	void NetMulticast_ClamberingLedgeFailed(enum class EClamberingFailedReason FailedReason, enum class EClamberingState FailedState);
	bool IsTutorialModeEnabled();
	bool IsClamberingEnabled();
	bool IsAutoClamberingEnabled();
	void HandleTargetingDataValid(struct FClamberingTargetingData& TargetingData);
	void HandleTargetingDataInvalid();
	void HandleTargetActorHealthChanged();
	void HandleTargetActorDestroyed(class UActor* Actor);
	void HandleOwnerTeleported(class UFortPawn* TeleportedOwner);
	void HandleOwnerMovementModeChanged(class UCharacter* Character, enum class EMovementMode PreviousMovementMode, uint8 PreviousCustomMode);
	void HandleOwnerJumpInput(bool bPressed);
	void HandleOwnerDied(class UFortPawn* DeadPawn);
	void HandleOwnerDBNO();
	void HandleOwnerASCInvalidated();
	void HandleOwnerASCInitialized(class UFortAbilitySystemComponent* AbilitySystemComponent, class UFortPlayerPawn* AffectedPawn);
	void HandleClamberingTargetOutOfActivationRange();
	void HandleClamberingTargetInActivationRange();
	class UAnimMontage* GetAnimMontage(float* OutPlayRate);
	void DrawDebugHUD(class UHUD* HUD, class UCanvas* Canvas);
	void BP_TutorialModeEnabled();
	void BP_TutorialModeDisabled();
	void BP_IsValidTargetActor(class UActor* TargetActor, bool* bIsValidTargetActor);
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

	bool PerformClamberingTargeting(class UCharacter* Character, struct FClamberingTargetingData* OutTargetingData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
