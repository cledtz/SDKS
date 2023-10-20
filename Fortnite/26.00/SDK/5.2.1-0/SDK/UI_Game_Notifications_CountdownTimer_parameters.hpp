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

// 0x2 (0x2 - 0x0)
// Function UI_Game_Notifications_CountdownTimer.UI_Game_Notifications_CountdownTimer_C.SetupByGameState
struct UUI_Game_Notifications_CountdownTimer_C_SetupByGameState_Params
{
public:
	bool                                         CallFunc_WithEditor_ReturnValue;                   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Game_Notifications_CountdownTimer.UI_Game_Notifications_CountdownTimer_C.OnChangeGameState_Event
struct UUI_Game_Notifications_CountdownTimer_C_OnChangeGameState_Event_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Game_Notifications_CountdownTimer.UI_Game_Notifications_CountdownTimer_C.OnGameTimer_Event
struct UUI_Game_Notifications_CountdownTimer_C_OnGameTimer_Event_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Game_Notifications_CountdownTimer.UI_Game_Notifications_CountdownTimer_C.Construct
struct UUI_Game_Notifications_CountdownTimer_C_Construct_Params
{
public:
};

// 0x68 (0x68 - 0x0)
// Function UI_Game_Notifications_CountdownTimer.UI_Game_Notifications_CountdownTimer_C.ExecuteUbergraph_UI_Game_Notifications_CountdownTimer
struct UUI_Game_Notifications_CountdownTimer_C_ExecuteUbergraph_UI_Game_Notifications_CountdownTimer_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25C4[0x4];                                     // Fixing Size After Last Property 
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25C5[0x6];                                     // Fixing Size After Last Property 
	class UBP_PG_GameState_Game_C*               CallFunc_GetGameStateBP_MyGameState;               // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                        CallFunc_GetGameTimer_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25C6[0x4];                                     // Fixing Size After Last Property 
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x38(0x18)(None)
	int32                                        CallFunc_GetGameTimer_ReturnValue_1;               // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x55(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x56(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x57(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x58(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


