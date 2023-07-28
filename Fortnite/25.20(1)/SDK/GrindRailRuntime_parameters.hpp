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

// 0x10 (0x10 - 0x0)
// Function GrindRailRuntime.FortGrindRail.UpdateTransientComponentTransforms
struct UFortGrindRail_UpdateTransientComponentTransforms_Params
{
public:
	TArray<class USceneComponent*>               TransientSceneComponents;                          // 0x0(0x10)(Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GrindRailRuntime.FortGrindRail.SetupMeshInfo
struct UFortGrindRail_SetupMeshInfo_Params
{
public:
	class USplineMeshComponent*                  SplineMeshComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GrindRailRuntime.FortGrindRail.OnRep_DisableBooster
struct UFortGrindRail_OnRep_DisableBooster_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function GrindRailRuntime.FortGrindRail.OnPlaylistDataReady
struct UFortGrindRail_OnPlaylistDataReady_Params
{
public:
	class UFortGameStateAthena*                  GameState;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPlaylist*                         Playlist;                                          // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x10(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GrindRailRuntime.FortGrindRail.OnPlayerEndedGrinding
struct UFortGrindRail_OnPlayerEndedGrinding_Params
{
public:
	class UFortPlayerPawn*                       Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GrindRailRuntime.FortGrindRail.OnPlayerBeganGrinding
struct UFortGrindRail_OnPlayerBeganGrinding_Params
{
public:
	class UFortPlayerPawn*                       GrindingPawn;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GrindRailRuntime.FortGrindRail.NativeGetNextPositionToGrind
struct UFortGrindRail_NativeGetNextPositionToGrind_Params
{
public:
	float                                        DistanceToTravel;                                  // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentDistanceAlongSpline;                        // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RightLeanValue;                                    // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EDB[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               OutNextLocation;                                   // 0x10(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGotToEnd;                                         // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EDC[0x3];                                     // Fixing Size After Last Property..
	float                                        NextLocationOnRail;                                // 0x2C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGrindRailBoosterMode             BoosterMode;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHitObstacle;                                      // 0x31(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewRail;                                          // 0x32(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EDD[0x1];                                     // Fixing Size After Last Property..
	float                                        DistanceAlongNewRail;                              // 0x34(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortGrindRail*                        TheNewRail;                                        // 0x38(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewRailReverseDirection;                          // 0x40(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EDE[0x7];                                     // Fixing Size Of Struct..
};

// 0x2 (0x2 - 0x0)
// Function GrindRailRuntime.FortGrindRail.IsTipCapped
struct UFortGrindRail_IsTipCapped_Params
{
public:
	bool                                         bStartTip;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GrindRailRuntime.FortGrindRail.IsGrindRailEnabled
struct UFortGrindRail_IsGrindRailEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GrindRailRuntime.FortGrindRail.HasTailConnection
struct UFortGrindRail_HasTailConnection_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GrindRailRuntime.FortGrindRail.HasHeadConnection
struct UFortGrindRail_HasHeadConnection_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GrindRailRuntime.FortGrindRail.GenerateMeshesAlongSpline
struct UFortGrindRail_GenerateMeshesAlongSpline_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GrindRailRuntime.FortGrindRail.ForceClearBoosters
struct UFortGrindRail_ForceClearBoosters_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GrindRailRuntime.FortGrindRail.BPRerunConstructionScript
struct UFortGrindRail_BPRerunConstructionScript_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function GrindRailRuntime.FortGrindRailLayerAnimInstance.HandleBegunGrinding
struct UFortGrindRailLayerAnimInstance_HandleBegunGrinding_Params
{
public:
	bool                                         bWasAlreadyGrinding;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasJumpingFromRail;                               // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromInteraction;                                  // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EE0[0x5];                                     // Fixing Size After Last Property..
	struct FVector                               PreviousPlayerLocation;                            // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GrindRailRuntime.FortGrindRailLayerAnimInstance.AnimNotify_IdleEnter
struct UFortGrindRailLayerAnimInstance_AnimNotify_IdleEnter_Params
{
public:
	class UAnimNotify*                           Notify;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GrindRailRuntime.FortGrindRailLayerAnimInstance.AnimNotify_EntryExit
struct UFortGrindRailLayerAnimInstance_AnimNotify_EntryExit_Params
{
public:
	class UAnimNotify*                           Notify;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GrindRailRuntime.FortGrindRailLayerAnimInstance.AnimNotify_EntryEnter
struct UFortGrindRailLayerAnimInstance_AnimNotify_EntryEnter_Params
{
public:
	class UAnimNotify*                           Notify;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GrindRailRuntime.FortGameplayCueNotifyLoop_Grinding.OnForwardChanged
struct UFortGameplayCueNotifyLoop_Grinding_OnForwardChanged_Params
{
public:
	bool                                         bNewState;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GrindRailRuntime.FortGameplayCueNotifyLoop_Grinding.CacheReferences
struct UFortGameplayCueNotifyLoop_Grinding_CacheReferences_Params
{
public:
	class UAudioComponent*                       InAudioComponent;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFXSystemComponent*                    InEffectsComponent;                                // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPlayerPawn*                       InPlayerPawn;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPawnComponent_GrindRail*          InGrindComponent;                                  // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.SetMovementStatus
struct UFortPawnComponent_GrindRail_SetMovementStatus_Params
{
public:
	struct FVector                               NewStatus;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.SetIsSprinting
struct UFortPawnComponent_GrindRail_SetIsSprinting_Params
{
public:
	bool                                         bNewIsSprinting;                                   // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.SetGrindDistanceOnSpline
struct UFortPawnComponent_GrindRail_SetGrindDistanceOnSpline_Params
{
public:
	float                                        NewDistanceOnSpline;                               // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.SetGrindBaseActor
struct UFortPawnComponent_GrindRail_SetGrindBaseActor_Params
{
public:
	class UActor*                                NewBaseActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.ServerUpdateWeaponHolstered
struct UFortPawnComponent_GrindRail_ServerUpdateWeaponHolstered_Params
{
public:
	bool                                         bNewHolstered;                                     // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayEquipAnim;                                    // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.RemoveMoveIgnoreActors
struct UFortPawnComponent_GrindRail_RemoveMoveIgnoreActors_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.OnWalkingBaseChanged
struct UFortPawnComponent_GrindRail_OnWalkingBaseChanged_Params
{
public:
	class UFortPawn*                             Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                NewBase;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.OnRep_IsSprinting
struct UFortPawnComponent_GrindRail_OnRep_IsSprinting_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.OnRep_GrindingRail
struct UFortPawnComponent_GrindRail_OnRep_GrindingRail_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.OnRep_CurrentBoosterMode
struct UFortPawnComponent_GrindRail_OnRep_CurrentBoosterMode_Params
{
public:
	enum class EGrindRailBoosterMode             PreviousBoosterMode;                               // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.OnReloadInput
struct UFortPawnComponent_GrindRail_OnReloadInput_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.OnMovementModeChanged
struct UFortPawnComponent_GrindRail_OnMovementModeChanged_Params
{
public:
	class UCharacter*                            InCharacter;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovementMode                     PrevMovementMode;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PreviousCustomMode;                                // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EF3[0x6];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.OnJumpInput
struct UFortPawnComponent_GrindRail_OnJumpInput_Params
{
public:
	bool                                         bPressed;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.OnIgnoredBuildingEndPlay
struct UFortPawnComponent_GrindRail_OnIgnoredBuildingEndPlay_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EF4[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.OnBaseMeshReady
struct UFortPawnComponent_GrindRail_OnBaseMeshReady_Params
{
public:
	class UFortPlayerPawn*                       Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                MeshComponent;                                     // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.NativeIsShooting
struct UFortPawnComponent_GrindRail_NativeIsShooting_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.IsWeaponADS
struct UFortPawnComponent_GrindRail_IsWeaponADS_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.IsWeaponActive
struct UFortPawnComponent_GrindRail_IsWeaponActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.IsUsingToggleSprint
struct UFortPawnComponent_GrindRail_IsUsingToggleSprint_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.IsGrinding
struct UFortPawnComponent_GrindRail_IsGrinding_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.HandleSprintInput
struct UFortPawnComponent_GrindRail_HandleSprintInput_Params
{
public:
	bool                                         bPressed;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.HandleRailJump
struct UFortPawnComponent_GrindRail_HandleRailJump_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.HandleJumpOffEnd
struct UFortPawnComponent_GrindRail_HandleJumpOffEnd_Params
{
public:
};

// 0xE0 (0xE0 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.HandleHitWhenGrinding
struct UFortPawnComponent_GrindRail_HandleHitWhenGrinding_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.HandleGrindingEndedFromReplication
struct UFortPawnComponent_GrindRail_HandleGrindingEndedFromReplication_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.HandleGrindingEnded
struct UFortPawnComponent_GrindRail_HandleGrindingEnded_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.HandleGrindingBegun
struct UFortPawnComponent_GrindRail_HandleGrindingBegun_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.HandleGrindFinishedAfterJumping
struct UFortPawnComponent_GrindRail_HandleGrindFinishedAfterJumping_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.GetWantsToGrind
struct UFortPawnComponent_GrindRail_GetWantsToGrind_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.GetSpeedHardCap
struct UFortPawnComponent_GrindRail_GetSpeedHardCap_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.GetMovementStatus
struct UFortPawnComponent_GrindRail_GetMovementStatus_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.GetLeanForwardSpeedNormalized
struct UFortPawnComponent_GrindRail_GetLeanForwardSpeedNormalized_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.GetHorizontalSplineAngleDeltaDegrees
struct UFortPawnComponent_GrindRail_GetHorizontalSplineAngleDeltaDegrees_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.GetGrindRequestJump
struct UFortPawnComponent_GrindRail_GetGrindRequestJump_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.GetGrindDistanceOnSpline
struct UFortPawnComponent_GrindRail_GetGrindDistanceOnSpline_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.GetGrindBaseActor
struct UFortPawnComponent_GrindRail_GetGrindBaseActor_Params
{
public:
	class UActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.GetCameraOrientedLeanValues
struct UFortPawnComponent_GrindRail_GetCameraOrientedLeanValues_Params
{
public:
	float                                        RawLeanForward;                                    // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RawLeanRight;                                      // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OrientedLeanForward;                               // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OrientedLeanRight;                                 // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.EndGrinding
struct UFortPawnComponent_GrindRail_EndGrinding_Params
{
public:
	bool                                         bSetEndMovementMode;                               // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.DrawDebugHUD
struct UFortPawnComponent_GrindRail_DrawDebugHUD_Params
{
public:
	class UHUD*                                  HUD;                                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCanvas*                               Canvas;                                            // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.CanBeginGrinding
struct UFortPawnComponent_GrindRail_CanBeginGrinding_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.CalculateVelocity
struct UFortPawnComponent_GrindRail_CalculateVelocity_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplayingMovement;                                // 0x4(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EF5[0x3];                                     // Fixing Size After Last Property..
	struct FVector                               OutVelocity;                                       // 0x8(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.BeginGrinding
struct UFortPawnComponent_GrindRail_BeginGrinding_Params
{
public:
	class UFortGrindRail*                        GrindRail;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OptionalStartDistance;                             // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromInteraction;                                  // 0xC(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EF6[0x3];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.AttemptDestroyVehicleWhileGrinding
struct UFortPawnComponent_GrindRail_AttemptDestroyVehicleWhileGrinding_Params
{
public:
	class UFortAthenaVehicle*                    Vehicle;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EF7[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function GrindRailRuntime.FortPawnComponent_GrindRail.AddMoveIgnoreActor
struct UFortPawnComponent_GrindRail_AddMoveIgnoreActor_Params
{
public:
	class UBuildingActor*                        BuildingActor;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
