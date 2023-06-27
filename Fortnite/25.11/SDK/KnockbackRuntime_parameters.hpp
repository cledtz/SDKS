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
// Function KnockbackRuntime.FortAthenaMutator_Knockback.SetPlayersShouldBreakThroughStructures
struct AFortAthenaMutator_Knockback_SetPlayersShouldBreakThroughStructures_Params
{
public:
	bool                                         bActive;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_829D[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0xE8 - 0x0)
// Function KnockbackRuntime.FortAthenaMutator_Knockback.HandleBlockedCharacterMovement
struct AFortAthenaMutator_Knockback_HandleBlockedCharacterMovement_Params
{
public:
	struct FHitResult                            InOutImpact;                                       // 0x0(0xE0)(Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AFortPawn*                             FortPawn;                                          // 0xE0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function KnockbackRuntime.FortAthenaMutator_Knockback.GetPercentDamageMediumMaxThreshold
struct AFortAthenaMutator_Knockback_GetPercentDamageMediumMaxThreshold_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function KnockbackRuntime.FortAthenaMutator_Knockback.GetPercentDamageLowMaxThreshold
struct AFortAthenaMutator_Knockback_GetPercentDamageLowMaxThreshold_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function KnockbackRuntime.FortAthenaMutator_Knockback.GetKnockbackMultiplierInitialValue
struct AFortAthenaMutator_Knockback_GetKnockbackMultiplierInitialValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function KnockbackRuntime.FortAthenaMutator_Knockback.GetAllPlayersKnockbackData
struct AFortAthenaMutator_Knockback_GetAllPlayersKnockbackData_Params
{
public:
	TArray<struct FKnockbackMutatorData>         ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function KnockbackRuntime.FortGameplayAbility_KnockbackMutator.SaveKnockbackData
struct UFortGameplayAbility_KnockbackMutator_SaveKnockbackData_Params
{
public:
	struct FKnockbackMutatorData                 InKnockbackData;                                   // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function KnockbackRuntime.FortGameplayAbility_KnockbackMutator.GetCachedMutator
struct UFortGameplayAbility_KnockbackMutator_GetCachedMutator_Params
{
public:
	class AFortAthenaMutator_Knockback*          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
