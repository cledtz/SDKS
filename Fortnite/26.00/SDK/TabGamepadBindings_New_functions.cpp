#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TabGamepadBindings_New.TabGamepadBindings_New_C
// (None)

class UClass* UTabGamepadBindings_New_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TabGamepadBindings_New_C");

	return Clss;
}


// TabGamepadBindings_New_C TabGamepadBindings_New.Default__TabGamepadBindings_New_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTabGamepadBindings_New_C* UTabGamepadBindings_New_C::GetDefaultObj()
{
	static class UTabGamepadBindings_New_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTabGamepadBindings_New_C*>(UTabGamepadBindings_New_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TabGamepadBindings_New.TabGamepadBindings_New_C.SettingValueChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamepadBindings_New_C::SettingValueChanged(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabGamepadBindings_New_C", "SettingValueChanged");

	Params::UTabGamepadBindings_New_C_SettingValueChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamepadBindings_New.TabGamepadBindings_New_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabGamepadBindings_New_C::CenterOnTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabGamepadBindings_New_C", "CenterOnTab");

	Params::UTabGamepadBindings_New_C_CenterOnTab_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamepadBindings_New.TabGamepadBindings_New_C.ExecuteUbergraph_TabGamepadBindings_New
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamepadBindings_New_C::ExecuteUbergraph_TabGamepadBindings_New(int32 EntryPoint, double K2Node_CustomEvent_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabGamepadBindings_New_C", "ExecuteUbergraph_TabGamepadBindings_New");

	Params::UTabGamepadBindings_New_C_ExecuteUbergraph_TabGamepadBindings_New_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;

	UObject::ProcessEvent(Func, &Parms);

}

}


