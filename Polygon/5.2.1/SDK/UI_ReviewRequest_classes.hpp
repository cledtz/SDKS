#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2A8 - 0x280)
// WidgetBlueprintGeneratedClass UI_ReviewRequest.UI_ReviewRequest_C
class UUI_ReviewRequest_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_BattlePass_Border;                          // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Cancel;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_SteamPage;                                  // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_BattlePass_Background;                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_ReviewRequest_C");
		return Clss;
	}

	void OnPlayFabResponse_37F6905649BFCD8FE020289E9E1B2AA9(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void OnPlayFabResponse_38F3E1DF41AE18CF364732AC70833B03(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void OnPlayFabResponse_E6E5F3F1447AAFA98AC0BD8ED8766584(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void BndEvt__UI_ReviewRequest_Button_SteamPage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SaveIsRequestedReview();
	void SaveIsRequested_Success(const struct FClientUpdateUserDataResult& Result, class UObject* CustomData);
	void SaveIsRequested_Failure(const struct FPlayFabError& Error, class UObject* CustomData);
	void BndEvt__UI_ReviewRequest_Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void WritePlayerEvent_RequestReview_Success(const struct FClientWriteEventResponse& Result, class UObject* CustomData);
	void WritePlayerEvent_RequestReview_Failure(const struct FPlayFabError& Error, class UObject* CustomData);
	void ExecuteUbergraph_UI_ReviewRequest(int32 EntryPoint, bool Temp_bool_Variable, class UObject* Temp_object_Variable, const struct FPlayFabBaseModel& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FPlayFabBaseModel& K2Node_CustomEvent_response_1, class UObject* K2Node_CustomEvent_customData_5, bool K2Node_CustomEvent_successful_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable_1, class UObject* Temp_object_Variable_1, const struct FPlayFabBaseModel& Temp_struct_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FPlayFabBaseModel& K2Node_CustomEvent_response, class UObject* K2Node_CustomEvent_customData_4, bool K2Node_CustomEvent_successful, bool Temp_bool_Variable_2, class UObject* Temp_object_Variable_2, const struct FPlayFabBaseModel& Temp_struct_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UPlayFabJsonObject* CallFunc_ConstructJsonObject_ReturnValue, class UPlayFabJsonObject* K2Node_LowEntry_LocalVariable_Value__Object, const struct FClientUpdateUserDataResult& K2Node_CustomEvent_result_1, class UObject* K2Node_CustomEvent_customData_3, const struct FClientUpdateUserDataRequest& K2Node_MakeStruct_ClientUpdateUserDataRequest, class UPlayFabClientAPI* CallFunc_UpdateUserData_ReturnValue, const struct FPlayFabError& K2Node_CustomEvent_error_1, class UObject* K2Node_CustomEvent_customData_2, bool CallFunc_IsValid_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UPlayFabJsonObject* CallFunc_ConstructJsonObject_ReturnValue_1, class UPlayFabJsonObject* K2Node_LowEntry_LocalVariable_Value__1_Object, class UPG_PlayerState_Base* K2Node_DynamicCast_AsPG_Player_State_Base, bool K2Node_DynamicCast_bSuccess, const struct FClientWriteClientPlayerEventRequest& K2Node_MakeStruct_ClientWriteClientPlayerEventRequest, class UPlayFabClientAPI* CallFunc_WritePlayerEvent_ReturnValue, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FPlayFabBaseModel& K2Node_CustomEvent_response_2, class UObject* K2Node_CustomEvent_customData_6, bool K2Node_CustomEvent_successful_2, class UPlayFabJsonObject* CallFunc_ConstructJsonObject_ReturnValue_2, class UPlayFabJsonObject* K2Node_LowEntry_LocalVariable_Value__2_Object, const struct FClientWriteClientPlayerEventRequest& K2Node_MakeStruct_ClientWriteClientPlayerEventRequest_1, class UPlayFabClientAPI* CallFunc_WritePlayerEvent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FClientWriteEventResponse& K2Node_CustomEvent_result, class UObject* K2Node_CustomEvent_customData_1, const struct FPlayFabError& K2Node_CustomEvent_error, class UObject* K2Node_CustomEvent_customData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
