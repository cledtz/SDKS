#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD8 - 0xA8)
// BlueprintGeneratedClass Task_DevepolerLogin.Task_DevepolerLogin_C
class UTask_DevepolerLogin_C : public UAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UClientBackendComponent*               Client_Backend_Component;                          // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_DevepolerLogin_C* GetDefaultObj();

	void ConstructRequestPlayerCombinedInfo(class UPlayFabJsonObject** Request, class UPlayFabJsonObject* L_Request, class UPlayFabJsonObject* CallFunc_ConstructJsonObject_ReturnValue, class UPlayFabJsonObject* K2Node_LowEntry_LocalVariable_Value__Object, class UPlayFabJsonObject* CallFunc_ConstructJsonObject_ReturnValue_1);
	void OnPlayFabResponse_763BB15148AF2429F3E103B2AA4E64DC(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void OnPlayFabResponse_57D036694E81E3042DF61EA9CBCE87C6(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void ReceiveActivate();
	void Login_Success(const struct FClientLoginResult& Result, class UObject* CustomData);
	void Login_Failure(const struct FPlayFabError& Error, class UObject* CustomData);
	void GetPlayerCombinedInfo_Success(const struct FClientGetPlayerCombinedInfoResult& Result, class UObject* CustomData);
	void ExecuteUbergraph_Task_DevepolerLogin(int32 EntryPoint, bool Temp_bool_Variable, class UObject* Temp_object_Variable, const struct FPlayFabBaseModel& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FPlayFabBaseModel& K2Node_CustomEvent_response, class UObject* K2Node_CustomEvent_customData_3, bool K2Node_CustomEvent_successful, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable_1, class UObject* Temp_object_Variable_1, const struct FPlayFabBaseModel& Temp_struct_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_WithEditor_ReturnValue, class UPlayFabJsonObject* CallFunc_ConstructRequestPlayerCombinedInfo_Request, const struct FClientLoginWithCustomIDRequest& K2Node_MakeStruct_ClientLoginWithCustomIDRequest, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UPlayFabClientAPI* CallFunc_LoginWithCustomID_ReturnValue, class UPG_PlayerState_Base* K2Node_DynamicCast_AsPG_Player_State_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TArray<enum class EModifiedData>& K2Node_MakeArray_Array, const struct FClientLoginResult& K2Node_CustomEvent_result_1, class UObject* K2Node_CustomEvent_customData_2, bool CallFunc_HasField_ReturnValue, const struct FPlayFabError& K2Node_CustomEvent_error, class UObject* K2Node_CustomEvent_customData_1, class UPlayFabJsonObject* CallFunc_ConstructRequestPlayerCombinedInfo_Request_1, const struct FPlayFabBaseModel& K2Node_CustomEvent_response_1, class UObject* K2Node_CustomEvent_customData_4, bool K2Node_CustomEvent_successful_1, const struct FClientGetPlayerCombinedInfoRequest& K2Node_MakeStruct_ClientGetPlayerCombinedInfoRequest, const struct FClientGetPlayerCombinedInfoResult& K2Node_CustomEvent_result, class UObject* K2Node_CustomEvent_customData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UPlayFabClientAPI* CallFunc_GetPlayerCombinedInfo_ReturnValue, TArray<enum class EModifiedData>& K2Node_MakeArray_Array_1, bool CallFunc_IsValid_ReturnValue_1);
	void OnSuccess__DelegateSignature();
	void OnFailure__DelegateSignature(const struct FPlayFabError& Error);
};

}


