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
// Function TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnReloadCanceling
struct UFortMovementMode_ELTacSprint_HandleOnReloadCanceling_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnPawnJump
struct UFortMovementMode_ELTacSprint_HandleOnPawnJump_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnEnteredEditMode
struct UFortMovementMode_ELTacSprint_HandleOnEnteredEditMode_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnEnterAircraft
struct UFortMovementMode_ELTacSprint_HandleOnEnterAircraft_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnEnergyDrained
struct UFortMovementMode_ELTacSprint_HandleOnEnergyDrained_Params
{
public:
	class UFortComponent_Energy*                 EnergyComp;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleMovementModeChanged
struct UFortMovementMode_ELTacSprint_HandleMovementModeChanged_Params
{
public:
	class ACharacter*                            Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovementMode                     PreviousMovementMode;                              // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PreviousCustomMode;                                // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E8C[0x6];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleFailedToSprint
struct UFortMovementMode_ELTacSprint_HandleFailedToSprint_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.SetIsSprinting
struct UFortPlayerControllerComponent_TacticalSprint_SetIsSprinting_Params
{
public:
	bool                                         bNewIsSprinting;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.RegisterMutatorUpdatedDelegate
struct UFortPlayerControllerComponent_TacticalSprint_RegisterMutatorUpdatedDelegate_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnWeaponEquipped
struct UFortPlayerControllerComponent_TacticalSprint_OnWeaponEquipped_Params
{
public:
	class AFortWeapon*                           NewWeapon;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortWeapon*                           PreviousWeapon;                                    // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnPlayerStatePawnSet
struct UFortPlayerControllerComponent_TacticalSprint_OnPlayerStatePawnSet_Params
{
public:
	class APlayerState*                          Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                 NewPawn;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                 OldPawn;                                           // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnPawnChanged
struct UFortPlayerControllerComponent_TacticalSprint_OnPawnChanged_Params
{
public:
	class AFortPawn*                             InPawn;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnMutatorUpdated
struct UFortPlayerControllerComponent_TacticalSprint_OnMutatorUpdated_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnMovementModeChanged
struct UFortPlayerControllerComponent_TacticalSprint_OnMovementModeChanged_Params
{
public:
	class ACharacter*                            Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovementMode                     PrevMovementMode;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PreviousCustomMode;                                // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E94[0x6];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnAutoRunChanged
struct UFortPlayerControllerComponent_TacticalSprint_OnAutoRunChanged_Params
{
public:
	bool                                         bAutoRunIsOn;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.LogAndVisualLog
struct UFortPlayerControllerComponent_TacticalSprint_LogAndVisualLog_Params
{
public:
	class UObject*                               LoggingSource;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESprintLoggingVerbosityLevel      Verbosity;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E95[0x7];                                     // Fixing Size After Last Property..
	class FString                                LogString;                                         // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
