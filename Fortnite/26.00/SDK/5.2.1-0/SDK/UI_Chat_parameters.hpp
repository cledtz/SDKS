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

// 0x8A (0x8A - 0x0)
// Function UI_Chat.UI_Chat_C.WordFilter
struct UUI_Chat_C_WordFilter_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                NewParam;                                          // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                L_BadWord;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                L_Message;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3086[0x4];                                     // Fixing Size After Last Property 
	class FString                                CallFunc_Array_Get_Item;                           // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x66(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3088[0x1];                                     // Fixing Size After Last Property 
	class FString                                CallFunc_Replace_ReturnValue;                      // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_FindSubstring_ReturnValue;                // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3089[0x3];                                     // Fixing Size After Last Property 
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4A (0x4A - 0x0)
// Function UI_Chat.UI_Chat_C.SortBadWordsList
struct UUI_Chat_C_SortBadWordsList_Params
{
public:
	bool                                         L_Continue;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3091[0x3];                                     // Fixing Size After Last Property 
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3092[0x3];                                     // Fixing Size After Last Property 
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Array_Get_Item;                           // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Len_ReturnValue;                          // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Array_Get_Item_1;                         // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Len_ReturnValue_1;                        // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2C0 (0x2C0 - 0x0)
// Function UI_Chat.UI_Chat_C.OnKeyDown
struct UUI_Chat_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(Parm, OutParm, ReturnParm)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x130(0x18)(HasGetValueTypeHash)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x148(0xB8)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x201(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3098[0x6];                                     // Fixing Size After Last Property 
	struct FEventReply                           CallFunc_Handled_ReturnValue_1;                    // 0x208(0xB8)(None)
};

// 0x0 (0x0 - 0x0)
// Function UI_Chat.UI_Chat_C.OpenChat
struct UUI_Chat_C_OpenChat_Params
{
public:
};

// 0x19 (0x19 - 0x0)
// Function UI_Chat.UI_Chat_C.BndEvt__EditableText_Message_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
struct UUI_Chat_C_BndEvt__EditableText_Message_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Chat.UI_Chat_C.CloseChat
struct UUI_Chat_C_CloseChat_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function UI_Chat.UI_Chat_C.AddMessage
struct UUI_Chat_C_AddMessage_Params
{
public:
	struct FGameChatMessage                      Message;                                           // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function UI_Chat.UI_Chat_C.StartPlayAnimationHiddenChat
struct UUI_Chat_C_StartPlayAnimationHiddenChat_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Chat.UI_Chat_C.PlayAnimationEvent
struct UUI_Chat_C_PlayAnimationEvent_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Chat.UI_Chat_C.HiddenChatEvent
struct UUI_Chat_C_HiddenChatEvent_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Chat.UI_Chat_C.SendMessage
struct UUI_Chat_C_SendMessage_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Chat.UI_Chat_C.BndEvt__Button_MessageType_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UUI_Chat_C_BndEvt__Button_MessageType_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function UI_Chat.UI_Chat_C.BndEvt__EditableText_Message_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature
struct UUI_Chat_C_BndEvt__EditableText_Message_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function UI_Chat.UI_Chat_C.SelectMessageType
struct UUI_Chat_C_SelectMessageType_Params
{
public:
	enum class EMessageType                      MessageType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Chat.UI_Chat_C.BndEvt__Button_CloseChat_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UUI_Chat_C_BndEvt__Button_CloseChat_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function UI_Chat.UI_Chat_C.OnAddedToFocusPath
struct UUI_Chat_C_OnAddedToFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function UI_Chat.UI_Chat_C.Construct
struct UUI_Chat_C_Construct_Params
{
public:
};

// 0x248 (0x248 - 0x0)
// Function UI_Chat.UI_Chat_C.ExecuteUbergraph_UI_Chat
struct UUI_Chat_C_ExecuteUbergraph_UI_Chat_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30B0[0x6];                                     // Fixing Size After Last Property 
	class FText                                  K2Node_ComponentBoundEvent_Text_1;                 // 0x10(0x18)(ConstParm)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod;           // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30B2[0x6];                                     // Fixing Size After Last Property 
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x30(0x18)(None)
	struct FGameChatMessage                      CallFunc_Array_Get_Item;                           // 0x48(0x20)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Len_ReturnValue;                          // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30B9[0x7];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerState_Game_C*             K2Node_DynamicCast_AsBP_PG_Player_State_Game;      // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30BB[0x7];                                     // Fixing Size After Last Property 
	struct FGameChatMessage                      K2Node_CustomEvent_Message;                        // 0xA0(0x20)(None)
	class UPlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_1;            // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_ChatMessage_C*                     CallFunc_Create_ReturnValue;                       // 0xC8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0xD0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30BD[0x7];                                     // Fixing Size After Last Property 
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30BE[0x6];                                     // Fixing Size After Last Property 
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0xF0(0x18)(ConstParm)
	enum class EMessageType                      K2Node_CustomEvent_MessageType;                    // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30C0[0x3];                                     // Fixing Size After Last Property 
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x10C(0x8)(NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30C1[0x3];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Game_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Game; // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30C3[0x6];                                     // Fixing Size After Last Property 
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x140(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x149(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30C5[0x6];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_3;        // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_4;        // 0x158(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x160(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_5;        // 0x168(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_6;        // 0x170(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x178(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPG_Game_Character*                    K2Node_DynamicCast_AsPG_Game_Character;            // 0x180(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30C8[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30CA[0x4];                                     // Fixing Size After Last Property 
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x1A0(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30CC[0x2];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x1AC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30CD[0x4];                                     // Fixing Size After Last Property 
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x1C0(0x8)(NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetText_ReturnValue_1;                    // 0x1C8(0x18)(None)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30CE[0x3];                                     // Fixing Size After Last Property 
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_5;                // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x1E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30D0[0x2];                                     // Fixing Size After Last Property 
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetText_ReturnValue_2;                    // 0x1F0(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x208(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_WordFilter_NewParam;                      // 0x218(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FGameChatMessage                      K2Node_MakeStruct_GameChatMessage;                 // 0x228(0x20)(None)
};

}
}


