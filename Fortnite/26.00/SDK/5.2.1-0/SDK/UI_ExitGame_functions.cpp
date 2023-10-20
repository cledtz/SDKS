#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ExitGame.UI_ExitGame_C
// (None)

class UClass* UUI_ExitGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ExitGame_C");

	return Clss;
}


// UI_ExitGame_C UI_ExitGame.Default__UI_ExitGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ExitGame_C* UUI_ExitGame_C::GetDefaultObj()
{
	static class UUI_ExitGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ExitGame_C*>(UUI_ExitGame_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ExitGame.UI_ExitGame_C.BndEvt__Button_Yes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ExitGame_C::BndEvt__Button_Yes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ExitGame_C", "BndEvt__Button_Yes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_ExitGame_C_BndEvt__Button_Yes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ExitGame.UI_ExitGame_C.BndEvt__Button_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ExitGame_C::BndEvt__Button_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ExitGame_C", "BndEvt__Button_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_ExitGame_C_BndEvt__Button_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ExitGame.UI_ExitGame_C.ExecuteUbergraph_UI_ExitGame
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_ExitGame_C::ExecuteUbergraph_UI_ExitGame(int32 EntryPoint, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ExitGame_C", "ExecuteUbergraph_UI_ExitGame");

	Params::UUI_ExitGame_C_ExecuteUbergraph_UI_ExitGame_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


