#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass KeybindWidget.KeybindWidget_C
// (None)

class UClass* UKeybindWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KeybindWidget_C");

	return Clss;
}


// KeybindWidget_C KeybindWidget.Default__KeybindWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKeybindWidget_C* UKeybindWidget_C::GetDefaultObj()
{
	static class UKeybindWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKeybindWidget_C*>(UKeybindWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KeybindWidget.KeybindWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UKeybindWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeybindWidget_C", "Construct");

	Params::UKeybindWidget_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function KeybindWidget.KeybindWidget_C.ExecuteUbergraph_KeybindWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeybindWidget_C::ExecuteUbergraph_KeybindWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeybindWidget_C", "ExecuteUbergraph_KeybindWidget");

	Params::UKeybindWidget_C_ExecuteUbergraph_KeybindWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


