#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x4C8 - 0x4B0)
// WidgetBlueprintGeneratedClass AthenaItemTextureVariantPicker.AthenaItemTextureVariantPicker_C
class UAthenaItemTextureVariantPicker_C : public UFortVariantItemTexturePicker
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonRichTextBlock*                  TextBlock_AllItemsArchived;                        // 0x4B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_AvailableItems;                     // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaItemTextureVariantPicker_C* GetDefaultObj();

	void Construct();
	void OnToggleAllItemsArchivedMessage(bool bDisplay);
	void ExecuteUbergraph_AthenaItemTextureVariantPicker(int32 EntryPoint, float Temp_real_Variable, float Temp_real_Variable_1, bool Temp_bool_Variable, float Temp_real_Variable_2, float Temp_real_Variable_3, bool K2Node_Event_bDisplay, int32 CallFunc_SelectInt_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_IsMobileGame_ReturnValue, float K2Node_Select_Default, float K2Node_Select_Default_1);
};

}


