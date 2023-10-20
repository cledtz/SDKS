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

// 0x8 (0x8 - 0x0)
// Function UI_Game_Hotkeys.UI_Game_Hotkeys_C.OnSetCurrentGun_Event
struct UUI_Game_Hotkeys_C_OnSetCurrentGun_Event_Params
{
public:
	class UItem_Gun_General*                     OldCurrentGun;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Game_Hotkeys.UI_Game_Hotkeys_C.Construct
struct UUI_Game_Hotkeys_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Game_Hotkeys.UI_Game_Hotkeys_C.OnSetGunModules_Event
struct UUI_Game_Hotkeys_C_OnSetGunModules_Event_Params
{
public:
};

// 0x98 (0x98 - 0x0)
// Function UI_Game_Hotkeys.UI_Game_Hotkeys_C.ExecuteUbergraph_UI_Game_Hotkeys
struct UUI_Game_Hotkeys_C_ExecuteUbergraph_UI_Game_Hotkeys_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CE4[0x3];                                     // Fixing Size After Last Property 
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CE6[0x1];                                     // Fixing Size After Last Property 
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UItem_Gun_General*                     K2Node_CustomEvent_OldCurrentGun;                  // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPG_PlayerState_Game*                  K2Node_DynamicCast_AsPG_Player_State_Game;         // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CE7[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x44(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CE8[0x4];                                     // Fixing Size After Last Property 
	class UItem_Module_General*                  CallFunc_Array_Get_Item;                           // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CEA[0x4];                                     // Fixing Size After Last Property 
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x73(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable;                                // 0x74(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CEB[0x4];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_Game_Hotkey_Entry_C*               CallFunc_Create_ReturnValue;                       // 0x88(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x90(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


