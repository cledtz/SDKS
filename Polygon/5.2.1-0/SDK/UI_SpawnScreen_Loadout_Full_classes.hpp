#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2B0 - 0x280)
// WidgetBlueprintGeneratedClass UI_SpawnScreen_Loadout_Full.UI_SpawnScreen_Loadout_Full_C
class UUI_SpawnScreen_Loadout_Full_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Lines_Map;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LinesRainbow_Map;                                  // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_Full_General_C* UI_SpawnScreen_Loadout_Full_General;               // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_Full_GunCustomization_C* UI_SpawnScreen_Loadout_Full_GunCustomization;      // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_SpawnScreen_Loadout_Full_C* GetDefaultObj();

	void AddNewItem(class UPlayFabJsonObject* Item, class UPlayFabJsonObject* L_Item);
	void Reset();
	void BndEvt__UI_SpawnScreen_Loadout_Full_UI_SpawnScreen_Loadout_Full_WeaponCustomization_K2Node_ComponentBoundEvent_0_OnClickBack__DelegateSignature();
	void BndEvt__UI_SpawnScreen_Loadout_Full_UI_SpawnScreen_Loadout_Full_General_K2Node_ComponentBoundEvent_1_OnClickBack__DelegateSignature();
	void InventoryUpdated();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_SpawnScreen_Loadout_Full(int32 EntryPoint, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Game_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Game, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UBP_PG_PlayerController_Game_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Game_1, bool K2Node_DynamicCast_bSuccess_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UBP_PG_PlayerController_Game_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Game_2, bool K2Node_DynamicCast_bSuccess_2, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1);
};

}


