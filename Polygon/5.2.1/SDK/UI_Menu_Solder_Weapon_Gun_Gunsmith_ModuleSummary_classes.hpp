#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x2E0 - 0x280)
// WidgetBlueprintGeneratedClass UI_Menu_Solder_Weapon_Gun_Gunsmith_ModuleSummary.UI_Menu_Solder_Weapon_Gun_Gunsmith_ModuleSummary_C
class UUI_Menu_Solder_Weapon_Gun_Gunsmith_ModuleSummary_C : public UUserWidget
{
public:
	class UVerticalBox*                          VerticalBox_Cons;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Cons_Base;                             // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Pros;                                  // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Pros_Base;                             // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGunModuleInfo                        ModuleInfo;                                        // 0x2A0(0x40)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_Menu_Solder_Weapon_Gun_Gunsmith_ModuleSummary_C");
		return Clss;
	}

	void ParseCharacteristics(const struct FGunModuleInfo& ModuleInfo, class UUI_Menu_Solder_Weapon_Gun_Gunsmith_ModuleSummary_Entry_C* L_CreatedEntry, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, class UUI_Menu_Solder_Weapon_Gun_Gunsmith_ModuleSummary_Entry_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class ESlateVisibility Temp_byte_Variable_4, bool Temp_bool_Variable_2, class FName Temp_name_Variable, bool CallFunc_IsValid_ReturnValue_1, class UDataContainerValue_Base* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UDataContainerValue_Base* K2Node_LowEntry_LocalVariable_Value__Object, class UDataContainerValue_DataObject* K2Node_DynamicCast_AsData_Object, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class UDataContainerValue_Base*>& CallFunc_Map_Values_Values, bool CallFunc_IsValid_ReturnValue_2, class UDataContainerValue_Base* CallFunc_Array_Get_Item, class UDataContainerValue_DataObject* K2Node_DynamicCast_AsData_Object_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, bool Temp_bool_Variable_3, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, int32 CallFunc_GetChildrenCount_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_1, class UVerticalBox* K2Node_Select_Default_2, enum class ESlateVisibility Temp_byte_Variable_5, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
