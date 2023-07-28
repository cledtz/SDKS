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
// Function ClamberingCodeRuntime.ClamberingComponent.UnregisterMutatorUpdatedDelegate
struct UClamberingComponent_UnregisterMutatorUpdatedDelegate_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.ShouldShowClamberIndicator
struct UClamberingComponent_ShouldShowClamberIndicator_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.SetTutorialModeEnabled
struct UClamberingComponent_SetTutorialModeEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.ServerStartClambering
struct UClamberingComponent_ServerStartClambering_Params
{
public:
	struct FReplicatedClamberingTargetingData    InReplicatedTargetingData;                         // 0x0(0x78)(ConstParm, Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	double                                       ClientLastTeleportTime;                            // 0x78(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.RegisterMutatorUpdatedDelegate
struct UClamberingComponent_RegisterMutatorUpdatedDelegate_Params
{
public:
	class UPawn*                                 AffectedPawn;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.OnRep_ReplicatedTargetingData
struct UClamberingComponent_OnRep_ReplicatedTargetingData_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.OnRep_ReplicatedLastTeleportTime
struct UClamberingComponent_OnRep_ReplicatedLastTeleportTime_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.OnRep_ReplicatedClamberingState
struct UClamberingComponent_OnRep_ReplicatedClamberingState_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.OnPlayerStatePawnSet
struct UClamberingComponent_OnPlayerStatePawnSet_Params
{
public:
	class UPlayerState*                          Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPawn*                                 NewPawn;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPawn*                                 OldPawn;                                           // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.OnMutatorUpdated
struct UClamberingComponent_OnMutatorUpdated_Params
{
public:
};

// 0x2 (0x2 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.NetMulticast_ClamberingLedgeFailed
struct UClamberingComponent_NetMulticast_ClamberingLedgeFailed_Params
{
public:
	enum class EClamberingFailedReason           FailedReason;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EClamberingState                  FailedState;                                       // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.IsTutorialModeEnabled
struct UClamberingComponent_IsTutorialModeEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.IsClamberingEnabled
struct UClamberingComponent_IsClamberingEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.IsAutoClamberingEnabled
struct UClamberingComponent_IsAutoClamberingEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.HandleTargetingDataValid
struct UClamberingComponent_HandleTargetingDataValid_Params
{
public:
	struct FClamberingTargetingData              TargetingData;                                     // 0x0(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.HandleTargetingDataInvalid
struct UClamberingComponent_HandleTargetingDataInvalid_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.HandleTargetActorHealthChanged
struct UClamberingComponent_HandleTargetActorHealthChanged_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.HandleTargetActorDestroyed
struct UClamberingComponent_HandleTargetActorDestroyed_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.HandleOwnerTeleported
struct UClamberingComponent_HandleOwnerTeleported_Params
{
public:
	class UFortPawn*                             TeleportedOwner;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.HandleOwnerMovementModeChanged
struct UClamberingComponent_HandleOwnerMovementModeChanged_Params
{
public:
	class UCharacter*                            Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovementMode                     PreviousMovementMode;                              // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PreviousCustomMode;                                // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4885[0x6];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.HandleOwnerJumpInput
struct UClamberingComponent_HandleOwnerJumpInput_Params
{
public:
	bool                                         bPressed;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.HandleOwnerDied
struct UClamberingComponent_HandleOwnerDied_Params
{
public:
	class UFortPawn*                             DeadPawn;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.HandleOwnerDBNO
struct UClamberingComponent_HandleOwnerDBNO_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.HandleOwnerASCInvalidated
struct UClamberingComponent_HandleOwnerASCInvalidated_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.HandleOwnerASCInitialized
struct UClamberingComponent_HandleOwnerASCInitialized_Params
{
public:
	class UFortAbilitySystemComponent*           AbilitySystemComponent;                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPlayerPawn*                       AffectedPawn;                                      // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.HandleClamberingTargetOutOfActivationRange
struct UClamberingComponent_HandleClamberingTargetOutOfActivationRange_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.HandleClamberingTargetInActivationRange
struct UClamberingComponent_HandleClamberingTargetInActivationRange_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.GetAnimMontage
struct UClamberingComponent_GetAnimMontage_Params
{
public:
	float                                        OutPlayRate;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4886[0x4];                                     // Fixing Size After Last Property..
	class UAnimMontage*                          ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.DrawDebugHUD
struct UClamberingComponent_DrawDebugHUD_Params
{
public:
	class UHUD*                                  HUD;                                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCanvas*                               Canvas;                                            // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.BP_TutorialModeEnabled
struct UClamberingComponent_BP_TutorialModeEnabled_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.BP_TutorialModeDisabled
struct UClamberingComponent_BP_TutorialModeDisabled_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.BP_IsValidTargetActor
struct UClamberingComponent_BP_IsValidTargetActor_Params
{
public:
	class UActor*                                TargetActor;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidTargetActor;                               // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4887[0x7];                                     // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.BP_HandleSynchedActionStarted
struct UClamberingComponent_BP_HandleSynchedActionStarted_Params
{
public:
	struct FSynchedActionInfo                    SynchedActionInfo;                                 // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.BP_HandleClamberingStateChanged
struct UClamberingComponent_BP_HandleClamberingStateChanged_Params
{
public:
	enum class EClamberingState                  OldClamberingState;                                // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EClamberingState                  NewClamberingState;                                // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.BP_CanStartTargeting
struct UClamberingComponent_BP_CanStartTargeting_Params
{
public:
	bool                                         bCanStartTargeting;                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ClamberingCodeRuntime.ClamberingComponent.BP_CanStartClambering
struct UClamberingComponent_BP_CanStartClambering_Params
{
public:
	bool                                         bCanStartClambering;                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function ClamberingCodeRuntime.ClamberingLibrary.PerformClamberingTargeting
struct UClamberingLibrary_PerformClamberingTargeting_Params
{
public:
	class UCharacter*                            Character;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FClamberingTargetingData              OutTargetingData;                                  // 0x8(0xD0)(Parm, OutParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xD8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4890[0x7];                                     // Fixing Size Of Struct..
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
