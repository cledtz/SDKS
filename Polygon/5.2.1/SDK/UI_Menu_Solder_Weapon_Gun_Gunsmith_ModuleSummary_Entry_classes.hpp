#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x2A1 - 0x280)
// WidgetBlueprintGeneratedClass UI_Menu_Solder_Weapon_Gun_Gunsmith_ModuleSummary_Entry.UI_Menu_Solder_Weapon_Gun_Gunsmith_ModuleSummary_Entry_C
class UUI_Menu_Solder_Weapon_Gun_Gunsmith_ModuleSummary_Entry_C : public UUserWidget
{
public:
	class UBorder*                               Border_Background;                                 // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Positivity;                              // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Text;                                    // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDataContainerValue_DataObject*        CharacteristicData;                                // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Effect;                                            // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_Menu_Solder_Weapon_Gun_Gunsmith_ModuleSummary_Entry_C");
		return Clss;
	}

	void ParseCharacteristic(const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FName Temp_name_Variable, const struct FLinearColor& Temp_struct_Variable_1, class FText K2Node_Select_Default, bool Temp_bool_Variable_1, const struct FLinearColor& K2Node_Select_Default_1, class UDataContainerValue_Base* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UDataContainerValue_Base* K2Node_LowEntry_LocalVariable_Value__Object, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UDataContainerValue_Bool* K2Node_DynamicCast_AsBool, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FName Temp_name_Variable_1, class UDataContainerValue_Base* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UDataContainerValue_Base* K2Node_LowEntry_LocalVariable_Value__1_Object, bool CallFunc_IsValid_ReturnValue_2, class UDataContainerValue_FText* K2Node_DynamicCast_AsFText, bool K2Node_DynamicCast_bSuccess_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
