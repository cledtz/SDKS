#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x2AC - 0x280)
// WidgetBlueprintGeneratedClass UI_HomeScreen_Menu_News_ButtonSwitch.UI_HomeScreen_Menu_News_ButtonSwitch_C
class UUI_HomeScreen_Menu_News_ButtonSwitch_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ProgressToNextWidget;                              // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_Background;                                 // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button;                                            // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_ToNextWidget;                          // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_HomeScreen_Menu_News_ButtonSwitch_C* GetDefaultObj();

	void BndEvt__UI_HomeScreen_Offer_News_ButtonSwitch_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void SetIsActive(bool IsActive);
	void ExecuteUbergraph_UI_HomeScreen_Menu_News_ButtonSwitch(int32 EntryPoint, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_isActive, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
};

}


