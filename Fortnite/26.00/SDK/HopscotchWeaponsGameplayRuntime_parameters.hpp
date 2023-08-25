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

// 0x0 (0x0 - 0x0)
// Function HopscotchWeaponsGameplayRuntime.FortGameplayAbility_AppleSunSmall_Passive.UpdateIsCloseToGround
struct UFortGameplayAbility_AppleSunSmall_Passive_UpdateIsCloseToGround_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HopscotchWeaponsGameplayRuntime.FortGameplayAbility_AppleSunSmall_Passive.UpdateCanCrashpad
struct UFortGameplayAbility_AppleSunSmall_Passive_UpdateCanCrashpad_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function HopscotchWeaponsGameplayRuntime.FortGameplayAbility_AppleSunSmall_Passive.OnPlayerMovementModeChanged
struct UFortGameplayAbility_AppleSunSmall_Passive_OnPlayerMovementModeChanged_Params
{
public:
	class UCharacter*                            Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovementMode                     PrevMovementMode;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PreviousCustomMode;                                // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2609[0x6];                                     // Fixing Size Of Struct
};

}
}


