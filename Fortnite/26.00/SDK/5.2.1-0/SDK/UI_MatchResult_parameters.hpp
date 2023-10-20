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

// 0x2D0 (0x2D0 - 0x0)
// Function UI_MatchResult.UI_MatchResult_C.OnKeyUp
struct UUI_MatchResult_C_OnKeyUp_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(Parm, OutParm, ReturnParm)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x138(0x18)(HasGetValueTypeHash)
	class UBP_PG_PlayerController_Game_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Game; // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30A1[0x6];                                     // Fixing Size After Last Property 
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x160(0xB8)(None)
	struct FEventReply                           CallFunc_Handled_ReturnValue_1;                    // 0x218(0xB8)(None)
};

// 0x2D0 (0x2D0 - 0x0)
// Function UI_MatchResult.UI_MatchResult_C.OnKeyDown
struct UUI_MatchResult_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(Parm, OutParm, ReturnParm)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x138(0x18)(HasGetValueTypeHash)
	class UBP_PG_PlayerController_Game_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Game; // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30A3[0x6];                                     // Fixing Size After Last Property 
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x160(0xB8)(None)
	struct FEventReply                           CallFunc_Handled_ReturnValue_1;                    // 0x218(0xB8)(None)
};

// 0xF8 (0xF8 - 0x0)
// Function UI_MatchResult.UI_MatchResult_C.ShowGameResult
struct UUI_MatchResult_C_ShowGameResult_Params
{
public:
	class UBP_PG_GameState_Game_C*               L_GameState;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x8(0x14)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x1C(0x14)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_2;                    // 0x30(0x14)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_3;                    // 0x44(0x14)(None)
	int32                                        CallFunc_GetScoreBravoTeam_ReturnValue;            // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30B1[0x3];                                     // Fixing Size After Last Property 
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x60(0x18)(None)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerState_Game_C*             K2Node_DynamicCast_AsBP_PG_Player_State_Game;      // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30B4[0x3];                                     // Fixing Size After Last Property 
	int32                                        CallFunc_GetScoreAlphaTeam_ReturnValue;            // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30B5[0x7];                                     // Fixing Size After Last Property 
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x98(0x18)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30B6[0x7];                                     // Fixing Size After Last Property 
	class UBP_PG_GameState_Game_C*               CallFunc_GetGameStateBP_MyGameState;               // 0xB8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_1;            // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_Game_Character_C*               K2Node_DynamicCast_AsBP_PG_Game_Character;         // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30BA[0x7];                                     // Fixing Size After Last Property 
	class UCameraComponent*                      CallFunc_GetActiveCamera_ReturnValue;              // 0xE8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_MatchResult.UI_MatchResult_C.PreConstruct
struct UUI_MatchResult_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_MatchResult.UI_MatchResult_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_MatchResult_C_BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_MatchResult.UI_MatchResult_C.Construct
struct UUI_MatchResult_C_Construct_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function UI_MatchResult.UI_MatchResult_C.ExecuteUbergraph_UI_MatchResult
struct UUI_MatchResult_C_ExecuteUbergraph_UI_MatchResult_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30D1[0x3];                                     // Fixing Size After Last Property 
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_QuitMatch_C*                       CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


