#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2C0 - 0x280)
// WidgetBlueprintGeneratedClass UI_Shop_VIP.UI_Shop_VIP_C
class UUI_Shop_VIP_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            TextBlock_VIPTimer;                                // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Shop_VIP_Button_C*                 UI_Shop_VIP_Button_1Day;                           // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Shop_VIP_Button_C*                 UI_Shop_VIP_Button_30Days;                         // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Shop_VIP_Button_C*                 UI_Shop_VIP_Button_365Days;                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Shop_VIP_Button_C*                 UI_Shop_VIP_Button_7Days;                          // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Shop_VIP_Button_C*                 UI_Shop_VIP_Button_90Days;                         // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_ActiveState;                        // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Shop_VIP_C* GetDefaultObj();

	void OnUpdatePlayerCombinedInfo_Event(TArray<enum class EModifiedData>& ModifiedData, const class FString& CustomString);
	void Construct();
	void ExecuteUbergraph_UI_Shop_VIP(int32 EntryPoint, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerState_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_State_Menu, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue, float CallFunc_GetNumberField_ReturnValue, int32 CallFunc_Round_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 K2Node_LowEntry_LocalVariable_Value__Object, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, TArray<enum class EModifiedData>& K2Node_CustomEvent_ModifiedData, const class FString& K2Node_CustomEvent_CustomString, class UBP_PG_PlayerState_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_State_Menu_1, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_IsClosed_Variable, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess_2, const struct FDateTime& CallFunc_UtcNow_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_3, class UBP_PG_PlayerState_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_State_Menu_2, bool K2Node_DynamicCast_bSuccess_3, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UPlayFabJsonObject*>& CallFunc_GetObjectArrayField_ReturnValue, class UPlayFabJsonObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_GetStringField_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FDateTime& CallFunc_DateTimeFromIsoString_Result, bool CallFunc_DateTimeFromIsoString_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FTimespan& CallFunc_Subtract_DateTimeDateTime_ReturnValue, const struct FTimespan& CallFunc_GetDuration_ReturnValue, const class FString& CallFunc_GetStringField_ReturnValue_1, int32 CallFunc_GetMinutes_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_GetHours_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, int32 CallFunc_GetDays_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int64 CallFunc_Conv_IntToInt64_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, double CallFunc_Round_A_ImplicitCast);
};

}


