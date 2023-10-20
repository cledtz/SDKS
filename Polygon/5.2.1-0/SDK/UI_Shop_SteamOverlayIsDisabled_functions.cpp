#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Shop_SteamOverlayIsDisabled.UI_Shop_SteamOverlayIsDisabled_C
// (None)

class UClass* UUI_Shop_SteamOverlayIsDisabled_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Shop_SteamOverlayIsDisabled_C");

	return Clss;
}


// UI_Shop_SteamOverlayIsDisabled_C UI_Shop_SteamOverlayIsDisabled.Default__UI_Shop_SteamOverlayIsDisabled_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Shop_SteamOverlayIsDisabled_C* UUI_Shop_SteamOverlayIsDisabled_C::GetDefaultObj()
{
	static class UUI_Shop_SteamOverlayIsDisabled_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Shop_SteamOverlayIsDisabled_C*>(UUI_Shop_SteamOverlayIsDisabled_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Shop_SteamOverlayIsDisabled.UI_Shop_SteamOverlayIsDisabled_C.BndEvt__UI_WarningNoPC_Button_Yes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Shop_SteamOverlayIsDisabled_C::BndEvt__UI_WarningNoPC_Button_Yes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_SteamOverlayIsDisabled_C", "BndEvt__UI_WarningNoPC_Button_Yes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Shop_SteamOverlayIsDisabled_C_BndEvt__UI_WarningNoPC_Button_Yes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_SteamOverlayIsDisabled.UI_Shop_SteamOverlayIsDisabled_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Shop_SteamOverlayIsDisabled_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_SteamOverlayIsDisabled_C", "Construct");

	Params::UUI_Shop_SteamOverlayIsDisabled_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_SteamOverlayIsDisabled.UI_Shop_SteamOverlayIsDisabled_C.BndEvt__UI_Shop_SteamOverlayIsDisabled_Button_Discord_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Shop_SteamOverlayIsDisabled_C::BndEvt__UI_Shop_SteamOverlayIsDisabled_Button_Discord_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_SteamOverlayIsDisabled_C", "BndEvt__UI_Shop_SteamOverlayIsDisabled_Button_Discord_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	Params::UUI_Shop_SteamOverlayIsDisabled_C_BndEvt__UI_Shop_SteamOverlayIsDisabled_Button_Discord_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_SteamOverlayIsDisabled.UI_Shop_SteamOverlayIsDisabled_C.BndEvt__UI_Shop_SteamOverlayIsDisabled_Button_Discord_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Shop_SteamOverlayIsDisabled_C::BndEvt__UI_Shop_SteamOverlayIsDisabled_Button_Discord_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_SteamOverlayIsDisabled_C", "BndEvt__UI_Shop_SteamOverlayIsDisabled_Button_Discord_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	Params::UUI_Shop_SteamOverlayIsDisabled_C_BndEvt__UI_Shop_SteamOverlayIsDisabled_Button_Discord_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_SteamOverlayIsDisabled.UI_Shop_SteamOverlayIsDisabled_C.BndEvt__UI_Shop_SteamOverlayIsDisabled_Button_Discord_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Shop_SteamOverlayIsDisabled_C::BndEvt__UI_Shop_SteamOverlayIsDisabled_Button_Discord_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_SteamOverlayIsDisabled_C", "BndEvt__UI_Shop_SteamOverlayIsDisabled_Button_Discord_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Shop_SteamOverlayIsDisabled_C_BndEvt__UI_Shop_SteamOverlayIsDisabled_Button_Discord_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_SteamOverlayIsDisabled.UI_Shop_SteamOverlayIsDisabled_C.ExecuteUbergraph_UI_Shop_SteamOverlayIsDisabled
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Shop_SteamOverlayIsDisabled_C::ExecuteUbergraph_UI_Shop_SteamOverlayIsDisabled(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_SteamOverlayIsDisabled_C", "ExecuteUbergraph_UI_Shop_SteamOverlayIsDisabled");

	Params::UUI_Shop_SteamOverlayIsDisabled_C_ExecuteUbergraph_UI_Shop_SteamOverlayIsDisabled_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


