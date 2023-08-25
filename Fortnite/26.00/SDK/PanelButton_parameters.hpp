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

// 0x194 (0x194 - 0x0)
// Function PanelButton.PanelButton_C.UpdateInputActionLayout
struct UPanelButton_C_UpdateInputActionLayout_Params
{
public:
	struct FSlateBrush                           RimBrush;                                          // 0x0(0xC0)(Edit, BlueprintVisible)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0xC0(0xC0)(None)
	class UOverlaySlot*                          K2Node_DynamicCast_AsOverlay_Slot;                 // 0x180(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x189(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5E73[0x2];                                     // Fixing Size After Last Property 
	struct FDeprecateSlateVector2D               K2Node_SetFieldsInStruct_ImageSize_ImplicitCast;   // 0x18C(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function PanelButton.PanelButton_C.UpdateStyle
struct UPanelButton_C_UpdateStyle_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5E75[0x7];                                     // Fixing Size After Last Property 
	class FText                                  ActionText;                                        // 0x8(0x18)(Edit, BlueprintVisible)
};

// 0x0 (0x0 - 0x0)
// Function PanelButton.PanelButton_C.InitializeButton
struct UPanelButton_C_InitializeButton_Params
{
public:
};

// 0xA (0xA - 0x0)
// Function PanelButton.PanelButton_C.UpdateTextAndStyle
struct UPanelButton_C_UpdateTextAndStyle_Params
{
public:
	class UCommonInputSubsystem*                 CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PanelButton.PanelButton_C.PreConstruct
struct UPanelButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PanelButton.PanelButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
struct UPanelButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function PanelButton.PanelButton_C.OnTriggeredInputActionChanged
struct UPanelButton_C_OnTriggeredInputActionChanged_Params
{
public:
	struct FDataTableRowHandle                   NewTriggeredAction;                                // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function PanelButton.PanelButton_C.OnActionProgress
struct UPanelButton_C_OnActionProgress_Params
{
public:
	float                                        HeldPercent;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PanelButton.PanelButton_C.OnActionComplete
struct UPanelButton_C_OnActionComplete_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PanelButton.PanelButton_C.Construct
struct UPanelButton_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PanelButton.PanelButton_C.BP_OnHovered
struct UPanelButton_C_BP_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PanelButton.PanelButton_C.BP_OnUnhovered
struct UPanelButton_C_BP_OnUnhovered_Params
{
public:
};

// 0x24 (0x24 - 0x0)
// Function PanelButton.PanelButton_C.ExecuteUbergraph_PanelButton
struct UPanelButton_C_ExecuteUbergraph_PanelButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyChildren_ReturnValue;               // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bUsingGamepad;          // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5E8A[0x5];                                     // Fixing Size After Last Property 
	struct FDataTableRowHandle                   K2Node_Event_NewTriggeredAction;                   // 0x10(0x10)(ConstParm, NoDestructor)
	float                                        K2Node_Event_HeldPercent;                          // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


