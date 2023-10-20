#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x2C8 - 0x280)
// WidgetBlueprintGeneratedClass UI_Shop_Premium.UI_Shop_Premium_C
class UUI_Shop_Premium_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        HorizontalBox_Header;                              // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                          UI_Button_Crowns;                                  // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                          UI_Button_Offers;                                  // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                          UI_Button_VIP;                                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Shop_Premium_SpecialOffers_C* UI_MainMenu_Shop_Premium_SpecialOffers;            // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Shop_Crowns_C*                     UI_Shop_Crowns;                                    // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Shop_VIP_C*                        UI_Shop_VIP;                                       // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_Main;                               // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Shop_Premium_C* GetDefaultObj();

	void SetActivePage(int32 Index, class UUI_Button_C* Button, class UUI_Button_C* L_Button, int32 L_Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UUI_Button_C* K2Node_DynamicCast_AsUI_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue);
	void BndEvt__UI_Shop_Premium_UI_Button_Crowns_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(class UUI_Button_C* Button);
	void BndEvt__UI_Shop_Premium_UI_Button_VIP_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(class UUI_Button_C* Button);
	void BndEvt__UI_Shop_Premium_UI_Button_Offers_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature(class UUI_Button_C* Button);
	void ExecuteUbergraph_UI_Shop_Premium(int32 EntryPoint, class UUI_Button_C* K2Node_ComponentBoundEvent_Button, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_2, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_1);
};

}


