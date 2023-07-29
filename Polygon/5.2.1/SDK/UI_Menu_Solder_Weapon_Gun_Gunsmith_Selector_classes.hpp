#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x310 - 0x280)
// WidgetBlueprintGeneratedClass UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C
class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OldModulesInfoHovered;                             // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OldModulesInfoAnimation;                           // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Button_Back;                                       // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_OldModulesInfo;                             // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel;                                       // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_List_C* UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_List;  // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C* UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_Accessory; // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C* UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_Barrel; // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C* UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_Magazine; // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C* UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_Optic; // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C* UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_Skin; // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C* UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_Strap; // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C* UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_Underbarrel; // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher;                                    // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Menu_Solder_Weapon_Gun_Gunsmith_C* UI_Menu_Soldier_Weapon_Gun_Gunsmith;               // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClickBack;                                       // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C");
		return Clss;
	}

	void GetAllModuleSlots(TArray<class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C*>* Slots, TArray<class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C*>& K2Node_MakeArray_Array);
	void HideIncompatibleModuleSlots(TSet<enum class EGunModuleType> L_CompatibleModuleTypes, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, TArray<class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C*>& CallFunc_GetAllModuleSlots_Slots, class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<enum class EGunModuleType>& CallFunc_Set_ToArray_Result, enum class EGunModuleType CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C* CallFunc_GetSlotByModuleType_Slot, bool CallFunc_Less_IntInt_ReturnValue_1, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UGunModulesInfo* K2Node_DynamicCast_AsGun_Modules_Info, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_2, const struct FGunModuleInfo& CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_IsValidClass_ReturnValue);
	void OnUpdateGunData(class UPlayFabJsonObject* L_ContainerCustomData, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UGunModulesInfo* K2Node_DynamicCast_AsGun_Modules_Info, bool K2Node_DynamicCast_bSuccess, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class FString>& CallFunc_GetFieldNames_ReturnValue, const struct FGunModuleInfo& CallFunc_Array_Get_Item, const class FString& CallFunc_Array_Get_Item_1, const class FString& CallFunc_GetStringField_ReturnValue, class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C* CallFunc_GetSlotByModuleType_Slot, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void GetSlotByModuleType(enum class EGunModuleType ModuleType, class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C** Slot, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C*>& CallFunc_GetAllModuleSlots_Slots, int32 CallFunc_Array_Length_ReturnValue, class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void Reset(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C*>& CallFunc_GetAllModuleSlots_Slots, int32 CallFunc_Array_Length_ReturnValue, class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Button_OldModulesInfo_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void OnUpdatePlayerCombinedInfo_Event(TArray<enum class EModifiedData>& ModifiedData, const class FString& CustomString);
	void BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Button_OldModulesInfo_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Button_OldModulesInfo_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool K2Node_Event_IsDesignTime, bool Temp_bool_IsClosed_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float Temp_real_Variable, class UUI_Menu_Solder_Weapon_Gun_Gunsmith_C* CallFunc_FindParentWidgetOfType_ReturnValue, class UPlayerState* CallFunc_GetPlayerState_ReturnValue, class UPlayFabJsonObject* CallFunc_ConstructJsonObject_ReturnValue, class UPG_PlayerState_Menu* K2Node_DynamicCast_AsPG_Player_State_Menu, bool K2Node_DynamicCast_bSuccess, class UPlayFabJsonObject* K2Node_LowEntry_LocalVariable_Value__Object, TArray<float>& CallFunc_GetNumberArrayField_ReturnValue, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_1, bool CallFunc_HasField_ReturnValue, const class FString& CallFunc_GetStringField_ReturnValue, bool CallFunc_DecodeJson_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_2, const class FString& CallFunc_GetStringField_ReturnValue_1, bool Temp_bool_IsClosed_Variable_1, const struct FDateTime& CallFunc_DateTimeFromIsoString_Result, bool CallFunc_DateTimeFromIsoString_ReturnValue, TArray<enum class EModifiedData>& K2Node_CustomEvent_ModifiedData, const class FString& K2Node_CustomEvent_CustomString, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C* CallFunc_Create_ReturnValue, const struct FDateTime& CallFunc_MakeDateTime_ReturnValue, const struct FTimespan& CallFunc_Subtract_DateTimeDateTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetTotalSeconds_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void OnClickBack__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
