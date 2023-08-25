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

// 0xAA0 (0xAA0 - 0x0)
// Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.GetCurrentButtonBrush
struct UPlayerSurveyRatingChoice_C_GetCurrentButtonBrush_Params
{
public:
	struct FSlateBrush                           CurrentBrush;                                      // 0x0(0xC0)(Parm, OutParm)
	bool                                         Temp_bool_Variable;                                // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0xC2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0xC3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0xC5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsHovered_ReturnValue;                    // 0xC6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPressed_ReturnValue;                    // 0xC7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPressed_ReturnValue_1;                  // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsHovered_ReturnValue_1;                  // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSelected_ReturnValue;                  // 0xCA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0xCB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2174[0x4];                                     // Fixing Size After Last Property 
	class UCommonButtonStyle*                    CallFunc_GetStyle_ReturnValue;                     // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2175[0x8];                                     // Fixing Size After Last Property 
	struct FSlateBrush                           CallFunc_GetDisabledBrush_Brush;                   // 0xE0(0xC0)(None)
	struct FSlateBrush                           CallFunc_GetNormalBaseBrush_Brush;                 // 0x1A0(0xC0)(None)
	struct FSlateBrush                           CallFunc_GetNormalHoveredBrush_Brush;              // 0x260(0xC0)(None)
	struct FSlateBrush                           CallFunc_GetNormalPressedBrush_Brush;              // 0x320(0xC0)(None)
	struct FSlateBrush                           K2Node_Select_Default;                             // 0x3E0(0xC0)(None)
	struct FSlateBrush                           CallFunc_GetSelectedPressedBrush_Brush;            // 0x4A0(0xC0)(None)
	struct FSlateBrush                           K2Node_Select_Default_1;                           // 0x560(0xC0)(None)
	struct FSlateBrush                           CallFunc_GetSelectedBaseBrush_Brush;               // 0x620(0xC0)(None)
	struct FSlateBrush                           CallFunc_GetSelectedHoveredBrush_Brush;            // 0x6E0(0xC0)(None)
	struct FSlateBrush                           K2Node_Select_Default_2;                           // 0x7A0(0xC0)(None)
	struct FSlateBrush                           K2Node_Select_Default_3;                           // 0x860(0xC0)(None)
	struct FSlateBrush                           K2Node_Select_Default_4;                           // 0x920(0xC0)(None)
	struct FSlateBrush                           K2Node_Select_Default_5;                           // 0x9E0(0xC0)(None)
};

// 0x2C (0x2C - 0x0)
// Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.UpdateInputActionRenderOpacity
struct UPlayerSurveyRatingChoice_C_UpdateInputActionRenderOpacity_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2181[0x7];                                     // Fixing Size After Last Property 
	double                                       Temp_real_Variable;                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_1;                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsHovered_ReturnValue;                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2183[0x7];                                     // Fixing Size After Last Property 
	double                                       K2Node_Select_Default;                             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.UpdateTextStyle
struct UPlayerSurveyRatingChoice_C_UpdateTextStyle_Params
{
public:
	class UCommonTextStyle*                      CallFunc_GetCurrentTextStyle_ReturnValue;          // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetColor_OutColor;                        // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x18(0x14)(None)
};

// 0x0 (0x0 - 0x0)
// Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.BP_OnHovered
struct UPlayerSurveyRatingChoice_C_BP_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.BP_OnUnhovered
struct UPlayerSurveyRatingChoice_C_BP_OnUnhovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.OnSurveyResetChoice
struct UPlayerSurveyRatingChoice_C_OnSurveyResetChoice_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.OnInitialized
struct UPlayerSurveyRatingChoice_C_OnInitialized_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.BP_OnSelected
struct UPlayerSurveyRatingChoice_C_BP_OnSelected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.BP_OnDeselected
struct UPlayerSurveyRatingChoice_C_BP_OnDeselected_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.ExecuteUbergraph_PlayerSurveyRatingChoice
struct UPlayerSurveyRatingChoice_C_ExecuteUbergraph_PlayerSurveyRatingChoice_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


