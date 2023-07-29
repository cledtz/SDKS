#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xC8 - 0xA8)
// BlueprintGeneratedClass Task_MainMenu_Shop_Premium_Offers_GenerateStarterPack.Task_MainMenu_Shop_Premium_Offers_GenerateStarterPack_C
class UTask_MainMenu_Shop_Premium_Offers_GenerateStarterPack_C : public UAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPG_PlayerState_Menu*                  PlayerState;                                       // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        TimeToCloseOffer;                                  // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanContinue;                                       // 0xBC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E89[0x3];                                     // Fixing Size After Last Property
	class UBP_PG_PlayerController_Menu_C*        PlayerController;                                  // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Task_MainMenu_Shop_Premium_Offers_GenerateStarterPack_C");
		return Clss;
	}

	void OnPlayFabResponse_9BE38AD1458C3F3FCDB0EC89AA2FE699(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void OnPlayFabResponse_A8F1BBA44DF301669E4FCE91FD3F3DA7(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void ReceiveActivate();
	void GetServerTime_Failure(const struct FPlayFabError& Error, class UObject* CustomData);
	void GetServerTime_Success(const struct FClientGetTimeResult& Result, class UObject* CustomData);
	void StartOfferTimer_Success(const struct FClientUpdateUserDataResult& Result, class UObject* CustomData);
	void StartOfferTimer_Failure(const struct FPlayFabError& Error, class UObject* CustomData);
	void ReceiveFinished(enum class EActionState Reason);
	void ExecuteUbergraph_Task_MainMenu_Shop_Premium_Offers_GenerateStarterPack(int32 EntryPoint, const struct FPlayFabBaseModel& K2Node_CustomEvent_response, class UObject* K2Node_CustomEvent_customData_4, bool K2Node_CustomEvent_successful, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class UObject* Temp_object_Variable, const struct FPlayFabBaseModel& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_Greater_IntInt_ReturnValue, class UUI_MainMenu_Shop_Premium_Offers_StarterPack_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FPlayFabError& K2Node_CustomEvent_error_1, class UObject* K2Node_CustomEvent_customData_3, const struct FClientGetTimeResult& K2Node_CustomEvent_result_1, class UObject* K2Node_CustomEvent_customData_2, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue, const struct FDateTime& CallFunc_DateTimeFromIsoString_Result, bool CallFunc_DateTimeFromIsoString_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, const class FString& CallFunc_GetStringField_ReturnValue, const struct FDateTime& CallFunc_DateTimeFromIsoString_Result_1, bool CallFunc_DateTimeFromIsoString_ReturnValue_1, const class FString& CallFunc_GetStringField_ReturnValue_1, const struct FTimespan& CallFunc_Subtract_DateTimeDateTime_ReturnValue, const struct FTimespan& CallFunc_GetDuration_ReturnValue, float CallFunc_GetTotalSeconds_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue_1, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_2, bool CallFunc_HasField_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue_2, float CallFunc_GetNumberField_ReturnValue, bool CallFunc_HasField_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue_3, TArray<class UPlayFabJsonObject*>& CallFunc_GetObjectArrayField_ReturnValue, class UPlayFabJsonObject* CallFunc_Array_Get_Item, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue_4, float CallFunc_GetNumberField_ReturnValue_1, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_3, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_HasField_ReturnValue_2, const class FString& CallFunc_GetStringField_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_2, const struct FClientUpdateUserDataResult& K2Node_CustomEvent_result, class UObject* K2Node_CustomEvent_customData_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FPlayFabError& K2Node_CustomEvent_error, class UObject* K2Node_CustomEvent_customData, class UPlayFabJsonObject* CallFunc_ConstructJsonObject_ReturnValue, class UPlayFabJsonObject* CallFunc_ConstructJsonObject_ReturnValue_1, class UPlayFabJsonObject* K2Node_LowEntry_LocalVariable_Value__Object, class UPlayFabJsonObject* K2Node_LowEntry_LocalVariable_Value__1_Object, const struct FClientUpdateUserDataRequest& K2Node_MakeStruct_ClientUpdateUserDataRequest, const class FString& CallFunc_GetStringField_ReturnValue_3, class UPlayFabClientAPI* CallFunc_UpdateUserData_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_DecodeJson_ReturnValue, const struct FPlayFabBaseModel& Temp_struct_Variable_1, class UObject* Temp_object_Variable_1, enum class EActionState K2Node_Event_Reason, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UPlayFabClientAPI* CallFunc_GetTime_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue, class UObject* CallFunc_GetOwner_ReturnValue, class UTask_MainMenu_Shop_Premium_Offers_GenerateBoosterBundle_C* CallFunc_CreateAction_ReturnValue, class UObject* CallFunc_GetOwner_ReturnValue_1, class UTask_MainMenu_Shop_Premium_Offers_GenerateBoosterBundle_C* CallFunc_CreateAction_ReturnValue_1, class UObject* CallFunc_GetOwner_ReturnValue_2, class UTask_MainMenu_Shop_Premium_Offers_GenerateBoosterBundle_C* CallFunc_CreateAction_ReturnValue_2, const struct FPlayFabBaseModel& K2Node_CustomEvent_response_1, class UObject* K2Node_CustomEvent_customData_5, bool K2Node_CustomEvent_successful_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class UPG_PlayerState_Menu* K2Node_DynamicCast_AsPG_Player_State_Menu, bool K2Node_DynamicCast_bSuccess_2, double CallFunc_FTrunc_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
