#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C
// (None)

class UClass* UUI_Menu_Squad_Friend_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Menu_Squad_Friend_C");

	return Clss;
}


// UI_Menu_Squad_Friend_C UI_Menu_Squad_Friend.Default__UI_Menu_Squad_Friend_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Menu_Squad_Friend_C* UUI_Menu_Squad_Friend_C::GetDefaultObj()
{
	static class UUI_Menu_Squad_Friend_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Menu_Squad_Friend_C*>(UUI_Menu_Squad_Friend_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_Friend_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_Friend_C", "BP_OnItemExpansionChanged");

	Params::UUI_Menu_Squad_Friend_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_Friend_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_Friend_C", "BP_OnItemSelectionChanged");

	Params::UUI_Menu_Squad_Friend_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.BndEvt__UI_Squad_Friend_Button_Invite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Squad_Friend_C::BndEvt__UI_Squad_Friend_Button_Invite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_Friend_C", "BndEvt__UI_Squad_Friend_Button_Invite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Menu_Squad_Friend_C_BndEvt__UI_Squad_Friend_Button_Invite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_Friend_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_Friend_C", "OnListItemObjectSet");

	Params::UUI_Menu_Squad_Friend_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Menu_Squad_Friend_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_Friend_C", "BP_OnEntryReleased");

	Params::UUI_Menu_Squad_Friend_C_BP_OnEntryReleased_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.OnPartyMemberJoined_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            MemberId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUI_Menu_Squad_Friend_C::OnPartyMemberJoined_Event(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& MemberId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_Friend_C", "OnPartyMemberJoined_Event");

	Params::UUI_Menu_Squad_Friend_C_OnPartyMemberJoined_Event_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.MemberId = MemberId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.OnPartyMemberExited_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            MemberId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class EMemberExitedReason_    Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_Friend_C::OnPartyMemberExited_Event(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& MemberId, enum class EMemberExitedReason_ Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_Friend_C", "OnPartyMemberExited_Event");

	Params::UUI_Menu_Squad_Friend_C_OnPartyMemberExited_Event_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.MemberId = MemberId;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.OnPartyJoined_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_Friend_C::OnPartyJoined_Event(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_Friend_C", "OnPartyJoined_Event");

	Params::UUI_Menu_Squad_Friend_C_OnPartyJoined_Event_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.OnPartyExited_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_Friend_C::OnPartyExited_Event(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_Friend_C", "OnPartyExited_Event");

	Params::UUI_Menu_Squad_Friend_C_OnPartyExited_Event_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.OnGetAvatar_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Menu_Squad_Friend_C::OnGetAvatar_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_Friend_C", "OnGetAvatar_Event");

	Params::UUI_Menu_Squad_Friend_C_OnGetAvatar_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.OnPresenceUpdated_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Menu_Squad_Friend_C::OnPresenceUpdated_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_Friend_C", "OnPresenceUpdated_Event");

	Params::UUI_Menu_Squad_Friend_C_OnPresenceUpdated_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad_Friend.UI_Menu_Squad_Friend_C.ExecuteUbergraph_UI_Menu_Squad_Friend
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_UserEntry_C*             K2Node_DynamicCast_AsBP_User_Entry                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Menu_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_3                                 (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_3                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_MemberId_1                                    (HasGetValueTypeHash)
// class UOnlineFriendsSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_2                                 (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_2                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_MemberId                                      (HasGetValueTypeHash)
// enum class EMemberExitedReason_    K2Node_CustomEvent_Reason                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_1                                 (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_1                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UBlueprintPartyMember*>CallFunc_GetPartyMembers_OutPartyMembersArray                    (ReferenceParm)
// bool                               CallFunc_GetPartyMembers_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlueprintPartyMember*       CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetUserId_ReturnValue                                   (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId                                   (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_4                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UOnlineFriendRef*            CallFunc_GetFriend_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Menu_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_1              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_5                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RetriggerableDelay_Duration_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_Friend_C::ExecuteUbergraph_UI_Menu_Squad_Friend(int32 EntryPoint, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject, class UBP_UserEntry_C* K2Node_DynamicCast_AsBP_User_Entry, bool K2Node_DynamicCast_bSuccess, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess_1, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_3, class UPartyId* K2Node_CustomEvent_PartyId_3, const struct FUniqueNetIdRepl& K2Node_CustomEvent_MemberId_1, class UOnlineFriendsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_2, class UPartyId* K2Node_CustomEvent_PartyId_2, const struct FUniqueNetIdRepl& K2Node_CustomEvent_MemberId, enum class EMemberExitedReason_ K2Node_CustomEvent_Reason, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_1, class UPartyId* K2Node_CustomEvent_PartyId_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, TArray<class UBlueprintPartyMember*>& CallFunc_GetPartyMembers_OutPartyMembersArray, bool CallFunc_GetPartyMembers_ReturnValue, class UBlueprintPartyMember* CallFunc_Array_Get_Item, const struct FUniqueNetIdRepl& CallFunc_GetUserId_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId, class UPartyId* K2Node_CustomEvent_PartyId, double CallFunc_Add_DoubleDouble_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess_2, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UOnlineFriendRef* CallFunc_GetFriend_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_1, bool K2Node_DynamicCast_bSuccess_3, bool K2Node_SwitchEnum_CmpSuccess, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, float CallFunc_RetriggerableDelay_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_Friend_C", "ExecuteUbergraph_UI_Menu_Squad_Friend");

	Params::UUI_Menu_Squad_Friend_C_ExecuteUbergraph_UI_Menu_Squad_Friend_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_DynamicCast_AsBP_User_Entry = K2Node_DynamicCast_AsBP_User_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu = K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_LocalUserId_3 = K2Node_CustomEvent_LocalUserId_3;
	Parms.K2Node_CustomEvent_PartyId_3 = K2Node_CustomEvent_PartyId_3;
	Parms.K2Node_CustomEvent_MemberId_1 = K2Node_CustomEvent_MemberId_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue = CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue;
	Parms.K2Node_CustomEvent_LocalUserId_2 = K2Node_CustomEvent_LocalUserId_2;
	Parms.K2Node_CustomEvent_PartyId_2 = K2Node_CustomEvent_PartyId_2;
	Parms.K2Node_CustomEvent_MemberId = K2Node_CustomEvent_MemberId;
	Parms.K2Node_CustomEvent_Reason = K2Node_CustomEvent_Reason;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_LocalUserId_1 = K2Node_CustomEvent_LocalUserId_1;
	Parms.K2Node_CustomEvent_PartyId_1 = K2Node_CustomEvent_PartyId_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.CallFunc_GetPartyMembers_OutPartyMembersArray = CallFunc_GetPartyMembers_OutPartyMembersArray;
	Parms.CallFunc_GetPartyMembers_ReturnValue = CallFunc_GetPartyMembers_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetUserId_ReturnValue = CallFunc_GetUserId_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_1 = CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_2 = CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_LocalUserId = K2Node_CustomEvent_LocalUserId;
	Parms.K2Node_CustomEvent_PartyId = K2Node_CustomEvent_PartyId;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_4 = CallFunc_GetGameInstanceSubsystem_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetFriend_ReturnValue = CallFunc_GetFriend_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_1 = K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_5 = CallFunc_GetGameInstanceSubsystem_ReturnValue_5;
	Parms.CallFunc_RetriggerableDelay_Duration_ImplicitCast = CallFunc_RetriggerableDelay_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


