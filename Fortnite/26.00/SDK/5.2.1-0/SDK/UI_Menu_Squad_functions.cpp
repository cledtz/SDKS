#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Menu_Squad.UI_Menu_Squad_C
// (None)

class UClass* UUI_Menu_Squad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Menu_Squad_C");

	return Clss;
}


// UI_Menu_Squad_C UI_Menu_Squad.Default__UI_Menu_Squad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Menu_Squad_C* UUI_Menu_Squad_C::GetDefaultObj()
{
	static class UUI_Menu_Squad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Menu_Squad_C*>(UUI_Menu_Squad_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Menu_Squad.UI_Menu_Squad_C.Show Invite to Squad
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PG_PlayerController_Menu_C*L_PlayerController                                               (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UOnlinePartyJoinInfo*>CallFunc_GetPendingInvites_OutPendingInvitesArray                (ReferenceParm)
// bool                               CallFunc_GetPendingInvites_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Menu_Squad_Invite_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Menu_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_C::Show_Invite_to_Squad(class UBP_PG_PlayerController_Menu_C* L_PlayerController, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<class UOnlinePartyJoinInfo*>& CallFunc_GetPendingInvites_OutPendingInvitesArray, bool CallFunc_GetPendingInvites_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UUI_Menu_Squad_Invite_C* CallFunc_Create_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "Show Invite to Squad");

	Params::UUI_Menu_Squad_C_Show_Invite_to_Squad_Params Parms{};

	Parms.L_PlayerController = L_PlayerController;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetPendingInvites_OutPendingInvitesArray = CallFunc_GetPendingInvites_OutPendingInvitesArray;
	Parms.CallFunc_GetPendingInvites_ReturnValue = CallFunc_GetPendingInvites_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu = K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.SortFriendsByStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               L_Continue                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             L_FriendsList                                                    (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             CallFunc_GetListItems_ReturnValue                                (ConstParm, ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_UserEntry_C*             K2Node_DynamicCast_AsBP_User_Entry                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_UserEntry_C*             K2Node_DynamicCast_AsBP_User_Entry_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_C::SortFriendsByStatus(bool L_Continue, const TArray<class UObject*>& L_FriendsList, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class UObject* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class UBP_UserEntry_C* K2Node_DynamicCast_AsBP_User_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UObject* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, class UBP_UserEntry_C* K2Node_DynamicCast_AsBP_User_Entry_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "SortFriendsByStatus");

	Params::UUI_Menu_Squad_C_SortFriendsByStatus_Params Parms{};

	Parms.L_Continue = L_Continue;
	Parms.L_FriendsList = L_FriendsList;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetListItems_ReturnValue = CallFunc_GetListItems_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_User_Entry = K2Node_DynamicCast_AsBP_User_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_User_Entry_1 = K2Node_DynamicCast_AsBP_User_Entry_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = CallFunc_EqualEqual_ByteByte_ReturnValue_6;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_7 = CallFunc_EqualEqual_ByteByte_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_8 = CallFunc_EqualEqual_ByteByte_ReturnValue_8;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_9 = CallFunc_EqualEqual_ByteByte_ReturnValue_9;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.FillFriendList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBP_UserEntry_C*>     L_FriendList                                                     (Edit, BlueprintVisible)
// class UBP_UserEntry_C*             L_UserEntry                                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClientGameInstance*         L_ClientGameInstance                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlineFriendsSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UOnlineFriendRef*>    CallFunc_GetFriendsList_OutFriends                               (ReferenceParm)
// bool                               CallFunc_GetFriendsList_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_UserEntry_C*             CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UOnlineFriendRef*            CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineUserPresenceData     CallFunc_GetPresence_ReturnValue                                 (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetUserId_ReturnValue                                   (HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetUserId_ReturnValue_1                                 (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_GameInstance_C*       CallFunc_GetGameInstance_MyGameIntance                           (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClientGameInstance*         CallFunc_GetClientGameInstance_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUserEntry*                  CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_UserEntry_C*             K2Node_DynamicCast_AsBP_User_Entry                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_C::FillFriendList(const TArray<class UBP_UserEntry_C*>& L_FriendList, class UBP_UserEntry_C* L_UserEntry, class UClientGameInstance* L_ClientGameInstance, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UOnlineFriendsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, TArray<class UOnlineFriendRef*>& CallFunc_GetFriendsList_OutFriends, bool CallFunc_GetFriendsList_ReturnValue, class UBP_UserEntry_C* CallFunc_SpawnObject_ReturnValue, class UOnlineFriendRef* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FOnlineUserPresenceData& CallFunc_GetPresence_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUserId_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUserId_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsValid_ReturnValue, class UBP_PG_GameInstance_C* CallFunc_GetGameInstance_MyGameIntance, class UClientGameInstance* CallFunc_GetClientGameInstance_ReturnValue, class UUserEntry* CallFunc_Array_Get_Item_1, class UBP_UserEntry_C* K2Node_DynamicCast_AsBP_User_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "FillFriendList");

	Params::UUI_Menu_Squad_C_FillFriendList_Params Parms{};

	Parms.L_FriendList = L_FriendList;
	Parms.L_UserEntry = L_UserEntry;
	Parms.L_ClientGameInstance = L_ClientGameInstance;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetFriendsList_OutFriends = CallFunc_GetFriendsList_OutFriends;
	Parms.CallFunc_GetFriendsList_ReturnValue = CallFunc_GetFriendsList_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetPresence_ReturnValue = CallFunc_GetPresence_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetUserId_ReturnValue = CallFunc_GetUserId_ReturnValue;
	Parms.CallFunc_GetUserId_ReturnValue_1 = CallFunc_GetUserId_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameInstance_MyGameIntance = CallFunc_GetGameInstance_MyGameIntance;
	Parms.CallFunc_GetClientGameInstance_ReturnValue = CallFunc_GetClientGameInstance_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsBP_User_Entry = K2Node_DynamicCast_AsBP_User_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue = CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.IsLocalUserLeader
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsLeader                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_PartyId_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// bool                               CallFunc_IsMemberLeader_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_C::IsLocalUserLeader(bool* IsLeader, bool CallFunc_IsValid_PartyId_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, bool CallFunc_IsMemberLeader_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "IsLocalUserLeader");

	Params::UUI_Menu_Squad_C_IsLocalUserLeader_Params Parms{};

	Parms.CallFunc_IsValid_PartyId_ReturnValue = CallFunc_IsValid_PartyId_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_IsMemberLeader_ReturnValue = CallFunc_IsMemberLeader_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsLeader != nullptr)
		*IsLeader = Parms.IsLeader;

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.UpdatePartyMembers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBlueprintPartyMember*>L_PartyMembers                                                   (Edit, BlueprintVisible)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlueprintPartyMember*       CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_PartyId_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetUserId_ReturnValue                                   (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Menu_Squad_PlayerSlot_C* K2Node_DynamicCast_AsUI_Menu_Squad_Player_Slot                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_Menu_Squad_PlayerSlot_C* K2Node_DynamicCast_AsUI_Menu_Squad_Player_Slot_1                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_Menu_Squad_PlayerSlot_C* K2Node_DynamicCast_AsUI_Menu_Squad_Player_Slot_2                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_1                  (HasGetValueTypeHash)
// TArray<class UBlueprintPartyMember*>CallFunc_GetPartyMembers_OutPartyMembersArray                    (ReferenceParm)
// bool                               CallFunc_GetPartyMembers_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_C::UpdatePartyMembers(const TArray<class UBlueprintPartyMember*>& L_PartyMembers, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, bool Temp_bool_Variable_2, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& Temp_struct_Variable_5, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FLinearColor& Temp_struct_Variable_6, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UBlueprintPartyMember* CallFunc_Array_Get_Item, bool CallFunc_IsValid_PartyId_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUserId_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1, int32 CallFunc_Array_Length_ReturnValue_4, const struct FLinearColor& Temp_struct_Variable_7, bool CallFunc_GreaterEqual_IntInt_ReturnValue_3, const struct FLinearColor& K2Node_Select_Default_2, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_5, class UUI_Menu_Squad_PlayerSlot_C* K2Node_DynamicCast_AsUI_Menu_Squad_Player_Slot, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable_3, const struct FLinearColor& K2Node_Select_Default_3, class UWidget* CallFunc_GetChildAt_ReturnValue, class UUI_Menu_Squad_PlayerSlot_C* K2Node_DynamicCast_AsUI_Menu_Squad_Player_Slot_1, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UUI_Menu_Squad_PlayerSlot_C* K2Node_DynamicCast_AsUI_Menu_Squad_Player_Slot_2, bool K2Node_DynamicCast_bSuccess_2, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_1, TArray<class UBlueprintPartyMember*>& CallFunc_GetPartyMembers_OutPartyMembersArray, bool CallFunc_GetPartyMembers_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "UpdatePartyMembers");

	Params::UUI_Menu_Squad_C_UpdatePartyMembers_Params Parms{};

	Parms.L_PartyMembers = L_PartyMembers;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_PartyId_ReturnValue = CallFunc_IsValid_PartyId_ReturnValue;
	Parms.CallFunc_GetUserId_ReturnValue = CallFunc_GetUserId_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_2 = CallFunc_GreaterEqual_IntInt_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.Temp_struct_Variable_7 = Temp_struct_Variable_7;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_3 = CallFunc_GreaterEqual_IntInt_ReturnValue_3;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsUI_Menu_Squad_Player_Slot = K2Node_DynamicCast_AsUI_Menu_Squad_Player_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Menu_Squad_Player_Slot_1 = K2Node_DynamicCast_AsUI_Menu_Squad_Player_Slot_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsUI_Menu_Squad_Player_Slot_2 = K2Node_DynamicCast_AsUI_Menu_Squad_Player_Slot_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_1 = CallFunc_GetControllerUniqueNetId_ReturnValue_1;
	Parms.CallFunc_GetPartyMembers_OutPartyMembersArray = CallFunc_GetPartyMembers_OutPartyMembersArray;
	Parms.CallFunc_GetPartyMembers_ReturnValue = CallFunc_GetPartyMembers_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.ReceivedNewSquadData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UReadablePartyData*          NewData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UPlayFabJsonObject*          L_JsonData                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UReadablePartyData*          L_NewData                                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetAttribute_OutFound                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVariantDataBP              CallFunc_GetAttribute_OutAttrValue                               (None)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNumberField_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasField_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DecodeJson_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_ConstructJsonObject_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Menu_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_C::ReceivedNewSquadData(class UReadablePartyData* NewData, class UPlayFabJsonObject* L_JsonData, class UReadablePartyData* L_NewData, bool CallFunc_GetAttribute_OutFound, const struct FVariantDataBP& CallFunc_GetAttribute_OutAttrValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue, float CallFunc_GetNumberField_ReturnValue, const class FString& CallFunc_GetStringField_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_HasField_ReturnValue, bool CallFunc_DecodeJson_ReturnValue, class UPlayFabJsonObject* CallFunc_ConstructJsonObject_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, double CallFunc_FTrunc_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "ReceivedNewSquadData");

	Params::UUI_Menu_Squad_C_ReceivedNewSquadData_Params Parms{};

	Parms.NewData = NewData;
	Parms.L_JsonData = L_JsonData;
	Parms.L_NewData = L_NewData;
	Parms.CallFunc_GetAttribute_OutFound = CallFunc_GetAttribute_OutFound;
	Parms.CallFunc_GetAttribute_OutAttrValue = CallFunc_GetAttribute_OutAttrValue;
	Parms.CallFunc_GetObjectField_ReturnValue = CallFunc_GetObjectField_ReturnValue;
	Parms.CallFunc_GetNumberField_ReturnValue = CallFunc_GetNumberField_ReturnValue;
	Parms.CallFunc_GetStringField_ReturnValue = CallFunc_GetStringField_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_HasField_ReturnValue = CallFunc_HasField_ReturnValue;
	Parms.CallFunc_DecodeJson_ReturnValue = CallFunc_DecodeJson_ReturnValue;
	Parms.CallFunc_ConstructJsonObject_ReturnValue = CallFunc_ConstructJsonObject_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu = K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FTrunc_A_ImplicitCast = CallFunc_FTrunc_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.UpdateSquadData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayFabJsonObject*          Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          L_Data                                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_EncodeJson_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVariantDataBP              K2Node_MakeStruct_VariantDataBP                                  (None)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_1                  (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_PartyId_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UReadablePartyData*          CallFunc_GetPartyData_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMutablePartyData*           CallFunc_CreateMutablePartyData_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMutablePartyData*           K2Node_LowEntry_LocalVariable_Value__Object                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdatePartyData_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_C::UpdateSquadData(class UPlayFabJsonObject* Data, class UPlayFabJsonObject* L_Data, const class FString& CallFunc_EncodeJson_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FVariantDataBP& K2Node_MakeStruct_VariantDataBP, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_1, bool CallFunc_IsValid_PartyId_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UReadablePartyData* CallFunc_GetPartyData_ReturnValue, class UMutablePartyData* CallFunc_CreateMutablePartyData_ReturnValue, class UMutablePartyData* K2Node_LowEntry_LocalVariable_Value__Object, bool CallFunc_UpdatePartyData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "UpdateSquadData");

	Params::UUI_Menu_Squad_C_UpdateSquadData_Params Parms{};

	Parms.Data = Data;
	Parms.L_Data = L_Data;
	Parms.CallFunc_EncodeJson_ReturnValue = CallFunc_EncodeJson_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_MakeStruct_VariantDataBP = K2Node_MakeStruct_VariantDataBP;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_1 = CallFunc_GetControllerUniqueNetId_ReturnValue_1;
	Parms.CallFunc_IsValid_PartyId_ReturnValue = CallFunc_IsValid_PartyId_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetPartyData_ReturnValue = CallFunc_GetPartyData_ReturnValue;
	Parms.CallFunc_CreateMutablePartyData_ReturnValue = CallFunc_CreateMutablePartyData_ReturnValue;
	Parms.K2Node_LowEntry_LocalVariable_Value__Object = K2Node_LowEntry_LocalVariable_Value__Object;
	Parms.CallFunc_UpdatePartyData_ReturnValue = CallFunc_UpdatePartyData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.OnLeavePartyComplete_94AC82684142D04BA97792A8E5D78A1C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ELeavePartyCompletionResult_Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_C::OnLeavePartyComplete_94AC82684142D04BA97792A8E5D78A1C(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, enum class ELeavePartyCompletionResult_ Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "OnLeavePartyComplete_94AC82684142D04BA97792A8E5D78A1C");

	Params::UUI_Menu_Squad_C_OnLeavePartyComplete_94AC82684142D04BA97792A8E5D78A1C_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.OnCallFailed_94AC82684142D04BA97792A8E5D78A1C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ELeavePartyCompletionResult_Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_C::OnCallFailed_94AC82684142D04BA97792A8E5D78A1C(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, enum class ELeavePartyCompletionResult_ Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "OnCallFailed_94AC82684142D04BA97792A8E5D78A1C");

	Params::UUI_Menu_Squad_C_OnCallFailed_94AC82684142D04BA97792A8E5D78A1C_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.OnReadFriendsListComplete_EB4EDC7641FBC8F8B24CE39924CD81D1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LocalUserNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ListName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      ErrorStr                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_Menu_Squad_C::OnReadFriendsListComplete_EB4EDC7641FBC8F8B24CE39924CD81D1(int32 LocalUserNum, bool bWasSuccessful, const class FString& ListName, const class FString& ErrorStr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "OnReadFriendsListComplete_EB4EDC7641FBC8F8B24CE39924CD81D1");

	Params::UUI_Menu_Squad_C_OnReadFriendsListComplete_EB4EDC7641FBC8F8B24CE39924CD81D1_Params Parms{};

	Parms.LocalUserNum = LocalUserNum;
	Parms.bWasSuccessful = bWasSuccessful;
	Parms.ListName = ListName;
	Parms.ErrorStr = ErrorStr;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.OnCallFailed_EB4EDC7641FBC8F8B24CE39924CD81D1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LocalUserNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ListName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      ErrorStr                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_Menu_Squad_C::OnCallFailed_EB4EDC7641FBC8F8B24CE39924CD81D1(int32 LocalUserNum, bool bWasSuccessful, const class FString& ListName, const class FString& ErrorStr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "OnCallFailed_EB4EDC7641FBC8F8B24CE39924CD81D1");

	Params::UUI_Menu_Squad_C_OnCallFailed_EB4EDC7641FBC8F8B24CE39924CD81D1_Params Parms{};

	Parms.LocalUserNum = LocalUserNum;
	Parms.bWasSuccessful = bWasSuccessful;
	Parms.ListName = ListName;
	Parms.ErrorStr = ErrorStr;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.OnSendPartyInvitationComplete_FA4D34474260B64CA0DD95B03A080BB3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            RecipientId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class ESendPartyInvitationCompletionResult_Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_C::OnSendPartyInvitationComplete_FA4D34474260B64CA0DD95B03A080BB3(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& RecipientId, enum class ESendPartyInvitationCompletionResult_ Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "OnSendPartyInvitationComplete_FA4D34474260B64CA0DD95B03A080BB3");

	Params::UUI_Menu_Squad_C_OnSendPartyInvitationComplete_FA4D34474260B64CA0DD95B03A080BB3_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.RecipientId = RecipientId;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.OnCallFailed_FA4D34474260B64CA0DD95B03A080BB3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            RecipientId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class ESendPartyInvitationCompletionResult_Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_C::OnCallFailed_FA4D34474260B64CA0DD95B03A080BB3(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& RecipientId, enum class ESendPartyInvitationCompletionResult_ Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "OnCallFailed_FA4D34474260B64CA0DD95B03A080BB3");

	Params::UUI_Menu_Squad_C_OnCallFailed_FA4D34474260B64CA0DD95B03A080BB3_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.RecipientId = RecipientId;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.OnCreatePartyComplete_7344AF7C4DC39CD5996EB9A5A37BA7B0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECreatePartyCompletionResult_Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_C::OnCreatePartyComplete_7344AF7C4DC39CD5996EB9A5A37BA7B0(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, enum class ECreatePartyCompletionResult_ Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "OnCreatePartyComplete_7344AF7C4DC39CD5996EB9A5A37BA7B0");

	Params::UUI_Menu_Squad_C_OnCreatePartyComplete_7344AF7C4DC39CD5996EB9A5A37BA7B0_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.OnCallFailed_7344AF7C4DC39CD5996EB9A5A37BA7B0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECreatePartyCompletionResult_Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_C::OnCallFailed_7344AF7C4DC39CD5996EB9A5A37BA7B0(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, enum class ECreatePartyCompletionResult_ Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "OnCallFailed_7344AF7C4DC39CD5996EB9A5A37BA7B0");

	Params::UUI_Menu_Squad_C_OnCallFailed_7344AF7C4DC39CD5996EB9A5A37BA7B0_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.ListenDelegates
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Menu_Squad_C::ListenDelegates()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "ListenDelegates");

	Params::UUI_Menu_Squad_C_ListenDelegates_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.OnPartyMemberJoined_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            MemberId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUI_Menu_Squad_C::OnPartyMemberJoined_Event(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& MemberId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "OnPartyMemberJoined_Event");

	Params::UUI_Menu_Squad_C_OnPartyMemberJoined_Event_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.MemberId = MemberId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.OnPartyMemberPromoted_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            NewLeaderId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUI_Menu_Squad_C::OnPartyMemberPromoted_Event(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& NewLeaderId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "OnPartyMemberPromoted_Event");

	Params::UUI_Menu_Squad_C_OnPartyMemberPromoted_Event_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.NewLeaderId = NewLeaderId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.OnPartyMemberExited_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            MemberId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class EMemberExitedReason_    Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_C::OnPartyMemberExited_Event(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& MemberId, enum class EMemberExitedReason_ Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "OnPartyMemberExited_Event");

	Params::UUI_Menu_Squad_C_OnPartyMemberExited_Event_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.MemberId = MemberId;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.OnPartyJoined_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_C::OnPartyJoined_Event(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "OnPartyJoined_Event");

	Params::UUI_Menu_Squad_C_OnPartyJoined_Event_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.OnPartyExited_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_C::OnPartyExited_Event(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "OnPartyExited_Event");

	Params::UUI_Menu_Squad_C_OnPartyExited_Event_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.OnPartyDataReceived_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPartyId*                    PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Namespace                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadablePartyData*          PartyData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_C::OnPartyDataReceived_Event(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, class FName Namespace, class UReadablePartyData* PartyData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "OnPartyDataReceived_Event");

	Params::UUI_Menu_Squad_C_OnPartyDataReceived_Event_Params Parms{};

	Parms.LocalUserId = LocalUserId;
	Parms.PartyId = PartyId;
	Parms.Namespace = Namespace;
	Parms.PartyData = PartyData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.OnPartyInvitesChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            LocalUserId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUI_Menu_Squad_C::OnPartyInvitesChanged_Event(const struct FUniqueNetIdRepl& LocalUserId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "OnPartyInvitesChanged_Event");

	Params::UUI_Menu_Squad_C_OnPartyInvitesChanged_Event_Params Parms{};

	Parms.LocalUserId = LocalUserId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.BndEvt__UI_Squad_Button_Squad_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Squad_C::BndEvt__UI_Squad_Button_Squad_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "BndEvt__UI_Squad_Button_Squad_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Menu_Squad_C_BndEvt__UI_Squad_Button_Squad_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.BndEvt__UI_Squad_Button_Friends_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Squad_C::BndEvt__UI_Squad_Button_Friends_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "BndEvt__UI_Squad_Button_Friends_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Menu_Squad_C_BndEvt__UI_Squad_Button_Friends_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.OnLoginComplete_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LocalUserNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            UserId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FString                      Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_Menu_Squad_C::OnLoginComplete_Event(int32 LocalUserNum, bool bWasSuccessful, const struct FUniqueNetIdRepl& UserId, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "OnLoginComplete_Event");

	Params::UUI_Menu_Squad_C_OnLoginComplete_Event_Params Parms{};

	Parms.LocalUserNum = LocalUserNum;
	Parms.bWasSuccessful = bWasSuccessful;
	Parms.UserId = UserId;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.OpenFriendSection
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Menu_Squad_C::OpenFriendSection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "OpenFriendSection");

	Params::UUI_Menu_Squad_C_OpenFriendSection_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.InviteToSquad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Menu_Squad_Friend_C*     Friend                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_C::InviteToSquad(class UUI_Menu_Squad_Friend_C* Friend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "InviteToSquad");

	Params::UUI_Menu_Squad_C_InviteToSquad_Params Parms{};

	Parms.Friend = Friend;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.BndEvt__UI_Menu_Squad_Button_Squad_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Squad_C::BndEvt__UI_Menu_Squad_Button_Squad_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "BndEvt__UI_Menu_Squad_Button_Squad_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	Params::UUI_Menu_Squad_C_BndEvt__UI_Menu_Squad_Button_Squad_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.BndEvt__UI_Menu_Squad_Button_Squad_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Squad_C::BndEvt__UI_Menu_Squad_Button_Squad_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "BndEvt__UI_Menu_Squad_Button_Squad_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	Params::UUI_Menu_Squad_C_BndEvt__UI_Menu_Squad_Button_Squad_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.BndEvt__UI_Menu_Squad_Button_Friends_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Squad_C::BndEvt__UI_Menu_Squad_Button_Friends_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "BndEvt__UI_Menu_Squad_Button_Friends_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	Params::UUI_Menu_Squad_C_BndEvt__UI_Menu_Squad_Button_Friends_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.BndEvt__UI_Menu_Squad_Button_Friends_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Squad_C::BndEvt__UI_Menu_Squad_Button_Friends_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "BndEvt__UI_Menu_Squad_Button_Friends_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	Params::UUI_Menu_Squad_C_BndEvt__UI_Menu_Squad_Button_Friends_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Menu_Squad_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "Construct");

	Params::UUI_Menu_Squad_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.BndEvt__UI_Menu_Squad_Button_Open_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Squad_C::BndEvt__UI_Menu_Squad_Button_Open_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "BndEvt__UI_Menu_Squad_Button_Open_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature");

	Params::UUI_Menu_Squad_C_BndEvt__UI_Menu_Squad_Button_Open_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Squad.UI_Menu_Squad_C.ExecuteUbergraph_UI_Menu_Squad
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlineIdentitySubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UOnlineFriendsSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UOnlineFriendsSubsystemReadFriendsList*CallFunc_ReadFriendsList_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_LocalUserNum_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ListName_1                                    (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ErrorStr_1                                    (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_LocalUserNum_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ListName                                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ErrorStr                                      (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_10                                (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_9                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_RecipientId_1                                 (HasGetValueTypeHash)
// enum class ESendPartyInvitationCompletionResult_K2Node_CustomEvent_result_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_9                                 (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_8                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_RecipientId                                   (HasGetValueTypeHash)
// enum class ESendPartyInvitationCompletionResult_K2Node_CustomEvent_result_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESendPartyInvitationCompletionResult_Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            Temp_struct_Variable                                             (HasGetValueTypeHash)
// class UPartyId*                    Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            Temp_struct_Variable_1                                           (HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_8                                 (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_7                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECreatePartyCompletionResult_K2Node_CustomEvent_result_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_7                                 (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_6                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECreatePartyCompletionResult_K2Node_CustomEvent_result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECreatePartyCompletionResult_Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPartyId*                    Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            Temp_struct_Variable_2                                           (HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UOnlineIdentitySubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue_4                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_5                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EOnlineLoginStatus      CallFunc_GetLoginStatus_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_6                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_6                                 (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_5                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_MemberId_1                                    (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_5                                 (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_4                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_NewLeaderId                                   (HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_7                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_4                                 (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_3                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_MemberId                                      (HasGetValueTypeHash)
// enum class EMemberExitedReason_    K2Node_CustomEvent_Reason                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_8                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_3                                 (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_2                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_9                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_1                  (HasGetValueTypeHash)
// struct FUniqueNetIdRepl            Temp_struct_Variable_3                                           (HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_2                                 (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_1                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPartyId*                    Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ELeavePartyCompletionResult_Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_1                                 (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Namespace                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadablePartyData*          K2Node_CustomEvent_PartyData                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_11                                (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_10                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ELeavePartyCompletionResult_K2Node_CustomEvent_result_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_2                  (HasGetValueTypeHash)
// TArray<class UPartyId*>            CallFunc_GetJoinedParties_OutPartyIdArray                        (ReferenceParm)
// bool                               CallFunc_GetJoinedParties_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPartyId*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_PartyId_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId                                   (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_LocalUserNum                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_UserId                                        (HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_error                                         (ZeroConstructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_10                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_LocalUserId_12                                (HasGetValueTypeHash)
// class UPartyId*                    K2Node_CustomEvent_PartyId_11                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ELeavePartyCompletionResult_K2Node_CustomEvent_result_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Menu_Squad_Friend_C*     K2Node_CustomEvent_Friend                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_3                  (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FOnlinePartyConfiguration   K2Node_MakeStruct_OnlinePartyConfiguration                       (None)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_4                  (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_PartyId_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_5                  (HasGetValueTypeHash)
// int64                              CallFunc_GetPartyMemberCount_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_Int64Int64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_11                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystemSendInvitation*CallFunc_SendInvitation_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_12                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_13                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystemLeaveParty*CallFunc_LeaveParty_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UBlueprintPartyMember*>CallFunc_GetPartyMembers_OutPartyMembersArray                    (ReferenceParm)
// bool                               CallFunc_GetPartyMembers_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_14                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_PartyId_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_15                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_GetPrimaryPartyType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystemCreateParty*CallFunc_CreateParty_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_PartyId_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Squad_C::ExecuteUbergraph_UI_Menu_Squad(int32 EntryPoint, class UOnlineIdentitySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UOnlineFriendsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UOnlineFriendsSubsystemReadFriendsList* CallFunc_ReadFriendsList_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 K2Node_CustomEvent_LocalUserNum_2, bool K2Node_CustomEvent_bWasSuccessful_2, const class FString& K2Node_CustomEvent_ListName_1, const class FString& K2Node_CustomEvent_ErrorStr_1, int32 K2Node_CustomEvent_LocalUserNum_1, bool K2Node_CustomEvent_bWasSuccessful_1, const class FString& K2Node_CustomEvent_ListName, const class FString& K2Node_CustomEvent_ErrorStr, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Variable, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_10, class UPartyId* K2Node_CustomEvent_PartyId_9, const struct FUniqueNetIdRepl& K2Node_CustomEvent_RecipientId_1, enum class ESendPartyInvitationCompletionResult_ K2Node_CustomEvent_result_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_9, class UPartyId* K2Node_CustomEvent_PartyId_8, const struct FUniqueNetIdRepl& K2Node_CustomEvent_RecipientId, enum class ESendPartyInvitationCompletionResult_ K2Node_CustomEvent_result_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, enum class ESendPartyInvitationCompletionResult_ Temp_byte_Variable, const struct FUniqueNetIdRepl& Temp_struct_Variable, class UPartyId* Temp_object_Variable, const struct FUniqueNetIdRepl& Temp_struct_Variable_1, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_8, class UPartyId* K2Node_CustomEvent_PartyId_7, enum class ECreatePartyCompletionResult_ K2Node_CustomEvent_result_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_7, class UPartyId* K2Node_CustomEvent_PartyId_6, enum class ECreatePartyCompletionResult_ K2Node_CustomEvent_result, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, enum class ECreatePartyCompletionResult_ Temp_byte_Variable_1, class UPartyId* Temp_object_Variable_1, const struct FUniqueNetIdRepl& Temp_struct_Variable_2, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, class UOnlineIdentitySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, enum class EOnlineLoginStatus CallFunc_GetLoginStatus_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EUMGSequencePlayMode Temp_byte_Variable_2, enum class EUMGSequencePlayMode Temp_byte_Variable_3, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_6, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Variable_2, bool CallFunc_Not_PreBool_ReturnValue, enum class EUMGSequencePlayMode K2Node_Select_Default, bool Temp_bool_IsClosed_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool Temp_bool_Has_Been_Initd_Variable_1, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_6, class UPartyId* K2Node_CustomEvent_PartyId_5, const struct FUniqueNetIdRepl& K2Node_CustomEvent_MemberId_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_5, class UPartyId* K2Node_CustomEvent_PartyId_4, const struct FUniqueNetIdRepl& K2Node_CustomEvent_NewLeaderId, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_7, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_4, class UPartyId* K2Node_CustomEvent_PartyId_3, const struct FUniqueNetIdRepl& K2Node_CustomEvent_MemberId, enum class EMemberExitedReason_ K2Node_CustomEvent_Reason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_8, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_3, class UPartyId* K2Node_CustomEvent_PartyId_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_9, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_1, const struct FUniqueNetIdRepl& Temp_struct_Variable_3, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_2, class UPartyId* K2Node_CustomEvent_PartyId_1, class UPartyId* Temp_object_Variable_2, enum class ELeavePartyCompletionResult_ Temp_byte_Variable_4, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_1, class UPartyId* K2Node_CustomEvent_PartyId, class FName K2Node_CustomEvent_Namespace, class UReadablePartyData* K2Node_CustomEvent_PartyData, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_11, class UPartyId* K2Node_CustomEvent_PartyId_10, enum class ELeavePartyCompletionResult_ K2Node_CustomEvent_result_4, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_2, TArray<class UPartyId*>& CallFunc_GetJoinedParties_OutPartyIdArray, bool CallFunc_GetJoinedParties_ReturnValue, class UPartyId* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsValid_PartyId_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, int32 K2Node_CustomEvent_LocalUserNum, bool K2Node_CustomEvent_bWasSuccessful, const struct FUniqueNetIdRepl& K2Node_CustomEvent_UserId, const class FString& K2Node_CustomEvent_error, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_10, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_12, class UPartyId* K2Node_CustomEvent_PartyId_11, enum class ELeavePartyCompletionResult_ K2Node_CustomEvent_result_5, class UUI_Menu_Squad_Friend_C* K2Node_CustomEvent_Friend, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_3, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_4, const struct FOnlinePartyConfiguration& K2Node_MakeStruct_OnlinePartyConfiguration, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_PartyId_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_5, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_5, int64 CallFunc_GetPartyMemberCount_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_Less_Int64Int64_ReturnValue, bool Temp_bool_IsClosed_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_11, bool CallFunc_Array_IsValidIndex_ReturnValue_1, class UOnlinePartySubsystemSendInvitation* CallFunc_SendInvitation_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_12, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_13, class UOnlinePartySubsystemLeaveParty* CallFunc_LeaveParty_ReturnValue, TArray<class UBlueprintPartyMember*>& CallFunc_GetPartyMembers_OutPartyMembersArray, bool CallFunc_GetPartyMembers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_14, bool CallFunc_IsValid_PartyId_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, bool CallFunc_BooleanAND_ReturnValue_3, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_15, int64 CallFunc_GetPrimaryPartyType_ReturnValue, class UOnlinePartySubsystemCreateParty* CallFunc_CreateParty_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_PartyId_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Squad_C", "ExecuteUbergraph_UI_Menu_Squad");

	Params::UUI_Menu_Squad_C_ExecuteUbergraph_UI_Menu_Squad_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_ReadFriendsList_ReturnValue = CallFunc_ReadFriendsList_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_LocalUserNum_2 = K2Node_CustomEvent_LocalUserNum_2;
	Parms.K2Node_CustomEvent_bWasSuccessful_2 = K2Node_CustomEvent_bWasSuccessful_2;
	Parms.K2Node_CustomEvent_ListName_1 = K2Node_CustomEvent_ListName_1;
	Parms.K2Node_CustomEvent_ErrorStr_1 = K2Node_CustomEvent_ErrorStr_1;
	Parms.K2Node_CustomEvent_LocalUserNum_1 = K2Node_CustomEvent_LocalUserNum_1;
	Parms.K2Node_CustomEvent_bWasSuccessful_1 = K2Node_CustomEvent_bWasSuccessful_1;
	Parms.K2Node_CustomEvent_ListName = K2Node_CustomEvent_ListName;
	Parms.K2Node_CustomEvent_ErrorStr = K2Node_CustomEvent_ErrorStr;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.K2Node_CustomEvent_LocalUserId_10 = K2Node_CustomEvent_LocalUserId_10;
	Parms.K2Node_CustomEvent_PartyId_9 = K2Node_CustomEvent_PartyId_9;
	Parms.K2Node_CustomEvent_RecipientId_1 = K2Node_CustomEvent_RecipientId_1;
	Parms.K2Node_CustomEvent_result_3 = K2Node_CustomEvent_result_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_LocalUserId_9 = K2Node_CustomEvent_LocalUserId_9;
	Parms.K2Node_CustomEvent_PartyId_8 = K2Node_CustomEvent_PartyId_8;
	Parms.K2Node_CustomEvent_RecipientId = K2Node_CustomEvent_RecipientId;
	Parms.K2Node_CustomEvent_result_2 = K2Node_CustomEvent_result_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_CustomEvent_LocalUserId_8 = K2Node_CustomEvent_LocalUserId_8;
	Parms.K2Node_CustomEvent_PartyId_7 = K2Node_CustomEvent_PartyId_7;
	Parms.K2Node_CustomEvent_result_1 = K2Node_CustomEvent_result_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_LocalUserId_7 = K2Node_CustomEvent_LocalUserId_7;
	Parms.K2Node_CustomEvent_PartyId_6 = K2Node_CustomEvent_PartyId_6;
	Parms.K2Node_CustomEvent_result = K2Node_CustomEvent_result;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_4 = CallFunc_GetGameInstanceSubsystem_ReturnValue_4;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_5 = CallFunc_GetGameInstanceSubsystem_ReturnValue_5;
	Parms.CallFunc_GetLoginStatus_ReturnValue = CallFunc_GetLoginStatus_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_6 = CallFunc_GetGameInstanceSubsystem_ReturnValue_6;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.K2Node_CustomEvent_LocalUserId_6 = K2Node_CustomEvent_LocalUserId_6;
	Parms.K2Node_CustomEvent_PartyId_5 = K2Node_CustomEvent_PartyId_5;
	Parms.K2Node_CustomEvent_MemberId_1 = K2Node_CustomEvent_MemberId_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_LocalUserId_5 = K2Node_CustomEvent_LocalUserId_5;
	Parms.K2Node_CustomEvent_PartyId_4 = K2Node_CustomEvent_PartyId_4;
	Parms.K2Node_CustomEvent_NewLeaderId = K2Node_CustomEvent_NewLeaderId;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_7 = CallFunc_GetGameInstanceSubsystem_ReturnValue_7;
	Parms.K2Node_CustomEvent_LocalUserId_4 = K2Node_CustomEvent_LocalUserId_4;
	Parms.K2Node_CustomEvent_PartyId_3 = K2Node_CustomEvent_PartyId_3;
	Parms.K2Node_CustomEvent_MemberId = K2Node_CustomEvent_MemberId;
	Parms.K2Node_CustomEvent_Reason = K2Node_CustomEvent_Reason;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_8 = CallFunc_GetGameInstanceSubsystem_ReturnValue_8;
	Parms.K2Node_CustomEvent_LocalUserId_3 = K2Node_CustomEvent_LocalUserId_3;
	Parms.K2Node_CustomEvent_PartyId_2 = K2Node_CustomEvent_PartyId_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_9 = CallFunc_GetGameInstanceSubsystem_ReturnValue_9;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_1 = CallFunc_GetControllerUniqueNetId_ReturnValue_1;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.K2Node_CustomEvent_LocalUserId_2 = K2Node_CustomEvent_LocalUserId_2;
	Parms.K2Node_CustomEvent_PartyId_1 = K2Node_CustomEvent_PartyId_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.K2Node_CustomEvent_LocalUserId_1 = K2Node_CustomEvent_LocalUserId_1;
	Parms.K2Node_CustomEvent_PartyId = K2Node_CustomEvent_PartyId;
	Parms.K2Node_CustomEvent_Namespace = K2Node_CustomEvent_Namespace;
	Parms.K2Node_CustomEvent_PartyData = K2Node_CustomEvent_PartyData;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_CustomEvent_LocalUserId_11 = K2Node_CustomEvent_LocalUserId_11;
	Parms.K2Node_CustomEvent_PartyId_10 = K2Node_CustomEvent_PartyId_10;
	Parms.K2Node_CustomEvent_result_4 = K2Node_CustomEvent_result_4;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_2 = CallFunc_GetControllerUniqueNetId_ReturnValue_2;
	Parms.CallFunc_GetJoinedParties_OutPartyIdArray = CallFunc_GetJoinedParties_OutPartyIdArray;
	Parms.CallFunc_GetJoinedParties_ReturnValue = CallFunc_GetJoinedParties_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_IsValid_PartyId_ReturnValue = CallFunc_IsValid_PartyId_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CustomEvent_LocalUserId = K2Node_CustomEvent_LocalUserId;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CustomEvent_LocalUserNum = K2Node_CustomEvent_LocalUserNum;
	Parms.K2Node_CustomEvent_bWasSuccessful = K2Node_CustomEvent_bWasSuccessful;
	Parms.K2Node_CustomEvent_UserId = K2Node_CustomEvent_UserId;
	Parms.K2Node_CustomEvent_error = K2Node_CustomEvent_error;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_10 = CallFunc_GetGameInstanceSubsystem_ReturnValue_10;
	Parms.K2Node_CustomEvent_LocalUserId_12 = K2Node_CustomEvent_LocalUserId_12;
	Parms.K2Node_CustomEvent_PartyId_11 = K2Node_CustomEvent_PartyId_11;
	Parms.K2Node_CustomEvent_result_5 = K2Node_CustomEvent_result_5;
	Parms.K2Node_CustomEvent_Friend = K2Node_CustomEvent_Friend;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_3 = CallFunc_GetControllerUniqueNetId_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.K2Node_MakeStruct_OnlinePartyConfiguration = K2Node_MakeStruct_OnlinePartyConfiguration;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_4 = CallFunc_GetControllerUniqueNetId_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_PartyId_ReturnValue_1 = CallFunc_IsValid_PartyId_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_5 = CallFunc_GetControllerUniqueNetId_ReturnValue_5;
	Parms.CallFunc_GetPartyMemberCount_ReturnValue = CallFunc_GetPartyMemberCount_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_Less_Int64Int64_ReturnValue = CallFunc_Less_Int64Int64_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_11 = CallFunc_GetGameInstanceSubsystem_ReturnValue_11;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_SendInvitation_ReturnValue = CallFunc_SendInvitation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_12 = CallFunc_GetGameInstanceSubsystem_ReturnValue_12;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_13 = CallFunc_GetGameInstanceSubsystem_ReturnValue_13;
	Parms.CallFunc_LeaveParty_ReturnValue = CallFunc_LeaveParty_ReturnValue;
	Parms.CallFunc_GetPartyMembers_OutPartyMembersArray = CallFunc_GetPartyMembers_OutPartyMembersArray;
	Parms.CallFunc_GetPartyMembers_ReturnValue = CallFunc_GetPartyMembers_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_14 = CallFunc_GetGameInstanceSubsystem_ReturnValue_14;
	Parms.CallFunc_IsValid_PartyId_ReturnValue_2 = CallFunc_IsValid_PartyId_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_15 = CallFunc_GetGameInstanceSubsystem_ReturnValue_15;
	Parms.CallFunc_GetPrimaryPartyType_ReturnValue = CallFunc_GetPrimaryPartyType_ReturnValue;
	Parms.CallFunc_CreateParty_ReturnValue = CallFunc_CreateParty_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsValid_PartyId_ReturnValue_3 = CallFunc_IsValid_PartyId_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


