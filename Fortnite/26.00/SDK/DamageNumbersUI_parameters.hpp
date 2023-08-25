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
// Function DamageNumbersUI.CommonUserWidget_DamageNumbers.UpdateScreenSpacePosition
struct UCommonUserWidget_DamageNumbers_UpdateScreenSpacePosition_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DamageNumbersUI.CommonUserWidget_DamageNumbers.Reset
struct UCommonUserWidget_DamageNumbers_Reset_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function DamageNumbersUI.CommonUserWidget_DamageNumbers.OnShieldBreak
struct UCommonUserWidget_DamageNumbers_OnShieldBreak_Params
{
public:
	bool                                         bIsOvershield;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function DamageNumbersUI.CommonUserWidget_DamageNumbers.OnDamageDealt
struct UCommonUserWidget_DamageNumbers_OnDamageDealt_Params
{
public:
	double                                       InDamage;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                InActor;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInShield;                                         // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInCrit;                                           // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1339[0x6];                                     // Fixing Size After Last Property 
	struct FVector                               InWorldSpacePos;                                   // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInEMP;                                            // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_133A[0x7];                                     // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function DamageNumbersUI.FortUserWidget_DamageNumbers.UpdateBinding
struct UFortUserWidget_DamageNumbers_UpdateBinding_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function DamageNumbersUI.FortUserWidget_DamageNumbers.OnShieldBreak
struct UFortUserWidget_DamageNumbers_OnShieldBreak_Params
{
public:
	bool                                         bInOverShield;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DamageNumbersUI.FortUserWidget_DamageNumbers.OnPawnSet
struct UFortUserWidget_DamageNumbers_OnPawnSet_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function DamageNumbersUI.FortUserWidget_DamageNumbers.OnDamageNumberFinishedAnimating
struct UFortUserWidget_DamageNumbers_OnDamageNumberFinishedAnimating_Params
{
public:
	class UCommonUserWidget_DamageNumbers*       Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function DamageNumbersUI.FortUserWidget_DamageNumbers.OnDamageDealt
struct UFortUserWidget_DamageNumbers_OnDamageDealt_Params
{
public:
	double                                       InDamage;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInCritical;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInFatal;                                          // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInShield;                                         // 0xA(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_135D[0x5];                                     // Fixing Size After Last Property 
	class UActor*                                HitActor;                                          // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Tags;                                              // 0x30(0x20)(Parm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DamageNumbersUI.FortUserWidget_DamageNumbers.ClearBinding
struct UFortUserWidget_DamageNumbers_ClearBinding_Params
{
public:
};

}
}


