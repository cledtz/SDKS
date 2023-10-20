#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_HomeScreen_Menu_Offers_ButtonSwitch.UI_HomeScreen_Menu_Offers_ButtonSwitch_C
// (None)

class UClass* UUI_HomeScreen_Menu_Offers_ButtonSwitch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_HomeScreen_Menu_Offers_ButtonSwitch_C");

	return Clss;
}


// UI_HomeScreen_Menu_Offers_ButtonSwitch_C UI_HomeScreen_Menu_Offers_ButtonSwitch.Default__UI_HomeScreen_Menu_Offers_ButtonSwitch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_HomeScreen_Menu_Offers_ButtonSwitch_C* UUI_HomeScreen_Menu_Offers_ButtonSwitch_C::GetDefaultObj()
{
	static class UUI_HomeScreen_Menu_Offers_ButtonSwitch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_HomeScreen_Menu_Offers_ButtonSwitch_C*>(UUI_HomeScreen_Menu_Offers_ButtonSwitch_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_HomeScreen_Menu_Offers_ButtonSwitch.UI_HomeScreen_Menu_Offers_ButtonSwitch_C.SetIsActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsActive                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_HomeScreen_Menu_Offers_ButtonSwitch_C::SetIsActive(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HomeScreen_Menu_Offers_ButtonSwitch_C", "SetIsActive");

	Params::UUI_HomeScreen_Menu_Offers_ButtonSwitch_C_SetIsActive_Params Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_HomeScreen_Menu_Offers_ButtonSwitch.UI_HomeScreen_Menu_Offers_ButtonSwitch_C.BndEvt__UI_HomeScreen_Offer_News_ButtonSwitch_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_HomeScreen_Menu_Offers_ButtonSwitch_C::BndEvt__UI_HomeScreen_Offer_News_ButtonSwitch_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HomeScreen_Menu_Offers_ButtonSwitch_C", "BndEvt__UI_HomeScreen_Offer_News_ButtonSwitch_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	Params::UUI_HomeScreen_Menu_Offers_ButtonSwitch_C_BndEvt__UI_HomeScreen_Offer_News_ButtonSwitch_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_HomeScreen_Menu_Offers_ButtonSwitch.UI_HomeScreen_Menu_Offers_ButtonSwitch_C.ExecuteUbergraph_UI_HomeScreen_Menu_Offers_ButtonSwitch
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isActive                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Menu_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_HomeScreen_Menu_Offers_ButtonSwitch_C::ExecuteUbergraph_UI_HomeScreen_Menu_Offers_ButtonSwitch(int32 EntryPoint, bool K2Node_CustomEvent_isActive, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HomeScreen_Menu_Offers_ButtonSwitch_C", "ExecuteUbergraph_UI_HomeScreen_Menu_Offers_ButtonSwitch");

	Params::UUI_HomeScreen_Menu_Offers_ButtonSwitch_C_ExecuteUbergraph_UI_HomeScreen_Menu_Offers_ButtonSwitch_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_isActive = K2Node_CustomEvent_isActive;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu = K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


