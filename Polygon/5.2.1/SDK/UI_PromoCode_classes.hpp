#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2C0 - 0x280)
// WidgetBlueprintGeneratedClass UI_PromoCode.UI_PromoCode_C
class UUI_PromoCode_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ShowErrorMessage;                                  // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Button_Cancel;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Ok;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Redeem;                                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      EditableTextBox_Code;                              // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_ErrorMessage;                            // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_Main;                               // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_PromoCode_C");
		return Clss;
	}

	void GiveRewardForPromoCode(TArray<class UPlayFabJsonObject*>& GrantedItems, class UBP_PG_PlayerState_Menu_C* L_PlayerState, const TArray<class UPlayFabJsonObject*>& L_GrantedItems, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue_1, class UPlayFabJsonObject* CallFunc_Array_Get_Item, TArray<class UPlayFabJsonObject*>& CallFunc_GetObjectArrayField_ReturnValue, const class FString& CallFunc_GetStringField_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const class FString& CallFunc_GetStringField_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<enum class EModifiedData>& K2Node_MakeArray_Array, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_PG_PlayerState_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_State_Menu, bool K2Node_DynamicCast_bSuccess);
	void OnPlayFabResponse_A63AC9924A800319BAD27F87EEB79850(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void BndEvt__UI_PromoCode_Button_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_PromoCode_Button_Redeem_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_PromoCode_Button_OK_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void ActivatePromoCode_Success(const struct FClientExecuteCloudScriptResult& Result, class UObject* CustomData);
	void ActivatePromoCode_Failure(const struct FPlayFabError& Error, class UObject* CustomData);
	void ExecuteUbergraph_UI_PromoCode(int32 EntryPoint, class FText CallFunc_GetText_ReturnValue, const struct FPlayFabBaseModel& K2Node_CustomEvent_response, class UObject* K2Node_CustomEvent_customData_2, bool K2Node_CustomEvent_successful, bool CallFunc_TextIsEmpty_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UObject* Temp_object_Variable, const struct FPlayFabBaseModel& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class UPlayFabJsonObject* CallFunc_ConstructJsonObject_ReturnValue, class UPlayFabJsonObject* K2Node_LowEntry_LocalVariable_Value__Object, class FText CallFunc_GetText_ReturnValue_1, const struct FClientExecuteCloudScriptRequest& K2Node_MakeStruct_ClientExecuteCloudScriptRequest, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UPlayFabClientAPI* CallFunc_ExecuteCloudScript_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FClientExecuteCloudScriptResult& K2Node_CustomEvent_result, class UObject* K2Node_CustomEvent_customData_1, const struct FPlayFabError& K2Node_CustomEvent_error, class UObject* K2Node_CustomEvent_customData, class UPlayFabJsonObject* K2Node_LowEntry_LocalVariable_Value__1_Object, TArray<class UPlayFabJsonObject*>& CallFunc_GetObjectArrayField_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, float CallFunc_GetNumberField_ReturnValue, bool CallFunc_GetBoolField_ReturnValue, int32 CallFunc_Round_ReturnValue, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText K2Node_Select_Default, class UPG_PlayerController_Menu* K2Node_DynamicCast_AsPG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, double CallFunc_Round_A_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
