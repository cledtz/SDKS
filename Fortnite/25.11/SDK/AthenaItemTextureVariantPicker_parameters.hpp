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
// Function AthenaItemTextureVariantPicker.AthenaItemTextureVariantPicker_C.Construct
struct UAthenaItemTextureVariantPicker_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AthenaItemTextureVariantPicker.AthenaItemTextureVariantPicker_C.OnToggleAllItemsArchivedMessage
struct UAthenaItemTextureVariantPicker_C_OnToggleAllItemsArchivedMessage_Params
{
public:
	bool                                         bDisplay;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function AthenaItemTextureVariantPicker.AthenaItemTextureVariantPicker_C.ExecuteUbergraph_AthenaItemTextureVariantPicker
struct UAthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_real_Variable;                                // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_real_Variable_1;                              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93F8[0x3];                                     // Fixing Size After Last Property..
	float                                        Temp_real_Variable_2;                              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_real_Variable_3;                              // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bDisplay;                             // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93F9[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93FA[0x2];                                     // Fixing Size After Last Property..
	float                                        K2Node_Select_Default;                             // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default_1;                           // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
