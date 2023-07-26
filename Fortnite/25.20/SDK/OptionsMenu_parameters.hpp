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
// Function OptionsMenu.OptionsMenu_C.LoadTabClasses
struct UOptionsMenu_C_LoadTabClasses_Params
{
public:
};

// 0x21 (0x21 - 0x0)
// Function OptionsMenu.OptionsMenu_C.Handle Tab Gamepad Config Action Handler States_SAVE
struct UOptionsMenu_C_Handle_Tab_Gamepad_Config_Action_Handler_States_SAVE_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BB3[0x1];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 K2Node_Select_Default;                             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BB4[0x7];                                     // Fixing Size After Last Property..
	class UWidget*                               CallFunc_GetWidgetAtIndex_ReturnValue;             // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTabGamePadConfig_v3_C*                K2Node_DynamicCast_AsTab_Game_Pad_Config_V_3;      // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenu.OptionsMenu_C.DialogResult_826C59EC4C294BC872A644878B35A13B
struct UOptionsMenu_C_DialogResult_826C59EC4C294BC872A644878B35A13B_Params
{
public:
	enum class EFortDialogResult                 Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BB5[0x3];                                     // Fixing Size After Last Property..
	class FName                                  ResultName;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenu.OptionsMenu_C.DialogResult_B31FF5BD4C0772716F27509EA83B418E
struct UOptionsMenu_C_DialogResult_B31FF5BD4C0772716F27509EA83B418E_Params
{
public:
	enum class EFortDialogResult                 Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BB6[0x3];                                     // Fixing Size After Last Property..
	class FName                                  ResultName;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenu.OptionsMenu_C.BP_OnActivated
struct UOptionsMenu_C_BP_OnActivated_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function OptionsMenu.OptionsMenu_C.HandleTabGamePadActionsNeedBinds
struct UOptionsMenu_C_HandleTabGamePadActionsNeedBinds_Params
{
public:
	TArray<class FText>                          ScreenLabels;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenu.OptionsMenu_C.HandleTabGamepadConfigActionHandlerStates
struct UOptionsMenu_C_HandleTabGamepadConfigActionHandlerStates_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenu.OptionsMenu_C.OnSettingsTabListPopulated
struct UOptionsMenu_C_OnSettingsTabListPopulated_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function OptionsMenu.OptionsMenu_C.BndEvt__TabList_Categories_K2Node_ComponentBoundEvent_0_OnTabButtonCreation__DelegateSignature
struct UOptionsMenu_C_BndEvt__TabList_Categories_K2Node_ComponentBoundEvent_0_OnTabButtonCreation__DelegateSignature_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BB7[0x4];                                     // Fixing Size After Last Property..
	class UCommonButtonBase*                     TabButton;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenu.OptionsMenu_C.BP_OnDeactivated
struct UOptionsMenu_C_BP_OnDeactivated_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function OptionsMenu.OptionsMenu_C.On Override Reset Modal
struct UOptionsMenu_C_On_Override_Reset_Modal_Params
{
public:
	bool                                         bOverride;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenu.OptionsMenu_C.OnShowResetToDefaultModal
struct UOptionsMenu_C_OnShowResetToDefaultModal_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenu.OptionsMenu_C.OnSplitscreenUpdateSizing
struct UOptionsMenu_C_OnSplitscreenUpdateSizing_Params
{
public:
};

// 0x30E (0x30E - 0x0)
// Function OptionsMenu.OptionsMenu_C.ExecuteUbergraph_OptionsMenu
struct UOptionsMenu_C_ExecuteUbergraph_OptionsMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BB8[0x4];                                     // Fixing Size After Last Property..
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue_1;                 // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue_2;                 // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BB9[0x3];                                     // Fixing Size After Last Property..
	class FName                                  Temp_name_Variable;                                // 0x24(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BBA[0x3];                                     // Fixing Size After Last Property..
	class FName                                  Temp_name_Variable_1;                              // 0x2C(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x38(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BBB[0x4];                                     // Fixing Size After Last Property..
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x50(0x50)(HasGetValueTypeHash)
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BBC[0x4];                                     // Fixing Size After Last Property..
	class UWidget*                               CallFunc_GetWidgetAtIndex_ReturnValue;             // 0xA8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTabVideoOptions_New_C*                K2Node_DynamicCast_AsTab_Video_Options_New;        // 0xB0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BBD[0x2];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xBC(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 Temp_byte_Variable;                                // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BBE[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xCC(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BBF[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_2;                              // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xE8(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0xF4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                          K2Node_CustomEvent_ScreenLabels;                   // 0x100(0x10)(ReferenceParm)
	int32                                        Temp_int_Variable;                                 // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BC0[0x4];                                     // Fixing Size After Last Property..
	class FText                                  CallFunc_Array_Get_Item;                           // 0x118(0x18)()
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x130(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x138(0x50)(HasGetValueTypeHash)
	class UTabGamePadConfig_v3_C*                K2Node_DynamicCast_AsTab_Game_Pad_Config_V_3;      // 0x188(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BC1[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x198(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x1A8(0x18)()
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BC2[0x4];                                     // Fixing Size After Last Property..
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x1D8(0x50)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BC3[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x230(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x240(0x18)()
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x258(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BC4[0x4];                                     // Fixing Size After Last Property..
	class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue; // 0x260(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x269(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BC5[0x6];                                     // Fixing Size After Last Property..
	class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue_1; // 0x270(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BC6[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue_1;       // 0x27C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 K2Node_CustomEvent_Result;                         // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BC7[0x3];                                     // Fixing Size After Last Property..
	class FName                                  K2Node_CustomEvent_ResultName;                     // 0x284(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetWidgetAtIndex_ReturnValue_1;           // 0x288(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTabGamePadConfig_v3_C*                K2Node_DynamicCast_AsTab_Game_Pad_Config_V_3_1;    // 0x290(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BC8[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x29C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 Temp_byte_Variable_1;                              // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BC9[0x3];                                     // Fixing Size After Last Property..
	class FName                                  Temp_name_Variable_3;                              // 0x2AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_ComponentBoundEvent_TabId;                  // 0x2B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BCA[0x4];                                     // Fixing Size After Last Property..
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_TabButton;              // 0x2B8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BCB[0x4];                                     // Fixing Size After Last Property..
	class UIconTabButton_Legacy_C*               K2Node_DynamicCast_AsIcon_Tab_Button_Legacy;       // 0x2C8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x2D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BCC[0x6];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 CallFunc_MakeLiteralGameplayTagContainer_ReturnValue; // 0x2D8(0x20)()
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 K2Node_CustomEvent_Result_1;                       // 0x2F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BCD[0x2];                                     // Fixing Size After Last Property..
	class FName                                  K2Node_CustomEvent_ResultName_1;                   // 0x2FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x300(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bOverride;                      // 0x30C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x30D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
