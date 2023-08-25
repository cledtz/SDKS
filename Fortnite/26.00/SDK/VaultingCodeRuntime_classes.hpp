#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0xC0 - 0x48)
// Class VaultingCodeRuntime.FortMovementMode_ExtLogicHurdle
class UFortMovementMode_ExtLogicHurdle : public UFortMovementMode_BaseExtLogic
{
public:
	uint8                                        Pad_1D95[0x18];                                    // Fixing Size After Last Property 
	class FName                                  MontageStartSectionName;                           // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D97[0x4];                                     // Fixing Size After Last Property 
	TSubclassOf<class UFortCameraMode>           CameraMode;                                        // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          CameraModeTag;                                     // 0x70(0x4)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D99[0x4];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 HurdleTag;                                         // 0x78(0x20)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTag                          HurdleStartedTag;                                  // 0x98(0x4)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D9A[0x4];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 HurdleFinishedTag;                                 // 0xA0(0x20)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortMovementMode_ExtLogicHurdle* GetDefaultObj();

	bool IsContextualActionPrototypeActive();
	void BP_GetAnimationMontageInformation(const struct FSynchedActionInfo& SynchedActionInfo, enum class EHurdleType Type, class UAnimMontage** AnimMontage, class FName* StartSectionName, class FName* MontageMiddleSectionName);
};

// 0x208 (0x1D40 - 0x1B38)
// Class VaultingCodeRuntime.HurdleCameraMode
class UHurdleCameraMode : public UFortCameraMode_ThirdPerson
{
public:
	struct FVector                               StartCameraOriginInterpSpeed;                      // 0x1B38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               ApexCameraOriginInterpSpeed;                       // 0x1B50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               EndCameraOriginInterpSpeed;                        // 0x1B68(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ConstantSpeedCameraTrackInterpolationExponent;     // 0x1B80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CameraOriginVerticalThreshold;                     // 0x1B84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FallingVerticalInterpSpeed;                        // 0x1B88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FallSpeedThreshold;                                // 0x1B8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        NonSprintFOV;                                      // 0x1B90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOverrideSpectatorCamera;                          // 0x1B94(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1DA3[0x3];                                     // Fixing Size After Last Property 
	struct FHurdleTargetingData                  HurdleTargetingData;                               // 0x1B98(0x130)(Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1DA4[0x78];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UHurdleCameraMode* GetDefaultObj();

};

// 0x938 (0x9E0 - 0xA8)
// Class VaultingCodeRuntime.HurdleComponent
class UHurdleComponent : public UFortPawnComponent
{
public:
	uint8                                        Pad_1DEF[0x8];                                     // Fixing Size After Last Property 
	struct FHurdleInputConfig                    HurdleInputConfig;                                 // 0xB0(0x530)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FHurdleInputConfigCache               HurdleInputConfigCache;                            // 0x5E0(0x8C)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DF1[0x4];                                     // Fixing Size After Last Property 
	TSubclassOf<class UFortMovementMode_BaseExtLogic> MovementModeExtension;                             // 0x670(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DF3[0x8];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        HurdleEnabled;                                     // 0x680(0x28)(Edit, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AutoHurdleEnabled;                                 // 0x6A8(0x28)(Edit, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1DFB[0x138];                                   // Fixing Size After Last Property 
	struct FReplicatedHurdleTargetingData        ReplayHurdleTargetingData;                         // 0x808(0x70)(Net, NoDestructor, NativeAccessSpecifierPrivate)
	double                                       LastTeleportTime;                                  // 0x878(0x8)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FHurdleTargetingData                  ParallelTargetingData;                             // 0x880(0x130)(Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E00[0x1];                                     // Fixing Size After Last Property 
	enum class EHurdleState                      ReplicatedHurdleState;                             // 0x9B1(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E01[0x2E];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UHurdleComponent* GetDefaultObj();

	void UnregisterMutatorUpdatedDelegate();
	bool ShouldShowHurdleIndicator();
	void ServerStartHurdle(const struct FReplicatedHurdleTargetingData& InReplicatedTargetingData, double ClientLastTeleportTime);
	void RegisterMutatorUpdatedDelegate(class UPawn* AffectedPawn);
	void OnRep_ReplicatedLastTeleportTime();
	void OnRep_ReplicatedHurdleState();
	void OnPlayerStatePawnSet(class UPlayerState* Player, class UPawn* NewPawn, class UPawn* OldPawn);
	void OnMutatorUpdated();
	bool IsContextualActionPrototypeActive();
	void HandleTargetingDataValid(struct FHurdleTargetingData& TargetingData);
	void HandleTargetingDataInvalid();
	void HandleOwnerTeleported(class UFortPawn* TeleportedOwner);
	void HandleOwnerMovementModeChanged(class UCharacter* Character, enum class EMovementMode PreviousMovementMode, uint8 PreviousCustomMode);
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

	static class UClass* StaticClass();
	static class UHurdleLibrary* GetDefaultObj();

	bool PerformHurdleTargeting(class UCharacter* Character, struct FHurdleInputConfigCache* HurdleInputConfig, struct FHurdleTargetingData* OutTargetingData, bool bIsAutoHurdle);
};

}


