#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Shop_ConfirmPurchase.UI_Shop_ConfirmPurchase_C
// (None)

class UClass* UUI_Shop_ConfirmPurchase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Shop_ConfirmPurchase_C");

	return Clss;
}


// UI_Shop_ConfirmPurchase_C UI_Shop_ConfirmPurchase.Default__UI_Shop_ConfirmPurchase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Shop_ConfirmPurchase_C* UUI_Shop_ConfirmPurchase_C::GetDefaultObj()
{
	static class UUI_Shop_ConfirmPurchase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Shop_ConfirmPurchase_C*>(UUI_Shop_ConfirmPurchase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Shop_ConfirmPurchase.UI_Shop_ConfirmPurchase_C.BndEvt__UI_Shop_ConfirmPurchase_Button_Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Shop_ConfirmPurchase_C::BndEvt__UI_Shop_ConfirmPurchase_Button_Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_ConfirmPurchase_C", "BndEvt__UI_Shop_ConfirmPurchase_Button_Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Shop_ConfirmPurchase_C_BndEvt__UI_Shop_ConfirmPurchase_Button_Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_ConfirmPurchase.UI_Shop_ConfirmPurchase_C.BndEvt__UI_Shop_ConfirmPurchase_Button_Buy_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Shop_ConfirmPurchase_C::BndEvt__UI_Shop_ConfirmPurchase_Button_Buy_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_ConfirmPurchase_C", "BndEvt__UI_Shop_ConfirmPurchase_Button_Buy_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Shop_ConfirmPurchase_C_BndEvt__UI_Shop_ConfirmPurchase_Button_Buy_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_ConfirmPurchase.UI_Shop_ConfirmPurchase_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shop_ConfirmPurchase_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_ConfirmPurchase_C", "PreConstruct");

	Params::UUI_Shop_ConfirmPurchase_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_ConfirmPurchase.UI_Shop_ConfirmPurchase_C.ExecuteUbergraph_UI_Shop_ConfirmPurchase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shop_ConfirmPurchase_C::ExecuteUbergraph_UI_Shop_ConfirmPurchase(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_ConfirmPurchase_C", "ExecuteUbergraph_UI_Shop_ConfirmPurchase");

	Params::UUI_Shop_ConfirmPurchase_C_ExecuteUbergraph_UI_Shop_ConfirmPurchase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


