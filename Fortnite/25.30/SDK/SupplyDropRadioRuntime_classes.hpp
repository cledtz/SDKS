#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E0 (0xB70 - 0x990)
// Class SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio
class UBuildingGameplayActorSupplyDropRadio : public UBuildingGameplayActor
{
public:
	float                                        MinimumMovingSpeedThresholdSq;                     // 0x990(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BalloonClosedGroundedFallSpeed;                    // 0x994(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoOpen;                                         // 0x998(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2A76[0x7];                                     // Fixing Size After Last Property
	struct FGameplayTagContainer                 ForceOpenActorTags;                                // 0x9A0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagQuery                     IgnoreMovingCollisionWithActorTagQuery;            // 0x9C0(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                        InterpRateToBalloonOpenedFallSpeed;                // 0xA08(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DistanceFromOriginalSpawnLocForBalloonOpen;        // 0xA0C(0x4)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESupplyDropRadioBalloonState      BalloonState;                                      // 0xA10(0x1)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2A79[0x7];                                     // Fixing Size After Last Property
	struct FHitResult                            WaterHitResult;                                    // 0xA18(0xE0)(BlueprintVisible, Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                         bMoving;                                           // 0xAF8(0x1)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2A7D[0x3];                                     // Fixing Size After Last Property
	float                                        FallSpeed;                                         // 0xAFC(0x4)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BalloonOpenedFallSpeed;                            // 0xB00(0x4)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GravityMultiplier;                                 // 0xB04(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               ServerLocation;                                    // 0xB08(0x18)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ClientLocationCorrectionMaxDistSqWhenBalloonDisabled; // 0xB20(0x4)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ClientLocationCorrectionMaxDistSqWhenBalloonEnabled; // 0xB24(0x4)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               Velocity;                                          // 0xB28(0x18)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               PreviousFrameVelocity;                             // 0xB40(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               OriginalServerSpawnLocation;                       // 0xB58(0x18)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

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
