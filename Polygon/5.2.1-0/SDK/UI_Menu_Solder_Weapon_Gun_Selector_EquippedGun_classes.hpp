#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x328 - 0x280)
// WidgetBlueprintGeneratedClass UI_Menu_Solder_Weapon_Gun_Selector_EquippedGun.UI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_C
class UUI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      CustomizationHover;                                // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hover;                                             // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Button;                                            // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Customization;                              // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ItemIcon;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Loading;                                   // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_CurrentProgress;                       // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox;                                           // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_CurrentLevel;                            // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_ItemType_1;                              // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_ItemType_3;                              // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_MaxLevel;                                // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_WeaponName;                              // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_WeaponType;                              // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_LoadingIcon_C*                     UI_LoadingIcon;                                    // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FST_ItemInfo                          GunInfo;                                           // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UUI_Menu_Soldier_Weapon_C*             UI_Menu_Solder_Weapon;                             // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UUI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_C* GetDefaultObj();

	void ParseGunProgress(int32 L_XpForNextLevel, int32 L_CurrentLevel, class UPlayFabJsonObject* L_ProgressCustomData, class UClass* L_GunClass, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, int32 K2Node_LowEntry_LocalVariable_Value__Object, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<int32>& Temp_int_Variable, TArray<int32>& Temp_int_Variable_1, float CallFunc_GetNumberField_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_1, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_2, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Get_Item, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, double CallFunc_Conv_IntToDouble_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, TArray<int32>& Temp_int_Variable_2, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Max_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, float CallFunc_GetNumberField_ReturnValue_1, bool CallFunc_HasField_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast);
	void OnLoaded_88637D094754FD2518D206B827A5A426(class UObject* Loaded);
	void OnSucceed_6F9375FE4722383E9605BDB1B992E345();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_Button_Customization_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_Button_Customization_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_Button_Customization_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void SetGunInfo(const struct FST_ItemInfo& WeaponInfo);
	void OnClickBack_Event();
	void OnDark_Event();
	void ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Selector_EquippedGun(int32 EntryPoint, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UTask_Menu_CameraTransition_C* CallFunc_CreateAction_ReturnValue, class UUI_CameraTransitions_DarkenScreen_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UTask_Menu_GeneralMenuScreen_SetActivePage_C* CallFunc_CreateAction_ReturnValue_1, bool K2Node_Event_IsDesignTime, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, const struct FST_ItemInfo& K2Node_CustomEvent_WeaponInfo, class UObject* K2Node_CustomEvent_Loaded, class FName Temp_name_Variable, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_1, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_2, bool K2Node_DynamicCast_bSuccess_3, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_3, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_3, bool K2Node_DynamicCast_bSuccess_4, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_4, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_4, bool K2Node_DynamicCast_bSuccess_5);
	void OnHovered__DelegateSignature(bool IsHoved);
};

}


