#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x348 - 0x280)
// WidgetBlueprintGeneratedClass UI_SpawnScreen_Loadout_Full_Slot_Gun.UI_SpawnScreen_Loadout_Full_Slot_Gun_C
class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      SettingsCornersAnim;                               // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hover;                                             // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_Selected;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button;                                            // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_CustomizationSlot;                          // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ItemIcon;                                    // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Loading;                                   // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox;                                           // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_ItemName;                                // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_ItemType;                                // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_LoadingIcon_C*                     UI_LoadingIcon;                                    // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_ShootingType;                       // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                ItemClass;                                         // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  ItemSlot;                                          // 0x2F0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UPlayFabJsonObject*                    ItemJson;                                          // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSelected;                                        // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26D9[0x7];                                     // Fixing Size After Last Property 
	struct FVector2D                             Size;                                              // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnPressed;                                         // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* GetDefaultObj();

	void GetLoadoutUI(class UUI_SpawnScreen_Loadout_C** UI_SpawnScreen_Loadout, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Game_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Game, bool K2Node_DynamicCast_bSuccess);
	void SetIsSelected(bool IsSelected, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& K2Node_Select_Default);
	void OnLoaded_BCFD5D964A014C0D8CF5FBB6EF869C26(class UObject* Loaded);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__UI_SpawnScreen_Loadout_Full_Slot_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_SpawnScreen_Loadout_Full_Slot_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_SpawnScreen_Loadout_Full_Slot_Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__UI_SpawnScreen_Loadout_Full_Slot_Button_CustomizationSlot_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void SetSlotInfo(class UClass* ItemClass, class UPlayFabJsonObject* ItemJson);
	void ExecuteUbergraph_UI_SpawnScreen_Loadout_Full_Slot_Gun(int32 EntryPoint, int32 Temp_int_Variable, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, int32 Temp_int_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UUI_SpawnScreen_Loadout_C* CallFunc_GetLoadoutUI_UI_SpawnScreen_Loadout, class UUI_SpawnScreen_Loadout_C* CallFunc_GetLoadoutUI_UI_SpawnScreen_Loadout_1, class UUI_SpawnScreen_Loadout_C* CallFunc_GetLoadoutUI_UI_SpawnScreen_Loadout_2, class UClass* K2Node_CustomEvent_ItemClass, class UPlayFabJsonObject* K2Node_CustomEvent_ItemJson, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, int32 Temp_int_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EGunShootingType Temp_byte_Variable, int32 K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
	void OnPressed__DelegateSignature(class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* Slot);
	void OnHovered__DelegateSignature(class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* Slot, bool IsHover);
};

}


