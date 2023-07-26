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

// 0x188 (0x188 - 0x0)
// Function VariantScript_Glider_BistroAstronaut_Style.VariantScript_Glider_BistroAstronaut_Style_C.DetermineVariantSelection
struct UVariantScript_Glider_BistroAstronaut_Style_C_DetermineVariantSelection_Params
{
public:
	struct FFortAthenaLoadout                    Loadout;                                           // 0x0(0x178)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ReturnValue;                                       // 0x178(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsItemInLoadout_ReturnValue;              // 0x17C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DAC[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue; // 0x180(0x4)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue_1; // 0x184(0x4)(NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
