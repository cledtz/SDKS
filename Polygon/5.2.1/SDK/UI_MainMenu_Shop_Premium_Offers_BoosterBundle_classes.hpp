#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2B0 - 0x280)
// WidgetBlueprintGeneratedClass UI_MainMenu_Shop_Premium_Offers_BoosterBundle.UI_MainMenu_Shop_Premium_Offers_BoosterBundle_C
class UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Hover;                                             // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Button_Buy;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Timer;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        SecondsToEnd;                                      // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_E48[0x4];                                      // Fixing Size After Last Property
	class UUI_HomeScreen_Menu_Offers_BoosterBundle_C* OfferOnHomeMenu;                                   // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_MainMenu_Shop_Premium_Offers_BoosterBundle_C");
		return Clss;
	}

	void RemoveOfferFunc(class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess);
	void CreateOfferOnHomeMenu(class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_AddOffer_CreatedOfferWidget, class UUI_HomeScreen_Menu_Offers_BoosterBundle_C* K2Node_DynamicCast_AsUI_Home_Screen_Menu_Offers_Booster_Bundle, bool K2Node_DynamicCast_bSuccess_1);
	void BndEvt__UI_MainMenu_Shop_Premium_Offers_StarterPack_Button_Buy_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_MainMenu_Shop_Premium_Offers_StarterPack_Button_Buy_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_MainMenu_Shop_Premium_Offers_StarterPack_Button_Buy_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void TickTimer();
	void RemoveOffer();
	void ExecuteUbergraph_UI_MainMenu_Shop_Premium_Offers_BoosterBundle(int32 EntryPoint, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue_1, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_BuyPage_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue_3, const class FString& K2Node_Select_Default_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool Temp_bool_Variable_2, const class FString& K2Node_Select_Default_2, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_LowEntry_LocalVariable_Value__Object);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
