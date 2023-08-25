#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TabMouseAndKeyboardOptions_New.TabMouseAndKeyboardOptions_New_C
// (None)

class UClass* UTabMouseAndKeyboardOptions_New_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TabMouseAndKeyboardOptions_New_C");

	return Clss;
}


// TabMouseAndKeyboardOptions_New_C TabMouseAndKeyboardOptions_New.Default__TabMouseAndKeyboardOptions_New_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTabMouseAndKeyboardOptions_New_C* UTabMouseAndKeyboardOptions_New_C::GetDefaultObj()
{
	static class UTabMouseAndKeyboardOptions_New_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTabMouseAndKeyboardOptions_New_C*>(UTabMouseAndKeyboardOptions_New_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TabMouseAndKeyboardOptions_New.TabMouseAndKeyboardOptions_New_C.SettingValueChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabMouseAndKeyboardOptions_New_C::SettingValueChanged(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabMouseAndKeyboardOptions_New_C", "SettingValueChanged");

	Params::UTabMouseAndKeyboardOptions_New_C_SettingValueChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabMouseAndKeyboardOptions_New.TabMouseAndKeyboardOptions_New_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabMouseAndKeyboardOptions_New_C::CenterOnTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabMouseAndKeyboardOptions_New_C", "CenterOnTab");

	Params::UTabMouseAndKeyboardOptions_New_C_CenterOnTab_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function TabMouseAndKeyboardOptions_New.TabMouseAndKeyboardOptions_New_C.ExecuteUbergraph_TabMouseAndKeyboardOptions_New
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabMouseAndKeyboardOptions_New_C::ExecuteUbergraph_TabMouseAndKeyboardOptions_New(int32 EntryPoint, double K2Node_CustomEvent_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabMouseAndKeyboardOptions_New_C", "ExecuteUbergraph_TabMouseAndKeyboardOptions_New");

	Params::UTabMouseAndKeyboardOptions_New_C_ExecuteUbergraph_TabMouseAndKeyboardOptions_New_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;

	UObject::ProcessEvent(Func, &Parms);

}

}


