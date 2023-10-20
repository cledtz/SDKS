#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Options.UI_Options_C
// (None)

class UClass* UUI_Options_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Options_C");

	return Clss;
}


// UI_Options_C UI_Options.Default__UI_Options_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Options_C* UUI_Options_C::GetDefaultObj()
{
	static class UUI_Options_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Options_C*>(UUI_Options_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Options.UI_Options_C.SetCurrentLanguageOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetCurrentLanguage_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::SetCurrentLanguageOption(const class FString& CallFunc_GetCurrentLanguage_ReturnValue, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "SetCurrentLanguageOption");

	Params::UUI_Options_C_SetCurrentLanguageOption_Params Parms{};

	Parms.CallFunc_GetCurrentLanguage_ReturnValue = CallFunc_GetCurrentLanguage_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.SelectLanguage
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentLanguageAndLocale_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentLanguageAndLocale_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentLanguageAndLocale_ReturnValue_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentLanguageAndLocale_ReturnValue_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentLanguageAndLocale_ReturnValue_4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentLanguageAndLocale_ReturnValue_5               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentLanguageAndLocale_ReturnValue_6               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentLanguageAndLocale_ReturnValue_7               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentLanguageAndLocale_ReturnValue_8               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentLanguageAndLocale_ReturnValue_9               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentLanguageAndLocale_ReturnValue_10              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::SelectLanguage(const class FString& Selection, bool CallFunc_SetCurrentLanguageAndLocale_ReturnValue, bool K2Node_SwitchString_CmpSuccess, bool CallFunc_SetCurrentLanguageAndLocale_ReturnValue_1, bool CallFunc_SetCurrentLanguageAndLocale_ReturnValue_2, bool CallFunc_SetCurrentLanguageAndLocale_ReturnValue_3, bool CallFunc_SetCurrentLanguageAndLocale_ReturnValue_4, bool CallFunc_SetCurrentLanguageAndLocale_ReturnValue_5, bool CallFunc_SetCurrentLanguageAndLocale_ReturnValue_6, bool CallFunc_SetCurrentLanguageAndLocale_ReturnValue_7, bool CallFunc_SetCurrentLanguageAndLocale_ReturnValue_8, bool CallFunc_SetCurrentLanguageAndLocale_ReturnValue_9, bool CallFunc_SetCurrentLanguageAndLocale_ReturnValue_10)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "SelectLanguage");

	Params::UUI_Options_C_SelectLanguage_Params Parms{};

	Parms.Selection = Selection;
	Parms.CallFunc_SetCurrentLanguageAndLocale_ReturnValue = CallFunc_SetCurrentLanguageAndLocale_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_SetCurrentLanguageAndLocale_ReturnValue_1 = CallFunc_SetCurrentLanguageAndLocale_ReturnValue_1;
	Parms.CallFunc_SetCurrentLanguageAndLocale_ReturnValue_2 = CallFunc_SetCurrentLanguageAndLocale_ReturnValue_2;
	Parms.CallFunc_SetCurrentLanguageAndLocale_ReturnValue_3 = CallFunc_SetCurrentLanguageAndLocale_ReturnValue_3;
	Parms.CallFunc_SetCurrentLanguageAndLocale_ReturnValue_4 = CallFunc_SetCurrentLanguageAndLocale_ReturnValue_4;
	Parms.CallFunc_SetCurrentLanguageAndLocale_ReturnValue_5 = CallFunc_SetCurrentLanguageAndLocale_ReturnValue_5;
	Parms.CallFunc_SetCurrentLanguageAndLocale_ReturnValue_6 = CallFunc_SetCurrentLanguageAndLocale_ReturnValue_6;
	Parms.CallFunc_SetCurrentLanguageAndLocale_ReturnValue_7 = CallFunc_SetCurrentLanguageAndLocale_ReturnValue_7;
	Parms.CallFunc_SetCurrentLanguageAndLocale_ReturnValue_8 = CallFunc_SetCurrentLanguageAndLocale_ReturnValue_8;
	Parms.CallFunc_SetCurrentLanguageAndLocale_ReturnValue_9 = CallFunc_SetCurrentLanguageAndLocale_ReturnValue_9;
	Parms.CallFunc_SetCurrentLanguageAndLocale_ReturnValue_10 = CallFunc_SetCurrentLanguageAndLocale_ReturnValue_10;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.SetActiveOptionsMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              L_Index                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::SetActiveOptionsMenu(int32 Index, int32 L_Index, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "SetActiveOptionsMenu");

	Params::UUI_Options_C_SetActiveOptionsMenu_Params Parms{};

	Parms.Index = Index;
	Parms.L_Index = L_Index;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.SetGraphicsQuality
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              GeneralGraphicsQuality                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                L_Button                                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatCVar_Value_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::SetGraphicsQuality(int32 GeneralGraphicsQuality, class UUI_Button_C* L_Button, int32 Temp_int_Variable, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_3, bool K2Node_SwitchInteger_CmpSuccess, double K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_SetFloatCVar_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "SetGraphicsQuality");

	Params::UUI_Options_C_SetGraphicsQuality_Params Parms{};

	Parms.GeneralGraphicsQuality = GeneralGraphicsQuality;
	Parms.L_Button = L_Button;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SetFloatCVar_Value_ImplicitCast = CallFunc_SetFloatCVar_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Button_Back_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::BndEvt__UI_Button_Back_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "BndEvt__UI_Button_Back_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");

	Params::UUI_Options_C_BndEvt__UI_Button_Back_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.VerticalSyncEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::VerticalSyncEvent(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "VerticalSyncEvent");

	Params::UUI_Options_C_VerticalSyncEvent_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.ApplyChanges
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Options_C::ApplyChanges()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "ApplyChanges");

	Params::UUI_Options_C_ApplyChanges_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Button_Apply_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::BndEvt__UI_Button_Apply_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "BndEvt__UI_Button_Apply_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");

	Params::UUI_Options_C_BndEvt__UI_Button_Apply_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Button_Low_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::BndEvt__UI_Button_Low_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "BndEvt__UI_Button_Low_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");

	Params::UUI_Options_C_BndEvt__UI_Button_Low_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Button_Medium_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::BndEvt__UI_Button_Medium_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "BndEvt__UI_Button_Medium_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");

	Params::UUI_Options_C_BndEvt__UI_Button_Medium_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Button_HIGH_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::BndEvt__UI_Button_HIGH_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "BndEvt__UI_Button_HIGH_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature");

	Params::UUI_Options_C_BndEvt__UI_Button_HIGH_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Button_Ultra_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::BndEvt__UI_Button_Ultra_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "BndEvt__UI_Button_Ultra_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature");

	Params::UUI_Options_C_BndEvt__UI_Button_Ultra_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.OnChangedValue_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_Options_C::OnChangedValue_Event(const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "OnChangedValue_Event");

	Params::UUI_Options_C_OnChangedValue_Event_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Button_Audio_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::BndEvt__UI_Button_Audio_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "BndEvt__UI_Button_Audio_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature");

	Params::UUI_Options_C_BndEvt__UI_Button_Audio_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Button_Video_K2Node_ComponentBoundEvent_9_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::BndEvt__UI_Button_Video_K2Node_ComponentBoundEvent_9_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "BndEvt__UI_Button_Video_K2Node_ComponentBoundEvent_9_OnClick__DelegateSignature");

	Params::UUI_Options_C_BndEvt__UI_Button_Video_K2Node_ComponentBoundEvent_9_OnClick__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Button_Controls_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::BndEvt__UI_Button_Controls_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "BndEvt__UI_Button_Controls_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature");

	Params::UUI_Options_C_BndEvt__UI_Button_Controls_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.ChangeMasterVolume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::ChangeMasterVolume(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "ChangeMasterVolume");

	Params::UUI_Options_C_ChangeMasterVolume_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.ChangeMusicVolume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::ChangeMusicVolume(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "ChangeMusicVolume");

	Params::UUI_Options_C_ChangeMusicVolume_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.ChangeEffectsVolume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::ChangeEffectsVolume(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "ChangeEffectsVolume");

	Params::UUI_Options_C_ChangeEffectsVolume_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Options_MasterVolume_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::BndEvt__UI_Options_MasterVolume_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "BndEvt__UI_Options_MasterVolume_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature");

	Params::UUI_Options_C_BndEvt__UI_Options_MasterVolume_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Options_EffectsVolume_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::BndEvt__UI_Options_EffectsVolume_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "BndEvt__UI_Options_EffectsVolume_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature");

	Params::UUI_Options_C_BndEvt__UI_Options_EffectsVolume_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Options_MusicVolume_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::BndEvt__UI_Options_MusicVolume_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "BndEvt__UI_Options_MusicVolume_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature");

	Params::UUI_Options_C_BndEvt__UI_Options_MusicVolume_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.ChangeGeneralQuality
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::ChangeGeneralQuality(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "ChangeGeneralQuality");

	Params::UUI_Options_C_ChangeGeneralQuality_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Options_Slider_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::BndEvt__UI_Options_Slider_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "BndEvt__UI_Options_Slider_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature");

	Params::UUI_Options_C_BndEvt__UI_Options_Slider_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.BndEvt__ComboBoxString_255_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::BndEvt__ComboBoxString_255_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "BndEvt__ComboBoxString_255_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature");

	Params::UUI_Options_C_BndEvt__ComboBoxString_255_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.ChangeFOVEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::ChangeFOVEvent(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "ChangeFOVEvent");

	Params::UUI_Options_C_ChangeFOVEvent_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Options_UI_Button_Reset_K2Node_ComponentBoundEvent_17_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::BndEvt__UI_Options_UI_Button_Reset_K2Node_ComponentBoundEvent_17_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "BndEvt__UI_Options_UI_Button_Reset_K2Node_ComponentBoundEvent_17_OnClick__DelegateSignature");

	Params::UUI_Options_C_BndEvt__UI_Options_UI_Button_Reset_K2Node_ComponentBoundEvent_17_OnClick__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.ChangeResolutionQuality
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::ChangeResolutionQuality(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "ChangeResolutionQuality");

	Params::UUI_Options_C_ChangeResolutionQuality_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Options_UI_Options_Slider_MouseSensitivity_Scoped_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::BndEvt__UI_Options_UI_Options_Slider_MouseSensitivity_Scoped_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "BndEvt__UI_Options_UI_Options_Slider_MouseSensitivity_Scoped_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature");

	Params::UUI_Options_C_BndEvt__UI_Options_UI_Options_Slider_MouseSensitivity_Scoped_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.ChangeGameFPSLimit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::ChangeGameFPSLimit(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "ChangeGameFPSLimit");

	Params::UUI_Options_C_ChangeGameFPSLimit_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.ChangeAimMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::ChangeAimMode(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "ChangeAimMode");

	Params::UUI_Options_C_ChangeAimMode_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.ChangeCrouchMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::ChangeCrouchMode(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "ChangeCrouchMode");

	Params::UUI_Options_C_ChangeCrouchMode_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.ChangeLeanMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::ChangeLeanMode(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "ChangeLeanMode");

	Params::UUI_Options_C_ChangeLeanMode_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.ChangeSprintMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::ChangeSprintMode(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "ChangeSprintMode");

	Params::UUI_Options_C_ChangeSprintMode_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Options_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "Construct");

	Params::UUI_Options_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.ChangeAntiAliasingMethod
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::ChangeAntiAliasingMethod(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "ChangeAntiAliasingMethod");

	Params::UUI_Options_C_ChangeAntiAliasingMethod_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.ChangeMouseSensitivity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::ChangeMouseSensitivity(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "ChangeMouseSensitivity");

	Params::UUI_Options_C_ChangeMouseSensitivity_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.ChangeInvertMouse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::ChangeInvertMouse(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "ChangeInvertMouse");

	Params::UUI_Options_C_ChangeInvertMouse_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Options_UI_Button_Sharpen_Low_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::BndEvt__UI_Options_UI_Button_Sharpen_Low_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "BndEvt__UI_Options_UI_Button_Sharpen_Low_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature");

	Params::UUI_Options_C_BndEvt__UI_Options_UI_Button_Sharpen_Low_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Options_UI_Button_Sharpen_Medium_K2Node_ComponentBoundEvent_16_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::BndEvt__UI_Options_UI_Button_Sharpen_Medium_K2Node_ComponentBoundEvent_16_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "BndEvt__UI_Options_UI_Button_Sharpen_Medium_K2Node_ComponentBoundEvent_16_OnClick__DelegateSignature");

	Params::UUI_Options_C_BndEvt__UI_Options_UI_Button_Sharpen_Medium_K2Node_ComponentBoundEvent_16_OnClick__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.BndEvt__UI_Options_UI_Button_Sharpen_High_K2Node_ComponentBoundEvent_18_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::BndEvt__UI_Options_UI_Button_Sharpen_High_K2Node_ComponentBoundEvent_18_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "BndEvt__UI_Options_UI_Button_Sharpen_High_K2Node_ComponentBoundEvent_18_OnClick__DelegateSignature");

	Params::UUI_Options_C_BndEvt__UI_Options_UI_Button_Sharpen_High_K2Node_ComponentBoundEvent_18_OnClick__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.ChangeSharpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::ChangeSharpen(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "ChangeSharpen");

	Params::UUI_Options_C_ChangeSharpen_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.ChangeEffectsQuality
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::ChangeEffectsQuality(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "ChangeEffectsQuality");

	Params::UUI_Options_C_ChangeEffectsQuality_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.ChangeTextureQuality
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::ChangeTextureQuality(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "ChangeTextureQuality");

	Params::UUI_Options_C_ChangeTextureQuality_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.ChangeViewDistanceQuality
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::ChangeViewDistanceQuality(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "ChangeViewDistanceQuality");

	Params::UUI_Options_C_ChangeViewDistanceQuality_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.ExecuteUbergraph_UI_Options
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUltra_Dynamic_Sky_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class UUltra_Dynamic_Sky_C*        CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringCVar_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUltra_Dynamic_Sky_C*        Temp_wildcard_Variable                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUltra_Dynamic_Sky_C*>CallFunc_GetAllActorsOfClass_OutActors_1                         (ReferenceParm)
// class FString                      CallFunc_GetStringCVar_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class UUltra_Dynamic_Sky_C*        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUltra_Dynamic_Sky_C*        Temp_wildcard_Variable_1                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_ComponentBoundEvent_Button_12                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewValue_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_ComponentBoundEvent_Button_11                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_ComponentBoundEvent_Button_10                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_ComponentBoundEvent_Button_9                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_ComponentBoundEvent_Button_8                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_ComponentBoundEvent_Button_7                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Value                                         (ZeroConstructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_ComponentBoundEvent_Button_6                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_ComponentBoundEvent_Button_5                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewValue_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewValue_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewValue_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Value_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Value_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// double                             K2Node_ComponentBoundEvent_Value_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_2                            (None)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewValue_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAutoSettingData            K2Node_MakeStruct_AutoSettingData                                (None)
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Value_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPG_PlayerController_Base*   K2Node_DynamicCast_AsPG_Player_Controller_Base                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_3                            (None)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem                          (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewValue_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputMappingPreset> CallFunc_GetDefaultInputPresets_ReturnValue                      (ReferenceParm)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputMappingPreset         CallFunc_Array_Get_Item_2                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_4                            (None)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewValue_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_5                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_6                            (None)
// class UPG_PlayerController_Game*   K2Node_DynamicCast_AsPG_Player_Controller_Game                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewValue_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewValue_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewValue_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewValue_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewValue_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewValue_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewValue_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_NewValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIntCVar_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIntCVar_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Round_A_ImplicitCast                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_Value_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetDefaultCameraFOV_newDefaultCameraFOV_ImplicitCast    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_C::ExecuteUbergraph_UI_Options(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool Temp_bool_Variable_1, float Temp_real_Variable, float Temp_real_Variable_1, bool Temp_bool_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, int32 Temp_int_Variable_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, int32 Temp_int_Array_Index_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float Temp_real_Variable_2, TArray<class UUltra_Dynamic_Sky_C*>& CallFunc_GetAllActorsOfClass_OutActors, class UUltra_Dynamic_Sky_C* CallFunc_Array_Get_Item, const class FString& CallFunc_GetStringCVar_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class UUltra_Dynamic_Sky_C* Temp_wildcard_Variable, float Temp_real_Variable_3, bool CallFunc_IsValid_ReturnValue_1, TArray<class UUltra_Dynamic_Sky_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, const class FString& CallFunc_GetStringCVar_ReturnValue_1, class UUltra_Dynamic_Sky_C* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UUltra_Dynamic_Sky_C* Temp_wildcard_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, bool CallFunc_IsValid_ReturnValue_3, bool Temp_bool_Variable_3, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_12, float K2Node_Select_Default, int32 K2Node_CustomEvent_NewValue_18, bool CallFunc_Conv_IntToBool_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_11, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_10, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_9, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_8, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_7, const class FString& K2Node_CustomEvent_Value, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_6, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_5, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_4, float K2Node_CustomEvent_NewValue_17, float K2Node_CustomEvent_NewValue_16, float K2Node_CustomEvent_NewValue_15, double K2Node_ComponentBoundEvent_Value_4, double K2Node_ComponentBoundEvent_Value_3, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, double K2Node_ComponentBoundEvent_Value_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, int32 CallFunc_FTrunc_ReturnValue_2, class FText CallFunc_Conv_IntToText_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 K2Node_CustomEvent_NewValue_14, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, double K2Node_ComponentBoundEvent_Value_1, class UPG_PlayerController_Base* K2Node_DynamicCast_AsPG_Player_Controller_Base, bool K2Node_DynamicCast_bSuccess, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, int32 CallFunc_FTrunc_ReturnValue_3, class FText CallFunc_Conv_IntToText_ReturnValue_3, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType, float K2Node_CustomEvent_NewValue_13, TArray<struct FInputMappingPreset>& CallFunc_GetDefaultInputPresets_ReturnValue, double CallFunc_FClamp_ReturnValue, const struct FInputMappingPreset& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_4, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_3, int32 K2Node_CustomEvent_NewValue_12, double K2Node_ComponentBoundEvent_Value, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_4, class FText CallFunc_Conv_IntToText_ReturnValue_5, class FText CallFunc_Conv_IntToText_ReturnValue_6, class UPG_PlayerController_Game* K2Node_DynamicCast_AsPG_Player_Controller_Game, bool K2Node_DynamicCast_bSuccess_1, int32 K2Node_CustomEvent_NewValue_11, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_NotEqual_StrStr_ReturnValue, int32 K2Node_CustomEvent_NewValue_10, int32 K2Node_CustomEvent_NewValue_9, int32 K2Node_CustomEvent_NewValue_8, int32 K2Node_CustomEvent_NewValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, int32 K2Node_CustomEvent_NewValue_6, float K2Node_CustomEvent_NewValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, bool K2Node_CustomEvent_NewValue_4, float CallFunc_GetFloatCVar_ReturnValue, float K2Node_Select_Default_1, float CallFunc_GetFloatCVar_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, float Temp_real_Variable_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_2, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_1, class UUI_Button_C* K2Node_ComponentBoundEvent_Button, int32 K2Node_CustomEvent_NewValue_3, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, float Temp_real_Variable_5, int32 CallFunc_GetIntCVar_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 K2Node_Select_Default_2, int32 CallFunc_GetIntCVar_ReturnValue_1, bool Temp_bool_Variable_4, bool CallFunc_NotEqual_IntInt_ReturnValue, float K2Node_Select_Default_3, enum class ESlateVisibility K2Node_Select_Default_4, int32 K2Node_CustomEvent_NewValue_2, int32 K2Node_CustomEvent_NewValue_1, int32 K2Node_CustomEvent_NewValue, int32 K2Node_Select_Default_5, double CallFunc_Round_A_ImplicitCast, double CallFunc_FClamp_Value_ImplicitCast, float CallFunc_SetDefaultCameraFOV_newDefaultCameraFOV_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "ExecuteUbergraph_UI_Options");

	Params::UUI_Options_C_ExecuteUbergraph_UI_Options_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetStringCVar_ReturnValue = CallFunc_GetStringCVar_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_GetStringCVar_ReturnValue_1 = CallFunc_GetStringCVar_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.Temp_wildcard_Variable_1 = Temp_wildcard_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_ComponentBoundEvent_Button_12 = K2Node_ComponentBoundEvent_Button_12;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_NewValue_18 = K2Node_CustomEvent_NewValue_18;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_11 = K2Node_ComponentBoundEvent_Button_11;
	Parms.K2Node_ComponentBoundEvent_Button_10 = K2Node_ComponentBoundEvent_Button_10;
	Parms.K2Node_ComponentBoundEvent_Button_9 = K2Node_ComponentBoundEvent_Button_9;
	Parms.K2Node_ComponentBoundEvent_Button_8 = K2Node_ComponentBoundEvent_Button_8;
	Parms.K2Node_ComponentBoundEvent_Button_7 = K2Node_ComponentBoundEvent_Button_7;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_ComponentBoundEvent_Button_6 = K2Node_ComponentBoundEvent_Button_6;
	Parms.K2Node_ComponentBoundEvent_Button_5 = K2Node_ComponentBoundEvent_Button_5;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.K2Node_CustomEvent_NewValue_17 = K2Node_CustomEvent_NewValue_17;
	Parms.K2Node_CustomEvent_NewValue_16 = K2Node_CustomEvent_NewValue_16;
	Parms.K2Node_CustomEvent_NewValue_15 = K2Node_CustomEvent_NewValue_15;
	Parms.K2Node_ComponentBoundEvent_Value_4 = K2Node_ComponentBoundEvent_Value_4;
	Parms.K2Node_ComponentBoundEvent_Value_3 = K2Node_ComponentBoundEvent_Value_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Value_2 = K2Node_ComponentBoundEvent_Value_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_FTrunc_ReturnValue_2 = CallFunc_FTrunc_ReturnValue_2;
	Parms.CallFunc_Conv_IntToText_ReturnValue_2 = CallFunc_Conv_IntToText_ReturnValue_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.K2Node_CustomEvent_NewValue_14 = K2Node_CustomEvent_NewValue_14;
	Parms.K2Node_MakeStruct_AutoSettingData = K2Node_MakeStruct_AutoSettingData;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Value_1 = K2Node_ComponentBoundEvent_Value_1;
	Parms.K2Node_DynamicCast_AsPG_Player_Controller_Base = K2Node_DynamicCast_AsPG_Player_Controller_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_FTrunc_ReturnValue_3 = CallFunc_FTrunc_ReturnValue_3;
	Parms.CallFunc_Conv_IntToText_ReturnValue_3 = CallFunc_Conv_IntToText_ReturnValue_3;
	Parms.K2Node_ComponentBoundEvent_SelectedItem = K2Node_ComponentBoundEvent_SelectedItem;
	Parms.K2Node_ComponentBoundEvent_SelectionType = K2Node_ComponentBoundEvent_SelectionType;
	Parms.K2Node_CustomEvent_NewValue_13 = K2Node_CustomEvent_NewValue_13;
	Parms.CallFunc_GetDefaultInputPresets_ReturnValue = CallFunc_GetDefaultInputPresets_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_4 = CallFunc_Conv_IntToText_ReturnValue_4;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_CustomEvent_NewValue_12 = K2Node_CustomEvent_NewValue_12;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_4 = CallFunc_FTrunc_ReturnValue_4;
	Parms.CallFunc_Conv_IntToText_ReturnValue_5 = CallFunc_Conv_IntToText_ReturnValue_5;
	Parms.CallFunc_Conv_IntToText_ReturnValue_6 = CallFunc_Conv_IntToText_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsPG_Player_Controller_Game = K2Node_DynamicCast_AsPG_Player_Controller_Game;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_NewValue_11 = K2Node_CustomEvent_NewValue_11;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.K2Node_CustomEvent_NewValue_10 = K2Node_CustomEvent_NewValue_10;
	Parms.K2Node_CustomEvent_NewValue_9 = K2Node_CustomEvent_NewValue_9;
	Parms.K2Node_CustomEvent_NewValue_8 = K2Node_CustomEvent_NewValue_8;
	Parms.K2Node_CustomEvent_NewValue_7 = K2Node_CustomEvent_NewValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.K2Node_CustomEvent_NewValue_6 = K2Node_CustomEvent_NewValue_6;
	Parms.K2Node_CustomEvent_NewValue_5 = K2Node_CustomEvent_NewValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.K2Node_CustomEvent_NewValue_4 = K2Node_CustomEvent_NewValue_4;
	Parms.CallFunc_GetFloatCVar_ReturnValue = CallFunc_GetFloatCVar_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetFloatCVar_ReturnValue_1 = CallFunc_GetFloatCVar_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_5 = CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	Parms.Temp_real_Variable_4 = Temp_real_Variable_4;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_6 = CallFunc_Multiply_DoubleDouble_ReturnValue_6;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_CustomEvent_NewValue_3 = K2Node_CustomEvent_NewValue_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.Temp_real_Variable_5 = Temp_real_Variable_5;
	Parms.CallFunc_GetIntCVar_ReturnValue = CallFunc_GetIntCVar_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetIntCVar_ReturnValue_1 = CallFunc_GetIntCVar_ReturnValue_1;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_CustomEvent_NewValue_2 = K2Node_CustomEvent_NewValue_2;
	Parms.K2Node_CustomEvent_NewValue_1 = K2Node_CustomEvent_NewValue_1;
	Parms.K2Node_CustomEvent_NewValue = K2Node_CustomEvent_NewValue;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_Round_A_ImplicitCast = CallFunc_Round_A_ImplicitCast;
	Parms.CallFunc_FClamp_Value_ImplicitCast = CallFunc_FClamp_Value_ImplicitCast;
	Parms.CallFunc_SetDefaultCameraFOV_newDefaultCameraFOV_ImplicitCast = CallFunc_SetDefaultCameraFOV_newDefaultCameraFOV_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Options.UI_Options_C.ClickBackDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Options_C::ClickBackDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Options_C", "ClickBackDelegate__DelegateSignature");

	Params::UUI_Options_C_ClickBackDelegate__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}


