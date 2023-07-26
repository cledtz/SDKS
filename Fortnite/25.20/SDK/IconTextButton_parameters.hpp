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

// 0x1A (0x1A - 0x0)
// Function IconTextButton.IconTextButton_C.BindCommonInputSubsystem
struct UIconTextButton_C_BindCommonInputSubsystem_Params
{
public:
	bool                                         bBind;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9611[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                 CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B0 (0x1B0 - 0x0)
// Function IconTextButton.IconTextButton_C.OnFocusReceived
struct UIconTextButton_C_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                           InFocusEvent;                                      // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           K2Node_MakeStruct_EventReply;                      // 0xF8(0xB8)()
};

// 0x8 (0x8 - 0x0)
// Function IconTextButton.IconTextButton_C.GetPressProgress
struct UIconTextButton_C_GetPressProgress_Params
{
public:
	double                                       Progress;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function IconTextButton.IconTextButton_C.Get Dynamic Material
struct UIconTextButton_C_Get_Dynamic_Material_Params
{
public:
	class UMaterialInstanceDynamic*              Ret_Material;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function IconTextButton.IconTextButton_C.ShowIcon
struct UIconTextButton_C_ShowIcon_Params
{
public:
	bool                                         bShouldShow;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D (0x1D - 0x0)
// Function IconTextButton.IconTextButton_C.SetTextInternal
struct UIconTextButton_C_SetTextInternal_Params
{
public:
	class FText                                  InButtonText;                                      // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function IconTextButton.IconTextButton_C.SetInitialMouseKeyboardStyle
struct UIconTextButton_C_SetInitialMouseKeyboardStyle_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function IconTextButton.IconTextButton_C.UpdateTextStyle
struct UIconTextButton_C_UpdateTextStyle_Params
{
public:
	TSubclassOf<class UCommonTextStyle>          CallFunc_GetCurrentTextStyleClass_ReturnValue;     // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function IconTextButton.IconTextButton_C.SetContentAlignment
struct UIconTextButton_C_SetContentAlignment_Params
{
public:
	enum class EHorizontalAlignment              ContentAlignment;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function IconTextButton.IconTextButton_C.UpdateContentAlignment
struct UIconTextButton_C_UpdateContentAlignment_Params
{
public:
	class UPanelSlot*                            CallFunc_GetContentSlot_ReturnValue;               // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBorderSlot*                           K2Node_DynamicCast_AsBorder_Slot;                  // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function IconTextButton.IconTextButton_C.SetMouseKeyboardStyle
struct UIconTextButton_C_SetMouseKeyboardStyle_Params
{
public:
	class UClass*                                ControllerInputStyle;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                 CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function IconTextButton.IconTextButton_C.UpdateStyle
struct UIconTextButton_C_UpdateStyle_Params
{
public:
	bool                                         UsingGamepad;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsErebus_ReturnValue;                     // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function IconTextButton.IconTextButton_C.UpdateText
struct UIconTextButton_C_UpdateText_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9612[0x4];                                     // Fixing Size After Last Property..
	class FText                                  CallFunc_GetDisplayText_ReturnValue;               // 0x8(0x18)()
	class FText                                  K2Node_Select_Default;                             // 0x20(0x18)()
	bool                                         CallFunc_TextIsEmpty_ReturnValue_1;                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9613[0x5];                                     // Fixing Size After Last Property..
	class FText                                  K2Node_Select_Default_1;                           // 0x40(0x18)()
};

// 0x12 (0x12 - 0x0)
// Function IconTextButton.IconTextButton_C.SetControllerStyle
struct UIconTextButton_C_SetControllerStyle_Params
{
public:
	class UClass*                                ControllerInputStyle;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                 CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function IconTextButton.IconTextButton_C.UpdateTextAndStyle
struct UIconTextButton_C_UpdateTextAndStyle_Params
{
public:
	enum class ECommonInputType                  InputType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function IconTextButton.IconTextButton_C.InitializeButton
struct UIconTextButton_C_InitializeButton_Params
{
public:
	class UObject*                               CallFunc_GetBrushResource_ReturnValue;             // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function IconTextButton.IconTextButton_C.Set Icon
struct UIconTextButton_C_Set_Icon_Params
{
public:
	struct FSlateBrush                           IconBrush;                                         // 0x0(0xC0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x18 (0x18 - 0x0)
// Function IconTextButton.IconTextButton_C.Set Text
struct UIconTextButton_C_Set_Text_Params
{
public:
	class FText                                  ButtonText;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function IconTextButton.IconTextButton_C.OnCurrentTextStyleChanged
struct UIconTextButton_C_OnCurrentTextStyleChanged_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function IconTextButton.IconTextButton_C.PreConstruct
struct UIconTextButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF0 (0xF0 - 0x0)
// Function IconTextButton.IconTextButton_C.SetTabLabelInfo
struct UIconTextButton_C_SetTabLabelInfo_Params
{
public:
	struct FFortTabButtonLabelInfo               TabLabelInfo;                                      // 0x0(0xF0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function IconTextButton.IconTextButton_C.OnTriggeredInputActionChanged
struct UIconTextButton_C_OnTriggeredInputActionChanged_Params
{
public:
	struct FDataTableRowHandle                   NewTriggeredAction;                                // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function IconTextButton.IconTextButton_C.OnActionProgress
struct UIconTextButton_C_OnActionProgress_Params
{
public:
	float                                        HeldPercent;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function IconTextButton.IconTextButton_C.OnActionComplete
struct UIconTextButton_C_OnActionComplete_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IconTextButton.IconTextButton_C.Construct
struct UIconTextButton_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IconTextButton.IconTextButton_C.Destruct
struct UIconTextButton_C_Destruct_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function IconTextButton.IconTextButton_C.OnTriggeringInputActionChanged
struct UIconTextButton_C_OnTriggeringInputActionChanged_Params
{
public:
	struct FDataTableRowHandle                   NewTriggeredAction;                                // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function IconTextButton.IconTextButton_C.OnFocusLost
struct UIconTextButton_C_OnFocusLost_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x168 (0x168 - 0x0)
// Function IconTextButton.IconTextButton_C.ExecuteUbergraph_IconTextButton
struct UIconTextButton_C_ExecuteUbergraph_IconTextButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9614[0x3];                                     // Fixing Size After Last Property..
	class UCommonInputSubsystem*                 CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyChildren_ReturnValue;               // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9615[0xA];                                     // Fixing Size After Last Property..
	struct FFortTabButtonLabelInfo               K2Node_Event_TabLabelInfo;                         // 0x20(0xF0)(ConstParm)
	struct FDataTableRowHandle                   K2Node_Event_NewTriggeredAction_1;                 // 0x110(0x10)(ConstParm, NoDestructor)
	float                                        K2Node_Event_HeldPercent;                          // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x124(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x125(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x126(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_SlateBrush_ReturnValue;        // 0x127(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9616[0x7];                                     // Fixing Size After Last Property..
	struct FDataTableRowHandle                   K2Node_Event_NewTriggeredAction;                   // 0x130(0x10)(ConstParm, NoDestructor)
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x140(0x8)(NoDestructor)
	class FText                                  CallFunc_GetEmptyText_ReturnValue;                 // 0x148(0x18)()
	double                                       K2Node_VariableSet_PressProgress_ImplicitCast;     // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function IconTextButton.IconTextButton_C.FocusChangedEvent__DelegateSignature
struct UIconTextButton_C_FocusChangedEvent__DelegateSignature_Params
{
public:
	bool                                         HasFocus;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
