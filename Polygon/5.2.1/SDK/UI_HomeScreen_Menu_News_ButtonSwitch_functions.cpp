#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function UI_HomeScreen_Menu_News_ButtonSwitch.UI_HomeScreen_Menu_News_ButtonSwitch_C.BndEvt__UI_HomeScreen_Offer_News_ButtonSwitch_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_HomeScreen_Menu_News_ButtonSwitch_C::BndEvt__UI_HomeScreen_Offer_News_ButtonSwitch_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_HomeScreen_Menu_News_ButtonSwitch_C", "BndEvt__UI_HomeScreen_Offer_News_ButtonSwitch_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	Params::UUI_HomeScreen_Menu_News_ButtonSwitch_C_BndEvt__UI_HomeScreen_Offer_News_ButtonSwitch_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_HomeScreen_Menu_News_ButtonSwitch.UI_HomeScreen_Menu_News_ButtonSwitch_C.SetIsActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsActive                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_HomeScreen_Menu_News_ButtonSwitch_C::SetIsActive(bool IsActive)
{
	static auto Func = Class->GetFunction("UI_HomeScreen_Menu_News_ButtonSwitch_C", "SetIsActive");

	Params::UUI_HomeScreen_Menu_News_ButtonSwitch_C_SetIsActive_Params Parms;

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_HomeScreen_Menu_News_ButtonSwitch.UI_HomeScreen_Menu_News_ButtonSwitch_C.ExecuteUbergraph_UI_HomeScreen_Menu_News_ButtonSwitch
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Menu_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isActive                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_HomeScreen_Menu_News_ButtonSwitch_C::ExecuteUbergraph_UI_HomeScreen_Menu_News_ButtonSwitch(int32 EntryPoint, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_isActive, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static auto Func = Class->GetFunction("UI_HomeScreen_Menu_News_ButtonSwitch_C", "ExecuteUbergraph_UI_HomeScreen_Menu_News_ButtonSwitch");

	Params::UUI_HomeScreen_Menu_News_ButtonSwitch_C_ExecuteUbergraph_UI_HomeScreen_Menu_News_ButtonSwitch_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu = K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_isActive = K2Node_CustomEvent_isActive;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
