#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function UI_Menu_Squad_Invite.UI_Menu_Squad_Invite_C.OnJoinPartyComplete_EB2E789049330CFB47C3B2B5D301B0C4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EJoinPartyCompletionResult_Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NotApprovedReason                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_Invite_C::OnJoinPartyComplete_EB2E789049330CFB47C3B2B5D301B0C4(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, enum class EJoinPartyCompletionResult_ Result, int32 NotApprovedReason)
{
	static auto Func = Class->GetFunction("UI_Menu_Squad_Invite_C", "OnJoinPartyComplete_EB2E789049330CFB47C3B2B5D301B0C4");

	Params::UUI_Menu_Squad_Invite_C_OnJoinPartyComplete_EB2E789049330CFB47C3B2B5D301B0C4_Params Parms;

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.Result = Result;
	Parms.NotApprovedReason = NotApprovedReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad_Invite.UI_Menu_Squad_Invite_C.OnCallFailed_EB2E789049330CFB47C3B2B5D301B0C4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EJoinPartyCompletionResult_Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NotApprovedReason                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_Invite_C::OnCallFailed_EB2E789049330CFB47C3B2B5D301B0C4(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, enum class EJoinPartyCompletionResult_ Result, int32 NotApprovedReason)
{
	static auto Func = Class->GetFunction("UI_Menu_Squad_Invite_C", "OnCallFailed_EB2E789049330CFB47C3B2B5D301B0C4");

	Params::UUI_Menu_Squad_Invite_C_OnCallFailed_EB2E789049330CFB47C3B2B5D301B0C4_Params Parms;

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.Result = Result;
	Parms.NotApprovedReason = NotApprovedReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad_Invite.UI_Menu_Squad_Invite_C.OnLeavePartyComplete_FD974F5E4C06FACCC7D090880A4861F8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ELeavePartyCompletionResult_Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_Invite_C::OnLeavePartyComplete_FD974F5E4C06FACCC7D090880A4861F8(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, enum class ELeavePartyCompletionResult_ Result)
{
	static auto Func = Class->GetFunction("UI_Menu_Squad_Invite_C", "OnLeavePartyComplete_FD974F5E4C06FACCC7D090880A4861F8");

	Params::UUI_Menu_Squad_Invite_C_OnLeavePartyComplete_FD974F5E4C06FACCC7D090880A4861F8_Params Parms;

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad_Invite.UI_Menu_Squad_Invite_C.OnCallFailed_FD974F5E4C06FACCC7D090880A4861F8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ELeavePartyCompletionResult_Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_Invite_C::OnCallFailed_FD974F5E4C06FACCC7D090880A4861F8(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, enum class ELeavePartyCompletionResult_ Result)
{
	static auto Func = Class->GetFunction("UI_Menu_Squad_Invite_C", "OnCallFailed_FD974F5E4C06FACCC7D090880A4861F8");

	Params::UUI_Menu_Squad_Invite_C_OnCallFailed_FD974F5E4C06FACCC7D090880A4861F8_Params Parms;

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad_Invite.UI_Menu_Squad_Invite_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Menu_Squad_Invite_C::Construct()
{
	static auto Func = Class->GetFunction("UI_Menu_Squad_Invite_C", "Construct");

	Params::UUI_Menu_Squad_Invite_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad_Invite.UI_Menu_Squad_Invite_C.BndEvt__UI_Squad_Invite_Button_Join_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Squad_Invite_C::BndEvt__UI_Squad_Invite_Button_Join_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_Menu_Squad_Invite_C", "BndEvt__UI_Squad_Invite_Button_Join_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Menu_Squad_Invite_C_BndEvt__UI_Squad_Invite_Button_Join_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad_Invite.UI_Menu_Squad_Invite_C.BndEvt__UI_Squad_Invite_Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Squad_Invite_C::BndEvt__UI_Squad_Invite_Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_Menu_Squad_Invite_C", "BndEvt__UI_Squad_Invite_Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Menu_Squad_Invite_C_BndEvt__UI_Squad_Invite_Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad_Invite.UI_Menu_Squad_Invite_C.ExecuteUbergraph_UI_Menu_Squad_Invite
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_2                                 (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_2                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EJoinPartyCompletionResult_K2Node_CustomEvent_result_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NotApprovedReason                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EJoinPartyCompletionResult_Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPartyId*                    Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            Temp_struct_Variable                                             (HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSourceDisplayName_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_1                                 (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_1                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ELeavePartyCompletionResult_K2Node_CustomEvent_result_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId                                   (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ELeavePartyCompletionResult_K2Node_CustomEvent_result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ELeavePartyCompletionResult_Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPartyId*                    Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            Temp_struct_Variable_1                                           (HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_4                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_5                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_1                  (HasGetValueTypeHash)
// TArray<class UOnlinePartyJoinInfo*>CallFunc_GetPendingInvites_OutPendingInvitesArray                (ReferenceParm)
// bool                               CallFunc_GetPendingInvites_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartyJoinInfo*        CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_2                  (HasGetValueTypeHash)
// class UOnlinePartySubsystemJoinParty*CallFunc_JoinParty_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_3                  (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_3                                 (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_3                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EJoinPartyCompletionResult_K2Node_CustomEvent_result_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NotApprovedReason_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_4                  (HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Menu_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetSourceUserId_ReturnValue                             (HasGetValueTypeHash)
// bool                               CallFunc_RejectInvitation_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Menu_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_1              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystemLeaveParty*CallFunc_LeaveParty_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_7                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_5                  (HasGetValueTypeHash)
// TArray<class UOnlinePartyJoinInfo*>CallFunc_GetPendingInvites_OutPendingInvitesArray_1              (ReferenceParm)
// bool                               CallFunc_GetPendingInvites_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartyJoinInfo*        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetSourceUserId_ReturnValue_1                           (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RejectInvitation_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_Invite_C::ExecuteUbergraph_UI_Menu_Squad_Invite(int32 EntryPoint, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_2, class UPartyId* K2Node_CustomEvent_PartyId_2, enum class EJoinPartyCompletionResult_ K2Node_CustomEvent_result_2, int32 K2Node_CustomEvent_NotApprovedReason, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, int32 Temp_int_Variable, enum class EJoinPartyCompletionResult_ Temp_byte_Variable, class UPartyId* Temp_object_Variable, const struct FUniqueNetIdRepl& Temp_struct_Variable, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, const class FString& CallFunc_GetSourceDisplayName_ReturnValue, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_1, class UPartyId* K2Node_CustomEvent_PartyId_1, enum class ELeavePartyCompletionResult_ K2Node_CustomEvent_result_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId, class UPartyId* K2Node_CustomEvent_PartyId, enum class ELeavePartyCompletionResult_ K2Node_CustomEvent_result, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class ELeavePartyCompletionResult_ Temp_byte_Variable_1, class UPartyId* Temp_object_Variable_1, const struct FUniqueNetIdRepl& Temp_struct_Variable_1, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_1, TArray<class UOnlinePartyJoinInfo*>& CallFunc_GetPendingInvites_OutPendingInvitesArray, bool CallFunc_GetPendingInvites_ReturnValue, class UOnlinePartyJoinInfo* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_2, class UOnlinePartySubsystemJoinParty* CallFunc_JoinParty_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_3, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_3, class UPartyId* K2Node_CustomEvent_PartyId_3, enum class EJoinPartyCompletionResult_ K2Node_CustomEvent_result_3, int32 K2Node_CustomEvent_NotApprovedReason_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_4, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_4, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_5, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetSourceUserId_ReturnValue, bool CallFunc_RejectInvitation_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_6, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_1, bool K2Node_DynamicCast_bSuccess_1, class UOnlinePartySubsystemLeaveParty* CallFunc_LeaveParty_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_5, TArray<class UOnlinePartyJoinInfo*>& CallFunc_GetPendingInvites_OutPendingInvitesArray_1, bool CallFunc_GetPendingInvites_ReturnValue_1, class UOnlinePartyJoinInfo* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, const struct FUniqueNetIdRepl& CallFunc_GetSourceUserId_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_RejectInvitation_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("UI_Menu_Squad_Invite_C", "ExecuteUbergraph_UI_Menu_Squad_Invite");

	Params::UUI_Menu_Squad_Invite_C_ExecuteUbergraph_UI_Menu_Squad_Invite_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CustomEvent_LocalUserId_2 = K2Node_CustomEvent_LocalUserId_2;
	Parms.K2Node_CustomEvent_PartyId_2 = K2Node_CustomEvent_PartyId_2;
	Parms.K2Node_CustomEvent_result_2 = K2Node_CustomEvent_result_2;
	Parms.K2Node_CustomEvent_NotApprovedReason = K2Node_CustomEvent_NotApprovedReason;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetSourceDisplayName_ReturnValue = CallFunc_GetSourceDisplayName_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_CustomEvent_LocalUserId_1 = K2Node_CustomEvent_LocalUserId_1;
	Parms.K2Node_CustomEvent_PartyId_1 = K2Node_CustomEvent_PartyId_1;
	Parms.K2Node_CustomEvent_result_1 = K2Node_CustomEvent_result_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_LocalUserId = K2Node_CustomEvent_LocalUserId;
	Parms.K2Node_CustomEvent_PartyId = K2Node_CustomEvent_PartyId;
	Parms.K2Node_CustomEvent_result = K2Node_CustomEvent_result;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_4 = CallFunc_GetGameInstanceSubsystem_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_5 = CallFunc_GetGameInstanceSubsystem_ReturnValue_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_1 = CallFunc_GetControllerUniqueNetId_ReturnValue_1;
	Parms.CallFunc_GetPendingInvites_OutPendingInvitesArray = CallFunc_GetPendingInvites_OutPendingInvitesArray;
	Parms.CallFunc_GetPendingInvites_ReturnValue = CallFunc_GetPendingInvites_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_2 = CallFunc_GetControllerUniqueNetId_ReturnValue_2;
	Parms.CallFunc_JoinParty_ReturnValue = CallFunc_JoinParty_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_3 = CallFunc_GetControllerUniqueNetId_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_LocalUserId_3 = K2Node_CustomEvent_LocalUserId_3;
	Parms.K2Node_CustomEvent_PartyId_3 = K2Node_CustomEvent_PartyId_3;
	Parms.K2Node_CustomEvent_result_3 = K2Node_CustomEvent_result_3;
	Parms.K2Node_CustomEvent_NotApprovedReason_1 = K2Node_CustomEvent_NotApprovedReason_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_4 = CallFunc_GetControllerUniqueNetId_ReturnValue_4;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu = K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSourceUserId_ReturnValue = CallFunc_GetSourceUserId_ReturnValue;
	Parms.CallFunc_RejectInvitation_ReturnValue = CallFunc_RejectInvitation_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = CallFunc_GetPlayerController_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_1 = K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_LeaveParty_ReturnValue = CallFunc_LeaveParty_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_7 = CallFunc_GetPlayerController_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_5 = CallFunc_GetControllerUniqueNetId_ReturnValue_5;
	Parms.CallFunc_GetPendingInvites_OutPendingInvitesArray_1 = CallFunc_GetPendingInvites_OutPendingInvitesArray_1;
	Parms.CallFunc_GetPendingInvites_ReturnValue_1 = CallFunc_GetPendingInvites_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetSourceUserId_ReturnValue_1 = CallFunc_GetSourceUserId_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_RejectInvitation_ReturnValue_1 = CallFunc_RejectInvitation_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
