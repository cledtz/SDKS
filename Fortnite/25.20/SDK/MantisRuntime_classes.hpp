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

// 0x8 (0x15D8 - 0x15D0)
// Class MantisRuntime.FortMantisLayerAnimInstance
class UFortMantisLayerAnimInstance : public UFortPlayerAnimInstanceProxy
{
public:
	struct FFortMantisReplicatedAnimInstanceInfo MantisAnimInstanceInfo;                            // 0x15C8(0x10)(BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMantisLayerAnimInstance");
		return Clss;
	}

	void OnMantisTechniqueStarted(int32 TechniqueIndex, class FName TechniqueName);
	void OnMantisTechniqueEnded(int32 TechniqueIndex, class FName TechniqueName);
};

// 0x98 (0x760 - 0x6C8)
// Class MantisRuntime.FortItemLayerAnimInstance_UncleBrolly
class UFortItemLayerAnimInstance_UncleBrolly : public UFortItemLayerAnimInstance
{
public:
	struct FCachedAnimStateArray                 UmbrellaGliderOpenStateDataArray;                  // 0x6C8(0x18)(Edit, NativeAccessSpecifierPublic)
	struct FVector                               WrapTranslation;                                   // 0x6E0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              WrapRotation;                                      // 0x6F8(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              RootRotationOffset;                                // 0x710(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        LandingPredictedTimer;                             // 0x728(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldUpdateYawCorrection;                        // 0x72C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasAcceleratingBeforeDodge;                       // 0x72D(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E78[0x2];                                     // Fixing Size After Last Property..
	float                                        UncleBrollyDeployCurveValue;                       // 0x730(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DashChargeTier;                                    // 0x734(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DashChargeAdditivePlayrate;                        // 0x738(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsUmbrellaFailing;                                // 0x73C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMeleeGuarding;                                  // 0x73D(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSprinting;                                      // 0x73E(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInAir;                                          // 0x73F(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLandingPredicted;                               // 0x740(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsJumping;                                        // 0x741(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDodging;                                        // 0x742(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDodgingEast;                                    // 0x743(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDodgingSouth;                                   // 0x744(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDodgingWest;                                    // 0x745(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDashing;                                        // 0x746(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDashCharging;                                   // 0x747(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDashPredictingEnd;                              // 0x748(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsChargeTier1;                                    // 0x749(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsChargeTier2;                                    // 0x74A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsChargeTier3;                                    // 0x74B(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMeleeGuardingOrUmbrellaFailing;                   // 0x74C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTransition_Default_to_GuardLoop;                  // 0x74D(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTransition_Default_to_GuardIntro;                 // 0x74E(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTransition_GuardIntro_to_Default;                 // 0x74F(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpperBodyShouldPassThrough;                       // 0x750(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUmbrellaGliderIsOpen;                             // 0x751(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E79[0xE];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemLayerAnimInstance_UncleBrolly");
		return Clss;
	}

};

// 0x40 (0x390 - 0x350)
// Class MantisRuntime.UncleBrollyWeaponAnimInstance
class UUncleBrollyWeaponAnimInstance : public UAnimInstance
{
public:
	TSubclassOf<class UAnimInstance>             UncleBrollyItemLayer;                              // 0x348(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              UmbrellaRotation;                                  // 0x350(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        UmbrellaSpinSpeed;                                 // 0x368(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlockDeployEndPlayrate;                            // 0x36C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlockDeployEndStartPosition;                       // 0x370(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDodging;                                        // 0x374(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPlayingMeleeAnim;                               // 0x375(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsUmbrellaFailing;                                // 0x376(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMeleeGuarding;                                  // 0x377(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInAir;                                          // 0x378(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDashing;                                        // 0x379(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSprinting;                                      // 0x37A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPredictingEnd;                                  // 0x37B(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDashCharging;                                   // 0x37C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDashPredictingEnd;                              // 0x37D(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInAirAndMeleeGuarding;                            // 0x37E(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTransition_Default_to_DeployStart;                // 0x37F(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTransition_DeployStart_to_Default;                // 0x380(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTransition_Fail_to_FailToDeploy;                  // 0x381(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTransition_FailLoop_to_DeployEnd;                 // 0x382(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E7A[0xD];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UncleBrollyWeaponAnimInstance");
		return Clss;
	}

};

