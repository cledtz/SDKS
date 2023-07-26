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


// Function KeybindWidget.KeybindWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UKeybindWidget_C::Construct()
{
	static auto Func = Class->GetFunction("KeybindWidget_C", "Construct");

	Params::UKeybindWidget_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function KeybindWidget.KeybindWidget_C.ExecuteUbergraph_KeybindWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeybindWidget_C::ExecuteUbergraph_KeybindWidget(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("KeybindWidget_C", "ExecuteUbergraph_KeybindWidget");

	Params::UKeybindWidget_C_ExecuteUbergraph_KeybindWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
