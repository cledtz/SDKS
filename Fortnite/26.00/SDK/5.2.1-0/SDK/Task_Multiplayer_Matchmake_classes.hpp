#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xD0 - 0xA8)
// BlueprintGeneratedClass Task_Multiplayer_Matchmake.Task_Multiplayer_Matchmake_C
class UTask_Multiplayer_Matchmake_C : public UAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PG_PlayerController_Menu_C*        PlayerController;                                  // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UUI_ServerInfo_C*>              RejectedServers;                                   // 0xB8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UUI_ServerInfo_C*                      SelectedBestServer;                                // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_Multiplayer_Matchmake_C* GetDefaultObj();

	void SelectBestServer(class UUI_ServerInfo_C** BestServer, class UUI_ServerInfo_C* L_BestServer, class UUI_ServerInfo_C* L_Iterator, const TArray<class UUI_ServerInfo_C*>& L_BestServers, int32 L_SquadPlayersNum, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_True_if_break_was_hit_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GetBoolField_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_HasField_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_4, class FText CallFunc_GetText_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Conv_StringToInt_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class UUI_ServerInfo_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UUI_ServerInfo_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class FText CallFunc_GetText_ReturnValue_2, class FText CallFunc_GetText_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, int32 CallFunc_Conv_StringToInt_ReturnValue_2, int32 CallFunc_Conv_StringToInt_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class FText CallFunc_GetText_ReturnValue_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Conv_StringToInt_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UUI_ServerInfo_C* CallFunc_Array_Get_Item_2, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, TArray<class UBlueprintPartyMember*>& CallFunc_GetPartyMembers_OutPartyMembersArray, bool CallFunc_GetPartyMembers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1);
	void OnServerListUpdated_Event();
	void OnConnectionFinished_Event(bool IsSuccessful);
	void ConnectToBestServer();
	void ReceiveActivate();
	void ExecuteUbergraph_Task_Multiplayer_Matchmake(int32 EntryPoint, class UTask_Multiplayer_ConnectToServer_C* CallFunc_CreateAction_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_ServerInfo_C* CallFunc_SelectBestServer_BestServer, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_IsSuccessful, float CallFunc_GetNumberField_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_GetNumberField_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue_1, const class FString& CallFunc_GetStringField_ReturnValue, double CallFunc_FTrunc_A_ImplicitCast, double CallFunc_FTrunc_A_ImplicitCast_1);
};

}


