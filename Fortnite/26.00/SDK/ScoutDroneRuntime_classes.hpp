#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A0 (0xCC8 - 0xB28)
// Class ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dive
class UFortGameplayAbility_ScoutDrone_Dive : public UFortGameplayAbility
{
public:
	uint8                                        Pad_27BC[0x10];                                    // Fixing Size After Last Property 
	struct FFortScoutDroneDiveTransitionData     EaseInData;                                        // 0xB38(0x30)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FFortScoutDroneDiveTransitionData     EaseOutData;                                       // 0xB68(0x30)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_27BD[0x8];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        DiveUpdateInterval;                                // 0xBA0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        DiveSpeedIncrease;                                 // 0xBC8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MinSpeedToDive;                                    // 0xBF0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MinDistToGround;                                   // 0xC18(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TargetPitchToDive;                                 // 0xC40(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        DivingGravityScale;                                // 0xC68(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxSpeedDivingGravityScale;                        // 0xC90(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_27C0[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortGameplayAbility_ScoutDrone_Dive* GetDefaultObj();

	void BP_OnDroneStoppedDiving();
	void BP_OnDroneStartedDiving();
};

// 0x48 (0xB70 - 0xB28)
// Class ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_TargetingBase
class UFortGameplayAbility_ScoutDrone_TargetingBase : public UFortGameplayAbility
{
public:
	class UTargetingPreset*                      TargetingPreset;                                   // 0xB28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTargetingRequestHandle               AsyncTargetingHandle;                              // 0xB30(0x4)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_27EE[0x4];                                     // Fixing Size After Last Property 
	struct FTimerHandle                          TargetingTimerHandle;                              // 0xB38(0x8)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TargetingInterval;                                 // 0xB40(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	bool                                         bUseControllerAsInstigator;                        // 0xB68(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_27F0[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortGameplayAbility_ScoutDrone_TargetingBase* GetDefaultObj();

	void StopTargeting();
	void StartTargeting();
	void BP_OnTargetsFound(struct FTargetingRequestHandle& TargetingHandle);
};

// 0xF0 (0xC60 - 0xB70)
// Class ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_SpeedBoost
class UFortGameplayAbility_ScoutDrone_SpeedBoost : public UFortGameplayAbility_ScoutDrone_TargetingBase
{
public:
	struct FGameplayTag                          DoorBashCueTag;                                    // 0xB70(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_280B[0x4];                                     // Fixing Size After Last Property 
	TSubclassOf<class UGameplayEffect>           DamageGameplayEffectClass;                         // 0xB78(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTag                          DoorBashPawnLaunchGameplayCueTag;                  // 0xB80(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_280D[0x4];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        DoorBashEnabledHotfix;                             // 0xB88(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        DoorBashSphereRadiusForPawnLaunch;                 // 0xBB0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        DoorBashScalarForPawnLaunch;                       // 0xBD8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<enum class EObjectTypeQuery>          DoorBashCollisionTypesForPawn;                     // 0xC00(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        DoorBashEnabled;                                   // 0xC10(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        DamageOnBoostEnabled;                              // 0xC38(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortGameplayAbility_ScoutDrone_SpeedBoost* GetDefaultObj();

	void OnDoorBashed(struct FHitResult& HitResult, class UFortBuildingWallDoorComponent* BashedDoor);
	void OnBoostedIntoActor(struct FHitResult& HitResult);
};

