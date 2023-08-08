#pragma once

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
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.GamepadInfoSelectorNavRight
struct UTabGamePadConfig_v3_C_GamepadInfoSelectorNavRight_Params
{
public:
};

// 0x5E (0x5E - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.AreWeOkayWithThisChange
struct UTabGamePadConfig_v3_C_AreWeOkayWithThisChange_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7AE[0x4];                                      // Fixing Size After Last Property
	struct FKey                                  Key;                                               // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         IsOkay;                                            // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7AF[0x7];                                      // Fixing Size After Last Property
	class FString                                FullScreenMap_Local;                               // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FName                                  GamepadToggleFullscreenMapName_Local;              // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ToggleFullscreenMapName_Local;                     // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOkay_Local;                                      // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_3;          // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7B0[0x3];                                      // Fixing Size After Last Property
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x5B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleGamepadInfoSelectorFocus
struct UTabGamePadConfig_v3_C_HandleGamepadInfoSelectorFocus_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.NavigateToSelectedConfig
struct UTabGamePadConfig_v3_C_NavigateToSelectedConfig_Params
{
public:
	int32                                        CallFunc_GetSelectedButtonIndex_ReturnValue;       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7B6[0x4];                                      // Fixing Size After Last Property
	class UCommonButtonLegacy*                   CallFunc_GetButtonAtIndex_ReturnValue;             // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ChangeCustomClearVisibilityForInputType
struct UTabGamePadConfig_v3_C_ChangeCustomClearVisibilityForInputType_Params
{
public:
	enum class ECommonInputType                  InputType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ChangeCustomResetVisibilityForInputType
struct UTabGamePadConfig_v3_C_ChangeCustomResetVisibilityForInputType_Params
{
public:
	enum class ECommonInputType                  InputType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleGamepadInfoSelectorApply
struct UTabGamePadConfig_v3_C_HandleGamepadInfoSelectorApply_Params
{
public:
};

// 0x11 (0x11 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleGamepadInfoSelectorBack
struct UTabGamePadConfig_v3_C_HandleGamepadInfoSelectorBack_Params
{
public:
	TArray<class FText>                          CallFunc_AreAllImportantActionsBound_OutUnboundScreenLabels; // 0x0(0x10)(ReferenceParm)
	bool                                         CallFunc_AreAllImportantActionsBound_ReturnValue;  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ChangeCustomTabListVisibilityForInputType
struct UTabGamePadConfig_v3_C_ChangeCustomTabListVisibilityForInputType_Params
{
public:
	enum class ECommonInputType                  Selection;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x154 (0x154 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CreateCustomResetToDefaultList
struct UTabGamePadConfig_v3_C_CreateCustomResetToDefaultList_Params
{
public:
	TArray<struct FConfirmationDialogAction>     ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
	TArray<struct FConfirmationDialogAction>     ReturnValue_Local;                                 // 0x10(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7D4[0x4];                                      // Fixing Size After Last Property
	class FText                                  CallFunc_Array_Get_Item;                           // 0x38(0x18)()
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7D5[0xF];                                      // Fixing Size After Last Property
	struct FConfirmationDialogAction             K2Node_MakeStruct_ConfirmationDialogAction;        // 0x60(0xF0)()
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CloseCustomActionsPanel
struct UTabGamePadConfig_v3_C_CloseCustomActionsPanel_Params
{
public:
	bool                                         FocusLastButton;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x61 (0x61 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.SelectSameItemInActionsList
struct UTabGamePadConfig_v3_C_SelectSameItemInActionsList_Params
{
public:
	int32                                        IndexToSelect_Local;                               // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7EA[0x6];                                      // Fixing Size After Last Property
	class UFortOptionsMenuInputData*             CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7EC[0x2];                                      // Fixing Size After Last Property
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetCustomGamepadInputPresetName_ReturnValue; // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7EE[0x4];                                      // Fixing Size After Last Property
	struct FKey                                  CallFunc_GetKeyForAction_ReturnValue;              // 0x48(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.SetupDisplayObject
struct UTabGamePadConfig_v3_C_SetupDisplayObject_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7F7[0x4];                                      // Fixing Size After Last Property
	struct FKey                                  Key;                                               // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UGamepadKeyTextButton_C*               DisplayObject;                                     // 0x20(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue; // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetCustomGamepadInputPresetName_ReturnValue; // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7F9[0x4];                                      // Fixing Size After Last Property
	class FText                                  CallFunc_GetScreenLabel_ReturnValue;               // 0x50(0x18)()
};

// 0x6 (0x6 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.IsCustomConfig
struct UTabGamePadConfig_v3_C_IsCustomConfig_Params
{
public:
	int32                                        PresetIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCustomGamepadConfig_ReturnValue;        // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x33 (0x33 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleGamepadMappingInfoChange
struct UTabGamePadConfig_v3_C_HandleGamepadMappingInfoChange_Params
{
public:
	class FName                                  CombatModeId_Local;                                // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  EditModeId_Local;                                  // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_803[0x6];                                      // Fixing Size After Last Property
	class UCommonInputSubsystem*                 CallFunc_GetContext_ReturnValue_1;                 // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_805[0x7];                                      // Fixing Size After Last Property
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue_2;                 // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue_1;                 // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCustomConfig_ReturnValue;               // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.GetCurrentPlatformIndex
struct UTabGamePadConfig_v3_C_GetCurrentPlatformIndex_Params
{
public:
	int32                                        PlatformIndex;                                     // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_80E[0x4];                                      // Fixing Size After Last Property
	class FString                                CallFunc_GetControllerPlatform_ReturnValue;        // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.UpdateData
struct UTabGamePadConfig_v3_C_UpdateData_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_2;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_3;                               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetCurrentInputPresetName_ReturnValue;    // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentPlatformIndex_PlatformIndex;    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_4;                               // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_5;                               // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_6;                               // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default;                             // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xDC (0xDC - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.PreConstructData
struct UTabGamePadConfig_v3_C_PreConstructData_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                          K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm)
	class FText                                  CallFunc_Array_Get_Item;                           // 0x20(0x18)()
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_830[0x4];                                      // Fixing Size After Last Property
	struct FFortRadioButtonItemStruct            K2Node_MakeStruct_FortRadioButtonItemStruct;       // 0x40(0x28)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_831[0x3];                                      // Fixing Size After Last Property
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_832[0x4];                                      // Fixing Size After Last Property
	TArray<class FText>                          K2Node_MakeArray_Array_1;                          // 0x78(0x10)(ReferenceParm)
	class FText                                  CallFunc_Array_Get_Item_1;                         // 0x88(0x18)()
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_833[0x4];                                      // Fixing Size After Last Property
	struct FFortRadioButtonItemStruct            K2Node_MakeStruct_FortRadioButtonItemStruct_1;     // 0xA8(0x28)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_835[0x3];                                      // Fixing Size After Last Property
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B9 (0x1B9 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.InitializeData
struct UTabGamePadConfig_v3_C_InitializeData_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_856[0x7];                                      // Fixing Size After Last Property
	TArray<class FString>                        CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetNames; // 0x20(0x10)(ReferenceParm)
	TArray<class FText>                          CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames; // 0x30(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_857[0x4];                                      // Fixing Size After Last Property
	struct FFortRadioButtonItemStruct            K2Node_MakeStruct_FortRadioButtonItemStruct;       // 0x48(0x28)(ContainsInstancedReference, HasGetValueTypeHash)
	class FString                                CallFunc_Array_Get_Item;                           // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCustomGamepadConfig_ReturnValue;        // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x85(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85A[0x2];                                      // Fixing Size After Last Property
	class FText                                  Temp_text_Variable;                                // 0x88(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85B[0x4];                                      // Fixing Size After Last Property
	class FText                                  Temp_text_Variable_1;                              // 0xA8(0x18)()
	bool                                         Temp_bool_Variable;                                // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85C[0x7];                                      // Fixing Size After Last Property
	class FText                                  Temp_text_Variable_2;                              // 0xC8(0x18)()
	class FText                                  Temp_text_Variable_3;                              // 0xE0(0x18)()
	class FString                                CallFunc_GetPlatformName_ReturnValue;              // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x10C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_860[0x3];                                      // Fixing Size After Last Property
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_862[0x3];                                      // Fixing Size After Last Property
	class FString                                CallFunc_GetPlatformName_ReturnValue_1;            // 0x118(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default;                             // 0x128(0x18)()
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_863[0x7];                                      // Fixing Size After Last Property
	TArray<class FText>                          K2Node_MakeArray_Array;                            // 0x148(0x10)(ReferenceParm)
	class FText                                  K2Node_Select_Default_1;                           // 0x158(0x18)()
	class FText                                  CallFunc_Array_Get_Item_1;                         // 0x170(0x18)()
	struct FFortRadioButtonItemStruct            K2Node_MakeStruct_FortRadioButtonItemStruct_1;     // 0x188(0x28)(ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x1B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x1B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.DialogResult_017CD690454514A07B4DE5BE109AEC6E
struct UTabGamePadConfig_v3_C_DialogResult_017CD690454514A07B4DE5BE109AEC6E_Params
{
public:
	enum class EFortDialogResult                 Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_872[0x3];                                      // Fixing Size After Last Property
	class FName                                  ResultName;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.DialogResult_7D7E06D747FFEF9849D3CAA2D3D91717
struct UTabGamePadConfig_v3_C_DialogResult_7D7E06D747FFEF9849D3CAA2D3D91717_Params
{
public:
	enum class EFortDialogResult                 Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_87A[0x3];                                      // Fixing Size After Last Property
	class FName                                  ResultName;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.Gamepad Config Changed
struct UTabGamePadConfig_v3_C_Gamepad_Config_Changed_Params
{
public:
	class UCommonButtonLegacy*                   AssociatedButton;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        ButtonIndex;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.GamepadPlatformConfigChanged
struct UTabGamePadConfig_v3_C_GamepadPlatformConfigChanged_Params
{
public:
	class UCommonButtonLegacy*                   AssociatedButton;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        ButtonIndex;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CenterOnTab
struct UTabGamePadConfig_v3_C_CenterOnTab_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.UpdateOptionsTab
struct UTabGamePadConfig_v3_C_UpdateOptionsTab_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomDoResetToDefault
struct UTabGamePadConfig_v3_C_CustomDoResetToDefault_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomKeySelected_Bind
struct UTabGamePadConfig_v3_C_CustomKeySelected_Bind_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomActionSelected_Bind
struct UTabGamePadConfig_v3_C_CustomActionSelected_Bind_Params
{
public:
	int32                                        SelectedIndex;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ActionName;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomClosedUsingBack_Bind
struct UTabGamePadConfig_v3_C_CustomClosedUsingBack_Bind_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomClearButton_Bind
struct UTabGamePadConfig_v3_C_CustomClearButton_Bind_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ModesTabSelected_Bind
struct UTabGamePadConfig_v3_C_ModesTabSelected_Bind_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleUsingGamepadChanged
struct UTabGamePadConfig_v3_C_HandleUsingGamepadChanged_Params
{
public:
	enum class ECommonInputType                  NewInputType;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.OnTabDeactivated_Bind
struct UTabGamePadConfig_v3_C_OnTabDeactivated_Bind_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.OnTabActivated_Bind
struct UTabGamePadConfig_v3_C_OnTabActivated_Bind_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.PreConstruct
struct UTabGamePadConfig_v3_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.DeadZoneLookSettingValueChanged_Bind
struct UTabGamePadConfig_v3_C_DeadZoneLookSettingValueChanged_Bind_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.DeadZoneMoveSettingValueChanged_Bind
struct UTabGamePadConfig_v3_C_DeadZoneMoveSettingValueChanged_Bind_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.Construct
struct UTabGamePadConfig_v3_C_Construct_Params
{
public:
};

// 0x240 (0x240 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ExecuteUbergraph_TabGamePadConfig_v3
struct UTabGamePadConfig_v3_C_ExecuteUbergraph_TabGamePadConfig_v3_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8ED[0x4];                                      // Fixing Size After Last Property
	class UCommonButtonLegacy*                   K2Node_CustomEvent_AssociatedButton;               // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_ButtonIndex;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x14(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8EF[0x4];                                      // Fixing Size After Last Property
	class UCommonButtonLegacy*                   K2Node_CustomEvent_AssociatedButton_1;             // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_ButtonIndex_1;                  // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x3C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_CustomEvent_Key;                            // 0x48(0x18)(HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x64(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_SelectedIndex;                  // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_ActionName;                     // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x78(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x88(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F1[0x4];                                      // Fixing Size After Last Property
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_2;                               // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetInputDataIndexForActionName_ReturnValue; // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FConfirmationDialogAction>     CallFunc_CreateCustomResetToDefaultList_ReturnValue; // 0xA8(0x10)(ReferenceParm)
	int32                                        Temp_int_Variable_3;                               // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default;                             // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F6[0x4];                                      // Fixing Size After Last Property
	class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowConfirmationDialog_NUI_ReturnValue;   // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECommonGamepadType                Temp_byte_Variable;                                // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F7[0x2];                                      // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0xD4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECommonGamepadType                Temp_byte_Variable_1;                              // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F9[0x3];                                      // Fixing Size After Last Property
	class FName                                  K2Node_CustomEvent_TabId;                          // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonGamepadType                Temp_byte_Variable_2;                              // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonGamepadType                Temp_byte_Variable_3;                              // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8FC[0x2];                                      // Fixing Size After Last Property
	int32                                        Temp_int_Variable_4;                               // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortOptionsMenuInputData*>     CallFunc_GetActionItemsInGroup_ReturnValue;        // 0xF0(0x10)(ReferenceParm)
	enum class ECommonGamepadType                K2Node_Select_Default_1;                           // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8FD[0x7];                                      // Fixing Size After Last Property
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue_1;                 // 0x108(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8FE[0x3];                                      // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x114(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  K2Node_Event_NewInputType;                         // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_901[0x6];                                      // Fixing Size After Last Property
	class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue; // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 Temp_byte_Variable_4;                              // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_903[0x2];                                      // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x134(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x140(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x14C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_905[0x3];                                      // Fixing Size After Last Property
	class FName                                  Temp_name_Variable;                                // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x154(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x160(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0x16C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 K2Node_CustomEvent_Result;                         // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_906[0x3];                                      // Fixing Size After Last Property
	class FName                                  K2Node_CustomEvent_ResultName;                     // 0x17C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCustomConfig_ReturnValue;               // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_908[0x3];                                      // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0x184(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_14;           // 0x190(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x19C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_909[0x3];                                      // Fixing Size After Last Property
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue_2;                 // 0x1A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetInputDataIndexForActionName_ReturnValue_1; // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_90A[0x4];                                      // Fixing Size After Last Property
	class UCommonInputSubsystem*                 CallFunc_GetContext_ReturnValue_3;                 // 0x1B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_90B[0x7];                                      // Fixing Size After Last Property
	class UCommonInputSubsystem*                 CallFunc_GetContext_ReturnValue_4;                 // 0x1C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue_1;        // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HandleApply_PassThrough;                  // 0x1C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 Temp_byte_Variable_5;                              // 0x1CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HandleApply_PassThrough_1;                // 0x1CB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_90D[0x3];                                      // Fixing Size After Last Property
	class FName                                  Temp_name_Variable_1;                              // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_15;           // 0x1D4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x1E0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x1F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_2;        // 0x1F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_3;        // 0x1F3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Value_1;                        // 0x1F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 K2Node_CustomEvent_Result_1;                       // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_90E[0x3];                                      // Fixing Size After Last Property
	class FName                                  K2Node_CustomEvent_ResultName_1;                   // 0x1FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Value;                          // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_16;           // 0x204(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_17;           // 0x210(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_18;           // 0x21C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Array_Get_Item;                           // 0x228(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetSelectedTabId_ReturnValue;             // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsControllerDefaultInputType_ReturnValue; // 0x23C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_4;        // 0x23D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AreWeOkayWithThisChange_IsOkay;           // 0x23E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_5;        // 0x23F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.OverrideResetModal__DelegateSignature
struct UTabGamePadConfig_v3_C_OverrideResetModal__DelegateSignature_Params
{
public:
	bool                                         bOverride;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.TabGamePadActionsThatNeedBinds__DelegateSignature
struct UTabGamePadConfig_v3_C_TabGamePadActionsThatNeedBinds__DelegateSignature_Params
{
public:
	TArray<class FText>                          ScreenLabels;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.TabGamePadConfigApply__DelegateSignature
struct UTabGamePadConfig_v3_C_TabGamePadConfigApply__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.TabGamePadConfigBack__DelegateSignature
struct UTabGamePadConfig_v3_C_TabGamePadConfigBack__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.GamepadMappingInfoChanged__DelegateSignature
struct UTabGamePadConfig_v3_C_GamepadMappingInfoChanged__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