// 0x48 (0x100 - 0xB8)
// Class MantisRuntime.FortAbilityTask_ApplyRootMotionMantisForce
class UFortAbilityTask_ApplyRootMotionMantisForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	FMulticastInlineDelegateProperty_            OnFinish;                                          // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0xC8(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7E7B[0x4];                                     // Fixing Size After Last Property..
	class UAnimMontage*                          TechniqueMontage;                                  // 0xD0(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFortMantisRootMotionWarpInfo         WarpInfo;                                          // 0xD8(0x28)(Net, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAbilityTask_ApplyRootMotionMantisForce");
		return Clss;
	}

};

// 0x8 (0x40 - 0x38)
// Class MantisRuntime.FortAnimNotify_Mantis
class UFortAnimNotify_Mantis : public UAnimNotify
{
public:
	enum class EFortMantisNotifyEvent            MantisNotifyEvent;                                 // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMantisBranchRule             MantisBranchRule;                                  // 0x39(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMantisBranchPath             MantisBranchPath;                                  // 0x3A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E7C[0x5];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAnimNotify_Mantis");
		return Clss;
	}

};

// 0x10 (0x40 - 0x30)
// Class MantisRuntime.FortAnimNotifyState_Mantis
class UFortAnimNotifyState_Mantis : public UAnimNotifyState
{
public:
	enum class EFortMantisNotifyWindow           MantisNotifyWindow;                                // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E7D[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          MantisNotifyTag;                                   // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMantisNotifyRotationWarpRateRule RotationRateWarpRule;                              // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bWarpRotation : 1;                                 // Mask: 0x1, PropSize: 0x10x39(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bWarpTranslation : 1;                              // Mask: 0x2, PropSize: 0x10x39(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E7E[0x6];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAnimNotifyState_Mantis");
		return Clss;
	}

};

// 0x48 (0xB70 - 0xB28)
// Class MantisRuntime.FortGameplayAbility_Mantis
class UFortGameplayAbility_Mantis : public UFortGameplayAbility
{
public:
	bool                                         bAllowRootMotionWarping;                           // 0xB28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bApplyEffectContainerOnTechniqueDamage;            // 0xB29(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bApplyEffectContainerOnTechniqueStart;             // 0xB2A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7E87[0x5];                                     // Fixing Size After Last Property..
	class UFortMantisPawnComponent*              MantisPawnComponent;                               // 0xB30(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAbilityTask_PlayMontageAndWait*       MontageTask;                                       // 0xB38(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAbilityTask_ApplyRootMotion_Base*     RootMotionTask;                                    // 0xB40(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7E88[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGameplayAbility_Mantis");
		return Clss;
	}

	void OnMontageFinished();
	void OnMontageCancelled();
	int32 GetLevelForGameplayEffectContainer(const struct FGameplayTag& ApplicationTag);
	class FName GetDynamicMontageNameForTechnique(class FName TechniqueName);
	void FillMetadataForTechnique(class FName TechniqueName, struct FFortMantisTechniqueMetadata* OutTechniqueMetadata);
	void ConfigureRootMotionWarping(class FName TechniqueName, bool* bOutAllowTranslationWarp, bool* bOutAllowRotationWarp, class AActor** OutTargetActor, bool* bOutSnapshotTargetActorLocation, bool* bOutWarpTranslationToLocation, struct FVector* OutTargetLocation);
	void BP_OnTechniqueNotifyWindowStarted(enum class EFortMantisNotifyWindow NotifyWindow, class UFortAnimNotifyState_Mantis* Notify);
	void BP_OnTechniqueNotifyWindowEnded(enum class EFortMantisNotifyWindow NotifyWindow, class UFortAnimNotifyState_Mantis* Notify);
	void BP_OnTechniqueNotifyEvent(enum class EFortMantisNotifyEvent NotifyEvent, class UFortAnimNotify_Mantis* Notify);
	void BP_OnMantisTechniqueHit(struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTag& ApplicationTag);
	void BP_OnMantisInputEvent(enum class EFortMantisTechniqueActivationInputType InputType, enum class EFortMantisTechniqueActivationTimingType InputTiming, bool bDidInputStartTechnique, bool bDidInputQueueTechnique, float InputHeldDuration);
	void BP_MantisAbilityTechniqueStarted(const struct FGameplayTagContainer& OwningTags, class FName SequenceName, bool StartsSequence, bool EndsSequence);
};

