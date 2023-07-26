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

// 0xC (0xC - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.Fade Out Sound
struct UWBP_UIKit_ButtonCTA_Base_C_Fade_Out_Sound_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9730[0x2];                                     // Fixing Size After Last Property..
	float                                        CallFunc_FadeOut_FadeOutDuration_ImplicitCast;     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FadeOut_FadeOutDuration_ImplicitCast_1;   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.PlaySoundHoldCompleted
struct UWBP_UIKit_ButtonCTA_Base_C_PlaySoundHoldCompleted_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9731[0x7];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.Stop Sound Hold Released
struct UWBP_UIKit_ButtonCTA_Base_C_Stop_Sound_Hold_Released_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9732[0x7];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.PlaySoundHoldPressed
struct UWBP_UIKit_ButtonCTA_Base_C_PlaySoundHoldPressed_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9733[0x6];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue_1;               // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.PlaySoundPressed
struct UWBP_UIKit_ButtonCTA_Base_C_PlaySoundPressed_Params
{
public:
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue;                 // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.PlaySoundHovered
struct UWBP_UIKit_ButtonCTA_Base_C_PlaySoundHovered_Params
{
public:
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue;                 // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.IsPromptHoldable
struct UWBP_UIKit_ButtonCTA_Base_C_IsPromptHoldable_Params
{
public:
	bool                                         Holdable;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9734[0x7];                                     // Fixing Size After Last Property..
	class FString                                NewLocalVar;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsHeldAction_ReturnValue;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetHoldPercentage
struct UWBP_UIKit_ButtonCTA_Base_C_SetHoldPercentage_Params
{
public:
	double                                       HeldPercentageValue;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD1 (0xD1 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.IsPromptIcon
struct UWBP_UIKit_ButtonCTA_Base_C_IsPromptIcon_Params
{
public:
	bool                                         Valid;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9735[0xF];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           CallFunc_GetIcon_ReturnValue;                      // 0x10(0xC0)()
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x65 (0x65 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetButtonIsEnabled
struct UWBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9736[0x4];                                     // Fixing Size After Last Property..
	class UWBP_UIKit_Block_Base_C*               CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsHovered_ReturnValue;                    // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9737[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Get_Item_1;                         // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsNotEmpty_ReturnValue;             // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9738[0x2];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9739[0x4];                                     // Fixing Size After Last Property..
	class UWBP_UIKit_Block_Base_C*               CallFunc_Array_Get_Item_2;                         // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_973A[0x4];                                     // Fixing Size After Last Property..
	class UWBP_UIKit_Block_Base_C*               CallFunc_Array_Get_Item_3;                         // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_973B[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetLanguageDirection
struct UWBP_UIKit_ButtonCTA_Base_C_SetLanguageDirection_Params
{
public:
	bool                                         RightToLeft;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_973C[0x6];                                     // Fixing Size After Last Property..
	struct FWidgetTransform                      K2Node_Select_Default;                             // 0x8(0x38)(NoDestructor)
};

// 0xC4 (0xC4 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.UpdateButtonSIze
struct UWBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze_Params
{
public:
	enum class EModularButtonSize                Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EModularButtonSize                Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EModularButtonSize                Temp_byte_Variable_2;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EModularButtonSize                Temp_byte_Variable_3;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EModularButtonSize                Temp_byte_Variable_4;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EModularButtonSize                Temp_byte_Variable_5;                              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EModularButtonSize                Temp_byte_Variable_6;                              // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EModularButtonSize                Temp_byte_Variable_7;                              // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_973D[0x5];                                     // Fixing Size After Last Property..
	class UVerticalBoxSlot*                      CallFunc_SlotAsVerticalBoxSlot_ReturnValue;        // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_Select_Default;                             // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                               K2Node_Select_Default_1;                           // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UHorizontalBoxSlot*                    CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;      // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_Select_Default_2;                           // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_973E[0x3];                                     // Fixing Size After Last Property..
	struct FMargin                               K2Node_Select_Default_3;                           // 0x54(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        K2Node_Select_Default_4;                           // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1;      // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default_5;                           // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_Select_Default_6;                           // 0x74(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                               K2Node_Select_Default_7;                           // 0x84(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                               K2Node_Select_Default_8;                           // 0x94(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_973F[0x4];                                     // Fixing Size After Last Property..
	class UHorizontalBoxSlot*                    CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1;    // 0xA8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_Select_Default_9;                           // 0xB0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        K2Node_Select_Default_10;                          // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7 (0x7 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.ShowPromptFallbackAction
struct UWBP_UIKit_ButtonCTA_Base_C_ShowPromptFallbackAction_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.UpdatePrompt
struct UWBP_UIKit_ButtonCTA_Base_C_UpdatePrompt_Params
{
public:
	enum class ECommonInputType                  InputType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPromptHoldable;                                  // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPromptIcon;                                      // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  Temp_byte_Variable;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  Temp_byte_Variable_6;                              // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9740[0x1];                                     // Fixing Size After Last Property..
	float                                        Temp_real_Variable;                                // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_real_Variable_1;                              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_real_Variable_2;                              // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9741[0x3];                                     // Fixing Size After Last Property..
	float                                        Temp_real_Variable_3;                              // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_real_Variable_4;                              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_7;                              // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_8;                              // 0x26(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x27(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_9;                              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_10;                             // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_11;                             // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_12;                             // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  Temp_byte_Variable_13;                             // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_14;                             // 0x2E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9742[0x2];                                     // Fixing Size After Last Property..
	float                                        K2Node_Select_Default_1;                           // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9743[0x3];                                     // Fixing Size After Last Property..
	float                                        K2Node_Select_Default_3;                           // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_15;                             // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_4;                           // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_5;                           // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_6;                           // 0x46(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_7;                           // 0x47(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPromptHoldable_Holdable;                // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_8;                           // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPromptIcon_Valid;                       // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9744[0x1];                                     // Fixing Size After Last Property..
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.Set Prompt
struct UWBP_UIKit_ButtonCTA_Base_C_Set_Prompt_Params
{
public:
	class UCommonInputSubsystem*                 CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9745[0x7];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.UpdateButtonSizeToGrid
struct UWBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid_Params
{
public:
	double                                       NewGridAlignedSize;                                // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EModularButtonSize                Temp_byte_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9746[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default;                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9747[0x4];                                     // Fixing Size After Last Property..
	struct FVector2D                             CallFunc_GetDesiredSize_ReturnValue;               // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9748[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_BreakVector2D_X;                          // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9749[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue_1;                     // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_974A[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_974B[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FCeil_ReturnValue;                        // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_974C[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_2;           // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x168 (0x168 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.UpdateFonts
struct UWBP_UIKit_ButtonCTA_Base_C_UpdateFonts_Params
{
public:
	enum class EModularButtonSize                Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EModularButtonSize                Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EModularButtonSize                Temp_byte_Variable_2;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EModularButtonSize                Temp_byte_Variable_3;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EModularButtonSize                Temp_byte_Variable_4;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default;                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default_1;                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default_2;                           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default_3;                           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default_4;                           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default_5;                           // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_974D[0x4];                                     // Fixing Size After Last Property..
	struct FSlateFontInfo                        K2Node_Select_Default_6;                           // 0x38(0x58)(HasGetValueTypeHash)
	struct FSlateFontInfo                        K2Node_Select_Default_7;                           // 0x90(0x58)(HasGetValueTypeHash)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_974E[0x4];                                     // Fixing Size After Last Property..
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x100(0x58)(HasGetValueTypeHash)
	float                                        K2Node_Select_Option_1_ImplicitCast;               // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetMobileFontSizeMultiplier_MobileFontSizeMultiplier_ImplicitCast; // 0x15C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetMobileFontSizeMultiplier_MobileFontSizeMultiplier_ImplicitCast_1; // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Option_0_ImplicitCast;               // 0x164(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetBlockTiming
struct UWBP_UIKit_ButtonCTA_Base_C_SetBlockTiming_Params
{
public:
	class UWBP_UIKit_Block_Base_C*               bLock;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       Time_Hovering;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Time_Unhovering;                                   // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Time_Focusing;                                     // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Time_Unfocusing;                                   // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Time_Pressing;                                     // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Time_Releasing;                                    // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Time_Disabling;                                    // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Time_Enabling;                                     // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetButtonTiming
struct UWBP_UIKit_ButtonCTA_Base_C_SetButtonTiming_Params
{
public:
	double                                       Time_Hovering;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Time_Unhovering;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Time_Focusing;                                     // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Time_Unfocusing;                                   // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Time_Pressing;                                     // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Time_Releasing;                                    // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Time_Disabling;                                    // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Time_Enabling;                                     // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_UIKit_Block_Base_C*               CallFunc_Array_Get_Item;                           // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetBackgroundMaterial
struct UWBP_UIKit_ButtonCTA_Base_C_SetBackgroundMaterial_Params
{
public:
	class UMaterialInstance*                     Background;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetBackgroundVisibility
struct UWBP_UIKit_ButtonCTA_Base_C_SetBackgroundVisibility_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetBorderMaterial
struct UWBP_UIKit_ButtonCTA_Base_C_SetBorderMaterial_Params
{
public:
	class UMaterialInstance*                     BorderMaterial;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAdditive;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.AddModularBlock
struct UWBP_UIKit_ButtonCTA_Base_C_AddModularBlock_Params
{
public:
	class UWBP_UIKit_Block_Base_C*               Modular_Block;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3D (0x3D - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.ResetButtonState
struct UWBP_UIKit_ButtonCTA_Base_C_ResetButtonState_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_974F[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_UIKit_Block_Base_C*               CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9750[0x7];                                     // Fixing Size After Last Property..
	class UWBP_UIKit_Block_Base_C*               CallFunc_Array_Get_Item_1;                         // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.ShowInputActionText
struct UWBP_UIKit_ButtonCTA_Base_C_ShowInputActionText_Params
{
public:
	class FText                                  CallFunc_GetDisplayText_ReturnValue;               // 0x0(0x18)()
	bool                                         CallFunc_SetText_Empty;                            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetButtonSize
struct UWBP_UIKit_ButtonCTA_Base_C_SetButtonSize_Params
{
public:
	enum class EModularButtonSize                ButtonSize;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.PreConstruct
struct UWBP_UIKit_ButtonCTA_Base_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnHovered
struct UWBP_UIKit_ButtonCTA_Base_C_BP_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnUnhovered
struct UWBP_UIKit_ButtonCTA_Base_C_BP_OnUnhovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnPressed
struct UWBP_UIKit_ButtonCTA_Base_C_BP_OnPressed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnReleased
struct UWBP_UIKit_ButtonCTA_Base_C_BP_OnReleased_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnDisabled
struct UWBP_UIKit_ButtonCTA_Base_C_BP_OnDisabled_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnEnabled
struct UWBP_UIKit_ButtonCTA_Base_C_BP_OnEnabled_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnInputMethodChanged
struct UWBP_UIKit_ButtonCTA_Base_C_BP_OnInputMethodChanged_Params
{
public:
	enum class ECommonInputType                  CurrentInputType;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.OnActionProgress
struct UWBP_UIKit_ButtonCTA_Base_C_OnActionProgress_Params
{
public:
	float                                        HeldPercent;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_SetText
struct UWBP_UIKit_ButtonCTA_Base_C_BP_SetText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_SetSecondaryText
struct UWBP_UIKit_ButtonCTA_Base_C_BP_SetSecondaryText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.EventOnFocusedManually
struct UWBP_UIKit_ButtonCTA_Base_C_EventOnFocusedManually_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnFocusReceived
struct UWBP_UIKit_ButtonCTA_Base_C_BP_OnFocusReceived_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnFocusLost
struct UWBP_UIKit_ButtonCTA_Base_C_BP_OnFocusLost_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.Construct
struct UWBP_UIKit_ButtonCTA_Base_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnInputActionUpdated
struct UWBP_UIKit_ButtonCTA_Base_C_BP_OnInputActionUpdated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnClicked
struct UWBP_UIKit_ButtonCTA_Base_C_BP_OnClicked_Params
{
public:
};

// 0x120 (0x120 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base
struct UWBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9751[0x3];                                     // Fixing Size After Last Property..
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  K2Node_Event_CurrentInputType;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9752[0x3];                                     // Fixing Size After Last Property..
	float                                        K2Node_Event_HeldPercent;                          // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9753[0x4];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_GetCurrentLanguage_ReturnValue;           // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9754[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_UIKit_Block_Base_C*               CallFunc_Array_Get_Item;                           // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_UIKit_Block_Base_C*               CallFunc_Array_Get_Item_1;                         // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_UIKit_Block_Base_C*               CallFunc_Array_Get_Item_2;                         // 0x78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9755[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9756[0x3];                                     // Fixing Size After Last Property..
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue_1;       // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetText_Empty;                            // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9757[0x7];                                     // Fixing Size After Last Property..
	class FText                                  K2Node_Event_Text_1;                               // 0xA8(0x18)(ConstParm)
	class FText                                  K2Node_Event_Text;                                 // 0xC0(0x18)(ConstParm)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0xDC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9758[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9759[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPromptHoldable_Holdable;                // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xF1(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_975A[0x2];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_3;                  // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_975B[0x4];                                     // Fixing Size After Last Property..
	class UWBP_UIKit_Block_Base_C*               CallFunc_Array_Get_Item_3;                         // 0x100(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x108(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_975C[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Add_ReturnValue_4;                  // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x112(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetText_Empty_1;                          // 0x113(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPromptHoldable_Holdable_1;              // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPromptHoldable_Holdable_2;              // 0x115(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_975D[0x2];                                     // Fixing Size After Last Property..
	double                                       CallFunc_SetHoldPercentage_HeldPercentageValue_ImplicitCast; // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.OnHoldCompleted__DelegateSignature
struct UWBP_UIKit_ButtonCTA_Base_C_OnHoldCompleted__DelegateSignature_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.OnFocusChanged__DelegateSignature
struct UWBP_UIKit_ButtonCTA_Base_C_OnFocusChanged__DelegateSignature_Params
{
public:
	bool                                         HasFocus;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
