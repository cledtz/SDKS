#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x108 - 0xA8)
// BlueprintGeneratedClass Task_Multiplayer_RequestServer.Task_Multiplayer_RequestServer_C
class UTask_Multiplayer_RequestServer_C : public UAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FString                                Name;                                              // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                Map;                                               // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                Password;                                          // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        MaxPlayers;                                        // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2A2B[0x4];                                     // Fixing Size After Last Property 
	class UBP_PG_PlayerController_Menu_C*        PlayerController;                                  // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnFinished;                                        // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UPlayFabJsonObject*                    CreatedServer;                                     // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_Multiplayer_RequestServer_C* GetDefaultObj();

	void CheckForErrors(TArray<class UPlayFabJsonObject*>& Array, bool* HasError, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UPlayFabJsonObject* CallFunc_Array_Get_Item, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue, bool CallFunc_HasField_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_1, const class FString& CallFunc_GetStringField_ReturnValue, const class FString& CallFunc_GetStringField_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_HasField_ReturnValue_1, bool CallFunc_HasField_ReturnValue_2, const class FString& CallFunc_GetStringField_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void ConstructRequest(class UPlayFabJsonObject** Value_, class UPlayFabJsonObject* L_SessionCookie, const TArray<class FString>& L_RegionList, class UPlayFabJsonObject* L_Result, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_JoinStringArray_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, bool CallFunc_IsEmpty_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, const class FString& CallFunc_EncodeJson_ReturnValue, class UPlayFabJsonObject* CallFunc_ConstructJsonObject_ReturnValue, class UPingQoSSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, int32 CallFunc_GetBuildNumber_ReturnValue, const struct FPingQoSInfo& CallFunc_Array_Get_Item, double CallFunc_Conv_IntToDouble_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPlayFabJsonObject* CallFunc_ConstructJsonObject_ReturnValue_1, float CallFunc_SetNumberField_Number_ImplicitCast, float CallFunc_SetNumberField_Number_ImplicitCast_1);
	void OnPlayFabResponse_1640A79F41DF44E967384B9B9BAD3EE6(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void ReceiveActivate();
	void RequestServer_Failure(const struct FPlayFabError& Error, class UObject* CustomData);
	void RequestServer_Success(const struct FClientExecuteCloudScriptResult& Result, class UObject* CustomData);
	void ReceiveFinished(enum class EActionState Reason);
	void OnConnectionFinished_Event(bool IsSuccessful);
	void ExecuteUbergraph_Task_Multiplayer_RequestServer(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EActionState Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class UTask_Multiplayer_ConnectToServer_C* CallFunc_CreateAction_ReturnValue, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, const struct FPlayFabError& K2Node_CustomEvent_error, class UObject* K2Node_CustomEvent_customData_1, const struct FClientExecuteCloudScriptResult& K2Node_CustomEvent_result, class UObject* K2Node_CustomEvent_customData, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_CheckForErrors_HasError, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class UPlayFabJsonObject* CallFunc_ConstructRequest_Value_, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FClientExecuteCloudScriptRequest& K2Node_MakeStruct_ClientExecuteCloudScriptRequest, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, enum class EActionState K2Node_Event_Reason, bool K2Node_Select_Default, bool CallFunc_GetBoolField_ReturnValue, const class FString& CallFunc_GetStringField_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_2, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue, class UPlayFabJsonObject* K2Node_LowEntry_LocalVariable_Value__Object, bool K2Node_CustomEvent_IsSuccessful, const class FString& CallFunc_GetStringField_ReturnValue_1, float CallFunc_GetNumberField_ReturnValue, float CallFunc_GetNumberField_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, const struct FPlayFabBaseModel& Temp_struct_Variable, class UObject* Temp_object_Variable, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, bool Temp_bool_Variable_3, class FText CallFunc_MakeLiteralText_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPlayFabClientAPI* CallFunc_ExecuteCloudScript_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsMemberLeader_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FPlayFabBaseModel& K2Node_CustomEvent_response, class UObject* K2Node_CustomEvent_customData_2, bool K2Node_CustomEvent_successful, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_1, int32 CallFunc_Divide_IntInt_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_2, TArray<class UBlueprintPartyMember*>& CallFunc_GetPartyMembers_OutPartyMembersArray, bool CallFunc_GetPartyMembers_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, double CallFunc_FTrunc_A_ImplicitCast, double CallFunc_FTrunc_A_ImplicitCast_1);
	void OnFinished__DelegateSignature(bool IsSuccessful);
};

}


