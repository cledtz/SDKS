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
// Function GA_TrapBuildGeneric.GA_TrapBuildGeneric_C.K2_ActivateAbility
struct UGA_TrapBuildGeneric_C_K2_ActivateAbility_Params
{
public:
};

// 0xE8 (0xE8 - 0x0)
// Function GA_TrapBuildGeneric.GA_TrapBuildGeneric_C.ExecuteUbergraph_GA_TrapBuildGeneric
struct UGA_TrapBuildGeneric_C_ExecuteUbergraph_GA_TrapBuildGeneric_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F11[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_ApplyGameplayEffectContainer_ReturnValue; // 0x8(0x10)(ConstParm, ReferenceParm)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x18(0xD0)(ContainsInstancedReference)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
