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

// 0x1E0 (0xB60 - 0x980)
// Class SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio
class UBuildingGameplayActorSupplyDropRadio : public UBuildingGameplayActor
{
public:
	float                                        MinimumMovingSpeedThresholdSq;                     // 0x980(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BalloonClosedGroundedFallSpeed;                    // 0x984(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoOpen;                                         // 0x988(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4398[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 ForceOpenActorTags;                                // 0x990(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagQuery                     IgnoreMovingCollisionWithActorTagQuery;            // 0x9B0(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                        InterpRateToBalloonOpenedFallSpeed;                // 0x9F8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DistanceFromOriginalSpawnLocForBalloonOpen;        // 0x9FC(0x4)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESupplyDropRadioBalloonState      BalloonState;                                      // 0xA00(0x1)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4399[0x7];                                     // Fixing Size After Last Property..
	struct FHitResult                            WaterHitResult;                                    // 0xA08(0xE0)(BlueprintVisible, Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                         bMoving;                                           // 0xAE8(0x1)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_439A[0x3];                                     // Fixing Size After Last Property..
	float                                        FallSpeed;                                         // 0xAEC(0x4)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BalloonOpenedFallSpeed;                            // 0xAF0(0x4)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GravityMultiplier;                                 // 0xAF4(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               ServerLocation;                                    // 0xAF8(0x18)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ClientLocationCorrectionMaxDistSqWhenBalloonDisabled; // 0xB10(0x4)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ClientLocationCorrectionMaxDistSqWhenBalloonEnabled; // 0xB14(0x4)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               Velocity;                                          // 0xB18(0x18)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               PreviousFrameVelocity;                             // 0xB30(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               OriginalServerSpawnLocation;                       // 0xB48(0x18)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BuildingGameplayActorSupplyDropRadio");
		return Clss;
	}

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSupplyDropRadioAttachActorComponent");
		return Clss;
	}

	void SetOwningActorNetCullDistance(float DistanceSquared);
};

// 0x0 (0x28 - 0x28)
// Class SupplyDropRadioRuntime.FortSupplyDropRadioBlueprintLibrary
class UFortSupplyDropRadioBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSupplyDropRadioBlueprintLibrary");
		return Clss;
	}

	void StopCurrentConversation(class UFortPlayerControllerGameplay* PlayerController);
	void SetMoveShouldAbortConversation(class UFortPlayerControllerGameplay* PlayerController, bool bNewMoveAbortConversation);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
