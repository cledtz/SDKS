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

// 0x270 (0x270 - 0x0)
// Function VariantScript_Pickaxe_BistroAstronaut_Style.VariantScript_Pickaxe_BistroAstronaut_Style_C.DetermineVariantSelection
struct UVariantScript_Pickaxe_BistroAstronaut_Style_C_DetermineVariantSelection_Params
{
public:
	struct FFortAthenaLoadout                    Loadout;                                           // 0x0(0x260)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ReturnValue;                                       // 0x260(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsItemInLoadout_ReturnValue;              // 0x264(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BBB[0x3];                                     // Fixing Size After Last Property 
	struct FGameplayTag                          CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue; // 0x268(0x4)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue_1; // 0x26C(0x4)(NoDestructor, HasGetValueTypeHash)
};

}
}


