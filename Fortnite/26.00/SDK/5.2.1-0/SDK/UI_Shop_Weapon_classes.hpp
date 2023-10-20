#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x59 (0x2D9 - 0x280)
// WidgetBlueprintGeneratedClass UI_Shop_Weapon.UI_Shop_Weapon_C
class UUI_Shop_Weapon_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        HorizontalBox_Header;                              // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_WeaponInfo;                                // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                          UI_Button_Cosmetics;                               // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                          UI_Button_Primary;                                 // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                          UI_Button_Secondary;                               // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Shop_WeaponModules_C*              UI_Shop_WeaponCosmetics;                           // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Shop_WeaponInfo_C*                 UI_Shop_WeaponInfo;                                // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_WeaponClass;                        // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              WrapBox_PrimaryWeapons;                            // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              WrapBox_SecondaryWeapons;                          // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         PrimaryWeaponsInfo;                                // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Shop_Weapon_C* GetDefaultObj();

	void SetActivePage(int32 Index, class UUI_Button_C* Button, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UWidget* CallFunc_Array_Get_Item, class UUI_Button_C* K2Node_DynamicCast_AsUI_Button, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SetWeaponIsHovered(class UUI_ShopItem_C* Weapon, bool IsHovered, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess);
	void AddNewWeaponItem(class UClass* WeaponClass, class UUI_ShopItem_C** CreatedItem, class UUI_ShopItem_C* L_CreatedItem, class UClass* L_WeaponClass, enum class EGunSlot Temp_byte_Variable, class FName Temp_name_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Map_Contains_ReturnValue, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_ShopItem_C* CallFunc_Create_ReturnValue, class UWrapBox* K2Node_Select_Default, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void IsHoveredDelegate_Event(class UUI_ShopItem_C* Item, bool IsHovered);
	void BndEvt__UI_Button_Primary_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature(class UUI_Button_C* Button);
	void BndEvt__UI_Button_Secondary_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature(class UUI_Button_C* Button);
	void BndEvt__UI_Shop_Weapon_UI_Button_Modules_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(class UUI_Button_C* Button);
	void ExecuteUbergraph_UI_Shop_Weapon(int32 EntryPoint, class UUI_Button_C* K2Node_ComponentBoundEvent_Button, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, class UUI_ShopItem_C* K2Node_CustomEvent_Item, bool K2Node_CustomEvent_IsHovered, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_2, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, class UUI_ShopItem_C* CallFunc_AddNewWeaponItem_CreatedItem, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


