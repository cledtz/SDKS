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

// 0x208 (0x1D30 - 0x1B28)
// Class VaultingCodeRuntime.HurdleCameraMode
class UHurdleCameraMode : public UFortCameraMode_ThirdPerson
{
public:
	struct FVector                               StartCameraOriginInterpSpeed;                      // 0x1B28(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               ApexCameraOriginInterpSpeed;                       // 0x1B40(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               EndCameraOriginInterpSpeed;                        // 0x1B58(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ConstantSpeedCameraTrackInterpolationExponent;     // 0x1B70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CameraOriginVerticalThreshold;                     // 0x1B74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FallingVerticalInterpSpeed;                        // 0x1B78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FallSpeedThreshold;                                // 0x1B7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        NonSprintFOV;                                      // 0x1B80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOverrideSpectatorCamera;                          // 0x1B84(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_858A[0x3];                                     // Fixing Size After Last Property..
	struct FHurdleTargetingData                  HurdleTargetingData;                               // 0x1B88(0x130)(Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_858B[0x78];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HurdleCameraMode");
		return Clss;
	}

};

// 0x928 (0x9D0 - 0xA8)
// Class VaultingCodeRuntime.HurdleComponent
class UHurdleComponent : public UFortPawnComponent
{
public:
	uint8                                        Pad_858D[0x8];                                     // Fixing Size After Last Property..
	struct FHurdleInputConfig                    HurdleInputConfig;                                 // 0xB0(0x530)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FHurdleInputConfigCache               HurdleInputConfigCache;                            // 0x5E0(0x88)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_858E[0x8];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        HurdleEnabled;                                     // 0x670(0x28)(Edit, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AutoHurdleEnabled;                                 // 0x698(0x28)(Edit, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_858F[0x138];                                   // Fixing Size After Last Property..
	struct FReplicatedHurdleTargetingData        ReplayHurdleTargetingData;                         // 0x7F8(0x70)(Net, NoDestructor, NativeAccessSpecifierPrivate)
	double                                       LastTeleportTime;                                  // 0x868(0x8)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FHurdleTargetingData                  ParallelTargetingData;                             // 0x870(0x130)(Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8590[0x1];                                     // Fixing Size After Last Property..
	enum class EHurdleState                      ReplicatedHurdleState;                             // 0x9A1(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8591[0x2E];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HurdleComponent");
		return Clss;
	}

	void UnregisterMutatorUpdatedDelegate();
	bool ShouldShowHurdleIndicator();
	void ServerStartHurdle(const struct FReplicatedHurdleTargetingData& InReplicatedTargetingData, double ClientLastTeleportTime);
	void RegisterMutatorUpdatedDelegate(class APawn* AffectedPawn);
	void OnRep_ReplicatedLastTeleportTime();
	void OnRep_ReplicatedHurdleState();
	void OnPlayerStatePawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);
	void OnMutatorUpdated();
	bool IsContextualActionPrototypeActive();
	void HandleTargetingDataValid(struct FHurdleTargetingData& TargetingData);
	void HandleTargetingDataInvalid();
	void HandleOwnerTeleported(class AFortPawn* TeleportedOwner);
	void HandleOwnerMovementModeChanged(class ACharacter* Character, enum class EMovementMode PreviousMovementMode, uint8 PreviousCustomMode);
	void HandleOwnerJumpInput(bool bPressed);
	void BP_HandleSpringJump();
	void BP_HandleHurdleStarted(struct FHurdleTargetingData& TargetingData, struct FSynchedActionInfo& SynchedActionInfo);
	void BP_HandleHurdleEnded();
	void BP_CanStartHurdle(bool* OutCanStartHurdle);
};

// 0x0 (0x28 - 0x28)
// Class VaultingCodeRuntime.HurdleLibrary
class UHurdleLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HurdleLibrary");
		return Clss;
	}

	bool PerformHurdleTargeting(class ACharacter* Character, struct FHurdleInputConfigCache* HurdleInputConfig, struct FHurdleTargetingData* OutTargetingData, bool bIsAutoHurdle);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
