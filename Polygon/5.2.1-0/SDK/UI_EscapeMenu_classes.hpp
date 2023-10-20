#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x2D0 - 0x280)
// WidgetBlueprintGeneratedClass UI_EscapeMenu.UI_EscapeMenu_C
class UUI_EscapeMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                LinesBackground;                                   // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                          UI_Button_Options;                                 // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                          UI_Button_Quit;                                    // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                          UI_Button_Redeploy;                                // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                          UI_Button_Resume;                                  // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                          UI_Button_TeamSetup;                               // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Options_C*                         UI_Options;                                        // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Buttons;                               // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_Main;                               // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_EscapeMenu_C* GetDefaultObj();

	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Back();
	void BndEvt__UI_Button_Settings_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature(class UUI_Button_C* Button);
	void BndEvt__UI_Button_Resume_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(class UUI_Button_C* Button);
	void BndEvt__UI_Button_Quit_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature(class UUI_Button_C* Button);
	void BndEvt__UI_Options_K2Node_ComponentBoundEvent_0_ClickBackDelegate__DelegateSignature();
	void BndEvt__UI_EscapeMenu_UI_Button_Redeploy_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature(class UUI_Button_C* Button);
	void OnPossessedPawnChanged_Event(class UPawn* OldPawn, class UPawn* NewPawn);
	void OnIsAlive_Event();
	void Construct();
	void ExecuteUbergraph_UI_EscapeMenu(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_3, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_2, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_1, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_QuitMatch_C* CallFunc_Create_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Game_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Game, bool K2Node_DynamicCast_bSuccess, class UUI_Button_C* K2Node_ComponentBoundEvent_Button, class UCharacter* CallFunc_GetPlayerCharacter_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UPG_Game_Character* K2Node_DynamicCast_AsPG_Game_Character, bool K2Node_DynamicCast_bSuccess_1, class UPawn* K2Node_CustomEvent_OldPawn, class UPawn* K2Node_CustomEvent_NewPawn, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UPawn* CallFunc_K2_GetPawn_ReturnValue, class UPG_Game_Character* K2Node_DynamicCast_AsPG_Game_Character_1, bool K2Node_DynamicCast_bSuccess_2);
};

}


