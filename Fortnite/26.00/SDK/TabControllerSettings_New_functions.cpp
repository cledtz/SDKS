#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TabControllerSettings_New.TabControllerSettings_New_C
// (None)

class UClass* UTabControllerSettings_New_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TabControllerSettings_New_C");

	return Clss;
}


// TabControllerSettings_New_C TabControllerSettings_New.Default__TabControllerSettings_New_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTabControllerSettings_New_C* UTabControllerSettings_New_C::GetDefaultObj()
{
	static class UTabControllerSettings_New_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTabControllerSettings_New_C*>(UTabControllerSettings_New_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TabControllerSettings_New.TabControllerSettings_New_C.SettingValueChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabControllerSettings_New_C::SettingValueChanged(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabControllerSettings_New_C", "SettingValueChanged");

	Params::UTabControllerSettings_New_C_SettingValueChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabControllerSettings_New.TabControllerSettings_New_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabControllerSettings_New_C::CenterOnTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabControllerSettings_New_C", "CenterOnTab");

	Params::UTabControllerSettings_New_C_CenterOnTab_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function TabControllerSettings_New.TabControllerSettings_New_C.ExecuteUbergraph_TabControllerSettings_New
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabControllerSettings_New_C::ExecuteUbergraph_TabControllerSettings_New(int32 EntryPoint, double K2Node_CustomEvent_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabControllerSettings_New_C", "ExecuteUbergraph_TabControllerSettings_New");

	Params::UTabControllerSettings_New_C_ExecuteUbergraph_TabControllerSettings_New_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;

	UObject::ProcessEvent(Func, &Parms);

}

}


