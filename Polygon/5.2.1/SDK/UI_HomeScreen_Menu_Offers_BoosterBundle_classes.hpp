#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2A8 - 0x280)
// WidgetBlueprintGeneratedClass UI_HomeScreen_Menu_Offers_BoosterBundle.UI_HomeScreen_Menu_Offers_BoosterBundle_C
class UUI_HomeScreen_Menu_Offers_BoosterBundle_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ButtonAnimation;                                   // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Button_Buy_1;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Buy_2;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Timer;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_HomeScreen_Menu_Offers_BoosterBundle_C");
		return Clss;
	}

	void Construct();
	void OnHovered_Event(bool IsHover);
	void BndEvt__UI_HomeScreen_Offer_News_NewModules_Button_Shop_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_HomeScreen_Menu_Offers_StarterPack_Button_Buy_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_UI_HomeScreen_Menu_Offers_BoosterBundle(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, bool K2Node_CustomEvent_IsHover, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_BuyPage_C* CallFunc_Create_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
