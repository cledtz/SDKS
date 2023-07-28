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

// 0x79 (0x79 - 0x0)
// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.Update Text Scale
struct UPlayerSurveyResponseChoice_C_Update_Text_Scale_Params
{
public:
	struct FVector2D                             CallFunc_GetDesiredSize_ReturnValue;               // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_X;                          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x20(0x58)(HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xAA0 (0xAA0 - 0x0)
// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.GetCurrentButtonBrush
struct UPlayerSurveyResponseChoice_C_GetCurrentButtonBrush_Params
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
	uint8                                        Pad_9A06[0x4];                                     // Fixing Size After Last Property..
	class UCommonButtonStyle*                    CallFunc_GetStyle_ReturnValue;                     // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A07[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           CallFunc_GetDisabledBrush_Brush;                   // 0xE0(0xC0)()
	struct FSlateBrush                           CallFunc_GetNormalBaseBrush_Brush;                 // 0x1A0(0xC0)()
	struct FSlateBrush                           CallFunc_GetNormalHoveredBrush_Brush;              // 0x260(0xC0)()
	struct FSlateBrush                           CallFunc_GetNormalPressedBrush_Brush;              // 0x320(0xC0)()
	struct FSlateBrush                           K2Node_Select_Default;                             // 0x3E0(0xC0)()
	struct FSlateBrush                           CallFunc_GetSelectedPressedBrush_Brush;            // 0x4A0(0xC0)()
	struct FSlateBrush                           K2Node_Select_Default_1;                           // 0x560(0xC0)()
	struct FSlateBrush                           CallFunc_GetSelectedBaseBrush_Brush;               // 0x620(0xC0)()
	struct FSlateBrush                           CallFunc_GetSelectedHoveredBrush_Brush;            // 0x6E0(0xC0)()
	struct FSlateBrush                           K2Node_Select_Default_2;                           // 0x7A0(0xC0)()
	struct FSlateBrush                           K2Node_Select_Default_3;                           // 0x860(0xC0)()
	struct FSlateBrush                           K2Node_Select_Default_4;                           // 0x920(0xC0)()
	struct FSlateBrush                           K2Node_Select_Default_5;                           // 0x9E0(0xC0)()
};

// 0x250 (0x250 - 0x0)
// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.UpdateChoiceImage
struct UPlayerSurveyResponseChoice_C_UpdateChoiceImage_Params
{
public:
	enum class EFortPlayerSurveyResponseChoiceType Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSelected_ReturnValue;                  // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSelected_ReturnValue_1;                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A08[0xB];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           K2Node_Select_Default;                             // 0x10(0xC0)(ConstParm)
	struct FSlateBrush                           K2Node_Select_Default_1;                           // 0xD0(0xC0)(ConstParm)
	struct FSlateBrush                           K2Node_Select_Default_2;                           // 0x190(0xC0)(ConstParm)
};

// 0x30 (0x30 - 0x0)
// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.UpdateInputActionRenderOpacity
struct UPlayerSurveyResponseChoice_C_UpdateInputActionRenderOpacity_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A09[0x7];                                     // Fixing Size After Last Property..
	double                                       Temp_real_Variable;                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_1;                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsHovered_ReturnValue;                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A0A[0x7];                                     // Fixing Size After Last Property..
	double                                       K2Node_Select_Default;                             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1; // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12C (0x12C - 0x0)
// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.UpdateButtonColor
struct UPlayerSurveyResponseChoice_C_UpdateButtonColor_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A0B[0x3];                                     // Fixing Size After Last Property..
	struct FLinearColor                          Temp_struct_Variable;                              // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A0C[0x4];                                     // Fixing Size After Last Property..
	TSubclassOf<class UCommonTextStyle>          CallFunc_GetCurrentTextStyleClass_ReturnValue;     // 0x18(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FSlateBrush                           CallFunc_GetCurrentButtonBrush_CurrentBrush;       // 0x20(0xC0)()
	bool                                         CallFunc_GetSelected_ReturnValue;                  // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A0D[0x7];                                     // Fixing Size After Last Property..
	class UCommonTextStyle*                      CallFunc_GetCurrentTextStyle_ReturnValue;          // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A0E[0x3];                                     // Fixing Size After Last Property..
	struct FLinearColor                          CallFunc_GetColor_OutColor;                        // 0xF4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A0F[0x3];                                     // Fixing Size After Last Property..
	struct FLinearColor                          K2Node_Select_Default;                             // 0x108(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x118(0x14)()
};

// 0x0 (0x0 - 0x0)
// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.BP_OnHovered
struct UPlayerSurveyResponseChoice_C_BP_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.BP_OnUnhovered
struct UPlayerSurveyResponseChoice_C_BP_OnUnhovered_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.SetChoiceType
struct UPlayerSurveyResponseChoice_C_SetChoiceType_Params
{
public:
	enum class EFortPlayerSurveyResponseChoiceType Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.OnSurveyResetChoice
struct UPlayerSurveyResponseChoice_C_OnSurveyResetChoice_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.BP_OnSelected
struct UPlayerSurveyResponseChoice_C_BP_OnSelected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.BP_OnDeselected
struct UPlayerSurveyResponseChoice_C_BP_OnDeselected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.OnInitialized
struct UPlayerSurveyResponseChoice_C_OnInitialized_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.OnCurrentTextStyleChanged
struct UPlayerSurveyResponseChoice_C_OnCurrentTextStyleChanged_Params
{
public:
};

// 0x5 (0x5 - 0x0)
// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.ExecuteUbergraph_PlayerSurveyResponseChoice
struct UPlayerSurveyResponseChoice_C_ExecuteUbergraph_PlayerSurveyResponseChoice_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortPlayerSurveyResponseChoiceType K2Node_Event_Type;                                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
