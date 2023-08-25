#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C0 (0xAD0 - 0x810)
// Class RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding
class UFortVehicleLayerAnimInstance_Riding : public UFortVehicleOccupantAnimInstance
{
public:
	struct FCachedAnimRelevancyData              IntoVehicleCachedData;                             // 0x810(0x14)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FCachedAnimRelevancyData              OutOfVehicleCachedData;                            // 0x824(0x14)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        InTime;                                            // 0x838(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutTime;                                           // 0x83C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BodyYawOffset;                                     // 0x840(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32D2[0x4];                                     // Fixing Size After Last Property 
	struct FRotator                              BodyCounterRotation;                               // 0x848(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        BodyCounterRotationAlpha;                          // 0x860(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsReloading;                                      // 0x864(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTargeting;                                      // 0x865(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFiring;                                         // 0x866(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsUsingConsumable;                                // 0x867(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInAction;                                       // 0x868(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsThrowConsumable;                                // 0x869(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTargetingOrThrowingConsumable;                  // 0x86A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTurningInPlace;                                 // 0x86B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRidingSprinting;                                // 0x86C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRidingPetting;                                  // 0x86D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32D4[0x2];                                     // Fixing Size After Last Property 
	float                                        TurnInPlaceRotationSpeed;                          // 0x870(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TurnInPlaceAngleDelta;                             // 0x874(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRidingMovingBackward;                           // 0x878(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSlopeSliding;                                   // 0x879(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32D8[0x2];                                     // Fixing Size After Last Property 
	float                                        SlopeSlidingPitch;                                 // 0x87C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlopeSlidingRoll;                                  // 0x880(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RiderReferentialRidableYaw;                        // 0x884(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AimYawDegreesCoverage;                             // 0x888(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SmoothedAimYaw;                                    // 0x88C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bJustEntered;                                      // 0x890(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRidableMoving;                                  // 0x891(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRideMode;                                       // 0x892(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32DA[0x1];                                     // Fixing Size After Last Property 
	float                                        RidableVelocity;                                   // 0x894(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BodyYaw;                                           // 0x898(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostPlayRate;                                     // 0x89C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RidingMovePlayRate;                                // 0x8A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FalseBlendTime;                                    // 0x8A4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CombatToRideYaw;                                   // 0x8A8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InPlaceYaw;                                        // 0x8AC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeadAOAlpha;                                       // 0x8B0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32DD[0x4];                                     // Fixing Size After Last Property 
	struct FRotator                              MeleeTwistRot;                                     // 0x8B8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bIsDualWield;                                      // 0x8D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsOneHandedDualWield;                             // 0x8D1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTwoHandedSword;                                 // 0x8D2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldAdjustBodyTwistForMelee;                    // 0x8D3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32E1[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               PlayerOffset;                                      // 0x8D8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoiseAlpha;                                        // 0x8F0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLobsterBlockActive;                             // 0x8F4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32E3[0x3];                                     // Fixing Size After Last Property 
	float                                        SlopePitch;                                        // 0x8F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RiderHeightAdjustmentSpringConstant;               // 0x8FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinSlopePitchForRiderHeightAdjustment;             // 0x900(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSlopePitchForRiderHeightAdjustment;             // 0x904(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RiderHeightAdjustmentForMinSlopePitch;             // 0x908(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RiderHeightAdjustmentForMaxSlopePitch;             // 0x90C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PettingRotAlpha;                                   // 0x910(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32E7[0x4];                                     // Fixing Size After Last Property 
	struct FRotator                              PettingRot;                                        // 0x918(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        PettingPitchFactor;                                // 0x930(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PettingRollFactor;                                 // 0x934(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HandAttachLeft;                                    // 0x938(0x18)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HandAttachRight;                                   // 0x950(0x18)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HandAttachAlpha;                                   // 0x968(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERidingFootPhase                  FootPhase;                                         // 0x96C(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFootPhase_FeetInAir;                            // 0x96D(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFootPhase_FrontFeetPlanted;                     // 0x96E(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFootPhase_BackFeetPlanted;                      // 0x96F(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFootPhase_LeftBackFeetForward;                  // 0x970(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFootPhase_RightBackFeetForward;                 // 0x971(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFootPhase_LeftPlantedRightPass;                 // 0x972(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFootPhase_RightPlantedLeftPass;                 // 0x973(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TurnInPlaceModulatedSpeed;                         // 0x974(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTurnInPlaceAngleDeltaPositive;                  // 0x978(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32F2[0x3];                                     // Fixing Size After Last Property 
	float                                        SlopeRoll;                                         // 0x97C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MovingVelocityLowerBound;                          // 0x980(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        JustEnteredDelayTimeSec;                           // 0x984(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FalseBlendTime_Moving;                             // 0x988(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FalseBlendTime_NotMoving;                          // 0x98C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PlayerOffsetMale;                                  // 0x990(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PlayerOffsetFemale;                                // 0x9A8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       ScytheMontage;                                     // 0x9C0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       BRSwordMontage;                                    // 0x9D8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortWeaponCoreAnimation          MeleeDualWieldCoreAnimation;                       // 0x9F0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32F6[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               SlopePitchTraceStart;                              // 0x9F8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SlopePitchTraceEnd;                                // 0xA10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HandAttachLocationLeftMale;                        // 0xA28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HandAttachLocationRightMale;                       // 0xA40(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HandAttachLocationLeftFemale;                      // 0xA58(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HandAttachLocationRightFemale;                     // 0xA70(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PlayerHandAttachLeft;                              // 0xA88(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PlayerHandAttachRight;                             // 0xA8C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DisableHandAttachCurveName;                        // 0xA90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AllowRidingNoiseAdditiveCurveName;                 // 0xA94(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32F9[0x38];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortVehicleLayerAnimInstance_Riding* GetDefaultObj();

