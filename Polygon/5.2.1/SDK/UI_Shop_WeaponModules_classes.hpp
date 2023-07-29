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
// WidgetBlueprintGeneratedClass UI_Shop_WeaponModules.UI_Shop_WeaponModules_C
class UUI_Shop_WeaponModules_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        HorizontalBox_Header;                              // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                          UI_Button_Skin;                                    // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                          UI_Button_Strap;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_ModuleClass;                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              WrapBox_Skin;                                      // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              WrapBox_Strap;                                     // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_Shop_WeaponModules_C");
		return Clss;
	}

	void SetActivePage(int32 Index, class UUI_Button_C* Button, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UUI_Button_C* K2Node_DynamicCast_AsUI_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue);
	void AddNewModuleItem(class UClass* ModuleID, class UUI_ShopItem_C** CreatedItem, bool L_IsPremium, class UClass* L_ModuleClass, class UUI_ShopItem_C* L_CreatedItem, class UWrapBox* Temp_object_Variable, class UWrapBox* Temp_object_Variable_1, class UWrapBox* Temp_object_Variable_2, class UWrapBox* Temp_object_Variable_3, class UWrapBox* Temp_object_Variable_4, class UWrapBox* Temp_object_Variable_5, enum class EGunModuleType Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UDataContainerValue_Base* CallFunc_FindDataContainerValue_ReturnValue, class UDataContainerValue_DataObject* K2Node_DynamicCast_AsData_Object, bool K2Node_DynamicCast_bSuccess, class UDataContainerValue_Base* CallFunc_FindDataContainerValue_ReturnValue_1, class UDataContainerValue_Int32* K2Node_DynamicCast_AsInt32, bool K2Node_DynamicCast_bSuccess_1, class UDataContainerValue_Base* CallFunc_FindDataContainerValue_ReturnValue_2, class UDataContainerValue_Int32* K2Node_DynamicCast_AsInt32_1, bool K2Node_DynamicCast_bSuccess_2, class UWrapBox* K2Node_Select_Default, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue, class UUI_ShopItem_C* CallFunc_Create_ReturnValue);
	void OnLoaded_661D94784290BA359719499C39B3D723(class UObject* Loaded);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__UI_Button_Paint_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature(class UUI_Button_C* Button);
	void BndEvt__UI_Shop_WeaponModules_UI_Button_Strap_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(class UUI_Button_C* Button);
	void ExecuteUbergraph_UI_Shop_WeaponModules(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* Temp_object_Variable, class UGunModulesInfo* K2Node_DynamicCast_AsGun_Modules_Info, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FGunModuleInfo& CallFunc_Array_Get_Item, class UUI_ShopItem_C* CallFunc_AddNewModuleItem_CreatedItem, bool K2Node_Event_IsDesignTime, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 Temp_int_Loop_Counter_Variable_1, class FName CallFunc_Array_Get_Item_1, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_1, class UUI_Button_C* K2Node_ComponentBoundEvent_Button);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
