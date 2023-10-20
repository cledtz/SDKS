#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x378 - 0x280)
// WidgetBlueprintGeneratedClass UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C
class UUI_SpawnScreen_Loadout_Full_GunCustomization_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_Back;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* UI_SpawnScreen_Loadout_Full_Slot_Module_Accessory; // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* UI_SpawnScreen_Loadout_Full_Slot_Module_Barrel;    // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* UI_SpawnScreen_Loadout_Full_Slot_Module_Optic;     // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* UI_SpawnScreen_Loadout_Full_Slot_Module_Skin;      // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* UI_SpawnScreen_Loadout_Full_Slot_Module_Strap;     // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* UI_SpawnScreen_Loadout_Full_Slot_Module_Underbarrel; // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Accessory;                             // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Barrel;                                // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Equipped;                              // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Optic;                                 // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Skin;                                  // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Strap;                                 // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Underbarrel;                           // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_Inventory;                          // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UPlayFabJsonObject*>            Modules;                                           // 0x300(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UPlayFabJsonObject*                    GunJsonInfo;                                       // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClickBack;                                       // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<uint8, class FString>                   RequestNewModules;                                 // 0x328(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUI_SpawnScreen_Loadout_Full_GunCustomization_C* GetDefaultObj();

	void Reset(class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_SpawnScreen_Loadout_Full_Item_Module_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UUI_SpawnScreen_Loadout_Full_Item_Module_C* CallFunc_Create_ReturnValue_1, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class UUI_SpawnScreen_Loadout_Full_Item_Module_C* CallFunc_Create_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_2, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, class UUI_SpawnScreen_Loadout_Full_Item_Module_C* CallFunc_Create_ReturnValue_3, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, class UUI_SpawnScreen_Loadout_Full_Item_Module_C* CallFunc_Create_ReturnValue_4, class UPanelSlot* CallFunc_AddChild_ReturnValue_3, class UPanelSlot* CallFunc_AddChild_ReturnValue_4, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_5, class UUI_SpawnScreen_Loadout_Full_Item_Module_C* CallFunc_Create_ReturnValue_5, class UPanelSlot* CallFunc_AddChild_ReturnValue_5);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	void AddRequestSetModule(const class FString& ItemInstanceId, enum class EGunModuleType ModuleType, enum class EGunModuleType L_ModuleType, const class FString& L_ItemInstanceId, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Map_Remove_ReturnValue);
	void AddNewModule(class UPlayFabJsonObject* Item, class UPlayFabJsonObject* L_Item);
	void SelectModuleSlot(int32 Index, class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* Slot, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* K2Node_DynamicCast_AsUI_Spawn_Screen_Loadout_Full_Slot_Module, bool K2Node_DynamicCast_bSuccess);
	void GetModuleSlotByItemClass(class UClass* ItemClass, class UUI_SpawnScreen_Loadout_Full_Slot_Module_C** Slot, class UClass* K2Node_ClassDynamicCast_AsItem_Module_General, bool K2Node_ClassDynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess);
	void GetModuleListByItemClass(class UClass* ItemClass, class UVerticalBox** List, class UClass* K2Node_ClassDynamicCast_AsItem_Module_General, bool K2Node_ClassDynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess);
	void GrabModulesInfo(class UPlayFabJsonObject* GunJsonInfo, class UUI_SpawnScreen_Loadout_Full_Item_Module_C* L_CreatedItem, const TArray<class UClass*>& L_NotAvailableModules, class UClass* L_Module);
	void PreConstruct(bool IsDesignTime);
	void ResetWeapon();
	void BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void FullReset();
	void BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Optic_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature(class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* Slot);
	void BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Barrel_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature(class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* Slot);
	void BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Underbarrel_K2Node_ComponentBoundEvent_9_OnPressed__DelegateSignature(class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* Slot);
	void BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Accessory_K2Node_ComponentBoundEvent_10_OnPressed__DelegateSignature(class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* Slot);
	void BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Skin_K2Node_ComponentBoundEvent_11_OnPressed__DelegateSignature(class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* Slot);
	void BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Strap_K2Node_ComponentBoundEvent_12_OnPressed__DelegateSignature(class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* Slot);
	void Back();
	void ExecuteUbergraph_UI_SpawnScreen_Loadout_Full_GunCustomization(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetStringField_ReturnValue, TArray<class FString>& CallFunc_Map_Values_Values, class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* K2Node_ComponentBoundEvent_Slot_5, class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* K2Node_ComponentBoundEvent_Slot_4, class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* K2Node_ComponentBoundEvent_Slot_3, class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* K2Node_ComponentBoundEvent_Slot_2, class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* K2Node_ComponentBoundEvent_Slot_1, class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* K2Node_ComponentBoundEvent_Slot);
	void OnClickBack__DelegateSignature();
};

}


