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

// 0x168 (0x1740 - 0x15D8)
// Class KatanaGameplayRuntime.FortKatanaLayerAnimInstance
class UFortKatanaLayerAnimInstance : public UFortMantisLayerAnimInstance
{
public:
	bool                                         IsDashCharge;                                      // 0x15D8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4529[0x7];                                     // Fixing Size After Last Property..
	class UFortPlayerPawn*                       AsFortPlayerPawn;                                  // 0x15E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsBMeleeKatana;                                    // 0x15E8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_452A[0x3];                                     // Fixing Size After Last Property..
	float                                        HandIKHipAttachAlpha;                              // 0x15EC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               LeftAttachedHandIKLoc;                             // 0x15F0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              LeftAttachedhandIKRot;                             // 0x1608(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FVector                               RightWeaponLoc;                                    // 0x1620(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              RightWeaponRot;                                    // 0x1638(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FVector                               LeftAttachedHandIKLocOffsetMED;                    // 0x1650(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              LeftAttachedHandIKRotOffset;                       // 0x1668(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FVector                               RightWeaponLocOffsetMED;                           // 0x1680(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              RightWeaponRotOffset;                              // 0x1698(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        LocalLeftHandIKAlpha;                              // 0x16B0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LocalRightHandIKAlpha;                             // 0x16B4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsDashAttack;                                      // 0x16B8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsDashOutro;                                       // 0x16B9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_452B[0x2];                                     // Fixing Size After Last Property..
	float                                        PelvisAOAlpha;                                     // 0x16BC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ClampedAimPitch;                                   // 0x16C0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         EarlyExitFromDashOutro;                            // 0x16C4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsTechniqueActive;                                 // 0x16C5(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsPrimaryAttack;                                   // 0x16C6(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_452C[0x1];                                     // Fixing Size After Last Property..
	float                                        WeaponHipAttachAlpha;                              // 0x16C8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_452D[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               LeftAttachedHandIKLocOffsetLRG;                    // 0x16D0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               RightWeaponLocOffsetLRG;                           // 0x16E8(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FeetCorrectionAlpha;                               // 0x1700(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsInAirAttackLeap;                                 // 0x1704(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         ShouldStartDashOutro;                              // 0x1705(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         StartedDashOutro;                                  // 0x1706(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_452E[0x1];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        DashRootMotionDuration;                            // 0x1708(0x28)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	bool                                         IsPrimaryAttack2;                                  // 0x1730(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsAirAttackSlam;                                   // 0x1731(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         TransitionRuleToDefault;                           // 0x1732(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsGrindRailSwing;                                  // 0x1733(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DashChargePlayRate;                                // 0x1734(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_452F[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortKatanaLayerAnimInstance");
		return Clss;
	}

};

// 0x158 (0x1730 - 0x15D8)
// Class KatanaGameplayRuntime.FortKatanaWeaponAnimInstance
class UFortKatanaWeaponAnimInstance : public UFortMantisLayerAnimInstance
{
public:
	class UFortPlayerPawn*                       AsFortPlayerPawn;                                  // 0x15D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortWeapon*                           BMeleeKatanaAsWeapon;                              // 0x15E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsBMeleeKatana;                                    // 0x15E8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4530[0x3];                                     // Fixing Size After Last Property..
	float                                        LocalLeftHandIKAlpha;                              // 0x15EC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LocalRightHandIKAlpha;                             // 0x15F0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsDashCharge;                                      // 0x15F4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsDashAttack;                                      // 0x15F5(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4531[0x2];                                     // Fixing Size After Last Property..
	float                                        SwordPlayRate;                                     // 0x15F8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsInAirAttack_Leap;                                // 0x15FC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsInAirAttack_Slam;                                // 0x15FD(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4532[0x2];                                     // Fixing Size After Last Property..
	class UFortKatanaLayerAnimInstance*          KatanaPlayer;                                      // 0x1600(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         EarlyExitFromDashOutro;                            // 0x1608(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsDashOutro;                                       // 0x1609(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4533[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               ScabbardLoc;                                       // 0x1610(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              ScabbardRot;                                       // 0x1628(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FVector                               ScabbardLocOffset;                                 // 0x1640(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              ScabbardRotOffset;                                 // 0x1658(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         IsSurfaceSwimming;                                 // 0x1670(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsTechniqueActive;                                 // 0x1671(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4534[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               SwordLoc;                                          // 0x1678(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              SwordRot;                                          // 0x1690(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FVector                               SwordLocOffset;                                    // 0x16A8(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              SwordRotOffset;                                    // 0x16C0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         IsRidingSwing;                                     // 0x16D8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsPrimaryAttack;                                   // 0x16D9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsPrimaryAttack2;                                  // 0x16DA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         ExitFromPrimaryAttack;                             // 0x16DB(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         ExitFromPrimaryAttack2;                            // 0x16DC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         NonPrimaryAttackState;                             // 0x16DD(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsComboAttack;                                     // 0x16DE(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         TransitionRuleToDefaultPose;                       // 0x16DF(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         ExitFromInAirLand;                                 // 0x16E0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsGrindRailSwing;                                  // 0x16E1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4535[0x2];                                     // Fixing Size After Last Property..
	int32                                        CurrentTechniqueBranch;                            // 0x16E4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PreviousTechniqueBranch;                           // 0x16E8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  PelvisSocket;                                      // 0x16EC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               ScabbardLocOffsetVeh;                              // 0x16F0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              ScabbardRotOffsetVeh;                              // 0x1708(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        DashChargePlayRate;                                // 0x1720(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4536[0xC];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortKatanaWeaponAnimInstance");
		return Clss;
	}

};

