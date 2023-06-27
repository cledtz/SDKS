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
// Function RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding.UpdateSlopePitchForRiding
struct UFortVehicleLayerAnimInstance_Riding_UpdateSlopePitchForRiding_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding.UpdateBoostPlayRate
struct UFortVehicleLayerAnimInstance_Riding_UpdateBoostPlayRate_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding.SetFootPhase
struct UFortVehicleLayerAnimInstance_Riding_SetFootPhase_Params
{
public:
	enum class ERidingFootPhase                  InFootPhase;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding.PlaceHandIKTargets
struct UFortVehicleLayerAnimInstance_Riding_PlaceHandIKTargets_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding.BlueprintCollectRidableAnimBPData
struct UFortVehicleLayerAnimInstance_Riding_BlueprintCollectRidableAnimBPData_Params
{
public:
	class UAnimInstance*                         RidableAnimInstance;                               // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.RidingCheatManager.StopRidingActor
struct URidingCheatManager_StopRidingActor_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.RidingCheatManager.StartRidingActor
struct URidingCheatManager_StartRidingActor_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function RidingCodeRuntime.RidingCheatManager.RidingSetStaminaPercent
struct URidingCheatManager_RidingSetStaminaPercent_Params
{
public:
	float                                        StaminaPercent;                                    // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RidingCodeRuntime.RidableComponent.ShouldCameraFocusOnRidable
struct URidableComponent_ShouldCameraFocusOnRidable_Params
{
public:
	class URiderComponent*                       Rider;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D58[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.RidableComponent.OnRep_ActiveRider
struct URidableComponent_OnRep_ActiveRider_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function RidingCodeRuntime.RidableComponent.IsSprinting
struct URidableComponent_IsSprinting_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RidingCodeRuntime.RidableComponent.IsFlying
struct URidableComponent_IsFlying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RidingCodeRuntime.RidableComponent.IsBeingRidden
struct URidableComponent_IsBeingRidden_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RidingCodeRuntime.RidableComponent.HandleRiderStoppedRiding
struct URidableComponent_HandleRiderStoppedRiding_Params
{
public:
	class URiderComponent*                       Rider;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RidingCodeRuntime.RidableComponent.HandleRiderStartedRiding
struct URidableComponent_HandleRiderStartedRiding_Params
{
public:
	class URiderComponent*                       Rider;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RidingCodeRuntime.RidableComponent.HandleRiderEndPlay
struct URidableComponent_HandleRiderEndPlay_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D59[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function RidingCodeRuntime.RidableComponent.GetRidingEmoteCapsuleSize
struct URidableComponent_GetRidingEmoteCapsuleSize_Params
{
public:
	class URiderComponent*                       Rider;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OriginalRadius;                                    // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OriginalHalfHeight;                                // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutRadius;                                         // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutHalfHeight;                                     // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RidingCodeRuntime.RidableComponent.GetRidingCapsuleSize
struct URidableComponent_GetRidingCapsuleSize_Params
{
public:
	class URiderComponent*                       Rider;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OriginalRadius;                                    // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OriginalHalfHeight;                                // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutRadius;                                         // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutHalfHeight;                                     // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RidingCodeRuntime.RidableComponent.GetRidingAttachComponent
struct URidableComponent_GetRidingAttachComponent_Params
{
public:
	class USceneComponent*                       ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function RidingCodeRuntime.RidableComponent.GetPettingData
struct URidableComponent_GetPettingData_Params
{
public:
	struct FRidingPettingData                    ReturnValue;                                       // 0x0(0x110)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RidingCodeRuntime.RidableComponent.CheatSetStaminaPercent
struct URidableComponent_CheatSetStaminaPercent_Params
{
public:
	float                                        StaminaPercent;                                    // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RidingCodeRuntime.RidableComponent.CanRiderPlayEmote
struct URidableComponent_CanRiderPlayEmote_Params
{
public:
	class URiderComponent*                       Rider;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D5A[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function RidingCodeRuntime.RidableComponent.CanBeRiddenBP
struct URidableComponent_CanBeRiddenBP_Params
{
public:
	class URiderComponent*                       Rider;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D5B[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function RidingCodeRuntime.RidableComponent.CanBePet
struct URidableComponent_CanBePet_Params
{
public:
	class URiderComponent*                       Rider;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D5C[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.ControllableRidableComponent.ServerDoJumpExit
struct UControllableRidableComponent_ServerDoJumpExit_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.ControllableRidableComponent.OnRep_IsBeingControlled
struct UControllableRidableComponent_OnRep_IsBeingControlled_Params
{
public:
};

// 0x100 (0x100 - 0x0)
// Function RidingCodeRuntime.ControllableRidableComponent.OnCapsuleBeginOverlap
struct UControllableRidableComponent_OnCapsuleBeginOverlap_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComp;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D65[0x3];                                     // Fixing Size After Last Property..
	struct FHitResult                            SweepResult;                                       // 0x20(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RidingCodeRuntime.ControllableRidableComponent.IsSprintToggleable
struct UControllableRidableComponent_IsSprintToggleable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.ControllableRidableComponent.HandleJumpStopped
struct UControllableRidableComponent_HandleJumpStopped_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.ControllableRidableComponent.HandleJumpStarted
struct UControllableRidableComponent_HandleJumpStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.ControllableRidableComponent.HandleJumpHeld
struct UControllableRidableComponent_HandleJumpHeld_Params
{
public:
};

// 0x2 (0x2 - 0x0)
// Function RidingCodeRuntime.ControllableRidableComponent.HandleCancelSprint
struct UControllableRidableComponent_HandleCancelSprint_Params
{
public:
	bool                                         bAbilityInputHeld;                                 // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceCancel;                                      // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.ControllableRidableComponent.HandleAbilityStopped
struct UControllableRidableComponent_HandleAbilityStopped_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.ControllableRidableComponent.HandleAbilityStarted
struct UControllableRidableComponent_HandleAbilityStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.ControllableRidableComponent.HandleAbilityHeld
struct UControllableRidableComponent_HandleAbilityHeld_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function RidingCodeRuntime.ControllableRidableComponent.GetAbilityDisplayText
struct UControllableRidableComponent_GetAbilityDisplayText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RidingCodeRuntime.ControllableRidableComponent.CanStartSprinting
struct UControllableRidableComponent_CanStartSprinting_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.ControllableRidableComponent.CancelBuildBar
struct UControllableRidableComponent_CancelBuildBar_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function RidingCodeRuntime.ControllableRidableComponent.CanBeControlled
struct UControllableRidableComponent_CanBeControlled_Params
{
public:
	class URiderComponent*                       Rider;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D66[0x7];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// Function RidingCodeRuntime.RiderComponent.StopRidingActor
struct URiderComponent_StopRidingActor_Params
{
public:
	bool                                         bLaunchRider;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFindDismountLocation;                             // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsJumpExit;                                       // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RidingCodeRuntime.RiderComponent.StartRidingActor
struct URiderComponent_StartRidingActor_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D6B[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.RiderComponent.ServerRidingExit
struct URiderComponent_ServerRidingExit_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.RiderComponent.OnRep_RidableControlRuntimeUpdated
struct URiderComponent_OnRep_RidableControlRuntimeUpdated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.RiderComponent.OnRep_IsSprintingReplay
struct URiderComponent_OnRep_IsSprintingReplay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.RiderComponent.OnRep_ActiveRidable
struct URiderComponent_OnRep_ActiveRidable_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function RidingCodeRuntime.RiderComponent.OnMovementModeChanged
struct URiderComponent_OnMovementModeChanged_Params
{
public:
	class ACharacter*                            InCharacter;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovementMode                     PrevMovementMode;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PreviousCustomMode;                                // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D6C[0x6];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function RidingCodeRuntime.RiderComponent.IsRidingActor
struct URiderComponent_IsRidingActor_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RidingCodeRuntime.RiderComponent.HandleStoppedRiding
struct URiderComponent_HandleStoppedRiding_Params
{
public:
	class URidableComponent*                     Ridable;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RidingCodeRuntime.RiderComponent.HandleStartedRiding
struct URiderComponent_HandleStartedRiding_Params
{
public:
	class URidableComponent*                     Ridable;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.RiderComponent.HandleRidingExitReleased
struct URiderComponent_HandleRidingExitReleased_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.RiderComponent.HandleRidingExitPressed
struct URiderComponent_HandleRidingExitPressed_Params
{
public:
};

// 0x60 (0x60 - 0x0)
// Function RidingCodeRuntime.RiderComponent.HandleRiderTakenDamage
struct URiderComponent_HandleRiderTakenDamage_Params
{
public:
	class AActor*                                DamageOnOwnerPawnDamageddActor;                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D6D[0x4];                                     // Fixing Size After Last Property..
	class AController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D6E[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function RidingCodeRuntime.RiderComponent.HandleRiderDidDamage
struct URiderComponent_HandleRiderDidDamage_Params
{
public:
	class AActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D6F[0x4];                                     // Fixing Size After Last Property..
	class AController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   HitComponent;                                      // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D70[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function RidingCodeRuntime.RiderComponent.HandleRidableFound
struct URiderComponent_HandleRidableFound_Params
{
public:
	struct FHitResult                            HitResult;                                         // 0x0(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RidingCodeRuntime.RiderComponent.HandlePawnTeleported
struct URiderComponent_HandlePawnTeleported_Params
{
public:
	class AFortPawn*                             TeleportedPawn;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RidingCodeRuntime.RiderComponent.HandlePawnDiedWhileRiding
struct URiderComponent_HandlePawnDiedWhileRiding_Params
{
public:
	class AFortPawn*                             DeadPawn;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RidingCodeRuntime.RiderComponent.HandleOnWeaponEquipped
struct URiderComponent_HandleOnWeaponEquipped_Params
{
public:
	class AFortWeapon*                           NewWeapon;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortWeapon*                           PrevWeapon;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.RiderComponent.HandleGamepadRidingExitReleased
struct URiderComponent_HandleGamepadRidingExitReleased_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function RidingCodeRuntime.RiderComponent.HandleDeferredExitVelocity
struct URiderComponent_HandleDeferredExitVelocity_Params
{
public:
	struct FVector                               ExitVelocity;                                      // 0x0(0x18)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.RiderComponent.HandleDBNOWhileRiding
struct URiderComponent_HandleDBNOWhileRiding_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function RidingCodeRuntime.RiderComponent.HandleActorEndPlayWhileRiding
struct URiderComponent_HandleActorEndPlayWhileRiding_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D71[0x7];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// Function RidingCodeRuntime.RiderComponent.ClientNotifyEmoteFailure
struct URiderComponent_ClientNotifyEmoteFailure_Params
{
public:
	struct FGameplayTagContainer                 ErrorTags;                                         // 0x0(0x20)(ConstParm, Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RidingCodeRuntime.RiderComponent.ClientHandleFinishedCharacterCustomization
struct URiderComponent_ClientHandleFinishedCharacterCustomization_Params
{
public:
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RidingCodeRuntime.ControllingRiderComponent.UpdateFromInput
struct UControllingRiderComponent_UpdateFromInput_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRidingControlInputState              InputState;                                        // 0x4(0xC)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function RidingCodeRuntime.ControllingRiderComponent.ServerUpdateControlInputStateUnreliable
struct UControllingRiderComponent_ServerUpdateControlInputStateUnreliable_Params
{
public:
	struct FRidingControlInputStateUnreliable    InputState;                                        // 0x0(0x2)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RidingCodeRuntime.ControllingRiderComponent.ServerUpdateControlInputStateReliable
struct UControllingRiderComponent_ServerUpdateControlInputStateReliable_Params
{
public:
	struct FRidingControlInputStateReliable      InputState;                                        // 0x0(0x1)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.ControllingRiderComponent.ServerCancelPetting
struct UControllingRiderComponent_ServerCancelPetting_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.ControllingRiderComponent.ReloadPressed
struct UControllingRiderComponent_ReloadPressed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.ControllingRiderComponent.OnSprintCanceled
struct UControllingRiderComponent_OnSprintCanceled_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.ControllingRiderComponent.OnRep_IsControllingRidable
struct UControllingRiderComponent_OnRep_IsControllingRidable_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.ControllingRiderComponent.OnRep_ControlInputUnreliable
struct UControllingRiderComponent_OnRep_ControlInputUnreliable_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.ControllingRiderComponent.OnRep_ControlInputReliable
struct UControllingRiderComponent_OnRep_ControlInputReliable_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function RidingCodeRuntime.ControllingRiderComponent.IsTryingToMove
struct UControllingRiderComponent_IsTryingToMove_Params
{
public:
	float                                        Tolerance;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D7F[0x3];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.ControllingRiderComponent.HandleSpotActorOrPettingAbilityReleased
struct UControllingRiderComponent_HandleSpotActorOrPettingAbilityReleased_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.ControllingRiderComponent.HandleSpotActorOrPettingAbilityPressed
struct UControllingRiderComponent_HandleSpotActorOrPettingAbilityPressed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.ControllingRiderComponent.HandleRidingAbilityReleased
struct UControllingRiderComponent_HandleRidingAbilityReleased_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.ControllingRiderComponent.HandleRidingAbilityPressed
struct UControllingRiderComponent_HandleRidingAbilityPressed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.ControllingRiderComponent.HandleRequestPettingStop
struct UControllingRiderComponent_HandleRequestPettingStop_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.ControllingRiderComponent.HandleRequestPettingStart
struct UControllingRiderComponent_HandleRequestPettingStart_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.ControllingRiderComponent.HandlePettingAbilityPressed
struct UControllingRiderComponent_HandlePettingAbilityPressed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.ControllingRiderComponent.HandleGamepadRidingAbilityPressed
struct UControllingRiderComponent_HandleGamepadRidingAbilityPressed_Params
{
public:
};

// 0xC (0xC - 0x0)
// Function RidingCodeRuntime.ControllingRiderComponent.GetControlInputState
struct UControllingRiderComponent_GetControlInputState_Params
{
public:
	struct FRidingControlInputState              ReturnValue;                                       // 0x0(0xC)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RidingCodeRuntime.ControllingRiderComponent.ControllingActor_OnMoveRight
struct UControllingRiderComponent_ControllingActor_OnMoveRight_Params
{
public:
	float                                        Val;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RidingCodeRuntime.ControllingRiderComponent.ControllingActor_OnMoveForward
struct UControllingRiderComponent_ControllingActor_OnMoveForward_Params
{
public:
	float                                        Val;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RidingCodeRuntime.ControllingRiderComponent.ControllingActor_OnJumpInput
struct UControllingRiderComponent_ControllingActor_OnJumpInput_Params
{
public:
	bool                                         bPressed;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function RidingCodeRuntime.FortAthenaPettingWildlifeTelemetryData.OnPetted
struct UFortAthenaPettingWildlifeTelemetryData_OnPetted_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
