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
// Function Task_Menu_GeneralMenuScreen_SetActivePage.Task_Menu_GeneralMenuScreen_SetActivePage_C.ReceiveActivate
struct UTask_Menu_GeneralMenuScreen_SetActivePage_C_ReceiveActivate_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Task_Menu_GeneralMenuScreen_SetActivePage.Task_Menu_GeneralMenuScreen_SetActivePage_C.OnDark_Event
struct UTask_Menu_GeneralMenuScreen_SetActivePage_C_OnDark_Event_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Task_Menu_GeneralMenuScreen_SetActivePage.Task_Menu_GeneralMenuScreen_SetActivePage_C.SwitchPage
struct UTask_Menu_GeneralMenuScreen_SetActivePage_C_SwitchPage_Params
{
public:
};

// 0x109 (0x109 - 0x0)
// Function Task_Menu_GeneralMenuScreen_SetActivePage.Task_Menu_GeneralMenuScreen_SetActivePage_C.ExecuteUbergraph_Task_Menu_GeneralMenuScreen_SetActivePage
struct UTask_Menu_GeneralMenuScreen_SetActivePage_C_ExecuteUbergraph_Task_Menu_GeneralMenuScreen_SetActivePage_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A6[0x4];                                      // Fixing Size After Last Property 
	class UTask_Menu_CameraTransition_C*         CallFunc_CreateAction_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A7[0x3];                                      // Fixing Size After Last Property 
	class FName                                  Temp_name_Variable;                                // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_1;                              // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A8[0x4];                                      // Fixing Size After Last Property 
	class UTask_Menu_CameraTransition_C*         CallFunc_CreateAction_ReturnValue_1;               // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x30(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_2;                              // 0x40(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_3;                              // 0x48(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AF[0x3];                                      // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B0[0x7];                                      // Fixing Size After Last Property 
	class UUI_CameraTransitions_DarkenScreen_C*  CallFunc_Create_ReturnValue;                       // 0x70(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B1[0x3];                                      // Fixing Size After Last Property 
	class FName                                  Temp_name_Variable_4;                              // 0x7C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Select_Default;                             // 0x84(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B3[0x4];                                      // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu; // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B5[0x7];                                      // Fixing Size After Last Property 
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_1; // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B6[0x7];                                      // Fixing Size After Last Property 
	class UActor*                                CallFunc_GetViewTarget_ReturnValue;                // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UUI_Menu_Solder_Gear_Watch_Selector_C*> CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0xC8(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B7[0x7];                                      // Fixing Size After Last Property 
	class UUI_Menu_Solder_Gear_Watch_Selector_C* CallFunc_Array_Get_Item;                           // 0xE0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue_1;             // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xED(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B9[0x2];                                      // Fixing Size After Last Property 
	class FName                                  Temp_name_Variable_5;                              // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Select_Default_1;                           // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x100(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Task_Menu_GeneralMenuScreen_SetActivePage.Task_Menu_GeneralMenuScreen_SetActivePage_C.OnSucceed__DelegateSignature
struct UTask_Menu_GeneralMenuScreen_SetActivePage_C_OnSucceed__DelegateSignature_Params
{
public:
};

}
}