// 0xB0 (0x158 - 0xA8)
// Class ScoutDroneRuntime.FortScoutDroneAnalyticsComponent
class UFortScoutDroneAnalyticsComponent : public UFortControllerComponent
{
public:
	float                                        SessionStartTime;                                  // 0xA8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        SessionLength;                                     // 0xAC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MinSessionLength;                                  // 0xB0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	float                                        DistanceTraveled;                                  // 0xD8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumberOfContainersInteractedWith;                  // 0xDC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTag                          DismissalReason;                                   // 0xE0(0x4)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumberOfItemsPickedUp;                             // 0xE4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FString>                        DBNOCarriedPlayers;                                // 0xE8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	int32                                        NumberOfEnemiesPassivelyMarked;                    // 0xF8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumberOfEnemiesMarkedOnCaw;                        // 0xFC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumberOfCaws;                                      // 0x100(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_281F[0xC];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        DistanceTraveledUpdateInterval;                    // 0x110(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FTimerHandle                          DistanceTraveledUpdateTimerHandle;                 // 0x138(0x8)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               LastRecorderDroneLocation;                         // 0x140(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortScoutDroneAnalyticsComponent* GetDefaultObj();

};

// 0x1F8 (0x630 - 0x438)
// Class ScoutDroneRuntime.FortScoutDroneAnimInstance
class UFortScoutDroneAnimInstance : public UFortBaseAnimInstance
{
public:
	class UFortScoutDroneMovementComponent*      FortScoutDroneMovementComponent;                   // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                       YawDeltaLastTick;                                  // 0x440(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ActorCurrentRotationTick;                          // 0x448(0x18)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	double                                       YawDeltaCurrentTick;                               // 0x460(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ActorRotationLastTick;                             // 0x468(0x18)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         IsFlying;                                          // 0x480(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2825[0x7];                                     // Fixing Size After Last Property 
	double                                       CurrentVelocity;                                   // 0x488(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       LastVelocity;                                      // 0x490(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Velocity;                                          // 0x498(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ForwardInputAlpha;                                 // 0x4A0(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       StrafeInputAlpha;                                  // 0x4A8(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              DroneRotation;                                     // 0x4B0(0x18)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	double                                       Acceleration;                                      // 0x4C8(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortScoutDrone*                       ScoutDrone;                                        // 0x4D0(0x8)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsBoosting;                                        // 0x4D8(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsDiving;                                          // 0x4D9(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2827[0x6];                                     // Fixing Size After Last Property 
	double                                       AimPitch;                                          // 0x4E0(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       NegativeAimPitch;                                  // 0x4E8(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              FinalFanRotationL;                                 // 0x4F0(0x18)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              FinalFanRotationR;                                 // 0x508(0x18)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	double                                       FanIdleSpeed;                                      // 0x520(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       FanAuthoredSpeed;                                  // 0x528(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       FanIdleAuthoredSpeed;                              // 0x530(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       FanBwdSpeed;                                       // 0x538(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       FanFwdSpeed;                                       // 0x540(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       TurnNoiseAlpha;                                    // 0x548(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       LeanAlpha;                                         // 0x550(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       TurnAlpha;                                         // 0x558(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsColliding;                                       // 0x560(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFlyingBwd;                                       // 0x561(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldExitFromFlying;                              // 0x562(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldExitFromDiving;                              // 0x563(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EarlyIntoLoop;                                     // 0x564(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_282C[0x3];                                     // Fixing Size After Last Property 
	double                                       AccelerationZ;                                     // 0x568(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsLeftStrafe;                                      // 0x570(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         WasStrafing;                                       // 0x571(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_282F[0x6];                                     // Fixing Size After Last Property 
	double                                       GroundDistance;                                    // 0x578(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasDivingConditionBeenMet;                         // 0x580(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsItemAttached;                                    // 0x581(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsPlayerAttached;                                  // 0x582(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2830[0x5];                                     // Fixing Size After Last Property 
	double                                       FlapTime;                                          // 0x588(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FlapRandomPick;                                    // 0x590(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFlapSmall;                                       // 0x594(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2831[0x3];                                     // Fixing Size After Last Property 
	int32                                        FlapRandomMaxRange;                                // 0x598(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2832[0x4];                                     // Fixing Size After Last Property 
	double                                       FlapSmallTimeThreshold;                            // 0x5A0(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       FlapBigTimeThreshold;                              // 0x5A8(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       FlapSmallResetDelayDuration;                       // 0x5B0(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       FlapBigResetDelayDuration;                         // 0x5B8(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFlapBig;                                         // 0x5C0(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2835[0x7];                                     // Fixing Size After Last Property 
	double                                       VerticalInputAlpha;                                // 0x5C8(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         WasVerticalUp;                                     // 0x5D0(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFlyingVerticalUp;                                // 0x5D1(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldExitFromBoostOutro;                          // 0x5D2(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasSpawned;                                        // 0x5D3(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldExitFromSpawning;                            // 0x5D4(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldAllowTransition;                             // 0x5D5(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         StateRuleFromBoostOutroToFlying;                   // 0x5D6(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         WasBoosting;                                       // 0x5D7(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        SpeedBoostForceBoostVelocity;                      // 0x5D8(0x28)(BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	struct FScalableFloat                        SpeedBoostMaxSpeedIncrease;                        // 0x600(0x28)(BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	bool                                         IsFlappingTime;                                    // 0x628(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_283A[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortScoutDroneAnimInstance* GetDefaultObj();

};

