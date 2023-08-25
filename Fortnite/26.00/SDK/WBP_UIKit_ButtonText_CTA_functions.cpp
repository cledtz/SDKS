#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C
// (None)

class UClass* UWBP_UIKit_ButtonText_CTA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_UIKit_ButtonText_CTA_C");

	return Clss;
}


// WBP_UIKit_ButtonText_CTA_C WBP_UIKit_ButtonText_CTA.Default__WBP_UIKit_ButtonText_CTA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_UIKit_ButtonText_CTA_C* UWBP_UIKit_ButtonText_CTA_C::GetDefaultObj()
{
	static class UWBP_UIKit_ButtonText_CTA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_UIKit_ButtonText_CTA_C*>(UWBP_UIKit_ButtonText_CTA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.SetDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_UIKit_ButtonText_CTA_C::SetDisabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_ButtonText_CTA_C", "SetDisabled");

	Params::UWBP_UIKit_ButtonText_CTA_C_SetDisabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.SetMobileFontSizeMultiplier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              MobileFontSizeMultiplier                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_ButtonText_CTA_C::SetMobileFontSizeMultiplier(float MobileFontSizeMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_ButtonText_CTA_C", "SetMobileFontSizeMultiplier");

	Params::UWBP_UIKit_ButtonText_CTA_C_SetMobileFontSizeMultiplier_Params Parms{};

	Parms.MobileFontSizeMultiplier = MobileFontSizeMultiplier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.SetEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_UIKit_ButtonText_CTA_C::SetEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_ButtonText_CTA_C", "SetEnabled");

	Params::UWBP_UIKit_ButtonText_CTA_C_SetEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.TransitionEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            AnimTransition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_ButtonText_CTA_C::TransitionEnabled(class UWidgetAnimation* AnimTransition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_ButtonText_CTA_C", "TransitionEnabled");

	Params::UWBP_UIKit_ButtonText_CTA_C_TransitionEnabled_Params Parms{};

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.TransitionDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            AnimTransition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_ButtonText_CTA_C::TransitionDisabled(class UWidgetAnimation* AnimTransition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_ButtonText_CTA_C", "TransitionDisabled");

	Params::UWBP_UIKit_ButtonText_CTA_C_TransitionDisabled_Params Parms{};

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.TransitionReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            AnimTransition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_ButtonText_CTA_C::TransitionReleased(class UWidgetAnimation* AnimTransition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_ButtonText_CTA_C", "TransitionReleased");

	Params::UWBP_UIKit_ButtonText_CTA_C_TransitionReleased_Params Parms{};

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.TransitionPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            AnimTransition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_ButtonText_CTA_C::TransitionPressed(class UWidgetAnimation* AnimTransition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_ButtonText_CTA_C", "TransitionPressed");

	Params::UWBP_UIKit_ButtonText_CTA_C_TransitionPressed_Params Parms{};

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.TransitionUnfocused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            AnimTransition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_ButtonText_CTA_C::TransitionUnfocused(class UWidgetAnimation* AnimTransition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_ButtonText_CTA_C", "TransitionUnfocused");

	Params::UWBP_UIKit_ButtonText_CTA_C_TransitionUnfocused_Params Parms{};

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.TransitionFocused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            AnimTransition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_ButtonText_CTA_C::TransitionFocused(class UWidgetAnimation* AnimTransition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_ButtonText_CTA_C", "TransitionFocused");

	Params::UWBP_UIKit_ButtonText_CTA_C_TransitionFocused_Params Parms{};

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.SetFont
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateFontInfo              Font                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicFontMaterial_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_ButtonText_CTA_C::SetFont(struct FSlateFontInfo& Font, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_ButtonText_CTA_C", "SetFont");

	Params::UWBP_UIKit_ButtonText_CTA_C_SetFont_Params Parms{};

	Parms.Font = Font;
	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue = CallFunc_GetDynamicFontMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.SetText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Empty                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_ButtonText_CTA_C::SetText(class FText Text, bool* Empty, class FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_ButtonText_CTA_C", "SetText");

	Params::UWBP_UIKit_ButtonText_CTA_C_SetText_Params Parms{};

	Parms.Text = Text;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Empty != nullptr)
		*Empty = Parms.Empty;

}


// Function WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_ButtonText_CTA_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_ButtonText_CTA_C", "PreConstruct");

	Params::UWBP_UIKit_ButtonText_CTA_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.ExecuteUbergraph_WBP_UIKit_ButtonText_CTA
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_ButtonText_CTA_C::ExecuteUbergraph_WBP_UIKit_ButtonText_CTA(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_ButtonText_CTA_C", "ExecuteUbergraph_WBP_UIKit_ButtonText_CTA");

	Params::UWBP_UIKit_ButtonText_CTA_C_ExecuteUbergraph_WBP_UIKit_ButtonText_CTA_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


