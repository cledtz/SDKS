#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Menu_Tutorial_Close.UI_Menu_Tutorial_Close_C
// (None)

class UClass* UUI_Menu_Tutorial_Close_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Menu_Tutorial_Close_C");

	return Clss;
}


// UI_Menu_Tutorial_Close_C UI_Menu_Tutorial_Close.Default__UI_Menu_Tutorial_Close_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Menu_Tutorial_Close_C* UUI_Menu_Tutorial_Close_C::GetDefaultObj()
{
	static class UUI_Menu_Tutorial_Close_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Menu_Tutorial_Close_C*>(UUI_Menu_Tutorial_Close_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Menu_Tutorial_Close.UI_Menu_Tutorial_Close_C.BndEvt__UI_Menu_Tutorial_Show_Button_Ok_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Tutorial_Close_C::BndEvt__UI_Menu_Tutorial_Show_Button_Ok_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Tutorial_Close_C", "BndEvt__UI_Menu_Tutorial_Show_Button_Ok_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Menu_Tutorial_Close_C_BndEvt__UI_Menu_Tutorial_Show_Button_Ok_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Tutorial_Close.UI_Menu_Tutorial_Close_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Menu_Tutorial_Close_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Tutorial_Close_C", "Construct");

	Params::UUI_Menu_Tutorial_Close_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Tutorial_Close.UI_Menu_Tutorial_Close_C.BndEvt__UI_Menu_Tutorial_Show_Button_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Tutorial_Close_C::BndEvt__UI_Menu_Tutorial_Show_Button_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Tutorial_Close_C", "BndEvt__UI_Menu_Tutorial_Show_Button_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Menu_Tutorial_Close_C_BndEvt__UI_Menu_Tutorial_Show_Button_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Tutorial_Close.UI_Menu_Tutorial_Close_C.ExecuteUbergraph_UI_Menu_Tutorial_Close
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Tutorial_Close_C::ExecuteUbergraph_UI_Menu_Tutorial_Close(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Tutorial_Close_C", "ExecuteUbergraph_UI_Menu_Tutorial_Close");

	Params::UUI_Menu_Tutorial_Close_C_ExecuteUbergraph_UI_Menu_Tutorial_Close_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Tutorial_Close.UI_Menu_Tutorial_Close_C.OnClickNo__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Menu_Tutorial_Close_C::OnClickNo__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Tutorial_Close_C", "OnClickNo__DelegateSignature");

	Params::UUI_Menu_Tutorial_Close_C_OnClickNo__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Tutorial_Close.UI_Menu_Tutorial_Close_C.OnClickYes__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Menu_Tutorial_Close_C::OnClickYes__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Tutorial_Close_C", "OnClickYes__DelegateSignature");

	Params::UUI_Menu_Tutorial_Close_C_OnClickYes__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}


