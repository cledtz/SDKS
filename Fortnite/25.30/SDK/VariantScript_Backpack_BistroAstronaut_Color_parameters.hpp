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

// 0x186 (0x186 - 0x0)
// Function VariantScript_Backpack_BistroAstronaut_Color.VariantScript_Backpack_BistroAstronaut_Color_C.DetermineVariantSelection
struct UVariantScript_Backpack_BistroAstronaut_Color_C_DetermineVariantSelection_Params
{
public:
	struct FFortAthenaLoadout                    Loadout;                                           // 0x0(0x178)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ReturnValue;                                       // 0x178(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue; // 0x17C(0x4)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue_1; // 0x180(0x4)(NoDestructor, HasGetValueTypeHash)
	bool                                         GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x184(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsItemInLoadout_ReturnValue;              // 0x185(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
