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
// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.BP_OnItemExpansionChanged
struct UUI_Menu_Squad_Friend_C_BP_OnItemExpansionChanged_Params
{
public:
	bool                                         bIsExpanded;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.BP_OnItemSelectionChanged
struct UUI_Menu_Squad_Friend_C_BP_OnItemSelectionChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.BndEvt__UI_Squad_Friend_Button_Invite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_Menu_Squad_Friend_C_BndEvt__UI_Squad_Friend_Button_Invite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.OnListItemObjectSet
struct UUI_Menu_Squad_Friend_C_OnListItemObjectSet_Params
{
public:
	class UObject*                               ListItemObject;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.BP_OnEntryReleased
struct UUI_Menu_Squad_Friend_C_BP_OnEntryReleased_Params
{
public:
};

// 0x68 (0x68 - 0x0)
// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.OnPartyMemberJoined_Event
struct UUI_Menu_Squad_Friend_C_OnPartyMemberJoined_Event_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      MemberId;                                          // 0x38(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x69 (0x69 - 0x0)
// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.OnPartyMemberExited_Event
struct UUI_Menu_Squad_Friend_C_OnPartyMemberExited_Event_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      MemberId;                                          // 0x38(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	enum class EMemberExitedReason_              Reason;                                            // 0x68(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.OnPartyJoined_Event
struct UUI_Menu_Squad_Friend_C_OnPartyJoined_Event_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.OnPartyExited_Event
struct UUI_Menu_Squad_Friend_C_OnPartyExited_Event_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.OnGetAvatar_Event
struct UUI_Menu_Squad_Friend_C_OnGetAvatar_Event_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.OnPresenceUpdated_Event
struct UUI_Menu_Squad_Friend_C_OnPresenceUpdated_Event_Params
{
public:
};

// 0x2FC (0x2FC - 0x0)
// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.ExecuteUbergraph_UI_Menu_Squad_Friend
struct UUI_Menu_Squad_Friend_C_ExecuteUbergraph_UI_Menu_Squad_Friend_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B29[0x4];                                      // Fixing Size After Last Property 
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B2C[0x3];                                      // Fixing Size After Last Property 
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B2D[0x3];                                      // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x2C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsExpanded;                          // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsSelected;                          // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B31[0x2];                                      // Fixing Size After Last Property 
	class UObject*                               K2Node_Event_ListItemObject;                       // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_UserEntry_C*                       K2Node_DynamicCast_AsBP_User_Entry;                // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B32[0x7];                                      // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu; // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B35[0x7];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_3;                  // 0x70(0x30)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_3;                      // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_MemberId_1;                     // 0xA8(0x30)(HasGetValueTypeHash)
	class UOnlineFriendsSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue; // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B3C[0x7];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_2;                  // 0xE8(0x30)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_2;                      // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_MemberId;                       // 0x120(0x30)(HasGetValueTypeHash)
	enum class EMemberExitedReason_              K2Node_CustomEvent_Reason;                         // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B3E[0x7];                                      // Fixing Size After Last Property 
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x158(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x168(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x180(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_1;                  // 0x190(0x30)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_1;                      // 0x1C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x1C8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x1D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0x1E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UBlueprintPartyMember*>         CallFunc_GetPartyMembers_OutPartyMembersArray;     // 0x1E8(0x10)(ReferenceParm)
	bool                                         CallFunc_GetPartyMembers_ReturnValue;              // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B41[0x7];                                      // Fixing Size After Last Property 
	class UBlueprintPartyMember*                 CallFunc_Array_Get_Item;                           // 0x200(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetUserId_ReturnValue;                    // 0x208(0x30)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_1; // 0x241(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x242(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B42[0x1];                                      // Fixing Size After Last Property 
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x244(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_2; // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B43[0x3];                                      // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x24C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B44[0x4];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId;                    // 0x260(0x30)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId;                        // 0x290(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x2A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B47[0x7];                                      // Fixing Size After Last Property 
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_4;   // 0x2B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B48[0x3];                                      // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x2BC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B49[0x4];                                      // Fixing Size After Last Property 
	class UOnlineFriendRef*                      CallFunc_GetFriend_ReturnValue;                    // 0x2D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x2D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_1; // 0x2E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x2E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x2E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B4A[0x6];                                      // Fixing Size After Last Property 
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_5;   // 0x2F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RetriggerableDelay_Duration_ImplicitCast; // 0x2F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