// 0x40 (0x1238 - 0x11F8)
// Class ScoutDroneRuntime.FortScoutDroneGlove
class UFortScoutDroneGlove : public UFortWeapon
{
public:
	struct FScalableFloat                        HoldToDeployTime;                                  // 0x11F8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_283F[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortScoutDroneGlove* GetDefaultObj();

};

// 0x20 (0xB48 - 0xB28)
// Class ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Activate
class UFortGameplayAbility_ScoutDrone_Activate : public UFortGameplayAbility
{
public:
	TSubclassOf<class UFortScoutDrone>           RCActorClass;                                      // 0xB28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               SpawnOffset;                                       // 0xB30(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortGameplayAbility_ScoutDrone_Activate* GetDefaultObj();

};

// 0x10 (0xB38 - 0xB28)
// Class ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dismiss
class UFortGameplayAbility_ScoutDrone_Dismiss : public UFortGameplayAbility
{
public:
	struct FScoutDroneDeferredDestructionData    DismissDelayData;                                  // 0xB28(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortGameplayAbility_ScoutDrone_Dismiss* GetDefaultObj();

	class UFortScoutDrone* GetControlledDrone();
};

// 0x130 (0xCA0 - 0xB70)
// Class ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_MarkPotentialTargets
class UFortGameplayAbility_ScoutDrone_MarkPotentialTargets : public UFortGameplayAbility_ScoutDrone_TargetingBase
{
public:
	struct FIndicatedActorData                   IndicatedActorData;                                // 0xB70(0xF8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2854[0x10];                                    // Fixing Size After Last Property 
	struct FScalableFloat                        MaxNumberOfPotentialTargets;                       // 0xC78(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortGameplayAbility_ScoutDrone_MarkPotentialTargets* GetDefaultObj();

	void OnStoppedHighlightingTarget(class UActor* Target);
	void OnStartHighlightingTarget(class UActor* Target);
};

// 0x8 (0x30 - 0x28)
// Class ScoutDroneRuntime.ScoutDronePassiveMarkPayload
class UScoutDronePassiveMarkPayload : public UObject
{
public:
	struct FScoutDroneStatusData                 TargetStatus;                                      // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UScoutDronePassiveMarkPayload* GetDefaultObj();

};

// 0x1F8 (0xD68 - 0xB70)
// Class ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PassiveMark
class UFortGameplayAbility_ScoutDrone_PassiveMark : public UFortGameplayAbility_ScoutDrone_TargetingBase
{
public:
	struct FScoutDroneStatusData                 CurrentTargetStatus;                               // 0xB70(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FStenciledActorData                   StenciledActorData;                                // 0xB78(0x80)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FIndicatedActorData                   IndicatedActorData;                                // 0xBF8(0xF8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ActorTargetingRange;                               // 0xCF0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TimeToConfirmTarget;                               // 0xD18(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class UActor*                                CurrentTarget;                                     // 0xD40(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTimerHandle                          TargetConfirmationTimerHandle;                     // 0xD48(0x8)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScoutDronePassiveMarkPayload*         PayloadCache;                                      // 0xD50(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_286B[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortGameplayAbility_ScoutDrone_PassiveMark* GetDefaultObj();

