#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_PopUpMenu.UI_PopUpMenu_C
// (None)

class UClass* UUI_PopUpMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_PopUpMenu_C");

	return Clss;
}


// UI_PopUpMenu_C UI_PopUpMenu.Default__UI_PopUpMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_PopUpMenu_C* UUI_PopUpMenu_C::GetDefaultObj()
{
	static class UUI_PopUpMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_PopUpMenu_C*>(UUI_PopUpMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_PopUpMenu.UI_PopUpMenu_C.BndEvt__UI_PopUpMenu_Button_Options_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_PopUpMenu_C::BndEvt__UI_PopUpMenu_Button_Options_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PopUpMenu_C", "BndEvt__UI_PopUpMenu_Button_Options_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_PopUpMenu_C_BndEvt__UI_PopUpMenu_Button_Options_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PopUpMenu.UI_PopUpMenu_C.BndEvt__UI_PopUpMenu_Button_Hide_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_PopUpMenu_C::BndEvt__UI_PopUpMenu_Button_Hide_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PopUpMenu_C", "BndEvt__UI_PopUpMenu_Button_Hide_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	Params::UUI_PopUpMenu_C_BndEvt__UI_PopUpMenu_Button_Hide_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PopUpMenu.UI_PopUpMenu_C.BndEvt__UI_PopUpMenu_Button_Quit_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_PopUpMenu_C::BndEvt__UI_PopUpMenu_Button_Quit_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PopUpMenu_C", "BndEvt__UI_PopUpMenu_Button_Quit_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_PopUpMenu_C_BndEvt__UI_PopUpMenu_Button_Quit_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PopUpMenu.UI_PopUpMenu_C.BndEvt__UI_PopUpMenu_Button_Discord_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_PopUpMenu_C::BndEvt__UI_PopUpMenu_Button_Discord_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PopUpMenu_C", "BndEvt__UI_PopUpMenu_Button_Discord_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_PopUpMenu_C_BndEvt__UI_PopUpMenu_Button_Discord_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PopUpMenu.UI_PopUpMenu_C.BndEvt__UI_PopUpMenu_Button_PromoCode_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_PopUpMenu_C::BndEvt__UI_PopUpMenu_Button_PromoCode_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PopUpMenu_C", "BndEvt__UI_PopUpMenu_Button_PromoCode_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_PopUpMenu_C_BndEvt__UI_PopUpMenu_Button_PromoCode_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PopUpMenu.UI_PopUpMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_PopUpMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PopUpMenu_C", "Construct");

	Params::UUI_PopUpMenu_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PopUpMenu.UI_PopUpMenu_C.ExecuteUbergraph_UI_PopUpMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_ExitGame_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_PromoCode_C*             CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Menu_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_PopUpMenu_C::ExecuteUbergraph_UI_PopUpMenu(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_ExitGame_C* CallFunc_Create_ReturnValue, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UUI_PromoCode_C* CallFunc_Create_ReturnValue_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PopUpMenu_C", "ExecuteUbergraph_UI_PopUpMenu");

	Params::UUI_PopUpMenu_C_ExecuteUbergraph_UI_PopUpMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu = K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


