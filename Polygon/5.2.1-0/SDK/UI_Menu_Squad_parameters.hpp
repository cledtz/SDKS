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

// 0x99 (0x99 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.Show Invite to Squad
struct UUI_Menu_Squad_C_Show_Invite_to_Squad_Params
{
public:
	class UBP_PG_PlayerController_Menu_C*        L_PlayerController;                                // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x10(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_IsInViewport_ReturnValue;                 // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54C[0x7];                                      // Fixing Size After Last Property 
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54D[0x7];                                      // Fixing Size After Last Property 
	TArray<class UOnlinePartyJoinInfo*>          CallFunc_GetPendingInvites_OutPendingInvitesArray; // 0x58(0x10)(ReferenceParm)
	bool                                         CallFunc_GetPendingInvites_ReturnValue;            // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54F[0x3];                                      // Fixing Size After Last Property 
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_552[0x7];                                      // Fixing Size After Last Property 
	class UUI_Menu_Squad_Invite_C*               CallFunc_Create_ReturnValue;                       // 0x78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_554[0x7];                                      // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu; // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8B (0x8B - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.SortFriendsByStatus
struct UUI_Menu_Squad_C_SortFriendsByStatus_Params
{
public:
	bool                                         L_Continue;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_563[0x7];                                      // Fixing Size After Last Property 
	TArray<class UObject*>                       L_FriendsList;                                     // 0x8(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UObject*>                       CallFunc_GetListItems_ReturnValue;                 // 0x28(0x10)(ConstParm, ReferenceParm)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_566[0x4];                                      // Fixing Size After Last Property 
	class UObject*                               CallFunc_Array_Get_Item;                           // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_567[0x7];                                      // Fixing Size After Last Property 
	class UBP_UserEntry_C*                       K2Node_DynamicCast_AsBP_User_Entry;                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_568[0x6];                                      // Fixing Size After Last Property 
	class UObject*                               CallFunc_Array_Get_Item_1;                         // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56A[0x4];                                      // Fixing Size After Last Property 
	class UBP_UserEntry_C*                       K2Node_DynamicCast_AsBP_User_Entry_1;              // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x7B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x7D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x7E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_6;        // 0x7F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_7;        // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x82(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x83(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_4;                  // 0x85(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_8;        // 0x86(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x87(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_9;        // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_5;                  // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x8A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C5 (0x1C5 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.FillFriendList
struct UUI_Menu_Squad_C_FillFriendList_Params
{
public:
	TArray<class UBP_UserEntry_C*>               L_FriendList;                                      // 0x0(0x10)(Edit, BlueprintVisible)
	class UBP_UserEntry_C*                       L_UserEntry;                                       // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClientGameInstance*                   L_ClientGameInstance;                              // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_594[0x4];                                      // Fixing Size After Last Property 
	class UOnlineFriendsSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UOnlineFriendRef*>              CallFunc_GetFriendsList_OutFriends;                // 0x48(0x10)(ReferenceParm)
	bool                                         CallFunc_GetFriendsList_ReturnValue;               // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_597[0x7];                                      // Fixing Size After Last Property 
	class UBP_UserEntry_C*                       CallFunc_SpawnObject_ReturnValue;                  // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UOnlineFriendRef*                      CallFunc_Array_Get_Item;                           // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_598[0x4];                                      // Fixing Size After Last Property 
	struct FOnlineUserPresenceData               CallFunc_GetPresence_ReturnValue;                  // 0x78(0xA8)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59B[0x7];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      CallFunc_GetUserId_ReturnValue;                    // 0x128(0x30)(HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetUserId_ReturnValue_1;                  // 0x158(0x30)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59E[0x7];                                      // Fixing Size After Last Property 
	class UBP_PG_GameInstance_C*                 CallFunc_GetGameInstance_MyGameIntance;            // 0x198(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClientGameInstance*                   CallFunc_GetClientGameInstance_ReturnValue;        // 0x1A0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserEntry*                            CallFunc_Array_Get_Item_1;                         // 0x1A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_UserEntry_C*                       K2Node_DynamicCast_AsBP_User_Entry;                // 0x1B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A2[0x3];                                      // Fixing Size After Last Property 
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x1BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue; // 0x1C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x1C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1C3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x51 (0x51 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.IsLocalUserLeader
struct UUI_Menu_Squad_C_IsLocalUserLeader_Params
{
public:
	bool                                         IsLeader;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_PartyId_ReturnValue;              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5AB[0x5];                                      // Fixing Size After Last Property 
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5AC[0x7];                                      // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x20(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_IsMemberLeader_ReturnValue;               // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x251 (0x251 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.UpdatePartyMembers
struct UUI_Menu_Squad_C_UpdatePartyMembers_Params
{
public:
	TArray<class UBlueprintPartyMember*>         L_PartyMembers;                                    // 0x0(0x10)(Edit, BlueprintVisible)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5EA[0x3];                                      // Fixing Size After Last Property 
	struct FLinearColor                          Temp_struct_Variable;                              // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_1;                            // 0x24(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5EB[0x3];                                      // Fixing Size After Last Property 
	struct FLinearColor                          Temp_struct_Variable_2;                            // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_3;                            // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5EC[0x3];                                      // Fixing Size After Last Property 
	struct FLinearColor                          Temp_struct_Variable_4;                            // 0x5C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_5;                            // 0x6C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5ED[0x4];                                      // Fixing Size After Last Property 
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_6;                            // 0x8C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F2[0x3];                                      // Fixing Size After Last Property 
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlueprintPartyMember*                 CallFunc_Array_Get_Item;                           // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_PartyId_ReturnValue;              // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F4[0x7];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      CallFunc_GetUserId_ReturnValue;                    // 0xC0(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F9[0x2];                                      // Fixing Size After Last Property 
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5FD[0x3];                                      // Fixing Size After Last Property 
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5FE[0x3];                                      // Fixing Size After Last Property 
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_600[0x3];                                      // Fixing Size After Last Property 
	struct FLinearColor                          K2Node_Select_Default;                             // 0x10C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default_1;                           // 0x11C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x12C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_7;                            // 0x130(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_3;        // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_602[0x3];                                      // Fixing Size After Last Property 
	struct FLinearColor                          K2Node_Select_Default_2;                           // 0x144(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_603[0x4];                                      // Fixing Size After Last Property 
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x158(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                               CallFunc_Array_Get_Item_1;                         // 0x168(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_5;               // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_605[0x4];                                      // Fixing Size After Last Property 
	class UUI_Menu_Squad_PlayerSlot_C*           K2Node_DynamicCast_AsUI_Menu_Squad_Player_Slot;    // 0x178(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x181(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_606[0x2];                                      // Fixing Size After Last Property 
	struct FLinearColor                          K2Node_Select_Default_3;                           // 0x184(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_607[0x4];                                      // Fixing Size After Last Property 
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x198(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_Menu_Squad_PlayerSlot_C*           K2Node_DynamicCast_AsUI_Menu_Squad_Player_Slot_1;  // 0x1A0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_608[0x3];                                      // Fixing Size After Last Property 
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x1AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60A[0x3];                                      // Fixing Size After Last Property 
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x1B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x1B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x1C0(0x30)(HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue_1;                 // 0x1F0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x1F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_Menu_Squad_PlayerSlot_C*           K2Node_DynamicCast_AsUI_Menu_Squad_Player_Slot_2;  // 0x200(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60D[0x7];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_1;   // 0x210(0x30)(HasGetValueTypeHash)
	TArray<class UBlueprintPartyMember*>         CallFunc_GetPartyMembers_OutPartyMembersArray;     // 0x240(0x10)(ReferenceParm)
	bool                                         CallFunc_GetPartyMembers_ReturnValue;              // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.ReceivedNewSquadData
struct UUI_Menu_Squad_C_ReceivedNewSquadData_Params
{
public:
	class UReadablePartyData*                    NewData;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    L_JsonData;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UReadablePartyData*                    L_NewData;                                         // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_GetAttribute_OutFound;                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_625[0x7];                                      // Fixing Size After Last Property 
	struct FVariantDataBP                        CallFunc_GetAttribute_OutAttrValue;                // 0x20(0x28)(None)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue;               // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetNumberField_ReturnValue;               // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_627[0x4];                                      // Fixing Size After Last Property 
	class FString                                CallFunc_GetStringField_ReturnValue;               // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasField_ReturnValue;                     // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DecodeJson_ReturnValue;                   // 0x6D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_628[0x2];                                      // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_ConstructJsonObject_ReturnValue;          // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu; // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_62A[0x7];                                      // Fixing Size After Last Property 
	double                                       CallFunc_FTrunc_A_ImplicitCast;                    // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE9 (0xE9 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.UpdateSquadData
struct UUI_Menu_Squad_C_UpdateSquadData_Params
{
public:
	class UPlayFabJsonObject*                    Data;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    L_Data;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_EncodeJson_ReturnValue;                   // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVariantDataBP                        K2Node_MakeStruct_VariantDataBP;                   // 0x28(0x28)(None)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x50(0x30)(HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_1;   // 0x88(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_PartyId_ReturnValue;              // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xBA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_64F[0x5];                                      // Fixing Size After Last Property 
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UReadablePartyData*                    CallFunc_GetPartyData_ReturnValue;                 // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMutablePartyData*                     CallFunc_CreateMutablePartyData_ReturnValue;       // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMutablePartyData*                     K2Node_LowEntry_LocalVariable_Value__Object;       // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_UpdatePartyData_ReturnValue;              // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.OnLeavePartyComplete_94AC82684142D04BA97792A8E5D78A1C
struct UUI_Menu_Squad_C_OnLeavePartyComplete_94AC82684142D04BA97792A8E5D78A1C_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ELeavePartyCompletionResult_      Result;                                            // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.OnCallFailed_94AC82684142D04BA97792A8E5D78A1C
struct UUI_Menu_Squad_C_OnCallFailed_94AC82684142D04BA97792A8E5D78A1C_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ELeavePartyCompletionResult_      Result;                                            // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.OnReadFriendsListComplete_EB4EDC7641FBC8F8B24CE39924CD81D1
struct UUI_Menu_Squad_C_OnReadFriendsListComplete_EB4EDC7641FBC8F8B24CE39924CD81D1_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bWasSuccessful;                                    // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_660[0x3];                                      // Fixing Size After Last Property 
	class FString                                ListName;                                          // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                ErrorStr;                                          // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.OnCallFailed_EB4EDC7641FBC8F8B24CE39924CD81D1
struct UUI_Menu_Squad_C_OnCallFailed_EB4EDC7641FBC8F8B24CE39924CD81D1_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bWasSuccessful;                                    // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_667[0x3];                                      // Fixing Size After Last Property 
	class FString                                ListName;                                          // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                ErrorStr;                                          // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x69 (0x69 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.OnSendPartyInvitationComplete_FA4D34474260B64CA0DD95B03A080BB3
struct UUI_Menu_Squad_C_OnSendPartyInvitationComplete_FA4D34474260B64CA0DD95B03A080BB3_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      RecipientId;                                       // 0x38(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	enum class ESendPartyInvitationCompletionResult_ Result;                                            // 0x68(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x69 (0x69 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.OnCallFailed_FA4D34474260B64CA0DD95B03A080BB3
struct UUI_Menu_Squad_C_OnCallFailed_FA4D34474260B64CA0DD95B03A080BB3_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      RecipientId;                                       // 0x38(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	enum class ESendPartyInvitationCompletionResult_ Result;                                            // 0x68(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.OnCreatePartyComplete_7344AF7C4DC39CD5996EB9A5A37BA7B0
struct UUI_Menu_Squad_C_OnCreatePartyComplete_7344AF7C4DC39CD5996EB9A5A37BA7B0_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECreatePartyCompletionResult_     Result;                                            // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.OnCallFailed_7344AF7C4DC39CD5996EB9A5A37BA7B0
struct UUI_Menu_Squad_C_OnCallFailed_7344AF7C4DC39CD5996EB9A5A37BA7B0_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECreatePartyCompletionResult_     Result;                                            // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.ListenDelegates
struct UUI_Menu_Squad_C_ListenDelegates_Params
{
public:
};

// 0x68 (0x68 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.OnPartyMemberJoined_Event
struct UUI_Menu_Squad_C_OnPartyMemberJoined_Event_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      MemberId;                                          // 0x38(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.OnPartyMemberPromoted_Event
struct UUI_Menu_Squad_C_OnPartyMemberPromoted_Event_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      NewLeaderId;                                       // 0x38(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x69 (0x69 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.OnPartyMemberExited_Event
struct UUI_Menu_Squad_C_OnPartyMemberExited_Event_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      MemberId;                                          // 0x38(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	enum class EMemberExitedReason_              Reason;                                            // 0x68(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.OnPartyJoined_Event
struct UUI_Menu_Squad_C_OnPartyJoined_Event_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.OnPartyExited_Event
struct UUI_Menu_Squad_C_OnPartyExited_Event_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.OnPartyDataReceived_Event
struct UUI_Menu_Squad_C_OnPartyDataReceived_Event_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  Namespace;                                         // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UReadablePartyData*                    PartyData;                                         // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.OnPartyInvitesChanged_Event
struct UUI_Menu_Squad_C_OnPartyInvitesChanged_Event_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.BndEvt__UI_Squad_Button_Squad_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_Menu_Squad_C_BndEvt__UI_Squad_Button_Squad_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.BndEvt__UI_Squad_Button_Friends_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UUI_Menu_Squad_C_BndEvt__UI_Squad_Button_Friends_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x48 (0x48 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.OnLoginComplete_Event
struct UUI_Menu_Squad_C_OnLoginComplete_Event_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bWasSuccessful;                                    // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A8[0x3];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FString                                Error;                                             // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.OpenFriendSection
struct UUI_Menu_Squad_C_OpenFriendSection_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.InviteToSquad
struct UUI_Menu_Squad_C_InviteToSquad_Params
{
public:
	class UUI_Menu_Squad_Friend_C*               Friend;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.BndEvt__UI_Menu_Squad_Button_Squad_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UUI_Menu_Squad_C_BndEvt__UI_Menu_Squad_Button_Squad_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.BndEvt__UI_Menu_Squad_Button_Squad_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UUI_Menu_Squad_C_BndEvt__UI_Menu_Squad_Button_Squad_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.BndEvt__UI_Menu_Squad_Button_Friends_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UUI_Menu_Squad_C_BndEvt__UI_Menu_Squad_Button_Friends_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.BndEvt__UI_Menu_Squad_Button_Friends_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
struct UUI_Menu_Squad_C_BndEvt__UI_Menu_Squad_Button_Friends_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.Construct
struct UUI_Menu_Squad_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.BndEvt__UI_Menu_Squad_Button_Open_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature
struct UUI_Menu_Squad_C_BndEvt__UI_Menu_Squad_Button_Open_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature_Params
{
public:
};

// 0x9A4 (0x9A4 - 0x0)
// Function UI_Menu_Squad.UI_Menu_Squad_C.ExecuteUbergraph_UI_Menu_Squad
struct UUI_Menu_Squad_C_ExecuteUbergraph_UI_Menu_Squad_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_75E[0x4];                                      // Fixing Size After Last Property 
	class UOnlineIdentitySubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UOnlineFriendsSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UOnlineFriendsSubsystemReadFriendsList* CallFunc_ReadFriendsList_ReturnValue;              // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_761[0x3];                                      // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x34(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_LocalUserNum_2;                 // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccessful_2;               // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_765[0x7];                                      // Fixing Size After Last Property 
	class FString                                K2Node_CustomEvent_ListName_1;                     // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_ErrorStr_1;                     // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_LocalUserNum_1;                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccessful_1;               // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_767[0x3];                                      // Fixing Size After Last Property 
	class FString                                K2Node_CustomEvent_ListName;                       // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_ErrorStr;                       // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x98(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable;                              // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_1;                            // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_76A[0x3];                                      // Fixing Size After Last Property 
	int32                                        Temp_int_Variable;                                 // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_10;                 // 0xD8(0x30)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_9;                      // 0x108(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_RecipientId_1;                  // 0x110(0x30)(HasGetValueTypeHash)
	enum class ESendPartyInvitationCompletionResult_ K2Node_CustomEvent_result_3;                       // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_76D[0x3];                                      // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x144(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_76F[0x4];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_9;                  // 0x158(0x30)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_8;                      // 0x188(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_RecipientId;                    // 0x190(0x30)(HasGetValueTypeHash)
	enum class ESendPartyInvitationCompletionResult_ K2Node_CustomEvent_result_2;                       // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_770[0x3];                                      // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x1C4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ESendPartyInvitationCompletionResult_ Temp_byte_Variable;                                // 0x1D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_772[0x3];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      Temp_struct_Variable;                              // 0x1D8(0x30)(HasGetValueTypeHash)
	class UPartyId*                              Temp_object_Variable;                              // 0x208(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      Temp_struct_Variable_1;                            // 0x210(0x30)(HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_8;                  // 0x240(0x30)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_7;                      // 0x270(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECreatePartyCompletionResult_     K2Node_CustomEvent_result_1;                       // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_775[0x3];                                      // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x27C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_777[0x4];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_7;                  // 0x290(0x30)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_6;                      // 0x2C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECreatePartyCompletionResult_     K2Node_CustomEvent_result;                         // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_77A[0x3];                                      // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x2CC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECreatePartyCompletionResult_     Temp_byte_Variable_1;                              // 0x2DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_77B[0x3];                                      // Fixing Size After Last Property 
	class UPartyId*                              Temp_object_Variable_1;                            // 0x2E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      Temp_struct_Variable_2;                            // 0x2E8(0x30)(HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0x318(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UOnlineIdentitySubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue_4;   // 0x320(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_5;   // 0x328(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EOnlineLoginStatus                CallFunc_GetLoginStatus_ReturnValue;               // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x331(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x332(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUMGSequencePlayMode              Temp_byte_Variable_2;                              // 0x333(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUMGSequencePlayMode              Temp_byte_Variable_3;                              // 0x334(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_783[0x3];                                      // Fixing Size After Last Property 
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_6;   // 0x338(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x341(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x342(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUMGSequencePlayMode              K2Node_Select_Default;                             // 0x343(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x344(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_787[0x3];                                      // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x348(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable_1;               // 0x358(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_789[0x7];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_6;                  // 0x360(0x30)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_5;                      // 0x390(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_MemberId_1;                     // 0x398(0x30)(HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x3C8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_5;                  // 0x3D8(0x30)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_4;                      // 0x408(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_NewLeaderId;                    // 0x410(0x30)(HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_7;   // 0x440(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_4;                  // 0x448(0x30)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_3;                      // 0x478(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_MemberId;                       // 0x480(0x30)(HasGetValueTypeHash)
	enum class EMemberExitedReason_              K2Node_CustomEvent_Reason;                         // 0x4B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_78E[0x3];                                      // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x4B4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_78F[0x4];                                      // Fixing Size After Last Property 
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_8;   // 0x4C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_3;                  // 0x4D0(0x30)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_2;                      // 0x500(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x508(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_9;   // 0x518(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x520(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x528(0x30)(HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x558(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_1;   // 0x560(0x30)(HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      Temp_struct_Variable_3;                            // 0x590(0x30)(HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_2;                  // 0x5C0(0x30)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_1;                      // 0x5F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPartyId*                              Temp_object_Variable_2;                            // 0x5F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ELeavePartyCompletionResult_      Temp_byte_Variable_4;                              // 0x600(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_791[0x7];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_1;                  // 0x608(0x30)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId;                        // 0x638(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_Namespace;                      // 0x640(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UReadablePartyData*                    K2Node_CustomEvent_PartyData;                      // 0x648(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x650(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_11;                 // 0x658(0x30)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_10;                     // 0x688(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ELeavePartyCompletionResult_      K2Node_CustomEvent_result_4;                       // 0x690(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_798[0x7];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_2;   // 0x698(0x30)(HasGetValueTypeHash)
	TArray<class UPartyId*>                      CallFunc_GetJoinedParties_OutPartyIdArray;         // 0x6C8(0x10)(ReferenceParm)
	bool                                         CallFunc_GetJoinedParties_ReturnValue;             // 0x6D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_799[0x7];                                      // Fixing Size After Last Property 
	class UPartyId*                              CallFunc_Array_Get_Item;                           // 0x6E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x6E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_PartyId_ReturnValue;              // 0x6E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x6EA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6EB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_79B[0x4];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId;                    // 0x6F0(0x30)(HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x720(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_LocalUserNum;                   // 0x730(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccessful;                 // 0x734(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_79C[0x3];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_UserId;                         // 0x738(0x30)(HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_error;                          // 0x768(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_10;  // 0x778(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_12;                 // 0x780(0x30)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_11;                     // 0x7B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ELeavePartyCompletionResult_      K2Node_CustomEvent_result_5;                       // 0x7B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_79F[0x7];                                      // Fixing Size After Last Property 
	class UUI_Menu_Squad_Friend_C*               K2Node_CustomEvent_Friend;                         // 0x7C0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0x7C8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_3;        // 0x7D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_3;   // 0x7E0(0x30)(HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0x810(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_4;        // 0x820(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FOnlinePartyConfiguration             K2Node_MakeStruct_OnlinePartyConfiguration;        // 0x828(0x40)(None)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_4;   // 0x868(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x898(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_PartyId_ReturnValue_1;            // 0x899(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x89A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A3[0x5];                                      // Fixing Size After Last Property 
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_5;        // 0x8A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_5;   // 0x8B0(0x30)(HasGetValueTypeHash)
	int64                                        CallFunc_GetPartyMemberCount_ReturnValue;          // 0x8E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x8E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_Int64Int64_ReturnValue;              // 0x8F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable_1;                     // 0x8F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x8F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A6[0x1];                                      // Fixing Size After Last Property 
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x8F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x8F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A8[0x7];                                      // Fixing Size After Last Property 
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_11;  // 0x900(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x908(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A9[0x7];                                      // Fixing Size After Last Property 
	class UOnlinePartySubsystemSendInvitation*   CallFunc_SendInvitation_ReturnValue;               // 0x910(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x918(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7AB[0x7];                                      // Fixing Size After Last Property 
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_12;  // 0x920(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_13;  // 0x928(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UOnlinePartySubsystemLeaveParty*       CallFunc_LeaveParty_ReturnValue;                   // 0x930(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UBlueprintPartyMember*>         CallFunc_GetPartyMembers_OutPartyMembersArray;     // 0x938(0x10)(ReferenceParm)
	bool                                         CallFunc_GetPartyMembers_ReturnValue;              // 0x948(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7AE[0x3];                                      // Fixing Size After Last Property 
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x94C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x950(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x951(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7B3[0x2];                                      // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_14;           // 0x954(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7B5[0x4];                                      // Fixing Size After Last Property 
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_14;  // 0x968(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_PartyId_ReturnValue_2;            // 0x970(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x971(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x972(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7B6[0x1];                                      // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_15;           // 0x974(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x984(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7B8[0x3];                                      // Fixing Size After Last Property 
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_15;  // 0x988(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int64                                        CallFunc_GetPrimaryPartyType_ReturnValue;          // 0x990(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlinePartySubsystemCreateParty*      CallFunc_CreateParty_ReturnValue;                  // 0x998(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x9A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x9A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_PartyId_ReturnValue_3;            // 0x9A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x9A3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