// 0x250 (0x2F0 - 0xA0)
// Class KatanaGameplayRuntime.KatanaTargetingComponent
class UKatanaTargetingComponent : public UFortWeaponComponent
{
public:
	TSubclassOf<class UGameplayAbility>          KatanaTechniqueAbilityClass;                       // 0xA0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortGameplayAbility*                  CachedTechniqueAbilityCDO;                         // 0xA8(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        DashDistance;                                      // 0xB0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AdditionalDashForwardAttackRange;                  // 0xD8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AdditionalOutOfRangeDetection;                     // 0x100(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DashOffsetFromTarget;                              // 0x128(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        PropRemainingHealthToDestroy;                      // 0x150(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BuildingRemainingHealthToDestroy;                  // 0x178(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 DashBlockingBuildingTags;                          // 0x1A0(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSet<TSubclassOf<class UBuildingActor>>      DashBlockingBuildingClasses;                       // 0x1C0(0x50)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FFortAbilityTargetSelectionList       PawnTargetSelectionList;                           // 0x210(0x48)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	enum class ECollisionChannel                 DashTraceChannel;                                  // 0x258(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4539[0x3];                                     // Fixing Size After Last Property..
	float                                        ObstructionOverlapBoxHalfSize;                     // 0x25C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFortTargetFilter                     ObstructionTargetFilter;                           // 0x260(0x38)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<enum class EFortKatanaPrimaryAttackVariation, struct FFortKatanaPrimaryAttackVariationInfo> PrimaryAttackVariationInfos;                       // 0x298(0x50)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                        PrimaryAttackMinForwardMovement;                   // 0x2E8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECollisionChannel                 PrimaryAttackObstructionTraceChannel;              // 0x2EC(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_453A[0x3];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("KatanaTargetingComponent");
		return Clss;
	}

	struct FVector PerformPrimaryAttackTargeting(enum class EFortKatanaPrimaryAttackVariation AttackVariation);
	bool PerformDashTargeting(struct FFortKatanaDashTargetingInfo* OutDashTargetingInfo);
};

// 0x8 (0x128 - 0x120)
// Class KatanaGameplayRuntime.AbilityTask_ApplyRootMotion_KatanaDashForce
class UAbilityTask_ApplyRootMotion_KatanaDashForce : public UAbilityTask_ApplyRootMotionMoveToForce
{
public:
	float                                        HeightAboveGround;                                 // 0x120(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_453F[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityTask_ApplyRootMotion_KatanaDashForce");
		return Clss;
	}

	class UAbilityTask_ApplyRootMotion_KatanaDashForce* ApplyRootMotion_KatanaDashForce(class UGameplayAbility* InOwningAbility, class FName InTaskInstanceName, const struct FVector& InTargetLocation, float InDuration, float InHeightAboveGround, bool bInSetNewMovementMode, enum class EMovementMode InMovementMode, bool bInRestrictSpeedToExpected, class UCurveVector* InPathOffsetCurve, enum class ERootMotionFinishVelocityMode InVelocityOnFinishMode, const struct FVector& InSetVelocityOnFinish, float InClampVelocityOnFinish);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
