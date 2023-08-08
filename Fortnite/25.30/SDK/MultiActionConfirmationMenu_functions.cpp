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


// Function MultiActionConfirmationMenu.MultiActionConfirmationMenu_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMultiActionConfirmationMenu_C::UpdateText(class FText CallFunc_MakeLiteralText_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("MultiActionConfirmationMenu_C", "UpdateText");

	Params::UMultiActionConfirmationMenu_C_UpdateText_Params Parms;

	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MultiActionConfirmationMenu.MultiActionConfirmationMenu_C.OnOpened
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMultiActionConfirmationMenu_C::OnOpened()
{
	static auto Func = Class->GetFunction("MultiActionConfirmationMenu_C", "OnOpened");

	Params::UMultiActionConfirmationMenu_C_OnOpened_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MultiActionConfirmationMenu.MultiActionConfirmationMenu_C.OnActionUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMultiActionConfirmationMenu_C::OnActionUpdated()
{
	static auto Func = Class->GetFunction("MultiActionConfirmationMenu_C", "OnActionUpdated");

	Params::UMultiActionConfirmationMenu_C_OnActionUpdated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MultiActionConfirmationMenu.MultiActionConfirmationMenu_C.ExecuteUbergraph_MultiActionConfirmationMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UMultiActionConfirmationMenu_C::ExecuteUbergraph_MultiActionConfirmationMenu(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("MultiActionConfirmationMenu_C", "ExecuteUbergraph_MultiActionConfirmationMenu");

	Params::UMultiActionConfirmationMenu_C_ExecuteUbergraph_MultiActionConfirmationMenu_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