	void UpdateSlopePitchForRiding();
	void UpdateBoostPlayRate();
	void SetFootPhase(enum class ERidingFootPhase InFootPhase);
	void PlaceHandIKTargets();
	void BlueprintCollectRidableAnimBPData(class UAnimInstance* RidableAnimInstance);
};

// 0x0 (0x28 - 0x28)
// Class RidingCodeRuntime.RidingCheatManager
class URidingCheatManager : public UChildCheatManager
{
public:

	static class UClass* StaticClass();
	static class URidingCheatManager* GetDefaultObj();

	void StopRidingActor();
	void StartRidingActor();
	void RidingSetStaminaPercent(float StaminaPercent);
};

// 0x340 (0x3E0 - 0xA0)
// Class RidingCodeRuntime.RidableComponent
class URidableComponent : public UGameFrameworkComponent
{
public:
	uint8                                        Pad_332A[0x8];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnRiderStartedRiding;                              // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRiderStoppedRiding;                              // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TSubclassOf<class UAnimInstance>             RiderAnimLayerOverlayClass;                        // 0xC8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  AttachSocket;                                      // 0xD0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_332B[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               AttachLocationOffset;                              // 0xD8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              AttachRotationOffset;                              // 0xF0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class FName                                  ClientAttachGuideSocket;                           // 0x108(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_332C[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               ClientAttachGuideLocationOffset;                   // 0x110(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  RidablePropAttachSocket;                           // 0x128(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_332D[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               RidablePropAttachLocationOffset;                   // 0x130(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              RidablePropAttachRotationOffset;                   // 0x148(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        RidablePropAttachScale;                            // 0x160(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RidablePropAttachRiderVerticalBuffer;              // 0x164(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRidingAttachmentBoundsOverride       RiderPropAttachBoundsOverride;                     // 0x168(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bOverrideNoiseGeneration;                          // 0x1A0(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_332F[0x3];                                     // Fixing Size After Last Property 
	struct FFortPlayerPawnAthenaMovementNoiseOverride RiderMovementNoiseOverride;                        // 0x1A4(0xC)(Edit, Config, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortCameraMode_Riding>    CameraModeClassOverride;                           // 0x1B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortCameraMode_Riding>    SprintCameraModeClassOverride;                     // 0x1B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        UseTargetingAdditionalViewTargetSpaceViewOffsetOverride; // 0x1C0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FInterpOffset                         TargetingAdditionalViewTargetSpaceViewOffsetOverride; // 0x1E8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FVector                               WeaponTargetingSourceOffsetModifier;               // 0x1F8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          RidableTag;                                        // 0x210(0x4)(Edit, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          EnergyDepletedTag;                                 // 0x214(0x4)(Edit, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   PlaylistTagBlacklistRowHandle;                     // 0x218(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class URiderComponent*                       ActiveRider;                                       // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URiderComponent*                       LastRider;                                         // 0x230(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USceneComponent*                       RidableProp;                                       // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        OriginalCapsuleRadius;                             // 0x240(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        OriginalCapsuleHalfHeight;                         // 0x244(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RidingCapsuleRadius;                               // 0x248(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RidingCapsuleHalfHeight;                           // 0x24C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOriginalClientPositionSmoothingThrottlingSetting; // 0x250(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3339[0x7];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        MaxHalfAimingAngle;                                // 0x258(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	TArray<struct FPrimaryFireAnimMontageAnimCoreTypeOverride> PrimaryFireMontageAnimCoreTypeOverrides;           // 0x280(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FPrimaryFireAnimMontageTagOverride> PrimaryFireMontageTagOverrides;                    // 0x290(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FRidingPettingData                    PettingData;                                       // 0x2A0(0x110)(Edit, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FTimerHandle                          RestoreCollisionHandle;                            // 0x3B0(0x8)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_333A[0x10];                                    // Fixing Size After Last Property 
	bool                                         bIsSprinting;                                      // 0x3C8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_333B[0x17];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class URidableComponent* GetDefaultObj();

