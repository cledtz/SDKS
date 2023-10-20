#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2C0 - 0x280)
// WidgetBlueprintGeneratedClass UI_Menu_Soldier_Weapon.UI_Menu_Soldier_Weapon_C
class UUI_Menu_Soldier_Weapon_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_Menu_Solder_Weapon_Gun_Gunsmith_C* UI_Menu_Solder_Weapon_Gun_Gunsmith;                // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Menu_Solder_Weapon_Gun_Selector_C* UI_Menu_Solder_Weapon_Gun_Selector;                // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Menu_Solder_Weapon_Gun_Slot_C*     UI_Menu_Solder_Weapon_Gun_Slot_Primary;            // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Menu_Solder_Weapon_Gun_Slot_C*     UI_Menu_Solder_Weapon_Gun_Slot_Secondary;          // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Equipped;                              // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher;                                    // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PG_PlayerState_Menu_C*             PlayerState;                                       // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Menu_Soldier_Weapon_C* GetDefaultObj();

	void SetActiveMenu(int32 Index, int32 L_Index, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void GetSlotByItemClass(class UClass* ItemClass, class UUserWidget** Slot, class UClass* L_ItemClass, enum class EGunSlot Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, class UUserWidget* K2Node_Select_Default);
	void ParsePlayerInventory(const struct FST_ItemInfo& L_ItemInfo, class UPlayFabJsonObject* L_ItemJson, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue, TArray<class UPlayFabJsonObject*>& CallFunc_GetObjectArrayField_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UPlayFabJsonObject* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetStringField_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void OnUpdatePlayerCombinedInfo_Event(TArray<enum class EModifiedData>& ModifiedData, const class FString& CustomString);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__UI_Solder_Customization_UI_SolderCustomizationSlot_PrimaryWeapon_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature(class UUI_Menu_Solder_Weapon_Gun_Slot_C* Slot);
	void BndEvt__UI_Solder_Customization_UI_SolderCustomizationSlot_SecondaryWeapon_K2Node_ComponentBoundEvent_1_OnSelected__DelegateSignature(class UUI_Menu_Solder_Weapon_Gun_Slot_C* Slot);
	void Construct();
	void ExecuteUbergraph_UI_Menu_Soldier_Weapon(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, TArray<enum class EModifiedData>& K2Node_CustomEvent_ModifiedData, const class FString& K2Node_CustomEvent_CustomString, class UBP_PG_PlayerState_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_State_Menu, bool K2Node_DynamicCast_bSuccess, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, class UUI_Menu_Solder_Weapon_Gun_Slot_C* K2Node_ComponentBoundEvent_Slot_1, class UUI_Menu_Solder_Weapon_Gun_Slot_C* K2Node_ComponentBoundEvent_Slot, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


