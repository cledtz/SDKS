#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_HomeScreen_Menu_Offers_StarterPack.UI_HomeScreen_Menu_Offers_StarterPack_C
// (None)

class UClass* UUI_HomeScreen_Menu_Offers_StarterPack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_HomeScreen_Menu_Offers_StarterPack_C");

	return Clss;
}


// UI_HomeScreen_Menu_Offers_StarterPack_C UI_HomeScreen_Menu_Offers_StarterPack.Default__UI_HomeScreen_Menu_Offers_StarterPack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_HomeScreen_Menu_Offers_StarterPack_C* UUI_HomeScreen_Menu_Offers_StarterPack_C::GetDefaultObj()
{
	static class UUI_HomeScreen_Menu_Offers_StarterPack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_HomeScreen_Menu_Offers_StarterPack_C*>(UUI_HomeScreen_Menu_Offers_StarterPack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_HomeScreen_Menu_Offers_StarterPack.UI_HomeScreen_Menu_Offers_StarterPack_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_HomeScreen_Menu_Offers_StarterPack_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HomeScreen_Menu_Offers_StarterPack_C", "Construct");

	Params::UUI_HomeScreen_Menu_Offers_StarterPack_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_HomeScreen_Menu_Offers_StarterPack.UI_HomeScreen_Menu_Offers_StarterPack_C.OnHovered_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHover                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_HomeScreen_Menu_Offers_StarterPack_C::OnHovered_Event(bool IsHover)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HomeScreen_Menu_Offers_StarterPack_C", "OnHovered_Event");

	Params::UUI_HomeScreen_Menu_Offers_StarterPack_C_OnHovered_Event_Params Parms{};

	Parms.IsHover = IsHover;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_HomeScreen_Menu_Offers_StarterPack.UI_HomeScreen_Menu_Offers_StarterPack_C.BndEvt__UI_HomeScreen_Offer_News_NewModules_Button_Shop_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_HomeScreen_Menu_Offers_StarterPack_C::BndEvt__UI_HomeScreen_Offer_News_NewModules_Button_Shop_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HomeScreen_Menu_Offers_StarterPack_C", "BndEvt__UI_HomeScreen_Offer_News_NewModules_Button_Shop_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_HomeScreen_Menu_Offers_StarterPack_C_BndEvt__UI_HomeScreen_Offer_News_NewModules_Button_Shop_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_HomeScreen_Menu_Offers_StarterPack.UI_HomeScreen_Menu_Offers_StarterPack_C.BndEvt__UI_HomeScreen_Menu_Offers_StarterPack_Button_Buy_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_HomeScreen_Menu_Offers_StarterPack_C::BndEvt__UI_HomeScreen_Menu_Offers_StarterPack_Button_Buy_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HomeScreen_Menu_Offers_StarterPack_C", "BndEvt__UI_HomeScreen_Menu_Offers_StarterPack_Button_Buy_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_HomeScreen_Menu_Offers_StarterPack_C_BndEvt__UI_HomeScreen_Menu_Offers_StarterPack_Button_Buy_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_HomeScreen_Menu_Offers_StarterPack.UI_HomeScreen_Menu_Offers_StarterPack_C.ExecuteUbergraph_UI_HomeScreen_Menu_Offers_StarterPack
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsHover                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Menu_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Shop_Premium_Offers_StarterPack_BuyPage_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_HomeScreen_Menu_Offers_StarterPack_C::ExecuteUbergraph_UI_HomeScreen_Menu_Offers_StarterPack(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, bool K2Node_CustomEvent_IsHover, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UUI_MainMenu_Shop_Premium_Offers_StarterPack_BuyPage_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HomeScreen_Menu_Offers_StarterPack_C", "ExecuteUbergraph_UI_HomeScreen_Menu_Offers_StarterPack");

	Params::UUI_HomeScreen_Menu_Offers_StarterPack_C_ExecuteUbergraph_UI_HomeScreen_Menu_Offers_StarterPack_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CustomEvent_IsHover = K2Node_CustomEvent_IsHover;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu = K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


