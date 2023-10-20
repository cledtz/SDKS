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

// 0x238 (0x238 - 0x0)
// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.OnMouseButtonDown
struct UUI_Scoreboard_Player_C_OnMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Parm, OutParm, ReturnParm)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x168(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_Scoreboard_Player_Menu_C*          CallFunc_Create_ReturnValue;                       // 0x170(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F6B[0x7];                                     // Fixing Size After Last Property 
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x180(0xB8)(None)
};

// 0x25 (0x25 - 0x0)
// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.SetPlayerNumber
struct UUI_Scoreboard_Player_C_SetPlayerNumber_Params
{
public:
	int32                                        NewNumber;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F77[0x4];                                     // Fixing Size After Last Property 
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x8(0x18)(None)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.SortPlayers
struct UUI_Scoreboard_Player_C_SortPlayers_Params
{
public:
	class UGridPanel*                            GridTeam;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_Scoreboard_Player_C*               L_PlayerSlot;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         L_IsSorted;                                        // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F7E[0x7];                                     // Fixing Size After Last Property 
	class UGridPanel*                            L_GridTeam;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.SetPlayerName
struct UUI_Scoreboard_Player_C_SetPlayerName_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable;                              // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_1;                            // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F82[0x3];                                     // Fixing Size After Last Property 
	struct FLinearColor                          K2Node_Select_Default_1;                           // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x38(0x14)(None)
	uint8                                        Pad_2F83[0x4];                                     // Fixing Size After Last Property 
	class FString                                CallFunc_GetPlayerName_ReturnValue;                // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x60(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.SetPlayerDeaths
struct UUI_Scoreboard_Player_C_SetPlayerDeaths_Params
{
public:
	class FText                                  CallFunc_Conv_ByteToText_ReturnValue;              // 0x0(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.SetKillsOfPlayer
struct UUI_Scoreboard_Player_C_SetKillsOfPlayer_Params
{
public:
	class FText                                  CallFunc_Conv_ByteToText_ReturnValue;              // 0x0(0x18)(None)
};

// 0x28 (0x28 - 0x0)
// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.SetPlayerGameScore
struct UUI_Scoreboard_Player_C_SetPlayerGameScore_Params
{
public:
	float                                        CallFunc_GetScore_ReturnValue;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Round_ReturnValue;                        // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x8(0x18)(None)
	double                                       CallFunc_Round_A_ImplicitCast;                     // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.OnLoaded_35F61F374CADE7A5EBBD56B37A053F44
struct UUI_Scoreboard_Player_C_OnLoaded_35F61F374CADE7A5EBBD56B37A053F44_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.Construct
struct UUI_Scoreboard_Player_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.OnChangeNumberKills_Event
struct UUI_Scoreboard_Player_C_OnChangeNumberKills_Event_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.OnChangeNumberDeaths_Event
struct UUI_Scoreboard_Player_C_OnChangeNumberDeaths_Event_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.OnPlayerNameChanged_Event
struct UUI_Scoreboard_Player_C_OnPlayerNameChanged_Event_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.SetPlayerLevel
struct UUI_Scoreboard_Player_C_SetPlayerLevel_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.OnTotalProgress_Event
struct UUI_Scoreboard_Player_C_OnTotalProgress_Event_Params
{
public:
};

// 0x130 (0x130 - 0x0)
// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.ExecuteUbergraph_UI_Scoreboard_Player
struct UUI_Scoreboard_Player_C_ExecuteUbergraph_UI_Scoreboard_Player_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FA2[0x4];                                     // Fixing Size After Last Property 
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable;                              // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FA5[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x44(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetCompressedPing_ReturnValue;            // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FA6[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x58(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Multiply_ByteByte_ReturnValue;            // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FA7[0x7];                                     // Fixing Size After Last Property 
	class FText                                  CallFunc_Conv_ByteToText_ReturnValue;              // 0x70(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FA9[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x8C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FAB[0x4];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActor*                                CallFunc_GetOwner_ReturnValue;                     // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FAD[0x3];                                     // Fixing Size After Last Property 
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0xB4(0x14)(None)
	struct FLevelInfo                            CallFunc_GetCurrentLevelInfo_ReturnValue;          // 0xC8(0x48)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FAF[0x7];                                     // Fixing Size After Last Property 
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x118(0x18)(None)
};

}
}


