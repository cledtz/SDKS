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


// Function GA_GrindRail_KeybindDisplay.GA_GrindRail_KeybindDisplay_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_GrindRail_KeybindDisplay_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_GrindRail_KeybindDisplay_C", "K2_ActivateAbility");

	Params::UGA_GrindRail_KeybindDisplay_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_GrindRail_KeybindDisplay.GA_GrindRail_KeybindDisplay_C.ExecuteUbergraph_GA_GrindRail_KeybindDisplay
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_GrindRail_KeybindDisplay_C::ExecuteUbergraph_GA_GrindRail_KeybindDisplay(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("GA_GrindRail_KeybindDisplay_C", "ExecuteUbergraph_GA_GrindRail_KeybindDisplay");

	Params::UGA_GrindRail_KeybindDisplay_C_ExecuteUbergraph_GA_GrindRail_KeybindDisplay_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