	bool ShouldCameraFocusOnRidable(class URiderComponent* Rider);
	void OnRep_ActiveRider();
	bool IsSprinting();
	bool IsFlying();
	bool IsBeingRidden();
	void HandleRiderStoppedRiding(class URiderComponent* Rider);
	void HandleRiderStartedRiding(class URiderComponent* Rider);
	void HandleRiderEndPlay(class UActor* Actor, enum class EEndPlayReason EndPlayReason);
	void GetRidingEmoteCapsuleSize(class URiderComponent* Rider, float OriginalRadius, float OriginalHalfHeight, float* OutRadius, float* OutHalfHeight);
	void GetRidingCapsuleSize(class URiderComponent* Rider, float OriginalRadius, float OriginalHalfHeight, float* OutRadius, float* OutHalfHeight);
	class USceneComponent* GetRidingAttachComponent();
	struct FRidingPettingData GetPettingData();
	void CheatSetStaminaPercent(float StaminaPercent);
	bool CanRiderPlayEmote(class URiderComponent* Rider);
	bool CanBeRiddenBP(class URiderComponent* Rider);
	bool CanBePet(class URiderComponent* Rider);
};

// 0x2D0 (0x6B0 - 0x3E0)
// Class RidingCodeRuntime.ControllableRidableComponent
class UControllableRidableComponent : public URidableComponent
{
public:
	bool                                         bUseGravityJump;                                   // 0x3E0(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsControllable;                                   // 0x3E1(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasAbility;                                       // 0x3E2(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_335A[0x5];                                     // Fixing Size After Last Property 
	class FText                                  AbilityDisplayText;                                // 0x3E8(0x18)(Edit, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                         bCanJump;                                          // 0x400(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAlwaysMoveForward;                                // 0x401(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_335B[0x2];                                     // Fixing Size After Last Property 
	float                                        ForwardMoveSpeedMultiplier;                        // 0x404(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BackwardMoveSpeedMultiplier;                       // 0x408(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SidewaysMoveRotationOffset;                        // 0x40C(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortMovementUrgency              MovementUrgency;                                   // 0x410(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsBeingControlled;                                // 0x411(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_335D[0x1E];                                    // Fixing Size After Last Property 
	struct FRidableControlParams                 RidableControlParams;                              // 0x430(0x208)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_335E[0x28];                                    // Fixing Size After Last Property 
	struct FScalableFloat                        JumpUpwardGravityScale;                            // 0x660(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        JumpDownwardGravityScale;                          // 0x688(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UControllableRidableComponent* GetDefaultObj();