	void OnRep_CurrentTargetStatus();
	void OnActorIndicatorExpired(class UActor* IndicatedActor);
	void BP_OnTargetStatusChanged(class UActor* ActiveTarget);
};

// 0x18 (0x40 - 0x28)
// Class ScoutDroneRuntime.ScoutDronePickUpTargetsPayload
class UScoutDronePickUpTargetsPayload : public UObject
{
public:
	struct FScoutDronePickupTargets              PickUpTargets;                                     // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UScoutDronePickUpTargetsPayload* GetDefaultObj();

};

// 0x78 (0xBE8 - 0xB70)
// Class ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PickUp
class UFortGameplayAbility_ScoutDrone_PickUp : public UFortGameplayAbility_ScoutDrone_TargetingBase
{
public:
	uint8                                        Pad_287E[0x8];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        MaxNumberOfItemsToGrab;                            // 0xB78(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class UScoutDronePickUpTargetsPayload*       PayloadCache;                                      // 0xBA0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        PickupToggleCooldownDuration;                      // 0xBA8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2880[0x10];                                    // Fixing Size After Last Property 
	TSubclassOf<class UGameplayEffect>           AttachedPawnGEClass;                               // 0xBE0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortGameplayAbility_ScoutDrone_PickUp* GetDefaultObj();

	void ServerConfirmTargets();
};

// 0x78 (0xBA0 - 0xB28)
// Class ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether
class UFortGameplayAbility_ScoutDrone_Tether : public UFortGameplayAbility
{
public:
	struct FScalableFloat                        WarningRange;                                      // 0xB28(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        SignalLossRange;                                   // 0xB50(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	bool                                         bIsInWarningRange;                                 // 0xB78(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsInSignalLossRange;                              // 0xB79(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_288D[0x6];                                     // Fixing Size After Last Property 
	struct FTimerHandle                          TetheringTimerHandle;                              // 0xB80(0x8)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTimerHandle                          TetheringReportTimerHandle;                        // 0xB88(0x8)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScoutDroneDeferredDestructionData    DismissDelayData;                                  // 0xB90(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortGameplayAbility_ScoutDrone_Tether* GetDefaultObj();

	void StopCheckingDistances();
	void StartCheckingDistances();
	void OnRep_bIsInWarningRange();
	void OnRep_bIsInSignalLossRange();
};

// 0x48 (0x380 - 0x338)
// Class ScoutDroneRuntime.FortAthenaMutator_ScoutDrone
class UFortAthenaMutator_ScoutDrone : public UFortAthenaMutator
{
public:
	struct FGameplayTagContainer                 DroneAllowedInteractionTags;                       // 0x338(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 DroneBlockedInteractionTags;                       // 0x358(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	bool                                         bIsControllingDrone;                               // 0x378(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_289D[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaMutator_ScoutDrone* GetDefaultObj();

	void OnViewTargetChanged(class UFortPlayerController* PlayerController, class UActor* OldViewTarget, class UActor* NewViewTarget);
};

