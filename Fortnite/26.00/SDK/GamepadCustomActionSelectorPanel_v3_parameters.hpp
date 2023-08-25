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

// 0x1 (0x1 - 0x0)
// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.HandleClear
struct UGamepadCustomActionSelectorPanel_v3_C_HandleClear_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CreateCustomListItem
struct UGamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortInputActionGroup             InputActionGroup;                                  // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8AE5[0x3];                                     // Fixing Size After Last Property 
	class UGamepadKeyTextButton_C*               ReturnItem;                                        // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  ActionName_Local;                                  // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortInputActionGroup             InputActionGroup_Local;                            // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8AE6[0x3];                                     // Fixing Size After Last Property 
	class FName                                  CustomPresetName_Local;                            // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8AE7[0x4];                                     // Fixing Size After Last Property 
	class UGamepadKeyTextButton_C*               ReturnItem_Local;                                  // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8AE8[0x7];                                     // Fixing Size After Last Property 
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetCustomGamepadInputPresetName_ReturnValue; // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8AE9[0x4];                                     // Fixing Size After Last Property 
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue_1;                 // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue; // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8AEA[0x7];                                     // Fixing Size After Last Property 
	class FText                                  CallFunc_GetScreenLabel_ReturnValue;               // 0x68(0x18)(None)
	class UGamepadKeyTextButton_C*               CallFunc_Create_ReturnValue;                       // 0x80(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue_2;                 // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  CallFunc_GetKeyForAction_ReturnValue;              // 0x90(0x18)(HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.HandleBack
struct UGamepadCustomActionSelectorPanel_v3_C_HandleBack_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.Construct
struct UGamepadCustomActionSelectorPanel_v3_C_Construct_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.UpdatePanel
struct UGamepadCustomActionSelectorPanel_v3_C_UpdatePanel_Params
{
public:
	TArray<class UFortOptionsMenuInputData*>     InputData;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.BP_OnItemClicked_Bind
struct UGamepadCustomActionSelectorPanel_v3_C_BP_OnItemClicked_Bind_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.BP_OnActivated
struct UGamepadCustomActionSelectorPanel_v3_C_BP_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.BP_OnDeactivated
struct UGamepadCustomActionSelectorPanel_v3_C_BP_OnDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.BndEvt__Button_Clear_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UGamepadCustomActionSelectorPanel_v3_C_BndEvt__Button_Clear_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x88 (0x88 - 0x0)
// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3
struct UGamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortOptionsMenuInputData*>     K2Node_CustomEvent_InputData;                      // 0x8(0x10)(ConstParm, ReferenceParm)
	class UObject*                               K2Node_CustomEvent_Item;                           // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8AEB[0x4];                                     // Fixing Size After Last Property 
	class UGamepadKeyTextButton_C*               K2Node_DynamicCast_AsGamepad_Key_Text_Button;      // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8AEC[0x3];                                     // Fixing Size After Last Property 
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x40(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8AED[0x3];                                     // Fixing Size After Last Property 
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_BP_GetSelectedItem_ReturnValue;           // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortOptionsMenuInputData*             CallFunc_Array_Get_Item;                           // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetIndexForItem_ReturnValue;              // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortInputActionGroup             CallFunc_GetInputActionGroup_ReturnValue;          // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8AEE[0x3];                                     // Fixing Size After Last Property 
	class UGamepadKeyTextButton_C*               CallFunc_CreateCustomListItem_ReturnItem;          // 0x70(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8AEF[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x7C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CustomClearButton__DelegateSignature
struct UGamepadCustomActionSelectorPanel_v3_C_CustomClearButton__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CustomClosedUsingBack__DelegateSignature
struct UGamepadCustomActionSelectorPanel_v3_C_CustomClosedUsingBack__DelegateSignature_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CustomActionSelected__DelegateSignature
struct UGamepadCustomActionSelectorPanel_v3_C_CustomActionSelected__DelegateSignature_Params
{
public:
	int32                                        SelectedIndex;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ActionName;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


