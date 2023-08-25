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
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ShowAthenaLTMAbilitiesTab
struct UGamepadMappingInfo_v3_C_ShowAthenaLTMAbilitiesTab_Params
{
public:
};

// 0x9 (0x9 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HideAthenaLTMAbilitiesTab
struct UGamepadMappingInfo_v3_C_HideAthenaLTMAbilitiesTab_Params
{
public:
	bool                                         CallFunc_SelectTabByID_ReturnValue;                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7BA[0x3];                                      // Fixing Size After Last Property 
	class FName                                  CallFunc_GetActiveTab_ReturnValue;                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ShowDeadZoneTab
struct UGamepadMappingInfo_v3_C_ShowDeadZoneTab_Params
{
public:
};

// 0x9 (0x9 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HideDeadZoneTab
struct UGamepadMappingInfo_v3_C_HideDeadZoneTab_Params
{
public:
	bool                                         CallFunc_SelectTabByID_ReturnValue;                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C8[0x3];                                      // Fixing Size After Last Property 
	class FName                                  CallFunc_GetActiveTab_ReturnValue;                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GamepadMappingInfoNavLeft
struct UGamepadMappingInfo_v3_C_GamepadMappingInfoNavLeft_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ShowEditModeTab
struct UGamepadMappingInfo_v3_C_ShowEditModeTab_Params
{
public:
};

// 0x9 (0x9 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HideEditModeTab
struct UGamepadMappingInfo_v3_C_HideEditModeTab_Params
{
public:
	bool                                         CallFunc_SelectTabByID_ReturnValue;                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7D2[0x3];                                      // Fixing Size After Last Property 
	class FName                                  CallFunc_GetActiveTab_ReturnValue;                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x220 (0x220 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.On_Image_LightBox_MouseButtonDown_0
struct UGamepadMappingInfo_v3_C_On_Image_LightBox_MouseButtonDown_0_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x168(0xB8)(None)
};

// 0xD7 (0xD7 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GetCustomButtonDataForKey
struct UGamepadMappingInfo_v3_C_GetCustomButtonDataForKey_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FName                                  ActionName;                                        // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7E4[0x4];                                      // Fixing Size After Last Property 
	class FText                                  DescText;                                          // 0x20(0x18)(Parm, OutParm)
	enum class EFortInputActionGroup             InputActionGroup_Local;                            // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7E5[0x7];                                      // Fixing Size After Last Property 
	class FText                                  DescText_Local;                                    // 0x40(0x18)(Edit, BlueprintVisible)
	class FName                                  ActionName_Local;                                  // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  PresetName_Local;                                  // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  Key_Local;                                         // 0x60(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash)
	enum class EFortInputActionGroup             Temp_byte_Variable;                                // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7E6[0x7];                                      // Fixing Size After Last Property 
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue_1;                 // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetCustomGamepadInputPresetName_ReturnValue; // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7E8[0x3];                                      // Fixing Size After Last Property 
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue; // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetScreenLabel_ReturnValue;               // 0xB0(0x18)(None)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue_2;                 // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetActionForKey_ReturnValue;              // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortInputActionGroup             CallFunc_GetInputActionGroup_OutInputActionGroup;  // 0xD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetInputActionGroup_ReturnValue;          // 0xD5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortInputActionGroup             K2Node_Select_Default;                             // 0xD6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.SetTextForMode
struct UGamepadMappingInfo_v3_C_SetTextForMode_Params
{
public:
	enum class EFortInputActionGroup             Selection;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.SetButtonTextLabelsFromTextArray
struct UGamepadMappingInfo_v3_C_SetButtonTextLabelsFromTextArray_Params
{
public:
	TArray<class FText>                          Array;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50C (0x50C - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonTextForSTW_BuilderProBuild
struct UGamepadMappingInfo_v3_C_InitializeListOfButtonTextForSTW_BuilderProBuild_Params
{
public:
	TArray<class FText>                          ButtonTextLabels;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                  Temp_text_Variable;                                // 0x10(0x18)(ConstParm)
	class FText                                  Temp_text_Variable_1;                              // 0x28(0x18)(ConstParm)
	class FText                                  Temp_text_Variable_2;                              // 0x40(0x18)(ConstParm)
	class FText                                  Temp_text_Variable_3;                              // 0x58(0x18)(ConstParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x70(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_3;                  // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_4;                  // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_841[0x4];                                      // Fixing Size After Last Property 
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue; // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_1; // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetBuildingEditResetLabel_ReturnValue;    // 0xB0(0x18)(None)
	class FText                                  CallFunc_GetRepairOrImproveLabel_ReturnValue;      // 0xC8(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_5;                  // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_6;                  // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_2; // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_3; // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLookLabel_ReturnValue;                 // 0xF8(0x18)(None)
	class FText                                  CallFunc_GetJumpLabel_ReturnValue;                 // 0x110(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_7;                  // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_8;                  // 0x12C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_4; // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_5; // 0x138(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue; // 0x140(0x18)(None)
	class FText                                  CallFunc_GetSwitchQuickbarLabel_ReturnValue;       // 0x158(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_9;                  // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_10;                 // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_6; // 0x178(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_7; // 0x180(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGamepadTrapPickerHoldLabel_ReturnValue; // 0x188(0x18)(None)
	class FText                                  CallFunc_GetInteractTapHoldLabel_ReturnValue;      // 0x1A0(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_11;                 // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_12;                 // 0x1BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_8; // 0x1C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_9; // 0x1C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGamepadTrapSelectAndPlaceLabel_ReturnValue; // 0x1D0(0x18)(None)
	class FText                                  CallFunc_GetHarvestWeaponLabel_ReturnValue;        // 0x1E8(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_13;                 // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_14;                 // 0x204(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_10; // 0x208(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_11; // 0x210(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGamepadFloorSelectAndPlaceLabel_ReturnValue; // 0x218(0x18)(None)
	class FText                                  CallFunc_GetGamepadWallSelectAndPlaceLabel_ReturnValue; // 0x230(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_15;                 // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_16;                 // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_12; // 0x250(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_13; // 0x258(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGameMenuLabel_ReturnValue;             // 0x260(0x18)(None)
	class FText                                  CallFunc_GetToggleFullScreenMapLabel_ReturnValue;  // 0x278(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_17;                 // 0x290(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_18;                 // 0x294(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_14; // 0x298(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_15; // 0x2A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGamepadChangeMaterialOrTrapPickerLabel_ReturnValue; // 0x2A8(0x18)(None)
	class FText                                  CallFunc_GetGamepadChangeMaterialOrTrapPickerLabel_ReturnValue_1; // 0x2C0(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_19;                 // 0x2D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_20;                 // 0x2DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_16; // 0x2E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_17; // 0x2E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetToggleInventoryLabel_ReturnValue;      // 0x2F0(0x18)(None)
	class FText                                  CallFunc_GetToggleInventoryLabel_ReturnValue_1;    // 0x308(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_21;                 // 0x320(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_22;                 // 0x324(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_18; // 0x328(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_19; // 0x330(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetEmoteOrQuickChatOrSpotEnemyLabel_ReturnValue; // 0x338(0x18)(None)
	class FText                                  CallFunc_GetEmoteOrQuickChatOrSpotEnemyLabel_ReturnValue_1; // 0x350(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_23;                 // 0x368(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_24;                 // 0x36C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_20; // 0x370(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_21; // 0x378(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetAutoSprintLabel_ReturnValue;           // 0x380(0x18)(None)
	class FText                                  CallFunc_GetAutoSprintLabel_ReturnValue_1;         // 0x398(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_25;                 // 0x3B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_26;                 // 0x3B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_22; // 0x3B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_23; // 0x3C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetSprintLabel_ReturnValue;               // 0x3C8(0x18)(None)
	class FText                                  CallFunc_GetSprintLabel_ReturnValue_1;             // 0x3E0(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_27;                 // 0x3F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_28;                 // 0x3FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_24; // 0x400(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_25; // 0x408(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetMoveLabel_ReturnValue;                 // 0x410(0x18)(None)
	class FText                                  CallFunc_GetMoveLabel_ReturnValue_1;               // 0x428(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_29;                 // 0x440(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_30;                 // 0x444(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_26; // 0x448(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_27; // 0x450(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGamepadRoofSelectAndPlaceLabel_ReturnValue; // 0x458(0x18)(None)
	class FText                                  CallFunc_GetGamepadStairSelectAndPlaceLabel_ReturnValue; // 0x470(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_31;                 // 0x488(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_32;                 // 0x48C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_4;                              // 0x490(0x18)(ConstParm)
	class FText                                  Temp_text_Variable_5;                              // 0x4A8(0x18)(ConstParm)
	int32                                        CallFunc_Array_Add_ReturnValue_33;                 // 0x4C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_34;                 // 0x4C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_6;                              // 0x4C8(0x18)(ConstParm)
	int32                                        CallFunc_Array_Add_ReturnValue_35;                 // 0x4E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85E[0x4];                                      // Fixing Size After Last Property 
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_28; // 0x4E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetRotateBuildingLabel_ReturnValue;       // 0x4F0(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_36;                 // 0x508(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GetControllerImage
struct UGamepadMappingInfo_v3_C_GetControllerImage_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             Texture;                                           // 0x0(0x20)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88A[0x3];                                      // Fixing Size After Last Property 
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             CallFunc_Array_Get_Item;                           // 0x28(0x20)(HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ClearAllComboTextLines
struct UGamepadMappingInfo_v3_C_ClearAllComboTextLines_Params
{
public:
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x0(0x18)(None)
};

// 0x52C (0x52C - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonTextForSTWCombatProCombat
struct UGamepadMappingInfo_v3_C_InitializeListOfButtonTextForSTWCombatProCombat_Params
{
public:
	TArray<class FText>                          ButtonTextLabels;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCrouchLabel_ReturnValue;               // 0x18(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x30(0x18)(None)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_1; // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_2; // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetAbility2Label_ReturnValue;             // 0x58(0x18)(None)
	class FText                                  CallFunc_GetAbility1Label_ReturnValue;             // 0x70(0x18)(None)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_3; // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetAbility3Label_ReturnValue;             // 0x90(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_3;                  // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_4; // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_5; // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetRepairOrImproveLabel_ReturnValue;      // 0xC8(0x18)(None)
	class FText                                  CallFunc_GetLookLabel_ReturnValue;                 // 0xE0(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_4;                  // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_5;                  // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_6; // 0x100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_7; // 0x108(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetJumpLabel_ReturnValue;                 // 0x110(0x18)(None)
	class FText                                  CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue; // 0x128(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_6;                  // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_7;                  // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_8; // 0x148(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_9; // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDeployHoverboardLabel_ReturnValue;     // 0x158(0x18)(None)
	class FText                                  CallFunc_GetSwitchQuickbarLabel_ReturnValue;       // 0x170(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_8;                  // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_9;                  // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_10; // 0x190(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_11; // 0x198(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCraftAmmoHoldLabel_ReturnValue;        // 0x1A0(0x18)(None)
	class FText                                  CallFunc_GetInteractTapHoldLabel_ReturnValue;      // 0x1B8(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_10;                 // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_11;                 // 0x1D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_12; // 0x1D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_13; // 0x1E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetReloadTapLabel_ReturnValue;            // 0x1E8(0x18)(None)
	class FText                                  CallFunc_GetHarvestWeaponLabel_ReturnValue;        // 0x200(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_12;                 // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_13;                 // 0x21C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_14; // 0x220(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_15; // 0x228(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetNextWeaponTapLabel_ReturnValue;        // 0x230(0x18)(None)
	class FText                                  CallFunc_GetAttackConfirmLabel_ReturnValue;        // 0x248(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_14;                 // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_15;                 // 0x264(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_16; // 0x268(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_17; // 0x270(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGameMenuLabel_ReturnValue;             // 0x278(0x18)(None)
	class FText                                  CallFunc_GetToggleFullScreenMapLabel_ReturnValue;  // 0x290(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_16;                 // 0x2A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_17;                 // 0x2AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_18; // 0x2B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_19; // 0x2B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGadget2Label_ReturnValue;              // 0x2C0(0x18)(None)
	class FText                                  CallFunc_GetGadget2Label_ReturnValue_1;            // 0x2D8(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_18;                 // 0x2F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_19;                 // 0x2F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_20; // 0x2F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_21; // 0x300(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGadget1Label_ReturnValue;              // 0x308(0x18)(None)
	class FText                                  CallFunc_GetGadget1Label_ReturnValue_1;            // 0x320(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_20;                 // 0x338(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_21;                 // 0x33C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_22; // 0x340(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_23; // 0x348(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetToggleInventoryLabel_ReturnValue;      // 0x350(0x18)(None)
	class FText                                  CallFunc_GetToggleInventoryLabel_ReturnValue_1;    // 0x368(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_22;                 // 0x380(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_23;                 // 0x384(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_24; // 0x388(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_25; // 0x390(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetEmoteOrQuickChatOrSpotEnemyLabel_ReturnValue; // 0x398(0x18)(None)
	class FText                                  CallFunc_GetEmoteOrQuickChatOrSpotEnemyLabel_ReturnValue_1; // 0x3B0(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_24;                 // 0x3C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_25;                 // 0x3CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_26; // 0x3D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_27; // 0x3D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetAutoSprintLabel_ReturnValue;           // 0x3E0(0x18)(None)
	class FText                                  CallFunc_GetAutoSprintLabel_ReturnValue_1;         // 0x3F8(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_26;                 // 0x410(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_27;                 // 0x414(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_28; // 0x418(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_29; // 0x420(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetSprintLabel_ReturnValue;               // 0x428(0x18)(None)
	class FText                                  CallFunc_GetSprintLabel_ReturnValue_1;             // 0x440(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_28;                 // 0x458(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_29;                 // 0x45C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_30; // 0x460(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_31; // 0x468(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetMoveLabel_ReturnValue;                 // 0x470(0x18)(None)
	class FText                                  CallFunc_GetMoveLabel_ReturnValue_1;               // 0x488(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_30;                 // 0x4A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_31;                 // 0x4A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_32; // 0x4A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_33; // 0x4B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetPreviousWeaponTapLabel_ReturnValue;    // 0x4B8(0x18)(None)
	class FText                                  CallFunc_GetAimDownSightsHeavyMeleeLabel_ReturnValue; // 0x4D0(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_32;                 // 0x4E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_33;                 // 0x4EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x4F0(0x18)(ConstParm)
	int32                                        CallFunc_Array_Add_ReturnValue_34;                 // 0x508(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_35;                 // 0x50C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_1;                              // 0x510(0x18)(ConstParm)
	int32                                        CallFunc_Array_Add_ReturnValue_36;                 // 0x528(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4A (0x4A - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.SetTextFieldVisibilityForExtraLine
struct UGamepadMappingInfo_v3_C_SetTextFieldVisibilityForExtraLine_Params
{
public:
	class UTextBlock*                            TextWidget;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8FC[0x7];                                      // Fixing Size After Last Property 
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x10(0x18)(None)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_900[0x6];                                      // Fixing Size After Last Property 
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x30(0x18)(None)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4A (0x4A - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GetDesiredSlateVisibilityForAbilityChordFromTextDisplay
struct UGamepadMappingInfo_v3_C_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_Params
{
public:
	class UTextBlock*                            TextWidget;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  DesiredSlateVisibility;                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_907[0x6];                                      // Fixing Size After Last Property 
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x10(0x18)(None)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_908[0x6];                                      // Fixing Size After Last Property 
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x30(0x18)(None)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4FC (0x4FC - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonTextForSTWCombatProBuild
struct UGamepadMappingInfo_v3_C_InitializeListOfButtonTextForSTWCombatProBuild_Params
{
public:
	TArray<class FText>                          ButtonTextLabels;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                  Temp_text_Variable;                                // 0x10(0x18)(ConstParm)
	class FText                                  Temp_text_Variable_1;                              // 0x28(0x18)(ConstParm)
	class FText                                  Temp_text_Variable_2;                              // 0x40(0x18)(ConstParm)
	class FText                                  Temp_text_Variable_3;                              // 0x58(0x18)(ConstParm)
	class FText                                  Temp_text_Variable_4;                              // 0x70(0x18)(ConstParm)
	class FText                                  Temp_text_Variable_5;                              // 0x88(0x18)(ConstParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0xA0(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_3;                  // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_4;                  // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_5;                  // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_6;                  // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_958[0x4];                                      // Fixing Size After Last Property 
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue; // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_1; // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetBuildingEditResetLabel_ReturnValue;    // 0xE8(0x18)(None)
	class FText                                  CallFunc_GetRepairOrImproveLabel_ReturnValue;      // 0x100(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_7;                  // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_8;                  // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_2; // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_3; // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLookLabel_ReturnValue;                 // 0x130(0x18)(None)
	class FText                                  CallFunc_GetJumpLabel_ReturnValue;                 // 0x148(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_9;                  // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_10;                 // 0x164(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_4; // 0x168(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_5; // 0x170(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue; // 0x178(0x18)(None)
	class FText                                  CallFunc_GetSwitchQuickbarLabel_ReturnValue;       // 0x190(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_11;                 // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_12;                 // 0x1AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_6; // 0x1B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_7; // 0x1B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetTrapInventoryHoldLabel_ReturnValue;    // 0x1C0(0x18)(None)
	class FText                                  CallFunc_GetInteractTapHoldLabel_ReturnValue;      // 0x1D8(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_13;                 // 0x1F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_14;                 // 0x1F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_8; // 0x1F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_9; // 0x200(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetPickTrapTapHoldLabel_ReturnValue;      // 0x208(0x18)(None)
	class FText                                  CallFunc_GetHarvestWeaponLabel_ReturnValue;        // 0x220(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_15;                 // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_16;                 // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_10; // 0x240(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_11; // 0x248(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetNextBuildingPieceLabel_ReturnValue;    // 0x250(0x18)(None)
	class FText                                  CallFunc_GetPlaceBuildingOrTrapConfirmLabel_ReturnValue; // 0x268(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_17;                 // 0x280(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_18;                 // 0x284(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_12; // 0x288(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_13; // 0x290(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGameMenuLabel_ReturnValue;             // 0x298(0x18)(None)
	class FText                                  CallFunc_GetToggleFullScreenMapLabel_ReturnValue;  // 0x2B0(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_19;                 // 0x2C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_20;                 // 0x2CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_14; // 0x2D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_15; // 0x2D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetToggleInventoryLabel_ReturnValue;      // 0x2E0(0x18)(None)
	class FText                                  CallFunc_GetToggleInventoryLabel_ReturnValue_1;    // 0x2F8(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_21;                 // 0x310(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_22;                 // 0x314(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_16; // 0x318(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_17; // 0x320(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetEmoteOrQuickChatOrSpotEnemyLabel_ReturnValue; // 0x328(0x18)(None)
	class FText                                  CallFunc_GetEmoteOrQuickChatOrSpotEnemyLabel_ReturnValue_1; // 0x340(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_23;                 // 0x358(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_24;                 // 0x35C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_18; // 0x360(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_19; // 0x368(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetAutoSprintLabel_ReturnValue;           // 0x370(0x18)(None)
	class FText                                  CallFunc_GetAutoSprintLabel_ReturnValue_1;         // 0x388(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_25;                 // 0x3A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_26;                 // 0x3A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_20; // 0x3A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_21; // 0x3B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetSprintLabel_ReturnValue;               // 0x3B8(0x18)(None)
	class FText                                  CallFunc_GetSprintLabel_ReturnValue_1;             // 0x3D0(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_27;                 // 0x3E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_28;                 // 0x3EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_22; // 0x3F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_23; // 0x3F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetMoveLabel_ReturnValue;                 // 0x400(0x18)(None)
	class FText                                  CallFunc_GetMoveLabel_ReturnValue_1;               // 0x418(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_29;                 // 0x430(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_30;                 // 0x434(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_24; // 0x438(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_25; // 0x440(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetPreviousBuildingPieceLabel_ReturnValue; // 0x448(0x18)(None)
	class FText                                  CallFunc_GetChangeMaterialLabel_ReturnValue;       // 0x460(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_31;                 // 0x478(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_32;                 // 0x47C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_6;                              // 0x480(0x18)(ConstParm)
	class FText                                  Temp_text_Variable_7;                              // 0x498(0x18)(ConstParm)
	int32                                        CallFunc_Array_Add_ReturnValue_33;                 // 0x4B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_34;                 // 0x4B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_8;                              // 0x4B8(0x18)(ConstParm)
	int32                                        CallFunc_Array_Add_ReturnValue_35;                 // 0x4D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_96F[0x4];                                      // Fixing Size After Last Property 
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_26; // 0x4D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetRotateBuildingLabel_ReturnValue;       // 0x4E0(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_36;                 // 0x4F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonLabelTextWidgets
struct UGamepadMappingInfo_v3_C_InitializeListOfButtonLabelTextWidgets_Params
{
public:
	TArray<class UCommonTextBlock*>              K2Node_MakeArray_Array;                            // 0x0(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_990[0x4];                                      // Fixing Size After Last Property 
	TArray<class UCommonTextBlock*>              K2Node_MakeArray_Array_1;                          // 0x18(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_3;                  // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_4;                  // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_5;                  // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_6;                  // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_7;                  // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_8;                  // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_9;                  // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_10;                 // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_11;                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_12;                 // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_13;                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_14;                 // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_15;                 // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_16;                 // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_17;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_18;                 // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UCommonTextBlock*>              K2Node_MakeArray_Array_2;                          // 0x70(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
};

// 0xA (0xA - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Handle Config Changed Hide or Show Unused Text Lines
struct UGamepadMappingInfo_v3_C_Handle_Config_Changed_Hide_or_Show_Unused_Text_Lines_Params
{
public:
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility; // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility_1; // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility_2; // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x838 (0x838 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Handle Config Changed STW Combat Mode
struct UGamepadMappingInfo_v3_C_Handle_Config_Changed_STW_Combat_Mode_Params
{
public:
	int32                                        Config;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9F8[0x7];                                      // Fixing Size After Last Property 
	class FText                                  Temp_text_Variable;                                // 0x10(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x28(0x18)(None)
	int32                                        Temp_int_Variable_1;                               // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9FA[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default;                             // 0x48(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x60(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x78(0x18)(None)
	int32                                        Temp_int_Variable_2;                               // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9FB[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_1;                           // 0x98(0x18)(None)
	class FText                                  Temp_text_Variable_4;                              // 0xB0(0x18)(None)
	class FText                                  Temp_text_Variable_5;                              // 0xC8(0x18)(None)
	int32                                        Temp_int_Variable_3;                               // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9FC[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_2;                           // 0xE8(0x18)(None)
	class FText                                  Temp_text_Variable_6;                              // 0x100(0x18)(None)
	class FText                                  Temp_text_Variable_7;                              // 0x118(0x18)(None)
	int32                                        Temp_int_Variable_4;                               // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9FD[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_3;                           // 0x138(0x18)(None)
	class FText                                  Temp_text_Variable_8;                              // 0x150(0x18)(None)
	class FText                                  Temp_text_Variable_9;                              // 0x168(0x18)(None)
	int32                                        Temp_int_Variable_5;                               // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9FF[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_4;                           // 0x188(0x18)(None)
	class FText                                  Temp_text_Variable_10;                             // 0x1A0(0x18)(None)
	class FText                                  Temp_text_Variable_11;                             // 0x1B8(0x18)(None)
	int32                                        Temp_int_Variable_6;                               // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A02[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_5;                           // 0x1D8(0x18)(None)
	class FText                                  Temp_text_Variable_12;                             // 0x1F0(0x18)(None)
	class FText                                  Temp_text_Variable_13;                             // 0x208(0x18)(None)
	int32                                        Temp_int_Variable_7;                               // 0x220(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A03[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_6;                           // 0x228(0x18)(None)
	class FText                                  Temp_text_Variable_14;                             // 0x240(0x18)(None)
	class FText                                  Temp_text_Variable_15;                             // 0x258(0x18)(None)
	int32                                        Temp_int_Variable_8;                               // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A06[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_7;                           // 0x278(0x18)(None)
	class FText                                  Temp_text_Variable_16;                             // 0x290(0x18)(None)
	class FText                                  Temp_text_Variable_17;                             // 0x2A8(0x18)(None)
	int32                                        Temp_int_Variable_9;                               // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A08[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_8;                           // 0x2C8(0x18)(None)
	class FText                                  Temp_text_Variable_18;                             // 0x2E0(0x18)(None)
	class FText                                  Temp_text_Variable_19;                             // 0x2F8(0x18)(None)
	int32                                        Temp_int_Variable_10;                              // 0x310(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0A[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_9;                           // 0x318(0x18)(None)
	class FText                                  Temp_text_Variable_20;                             // 0x330(0x18)(None)
	class FText                                  Temp_text_Variable_21;                             // 0x348(0x18)(None)
	int32                                        Temp_int_Variable_11;                              // 0x360(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0B[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_10;                          // 0x368(0x18)(None)
	class FText                                  Temp_text_Variable_22;                             // 0x380(0x18)(None)
	class FText                                  Temp_text_Variable_23;                             // 0x398(0x18)(None)
	int32                                        Temp_int_Variable_12;                              // 0x3B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0D[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_11;                          // 0x3B8(0x18)(None)
	class FText                                  Temp_text_Variable_24;                             // 0x3D0(0x18)(None)
	class FText                                  Temp_text_Variable_25;                             // 0x3E8(0x18)(None)
	int32                                        Temp_int_Variable_13;                              // 0x400(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0F[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_12;                          // 0x408(0x18)(None)
	class FText                                  Temp_text_Variable_26;                             // 0x420(0x18)(None)
	class FText                                  Temp_text_Variable_27;                             // 0x438(0x18)(None)
	int32                                        Temp_int_Variable_14;                              // 0x450(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A10[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_13;                          // 0x458(0x18)(None)
	class FText                                  Temp_text_Variable_28;                             // 0x470(0x18)(None)
	class FText                                  Temp_text_Variable_29;                             // 0x488(0x18)(None)
	int32                                        Temp_int_Variable_15;                              // 0x4A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A11[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_14;                          // 0x4A8(0x18)(None)
	class FText                                  Temp_text_Variable_30;                             // 0x4C0(0x18)(None)
	class FText                                  Temp_text_Variable_31;                             // 0x4D8(0x18)(None)
	int32                                        Temp_int_Variable_16;                              // 0x4F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A12[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_15;                          // 0x4F8(0x18)(None)
	class FText                                  Temp_text_Variable_32;                             // 0x510(0x18)(None)
	class FText                                  Temp_text_Variable_33;                             // 0x528(0x18)(None)
	int32                                        Temp_int_Variable_17;                              // 0x540(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A13[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_16;                          // 0x548(0x18)(None)
	class FText                                  Temp_text_Variable_34;                             // 0x560(0x18)(None)
	class FText                                  Temp_text_Variable_35;                             // 0x578(0x18)(None)
	int32                                        Temp_int_Variable_18;                              // 0x590(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A14[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_17;                          // 0x598(0x18)(None)
	class FText                                  Temp_text_Variable_36;                             // 0x5B0(0x18)(None)
	class FText                                  Temp_text_Variable_37;                             // 0x5C8(0x18)(None)
	int32                                        Temp_int_Variable_19;                              // 0x5E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A15[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_18;                          // 0x5E8(0x18)(None)
	class FText                                  Temp_text_Variable_38;                             // 0x600(0x18)(None)
	class FText                                  Temp_text_Variable_39;                             // 0x618(0x18)(None)
	int32                                        Temp_int_Variable_20;                              // 0x630(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A19[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_19;                          // 0x638(0x18)(None)
	class FText                                  Temp_text_Variable_40;                             // 0x650(0x18)(None)
	class FText                                  Temp_text_Variable_41;                             // 0x668(0x18)(None)
	int32                                        Temp_int_Variable_21;                              // 0x680(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1B[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_20;                          // 0x688(0x18)(None)
	class FText                                  Temp_text_Variable_42;                             // 0x6A0(0x18)(None)
	class FText                                  Temp_text_Variable_43;                             // 0x6B8(0x18)(None)
	int32                                        Temp_int_Variable_22;                              // 0x6D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1E[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_21;                          // 0x6D8(0x18)(None)
	class FText                                  Temp_text_Variable_44;                             // 0x6F0(0x18)(None)
	class FText                                  Temp_text_Variable_45;                             // 0x708(0x18)(None)
	class FText                                  Temp_text_Variable_46;                             // 0x720(0x18)(None)
	class FText                                  K2Node_Select_Default_22;                          // 0x738(0x18)(None)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue; // 0x750(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_1; // 0x758(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDeployHoverboardLabel_ReturnValue;     // 0x760(0x18)(None)
	class FText                                  CallFunc_GetAbility2Label_ReturnValue;             // 0x778(0x18)(None)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_2; // 0x790(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_3; // 0x798(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetAbility1Label_ReturnValue;             // 0x7A0(0x18)(None)
	class FText                                  CallFunc_GetAbility3Label_ReturnValue;             // 0x7B8(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x7D0(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x7E8(0x18)(None)
	class FText                                  Temp_text_Variable_47;                             // 0x800(0x18)(None)
	int32                                        Temp_int_Variable_23;                              // 0x818(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A25[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_23;                          // 0x820(0x18)(None)
};

// 0x828 (0x828 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Handle Config Changed STW Build Mode
struct UGamepadMappingInfo_v3_C_Handle_Config_Changed_STW_Build_Mode_Params
{
public:
	int32                                        Config;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A64[0x7];                                      // Fixing Size After Last Property 
	class FText                                  Temp_text_Variable;                                // 0x10(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x28(0x18)(None)
	int32                                        Temp_int_Variable_1;                               // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A65[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default;                             // 0x48(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x60(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x78(0x18)(None)
	int32                                        Temp_int_Variable_2;                               // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A66[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_1;                           // 0x98(0x18)(None)
	class FText                                  Temp_text_Variable_4;                              // 0xB0(0x18)(None)
	class FText                                  Temp_text_Variable_5;                              // 0xC8(0x18)(None)
	int32                                        Temp_int_Variable_3;                               // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A67[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_2;                           // 0xE8(0x18)(None)
	class FText                                  Temp_text_Variable_6;                              // 0x100(0x18)(None)
	class FText                                  Temp_text_Variable_7;                              // 0x118(0x18)(None)
	int32                                        Temp_int_Variable_4;                               // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A69[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_3;                           // 0x138(0x18)(None)
	class FText                                  Temp_text_Variable_8;                              // 0x150(0x18)(None)
	class FText                                  Temp_text_Variable_9;                              // 0x168(0x18)(None)
	int32                                        Temp_int_Variable_5;                               // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A6B[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_4;                           // 0x188(0x18)(None)
	class FText                                  Temp_text_Variable_10;                             // 0x1A0(0x18)(None)
	class FText                                  Temp_text_Variable_11;                             // 0x1B8(0x18)(None)
	int32                                        Temp_int_Variable_6;                               // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A6C[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_5;                           // 0x1D8(0x18)(None)
	class FText                                  Temp_text_Variable_12;                             // 0x1F0(0x18)(None)
	class FText                                  Temp_text_Variable_13;                             // 0x208(0x18)(None)
	int32                                        Temp_int_Variable_7;                               // 0x220(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A71[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_6;                           // 0x228(0x18)(None)
	class FText                                  Temp_text_Variable_14;                             // 0x240(0x18)(None)
	class FText                                  Temp_text_Variable_15;                             // 0x258(0x18)(None)
	int32                                        Temp_int_Variable_8;                               // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A75[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_7;                           // 0x278(0x18)(None)
	class FText                                  Temp_text_Variable_16;                             // 0x290(0x18)(None)
	class FText                                  Temp_text_Variable_17;                             // 0x2A8(0x18)(None)
	int32                                        Temp_int_Variable_9;                               // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A78[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_8;                           // 0x2C8(0x18)(None)
	class FText                                  Temp_text_Variable_18;                             // 0x2E0(0x18)(None)
	class FText                                  Temp_text_Variable_19;                             // 0x2F8(0x18)(None)
	int32                                        Temp_int_Variable_10;                              // 0x310(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A79[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_9;                           // 0x318(0x18)(None)
	class FText                                  Temp_text_Variable_20;                             // 0x330(0x18)(None)
	class FText                                  Temp_text_Variable_21;                             // 0x348(0x18)(None)
	int32                                        Temp_int_Variable_11;                              // 0x360(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A7D[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_10;                          // 0x368(0x18)(None)
	class FText                                  Temp_text_Variable_22;                             // 0x380(0x18)(None)
	class FText                                  Temp_text_Variable_23;                             // 0x398(0x18)(None)
	int32                                        Temp_int_Variable_12;                              // 0x3B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A7F[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_11;                          // 0x3B8(0x18)(None)
	class FText                                  Temp_text_Variable_24;                             // 0x3D0(0x18)(None)
	class FText                                  Temp_text_Variable_25;                             // 0x3E8(0x18)(None)
	int32                                        Temp_int_Variable_13;                              // 0x400(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A80[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_12;                          // 0x408(0x18)(None)
	class FText                                  Temp_text_Variable_26;                             // 0x420(0x18)(None)
	class FText                                  Temp_text_Variable_27;                             // 0x438(0x18)(None)
	int32                                        Temp_int_Variable_14;                              // 0x450(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A82[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_13;                          // 0x458(0x18)(None)
	class FText                                  Temp_text_Variable_28;                             // 0x470(0x18)(None)
	class FText                                  Temp_text_Variable_29;                             // 0x488(0x18)(None)
	int32                                        Temp_int_Variable_15;                              // 0x4A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A83[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_14;                          // 0x4A8(0x18)(None)
	class FText                                  Temp_text_Variable_30;                             // 0x4C0(0x18)(None)
	class FText                                  Temp_text_Variable_31;                             // 0x4D8(0x18)(None)
	int32                                        Temp_int_Variable_16;                              // 0x4F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A85[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_15;                          // 0x4F8(0x18)(None)
	class FText                                  Temp_text_Variable_32;                             // 0x510(0x18)(None)
	class FText                                  Temp_text_Variable_33;                             // 0x528(0x18)(None)
	int32                                        Temp_int_Variable_17;                              // 0x540(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A87[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_16;                          // 0x548(0x18)(None)
	class FText                                  Temp_text_Variable_34;                             // 0x560(0x18)(None)
	class FText                                  Temp_text_Variable_35;                             // 0x578(0x18)(None)
	int32                                        Temp_int_Variable_18;                              // 0x590(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A88[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_17;                          // 0x598(0x18)(None)
	class FText                                  Temp_text_Variable_36;                             // 0x5B0(0x18)(None)
	class FText                                  Temp_text_Variable_37;                             // 0x5C8(0x18)(None)
	int32                                        Temp_int_Variable_19;                              // 0x5E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A8A[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_18;                          // 0x5E8(0x18)(None)
	class FText                                  Temp_text_Variable_38;                             // 0x600(0x18)(None)
	class FText                                  Temp_text_Variable_39;                             // 0x618(0x18)(None)
	int32                                        Temp_int_Variable_20;                              // 0x630(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A8C[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_19;                          // 0x638(0x18)(None)
	class FText                                  Temp_text_Variable_40;                             // 0x650(0x18)(None)
	class FText                                  Temp_text_Variable_41;                             // 0x668(0x18)(None)
	int32                                        Temp_int_Variable_21;                              // 0x680(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A8D[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_20;                          // 0x688(0x18)(None)
	class FText                                  Temp_text_Variable_42;                             // 0x6A0(0x18)(None)
	class FText                                  Temp_text_Variable_43;                             // 0x6B8(0x18)(None)
	int32                                        Temp_int_Variable_22;                              // 0x6D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A8E[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_21;                          // 0x6D8(0x18)(None)
	class FText                                  Temp_text_Variable_44;                             // 0x6F0(0x18)(None)
	class FText                                  Temp_text_Variable_45;                             // 0x708(0x18)(None)
	int32                                        Temp_int_Variable_23;                              // 0x720(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A91[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_22;                          // 0x728(0x18)(None)
	class FText                                  Temp_text_Variable_46;                             // 0x740(0x18)(None)
	class FText                                  Temp_text_Variable_47;                             // 0x758(0x18)(None)
	int32                                        Temp_int_Variable_24;                              // 0x770(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A92[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_23;                          // 0x778(0x18)(None)
	class FText                                  Temp_text_Variable_48;                             // 0x790(0x18)(None)
	class FText                                  Temp_text_Variable_49;                             // 0x7A8(0x18)(None)
	class FText                                  Temp_text_Variable_50;                             // 0x7C0(0x18)(None)
	class FText                                  K2Node_Select_Default_24;                          // 0x7D8(0x18)(None)
	class FText                                  Temp_text_Variable_51;                             // 0x7F0(0x18)(None)
	int32                                        Temp_int_Variable_25;                              // 0x808(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A93[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_25;                          // 0x810(0x18)(None)
};

// 0x9 (0x9 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HandleConfigChanged
struct UGamepadMappingInfo_v3_C_HandleConfigChanged_Params
{
public:
	enum class EFortInputActionGroup             Mode;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A9C[0x3];                                      // Fixing Size After Last Property 
	int32                                        Config;                                            // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1E58 (0x1E58 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HandleConfigChanged_Athena
struct UGamepadMappingInfo_v3_C_HandleConfigChanged_Athena_Params
{
public:
	enum class EFortInputActionGroup             Mode;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B77[0x3];                                      // Fixing Size After Last Property 
	int32                                        Config;                                            // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B79[0x7];                                      // Fixing Size After Last Property 
	class FText                                  Temp_text_Variable_1;                              // 0x28(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x40(0x18)(None)
	int32                                        Temp_int_Variable;                                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B7A[0x4];                                      // Fixing Size After Last Property 
	class FText                                  Temp_text_Variable_3;                              // 0x60(0x18)(None)
	class FText                                  Temp_text_Variable_4;                              // 0x78(0x18)(None)
	class FText                                  Temp_text_Variable_5;                              // 0x90(0x18)(None)
	class FText                                  Temp_text_Variable_6;                              // 0xA8(0x18)(None)
	class FText                                  Temp_text_Variable_7;                              // 0xC0(0x18)(None)
	int32                                        Temp_int_Variable_1;                               // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B7C[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default;                             // 0xE0(0x18)(None)
	class FText                                  Temp_text_Variable_8;                              // 0xF8(0x18)(None)
	class FText                                  Temp_text_Variable_9;                              // 0x110(0x18)(None)
	class FText                                  Temp_text_Variable_10;                             // 0x128(0x18)(None)
	class FText                                  Temp_text_Variable_11;                             // 0x140(0x18)(None)
	int32                                        Temp_int_Variable_2;                               // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B7F[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_1;                           // 0x160(0x18)(None)
	class FText                                  Temp_text_Variable_12;                             // 0x178(0x18)(None)
	class FText                                  Temp_text_Variable_13;                             // 0x190(0x18)(None)
	class FText                                  Temp_text_Variable_14;                             // 0x1A8(0x18)(None)
	class FText                                  Temp_text_Variable_15;                             // 0x1C0(0x18)(None)
	class FText                                  Temp_text_Variable_16;                             // 0x1D8(0x18)(None)
	int32                                        Temp_int_Variable_3;                               // 0x1F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B81[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_2;                           // 0x1F8(0x18)(None)
	class FText                                  Temp_text_Variable_17;                             // 0x210(0x18)(None)
	class FText                                  Temp_text_Variable_18;                             // 0x228(0x18)(None)
	class FText                                  Temp_text_Variable_19;                             // 0x240(0x18)(None)
	class FText                                  Temp_text_Variable_20;                             // 0x258(0x18)(None)
	class FText                                  Temp_text_Variable_21;                             // 0x270(0x18)(None)
	int32                                        Temp_int_Variable_4;                               // 0x288(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B82[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_3;                           // 0x290(0x18)(None)
	class FText                                  Temp_text_Variable_22;                             // 0x2A8(0x18)(None)
	class FText                                  Temp_text_Variable_23;                             // 0x2C0(0x18)(None)
	class FText                                  Temp_text_Variable_24;                             // 0x2D8(0x18)(None)
	class FText                                  Temp_text_Variable_25;                             // 0x2F0(0x18)(None)
	int32                                        Temp_int_Variable_5;                               // 0x308(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B83[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_4;                           // 0x310(0x18)(None)
	class FText                                  Temp_text_Variable_26;                             // 0x328(0x18)(None)
	class FText                                  Temp_text_Variable_27;                             // 0x340(0x18)(None)
	class FText                                  Temp_text_Variable_28;                             // 0x358(0x18)(None)
	class FText                                  Temp_text_Variable_29;                             // 0x370(0x18)(None)
	class FText                                  Temp_text_Variable_30;                             // 0x388(0x18)(None)
	int32                                        Temp_int_Variable_6;                               // 0x3A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B86[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_5;                           // 0x3A8(0x18)(None)
	class FText                                  Temp_text_Variable_31;                             // 0x3C0(0x18)(None)
	class FText                                  Temp_text_Variable_32;                             // 0x3D8(0x18)(None)
	class FText                                  Temp_text_Variable_33;                             // 0x3F0(0x18)(None)
	class FText                                  Temp_text_Variable_34;                             // 0x408(0x18)(None)
	class FText                                  Temp_text_Variable_35;                             // 0x420(0x18)(None)
	int32                                        Temp_int_Variable_7;                               // 0x438(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B88[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_6;                           // 0x440(0x18)(None)
	class FText                                  Temp_text_Variable_36;                             // 0x458(0x18)(None)
	class FText                                  Temp_text_Variable_37;                             // 0x470(0x18)(None)
	class FText                                  Temp_text_Variable_38;                             // 0x488(0x18)(None)
	class FText                                  Temp_text_Variable_39;                             // 0x4A0(0x18)(None)
	class FText                                  Temp_text_Variable_40;                             // 0x4B8(0x18)(None)
	int32                                        Temp_int_Variable_8;                               // 0x4D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B8B[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_7;                           // 0x4D8(0x18)(None)
	class FText                                  Temp_text_Variable_41;                             // 0x4F0(0x18)(None)
	class FText                                  Temp_text_Variable_42;                             // 0x508(0x18)(None)
	class FText                                  Temp_text_Variable_43;                             // 0x520(0x18)(None)
	class FText                                  Temp_text_Variable_44;                             // 0x538(0x18)(None)
	class FText                                  Temp_text_Variable_45;                             // 0x550(0x18)(None)
	int32                                        Temp_int_Variable_9;                               // 0x568(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B8D[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_8;                           // 0x570(0x18)(None)
	class FText                                  Temp_text_Variable_46;                             // 0x588(0x18)(None)
	class FText                                  Temp_text_Variable_47;                             // 0x5A0(0x18)(None)
	class FText                                  Temp_text_Variable_48;                             // 0x5B8(0x18)(None)
	class FText                                  Temp_text_Variable_49;                             // 0x5D0(0x18)(None)
	class FText                                  Temp_text_Variable_50;                             // 0x5E8(0x18)(None)
	int32                                        Temp_int_Variable_10;                              // 0x600(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B8F[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_9;                           // 0x608(0x18)(None)
	class FText                                  Temp_text_Variable_51;                             // 0x620(0x18)(None)
	class FText                                  Temp_text_Variable_52;                             // 0x638(0x18)(None)
	class FText                                  Temp_text_Variable_53;                             // 0x650(0x18)(None)
	class FText                                  Temp_text_Variable_54;                             // 0x668(0x18)(None)
	class FText                                  Temp_text_Variable_55;                             // 0x680(0x18)(None)
	int32                                        Temp_int_Variable_11;                              // 0x698(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B94[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_10;                          // 0x6A0(0x18)(None)
	class FText                                  Temp_text_Variable_56;                             // 0x6B8(0x18)(None)
	class FText                                  Temp_text_Variable_57;                             // 0x6D0(0x18)(None)
	class FText                                  Temp_text_Variable_58;                             // 0x6E8(0x18)(None)
	class FText                                  Temp_text_Variable_59;                             // 0x700(0x18)(None)
	class FText                                  Temp_text_Variable_60;                             // 0x718(0x18)(None)
	int32                                        Temp_int_Variable_12;                              // 0x730(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B95[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_11;                          // 0x738(0x18)(None)
	class FText                                  Temp_text_Variable_61;                             // 0x750(0x18)(None)
	class FText                                  Temp_text_Variable_62;                             // 0x768(0x18)(None)
	class FText                                  Temp_text_Variable_63;                             // 0x780(0x18)(None)
	class FText                                  Temp_text_Variable_64;                             // 0x798(0x18)(None)
	class FText                                  Temp_text_Variable_65;                             // 0x7B0(0x18)(None)
	int32                                        Temp_int_Variable_13;                              // 0x7C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B97[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_12;                          // 0x7D0(0x18)(None)
	class FText                                  Temp_text_Variable_66;                             // 0x7E8(0x18)(None)
	class FText                                  Temp_text_Variable_67;                             // 0x800(0x18)(None)
	class FText                                  Temp_text_Variable_68;                             // 0x818(0x18)(None)
	class FText                                  Temp_text_Variable_69;                             // 0x830(0x18)(None)
	class FText                                  Temp_text_Variable_70;                             // 0x848(0x18)(None)
	int32                                        Temp_int_Variable_14;                              // 0x860(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B98[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_13;                          // 0x868(0x18)(None)
	class FText                                  Temp_text_Variable_71;                             // 0x880(0x18)(None)
	class FText                                  Temp_text_Variable_72;                             // 0x898(0x18)(None)
	class FText                                  Temp_text_Variable_73;                             // 0x8B0(0x18)(None)
	class FText                                  Temp_text_Variable_74;                             // 0x8C8(0x18)(None)
	class FText                                  Temp_text_Variable_75;                             // 0x8E0(0x18)(None)
	int32                                        Temp_int_Variable_15;                              // 0x8F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B9A[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_14;                          // 0x900(0x18)(None)
	class FText                                  Temp_text_Variable_76;                             // 0x918(0x18)(None)
	class FText                                  Temp_text_Variable_77;                             // 0x930(0x18)(None)
	class FText                                  Temp_text_Variable_78;                             // 0x948(0x18)(None)
	class FText                                  Temp_text_Variable_79;                             // 0x960(0x18)(None)
	class FText                                  Temp_text_Variable_80;                             // 0x978(0x18)(None)
	int32                                        Temp_int_Variable_16;                              // 0x990(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B9D[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_15;                          // 0x998(0x18)(None)
	class FText                                  Temp_text_Variable_81;                             // 0x9B0(0x18)(None)
	class FText                                  Temp_text_Variable_82;                             // 0x9C8(0x18)(None)
	class FText                                  Temp_text_Variable_83;                             // 0x9E0(0x18)(None)
	class FText                                  Temp_text_Variable_84;                             // 0x9F8(0x18)(None)
	class FText                                  Temp_text_Variable_85;                             // 0xA10(0x18)(None)
	int32                                        Temp_int_Variable_17;                              // 0xA28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BA0[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_16;                          // 0xA30(0x18)(None)
	class FText                                  Temp_text_Variable_86;                             // 0xA48(0x18)(None)
	class FText                                  Temp_text_Variable_87;                             // 0xA60(0x18)(None)
	class FText                                  Temp_text_Variable_88;                             // 0xA78(0x18)(None)
	class FText                                  Temp_text_Variable_89;                             // 0xA90(0x18)(None)
	class FText                                  Temp_text_Variable_90;                             // 0xAA8(0x18)(None)
	int32                                        Temp_int_Variable_18;                              // 0xAC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BA2[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_17;                          // 0xAC8(0x18)(None)
	class FText                                  Temp_text_Variable_91;                             // 0xAE0(0x18)(None)
	class FText                                  Temp_text_Variable_92;                             // 0xAF8(0x18)(None)
	class FText                                  Temp_text_Variable_93;                             // 0xB10(0x18)(None)
	class FText                                  Temp_text_Variable_94;                             // 0xB28(0x18)(None)
	class FText                                  Temp_text_Variable_95;                             // 0xB40(0x18)(None)
	int32                                        Temp_int_Variable_19;                              // 0xB58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BA5[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_18;                          // 0xB60(0x18)(None)
	class FText                                  Temp_text_Variable_96;                             // 0xB78(0x18)(None)
	class FText                                  Temp_text_Variable_97;                             // 0xB90(0x18)(None)
	class FText                                  Temp_text_Variable_98;                             // 0xBA8(0x18)(None)
	class FText                                  Temp_text_Variable_99;                             // 0xBC0(0x18)(None)
	class FText                                  Temp_text_Variable_100;                            // 0xBD8(0x18)(None)
	int32                                        Temp_int_Variable_20;                              // 0xBF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BA8[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_19;                          // 0xBF8(0x18)(None)
	class FText                                  Temp_text_Variable_101;                            // 0xC10(0x18)(None)
	class FText                                  Temp_text_Variable_102;                            // 0xC28(0x18)(None)
	class FText                                  Temp_text_Variable_103;                            // 0xC40(0x18)(None)
	class FText                                  Temp_text_Variable_104;                            // 0xC58(0x18)(None)
	class FText                                  Temp_text_Variable_105;                            // 0xC70(0x18)(None)
	int32                                        Temp_int_Variable_21;                              // 0xC88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BAB[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_20;                          // 0xC90(0x18)(None)
	class FText                                  Temp_text_Variable_106;                            // 0xCA8(0x18)(None)
	class FText                                  Temp_text_Variable_107;                            // 0xCC0(0x18)(None)
	class FText                                  Temp_text_Variable_108;                            // 0xCD8(0x18)(None)
	class FText                                  Temp_text_Variable_109;                            // 0xCF0(0x18)(None)
	class FText                                  Temp_text_Variable_110;                            // 0xD08(0x18)(None)
	int32                                        Temp_int_Variable_22;                              // 0xD20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BAE[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_21;                          // 0xD28(0x18)(None)
	class FText                                  Temp_text_Variable_111;                            // 0xD40(0x18)(None)
	class FText                                  Temp_text_Variable_112;                            // 0xD58(0x18)(None)
	class FText                                  Temp_text_Variable_113;                            // 0xD70(0x18)(None)
	class FText                                  Temp_text_Variable_114;                            // 0xD88(0x18)(None)
	class FText                                  Temp_text_Variable_115;                            // 0xDA0(0x18)(None)
	int32                                        Temp_int_Variable_23;                              // 0xDB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BB2[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_22;                          // 0xDC0(0x18)(None)
	class FText                                  Temp_text_Variable_116;                            // 0xDD8(0x18)(None)
	class FText                                  Temp_text_Variable_117;                            // 0xDF0(0x18)(None)
	class FText                                  Temp_text_Variable_118;                            // 0xE08(0x18)(None)
	class FText                                  Temp_text_Variable_119;                            // 0xE20(0x18)(None)
	class FText                                  Temp_text_Variable_120;                            // 0xE38(0x18)(None)
	int32                                        Temp_int_Variable_24;                              // 0xE50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BB3[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_23;                          // 0xE58(0x18)(None)
	class FText                                  Temp_text_Variable_121;                            // 0xE70(0x18)(None)
	class FText                                  Temp_text_Variable_122;                            // 0xE88(0x18)(None)
	class FText                                  Temp_text_Variable_123;                            // 0xEA0(0x18)(None)
	class FText                                  Temp_text_Variable_124;                            // 0xEB8(0x18)(None)
	class FText                                  Temp_text_Variable_125;                            // 0xED0(0x18)(None)
	int32                                        Temp_int_Variable_25;                              // 0xEE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BB4[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_24;                          // 0xEF0(0x18)(None)
	class FText                                  Temp_text_Variable_126;                            // 0xF08(0x18)(None)
	class FText                                  Temp_text_Variable_127;                            // 0xF20(0x18)(None)
	class FText                                  Temp_text_Variable_128;                            // 0xF38(0x18)(None)
	class FText                                  Temp_text_Variable_129;                            // 0xF50(0x18)(None)
	class FText                                  Temp_text_Variable_130;                            // 0xF68(0x18)(None)
	int32                                        Temp_int_Variable_26;                              // 0xF80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BB5[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_25;                          // 0xF88(0x18)(None)
	class FText                                  Temp_text_Variable_131;                            // 0xFA0(0x18)(None)
	class FText                                  Temp_text_Variable_132;                            // 0xFB8(0x18)(None)
	class FText                                  Temp_text_Variable_133;                            // 0xFD0(0x18)(None)
	class FText                                  Temp_text_Variable_134;                            // 0xFE8(0x18)(None)
	class FText                                  Temp_text_Variable_135;                            // 0x1000(0x18)(None)
	int32                                        Temp_int_Variable_27;                              // 0x1018(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BB7[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_26;                          // 0x1020(0x18)(None)
	class FText                                  Temp_text_Variable_136;                            // 0x1038(0x18)(None)
	class FText                                  Temp_text_Variable_137;                            // 0x1050(0x18)(None)
	class FText                                  Temp_text_Variable_138;                            // 0x1068(0x18)(None)
	class FText                                  Temp_text_Variable_139;                            // 0x1080(0x18)(None)
	class FText                                  Temp_text_Variable_140;                            // 0x1098(0x18)(None)
	int32                                        Temp_int_Variable_28;                              // 0x10B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BB8[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_27;                          // 0x10B8(0x18)(None)
	class FText                                  Temp_text_Variable_141;                            // 0x10D0(0x18)(None)
	class FText                                  Temp_text_Variable_142;                            // 0x10E8(0x18)(None)
	class FText                                  Temp_text_Variable_143;                            // 0x1100(0x18)(None)
	class FText                                  Temp_text_Variable_144;                            // 0x1118(0x18)(None)
	class FText                                  Temp_text_Variable_145;                            // 0x1130(0x18)(None)
	int32                                        Temp_int_Variable_29;                              // 0x1148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BBB[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_28;                          // 0x1150(0x18)(None)
	class FText                                  Temp_text_Variable_146;                            // 0x1168(0x18)(None)
	class FText                                  Temp_text_Variable_147;                            // 0x1180(0x18)(None)
	class FText                                  Temp_text_Variable_148;                            // 0x1198(0x18)(None)
	class FText                                  Temp_text_Variable_149;                            // 0x11B0(0x18)(None)
	class FText                                  Temp_text_Variable_150;                            // 0x11C8(0x18)(None)
	int32                                        Temp_int_Variable_30;                              // 0x11E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BBC[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_29;                          // 0x11E8(0x18)(None)
	class FText                                  Temp_text_Variable_151;                            // 0x1200(0x18)(None)
	class FText                                  Temp_text_Variable_152;                            // 0x1218(0x18)(None)
	class FText                                  Temp_text_Variable_153;                            // 0x1230(0x18)(None)
	class FText                                  Temp_text_Variable_154;                            // 0x1248(0x18)(None)
	class FText                                  Temp_text_Variable_155;                            // 0x1260(0x18)(None)
	int32                                        Temp_int_Variable_31;                              // 0x1278(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BBE[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_30;                          // 0x1280(0x18)(None)
	class FText                                  Temp_text_Variable_156;                            // 0x1298(0x18)(None)
	class FText                                  Temp_text_Variable_157;                            // 0x12B0(0x18)(None)
	class FText                                  Temp_text_Variable_158;                            // 0x12C8(0x18)(None)
	class FText                                  Temp_text_Variable_159;                            // 0x12E0(0x18)(None)
	class FText                                  Temp_text_Variable_160;                            // 0x12F8(0x18)(None)
	int32                                        Temp_int_Variable_32;                              // 0x1310(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BBF[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_31;                          // 0x1318(0x18)(None)
	class FText                                  Temp_text_Variable_161;                            // 0x1330(0x18)(None)
	class FText                                  Temp_text_Variable_162;                            // 0x1348(0x18)(None)
	class FText                                  Temp_text_Variable_163;                            // 0x1360(0x18)(None)
	class FText                                  Temp_text_Variable_164;                            // 0x1378(0x18)(None)
	class FText                                  Temp_text_Variable_165;                            // 0x1390(0x18)(None)
	int32                                        Temp_int_Variable_33;                              // 0x13A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BC0[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_32;                          // 0x13B0(0x18)(None)
	class FText                                  Temp_text_Variable_166;                            // 0x13C8(0x18)(None)
	class FText                                  Temp_text_Variable_167;                            // 0x13E0(0x18)(None)
	class FText                                  Temp_text_Variable_168;                            // 0x13F8(0x18)(None)
	class FText                                  Temp_text_Variable_169;                            // 0x1410(0x18)(None)
	class FText                                  Temp_text_Variable_170;                            // 0x1428(0x18)(None)
	int32                                        Temp_int_Variable_34;                              // 0x1440(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BC1[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_33;                          // 0x1448(0x18)(None)
	class FText                                  Temp_text_Variable_171;                            // 0x1460(0x18)(None)
	class FText                                  Temp_text_Variable_172;                            // 0x1478(0x18)(None)
	class FText                                  Temp_text_Variable_173;                            // 0x1490(0x18)(None)
	class FText                                  Temp_text_Variable_174;                            // 0x14A8(0x18)(None)
	class FText                                  Temp_text_Variable_175;                            // 0x14C0(0x18)(None)
	int32                                        Temp_int_Variable_35;                              // 0x14D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BC3[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_34;                          // 0x14E0(0x18)(None)
	class FText                                  Temp_text_Variable_176;                            // 0x14F8(0x18)(None)
	class FText                                  Temp_text_Variable_177;                            // 0x1510(0x18)(None)
	class FText                                  Temp_text_Variable_178;                            // 0x1528(0x18)(None)
	class FText                                  Temp_text_Variable_179;                            // 0x1540(0x18)(None)
	class FText                                  Temp_text_Variable_180;                            // 0x1558(0x18)(None)
	int32                                        Temp_int_Variable_36;                              // 0x1570(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BC4[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_35;                          // 0x1578(0x18)(None)
	class FText                                  Temp_text_Variable_181;                            // 0x1590(0x18)(None)
	class FText                                  Temp_text_Variable_182;                            // 0x15A8(0x18)(None)
	class FText                                  Temp_text_Variable_183;                            // 0x15C0(0x18)(None)
	class FText                                  Temp_text_Variable_184;                            // 0x15D8(0x18)(None)
	class FText                                  Temp_text_Variable_185;                            // 0x15F0(0x18)(None)
	int32                                        Temp_int_Variable_37;                              // 0x1608(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BC5[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_36;                          // 0x1610(0x18)(None)
	class FText                                  Temp_text_Variable_186;                            // 0x1628(0x18)(None)
	class FText                                  Temp_text_Variable_187;                            // 0x1640(0x18)(None)
	class FText                                  Temp_text_Variable_188;                            // 0x1658(0x18)(None)
	class FText                                  Temp_text_Variable_189;                            // 0x1670(0x18)(None)
	class FText                                  Temp_text_Variable_190;                            // 0x1688(0x18)(None)
	int32                                        Temp_int_Variable_38;                              // 0x16A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BC7[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_37;                          // 0x16A8(0x18)(None)
	class FText                                  Temp_text_Variable_191;                            // 0x16C0(0x18)(None)
	class FText                                  Temp_text_Variable_192;                            // 0x16D8(0x18)(None)
	class FText                                  Temp_text_Variable_193;                            // 0x16F0(0x18)(None)
	class FText                                  Temp_text_Variable_194;                            // 0x1708(0x18)(None)
	class FText                                  Temp_text_Variable_195;                            // 0x1720(0x18)(None)
	int32                                        Temp_int_Variable_39;                              // 0x1738(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BCA[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_38;                          // 0x1740(0x18)(None)
	class FText                                  Temp_text_Variable_196;                            // 0x1758(0x18)(None)
	class FText                                  Temp_text_Variable_197;                            // 0x1770(0x18)(None)
	class FText                                  Temp_text_Variable_198;                            // 0x1788(0x18)(None)
	class FText                                  Temp_text_Variable_199;                            // 0x17A0(0x18)(None)
	class FText                                  Temp_text_Variable_200;                            // 0x17B8(0x18)(None)
	int32                                        Temp_int_Variable_40;                              // 0x17D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BCD[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_39;                          // 0x17D8(0x18)(None)
	class FText                                  Temp_text_Variable_201;                            // 0x17F0(0x18)(None)
	class FText                                  Temp_text_Variable_202;                            // 0x1808(0x18)(None)
	class FText                                  Temp_text_Variable_203;                            // 0x1820(0x18)(None)
	class FText                                  Temp_text_Variable_204;                            // 0x1838(0x18)(None)
	class FText                                  Temp_text_Variable_205;                            // 0x1850(0x18)(None)
	int32                                        Temp_int_Variable_41;                              // 0x1868(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BCF[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_40;                          // 0x1870(0x18)(None)
	class FText                                  Temp_text_Variable_206;                            // 0x1888(0x18)(None)
	class FText                                  Temp_text_Variable_207;                            // 0x18A0(0x18)(None)
	class FText                                  Temp_text_Variable_208;                            // 0x18B8(0x18)(None)
	class FText                                  Temp_text_Variable_209;                            // 0x18D0(0x18)(None)
	class FText                                  Temp_text_Variable_210;                            // 0x18E8(0x18)(None)
	int32                                        Temp_int_Variable_42;                              // 0x1900(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BD0[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_41;                          // 0x1908(0x18)(None)
	class FText                                  Temp_text_Variable_211;                            // 0x1920(0x18)(None)
	class FText                                  Temp_text_Variable_212;                            // 0x1938(0x18)(None)
	class FText                                  Temp_text_Variable_213;                            // 0x1950(0x18)(None)
	class FText                                  Temp_text_Variable_214;                            // 0x1968(0x18)(None)
	class FText                                  Temp_text_Variable_215;                            // 0x1980(0x18)(None)
	int32                                        Temp_int_Variable_43;                              // 0x1998(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BD2[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_42;                          // 0x19A0(0x18)(None)
	class FText                                  Temp_text_Variable_216;                            // 0x19B8(0x18)(None)
	class FText                                  Temp_text_Variable_217;                            // 0x19D0(0x18)(None)
	class FText                                  Temp_text_Variable_218;                            // 0x19E8(0x18)(None)
	class FText                                  Temp_text_Variable_219;                            // 0x1A00(0x18)(None)
	class FText                                  Temp_text_Variable_220;                            // 0x1A18(0x18)(None)
	int32                                        Temp_int_Variable_44;                              // 0x1A30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BD3[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_43;                          // 0x1A38(0x18)(None)
	class FText                                  Temp_text_Variable_221;                            // 0x1A50(0x18)(None)
	class FText                                  Temp_text_Variable_222;                            // 0x1A68(0x18)(None)
	class FText                                  Temp_text_Variable_223;                            // 0x1A80(0x18)(None)
	class FText                                  Temp_text_Variable_224;                            // 0x1A98(0x18)(None)
	class FText                                  Temp_text_Variable_225;                            // 0x1AB0(0x18)(None)
	int32                                        Temp_int_Variable_45;                              // 0x1AC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BD5[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_44;                          // 0x1AD0(0x18)(None)
	class FText                                  Temp_text_Variable_226;                            // 0x1AE8(0x18)(None)
	class FText                                  Temp_text_Variable_227;                            // 0x1B00(0x18)(None)
	class FText                                  Temp_text_Variable_228;                            // 0x1B18(0x18)(None)
	class FText                                  Temp_text_Variable_229;                            // 0x1B30(0x18)(None)
	class FText                                  Temp_text_Variable_230;                            // 0x1B48(0x18)(None)
	int32                                        Temp_int_Variable_46;                              // 0x1B60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BD7[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_45;                          // 0x1B68(0x18)(None)
	class FText                                  Temp_text_Variable_231;                            // 0x1B80(0x18)(None)
	class FText                                  Temp_text_Variable_232;                            // 0x1B98(0x18)(None)
	class FText                                  Temp_text_Variable_233;                            // 0x1BB0(0x18)(None)
	class FText                                  Temp_text_Variable_234;                            // 0x1BC8(0x18)(None)
	class FText                                  Temp_text_Variable_235;                            // 0x1BE0(0x18)(None)
	int32                                        Temp_int_Variable_47;                              // 0x1BF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BDB[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_46;                          // 0x1C00(0x18)(None)
	class FText                                  Temp_text_Variable_236;                            // 0x1C18(0x18)(None)
	class FText                                  Temp_text_Variable_237;                            // 0x1C30(0x18)(None)
	class FText                                  Temp_text_Variable_238;                            // 0x1C48(0x18)(None)
	class FText                                  Temp_text_Variable_239;                            // 0x1C60(0x18)(None)
	class FText                                  Temp_text_Variable_240;                            // 0x1C78(0x18)(None)
	int32                                        Temp_int_Variable_48;                              // 0x1C90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BDE[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_47;                          // 0x1C98(0x18)(None)
	class FText                                  Temp_text_Variable_241;                            // 0x1CB0(0x18)(None)
	class FText                                  Temp_text_Variable_242;                            // 0x1CC8(0x18)(None)
	class FText                                  Temp_text_Variable_243;                            // 0x1CE0(0x18)(None)
	class FText                                  Temp_text_Variable_244;                            // 0x1CF8(0x18)(None)
	class FText                                  Temp_text_Variable_245;                            // 0x1D10(0x18)(None)
	int32                                        Temp_int_Variable_49;                              // 0x1D28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BE0[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_48;                          // 0x1D30(0x18)(None)
	class FText                                  Temp_text_Variable_246;                            // 0x1D48(0x18)(None)
	class FText                                  Temp_text_Variable_247;                            // 0x1D60(0x18)(None)
	class FText                                  Temp_text_Variable_248;                            // 0x1D78(0x18)(None)
	class FText                                  Temp_text_Variable_249;                            // 0x1D90(0x18)(None)
	class FText                                  Temp_text_Variable_250;                            // 0x1DA8(0x18)(None)
	class FText                                  K2Node_Select_Default_49;                          // 0x1DC0(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x1DD8(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x1DF0(0x18)(None)
	class FText                                  Temp_text_Variable_251;                            // 0x1E08(0x18)(None)
	class FText                                  Temp_text_Variable_252;                            // 0x1E20(0x18)(None)
	int32                                        Temp_int_Variable_50;                              // 0x1E38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BE2[0x4];                                      // Fixing Size After Last Property 
	class FText                                  K2Node_Select_Default_50;                          // 0x1E40(0x18)(None)
};

// 0x21 (0x21 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.OnConfigChanged
struct UGamepadMappingInfo_v3_C_OnConfigChanged_Params
{
public:
	enum class EFortInputActionGroup             Mode;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C1C[0x3];                                      // Fixing Size After Last Property 
	int32                                        Config;                                            // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C1E[0x6];                                      // Fixing Size After Last Property 
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue_1;                 // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCustomGamepadConfig_ReturnValue;        // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Update Displayed Mapping
struct UGamepadMappingInfo_v3_C_Update_Displayed_Mapping_Params
{
public:
	int32                                        Platform;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortInputActionGroup             Mode;                                              // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C3A[0x3];                                      // Fixing Size After Last Property 
	int32                                        Configuration;                                     // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0xF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_6;                              // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_7;                              // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_8;                              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C3E[0x3];                                      // Fixing Size After Last Property 
	int32                                        Temp_int_Variable_1;                               // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_9;                              // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_10;                             // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_11;                             // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_12;                             // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_13;                             // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_14;                             // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x26(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x27(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_2;                               // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_3;                               // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class UTexture2D>>     K2Node_Select_Default_2;                           // 0x30(0x10)(ReferenceParm)
	enum class ESlateVisibility                  K2Node_Select_Default_3;                           // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.OnLoaded_CDBC1B27496027B96D10BC9A64224F3D
struct UGamepadMappingInfo_v3_C_OnLoaded_CDBC1B27496027B96D10BC9A64224F3D_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Construct
struct UGamepadMappingInfo_v3_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Update Controller Images
struct UGamepadMappingInfo_v3_C_Update_Controller_Images_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.OnButtonClicked_Bind
struct UGamepadMappingInfo_v3_C_OnButtonClicked_Bind_Params
{
public:
	class UCommonButtonLegacy*                   Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.UpdateCustomButtons
struct UGamepadMappingInfo_v3_C_UpdateCustomButtons_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DeadZoneTabSelected
struct UGamepadMappingInfo_v3_C_DeadZoneTabSelected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DeadZoneTabDeselected
struct UGamepadMappingInfo_v3_C_DeadZoneTabDeselected_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DeadzoneMoveResetButtonClicked_Bind
struct UGamepadMappingInfo_v3_C_DeadzoneMoveResetButtonClicked_Bind_Params
{
public:
	class UCommonButtonLegacy*                   Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DeadzoneLookResetButtonClicked_Bind
struct UGamepadMappingInfo_v3_C_DeadzoneLookResetButtonClicked_Bind_Params
{
public:
	class UCommonButtonLegacy*                   Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x185 (0x185 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ExecuteUbergraph_GamepadMappingInfo_v3
struct UGamepadMappingInfo_v3_C_ExecuteUbergraph_GamepadMappingInfo_v3_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C95[0x4];                                      // Fixing Size After Last Property 
	class UObject*                               Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C96[0x6];                                      // Fixing Size After Last Property 
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetControllerImage_Texture;               // 0x20(0x20)(HasGetValueTypeHash)
	bool                                         CallFunc_IsAssetNull_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C97[0x3];                                      // Fixing Size After Last Property 
	int32                                        Temp_int_Array_Index_Variable;                     // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonLegacy*                   K2Node_CustomEvent_Button_2;                       // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x50(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C98[0x4];                                      // Fixing Size After Last Property 
	class UGamepadKeyTextButton_C*               K2Node_DynamicCast_AsGamepad_Key_Text_Button;      // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C99[0x3];                                      // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x6C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C9A[0x4];                                      // Fixing Size After Last Property 
	TArray<class UGamepadKeyTextButton_C*>       K2Node_MakeArray_Array;                            // 0x80(0x10)(ReferenceParm, ContainsInstancedReference)
	class FName                                  CallFunc_GetTabIdAtIndex_ReturnValue;              // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetTabIdAtIndex_ReturnValue_1;            // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetTabIdAtIndex_ReturnValue_2;            // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetTabIdAtIndex_ReturnValue_3;            // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetTabIdAtIndex_ReturnValue_4;            // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetTabCount_ReturnValue;                  // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C9F[0x3];                                      // Fixing Size After Last Property 
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CA0[0x4];                                      // Fixing Size After Last Property 
	class UGamepadKeyTextButton_C*               CallFunc_Array_Get_Item;                           // 0xB8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetCustomButtonDataForKey_ActionName;     // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CA1[0x4];                                      // Fixing Size After Last Property 
	class FText                                  CallFunc_GetCustomButtonDataForKey_DescText;       // 0xC8(0x18)(None)
	class FName                                  CallFunc_GetCustomButtonDataForKey_ActionName_1;   // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CA4[0x4];                                      // Fixing Size After Last Property 
	class FText                                  CallFunc_GetCustomButtonDataForKey_DescText_1;     // 0xE8(0x18)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CA5[0x3];                                      // Fixing Size After Last Property 
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x108(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonLegacy*                   K2Node_CustomEvent_Button_1;                       // 0x110(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonLegacy*                   K2Node_CustomEvent_Button;                         // 0x118(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x120(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x12C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSettingsContext*                  CallFunc_GetContext_ReturnValue;                   // 0x140(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValue_ReturnValue;                     // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CA9[0x4];                                      // Fixing Size After Last Property 
	class UFortSettingsContext*                  CallFunc_GetContext_ReturnValue_1;                 // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValue_ReturnValue_1;                   // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetCustomButtonDataForKey_ActionName_2;   // 0x15C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCustomButtonDataForKey_DescText_2;     // 0x160(0x18)(None)
	class UGamepadKeyTextButton_C*               CallFunc_Array_Get_Item_1;                         // 0x178(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x184(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.CustomButtonNavLeft__DelegateSignature
struct UGamepadMappingInfo_v3_C_CustomButtonNavLeft__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Image_LightboxClicked__DelegateSignature
struct UGamepadMappingInfo_v3_C_Image_LightboxClicked__DelegateSignature_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.CustomKeySelected__DelegateSignature
struct UGamepadMappingInfo_v3_C_CustomKeySelected__DelegateSignature_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

}
}