	void ServerDoJumpExit();
	void OnRep_IsBeingControlled();
	void OnCapsuleBeginOverlap(class UPrimitiveComponent* OverlappedComp, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	bool IsSprintToggleable();
	void HandleJumpStopped();
	void HandleJumpStarted();
	void HandleJumpHeld();
	void HandleCancelSprint(bool bAbilityInputHeld, bool bForceCancel);
	void HandleAbilityStopped();
	void HandleAbilityStarted();
	void HandleAbilityHeld();
	class FText GetAbilityDisplayText();
	bool CanStartSprinting();
	void CancelBuildBar();
	bool CanBeControlled(class URiderComponent* Rider);
};

// 0x5C8 (0x670 - 0xA8)
// Class RidingCodeRuntime.RiderComponent
class URiderComponent : public UFortPawnOverrideComponent
{
public:
	uint8                                        Pad_339F[0x8];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnStartedRiding;                                   // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStoppedRiding;                                   // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortCameraMode_Riding>    RidingCameraModeClass;                             // 0xD0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortCameraMode_Riding>    RidingSprintCameraModeClass;                       // 0xD8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RidingCameraModeBlendTime;                         // 0xE0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_33A3[0x4];                                     // Fixing Size After Last Property 
	struct FInterpOffset                         TargetingAdditionalViewTargetSpaceViewOffset;      // 0xE8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class USceneComponent>           RiderPropClass;                                    // 0xF8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class USceneComponent>           RidablePropClass;                                  // 0x100(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               RiderPropAttachLocationOffset;                     // 0x108(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              RiderPropAttachRotationOffset;                     // 0x120(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        RiderPropAttachScale;                              // 0x138(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  RiderPropAttachSocket;                             // 0x13C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseClientAttachGuideSocket;                       // 0x140(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_33A5[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               RiderPropAttachSoftBounds;                         // 0x148(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RiderPropAttachSoftBoundsScalar;                   // 0x160(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_33A6[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               RiderPropAttachHardBounds;                         // 0x168(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RiderPropAttachSoftBoundsTargetingScalar;          // 0x180(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RiderPropAttachHardBoundsTargetingScalar;          // 0x184(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RiderPropAttachVerticalBufferTargetingScalar;      // 0x188(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RidingExitHoldTime;                                // 0x18C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TimeBeforeReenteringRiding;                        // 0x190(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTag                          RidingExitStartedEventTag;                         // 0x1B8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          RidingExitStoppedEventTag;                         // 0x1BC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortInputMappingContext*              RidingInputContext;                                // 0x1C0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInputAction*                          RidingExit;                                        // 0x1C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInputAction*                          GamepadRidingExit;                                 // 0x1D0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFXSystemAsset*                        ConnectorFXAsset;                                  // 0x1D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ConnectorPropSourceMeshParameterName;              // 0x1E0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ConnectorPropTargetMeshParameterName;              // 0x1E4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SimulatedSmoothedRotationSpeed;                    // 0x1E8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_33AB[0x4];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 ExcludedEmoteTags;                                 // 0x1F0(0x20)(Edit, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_33AD[0x8];                                     // Fixing Size After Last Property 
	class URidableComponent*                     ActiveRidable;                                     // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URidableComponent*                     LastRidable;                                       // 0x220(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USceneComponent*                       RiderProp;                                         // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFXSystemComponent*                    ConnectorProp;                                     // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               PropAttachSeparation;                              // 0x238(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               AdditionalAttachOffset;                            // 0x250(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               SoftBoundsAttachmentOffset;                        // 0x268(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               HardBoundsAttachmentOffset;                        // 0x280(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   PlaylistTagDenylistRowHandle;                      // 0x298(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UFortInputComponent*                   RiderInputComponent;                               // 0x2A8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 PendingFailedEmoteErrorTags;                       // 0x2B0(0x20)(Transient, Protected, NativeAccessSpecifierProtected)
	struct FRiderDismountLaunchVelocity          ExitLaunchVelocity;                                // 0x2D0(0xA8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FRiderDismountLaunchVelocity          JumpExitLaunchVelocity;                            // 0x378(0xA8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_33AE[0x8];                                     // Fixing Size After Last Property 
	struct FRidingAnalyticsData_Stopped          ActiveAnaltyicsData;                               // 0x428(0x80)(Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FVector                               RidableLocationLastFrame;                          // 0x4A8(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_33AF[0x8];                                     // Fixing Size After Last Property 
	struct FTimerHandle                          RestoreCollisionHandle;                            // 0x4C8(0x8)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRidableControlRuntimeData            RidableControlRuntimeData;                         // 0x4D0(0x40)(Net, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)
	uint8                                        bIsSprintingReplay : 1;                            // Mask: 0x1, PropSize: 0x10x510(0x1)(Net, Transient, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1EB : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_33B1[0x3];                                     // Fixing Size After Last Property 
	TWeakObjectPtr<class UFortPlayerController>  ClampedController;                                 // 0x514(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsPetting;                                        // 0x51C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_33B3[0x3];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        RidingCapsuleHalfHeight;                           // 0x520(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        RidingCapsuleRadius;                               // 0x548(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_33B4[0x10];                                    // Fixing Size After Last Property 
	struct FCollisionProfileName                 CollisionProfileName;                              // 0x580(0x4)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_33B5[0x4];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        TraceRadius;                                       // 0x588(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TraceLength;                                       // 0x5B0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                         bPreventExitRidingFromInput;                       // 0x5D8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_33B6[0x97];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class URiderComponent* GetDefaultObj();

