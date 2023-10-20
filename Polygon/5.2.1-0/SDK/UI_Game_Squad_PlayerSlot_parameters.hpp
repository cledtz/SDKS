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
// Function UI_Game_Squad_PlayerSlot.UI_Game_Squad_PlayerSlot_C.OnPlayerNameChanged_Event
struct UUI_Game_Squad_PlayerSlot_C_OnPlayerNameChanged_Event_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Game_Squad_PlayerSlot.UI_Game_Squad_PlayerSlot_C.OnChangeHealth_Event
struct UUI_Game_Squad_PlayerSlot_C_OnChangeHealth_Event_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Game_Squad_PlayerSlot.UI_Game_Squad_PlayerSlot_C.Construct
struct UUI_Game_Squad_PlayerSlot_C_Construct_Params
{
public:
};

// 0x9 (0x9 - 0x0)
// Function UI_Game_Squad_PlayerSlot.UI_Game_Squad_PlayerSlot_C.OnEndPlay_Event
struct UUI_Game_Squad_PlayerSlot_C_OnEndPlay_Event_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UI_Game_Squad_PlayerSlot.UI_Game_Squad_PlayerSlot_C.OnPawnSet_Event
struct UUI_Game_Squad_PlayerSlot_C_OnPawnSet_Event_Params
{
public:
	class UPlayerState*                          Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPawn*                                 NewPawn;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPawn*                                 OldPawn;                                           // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xD4 (0xD4 - 0x0)
// Function UI_Game_Squad_PlayerSlot.UI_Game_Squad_PlayerSlot_C.ExecuteUbergraph_UI_Game_Squad_PlayerSlot
struct UUI_Game_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Game_Squad_PlayerSlot_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AE4[0x3];                                     // Fixing Size After Last Property 
	class FString                                CallFunc_GetPlayerName_ReturnValue;                // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x38(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AE6[0x7];                                     // Fixing Size After Last Property 
	class UPG_Game_Character*                    K2Node_DynamicCast_AsPG_Game_Character;            // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AE7[0x3];                                     // Fixing Size After Last Property 
	int32                                        CallFunc_GetHealth_ReturnValue;                    // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AE8[0x7];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x80(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AEA[0x2];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x94(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AEC[0x4];                                     // Fixing Size After Last Property 
	class UActor*                                K2Node_CustomEvent_Actor;                          // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EEndPlayReason                    K2Node_CustomEvent_EndPlayReason;                  // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AED[0x7];                                     // Fixing Size After Last Property 
	class UPlayerState*                          K2Node_CustomEvent_Player;                         // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPawn*                                 K2Node_CustomEvent_NewPawn;                        // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPawn*                                 K2Node_CustomEvent_OldPawn;                        // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetPercent_InPercent_ImplicitCast;        // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


