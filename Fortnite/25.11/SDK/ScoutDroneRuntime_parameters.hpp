#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x0 - 0x0)
// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dive.BP_OnDroneStoppedDiving
struct UFortGameplayAbility_ScoutDrone_Dive_BP_OnDroneStoppedDiving_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dive.BP_OnDroneStartedDiving
struct UFortGameplayAbility_ScoutDrone_Dive_BP_OnDroneStartedDiving_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_TargetingBase.StopTargeting
struct UFortGameplayAbility_ScoutDrone_TargetingBase_StopTargeting_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_TargetingBase.StartTargeting
struct UFortGameplayAbility_ScoutDrone_TargetingBase_StartTargeting_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_TargetingBase.BP_OnTargetsFound
struct UFortGameplayAbility_ScoutDrone_TargetingBase_BP_OnTargetsFound_Params
{
public:
	struct FTargetingRequestHandle               TargetingHandle;                                   // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xE8 (0xE8 - 0x0)
// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_SpeedBoost.OnDoorBashed
struct UFortGameplayAbility_ScoutDrone_SpeedBoost_OnDoorBashed_Params
{
public:
	struct FHitResult                            HitResult;                                         // 0x0(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UFortBuildingWallDoorComponent*        BashedDoor;                                        // 0xE0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_SpeedBoost.OnBoostedIntoActor
struct UFortGameplayAbility_ScoutDrone_SpeedBoost_OnBoostedIntoActor_Params
{
public:
	struct FHitResult                            HitResult;                                         // 0x0(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dismiss.GetControlledDrone
struct UFortGameplayAbility_ScoutDrone_Dismiss_GetControlledDrone_Params
{
public:
	class AFortScoutDrone*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_MarkPotentialTargets.OnStoppedHighlightingTarget
struct UFortGameplayAbility_ScoutDrone_MarkPotentialTargets_OnStoppedHighlightingTarget_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_MarkPotentialTargets.OnStartHighlightingTarget
struct UFortGameplayAbility_ScoutDrone_MarkPotentialTargets_OnStartHighlightingTarget_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PassiveMark.OnRep_CurrentTargetStatus
struct UFortGameplayAbility_ScoutDrone_PassiveMark_OnRep_CurrentTargetStatus_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PassiveMark.OnActorIndicatorExpired
struct UFortGameplayAbility_ScoutDrone_PassiveMark_OnActorIndicatorExpired_Params
{
public:
	class AActor*                                IndicatedActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PassiveMark.BP_OnTargetStatusChanged
struct UFortGameplayAbility_ScoutDrone_PassiveMark_BP_OnTargetStatusChanged_Params
{
public:
	class AActor*                                ActiveTarget;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PickUp.ServerConfirmTargets
struct UFortGameplayAbility_ScoutDrone_PickUp_ServerConfirmTargets_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether.StopCheckingDistances
struct UFortGameplayAbility_ScoutDrone_Tether_StopCheckingDistances_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether.StartCheckingDistances
struct UFortGameplayAbility_ScoutDrone_Tether_StartCheckingDistances_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether.OnRep_bIsInWarningRange
struct UFortGameplayAbility_ScoutDrone_Tether_OnRep_bIsInWarningRange_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether.OnRep_bIsInSignalLossRange
struct UFortGameplayAbility_ScoutDrone_Tether_OnRep_bIsInSignalLossRange_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function ScoutDroneRuntime.FortAthenaMutator_ScoutDrone.OnViewTargetChanged
struct AFortAthenaMutator_ScoutDrone_OnViewTargetChanged_Params
{
public:
	class AFortPlayerController*                 PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OldViewTarget;                                     // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                NewViewTarget;                                     // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ScoutDroneRuntime.FortChargingSet_ScoutDroneEnergy.OnRep_Energy
struct UFortChargingSet_ScoutDroneEnergy_OnRep_Energy_Params
{
public:
	struct FFortGameplayAttributeData            OldValue;                                          // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneRuntime.FortScoutDrone.SetupGameplayAudioParameters
struct AFortScoutDrone_SetupGameplayAudioParameters_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function ScoutDroneRuntime.FortScoutDrone.SetTeamMatesIndicator
struct AFortScoutDrone_SetTeamMatesIndicator_Params
{
public:
	bool                                         bState;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneRuntime.FortScoutDrone.SetAffiliationAudio
struct AFortScoutDrone_SetAffiliationAudio_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneRuntime.FortScoutDrone.OnRep_ControllingPlayerPawn
struct AFortScoutDrone_OnRep_ControllingPlayerPawn_Params
{
public:
};

// 0x148 (0x148 - 0x0)
// Function ScoutDroneRuntime.FortScoutDrone.OnDeathPlayEffects
struct AFortScoutDrone_OnDeathPlayEffects_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_257C[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 DamageTags;                                        // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVector                               Momentum;                                          // 0x28(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            HitInfo;                                           // 0x40(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AFortPawn*                             InstigatedBy;                                      // 0x120(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x128(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x130(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x148 (0x148 - 0x0)
// Function ScoutDroneRuntime.FortScoutDrone.OnDamagePlayEffects
struct AFortScoutDrone_OnDamagePlayEffects_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_257D[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 DamageTags;                                        // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVector                               Momentum;                                          // 0x28(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            HitInfo;                                           // 0x40(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AFortPawn*                             InstigatedBy;                                      // 0x120(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x128(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x130(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ScoutDroneRuntime.FortScoutDrone.GetHealthPercentage
struct AFortScoutDrone_GetHealthPercentage_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ScoutDroneRuntime.FortScoutDrone.GetForwardAndRightDotProducts_Native
struct AFortScoutDrone_GetForwardAndRightDotProducts_Native_Params
{
public:
	float                                        OutForwardDot;                                     // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutRightDot;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ScoutDroneRuntime.FortScoutDrone.GetDeltaRotator
struct AFortScoutDrone_GetDeltaRotator_Params
{
public:
	struct FRotator                              ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ScoutDroneRuntime.FortScoutDrone.GetControllingPlayerPawn
struct AFortScoutDrone_GetControllingPlayerPawn_Params
{
public:
	class AFortPawn*                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD8 (0xD8 - 0x0)
// Function ScoutDroneRuntime.FortScoutDrone.GameplayCue_Damage
struct AFortScoutDrone_GameplayCue_Damage_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_257E[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.ServerRequestDroneDismissal
struct UFortScoutDroneControllingComponent_ServerRequestDroneDismissal_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.OnWeaponEquipped
struct UFortScoutDroneControllingComponent_OnWeaponEquipped_Params
{
public:
	class AFortWeapon*                           NewWeapon;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortWeapon*                           PrevWeapon;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.OnRep_CurrentDestructionData
struct UFortScoutDroneControllingComponent_OnRep_CurrentDestructionData_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.OnRep_ControlledDrone
struct UFortScoutDroneControllingComponent_OnRep_ControlledDrone_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.OnPlayerInterruptionTagsChanged
struct UFortScoutDroneControllingComponent_OnPlayerInterruptionTagsChanged_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewCount;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.OnOwningPlayerStartedDBNO
struct UFortScoutDroneControllingComponent_OnOwningPlayerStartedDBNO_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.OnControlledDroneDestroyed
struct UFortScoutDroneControllingComponent_OnControlledDroneDestroyed_Params
{
public:
	class AActor*                                InControlledDrone;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.GetControlledDrone
struct UFortScoutDroneControllingComponent_GetControlledDrone_Params
{
public:
	class AFortScoutDrone*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnPlayerShortInteract
struct UFortScoutDroneControllingComponent_BP_OnPlayerShortInteract_Params
{
public:
};

// 0x2 (0x2 - 0x0)
// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnPlayerInteractLongUseChanged
struct UFortScoutDroneControllingComponent_BP_OnPlayerInteractLongUseChanged_Params
{
public:
	bool                                         bInteracting;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLongUseInteractionCompleted;                      // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnDroneDestroyed
struct UFortScoutDroneControllingComponent_BP_OnDroneDestroyed_Params
{
public:
	struct FGameplayTag                          DismissalReason;                                   // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnDismissalStarted
struct UFortScoutDroneControllingComponent_BP_OnDismissalStarted_Params
{
public:
	bool                                         bInstantDismissal;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2586[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          DismissalReason;                                   // 0x4(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnDestructionStarted
struct UFortScoutDroneControllingComponent_BP_OnDestructionStarted_Params
{
public:
	bool                                         bInstantDestruction;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2587[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          DismissalReason;                                   // 0x4(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ScoutDroneRuntime.FortScoutDronePickupManager.ServerUpdateItemAttachment
struct UFortScoutDronePickupManager_ServerUpdateItemAttachment_Params
{
public:
	struct FVector                               CalculatedItemOffset;                              // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneRuntime.FortScoutDronePickupManager.ServerDropAttachedActors
struct UFortScoutDronePickupManager_ServerDropAttachedActors_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneRuntime.FortScoutDronePickupManager.OnRep_AttachedTargets
struct UFortScoutDronePickupManager_OnRep_AttachedTargets_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ScoutDroneRuntime.FortScoutDronePickupManager.OnPawnDBNOStateChanged
struct UFortScoutDronePickupManager_OnPawnDBNOStateChanged_Params
{
public:
	class AFortPawn*                             Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDBNO;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_258E[0x7];                                     // Fixing Size Of Struct..
};

// 0x60 (0x60 - 0x0)
// Function ScoutDroneRuntime.FortScoutDronePickupManager.OnAttachedPawnDied
struct UFortScoutDronePickupManager_OnAttachedPawnDied_Params
{
public:
	class AActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_258F[0x4];                                     // Fixing Size After Last Property..
	class AController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2590[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ScoutDroneRuntime.FortScoutDronePickupManager.HasAPawnAtached
struct UFortScoutDronePickupManager_HasAPawnAtached_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ScoutDroneRuntime.FortScoutDronePickupManager.HasAnyAttachedActors
struct UFortScoutDronePickupManager_HasAnyAttachedActors_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneRuntime.FortScoutDronePickupManager.BP_OnActorsDetached
struct UFortScoutDronePickupManager_BP_OnActorsDetached_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ScoutDroneRuntime.FortScoutDronePickupManager.BP_OnActorsAttached
struct UFortScoutDronePickupManager_BP_OnActorsAttached_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
