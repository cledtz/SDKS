#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x310 - 0x2A8)
// WidgetBlueprintGeneratedClass FortRadioButtonGroup.FortRadioButtonGroup_C
class UFortRadioButtonGroup_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              SizeBox_Buttons;                                   // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Buttons;                               // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FFortRadioButtonItemStruct>    Buttons;                                           // 0x2C0(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<class UIconTextButton_C*>             CreatedButtons;                                    // 0x2D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_            RadioButtonClicked_Event;                          // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       WidthOverride;                                     // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonGroupLegacy*              CreatedButtonsGroup;                               // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CommonButtonGroup;                                 // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       HeightOverride;                                    // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRadioButtonGroup_C");
		return Clss;
	}

	void CenterOnWidget(class UIconTextButton_C* CallFunc_Array_Get_Item);
	void OnButtonClicked_Bind(class UCommonButtonLegacy* AssociatedButton, int32 ButtonIndex);
	void Destruct();
	void UpdateButtons();
	void ExecuteUbergraph_FortRadioButtonGroup(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, const struct FFortRadioButtonItemStruct& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UIconTextButton_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UCommonButtonLegacy* K2Node_CustomEvent_AssociatedButton, int32 K2Node_CustomEvent_ButtonIndex, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButtonGroupLegacy* CallFunc_SpawnObject_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
	void RadioButtonClicked_Event__DelegateSignature(int32 SelectedIndex);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
