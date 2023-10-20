#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Shop_WarningNoPC.UI_Shop_WarningNoPC_C
// (None)

class UClass* UUI_Shop_WarningNoPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Shop_WarningNoPC_C");

	return Clss;
}


// UI_Shop_WarningNoPC_C UI_Shop_WarningNoPC.Default__UI_Shop_WarningNoPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Shop_WarningNoPC_C* UUI_Shop_WarningNoPC_C::GetDefaultObj()
{
	static class UUI_Shop_WarningNoPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Shop_WarningNoPC_C*>(UUI_Shop_WarningNoPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Shop_WarningNoPC.UI_Shop_WarningNoPC_C.OnSucceed_FA7395AF4FD96A0A881A4EAA2B69E0A2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Shop_WarningNoPC_C::OnSucceed_FA7395AF4FD96A0A881A4EAA2B69E0A2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_WarningNoPC_C", "OnSucceed_FA7395AF4FD96A0A881A4EAA2B69E0A2");

	Params::UUI_Shop_WarningNoPC_C_OnSucceed_FA7395AF4FD96A0A881A4EAA2B69E0A2_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_WarningNoPC.UI_Shop_WarningNoPC_C.BndEvt__UI_WarningNoPC_Button_No_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Shop_WarningNoPC_C::BndEvt__UI_WarningNoPC_Button_No_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_WarningNoPC_C", "BndEvt__UI_WarningNoPC_Button_No_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Shop_WarningNoPC_C_BndEvt__UI_WarningNoPC_Button_No_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_WarningNoPC.UI_Shop_WarningNoPC_C.BndEvt__UI_WarningNoPC_Button_Yes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Shop_WarningNoPC_C::BndEvt__UI_WarningNoPC_Button_Yes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_WarningNoPC_C", "BndEvt__UI_WarningNoPC_Button_Yes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Shop_WarningNoPC_C_BndEvt__UI_WarningNoPC_Button_Yes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_WarningNoPC.UI_Shop_WarningNoPC_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shop_WarningNoPC_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_WarningNoPC_C", "PreConstruct");

	Params::UUI_Shop_WarningNoPC_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_WarningNoPC.UI_Shop_WarningNoPC_C.ExecuteUbergraph_UI_Shop_WarningNoPC
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTask_Menu_GeneralMenuScreen_SetActivePage_C*CallFunc_CreateAction_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Menu_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UUI_Shop_WarningNoPC_C::ExecuteUbergraph_UI_Shop_WarningNoPC(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UTask_Menu_GeneralMenuScreen_SetActivePage_C* CallFunc_CreateAction_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, bool K2Node_Event_IsDesignTime, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_WarningNoPC_C", "ExecuteUbergraph_UI_Shop_WarningNoPC");

	Params::UUI_Shop_WarningNoPC_C_ExecuteUbergraph_UI_Shop_WarningNoPC_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_CreateAction_ReturnValue = CallFunc_CreateAction_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu = K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_WarningNoPC.UI_Shop_WarningNoPC_C.OnMadeChoice__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Yes                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shop_WarningNoPC_C::OnMadeChoice__DelegateSignature(bool Yes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_WarningNoPC_C", "OnMadeChoice__DelegateSignature");

	Params::UUI_Shop_WarningNoPC_C_OnMadeChoice__DelegateSignature_Params Parms{};

	Parms.Yes = Yes;

	UObject::ProcessEvent(Func, &Parms);

}

}


