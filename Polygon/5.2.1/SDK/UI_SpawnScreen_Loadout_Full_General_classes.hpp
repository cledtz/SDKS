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
// WidgetBlueprintGeneratedClass UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C
class UUI_SpawnScreen_Loadout_Full_General_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_Back;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_PrimaryWeapon;                           // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_SecondaryWeapon;                         // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GunCharacteristics_C*              UI_ComparisonOfWeapons;                            // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* UI_SpawnScreen_Loadout_Full_Slot_PrimaryWeapon;    // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* UI_SpawnScreen_Loadout_Full_Slot_SecondaryWeapon;  // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Equipped;                              // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_SlotType;                           // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PG_PlayerState_Game_C*             PlayerState;                                       // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_C*             UI_Loadout;                                        // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClickBack;                                       // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<enum class EItemType, class FString>    RequestEquipItems;                                 // 0x2E8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_SpawnScreen_Loadout_Full_General_C");
		return Clss;
	}

	void AddNewItem(class UPlayFabJsonObject* Item, class UUI_SpawnScreen_Loadout_Full_Item_Gun_C* L_CreatedItem, class UPlayFabJsonObject* L_Item);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	void AddRequestEquipItem(const class FString& ItemInstanceId, enum class EItemType ItemType, enum class EItemType L_ItemType, const class FString& L_ItemInstanceId, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Map_Remove_ReturnValue);
	void GetListByItemClass(class UClass* Class, class UScrollBox** ScrollBox, enum class EGunSlot Temp_byte_Variable, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, class UScrollBox* K2Node_Select_Default);
	void GetSlotByItemClass(class UClass* ItemClass, class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C** Slot, class UClass* L_ItemClass, enum class EGunSlot Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BindItemDelegates(class UUI_SpawnScreen_Loadout_Full_Item_Gun_C* Item);
	void Item_OnHovered_Event(class UUI_SpawnScreen_Loadout_Full_Item_Gun_C* Item, bool IsHover);
	void BndEvt__UI_SpawnScreen_Loadout_Full_General_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SlotOnPressed_Event(class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* Slot);
	void SlotOnHovered_Event(class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* Slot, bool IsHover);
	void BndEvt__UI_SpawnScreen_Loadout_Full_General_UI_SpawnScreen_Loadout_Full_Slot_PrimaryWeapon_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature(class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* Slot);
	void BndEvt__UI_SpawnScreen_Loadout_Full_General_UI_SpawnScreen_Loadout_Full_Slot_SecondaryWeapon_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature(class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* Slot);
	void Reset();
	void Back();
	void ExecuteUbergraph_UI_SpawnScreen_Loadout_Full_General(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, bool K2Node_Event_IsDesignTime, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* K2Node_DynamicCast_AsUI_Spawn_Screen_Loadout_Full_Slot_Gun, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* K2Node_DynamicCast_AsUI_Spawn_Screen_Loadout_Full_Slot_Gun_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game, bool K2Node_DynamicCast_bSuccess_2, class UBP_PG_PlayerController_Game_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Game, bool K2Node_DynamicCast_bSuccess_3, class UUI_SpawnScreen_Loadout_Full_Item_Gun_C* K2Node_CustomEvent_Item_1, class UUI_SpawnScreen_Loadout_Full_Item_Gun_C* K2Node_CustomEvent_Item, bool K2Node_CustomEvent_IsHover_1, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, const struct FST_ItemInfo& K2Node_MakeStruct_ST_ItemInfo, class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* CallFunc_GetSlotByItemClass_Slot, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General_1, bool K2Node_ClassDynamicCast_bSuccess_1, const struct FST_ItemInfo& K2Node_MakeStruct_ST_ItemInfo_1, class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* K2Node_CustomEvent_Slot_1, int32 Temp_int_Array_Index_Variable_2, class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* K2Node_CustomEvent_Slot, bool K2Node_CustomEvent_IsHover, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General_2, bool K2Node_ClassDynamicCast_bSuccess_2, const struct FST_ItemInfo& K2Node_MakeStruct_ST_ItemInfo_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* K2Node_ComponentBoundEvent_Slot_1, class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* K2Node_ComponentBoundEvent_Slot, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_2, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item_2, class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* K2Node_DynamicCast_AsUI_Spawn_Screen_Loadout_Full_Slot_Gun_2, bool K2Node_DynamicCast_bSuccess_4, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game_1, bool K2Node_DynamicCast_bSuccess_5, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, TArray<class FString>& CallFunc_Map_Values_Values, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void OnClickBack__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
