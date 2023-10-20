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
// Function UI_Game_Hotkey_Entry.UI_Game_Hotkey_Entry_C.PreConstruct
struct UUI_Game_Hotkey_Entry_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Game_Hotkey_Entry.UI_Game_Hotkey_Entry_C.Construct
struct UUI_Game_Hotkey_Entry_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function UI_Game_Hotkey_Entry.UI_Game_Hotkey_Entry_C.OnMappingsChanged_Event
struct UUI_Game_Hotkey_Entry_C_OnMappingsChanged_Event_Params
{
public:
	class UPlayerController*                     Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Game_Hotkey_Entry.UI_Game_Hotkey_Entry_C.OnSetCurrentGun_Event
struct UUI_Game_Hotkey_Entry_C_OnSetCurrentGun_Event_Params
{
public:
	class UItem_Gun_General*                     OldCurrentGun;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Game_Hotkey_Entry.UI_Game_Hotkey_Entry_C.OnSetGunModules_Event
struct UUI_Game_Hotkey_Entry_C_OnSetGunModules_Event_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Game_Hotkey_Entry.UI_Game_Hotkey_Entry_C.OnEnable_Event
struct UUI_Game_Hotkey_Entry_C_OnEnable_Event_Params
{
public:
};

// 0x10C (0x10C - 0x0)
// Function UI_Game_Hotkey_Entry.UI_Game_Hotkey_Entry_C.ExecuteUbergraph_UI_Game_Hotkey_Entry
struct UUI_Game_Hotkey_Entry_C_ExecuteUbergraph_UI_Game_Hotkey_Entry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B45[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputMappingManager*                  CallFunc_GetEngineSubsystem_ReturnValue;           // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B49[0x3];                                     // Fixing Size After Last Property 
	int32                                        Temp_int_Array_Index_Variable;                     // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B52[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x34(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B55[0x3];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     K2Node_CustomEvent_Player;                         // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInputActionKeyMapping                CallFunc_GetPlayerActionMappingStatic_ReturnValue; // 0x58(0x28)(None)
	class FText                                  CallFunc_Key_GetDisplayName_ReturnValue;           // 0x80(0x18)(None)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B58[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x9C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B59[0x4];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UItem_Gun_General*                     K2Node_CustomEvent_OldCurrentGun;                  // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPG_PlayerState_Game*                  K2Node_DynamicCast_AsPG_Player_State_Game;         // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xCA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B5A[0x5];                                     // Fixing Size After Last Property 
	class UItem_Module_General*                  CallFunc_Array_Get_Item;                           // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B5D[0x4];                                     // Fixing Size After Last Property 
	class UItem_Module_Flashlight*               K2Node_DynamicCast_AsItem_Module_Flashlight;       // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xEA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B64[0x1];                                     // Fixing Size After Last Property 
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue;               // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B65[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xFC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


