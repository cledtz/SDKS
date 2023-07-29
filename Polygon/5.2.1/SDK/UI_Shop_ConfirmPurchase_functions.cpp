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


// Function UI_Shop_ConfirmPurchase.UI_Shop_ConfirmPurchase_C.BndEvt__UI_Shop_ConfirmPurchase_Button_Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Shop_ConfirmPurchase_C::BndEvt__UI_Shop_ConfirmPurchase_Button_Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_Shop_ConfirmPurchase_C", "BndEvt__UI_Shop_ConfirmPurchase_Button_Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Shop_ConfirmPurchase_C_BndEvt__UI_Shop_ConfirmPurchase_Button_Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_ConfirmPurchase.UI_Shop_ConfirmPurchase_C.BndEvt__UI_Shop_ConfirmPurchase_Button_Buy_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Shop_ConfirmPurchase_C::BndEvt__UI_Shop_ConfirmPurchase_Button_Buy_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_Shop_ConfirmPurchase_C", "BndEvt__UI_Shop_ConfirmPurchase_Button_Buy_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Shop_ConfirmPurchase_C_BndEvt__UI_Shop_ConfirmPurchase_Button_Buy_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_ConfirmPurchase.UI_Shop_ConfirmPurchase_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shop_ConfirmPurchase_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("UI_Shop_ConfirmPurchase_C", "PreConstruct");

	Params::UUI_Shop_ConfirmPurchase_C_PreConstruct_Params Parms;

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
	static auto Func = Class->GetFunction("UI_Shop_ConfirmPurchase_C", "ExecuteUbergraph_UI_Shop_ConfirmPurchase");

	Params::UUI_Shop_ConfirmPurchase_C_ExecuteUbergraph_UI_Shop_ConfirmPurchase_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
