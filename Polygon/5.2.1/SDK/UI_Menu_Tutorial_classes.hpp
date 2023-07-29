#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x2A9 - 0x280)
// WidgetBlueprintGeneratedClass UI_Menu_Tutorial.UI_Menu_Tutorial_C
class UUI_Menu_Tutorial_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Show;                                              // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Button_Close;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Base;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMediaPlayer*                          VideolRef;                                         // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlaying;                                         // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_Menu_Tutorial_C");
		return Clss;
	}

	void AddRewardForView(TArray<enum class EModifiedData>& K2Node_MakeArray_Array, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UPG_PlayerState_Menu* K2Node_DynamicCast_AsPG_Player_State_Menu, bool K2Node_DynamicCast_bSuccess, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue_1, float CallFunc_GetNumberField_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_SetNumberField_Number_ImplicitCast);
	void OnPlayFabResponse_CF947AC8424EFB0C9C68F2ABAE0E2B42(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void OnPlayFabResponse_279C81A643E72D1B08D5EAA62AF932CF(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__NewWidgetBlueprint_Button_51_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void OnEnd();
	void WritePlayerEvent_Success(const struct FClientWriteEventResponse& Result, class UObject* CustomData);
	void OnClosed();
	void WritePlayerEvent_Failure(const struct FPlayFabError& Error, class UObject* CustomData);
	void OnClose_Event();
	void OnContinue_Event();
	void ExecuteUbergraph_UI_Menu_Tutorial(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FPlayFabBaseModel& K2Node_CustomEvent_response_1, class UObject* K2Node_CustomEvent_customData_3, bool K2Node_CustomEvent_successful_1, bool Temp_bool_Variable, class UObject* Temp_object_Variable, const struct FPlayFabBaseModel& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FPlayFabBaseModel& K2Node_CustomEvent_response, class UObject* K2Node_CustomEvent_customData_2, bool K2Node_CustomEvent_successful, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool Temp_bool_Variable_1, class UObject* Temp_object_Variable_1, const struct FPlayFabBaseModel& Temp_struct_Variable_1, class UUI_Menu_Tutorial_Close_C* CallFunc_Create_ReturnValue, class UUI_Menu_Tutorial_Close_C* K2Node_LowEntry_LocalVariable_Value__Object, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_OpenSource_ReturnValue, class UMediaSoundComponent* CallFunc_AddComponentByClass_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class UMediaSoundComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double Temp_real_Variable, double CallFunc_GetWorldDeltaSeconds_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool Temp_bool_Variable_2, const struct FClientWriteClientPlayerEventRequest& K2Node_MakeStruct_ClientWriteClientPlayerEventRequest, class UPlayFabClientAPI* CallFunc_WritePlayerEvent_ReturnValue, const struct FClientWriteEventResponse& K2Node_CustomEvent_result, class UObject* K2Node_CustomEvent_customData_1, bool CallFunc_IsValid_ReturnValue, const struct FPlayFabError& K2Node_CustomEvent_error, class UObject* K2Node_CustomEvent_customData, const struct FClientWriteClientPlayerEventRequest& K2Node_MakeStruct_ClientWriteClientPlayerEventRequest_1, double Temp_real_Variable_1, class UPlayFabClientAPI* CallFunc_WritePlayerEvent_ReturnValue_1, double K2Node_Select_Default, double CallFunc_FInterpTo_Constant_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Pause_ReturnValue, bool CallFunc_Play_ReturnValue, double CallFunc_FInterpTo_Constant_Current_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, float CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
