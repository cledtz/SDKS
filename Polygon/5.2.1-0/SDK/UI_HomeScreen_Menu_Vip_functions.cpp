#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_HomeScreen_Menu_Vip.UI_HomeScreen_Menu_Vip_C
// (None)

class UClass* UUI_HomeScreen_Menu_Vip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_HomeScreen_Menu_Vip_C");

	return Clss;
}


// UI_HomeScreen_Menu_Vip_C UI_HomeScreen_Menu_Vip.Default__UI_HomeScreen_Menu_Vip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_HomeScreen_Menu_Vip_C* UUI_HomeScreen_Menu_Vip_C::GetDefaultObj()
{
	static class UUI_HomeScreen_Menu_Vip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_HomeScreen_Menu_Vip_C*>(UUI_HomeScreen_Menu_Vip_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_HomeScreen_Menu_Vip.UI_HomeScreen_Menu_Vip_C.BndEvt__UI_HomeScreen_Offer_Vip_Button_VIP_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_HomeScreen_Menu_Vip_C::BndEvt__UI_HomeScreen_Offer_Vip_Button_VIP_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HomeScreen_Menu_Vip_C", "BndEvt__UI_HomeScreen_Offer_Vip_Button_VIP_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	Params::UUI_HomeScreen_Menu_Vip_C_BndEvt__UI_HomeScreen_Offer_Vip_Button_VIP_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_HomeScreen_Menu_Vip.UI_HomeScreen_Menu_Vip_C.BndEvt__UI_HomeScreen_Offer_Vip_Button_VIP_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_HomeScreen_Menu_Vip_C::BndEvt__UI_HomeScreen_Offer_Vip_Button_VIP_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HomeScreen_Menu_Vip_C", "BndEvt__UI_HomeScreen_Offer_Vip_Button_VIP_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	Params::UUI_HomeScreen_Menu_Vip_C_BndEvt__UI_HomeScreen_Offer_Vip_Button_VIP_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_HomeScreen_Menu_Vip.UI_HomeScreen_Menu_Vip_C.BndEvt__UI_HomeScreen_Offer_Vip_Button_VIP_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_HomeScreen_Menu_Vip_C::BndEvt__UI_HomeScreen_Offer_Vip_Button_VIP_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HomeScreen_Menu_Vip_C", "BndEvt__UI_HomeScreen_Offer_Vip_Button_VIP_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_HomeScreen_Menu_Vip_C_BndEvt__UI_HomeScreen_Offer_Vip_Button_VIP_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_HomeScreen_Menu_Vip.UI_HomeScreen_Menu_Vip_C.ExecuteUbergraph_UI_HomeScreen_Menu_Vip
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Menu_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_HomeScreen_Menu_Vip_C::ExecuteUbergraph_UI_HomeScreen_Menu_Vip(int32 EntryPoint, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HomeScreen_Menu_Vip_C", "ExecuteUbergraph_UI_HomeScreen_Menu_Vip");

	Params::UUI_HomeScreen_Menu_Vip_C_ExecuteUbergraph_UI_HomeScreen_Menu_Vip_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu = K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


