#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TabTouchWeaponOptions_New.TabTouchWeaponOptions_New_C
// (None)

class UClass* UTabTouchWeaponOptions_New_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TabTouchWeaponOptions_New_C");

	return Clss;
}


// TabTouchWeaponOptions_New_C TabTouchWeaponOptions_New.Default__TabTouchWeaponOptions_New_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTabTouchWeaponOptions_New_C* UTabTouchWeaponOptions_New_C::GetDefaultObj()
{
	static class UTabTouchWeaponOptions_New_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTabTouchWeaponOptions_New_C*>(UTabTouchWeaponOptions_New_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TabTouchWeaponOptions_New.TabTouchWeaponOptions_New_C.SettingValueChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabTouchWeaponOptions_New_C::SettingValueChanged(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabTouchWeaponOptions_New_C", "SettingValueChanged");

	Params::UTabTouchWeaponOptions_New_C_SettingValueChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabTouchWeaponOptions_New.TabTouchWeaponOptions_New_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabTouchWeaponOptions_New_C::CenterOnTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabTouchWeaponOptions_New_C", "CenterOnTab");

	Params::UTabTouchWeaponOptions_New_C_CenterOnTab_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function TabTouchWeaponOptions_New.TabTouchWeaponOptions_New_C.ExecuteUbergraph_TabTouchWeaponOptions_New
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabTouchWeaponOptions_New_C::ExecuteUbergraph_TabTouchWeaponOptions_New(int32 EntryPoint, double K2Node_CustomEvent_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabTouchWeaponOptions_New_C", "ExecuteUbergraph_TabTouchWeaponOptions_New");

	Params::UTabTouchWeaponOptions_New_C_ExecuteUbergraph_TabTouchWeaponOptions_New_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;

	UObject::ProcessEvent(Func, &Parms);

}

}


