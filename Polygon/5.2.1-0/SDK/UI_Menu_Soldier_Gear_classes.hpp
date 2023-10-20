#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2B0 - 0x280)
// WidgetBlueprintGeneratedClass UI_Menu_Soldier_Gear.UI_Menu_Soldier_Gear_C
class UUI_Menu_Soldier_Gear_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                              Overlay_Container;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Menu_Solder_Gear_Watch_Slot_C*     UI_Menu_Solder_Gear_Watch_Slot;                    // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Equipped;                              // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_Main;                               // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PG_PlayerState_Menu_C*             PlayerState;                                       // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Menu_Soldier_Gear_C* GetDefaultObj();

	void GetSlotByItemClass(class UClass* ItemClass, class UUserWidget** Slot, class UClass* L_ItemClass, enum class EItemType Temp_byte_Variable, class UUserWidget* Temp_object_Variable, class UUserWidget* Temp_object_Variable_1, class UUserWidget* Temp_object_Variable_2, class UUserWidget* Temp_object_Variable_3, class UUserWidget* K2Node_Select_Default);
	void Reset();
	void ParsePlayerInventory(const struct FST_ItemInfo& L_ItemInfo, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_GetStringField_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue, bool CallFunc_HasField_ReturnValue, bool CallFunc_GetBoolField_ReturnValue, bool CallFunc_HasField_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue, TArray<class UPlayFabJsonObject*>& CallFunc_GetObjectArrayField_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UPlayFabJsonObject* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetStringField_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnUpdatePlayerCombinedInfo_Event(TArray<enum class EModifiedData>& ModifiedData, const class FString& CustomString);
	void BndEvt__UI_Menu_Soldier_Gear_UI_Menu_Solder_Gear_Watch_Slot_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void ExecuteUbergraph_UI_Menu_Soldier_Gear(int32 EntryPoint, class UUI_Menu_Solder_Gear_Watch_Selector_C* CallFunc_Create_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_IsDesignTime, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, TArray<enum class EModifiedData>& K2Node_CustomEvent_ModifiedData, const class FString& K2Node_CustomEvent_CustomString, class UBP_PG_PlayerState_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_State_Menu, bool K2Node_DynamicCast_bSuccess, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue);
};

}