	bool StopRidingActor(bool bLaunchRider, bool bFindDismountLocation, bool bIsJumpExit);
	bool StartRidingActor(class UActor* TargetActor);
	void ServerRidingExit();
	void OnRep_RidableControlRuntimeUpdated();
	void OnRep_IsSprintingReplay();
	void OnRep_ActiveRidable();
	void OnMovementModeChanged(class UCharacter* InCharacter, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	bool IsRidingActor();
	void HandleStoppedRiding(class URidableComponent* Ridable);
	void HandleStartedRiding(class URidableComponent* Ridable);
	void HandleRidingExitReleased();
	void HandleRidingExitPressed();
	void HandleRiderTakenDamage(class UActor* DamageOnOwnerPawnDamageddActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void HandleRiderDidDamage(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& Momentum);
	void HandleRidableMovementModeChanged(class UCharacter* InCharacter, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void HandleRidableFound(struct FHitResult& HitResult);
	void HandlePawnTeleported(class UFortPawn* TeleportedPawn);
	void HandlePawnDiedWhileRiding(class UFortPawn* DeadPawn);
	void HandleOnWeaponEquipped(class UFortWeapon* NewWeapon, class UFortWeapon* PrevWeapon);
	void HandleGamepadRidingExitReleased();
	void HandleDeferredExitVelocity(const struct FVector& ExitVelocity);
	void HandleDBNOWhileRiding();
	void HandleActorEndPlayWhileRiding(class UActor* Actor, enum class EEndPlayReason EndPlayReason);
	void ClientNotifyEmoteFailure(const struct FGameplayTagContainer& ErrorTags);
	void ClientHandleFinishedCharacterCustomization(class UFortPlayerPawn* PlayerPawn);
};

// 0x58 (0x6C8 - 0x670)
// Class RidingCodeRuntime.ControllingRiderComponent
class UControllingRiderComponent : public URiderComponent
{
public:
	class UFortInputMappingContext*              ControllingRidingInputContext;                     // 0x670(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInputAction*                          RidingAbility;                                     // 0x678(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInputAction*                          GamepadRidingAbility;                              // 0x680(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanControlRidable;                                // 0x688(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsControllingRidable;                             // 0x689(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ERidingControlInputStyle          ControlInputStyle;                                 // 0x68A(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_33D8[0xD];                                     // Fixing Size After Last Property 
	struct FRidingControlInputState              ReplicatedControlInputState;                       // 0x698(0xC)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FRidingControlInputStateReliable      ReplicatedControlInputStateReliable;               // 0x6A4(0x1)(Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FRidingControlInputStateUnreliable    ReplicatedControlInputStateUnreliable;             // 0x6A5(0x2)(Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_33D9[0x1];                                     // Fixing Size After Last Property 
	class UFortInputComponent*                   ControllingRiderInputComponent;                    // 0x6A8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_33DB[0x10];                                    // Fixing Size After Last Property 
	float                                        AutoRunDoubleTapTimestamp;                         // 0x6C0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanBePet;                                         // 0x6C4(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_33DC[0x3];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UControllingRiderComponent* GetDefaultObj();

	void UpdateFromInput(float DeltaTime, struct FRidingControlInputState& InputState);
	void ServerUpdateControlInputStateUnreliable(const struct FRidingControlInputStateUnreliable& InputState);
	void ServerUpdateControlInputStateReliable(const struct FRidingControlInputStateReliable& InputState);
	void ServerCancelPetting();
	void ReloadPressed();
	void OnSprintCanceled();
	void OnRep_IsControllingRidable();
	void OnRep_ControlInputUnreliable();
	void OnRep_ControlInputReliable();
	bool IsTryingToMove(float Tolerance);
	void HandleSpotActorOrPettingAbilityReleased();
	void HandleSpotActorOrPettingAbilityPressed();
	void HandleRidingAbilityReleased();
	void HandleRidingAbilityPressed();
	void HandleRequestPettingStop();
	void HandleRequestPettingStart();
	void HandlePettingAbilityPressed();
	void HandleGamepadRidingAbilityPressed();
	struct FRidingControlInputState GetControlInputState();
	void ControllingActor_OnMoveRight(float Val);
	void ControllingActor_OnMoveForward(float Val);
	void ControllingActor_OnJumpInput(bool bPressed);
};

// 0x28 (0x1B60 - 0x1B38)
// Class RidingCodeRuntime.FortCameraMode_Riding
class UFortCameraMode_Riding : public UFortCameraMode_ThirdPerson
{
public:
	struct FVector                               OriginOffset;                                      // 0x1B38(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_33E1[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortCameraMode_Riding* GetDefaultObj();

};

// 0x0 (0x338 - 0x338)
// Class RidingCodeRuntime.RidingGameStateMutator
class URidingGameStateMutator : public UFortAthenaMutator
{
public:

	static class UClass* StaticClass();
	static class URidingGameStateMutator* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class RidingCodeRuntime.RidingAnalytics
class URidingAnalytics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class URidingAnalytics* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class RidingCodeRuntime.FortAthenaPettingWildlifeTelemetryData
class UFortAthenaPettingWildlifeTelemetryData : public UFortAthenaAITelemetryData
{
public:
	int32                                        PetCount;                                          // 0x28(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_33E6[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaPettingWildlifeTelemetryData* GetDefaultObj();

	void OnPetted();
};

}


