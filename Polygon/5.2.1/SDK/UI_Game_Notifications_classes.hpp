#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x2B8 - 0x280)
// WidgetBlueprintGeneratedClass UI_Game_Notifications.UI_Game_Notifications_C
class UUI_Game_Notifications_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                              Overlay;                                           // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Game_Notifications_CountdownTimer_C* UI_CountdownTimer;                                 // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SpawnProtection_C*                 UI_SpawnProtection;                                // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FText>                          NotificationQueue;                                 // 0x2A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUI_Game_Notifications_Entry_C*        ActiveNotification;                                // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_Game_Notifications_C");
		return Clss;
	}

	void OnCaptured(class UControlPoint* ControlPoint, class UControlPoint* L_ControlPoint, bool Temp_bool_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, bool Temp_bool_Variable_1, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_GetControlPointNameAsString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UPG_PlayerState_Game* K2Node_DynamicCast_AsPG_Player_State_Game, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText K2Node_Select_Default, const class FString& K2Node_Select_Default_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void OnIsCapture(class UControlPoint* ControlPoint, class UPG_PlayerState_Game* L_PlayerState, bool L_IsCapturingByAllies, class UControlPoint* L_ControlPoint, const class FString& Temp_string_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess, class FText Temp_text_Variable, class FText Temp_text_Variable_1, const class FString& Temp_string_Variable_1, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable_1, const class FString& K2Node_Select_Default, class FText K2Node_Select_Default_1, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const class FString& CallFunc_GetControlPointNameAsString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue_3, class FText CallFunc_Format_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_2, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UPG_PlayerState_Game* K2Node_DynamicCast_AsPG_Player_State_Game, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue_3);
	void OnIsCapture_Event(class UControlPoint* ControlPoint);
	void OnCapturedTeam_Event(class UControlPoint* ControlPoint);
	void AddNotification(class FText Text);
	void OnDestroyed_Event();
	void Construct();
	void ExecuteUbergraph_UI_Game_Notifications(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_IsClosed_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable_1, class UBP_PG_GameState_Game_C* CallFunc_GetGameStateBP_MyGameState, class UControlPoint* K2Node_CustomEvent_ControlPoint_1, int32 CallFunc_Array_Length_ReturnValue, class UControlPoint* K2Node_CustomEvent_ControlPoint, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class FText K2Node_CustomEvent_Text, class UControlPoint* CallFunc_Array_Get_Item, bool CallFunc_TextIsEmpty_ReturnValue, class UControlPoint* K2Node_LowEntry_LocalVariable_Value__Object, bool CallFunc_Not_PreBool_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_Game_Notifications_Entry_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, double CallFunc_GetRealTimeSeconds_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_GetRealTimeSeconds_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_Delay_Duration_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
