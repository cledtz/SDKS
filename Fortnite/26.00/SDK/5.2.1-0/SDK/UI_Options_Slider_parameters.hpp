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

// 0x4C (0x4C - 0x0)
// Function UI_Options_Slider.UI_Options_Slider_C.ApplyValue
struct UUI_Options_Slider_C_ApplyValue_Params
{
public:
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue;          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FAutoSettingData                      K2Node_MakeStruct_AutoSettingData;                 // 0x10(0x38)(None)
	float                                        CallFunc_SetFloatCVar_Value_ImplicitCast;          // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Options_Slider.UI_Options_Slider_C.GetValue
struct UUI_Options_Slider_C_GetValue_Params
{
public:
	double                                       Value;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function UI_Options_Slider.UI_Options_Slider_C.SetValue
struct UUI_Options_Slider_C_SetValue_Params
{
public:
	double                                       Value;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetValue_InValue_ImplicitCast;            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_Options_Slider.UI_Options_Slider_C.PreConstruct
struct UUI_Options_Slider_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Options_Slider.UI_Options_Slider_C.Construct
struct UUI_Options_Slider_C_Construct_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function UI_Options_Slider.UI_Options_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
struct UUI_Options_Slider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Options_Slider.UI_Options_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature
struct UUI_Options_Slider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function UI_Options_Slider.UI_Options_Slider_C.ExecuteUbergraph_UI_Options_Slider
struct UUI_Options_Slider_C_ExecuteUbergraph_UI_Options_Slider_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EC6[0x3];                                     // Fixing Size After Last Property 
	float                                        K2Node_ComponentBoundEvent_Value;                  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetFloatCVar_ReturnValue;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetMinValue_InValue_ImplicitCast;         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetMaxValue_InValue_ImplicitCast;         // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_SelectValue_ImplicitCast;       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetValue_Value_ImplicitCast;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Options_Slider.UI_Options_Slider_C.OnValueChanged__DelegateSignature
struct UUI_Options_Slider_C_OnValueChanged__DelegateSignature_Params
{
public:
	double                                       Value;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


