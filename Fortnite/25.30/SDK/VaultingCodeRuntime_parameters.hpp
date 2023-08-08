#pragma once

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
// Function VaultingCodeRuntime.HurdleComponent.UnregisterMutatorUpdatedDelegate
struct UHurdleComponent_UnregisterMutatorUpdatedDelegate_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function VaultingCodeRuntime.HurdleComponent.ShouldShowHurdleIndicator
struct UHurdleComponent_ShouldShowHurdleIndicator_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function VaultingCodeRuntime.HurdleComponent.ServerStartHurdle
struct UHurdleComponent_ServerStartHurdle_Params
{
public:
	struct FReplicatedHurdleTargetingData        InReplicatedTargetingData;                         // 0x0(0x70)(ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	double                                       ClientLastTeleportTime;                            // 0x70(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VaultingCodeRuntime.HurdleComponent.RegisterMutatorUpdatedDelegate
struct UHurdleComponent_RegisterMutatorUpdatedDelegate_Params
{
public:
	class UPawn*                                 AffectedPawn;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function VaultingCodeRuntime.HurdleComponent.OnRep_ReplicatedLastTeleportTime
struct UHurdleComponent_OnRep_ReplicatedLastTeleportTime_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VaultingCodeRuntime.HurdleComponent.OnRep_ReplicatedHurdleState
struct UHurdleComponent_OnRep_ReplicatedHurdleState_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function VaultingCodeRuntime.HurdleComponent.OnPlayerStatePawnSet
struct UHurdleComponent_OnPlayerStatePawnSet_Params
{
public:
	class UPlayerState*                          Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPawn*                                 NewPawn;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPawn*                                 OldPawn;                                           // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function VaultingCodeRuntime.HurdleComponent.OnMutatorUpdated
struct UHurdleComponent_OnMutatorUpdated_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function VaultingCodeRuntime.HurdleComponent.IsContextualActionPrototypeActive
struct UHurdleComponent_IsContextualActionPrototypeActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// Function VaultingCodeRuntime.HurdleComponent.HandleTargetingDataValid
struct UHurdleComponent_HandleTargetingDataValid_Params
{
public:
	struct FHurdleTargetingData                  TargetingData;                                     // 0x0(0x130)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function VaultingCodeRuntime.HurdleComponent.HandleTargetingDataInvalid
struct UHurdleComponent_HandleTargetingDataInvalid_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function VaultingCodeRuntime.HurdleComponent.HandleOwnerTeleported
struct UHurdleComponent_HandleOwnerTeleported_Params
{
public:
	class UFortPawn*                             TeleportedOwner;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VaultingCodeRuntime.HurdleComponent.HandleOwnerMovementModeChanged
struct UHurdleComponent_HandleOwnerMovementModeChanged_Params
{
public:
	class UCharacter*                            Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovementMode                     PreviousMovementMode;                              // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PreviousCustomMode;                                // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5722[0x6];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// Function VaultingCodeRuntime.HurdleComponent.HandleOwnerJumpInput
struct UHurdleComponent_HandleOwnerJumpInput_Params
{
public:
	bool                                         bPressed;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function VaultingCodeRuntime.HurdleComponent.BP_HandleSpringJump
struct UHurdleComponent_BP_HandleSpringJump_Params
{
public:
};

// 0x160 (0x160 - 0x0)
// Function VaultingCodeRuntime.HurdleComponent.BP_HandleHurdleStarted
struct UHurdleComponent_BP_HandleHurdleStarted_Params
{
public:
	struct FHurdleTargetingData                  TargetingData;                                     // 0x0(0x130)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FSynchedActionInfo                    SynchedActionInfo;                                 // 0x130(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function VaultingCodeRuntime.HurdleComponent.BP_HandleHurdleEnded
struct UHurdleComponent_BP_HandleHurdleEnded_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function VaultingCodeRuntime.HurdleComponent.BP_CanStartHurdle
struct UHurdleComponent_BP_CanStartHurdle_Params
{
public:
	bool                                         OutCanStartHurdle;                                 // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C8 (0x1C8 - 0x0)
// Function VaultingCodeRuntime.HurdleLibrary.PerformHurdleTargeting
struct UHurdleLibrary_PerformHurdleTargeting_Params
{
public:
	class UCharacter*                            Character;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHurdleInputConfigCache               HurdleInputConfig;                                 // 0x8(0x88)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FHurdleTargetingData                  OutTargetingData;                                  // 0x90(0x130)(Parm, OutParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bIsAutoHurdle;                                     // 0x1C0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_573C[0x6];                                     // Fixing Size Of Struct
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
