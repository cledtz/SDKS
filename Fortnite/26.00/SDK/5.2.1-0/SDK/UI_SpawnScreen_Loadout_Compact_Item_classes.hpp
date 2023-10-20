#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2C0 - 0x280)
// WidgetBlueprintGeneratedClass UI_SpawnScreen_Loadout_Compact_Item.UI_SpawnScreen_Loadout_Compact_Item_C
class UUI_SpawnScreen_Loadout_Compact_Item_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_IsEquipped;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button;                                            // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Icon;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Loading;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Name;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    ItemJson;                                          // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                ItemClass;                                         // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_SpawnScreen_Loadout_Compact_Item_C* GetDefaultObj();

	void OnLoaded_135F2D0D451E0AF6D263CBA52274D8BD(class UObject* Loaded);
	void BndEvt__UI_SpawnScreen_Loadout_Item_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Initialize();
	void ExecuteUbergraph_UI_SpawnScreen_Loadout_Compact_Item(int32 EntryPoint, enum class EGunClass Temp_byte_Variable, class UPanelWidget* Temp_object_Variable, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UBP_PG_PlayerController_Game_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Game, bool K2Node_DynamicCast_bSuccess_1, class UBP_PG_PlayerController_Game_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Game_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UBP_PG_PlayerController_Game_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Game_2, bool K2Node_DynamicCast_bSuccess_3, const class FString& CallFunc_GetStringField_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, class UUI_SpawnScreen_Loadout_Compact_Slot_C* CallFunc_GetSlotByItemClass_ItemSlot, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue, bool CallFunc_HasField_ReturnValue, bool CallFunc_GetBoolField_ReturnValue, bool CallFunc_HasField_ReturnValue_1, class UPanelWidget* Temp_object_Variable_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GetBoolField_ReturnValue_1, bool CallFunc_HasField_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, class UPanelWidget* Temp_object_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPanelWidget* K2Node_Select_Default, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetStringField_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_3, TArray<class FString>& K2Node_MakeArray_Array, bool CallFunc_BooleanAND_ReturnValue_4, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_3, class UPG_PlayerState_Game* K2Node_DynamicCast_AsPG_Player_State_Game, bool K2Node_DynamicCast_bSuccess_4, TArray<class FString>& CallFunc_EquipItems_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array_1);
};

}