// 0xC0 (0x108 - 0x48)
// Class ScoutDroneRuntime.FortChargingSet_ScoutDroneEnergy
class UFortChargingSet_ScoutDroneEnergy : public UFortChargingSet_Base
{
public:
	struct FFortGameplayAttributeData            Energy;                                            // 0x48(0x28)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, Protected, NativeAccessSpecifierProtected)
	struct FFortGameplayAttributeData            MaxEnergy;                                         // 0x70(0x28)(BlueprintVisible, BlueprintReadOnly, Net, Protected, NativeAccessSpecifierProtected)
	struct FFortGameplayAttributeData            EnergyChargeRate;                                  // 0x98(0x28)(BlueprintVisible, BlueprintReadOnly, Net, Protected, NativeAccessSpecifierProtected)
	struct FFortGameplayAttributeData            ServerTimeEnergyIncrements;                        // 0xC0(0x28)(BlueprintVisible, BlueprintReadOnly, Net, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_28A6[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortChargingSet_ScoutDroneEnergy* GetDefaultObj();

	void OnRep_Energy(struct FFortGameplayAttributeData& OldValue);
};

// 0x190 (0x7F0 - 0x660)
// Class ScoutDroneRuntime.FortScoutDrone
class UFortScoutDrone : public UCharacter
{
public:
	uint8                                        Pad_28E9[0x50];                                    // Fixing Size After Last Property 
	bool                                         bIsDiving;                                         // 0x6B0(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28EB[0x7];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        DivingEnabled;                                     // 0x6B8(0x28)(BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	bool                                         bIsSpeedBoosting;                                  // 0x6E0(0x1)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28EC[0x7];                                     // Fixing Size After Last Property 
	class UNiagaraComponent*                     NSScoutDroneIdle_Native;                           // 0x6E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortScoutDronePickupManager*          PickupManagerComponent_Native;                     // 0x6F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>               TeamMateIndicatorMarkerWidgetClass;                // 0x6F8(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAudioComponent*                       DroneMotorLoopComponent;                           // 0x700(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAudioComponent*                       DroneThrustSoundComponent;                         // 0x708(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        BaseMaxFlySpeed;                                   // 0x710(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_28F1[0x8];                                     // Fixing Size After Last Property 
	class UFortAbilitySystemComponent*           AbilitySystemComponent;                            // 0x740(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActorComponent_Affiliation*       AffiliationComponent;                              // 0x748(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAbilitySet*                       StartupAbilitySet;                                 // 0x750(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortPawn*                             ControllingPlayerPawn;                             // 0x758(0x8)(Net, ZeroConstructor, Transient, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortHealthSet*                        HealthSet;                                         // 0x760(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortChargingSet_ScoutDroneEnergy*     EnergySet;                                         // 0x768(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LifespanAfterDeath;                                // 0x770(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFortAttributeInitializationKey       AttributeInitKey;                                  // 0x774(0x8)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	enum class EPhysicalSurface                  PrimarySurfaceType;                                // 0x77C(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EFortBaseWeaponDamage             WeaponResponseType;                                // 0x77D(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bPlayedDeath;                                      // 0x77E(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_28F9[0x1];                                     // Fixing Size After Last Property 
	struct FScoutDroneDeferredDestructionData    OutOfHealthDismissDelayData;                       // 0x780(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	struct FScoutDroneDeferredDestructionData    OutOfEnergyDismissDelayData;                       // 0x790(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnTeamIndexChanged;                                // 0x7A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortScoutDronePawnOverrideComponent> PawnOverrideComponentClass;                        // 0x7B0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundBase*                            DroneMotorLoopSound;                               // 0x7B8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundBase*                            DroneThrusterSound;                                // 0x7C0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioParameterComponent*              AudioParameter;                                    // 0x7C8(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  LocallyViewedPawnAudioParamName;                   // 0x7D0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  IsEnemyAudioParamName;                             // 0x7D4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ThrustAmountAudioParamName;                        // 0x7D8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ThrustSoundThreshold;                              // 0x7DC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2900[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortScoutDrone* GetDefaultObj();

