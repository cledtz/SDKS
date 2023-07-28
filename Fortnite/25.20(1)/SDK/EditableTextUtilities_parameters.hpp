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

// 0x90 (0x90 - 0x0)
// Function EditableTextUtilities.EditableTextUtilities_C.CheckIfNeedsTrimming
struct UEditableTextUtilities_C_CheckIfNeedsTrimming_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        Limit;                                             // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DD9[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  TrimmedText;                                       // 0x28(0x18)(Parm, OutParm)
	bool                                         WasTrimmed;                                        // 0x40(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DDA[0x7];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Len_ReturnValue;                          // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DDB[0x4];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_Left_ReturnValue;                         // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DDC[0x7];                                     // Fixing Size After Last Property..
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x78(0x18)()
};

// 0xA9 (0xA9 - 0x0)
// Function EditableTextUtilities.EditableTextUtilities_C.LimitTextLength
struct UEditableTextUtilities_C_LimitTextLength_Params
{
public:
	class UWidget*                               EditableTextWidget;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Length;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DDD[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         WasTrimmed;                                        // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DDE[0x7];                                     // Fixing Size After Last Property..
	class UEditableText*                         K2Node_DynamicCast_AsEditable_Text;                // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DDF[0x7];                                     // Fixing Size After Last Property..
	class UEditableTextBox*                      K2Node_DynamicCast_AsText_Box;                     // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DE0[0x7];                                     // Fixing Size After Last Property..
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x40(0x18)()
	class FText                                  CallFunc_GetText_ReturnValue_1;                    // 0x58(0x18)()
	class FText                                  CallFunc_CheckIfNeedsTrimming_TrimmedText;         // 0x70(0x18)()
	bool                                         CallFunc_CheckIfNeedsTrimming_WasTrimmed;          // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DE1[0x7];                                     // Fixing Size After Last Property..
	class FText                                  CallFunc_CheckIfNeedsTrimming_TrimmedText_1;       // 0x90(0x18)()
	bool                                         CallFunc_CheckIfNeedsTrimming_WasTrimmed_1;        // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
