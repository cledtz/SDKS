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

// 0x18 (0x18 - 0x0)
// Function CloseButton.CloseButton_C.SetText
struct UCloseButton_C_SetText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x88 (0x88 - 0x0)
// Function CloseButton.CloseButton_C.HandleSize
struct UCloseButton_C_HandleSize_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_51[0x2];                                       // Fixing Size After Last Property..
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                               K2Node_Select_Default;                             // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        K2Node_Select_Default_1;                           // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52[0x4];                                       // Fixing Size After Last Property..
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x30(0x58)(HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function CloseButton.CloseButton_C.Construct
struct UCloseButton_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CloseButton.CloseButton_C.BP_OnPressed
struct UCloseButton_C_BP_OnPressed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CloseButton.CloseButton_C.BP_OnReleased
struct UCloseButton_C_BP_OnReleased_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function CloseButton.CloseButton_C.ExecuteUbergraph_CloseButton
struct UCloseButton_C_ExecuteUbergraph_CloseButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53[0x4];                                       // Fixing Size After Last Property..
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
