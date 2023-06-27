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

// 0x5 (0x5 - 0x0)
// Function AthenaFloatSliderVariantPicker.AthenaFloatSliderVariantPicker_C.OnUpdateValue
struct UAthenaFloatSliderVariantPicker_C_OnUpdateValue_Params
{
public:
	float                                        NormalizedValue;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsLocked;                                         // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function AthenaFloatSliderVariantPicker.AthenaFloatSliderVariantPicker_C.ExecuteUbergraph_AthenaFloatSliderVariantPicker
struct UAthenaFloatSliderVariantPicker_C_ExecuteUbergraph_AthenaFloatSliderVariantPicker_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_NormalizedValue;                      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsLocked;                            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99F6[0x3];                                     // Fixing Size After Last Property..
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue;                  // 0xC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
