#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E0 (0xB58 - 0x978)
// Class SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio
class UBuildingGameplayActorSupplyDropRadio : public UBuildingGameplayActor
{
public:
	float                                        MinimumMovingSpeedThresholdSq;                     // 0x978(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BalloonClosedGroundedFallSpeed;                    // 0x97C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoOpen;                                         // 0x980(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E2C[0x7];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 ForceOpenActorTags;                                // 0x988(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagQuery                     IgnoreMovingCollisionWithActorTagQuery;            // 0x9A8(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                        InterpRateToBalloonOpenedFallSpeed;                // 0x9F0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DistanceFromOriginalSpawnLocForBalloonOpen;        // 0x9F4(0x4)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESupplyDropRadioBalloonState      BalloonState;                                      // 0x9F8(0x1)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E2D[0x7];                                     // Fixing Size After Last Property 
	struct FHitResult                            WaterHitResult;                                    // 0xA00(0xE0)(BlueprintVisible, Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                         bMoving;                                           // 0xAE0(0x1)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E2E[0x3];                                     // Fixing Size After Last Property 
	float                                        FallSpeed;                                         // 0xAE4(0x4)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BalloonOpenedFallSpeed;                            // 0xAE8(0x4)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GravityMultiplier;                                 // 0xAEC(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               ServerLocation;                                    // 0xAF0(0x18)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ClientLocationCorrectionMaxDistSqWhenBalloonDisabled; // 0xB08(0x4)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ClientLocationCorrectionMaxDistSqWhenBalloonEnabled; // 0xB0C(0x4)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               Velocity;                                          // 0xB10(0x18)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               PreviousFrameVelocity;                             // 0xB28(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               OriginalServerSpawnLocation;                       // 0xB40(0x18)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UBuildingGameplayActorSupplyDropRadio* GetDefaultObj();

	void UpdateGroundInfo(bool bValidBlock, struct FHitResult& MovementHitResult);
	void SetGravityMultiplier(float InGravityMultiplier);
	void SetBalloonState(enum class ESupplyDropRadioBalloonState InBalloonState);
	void OpenSupplyDrop();
	void OnRep_DistanceFromOriginalSpawnLocForBalloonOpen();
	void OnRep_BalloonState();
	bool IsMoving();
	bool IsGrounded();
	void HandleMoveIgnoredActorEndPlay(class UActor* EndPlayActor, enum class EEndPlayReason Reason);
	class UBoxComponent* GetRootCollisionComponent();
	class UActor* GetHighestAttachParent(class UActor* InActor);
	float GetGravityZ();
	enum class ESupplyDropRadioBalloonState GetBalloonState();
};

// 0x0 (0xA0 - 0xA0)
// Class SupplyDropRadioRuntime.FortSupplyDropRadioAttachActorComponent
class UFortSupplyDropRadioAttachActorComponent : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class UFortSupplyDropRadioAttachActorComponent* GetDefaultObj();

	void SetOwningActorNetCullDistance(float DistanceSquared);
};

// 0x0 (0x28 - 0x28)
// Class SupplyDropRadioRuntime.FortSupplyDropRadioBlueprintLibrary
class UFortSupplyDropRadioBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFortSupplyDropRadioBlueprintLibrary* GetDefaultObj();

	void StopCurrentConversation(class UFortPlayerControllerGameplay* PlayerController);
	void SetMoveShouldAbortConversation(class UFortPlayerControllerGameplay* PlayerController, bool bNewMoveAbortConversation);
};

}


