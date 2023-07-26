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
// Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetNonInteractableStyle
struct UGamepadKeyTextButton_C_SetNonInteractableStyle_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetContentAlignment
struct UGamepadKeyTextButton_C_SetContentAlignment_Params
{
public:
	enum class EHorizontalAlignment              ContentAlignment;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function GamepadKeyTextButton.GamepadKeyTextButton_C.UpdateContentAlignment
struct UGamepadKeyTextButton_C_UpdateContentAlignment_Params
{
public:
	class UPanelSlot*                            CallFunc_GetContentSlot_ReturnValue;               // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBorderSlot*                           K2Node_DynamicCast_AsBorder_Slot;                  // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GamepadKeyTextButton.GamepadKeyTextButton_C.OnListItemObjectSet
struct UGamepadKeyTextButton_C_OnListItemObjectSet_Params
{
public:
	class UObject*                               ListItemObject;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetData
struct UGamepadKeyTextButton_C_SetData_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FText                                  DescText;                                          // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FName                                  ActionName;                                        // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GamepadKeyTextButton.GamepadKeyTextButton_C.PreConstruct
struct UGamepadKeyTextButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetDataAndUpdateButton
struct UGamepadKeyTextButton_C_SetDataAndUpdateButton_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FText                                  DescText;                                          // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FName                                  ActionName;                                        // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GamepadKeyTextButton.GamepadKeyTextButton_C.UpdateButton
struct UGamepadKeyTextButton_C_UpdateButton_Params
{
public:
	class UGamepadKeyTextButton_C*               Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0xF0 (0xF0 - 0x0)
// Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetTabLabelInfo
struct UGamepadKeyTextButton_C_SetTabLabelInfo_Params
{
public:
	struct FFortTabButtonLabelInfo               TabLabelInfo;                                      // 0x0(0xF0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x191 (0x191 - 0x0)
// Function GamepadKeyTextButton.GamepadKeyTextButton_C.ExecuteUbergraph_GamepadKeyTextButton
struct UGamepadKeyTextButton_C_ExecuteUbergraph_GamepadKeyTextButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9B07[0x2];                                     // Fixing Size After Last Property..
	class UObject*                               K2Node_Event_ListItemObject;                       // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGamepadKeyTextButton_C*               K2Node_DynamicCast_AsGamepad_Key_Text_Button;      // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9B08[0x7];                                     // Fixing Size After Last Property..
	struct FKey                                  K2Node_CustomEvent_Key_1;                          // 0x20(0x18)(HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_DescText_1;                     // 0x38(0x18)()
	class FName                                  K2Node_CustomEvent_ActionName_1;                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9B09[0x3];                                     // Fixing Size After Last Property..
	struct FKey                                  K2Node_CustomEvent_Key;                            // 0x58(0x18)(HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_DescText;                       // 0x70(0x18)()
	class FName                                  K2Node_CustomEvent_ActionName;                     // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9B0A[0x4];                                     // Fixing Size After Last Property..
	class UGamepadKeyTextButton_C*               K2Node_CustomEvent_Button;                         // 0x90(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9B0B[0x6];                                     // Fixing Size After Last Property..
	struct FFortTabButtonLabelInfo               K2Node_Event_TabLabelInfo;                         // 0xA0(0xF0)(ConstParm)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function GamepadKeyTextButton.GamepadKeyTextButton_C.ChangeTheBinding_Button__DelegateSignature
struct UGamepadKeyTextButton_C_ChangeTheBinding_Button__DelegateSignature_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9B0C[0x4];                                     // Fixing Size After Last Property..
	struct FKey                                  Key;                                               // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