	void SetupGameplayAudioParameters();
	void SetTeamMatesIndicator(bool bState);
	void SetAffiliationAudio();
	void OnRep_ControllingPlayerPawn();
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class UFortPawn* InstigatedBy, class UActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class UFortPawn* InstigatedBy, class UActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	float GetHealthPercentage();
	void GetForwardAndRightDotProducts_Native(float* OutForwardDot, float* OutRightDot);
	struct FRotator GetDeltaRotator();
	class UFortPawn* GetControllingPlayerPawn();
	void GameplayCue_Damage(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
};

// 0x8 (0x1F0 - 0x1E8)
// Class ScoutDroneRuntime.FortScoutDroneCameraMode
class UFortScoutDroneCameraMode : public UFort3PCameraMode
{
public:
	bool                                         bShouldInterpolateLocation;                        // 0x1E8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShouldInterpolateRotation;                        // 0x1E9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2908[0x6];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortScoutDroneCameraMode* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class ScoutDroneRuntime.ScoutDroneDeferredDestructionPayload
class UScoutDroneDeferredDestructionPayload : public UObject
{
public:
	struct FScoutDroneDeferredDestructionData    DeferredDestructionData;                           // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UScoutDroneDeferredDestructionPayload* GetDefaultObj();

};

// 0x2B8 (0x360 - 0xA8)
// Class ScoutDroneRuntime.FortScoutDroneControllingComponent
class UFortScoutDroneControllingComponent : public UFortControllerComponent
{
public:
	uint8                                        Pad_294E[0x30];                                    // Fixing Size After Last Property 
	class UInputComponent*                       DroneInputComponent;                               // 0xD8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortScoutDrone*                       ControlledDrone;                                   // 0xE0(0x8)(Net, ZeroConstructor, Transient, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UActor*                                OriginalDroneOwner;                                // 0xE8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortInputMappingContext*              DroneInputContext;                                 // 0xF0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FScoutDroneInputTriggerableEvent> InputTriggerableEvents;                            // 0xF8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class UInputAction*                          MoveUpAction;                                      // 0x108(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInputAction*                          MoveAction;                                        // 0x110(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInputAction*                          DismissAction;                                     // 0x118(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UGameplayEffect>           DroneCooldownEffectClass;                          // 0x120(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2953[0x18];                                    // Fixing Size After Last Property 
	struct FStenciledActorData                   OwningActorStencilData;                            // 0x140(0x80)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScoutDroneDeferredDestructionData    CurrentDestructionData;                            // 0x1C0(0x10)(Net, Transient, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortCameraMode>           FirstPersonCameraModeOverride;                     // 0x1D0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortCameraMode>           ThirdPersonCameraModeOverride;                     // 0x1D8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayAbilitySpec                  FakeCameraAbilitySpec;                             // 0x1E0(0xF8)(Transient, NativeAccessSpecifierPrivate)
	TArray<class FName>                          LegacyInputActionsToBlock;                         // 0x2D8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	class UScoutDroneDeferredDestructionPayload* DismissPayloadCache;                               // 0x2E8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        DismissButtonPressCooldown;                        // 0x2F0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2957[0x8];                                     // Fixing Size After Last Property 
	struct FViewTargetTransitionParams           PlayerToDroneTransitionParams;                     // 0x320(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2958[0x8];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 InterruptingPlayerTags;                            // 0x338(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2959[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortScoutDroneControllingComponent* GetDefaultObj();

