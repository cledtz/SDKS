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

// 0x26E (0x26E - 0x0)
// Function VariantScript_Backpack_BistroAstronaut_Color.VariantScript_Backpack_BistroAstronaut_Color_C.DetermineVariantSelection
struct UVariantScript_Backpack_BistroAstronaut_Color_C_DetermineVariantSelection_Params
{
public:
	struct FFortAthenaLoadout                    Loadout;                                           // 0x0(0x260)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ReturnValue;                                       // 0x260(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue; // 0x264(0x4)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue_1; // 0x268(0x4)(NoDestructor, HasGetValueTypeHash)
	bool                                         GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x26C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsItemInLoadout_ReturnValue;              // 0x26D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


