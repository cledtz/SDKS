#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Background_Strings.UI_Background_Strings_C
// (None)

class UClass* UUI_Background_Strings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Background_Strings_C");

	return Clss;
}


// UI_Background_Strings_C UI_Background_Strings.Default__UI_Background_Strings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Background_Strings_C* UUI_Background_Strings_C::GetDefaultObj()
{
	static class UUI_Background_Strings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Background_Strings_C*>(UUI_Background_Strings_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Background_Strings.UI_Background_Strings_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Background_Strings_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Background_Strings_C", "PreConstruct");

	Params::UUI_Background_Strings_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Background_Strings.UI_Background_Strings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Background_Strings_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Background_Strings_C", "Construct");

	Params::UUI_Background_Strings_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Background_Strings.UI_Background_Strings_C.ExecuteUbergraph_UI_Background_Strings
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Background_Strings_C::ExecuteUbergraph_UI_Background_Strings(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Background_Strings_C", "ExecuteUbergraph_UI_Background_Strings");

	Params::UUI_Background_Strings_C_ExecuteUbergraph_UI_Background_Strings_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