	void ServerRequestDroneDismissal();
	void OnWeaponEquipped(class UFortWeapon* NewWeapon, class UFortWeapon* PrevWeapon);
	void OnRep_CurrentDestructionData();
	void OnRep_ControlledDrone();
	void OnPlayerInterruptionTagsChanged(const struct FGameplayTag& Tag, int32 NewCount);
	void OnOwningPlayerStartedDBNO();
	void OnControlledDroneDestroyed(class UActor* InControlledDrone);
	class UFortScoutDrone* GetControlledDrone();
	void BP_OnPlayerShortInteract();
	void BP_OnPlayerInteractLongUseChanged(bool bInteracting, bool bLongUseInteractionCompleted);
	void BP_OnDroneDestroyed(struct FGameplayTag& DismissalReason);
	void BP_OnDismissalStarted(bool bInstantDismissal, const struct FGameplayTag& DismissalReason);
	void BP_OnDestructionStarted(bool bInstantDestruction, const struct FGameplayTag& DismissalReason);
};

// 0x28 (0x68 - 0x40)
// Class ScoutDroneRuntime.FortScoutDroneCooldownMagnitudeCalculation
class UFortScoutDroneCooldownMagnitudeCalculation : public UFortGameplayModMagnitudeCalculation
{
public:
	struct FScalableFloat                        MinDroneCooldown;                                  // 0x40(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortScoutDroneCooldownMagnitudeCalculation* GetDefaultObj();

};

// 0xC8 (0xFF0 - 0xF28)
// Class ScoutDroneRuntime.FortScoutDroneMovementComponent
class UFortScoutDroneMovementComponent : public UCharacterMovementComponent
{
public:
	struct FVector                               LocalInputState;                                   // 0xF28(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LastInputState;                                    // 0xF40(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReplicatedAcceleration;                            // 0xF58(0x18)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        StrafeInputMultiplier;                             // 0xF70(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        BacktrackingInputMultiplier;                       // 0xF98(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        VerticalMovementInputMultiplier;                   // 0xFC0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_296A[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortScoutDroneMovementComponent* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class ScoutDroneRuntime.FortScoutDronePawnOverrideComponent
class UFortScoutDronePawnOverrideComponent : public UFortPawnOverrideComponent
{
public:
	TSubclassOf<class UFortCameraMode>           DroneSpectateCameraMode;                           // 0xA8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortScoutDronePawnOverrideComponent* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class ScoutDroneRuntime.FortScoutDronePawnOwnerOverrideComponent
class UFortScoutDronePawnOwnerOverrideComponent : public UFortPawnOverrideComponent
{
public:
	TWeakObjectPtr<class UFortScoutDrone>        ControlledDrone;                                   // 0xA8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortScoutDronePawnOwnerOverrideComponent* GetDefaultObj();

};

// 0x138 (0x1D8 - 0xA0)
// Class ScoutDroneRuntime.FortScoutDronePickupManager
class UFortScoutDronePickupManager : public UPawnComponent
{
public:
	struct FScoutDronePickupTargets              AttachedTargets;                                   // 0xA0(0x18)(BlueprintVisible, BlueprintReadOnly, Net, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)
	class FName                                  AttachPointSocketName;                             // 0xB8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_29AB[0x4];                                     // Fixing Size After Last Property 
	struct FScoutDronePickupTargets              PreviouslyAttachedTargets;                         // 0xC0(0x18)(Transient, NativeAccessSpecifierPrivate)
	struct FVector                               ItemOffset;                                        // 0xD8(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               DBNOPawnOffset;                                    // 0xF0(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CurrentlyAppliedCameraOffset;                      // 0x108(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_29B0[0x4];                                     // Fixing Size After Last Property 
	struct FScoutDroneCapsuleSizeData            MaxExtraCapsuleDimensions;                         // 0x110(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxPickupSpread;                                   // 0x160(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        PickupTossSpeed;                                   // 0x188(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 ItemsPickupTags;                                   // 0x1B0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_29B3[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortScoutDronePickupManager* GetDefaultObj();

	void ServerUpdateItemAttachment(const struct FVector& CalculatedItemOffset);
	void ServerDropAttachedActors();
	void OnRep_AttachedTargets();
	void OnPawnDBNOStateChanged(class UFortPawn* Pawn, bool bIsDBNO);
	void OnAttachedPawnDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	bool HasAPawnAtached();
	bool HasAnyAttachedActors();
	void BP_OnActorsDetached();
	void BP_OnActorsAttached();
};

}


