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


// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.SearchUserEntry
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UClientGameInstance*         L_ClientGameInstance                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            L_UserId                                                         (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_UserEntry_C*             CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_GameInstance_C*       CallFunc_GetGameInstance_MyGameIntance                           (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UUserEntry*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClientGameInstance*         CallFunc_GetClientGameInstance_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_UserEntry_C*             K2Node_DynamicCast_AsBP_User_Entry                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_PlayerSlot_C::SearchUserEntry(const struct FUniqueNetIdRepl& UserId, class UClientGameInstance* L_ClientGameInstance, const struct FUniqueNetIdRepl& L_UserId, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_UserEntry_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UBP_PG_GameInstance_C* CallFunc_GetGameInstance_MyGameIntance, class UUserEntry* CallFunc_Array_Get_Item, class UClientGameInstance* CallFunc_GetClientGameInstance_ReturnValue, class UBP_UserEntry_C* K2Node_DynamicCast_AsBP_User_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static auto Func = Class->GetFunction("UI_Menu_Squad_PlayerSlot_C", "SearchUserEntry");

	Params::UUI_Menu_Squad_PlayerSlot_C_SearchUserEntry_Params Parms;

	Parms.UserId = UserId;
	Parms.L_ClientGameInstance = L_ClientGameInstance;
	Parms.L_UserId = L_UserId;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetGameInstance_MyGameIntance = CallFunc_GetGameInstance_MyGameIntance;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetClientGameInstance_ReturnValue = CallFunc_GetClientGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_User_Entry = K2Node_DynamicCast_AsBP_User_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue = CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.Get_Button_Kick_ToolTipWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable_1                                             ()
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Menu_Squad_Help_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            ()

class UWidget* UUI_Menu_Squad_PlayerSlot_C::Get_Button_Kick_ToolTipWidget_0(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue, class UUI_Menu_Squad_Help_C* CallFunc_Create_ReturnValue, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("UI_Menu_Squad_PlayerSlot_C", "Get_Button_Kick_ToolTipWidget_0");

	Params::UUI_Menu_Squad_PlayerSlot_C_Get_Button_Kick_ToolTipWidget_0_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue = CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.Get_Button_Boost_ToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_Menu_Squad_Help_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UUI_Menu_Squad_PlayerSlot_C::Get_Button_Boost_ToolTipWidget_0(class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_Menu_Squad_Help_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("UI_Menu_Squad_PlayerSlot_C", "Get_Button_Boost_ToolTipWidget_0");

	Params::UUI_Menu_Squad_PlayerSlot_C_Get_Button_Boost_ToolTipWidget_0_Params Parms;

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.OnPromotePartyMemberComplete_53C3B59B4135F67BDD8461BBA8B65407
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            MemberId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class EPromoteMemberCompletionResult_Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_PlayerSlot_C::OnPromotePartyMemberComplete_53C3B59B4135F67BDD8461BBA8B65407(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& MemberId, enum class EPromoteMemberCompletionResult_ Result)
{
	static auto Func = Class->GetFunction("UI_Menu_Squad_PlayerSlot_C", "OnPromotePartyMemberComplete_53C3B59B4135F67BDD8461BBA8B65407");

	Params::UUI_Menu_Squad_PlayerSlot_C_OnPromotePartyMemberComplete_53C3B59B4135F67BDD8461BBA8B65407_Params Parms;

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.MemberId = MemberId;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.OnCallFailed_53C3B59B4135F67BDD8461BBA8B65407
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            MemberId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class EPromoteMemberCompletionResult_Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_PlayerSlot_C::OnCallFailed_53C3B59B4135F67BDD8461BBA8B65407(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& MemberId, enum class EPromoteMemberCompletionResult_ Result)
{
	static auto Func = Class->GetFunction("UI_Menu_Squad_PlayerSlot_C", "OnCallFailed_53C3B59B4135F67BDD8461BBA8B65407");

	Params::UUI_Menu_Squad_PlayerSlot_C_OnCallFailed_53C3B59B4135F67BDD8461BBA8B65407_Params Parms;

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.MemberId = MemberId;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.OnLeavePartyComplete_1F83148846FB88D87A25DA9D374E4887
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ELeavePartyCompletionResult_Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_PlayerSlot_C::OnLeavePartyComplete_1F83148846FB88D87A25DA9D374E4887(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, enum class ELeavePartyCompletionResult_ Result)
{
	static auto Func = Class->GetFunction("UI_Menu_Squad_PlayerSlot_C", "OnLeavePartyComplete_1F83148846FB88D87A25DA9D374E4887");

	Params::UUI_Menu_Squad_PlayerSlot_C_OnLeavePartyComplete_1F83148846FB88D87A25DA9D374E4887_Params Parms;

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.OnCallFailed_1F83148846FB88D87A25DA9D374E4887
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ELeavePartyCompletionResult_Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_PlayerSlot_C::OnCallFailed_1F83148846FB88D87A25DA9D374E4887(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, enum class ELeavePartyCompletionResult_ Result)
{
	static auto Func = Class->GetFunction("UI_Menu_Squad_PlayerSlot_C", "OnCallFailed_1F83148846FB88D87A25DA9D374E4887");

	Params::UUI_Menu_Squad_PlayerSlot_C_OnCallFailed_1F83148846FB88D87A25DA9D374E4887_Params Parms;

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.OnKickPartyMemberComplete_93FB9404410172EB228B94ABBFF55B60
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            MemberId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class EKickMemberCompletionResult_Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_PlayerSlot_C::OnKickPartyMemberComplete_93FB9404410172EB228B94ABBFF55B60(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& MemberId, enum class EKickMemberCompletionResult_ Result)
{
	static auto Func = Class->GetFunction("UI_Menu_Squad_PlayerSlot_C", "OnKickPartyMemberComplete_93FB9404410172EB228B94ABBFF55B60");

	Params::UUI_Menu_Squad_PlayerSlot_C_OnKickPartyMemberComplete_93FB9404410172EB228B94ABBFF55B60_Params Parms;

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.MemberId = MemberId;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.OnCallFailed_93FB9404410172EB228B94ABBFF55B60
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            MemberId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class EKickMemberCompletionResult_Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_PlayerSlot_C::OnCallFailed_93FB9404410172EB228B94ABBFF55B60(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& MemberId, enum class EKickMemberCompletionResult_ Result)
{
	static auto Func = Class->GetFunction("UI_Menu_Squad_PlayerSlot_C", "OnCallFailed_93FB9404410172EB228B94ABBFF55B60");

	Params::UUI_Menu_Squad_PlayerSlot_C_OnCallFailed_93FB9404410172EB228B94ABBFF55B60_Params Parms;

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.MemberId = MemberId;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.BndEvt__UI_Squad_PlayerSlot_Button_Invite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Squad_PlayerSlot_C::BndEvt__UI_Squad_PlayerSlot_Button_Invite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_Menu_Squad_PlayerSlot_C", "BndEvt__UI_Squad_PlayerSlot_Button_Invite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Menu_Squad_PlayerSlot_C_BndEvt__UI_Squad_PlayerSlot_Button_Invite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.ParseUserData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUI_Menu_Squad_PlayerSlot_C::ParseUserData(const struct FUniqueNetIdRepl& UserId)
{
	static auto Func = Class->GetFunction("UI_Menu_Squad_PlayerSlot_C", "ParseUserData");

	Params::UUI_Menu_Squad_PlayerSlot_C_ParseUserData_Params Parms;

	Parms.UserId = UserId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.BndEvt__UI_Squad_PlayerSlot_Button_Boost_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Squad_PlayerSlot_C::BndEvt__UI_Squad_PlayerSlot_Button_Boost_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_Menu_Squad_PlayerSlot_C", "BndEvt__UI_Squad_PlayerSlot_Button_Boost_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Menu_Squad_PlayerSlot_C_BndEvt__UI_Squad_PlayerSlot_Button_Boost_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.BndEvt__UI_Squad_PlayerSlot_Button_Kick_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Squad_PlayerSlot_C::BndEvt__UI_Squad_PlayerSlot_Button_Kick_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_Menu_Squad_PlayerSlot_C", "BndEvt__UI_Squad_PlayerSlot_Button_Kick_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Menu_Squad_PlayerSlot_C_BndEvt__UI_Squad_PlayerSlot_Button_Kick_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.ClearUser
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Menu_Squad_PlayerSlot_C::ClearUser()
{
	static auto Func = Class->GetFunction("UI_Menu_Squad_PlayerSlot_C", "ClearUser");

	Params::UUI_Menu_Squad_PlayerSlot_C_ClearUser_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.OnGetAvatar_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Menu_Squad_PlayerSlot_C::OnGetAvatar_Event()
{
	static auto Func = Class->GetFunction("UI_Menu_Squad_PlayerSlot_C", "OnGetAvatar_Event");

	Params::UUI_Menu_Squad_PlayerSlot_C_OnGetAvatar_Event_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Menu_Squad_PlayerSlot_C::Construct()
{
	static auto Func = Class->GetFunction("UI_Menu_Squad_PlayerSlot_C", "Construct");

	Params::UUI_Menu_Squad_PlayerSlot_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad_PlayerSlot.UI_Menu_Squad_PlayerSlot_C.ExecuteUbergraph_UI_Menu_Squad_PlayerSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_4                                 (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_4                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_MemberId_2                                    (HasGetValueTypeHash)
// enum class EPromoteMemberCompletionResult_K2Node_CustomEvent_result_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPromoteMemberCompletionResult_Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            Temp_struct_Variable                                             (HasGetValueTypeHash)
// class UPartyId*                    Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            Temp_struct_Variable_1                                           (HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_3                                 (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_3                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ELeavePartyCompletionResult_K2Node_CustomEvent_result_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_2                                 (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_2                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ELeavePartyCompletionResult_K2Node_CustomEvent_result_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ELeavePartyCompletionResult_Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPartyId*                    Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            Temp_struct_Variable_2                                           (HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_1                                 (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_1                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_MemberId_1                                    (HasGetValueTypeHash)
// enum class EKickMemberCompletionResult_K2Node_CustomEvent_result_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId                                   (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_MemberId                                      (HasGetValueTypeHash)
// enum class EKickMemberCompletionResult_K2Node_CustomEvent_result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EKickMemberCompletionResult_Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            Temp_struct_Variable_3                                           (HasGetValueTypeHash)
// class UPartyId*                    Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            Temp_struct_Variable_4                                           (HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UOnlineIdentitySubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Menu_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_5                                 (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_5                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_MemberId_3                                    (HasGetValueTypeHash)
// enum class EPromoteMemberCompletionResult_K2Node_CustomEvent_result_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_UserId                                        (HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_1                  (HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_2                  (HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_3                  (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_4                  (HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_5                  (HasGetValueTypeHash)
// bool                               CallFunc_IsLocalUserLeader_IsLeader                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalUserLeader_IsLeader_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalUserLeader_IsLeader_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_7                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_6                  (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_8                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_7                  (HasGetValueTypeHash)
// class UBlueprintPartyMember*       CallFunc_GetPartyMember_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// bool                               CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_9                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_8                  (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerNickname_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         ()
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_4                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystemPromoteMember*CallFunc_PromoteMember_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystemLeaveParty*CallFunc_LeaveParty_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystemKickMember*CallFunc_KickMember_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_5                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMemberLeader_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_PlayerSlot_C::ExecuteUbergraph_UI_Menu_Squad_PlayerSlot(int32 EntryPoint, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_4, class UPartyId* K2Node_CustomEvent_PartyId_4, const struct FUniqueNetIdRepl& K2Node_CustomEvent_MemberId_2, enum class EPromoteMemberCompletionResult_ K2Node_CustomEvent_result_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPromoteMemberCompletionResult_ Temp_byte_Variable, const struct FUniqueNetIdRepl& Temp_struct_Variable, class UPartyId* Temp_object_Variable, const struct FUniqueNetIdRepl& Temp_struct_Variable_1, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_3, class UPartyId* K2Node_CustomEvent_PartyId_3, enum class ELeavePartyCompletionResult_ K2Node_CustomEvent_result_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_2, class UPartyId* K2Node_CustomEvent_PartyId_2, enum class ELeavePartyCompletionResult_ K2Node_CustomEvent_result_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class ELeavePartyCompletionResult_ Temp_byte_Variable_1, class UPartyId* Temp_object_Variable_1, const struct FUniqueNetIdRepl& Temp_struct_Variable_2, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_1, class UPartyId* K2Node_CustomEvent_PartyId_1, const struct FUniqueNetIdRepl& K2Node_CustomEvent_MemberId_1, enum class EKickMemberCompletionResult_ K2Node_CustomEvent_result_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId, class UPartyId* K2Node_CustomEvent_PartyId, const struct FUniqueNetIdRepl& K2Node_CustomEvent_MemberId, enum class EKickMemberCompletionResult_ K2Node_CustomEvent_result, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, enum class EKickMemberCompletionResult_ Temp_byte_Variable_2, const struct FUniqueNetIdRepl& Temp_struct_Variable_3, class UPartyId* Temp_object_Variable_2, const struct FUniqueNetIdRepl& Temp_struct_Variable_4, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UOnlineIdentitySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_5, class UPartyId* K2Node_CustomEvent_PartyId_5, const struct FUniqueNetIdRepl& K2Node_CustomEvent_MemberId_3, enum class EPromoteMemberCompletionResult_ K2Node_CustomEvent_result_5, const struct FUniqueNetIdRepl& K2Node_CustomEvent_UserId, enum class ESlateVisibility Temp_byte_Variable_7, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_3, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_1, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_2, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_4, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool Temp_bool_Variable_2, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_5, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_6, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_4, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_5, bool CallFunc_IsLocalUserLeader_IsLeader, bool CallFunc_IsLocalUserLeader_IsLeader_1, bool CallFunc_IsLocalUserLeader_IsLeader_2, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_7, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_6, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_8, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_7, class UBlueprintPartyMember* CallFunc_GetPartyMember_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue, bool CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_9, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_8, bool CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_3, const class FString& CallFunc_GetPlayerNickname_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, class UOnlinePartySubsystemPromoteMember* CallFunc_PromoteMember_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue_3, class UOnlinePartySubsystemLeaveParty* CallFunc_LeaveParty_ReturnValue, class UOnlinePartySubsystemKickMember* CallFunc_KickMember_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, enum class ESlateVisibility Temp_byte_Variable_8, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsMemberLeader_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2)
{
	static auto Func = Class->GetFunction("UI_Menu_Squad_PlayerSlot_C", "ExecuteUbergraph_UI_Menu_Squad_PlayerSlot");

	Params::UUI_Menu_Squad_PlayerSlot_C_ExecuteUbergraph_UI_Menu_Squad_PlayerSlot_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_LocalUserId_4 = K2Node_CustomEvent_LocalUserId_4;
	Parms.K2Node_CustomEvent_PartyId_4 = K2Node_CustomEvent_PartyId_4;
	Parms.K2Node_CustomEvent_MemberId_2 = K2Node_CustomEvent_MemberId_2;
	Parms.K2Node_CustomEvent_result_4 = K2Node_CustomEvent_result_4;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.K2Node_CustomEvent_LocalUserId_3 = K2Node_CustomEvent_LocalUserId_3;
	Parms.K2Node_CustomEvent_PartyId_3 = K2Node_CustomEvent_PartyId_3;
	Parms.K2Node_CustomEvent_result_3 = K2Node_CustomEvent_result_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_LocalUserId_2 = K2Node_CustomEvent_LocalUserId_2;
	Parms.K2Node_CustomEvent_PartyId_2 = K2Node_CustomEvent_PartyId_2;
	Parms.K2Node_CustomEvent_result_2 = K2Node_CustomEvent_result_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.K2Node_CustomEvent_LocalUserId_1 = K2Node_CustomEvent_LocalUserId_1;
	Parms.K2Node_CustomEvent_PartyId_1 = K2Node_CustomEvent_PartyId_1;
	Parms.K2Node_CustomEvent_MemberId_1 = K2Node_CustomEvent_MemberId_1;
	Parms.K2Node_CustomEvent_result_1 = K2Node_CustomEvent_result_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_LocalUserId = K2Node_CustomEvent_LocalUserId;
	Parms.K2Node_CustomEvent_PartyId = K2Node_CustomEvent_PartyId;
	Parms.K2Node_CustomEvent_MemberId = K2Node_CustomEvent_MemberId;
	Parms.K2Node_CustomEvent_result = K2Node_CustomEvent_result;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu = K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.K2Node_CustomEvent_LocalUserId_5 = K2Node_CustomEvent_LocalUserId_5;
	Parms.K2Node_CustomEvent_PartyId_5 = K2Node_CustomEvent_PartyId_5;
	Parms.K2Node_CustomEvent_MemberId_3 = K2Node_CustomEvent_MemberId_3;
	Parms.K2Node_CustomEvent_result_5 = K2Node_CustomEvent_result_5;
	Parms.K2Node_CustomEvent_UserId = K2Node_CustomEvent_UserId;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_1 = CallFunc_GetControllerUniqueNetId_ReturnValue_1;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_2 = CallFunc_GetControllerUniqueNetId_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_3 = CallFunc_GetControllerUniqueNetId_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = CallFunc_GetPlayerController_ReturnValue_6;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_4 = CallFunc_GetControllerUniqueNetId_ReturnValue_4;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_5 = CallFunc_GetControllerUniqueNetId_ReturnValue_5;
	Parms.CallFunc_IsLocalUserLeader_IsLeader = CallFunc_IsLocalUserLeader_IsLeader;
	Parms.CallFunc_IsLocalUserLeader_IsLeader_1 = CallFunc_IsLocalUserLeader_IsLeader_1;
	Parms.CallFunc_IsLocalUserLeader_IsLeader_2 = CallFunc_IsLocalUserLeader_IsLeader_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_7 = CallFunc_GetPlayerController_ReturnValue_7;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_6 = CallFunc_GetControllerUniqueNetId_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_8 = CallFunc_GetPlayerController_ReturnValue_8;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_7 = CallFunc_GetControllerUniqueNetId_ReturnValue_7;
	Parms.CallFunc_GetPartyMember_ReturnValue = CallFunc_GetPartyMember_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue = CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue;
	Parms.CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_1 = CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_2 = CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetPlayerController_ReturnValue_9 = CallFunc_GetPlayerController_ReturnValue_9;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_8 = CallFunc_GetControllerUniqueNetId_ReturnValue_8;
	Parms.CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_3 = CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_3;
	Parms.CallFunc_GetPlayerNickname_ReturnValue = CallFunc_GetPlayerNickname_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_4 = CallFunc_GetGameInstanceSubsystem_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_PromoteMember_ReturnValue = CallFunc_PromoteMember_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_LeaveParty_ReturnValue = CallFunc_LeaveParty_ReturnValue;
	Parms.CallFunc_KickMember_ReturnValue = CallFunc_KickMember_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_5 = CallFunc_GetGameInstanceSubsystem_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsMemberLeader_ReturnValue = CallFunc_IsMemberLeader_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
