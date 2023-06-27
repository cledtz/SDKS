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

// 0x50 (0x50 - 0x0)
// Function WheelGrenadeRuntime.WheelGrenadeWheel.HandleOutOfHealth
struct AWheelGrenadeWheel_HandleOutOfHealth_Params
{
public:
	float                                        InDamage;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17E7[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 InTags;                                            // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle          InEffectContext;                                   // 0x28(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class AController*                           InEventInstigator;                                 // 0x40(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                InDamageCauser;                                    // 0x48(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function WheelGrenadeRuntime.WheelGrenadeWheel.HandleDamaged
struct AWheelGrenadeWheel_HandleDamaged_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17E8[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 InTags;                                            // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x28(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class AController*                           EventInstigator;                                   // 0x40(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x48(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function WheelGrenadeRuntime.WheelGrenadeWheel.GetMaxHealth
struct AWheelGrenadeWheel_GetMaxHealth_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function WheelGrenadeRuntime.WheelGrenadeWheel.GetHealth
struct AWheelGrenadeWheel_GetHealth_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
