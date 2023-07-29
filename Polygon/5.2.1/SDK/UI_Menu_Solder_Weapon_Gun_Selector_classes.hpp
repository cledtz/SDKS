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
// WidgetBlueprintGeneratedClass UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C
class UUI_Menu_Solder_Weapon_Gun_Selector_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_Back;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                             ListView_Assault;                                  // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                             ListView_LMG;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                             ListView_Marksman;                                 // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                             ListView_Pistol;                                   // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                             ListView_Shotgun;                                  // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                             ListView_SMG;                                      // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                             ListView_Sniper;                                   // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                          UI_Button_Assault;                                 // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                          UI_Button_LMG;                                     // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                          UI_Button_Marksman;                                // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                          UI_Button_Pistol;                                  // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                          UI_Button_Shotgun;                                 // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                          UI_Button_SMG;                                     // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                          UI_Button_Sniper;                                  // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GunCharacteristics_C*              UI_GunCharacteristic;                              // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_C* UI_PrimaryGun_EquippedGun;                         // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_C* UI_SecondaryGun_EquippedGun;                       // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_GunTypes;                           // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_PrimaryGun_Types;                   // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_SecondaryGun_Types;                 // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_Selector;                           // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_Menu_Solder_Weapon_Gun_Selector_C");
		return Clss;
	}

	void SetEquippedGun(const struct FST_ItemInfo& GunInfo, const struct FST_ItemInfo& L_EquippedWeaponInfo, enum class EGunSlot Temp_byte_Variable, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, class UUI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_C* K2Node_Select_Default);
	void GetEquippedGunByItemClass(class UClass* ItemClass, class UUI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_C** Gun, enum class EGunSlot Temp_byte_Variable, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, class UUI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_C* K2Node_Select_Default);
	void GetGunListByGunClass(enum class EGunClass GunClass, class UListView** List, enum class EGunClass Temp_byte_Variable, class UListView* Temp_object_Variable, class UListView* K2Node_Select_Default);
	void SetActiveGunClass(enum class EGunClass GunClass, class UUI_Button_C* Button, class UUI_Button_C* L_Button, enum class EGunClass L_GunClass, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UHorizontalBox* K2Node_DynamicCast_AsHorizontal_Box, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UListView* CallFunc_GetGunListByGunClass_List, int32 Temp_int_Array_Index_Variable_1, class UWidget* CallFunc_Array_Get_Item_1, class UUI_Button_C* K2Node_DynamicCast_AsUI_Button, bool K2Node_DynamicCast_bSuccess_1);
	void SetActiveGunSlot(enum class EGunSlot GunSlot, enum class EGunSlot L_WeaponSlot, enum class EGunClass Temp_byte_Variable, class UUI_Button_C* Temp_object_Variable, enum class EGunSlot Temp_byte_Variable_1, enum class EGunSlot Temp_byte_Variable_2, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class UUI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_C* K2Node_Select_Default, int32 K2Node_Select_Default_1, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, class UUI_Button_C* K2Node_Select_Default_2);
	void AddGun(const struct FST_ItemInfo& GunInfo, const struct FST_ItemInfo& L_GunInfo, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, enum class EGunSlot Temp_byte_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue, bool CallFunc_HasField_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_1, bool CallFunc_HasField_ReturnValue_1, bool CallFunc_GetBoolField_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, class UBP_Menu_Solder_Weapon_Gun_Selector_Item_Entry_C* CallFunc_SpawnObject_ReturnValue, class UListView* CallFunc_GetGunListByGunClass_List, class UUI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_C* K2Node_Select_Default, class UListView* K2Node_LowEntry_LocalVariable_Value__Object, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, TArray<class UObject*>& K2Node_LowEntry_LocalVariable_Value__1_Object, class UObject* CallFunc_Array_Get_Item, class UBP_Menu_Solder_Weapon_Gun_Selector_Item_Entry_C* K2Node_DynamicCast_AsBP_Menu_Solder_Weapon_Gun_Selector_Item_Entry, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, enum class EGunSlot Temp_byte_Variable_1, class UUI_Menu_Solder_Weapon_Gun_Slot_C* K2Node_Select_Default_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue);
	void Reset(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class UBP_Menu_Solder_Weapon_Gun_Selector_Item_Entry_C* CallFunc_SpawnObject_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item_1, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, class UListView* K2Node_DynamicCast_AsList_View, bool K2Node_DynamicCast_bSuccess, class UListView* CallFunc_GetGunListByGunClass_List, const struct FST_ItemInfo& K2Node_MakeStruct_ST_ItemInfo, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, class UWidget* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UListView* K2Node_DynamicCast_AsList_View_1, bool K2Node_DynamicCast_bSuccess_1);
	void BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Assault_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(class UUI_Button_C* Button);
	void BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_SMG_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature(class UUI_Button_C* Button);
	void BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Marksman_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature(class UUI_Button_C* Button);
	void BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Sniper_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature(class UUI_Button_C* Button);
	void BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Shotgun_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature(class UUI_Button_C* Button);
	void BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_LMG_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature(class UUI_Button_C* Button);
	void BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Pistol_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature(class UUI_Button_C* Button);
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Selector(int32 EntryPoint, class FName Temp_name_Variable, class UTask_Menu_CameraTransition_C* CallFunc_CreateAction_ReturnValue, class UTask_Menu_CameraTransition_C* CallFunc_CreateAction_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, class FName Temp_name_Variable_1, bool Temp_bool_IsClosed_Variable, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_6, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_5, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_4, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_3, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_2, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_1, class UUI_Button_C* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
