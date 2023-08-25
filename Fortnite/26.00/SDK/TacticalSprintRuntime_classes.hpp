#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x238 (0x280 - 0x48)
// Class TacticalSprintRuntime.FortMovementMode_ELTacSprint
class UFortMovementMode_ELTacSprint : public UFortMovementMode_BaseExtLogic
{
public:
	uint8                                        Pad_1B1C[0x8];                                     // Fixing Size After Last Property 
	struct FGameplayTag                          GCEnergyDrain;                                     // 0x50(0x4)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          GCSpeedLines;                                      // 0x54(0x4)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          GCSprintEnd;                                       // 0x58(0x4)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B1D[0x4];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        MaxSpeedMultiplier;                                // 0x60(0x28)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        JumpHeightMultiplier;                              // 0x88(0x28)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B1E[0x4];                                     // Fixing Size After Last Property 
	struct FGameplayTag                          TutorialGameplayTag;                               // 0xB4(0x4)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 TutorialAdditionalSourceTag;                       // 0xB8(0x20)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 TutorialTargetTag;                                 // 0xD8(0x20)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTag                          TagPreventWeaponHolster;                           // 0xF8(0x4)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B1F[0x4];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 TacticalSprintFail;                                // 0x100(0x20)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 TacticalSprintFailLowEnergy;                       // 0x120(0x20)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	class USoundBase*                            OnEnergyFullyDrainedSound;                         // 0x140(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinSpeedForHolster;                                // 0x148(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HolsterTimeAttemptDelay;                           // 0x14C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B20[0xC];                                     // Fixing Size After Last Property 
	float                                        MinEnergyToActivate;                               // 0x15C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinEnergyToActivateRow;                            // 0x160(0x28)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        HF_EnergyCostOnSlide;                              // 0x188(0x28)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        HF_EnergyCostOnStart;                              // 0x1B0(0x28)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        HF_EnergyCostPerSecond;                            // 0x1D8(0x28)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        HF_EnergyCostOnJump;                               // 0x200(0x28)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTag                          IgnoreJumpCostTag;                                 // 0x228(0x4)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          TacticalSprintTag;                                 // 0x22C(0x4)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          EnergyUseIdentifier;                               // 0x230(0x4)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B21[0x4];                                     // Fixing Size After Last Property 
	class USoundMix*                             SprintStartedSoundMix;                             // 0x238(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                            SprintStartedSound2D;                              // 0x240(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        HF_TacSprintEnabled;                               // 0x248(0x28)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortCameraMode>           CameraMode;                                        // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          CameraModeTag;                                     // 0x278(0x4)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B23[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortMovementMode_ELTacSprint* GetDefaultObj();

	void HandleOnReloadCanceling();
	void HandleOnPawnJump();
	void HandleOnEnteredEditMode();
	void HandleOnEnterAircraft();
	void HandleOnEnergyDrained(class UFortComponent_Energy* EnergyComp);
	void HandleMovementModeChanged(class UCharacter* Character, enum class EMovementMode PreviousMovementMode, uint8 PreviousCustomMode);
	void HandleFailedToSprint();
};

// 0x138 (0x1D8 - 0xA0)
// Class TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint
class UFortPlayerControllerComponent_TacticalSprint : public UControllerComponent
{
public:
	uint8                                        Pad_1B3C[0x18];                                    // Fixing Size After Last Property 
	TSubclassOf<class UFortMovementMode_BaseExtLogic> MovementModeExtension;                             // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailedToSprint;                                  // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UFortPlayerPawn*                       CurrentBoundPlayerPawn;                            // 0xD0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bTacticalSprintEnabled : 1;                        // Mask: 0x1, PropSize: 0x10xD8(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bWantsToTacticalSprint : 1;                        // Mask: 0x2, PropSize: 0x10xD8(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bHandlingMoveForward : 1;                          // Mask: 0x4, PropSize: 0x10xD8(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bIsSprinting : 1;                                  // Mask: 0x8, PropSize: 0x10xD8(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bWasInBuildMode : 1;                               // Mask: 0x10, PropSize: 0x10xD8(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bFireAnalyticsEventOnEndPlay : 1;                  // Mask: 0x20, PropSize: 0x10xD8(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_12A : 2;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_1B3F[0x3];                                     // Fixing Size After Last Property 
	struct FGameplayTag                          TacticalSprintAbilityGameplayTag;                  // 0xDC(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTag                          DisableTacticalSprintAbilityGameplayTag;           // 0xE0(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B40[0x4];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        TacticalSprintEnabled;                             // 0xE8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        TacticalSprintToggleGracePeriod;                   // 0x110(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnTacticalSprintStarted;                           // 0x138(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnTacticalSprintEnded;                             // 0x148(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FTimerHandle                          StopWantingToSprintTimerReceipt;                   // 0x158(0x8)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B41[0x68];                                    // Fixing Size After Last Property 
	class UInputComponent*                       InputComponent;                                    // 0x1C8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B42[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortPlayerControllerComponent_TacticalSprint* GetDefaultObj();

	void SetIsSprinting(bool bNewIsSprinting);
	void RegisterMutatorUpdatedDelegate();
	void OnWeaponEquipped(class UFortWeapon* NewWeapon, class UFortWeapon* PreviousWeapon);
	void OnPlayerStatePawnSet(class UPlayerState* Player, class UPawn* NewPawn, class UPawn* OldPawn);
	void OnPawnChanged(class UFortPawn* InPawn);
	void OnMutatorUpdated();
	void OnMovementModeChanged(class UCharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void OnAutoRunChanged(bool bAutoRunIsOn);
	void LogAndVisualLog(class UObject* LoggingSource, enum class ESprintLoggingVerbosityLevel Verbosity, class FString& LogString);
};

}


