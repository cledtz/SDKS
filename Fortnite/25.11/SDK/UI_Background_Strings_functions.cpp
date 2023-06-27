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


// Function UI_Background_Strings.UI_Background_Strings_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Background_Strings_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("UI_Background_Strings_C", "PreConstruct");

	Params::UUI_Background_Strings_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Background_Strings.UI_Background_Strings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Background_Strings_C::Construct()
{
	static auto Func = Class->GetFunction("UI_Background_Strings_C", "Construct");

	Params::UUI_Background_Strings_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Background_Strings.UI_Background_Strings_C.ExecuteUbergraph_UI_Background_Strings
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Background_Strings_C::ExecuteUbergraph_UI_Background_Strings(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("UI_Background_Strings_C", "ExecuteUbergraph_UI_Background_Strings");

	Params::UUI_Background_Strings_C_ExecuteUbergraph_UI_Background_Strings_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
