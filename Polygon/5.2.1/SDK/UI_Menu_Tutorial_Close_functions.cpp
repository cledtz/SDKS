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


// Function UI_Menu_Tutorial_Close.UI_Menu_Tutorial_Close_C.BndEvt__UI_Menu_Tutorial_Show_Button_Ok_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Tutorial_Close_C::BndEvt__UI_Menu_Tutorial_Show_Button_Ok_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_Menu_Tutorial_Close_C", "BndEvt__UI_Menu_Tutorial_Show_Button_Ok_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Menu_Tutorial_Close_C_BndEvt__UI_Menu_Tutorial_Show_Button_Ok_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Tutorial_Close.UI_Menu_Tutorial_Close_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Menu_Tutorial_Close_C::Construct()
{
	static auto Func = Class->GetFunction("UI_Menu_Tutorial_Close_C", "Construct");

	Params::UUI_Menu_Tutorial_Close_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Tutorial_Close.UI_Menu_Tutorial_Close_C.BndEvt__UI_Menu_Tutorial_Show_Button_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Tutorial_Close_C::BndEvt__UI_Menu_Tutorial_Show_Button_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_Menu_Tutorial_Close_C", "BndEvt__UI_Menu_Tutorial_Show_Button_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Menu_Tutorial_Close_C_BndEvt__UI_Menu_Tutorial_Show_Button_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Tutorial_Close.UI_Menu_Tutorial_Close_C.ExecuteUbergraph_UI_Menu_Tutorial_Close
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Tutorial_Close_C::ExecuteUbergraph_UI_Menu_Tutorial_Close(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static auto Func = Class->GetFunction("UI_Menu_Tutorial_Close_C", "ExecuteUbergraph_UI_Menu_Tutorial_Close");

	Params::UUI_Menu_Tutorial_Close_C_ExecuteUbergraph_UI_Menu_Tutorial_Close_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Tutorial_Close.UI_Menu_Tutorial_Close_C.OnClickNo__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Menu_Tutorial_Close_C::OnClickNo__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_Menu_Tutorial_Close_C", "OnClickNo__DelegateSignature");

	Params::UUI_Menu_Tutorial_Close_C_OnClickNo__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Tutorial_Close.UI_Menu_Tutorial_Close_C.OnClickYes__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Menu_Tutorial_Close_C::OnClickYes__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_Menu_Tutorial_Close_C", "OnClickYes__DelegateSignature");

	Params::UUI_Menu_Tutorial_Close_C_OnClickYes__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
