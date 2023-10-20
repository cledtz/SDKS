#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x298 - 0x280)
// WidgetBlueprintGeneratedClass UI_HomeScreen_Menu_News_NewModules.UI_HomeScreen_Menu_News_NewModules_C
class UUI_HomeScreen_Menu_News_NewModules_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ButtonAnimation;                                   // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Button_Shop;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_HomeScreen_Menu_News_NewModules_C* GetDefaultObj();

	void Construct();
	void OnHovered_Event(bool IsHover);
	void BndEvt__UI_HomeScreen_Offer_News_NewModules_Button_Shop_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_UI_HomeScreen_Menu_News_NewModules(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, bool K2Node_CustomEvent_IsHover, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_1, bool K2Node_DynamicCast_bSuccess_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

}


