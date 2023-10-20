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

// 0x0 (0x0 - 0x0)
// Function UI_CameraTransitions_DarkenScreen.UI_CameraTransitions_DarkenScreen_C.Construct
struct UUI_CameraTransitions_DarkenScreen_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_CameraTransitions_DarkenScreen.UI_CameraTransitions_DarkenScreen_C.SmoothRemove
struct UUI_CameraTransitions_DarkenScreen_C_SmoothRemove_Params
{
public:
};

// 0x3C (0x3C - 0x0)
// Function UI_CameraTransitions_DarkenScreen.UI_CameraTransitions_DarkenScreen_C.Tick
struct UUI_CameraTransitions_DarkenScreen_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_CameraTransitions_DarkenScreen.UI_CameraTransitions_DarkenScreen_C.SmoothStartEvent
struct UUI_CameraTransitions_DarkenScreen_C_SmoothStartEvent_Params
{
public:
};

// 0x74 (0x74 - 0x0)
// Function UI_CameraTransitions_DarkenScreen.UI_CameraTransitions_DarkenScreen_C.ExecuteUbergraph_UI_CameraTransitions_DarkenScreen
struct UUI_CameraTransitions_DarkenScreen_C_ExecuteUbergraph_UI_CameraTransitions_DarkenScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable_1;                     // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable_1;               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable_2;               // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26B6[0x2];                                     // Fixing Size After Last Property 
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0xC(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetRenderOpacity_ReturnValue;             // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26B9[0x4];                                     // Fixing Size After Last Property 
	double                                       CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FInterpTo_Constant_ReturnValue;           // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable_2;                     // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26BC[0x5];                                     // Fixing Size After Last Property 
	double                                       CallFunc_FInterpTo_Constant_Current_ImplicitCast;  // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_CameraTransitions_DarkenScreen.UI_CameraTransitions_DarkenScreen_C.OnDark__DelegateSignature
struct UUI_CameraTransitions_DarkenScreen_C_OnDark__DelegateSignature_Params
{
public:
};

}
}


