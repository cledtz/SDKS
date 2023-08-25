#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_UIKit_Button_Loud.WBP_UIKit_Button_Loud_C
// (None)

class UClass* UWBP_UIKit_Button_Loud_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_UIKit_Button_Loud_C");

	return Clss;
}


// WBP_UIKit_Button_Loud_C WBP_UIKit_Button_Loud.Default__WBP_UIKit_Button_Loud_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_UIKit_Button_Loud_C* UWBP_UIKit_Button_Loud_C::GetDefaultObj()
{
	static class UWBP_UIKit_Button_Loud_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_UIKit_Button_Loud_C*>(UWBP_UIKit_Button_Loud_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_UIKit_Button_Loud.WBP_UIKit_Button_Loud_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Button_Loud_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Button_Loud_C", "PreConstruct");

	Params::UWBP_UIKit_Button_Loud_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Button_Loud.WBP_UIKit_Button_Loud_C.ExecuteUbergraph_WBP_UIKit_Button_Loud
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Button_Loud_C::ExecuteUbergraph_WBP_UIKit_Button_Loud(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Button_Loud_C", "ExecuteUbergraph_WBP_UIKit_Button_Loud");

	Params::UWBP_UIKit_Button_Loud_C_ExecuteUbergraph_WBP_UIKit_Button_Loud_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


