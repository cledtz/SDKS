#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MultiActionConfirmationMenu.MultiActionConfirmationMenu_C
// (None)

class UClass* UMultiActionConfirmationMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiActionConfirmationMenu_C");

	return Clss;
}


// MultiActionConfirmationMenu_C MultiActionConfirmationMenu.Default__MultiActionConfirmationMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMultiActionConfirmationMenu_C* UMultiActionConfirmationMenu_C::GetDefaultObj()
{
	static class UMultiActionConfirmationMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiActionConfirmationMenu_C*>(UMultiActionConfirmationMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MultiActionConfirmationMenu.MultiActionConfirmationMenu_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMultiActionConfirmationMenu_C::UpdateText(class FText CallFunc_MakeLiteralText_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiActionConfirmationMenu_C", "UpdateText");

	Params::UMultiActionConfirmationMenu_C_UpdateText_Params Parms{};

	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MultiActionConfirmationMenu.MultiActionConfirmationMenu_C.OnOpened
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMultiActionConfirmationMenu_C::OnOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiActionConfirmationMenu_C", "OnOpened");

	Params::UMultiActionConfirmationMenu_C_OnOpened_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function MultiActionConfirmationMenu.MultiActionConfirmationMenu_C.OnActionUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMultiActionConfirmationMenu_C::OnActionUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiActionConfirmationMenu_C", "OnActionUpdated");

	Params::UMultiActionConfirmationMenu_C_OnActionUpdated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function MultiActionConfirmationMenu.MultiActionConfirmationMenu_C.ExecuteUbergraph_MultiActionConfirmationMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UMultiActionConfirmationMenu_C::ExecuteUbergraph_MultiActionConfirmationMenu(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiActionConfirmationMenu_C", "ExecuteUbergraph_MultiActionConfirmationMenu");

	Params::UMultiActionConfirmationMenu_C_ExecuteUbergraph_MultiActionConfirmationMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


