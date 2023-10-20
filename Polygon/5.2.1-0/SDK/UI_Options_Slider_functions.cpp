#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Options_Slider.UI_Options_Slider_C
// (None)

class UClass* UUI_Options_Slider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Options_Slider_C");

	return Clss;
}


// UI_Options_Slider_C UI_Options_Slider.Default__UI_Options_Slider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Options_Slider_C* UUI_Options_Slider_C::GetDefaultObj()
{
	static class UUI_Options_Slider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Options_Slider_C*>(UUI_Options_Slider_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Options_Slider.UI_Options_Slider_C.ApplyValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData                                (None)
// float                              CallFunc_SetFloatCVar_Value_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_Slider_C::ApplyValue(const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData, float CallFunc_SetFloatCVar_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Slider_C", "ApplyValue");

	Params::UUI_Options_Slider_C_ApplyValue_Params Parms{};

	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.K2Node_MakeStruct_AutoSettingData = K2Node_MakeStruct_AutoSettingData;
	Parms.CallFunc_SetFloatCVar_Value_ImplicitCast = CallFunc_SetFloatCVar_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options_Slider.UI_Options_Slider_C.GetValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_Slider_C::GetValue(double* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Slider_C", "GetValue");

	Params::UUI_Options_Slider_C_GetValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function UI_Options_Slider.UI_Options_Slider_C.SetValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_Slider_C::SetValue(double Value, double CallFunc_FClamp_ReturnValue, float CallFunc_SetValue_InValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Slider_C", "SetValue");

	Params::UUI_Options_Slider_C_SetValue_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_SetValue_InValue_ImplicitCast = CallFunc_SetValue_InValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options_Slider.UI_Options_Slider_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_Slider_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Slider_C", "PreConstruct");

	Params::UUI_Options_Slider_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options_Slider.UI_Options_Slider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Options_Slider_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Slider_C", "Construct");

	Params::UUI_Options_Slider_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options_Slider.UI_Options_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_Slider_C::BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Slider_C", "BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	Params::UUI_Options_Slider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options_Slider.UI_Options_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Options_Slider_C::BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Slider_C", "BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature");

	Params::UUI_Options_Slider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options_Slider.UI_Options_Slider_C.ExecuteUbergraph_UI_Options_Slider
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMinValue_InValue_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMaxValue_InValue_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_SelectValue_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetValue_Value_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_Slider_C::ExecuteUbergraph_UI_Options_Slider(int32 EntryPoint, bool K2Node_Event_IsDesignTime, float K2Node_ComponentBoundEvent_Value, float CallFunc_GetFloatCVar_ReturnValue, float CallFunc_SetMinValue_InValue_ImplicitCast, float CallFunc_SetMaxValue_InValue_ImplicitCast, double K2Node_VariableSet_SelectValue_ImplicitCast, double CallFunc_SetValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Slider_C", "ExecuteUbergraph_UI_Options_Slider");

	Params::UUI_Options_Slider_C_ExecuteUbergraph_UI_Options_Slider_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_GetFloatCVar_ReturnValue = CallFunc_GetFloatCVar_ReturnValue;
	Parms.CallFunc_SetMinValue_InValue_ImplicitCast = CallFunc_SetMinValue_InValue_ImplicitCast;
	Parms.CallFunc_SetMaxValue_InValue_ImplicitCast = CallFunc_SetMaxValue_InValue_ImplicitCast;
	Parms.K2Node_VariableSet_SelectValue_ImplicitCast = K2Node_VariableSet_SelectValue_ImplicitCast;
	Parms.CallFunc_SetValue_Value_ImplicitCast = CallFunc_SetValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options_Slider.UI_Options_Slider_C.OnValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_Slider_C::OnValueChanged__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_Slider_C", "OnValueChanged__DelegateSignature");

	Params::UUI_Options_Slider_C_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}

}


