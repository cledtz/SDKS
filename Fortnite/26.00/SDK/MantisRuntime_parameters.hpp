#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function MantisRuntime.FortMantisLayerAnimInstance.OnMantisTechniqueStarted
struct UFortMantisLayerAnimInstance_OnMantisTechniqueStarted_Params
{
public:
	int32                                        TechniqueIndex;                                    // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TechniqueName;                                     // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MantisRuntime.FortMantisLayerAnimInstance.OnMantisTechniqueEnded
struct UFortMantisLayerAnimInstance_OnMantisTechniqueEnded_Params
{
public:
	int32                                        TechniqueIndex;                                    // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TechniqueName;                                     // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MantisRuntime.FortGameplayAbility_Mantis.OnMontageFinished
struct UFortGameplayAbility_Mantis_OnMontageFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MantisRuntime.FortGameplayAbility_Mantis.OnMontageCancelled
struct UFortGameplayAbility_Mantis_OnMontageCancelled_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function MantisRuntime.FortGameplayAbility_Mantis.GetLevelForGameplayEffectContainer
struct UFortGameplayAbility_Mantis_GetLevelForGameplayEffectContainer_Params
{
public:
	struct FGameplayTag                          ApplicationTag;                                    // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MantisRuntime.FortGameplayAbility_Mantis.GetDynamicMontageNameForTechnique
struct UFortGameplayAbility_Mantis_GetDynamicMontageNameForTechnique_Params
{
public:
	class FName                                  TechniqueName;                                     // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x148 (0x148 - 0x0)
// Function MantisRuntime.FortGameplayAbility_Mantis.FillMetadataForTechnique
struct UFortGameplayAbility_Mantis_FillMetadataForTechnique_Params
{
public:
	class FName                                  TechniqueName;                                     // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3589[0x4];                                     // Fixing Size After Last Property 
	struct FFortMantisTechniqueMetadata          OutTechniqueMetadata;                              // 0x8(0x140)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function MantisRuntime.FortGameplayAbility_Mantis.ConfigureRootMotionWarping
struct UFortGameplayAbility_Mantis_ConfigureRootMotionWarping_Params
{
public:
	class FName                                  TechniqueName;                                     // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOutAllowTranslationWarp;                          // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOutAllowRotationWarp;                             // 0x5(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_358E[0x2];                                     // Fixing Size After Last Property 
	class UActor*                                OutTargetActor;                                    // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOutSnapshotTargetActorLocation;                   // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOutWarpTranslationToLocation;                     // 0x11(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_358F[0x6];                                     // Fixing Size After Last Property 
	struct FVector                               OutTargetLocation;                                 // 0x18(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MantisRuntime.FortGameplayAbility_Mantis.BP_OnTechniqueNotifyWindowStarted
struct UFortGameplayAbility_Mantis_BP_OnTechniqueNotifyWindowStarted_Params
{
public:
	enum class EFortMantisNotifyWindow           NotifyWindow;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3598[0x7];                                     // Fixing Size After Last Property 
	class UFortAnimNotifyState_Mantis*           Notify;                                            // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MantisRuntime.FortGameplayAbility_Mantis.BP_OnTechniqueNotifyWindowEnded
struct UFortGameplayAbility_Mantis_BP_OnTechniqueNotifyWindowEnded_Params
{
public:
	enum class EFortMantisNotifyWindow           NotifyWindow;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_359C[0x7];                                     // Fixing Size After Last Property 
	class UFortAnimNotifyState_Mantis*           Notify;                                            // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MantisRuntime.FortGameplayAbility_Mantis.BP_OnTechniqueNotifyEvent
struct UFortGameplayAbility_Mantis_BP_OnTechniqueNotifyEvent_Params
{
public:
	enum class EFortMantisNotifyEvent            NotifyEvent;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35A0[0x7];                                     // Fixing Size After Last Property 
	class UFortAnimNotify_Mantis*                Notify;                                            // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function MantisRuntime.FortGameplayAbility_Mantis.BP_OnMantisTechniqueHit
struct UFortGameplayAbility_Mantis_BP_OnMantisTechniqueHit_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetDataHandle;                                  // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ApplicationTag;                                    // 0x28(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35A5[0x4];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function MantisRuntime.FortGameplayAbility_Mantis.BP_OnMantisInputEvent
struct UFortGameplayAbility_Mantis_BP_OnMantisInputEvent_Params
{
public:
	enum class EFortMantisTechniqueActivationInputType InputType;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMantisTechniqueActivationTimingType InputTiming;                                       // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDidInputStartTechnique;                           // 0x2(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDidInputQueueTechnique;                           // 0x3(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InputHeldDuration;                                 // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function MantisRuntime.FortGameplayAbility_Mantis.BP_MantisAbilityTechniqueStarted
struct UFortGameplayAbility_Mantis_BP_MantisAbilityTechniqueStarted_Params
{
public:
	struct FGameplayTagContainer                 OwningTags;                                        // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
	class FName                                  SequenceName;                                      // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         StartsSequence;                                    // 0x24(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EndsSequence;                                      // 0x25(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35BF[0x2];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function MantisRuntime.FortMantisPawnComponent.TryManuallyStartTechnique
struct UFortMantisPawnComponent_TryManuallyStartTechnique_Params
{
public:
	int32                                        TechniqueDataIndex;                                // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35DC[0x3];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// Function MantisRuntime.FortMantisPawnComponent.TryManuallyEndCurrentTechnique
struct UFortMantisPawnComponent_TryManuallyEndCurrentTechnique_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function MantisRuntime.FortMantisPawnComponent.SimulateInputEvent
struct UFortMantisPawnComponent_SimulateInputEvent_Params
{
public:
	enum class EFortMantisTechniqueActivationInputType InputType;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMantisTechniqueActivationTimingType InputTiming;                                       // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceProcessEvent;                                // 0x2(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MantisRuntime.FortMantisPawnComponent.SetLockOnState
struct UFortMantisPawnComponent_SetLockOnState_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35EE[0x7];                                     // Fixing Size After Last Property 
	class UActor*                                TargetActor;                                       // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function MantisRuntime.FortMantisPawnComponent.SetBranchRule
struct UFortMantisPawnComponent_SetBranchRule_Params
{
public:
	enum class EFortMantisBranchRule             InBranchRule;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMantisBranchPath             InBranchPath;                                      // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MantisRuntime.FortMantisPawnComponent.OnPostPhysicsRotation
struct UFortMantisPawnComponent_OnPostPhysicsRotation_Params
{
public:
	class UCharacterMovementComponent*           CharMoveComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeltaSeconds;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35F8[0x4];                                     // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function MantisRuntime.FortMantisPawnComponent.OnOwnerWeaponHolstered
struct UFortMantisPawnComponent_OnOwnerWeaponHolstered_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function MantisRuntime.FortMantisPawnComponent.OnCharacterMovementPreUpdate
struct UFortMantisPawnComponent_OnCharacterMovementPreUpdate_Params
{
public:
	class UCharacterMovementComponent*           CharMoveComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeltaSeconds;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35FC[0x4];                                     // Fixing Size Of Struct
};

// 0x2 (0x2 - 0x0)
// Function MantisRuntime.FortMantisPawnComponent.IsSpecificInputPressed
struct UFortMantisPawnComponent_IsSpecificInputPressed_Params
{
public:
	enum class EFortMantisTechniqueActivationInputType InputType;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MantisRuntime.FortMantisPawnComponent.IsPerformingLockOn
struct UFortMantisPawnComponent_IsPerformingLockOn_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MantisRuntime.FortMantisPawnComponent.HasLockOnTarget
struct UFortMantisPawnComponent_HasLockOnTarget_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MantisRuntime.FortMantisPawnComponent.HasCurrentTechniqueMetadataBeenSet
struct UFortMantisPawnComponent_HasCurrentTechniqueMetadataBeenSet_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MantisRuntime.FortMantisPawnComponent.GetLockOnTarget
struct UFortMantisPawnComponent_GetLockOnTarget_Params
{
public:
	class UActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x140 (0x140 - 0x0)
// Function MantisRuntime.FortMantisPawnComponent.GetCurrentTechniqueMetadata
struct UFortMantisPawnComponent_GetCurrentTechniqueMetadata_Params
{
public:
	struct FFortMantisTechniqueMetadata          ReturnValue;                                       // 0x0(0x140)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MantisRuntime.FortMantisWeaponComponent.OnWeaponAbilitiesRemoved
struct UFortMantisWeaponComponent_OnWeaponAbilitiesRemoved_Params
{
public:
	class UFortWeapon*                           Weapon;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortWeaponAbilityRemovalReason   RemovalReason;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3613[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function MantisRuntime.FortMantisWeaponComponent.OnUnEquip
struct UFortMantisWeaponComponent_OnUnEquip_Params
{
public:
	class UFortWeapon*                           Weapon;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MantisRuntime.FortMantisWeaponComponent.OnRep_ReplayAnimInstanceInfo
struct UFortMantisWeaponComponent_OnRep_ReplayAnimInstanceInfo_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function MantisRuntime.FortMantisWeaponComponent.OnReleaseTrigger
struct UFortMantisWeaponComponent_OnReleaseTrigger_Params
{
public:
	class UFortWeapon*                           Weapon;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MantisRuntime.FortMantisWeaponComponent.OnReleaseSecondaryFire
struct UFortMantisWeaponComponent_OnReleaseSecondaryFire_Params
{
public:
	class UFortWeapon*                           Weapon;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MantisRuntime.FortMantisWeaponComponent.OnPressTrigger
struct UFortMantisWeaponComponent_OnPressTrigger_Params
{
public:
	class UFortWeapon*                           Weapon;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MantisRuntime.FortMantisWeaponComponent.OnPressSecondaryFire
struct UFortMantisWeaponComponent_OnPressSecondaryFire_Params
{
public:
	class UFortWeapon*                           Weapon;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MantisRuntime.FortMantisWeaponComponent.OnEquip
struct UFortMantisWeaponComponent_OnEquip_Params
{
public:
	class UFortWeapon*                           Weapon;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MantisRuntime.FortMantisWeaponComponent.GetAnimInstanceInfo
struct UFortMantisWeaponComponent_GetAnimInstanceInfo_Params
{
public:
	struct FFortMantisReplicatedAnimInstanceInfo ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

}
}


