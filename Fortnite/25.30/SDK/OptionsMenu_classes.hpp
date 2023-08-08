#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x10C8 - 0x10A0)
// WidgetBlueprintGeneratedClass OptionsMenu.OptionsMenu_C
class UOptionsMenu_C : public UFortOptionsMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x10A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortHUDElementWrapper_C*              FortHUDElementWrapper;                             // 0x10A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_ContentLetoSplitscreen;                    // 0x10B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_HeadingLeto;                               // 0x10B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTabGamePadConfig_v3_C*                TabGamepadConfig;                                  // 0x10C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptionsMenu_C");
		return Clss;
	}

	void LoadTabClasses();
	void Handle_Tab_Gamepad_Config_Action_Handler_States_SAVE(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable_1, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, enum class EInputActionState K2Node_Select_Default, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UTabGamePadConfig_v3_C* K2Node_DynamicCast_AsTab_Game_Pad_Config_V_3, bool K2Node_DynamicCast_bSuccess);
	void DialogResult_826C59EC4C294BC872A644878B35A13B(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_B31FF5BD4C0772716F27509EA83B418E(enum class EFortDialogResult Result, class FName ResultName);
	void BP_OnActivated();
	void HandleTabGamePadActionsNeedBinds(TArray<class FText>& ScreenLabels);
	void HandleTabGamepadConfigActionHandlerStates();
	void OnSettingsTabListPopulated();
	void BndEvt__TabList_Categories_K2Node_ComponentBoundEvent_0_OnTabButtonCreation__DelegateSignature(class FName TabId, class UCommonButtonBase* TabButton);
	void BP_OnDeactivated();
	void On_Override_Reset_Modal(bool bOverride);
	void OnShowResetToDefaultModal();
	void OnSplitscreenUpdateSizing();
	void ExecuteUbergraph_OptionsMenu(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, class UFortHUDContext* CallFunc_GetContext_ReturnValue_2, enum class ESubGame CallFunc_GetSubGame_ReturnValue, class FName Temp_name_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FName Temp_name_Variable_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UTabVideoOptions_New_C* K2Node_DynamicCast_AsTab_Video_Options_New, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EFortDialogResult Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, class FName Temp_name_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, TArray<class FText>& K2Node_CustomEvent_ScreenLabels, int32 Temp_int_Variable, class FText CallFunc_Array_Get_Item, class UWidget* CallFunc_GetChildAt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class UTabGamePadConfig_v3_C* K2Node_DynamicCast_AsTab_Game_Pad_Config_V_3, bool K2Node_DynamicCast_bSuccess_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_1, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue_1, class UTabGamePadConfig_v3_C* K2Node_DynamicCast_AsTab_Game_Pad_Config_V_3_1, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, enum class EFortDialogResult Temp_byte_Variable_1, class FName Temp_name_Variable_3, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButtonBase* K2Node_ComponentBoundEvent_TabButton, int32 CallFunc_GetChildrenCount_ReturnValue, class UIconTabButton_Legacy_C* K2Node_DynamicCast_AsIcon_Tab_Button_Legacy, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, enum class EFortDialogResult K2Node_CustomEvent_Result_1, class FName K2Node_CustomEvent_ResultName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool K2Node_CustomEvent_bOverride, bool CallFunc_IsValid_ReturnValue_2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
