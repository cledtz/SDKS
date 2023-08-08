#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x620 - 0x568)
// WidgetBlueprintGeneratedClass GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C
class UGamepadCustomActionSelectorPanel_v3_C : public UFortGamePadCustomActionSelectorPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x568(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_Clear;                                      // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorder_Clear;                                // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonListView*                       CommonListView_GamepadActions;                     // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRichTextBlockLegacy*              FortRichTextBlock_Clear1;                          // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRichTextBlockLegacy*              FortRichTextBlock_Clear2;                          // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                      KeybindWidget_Clear;                               // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuHeader_C*                  OptionsMenuHeader;                                 // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   Back;                                              // 0x5A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	FMulticastInlineDelegateProperty_            CustomActionSelected;                              // 0x5B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UFortOptionsMenuInputData*>     CurrentInputData;                                  // 0x5C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            CustomClosedUsingBack;                             // 0x5D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            CustomClearButton;                                 // 0x5E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FKey                                  KeyNone;                                           // 0x5F8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   Clear;                                             // 0x610(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GamepadCustomActionSelectorPanel_v3_C");
		return Clss;
	}

	void HandleClear(bool* PassThrough);
	void CreateCustomListItem(class FName ActionName, enum class EFortInputActionGroup InputActionGroup, class UGamepadKeyTextButton_C** ReturnItem, class FName ActionName_Local, enum class EFortInputActionGroup InputActionGroup_Local, class FName CustomPresetName_Local, class UGamepadKeyTextButton_C* ReturnItem_Local, bool K2Node_SwitchEnum_CmpSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetCustomGamepadInputPresetName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetScreenLabel_ReturnValue, class UGamepadKeyTextButton_C* CallFunc_Create_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_2, const struct FKey& CallFunc_GetKeyForAction_ReturnValue);
	void HandleBack(bool* PassThrough);
	void Construct();
	void UpdatePanel(TArray<class UFortOptionsMenuInputData*>& InputData);
	void BP_OnItemClicked_Bind(class UObject* Item);
	void BP_OnActivated();
	void BP_OnDeactivated();
	void BndEvt__Button_Clear_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, TArray<class UFortOptionsMenuInputData*>& K2Node_CustomEvent_InputData, class UObject* K2Node_CustomEvent_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGamepadKeyTextButton_C* K2Node_DynamicCast_AsGamepad_Key_Text_Button, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, class UFortOptionsMenuInputData* CallFunc_Array_Get_Item, int32 CallFunc_GetIndexForItem_ReturnValue, enum class EFortInputActionGroup CallFunc_GetInputActionGroup_ReturnValue, class UGamepadKeyTextButton_C* CallFunc_CreateCustomListItem_ReturnItem, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void CustomClearButton__DelegateSignature();
	void CustomClosedUsingBack__DelegateSignature();
	void CustomActionSelected__DelegateSignature(int32 SelectedIndex, class FName ActionName);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
