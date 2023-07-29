#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x338 - 0x280)
// WidgetBlueprintGeneratedClass UI_ModuleInfo.UI_ModuleInfo_C
class UUI_ModuleInfo_C : public UUserWidget
{
public:
	class UBorder*                               Border_Rare_1;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_Rare_2;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_CompareGunName;                          // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_CurrentGunName_01;                       // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_CurrentGunName_02;                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Description;                             // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Rare_1;                                  // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Rare_2;                                  // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemCharacteristic_Parameter_C*    UI_GunParameter_AccuracyHip;                       // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemCharacteristic_Parameter_C*    UI_GunParameter_Damage;                            // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemCharacteristic_Parameter_C*    UI_GunParameter_MagazineCapacity;                  // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemCharacteristic_Parameter_C*    UI_GunParameter_Mobility;                          // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemCharacteristic_Parameter_C*    UI_GunParameter_RateOfFire;                        // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemCharacteristic_Parameter_C*    UI_GunParameter_Recoil;                            // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemCharacteristic_Parameter_C*    UI_GunParameter_RecoilControl;                     // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Menu_Solder_Weapon_Gun_Gunsmith_ModuleSummary_C* UI_Menu_Solder_Weapon_Gun_Gunsmith_ModuleSummary;  // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Description;                           // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_ModuleCharacteristics;                 // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_ModuleSummary;                         // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_Name;                               // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_Rare_1;                             // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_Rare_2;                             // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCurveFloat*                           CurveItemParameterMultiplier;                      // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_ModuleInfo_C");
		return Clss;
	}

	void SetDescription(class UClass* ModuleClass, bool CallFunc_IsValid_ReturnValue, class UDataContainerValue_Base* CallFunc_FindDataContainerValue_ReturnValue, class UDataContainerValue_FText* K2Node_DynamicCast_AsFText, bool K2Node_DynamicCast_bSuccess);
	void SetRare(class UClass* ModuleClass, enum class EItemRareType L_Rare, class FText Temp_text_Variable, bool K2Node_SwitchEnum_CmpSuccess, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, bool CallFunc_NotEqual_ByteByte_ReturnValue, enum class EItemRareType Temp_byte_Variable, uint8 CallFunc_Subtract_ByteByte_ReturnValue, class FText K2Node_Select_Default, int32 CallFunc_Conv_ByteToInt_ReturnValue, const struct FLinearColor& CallFunc_GetRareColor_NewParam, class UClass* K2Node_ClassDynamicCast_AsItem_Module_Skin, bool K2Node_ClassDynamicCast_bSuccess);
	void FindModuleCharacteristic(const struct FDataContainerObjectWrapper& DataContainer, const class FString& CharacteristicKey, float* Value, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UDataContainerValue_Base* CallFunc_FindDataContainerValue_ReturnValue, class UDataContainerValue_Base* K2Node_LowEntry_LocalVariable_Value__Object, bool CallFunc_IsValid_ReturnValue_1, class UDataContainerValue_Float* K2Node_DynamicCast_AsFloat, bool K2Node_DynamicCast_bSuccess);
	void ParseModuleInfo(class UClass* GunClass, class UClass* CurrentModuleClass, class UClass* ComparisonModuleClass, const struct FGunModuleInfo& L_ComparisonModuleInfo, const struct FGunModuleInfo& L_CurrentModuleInfo, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_FindModuleCharacteristic_Value, float CallFunc_FindModuleCharacteristic_Value_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValidClass_ReturnValue_1, bool CallFunc_NotEqual_ClassClass_ReturnValue, float CallFunc_FindModuleCharacteristic_Value_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, float CallFunc_FindModuleCharacteristic_Value_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue_3, float CallFunc_FindModuleCharacteristic_Value_4, float CallFunc_FindModuleCharacteristic_Value_5, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_4, double CallFunc_Add_DoubleDouble_ReturnValue_5, float CallFunc_FindModuleCharacteristic_Value_6, float CallFunc_FindModuleCharacteristic_Value_7, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, double CallFunc_Add_DoubleDouble_ReturnValue_6, double CallFunc_Add_DoubleDouble_ReturnValue_7, float CallFunc_FindModuleCharacteristic_Value_8, float CallFunc_FindModuleCharacteristic_Value_9, double CallFunc_Multiply_DoubleDouble_ReturnValue_7, float CallFunc_FindModuleCharacteristic_Value_10, double CallFunc_NormalizeToRange_ReturnValue, float CallFunc_FindModuleCharacteristic_Value_11, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_8, double CallFunc_Multiply_DoubleDouble_ReturnValue_9, double CallFunc_Add_DoubleDouble_ReturnValue_8, double CallFunc_Add_DoubleDouble_ReturnValue_9, bool CallFunc_IsValidClass_ReturnValue_2, double CallFunc_Conv_IntToDouble_ReturnValue_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_2, class UGunModulesInfo* K2Node_DynamicCast_AsGun_Modules_Info, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue_3, const struct FGunModuleInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_FindModuleCharacteristic_Value_12, double CallFunc_Add_DoubleDouble_ReturnValue_10, int32 Temp_int_Loop_Counter_Variable, float CallFunc_FindModuleCharacteristic_Value_13, double CallFunc_Add_DoubleDouble_ReturnValue_11, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_5, bool CallFunc_IsValidClass_ReturnValue_6, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_10, double CallFunc_Multiply_DoubleDouble_ReturnValue_11, double CallFunc_Add_DoubleDouble_ReturnValue_12, double CallFunc_Multiply_DoubleDouble_ReturnValue_12, double CallFunc_Add_DoubleDouble_ReturnValue_13, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_4, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_2, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_5, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_6, double CallFunc_Add_DoubleDouble_A_ImplicitCast_2, double CallFunc_Add_DoubleDouble_A_ImplicitCast_3, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_3, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_4, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_5, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_7, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_6, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_7, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_8, double CallFunc_Add_DoubleDouble_B_ImplicitCast_2, double CallFunc_Add_DoubleDouble_B_ImplicitCast_3, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_8);
	void Reset();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