// 0x40 (0x70 - 0x30)
// Class MantisRuntime.FortMantisData
class UFortMantisData : public UDataAsset
{
public:
	bool                                         bShowTargetHealthBar;                              // 0x30(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E89[0x7];                                     // Fixing Size After Last Property..
	TSubclassOf<class UFortGameplayAbility_Mantis> TechniqueAbility;                                  // 0x38(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortGameplayEffectContainer>  TechniqueAdditionEffectContainers;                 // 0x40(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FFortMantisTechniqueData>      Techniques;                                        // 0x50(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FFortMantisTechniqueBranch>    Branches;                                          // 0x60(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMantisData");
		return Clss;
	}

};

// 0x3A8 (0x448 - 0xA0)
// Class MantisRuntime.FortMantisPawnComponent
class UFortMantisPawnComponent : public UPawnComponent
{
public:
	FMulticastInlineDelegateProperty_            OnTechniqueMetadataReady;                          // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E8E[0xC8];                                    // Fixing Size After Last Property..
	TMap<class UAnimMontage*, struct FFortMantisMontageData> MontageDataMap;                                    // 0x178(0x50)(Protected, NativeAccessSpecifierProtected)
	class UFortMantisData*                       MantisData;                                        // 0x1C8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AFortWeapon*                           Weapon;                                            // 0x1D0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7E8F[0x270];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMantisPawnComponent");
		return Clss;
	}

	bool TryManuallyStartTechnique(int32 TechniqueDataIndex);
	bool TryManuallyEndCurrentTechnique();
	void SimulateInputEvent(enum class EFortMantisTechniqueActivationInputType InputType, enum class EFortMantisTechniqueActivationTimingType InputTiming, bool bForceProcessEvent);
	void SetLockOnState(bool bEnabled, class AActor* TargetActor);
	void SetBranchRule(enum class EFortMantisBranchRule InBranchRule, enum class EFortMantisBranchPath InBranchPath);
	void OnPostPhysicsRotation(class UCharacterMovementComponent* CharMoveComp, float DeltaSeconds);
	void OnOwnerWeaponHolstered();
	void OnCharacterMovementPreUpdate(class UCharacterMovementComponent* CharMoveComp, float DeltaSeconds);
	bool IsSpecificInputPressed(enum class EFortMantisTechniqueActivationInputType InputType);
	bool IsPerformingLockOn();
	bool HasLockOnTarget();
	bool HasCurrentTechniqueMetadataBeenSet();
	class AActor* GetLockOnTarget();
	struct FFortMantisTechniqueMetadata GetCurrentTechniqueMetadata();
};

// 0x40 (0xE0 - 0xA0)
// Class MantisRuntime.FortMantisWeaponComponent
class UFortMantisWeaponComponent : public UFortWeaponComponent
{
public:
	class UFortMantisData*                       MantisData;                                        // 0xA0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowPrimaryFireInputsWhileHolstered;             // 0xA8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowSecondaryFireInputsWhileHolstered;           // 0xA9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7E91[0x2];                                     // Fixing Size After Last Property..
	TWeakObjectPtr<class UFortMantisPawnComponent> MantisPawnComponent;                               // 0xAC(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7E92[0xC];                                     // Fixing Size After Last Property..
	struct FFortMantisReplicatedAnimInstanceInfo AnimInstanceInfo;                                  // 0xC0(0x10)(Net, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFortMantisReplicatedAnimInstanceInfo ReplayAnimInstanceInfo;                            // 0xD0(0x10)(Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMantisWeaponComponent");
		return Clss;
	}

	void OnWeaponAbilitiesRemoved(class AFortWeapon* Weapon, enum class EFortWeaponAbilityRemovalReason RemovalReason);
	void OnUnEquip(class AFortWeapon* Weapon);
	void OnRep_ReplayAnimInstanceInfo();
	void OnReleaseTrigger(class AFortWeapon* Weapon);
	void OnReleaseSecondaryFire(class AFortWeapon* Weapon);
	void OnPressTrigger(class AFortWeapon* Weapon);
	void OnPressSecondaryFire(class AFortWeapon* Weapon);
	void OnEquip(class AFortWeapon* Weapon);
	struct FFortMantisReplicatedAnimInstanceInfo GetAnimInstanceInfo();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
