#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x330 - 0x280)
// WidgetBlueprintGeneratedClass UI_GunCharacteristics.UI_GunCharacteristics_C
class UUI_GunCharacteristics_C : public UUserWidget
{
public:
	class UHorizontalBox*                        HorizontalBox_CompareGunName;                      // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_CompareGunName;                          // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_CurrentGunName;                          // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GunCharacteristics_Module_C*       UI_GunCharacteristic_Module_Accessory;             // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GunCharacteristics_Module_C*       UI_GunCharacteristic_Module_Barrel;                // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GunCharacteristics_Module_C*       UI_GunCharacteristic_Module_Magazine;              // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GunCharacteristics_Module_C*       UI_GunCharacteristic_Module_Optic;                 // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GunCharacteristics_Module_C*       UI_GunCharacteristic_Module_Underbarrel;           // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemCharacteristic_Parameter_C*    UI_GunParameter_AccuracyHip;                       // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemCharacteristic_Parameter_C*    UI_GunParameter_Damage;                            // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemCharacteristic_Parameter_C*    UI_GunParameter_MagazineCapacity;                  // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemCharacteristic_Parameter_C*    UI_GunParameter_Mobility;                          // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemCharacteristic_Parameter_C*    UI_GunParameter_Range;                             // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemCharacteristic_Parameter_C*    UI_GunParameter_RateOfFire;                        // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemCharacteristic_Parameter_C*    UI_GunParameter_Recoil;                            // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemCharacteristic_Parameter_C*    UI_GunParameter_RecoilControl;                     // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Modules;                               // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCurveFloat*                           CurveItemParameterMultiplier;                      // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FST_ItemInfo                          CompareGun;                                        // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FST_ItemInfo                          CurrentGun;                                        // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_GunCharacteristics_C");
		return Clss;
	}

	void Get_Module_by_Type(enum class EGunModuleType Type, class UUI_GunCharacteristics_Module_C** Module, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UUI_GunCharacteristics_Module_C* K2Node_DynamicCast_AsUI_Gun_Characteristics_Module, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void ParseGunModules(const struct FGunModuleInfo& L_RelatedModuleIt, class UUI_GunCharacteristics_Module_C* L_Module_UI_Entry, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class UUI_GunCharacteristics_Module_C* CallFunc_Get_Module_by_Type_Module, int32 CallFunc_Add_IntInt_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_1, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_2, class UClass* K2Node_ClassDynamicCast_AsItem_Module_General, bool K2Node_ClassDynamicCast_bSuccess, const class FString& CallFunc_GetStringField_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UGunModulesInfo* K2Node_DynamicCast_AsGun_Modules_Info, bool K2Node_DynamicCast_bSuccess, const struct FGunModuleInfo& CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void ParseCharacteristics(const struct FST_ItemInfo& CompareGun, const struct FST_ItemInfo& CurrentGun, TSubclassOf<class UItem_Gun_General> L_CurrentGunClass, TSubclassOf<class UItem_Gun_General> L_CompareGunClass, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool Temp_bool_Variable, bool CallFunc_NotEqual_ClassClass_ReturnValue, double K2Node_Select_Default, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General_1, bool K2Node_ClassDynamicCast_bSuccess_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_NormalizeToRange_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_Conv_IntToDouble_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double CallFunc_NormalizeToRange_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double K2Node_Select_Option_1_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_SetParameters_CompareParameter_ImplicitCast, double K2Node_Select_Option_0_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast_1, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_SetParameters_CurrentParameter_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3, double CallFunc_SetParameters_CompareParameter_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_4, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_5);
	void Reset();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
