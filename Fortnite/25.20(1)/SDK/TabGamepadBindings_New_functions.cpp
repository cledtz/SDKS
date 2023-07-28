#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function TabGamepadBindings_New.TabGamepadBindings_New_C.SettingValueChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamepadBindings_New_C::SettingValueChanged(double Value)
{
	static auto Func = Class->GetFunction("TabGamepadBindings_New_C", "SettingValueChanged");

	Params::UTabGamepadBindings_New_C_SettingValueChanged_Params Parms;

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamepadBindings_New.TabGamepadBindings_New_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabGamepadBindings_New_C::CenterOnTab()
{
	static auto Func = Class->GetFunction("TabGamepadBindings_New_C", "CenterOnTab");

	Params::UTabGamepadBindings_New_C_CenterOnTab_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamepadBindings_New.TabGamepadBindings_New_C.ExecuteUbergraph_TabGamepadBindings_New
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamepadBindings_New_C::ExecuteUbergraph_TabGamepadBindings_New(int32 EntryPoint, double K2Node_CustomEvent_Value)
{
	static auto Func = Class->GetFunction("TabGamepadBindings_New_C", "ExecuteUbergraph_TabGamepadBindings_New");

	Params::UTabGamepadBindings_New_C_ExecuteUbergraph_TabGamepadBindings_New_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
