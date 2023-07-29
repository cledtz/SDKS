#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x40 - 0x0)
// Function UI_Menu_Squad_Invite.UI_Menu_Squad_Invite_C.OnJoinPartyComplete_EB2E789049330CFB47C3B2B5D301B0C4
struct UUI_Menu_Squad_Invite_C_OnJoinPartyComplete_EB2E789049330CFB47C3B2B5D301B0C4_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EJoinPartyCompletionResult_       Result;                                            // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3246[0x3];                                     // Fixing Size After Last Property
	int32                                        NotApprovedReason;                                 // 0x3C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function UI_Menu_Squad_Invite.UI_Menu_Squad_Invite_C.OnCallFailed_EB2E789049330CFB47C3B2B5D301B0C4
struct UUI_Menu_Squad_Invite_C_OnCallFailed_EB2E789049330CFB47C3B2B5D301B0C4_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EJoinPartyCompletionResult_       Result;                                            // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_324A[0x3];                                     // Fixing Size After Last Property
	int32                                        NotApprovedReason;                                 // 0x3C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function UI_Menu_Squad_Invite.UI_Menu_Squad_Invite_C.OnLeavePartyComplete_FD974F5E4C06FACCC7D090880A4861F8
struct UUI_Menu_Squad_Invite_C_OnLeavePartyComplete_FD974F5E4C06FACCC7D090880A4861F8_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ELeavePartyCompletionResult_      Result;                                            // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function UI_Menu_Squad_Invite.UI_Menu_Squad_Invite_C.OnCallFailed_FD974F5E4C06FACCC7D090880A4861F8
struct UUI_Menu_Squad_Invite_C_OnCallFailed_FD974F5E4C06FACCC7D090880A4861F8_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ELeavePartyCompletionResult_      Result;                                            // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Squad_Invite.UI_Menu_Squad_Invite_C.Construct
struct UUI_Menu_Squad_Invite_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Squad_Invite.UI_Menu_Squad_Invite_C.BndEvt__UI_Squad_Invite_Button_Join_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_Menu_Squad_Invite_C_BndEvt__UI_Squad_Invite_Button_Join_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Squad_Invite.UI_Menu_Squad_Invite_C.BndEvt__UI_Squad_Invite_Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UUI_Menu_Squad_Invite_C_BndEvt__UI_Squad_Invite_Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x499 (0x499 - 0x0)
// Function UI_Menu_Squad_Invite.UI_Menu_Squad_Invite_C.ExecuteUbergraph_UI_Menu_Squad_Invite
struct UUI_Menu_Squad_Invite_C_ExecuteUbergraph_UI_Menu_Squad_Invite_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3282[0x4];                                     // Fixing Size After Last Property
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_2;                  // 0x10(0x30)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_2;                      // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EJoinPartyCompletionResult_       K2Node_CustomEvent_result_2;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3283[0x3];                                     // Fixing Size After Last Property
	int32                                        K2Node_CustomEvent_NotApprovedReason;              // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x50(0x30)(HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EJoinPartyCompletionResult_       Temp_byte_Variable;                                // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3284[0x3];                                     // Fixing Size After Last Property
	class UPartyId*                              Temp_object_Variable;                              // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      Temp_struct_Variable;                              // 0x90(0x30)(HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetSourceDisplayName_ReturnValue;         // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xE8(0x18)()
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_1;                  // 0x100(0x30)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_1;                      // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ELeavePartyCompletionResult_      K2Node_CustomEvent_result_1;                       // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3285[0x3];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x13C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3286[0x4];                                     // Fixing Size After Last Property
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId;                    // 0x150(0x30)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId;                        // 0x180(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ELeavePartyCompletionResult_      K2Node_CustomEvent_result;                         // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3287[0x3];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x18C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ELeavePartyCompletionResult_      Temp_byte_Variable_1;                              // 0x19C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3288[0x3];                                     // Fixing Size After Last Property
	class UPartyId*                              Temp_object_Variable_1;                            // 0x1A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      Temp_struct_Variable_1;                            // 0x1A8(0x30)(HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0x1D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_4;   // 0x1E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x1EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1ED(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3289[0x2];                                     // Fixing Size After Last Property
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x1FC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_328C[0x4];                                     // Fixing Size After Last Property
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_5;   // 0x210(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x218(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_1;   // 0x220(0x30)(HasGetValueTypeHash)
	TArray<class UOnlinePartyJoinInfo*>          CallFunc_GetPendingInvites_OutPendingInvitesArray; // 0x250(0x10)(ReferenceParm)
	bool                                         CallFunc_GetPendingInvites_ReturnValue;            // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_328F[0x7];                                     // Fixing Size After Last Property
	class UOnlinePartyJoinInfo*                  CallFunc_Array_Get_Item;                           // 0x268(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3291[0x4];                                     // Fixing Size After Last Property
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x278(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_2;   // 0x280(0x30)(HasGetValueTypeHash)
	class UOnlinePartySubsystemJoinParty*        CallFunc_JoinParty_ReturnValue;                    // 0x2B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_3;        // 0x2B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_3;   // 0x2C0(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3294[0x7];                                     // Fixing Size After Last Property
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_3;                  // 0x2F8(0x30)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_3;                      // 0x328(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EJoinPartyCompletionResult_       K2Node_CustomEvent_result_3;                       // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3297[0x3];                                     // Fixing Size After Last Property
	int32                                        K2Node_CustomEvent_NotApprovedReason_1;            // 0x334(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_4;        // 0x338(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_4;   // 0x340(0x30)(HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_5;        // 0x370(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu; // 0x378(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x380(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_329C[0x7];                                     // Fixing Size After Last Property
	struct FUniqueNetIdRepl                      CallFunc_GetSourceUserId_ReturnValue;              // 0x388(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_RejectInvitation_ReturnValue;             // 0x3B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_329D[0x7];                                     // Fixing Size After Last Property
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_6;        // 0x3C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_1; // 0x3C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x3D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_329E[0x7];                                     // Fixing Size After Last Property
	class UOnlinePartySubsystemLeaveParty*       CallFunc_LeaveParty_ReturnValue;                   // 0x3D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x3E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x3E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_329F[0x6];                                     // Fixing Size After Last Property
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_7;        // 0x3E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x3F0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_5;   // 0x400(0x30)(HasGetValueTypeHash)
	TArray<class UOnlinePartyJoinInfo*>          CallFunc_GetPendingInvites_OutPendingInvitesArray_1; // 0x430(0x10)(ReferenceParm)
	bool                                         CallFunc_GetPendingInvites_ReturnValue_1;          // 0x440(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A0[0x7];                                     // Fixing Size After Last Property
	class UOnlinePartyJoinInfo*                  CallFunc_Array_Get_Item_1;                         // 0x448(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x450(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A1[0x4];                                     // Fixing Size After Last Property
	struct FUniqueNetIdRepl                      CallFunc_GetSourceUserId_ReturnValue_1;            // 0x458(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x488(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RejectInvitation_ReturnValue_1;           // 0x489(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A2[0x2];                                     // Fixing Size After Last Property
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x48C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x490(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A3[0x3];                                     // Fixing Size After Last Property
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x494(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x498(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
