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


// Function UI_ServerPassword.UI_ServerPassword_C.BndEvt__UI_ServerPassword_Button_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ServerPassword_C::BndEvt__UI_ServerPassword_Button_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_ServerPassword_C", "BndEvt__UI_ServerPassword_Button_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_ServerPassword_C_BndEvt__UI_ServerPassword_Button_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ServerPassword.UI_ServerPassword_C.BndEvt__UI_ServerPassword_Button_Ok_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ServerPassword_C::BndEvt__UI_ServerPassword_Button_Ok_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_ServerPassword_C", "BndEvt__UI_ServerPassword_Button_Ok_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_ServerPassword_C_BndEvt__UI_ServerPassword_Button_Ok_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ServerPassword.UI_ServerPassword_C.BndEvt__UI_ServerPassword_Button_ShowPassword_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ServerPassword_C::BndEvt__UI_ServerPassword_Button_ShowPassword_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_ServerPassword_C", "BndEvt__UI_ServerPassword_Button_ShowPassword_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_ServerPassword_C_BndEvt__UI_ServerPassword_Button_ShowPassword_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ServerPassword.UI_ServerPassword_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_ServerPassword_C::Destruct()
{
	static auto Func = Class->GetFunction("UI_ServerPassword_C", "Destruct");

	Params::UUI_ServerPassword_C_Destruct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ServerPassword.UI_ServerPassword_C.ExecuteUbergraph_UI_ServerPassword
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ServerPassword_C::ExecuteUbergraph_UI_ServerPassword(int32 EntryPoint, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("UI_ServerPassword_C", "ExecuteUbergraph_UI_ServerPassword");

	Params::UUI_ServerPassword_C_ExecuteUbergraph_UI_ServerPassword_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ServerPassword.UI_ServerPassword_C.OnCanceled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ServerPassword_C::OnCanceled__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_ServerPassword_C", "OnCanceled__DelegateSignature");

	Params::UUI_ServerPassword_C_OnCanceled__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ServerPassword.UI_ServerPassword_C.OnPasswordEntered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ServerPassword_C::OnPasswordEntered__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_ServerPassword_C", "OnPasswordEntered__DelegateSignature");

	Params::UUI_ServerPassword_C_OnPasswordEntered__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
