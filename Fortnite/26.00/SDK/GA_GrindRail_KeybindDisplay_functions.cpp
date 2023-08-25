#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_GrindRail_KeybindDisplay.GA_GrindRail_KeybindDisplay_C
// (None)

class UClass* UGA_GrindRail_KeybindDisplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_GrindRail_KeybindDisplay_C");

	return Clss;
}


// GA_GrindRail_KeybindDisplay_C GA_GrindRail_KeybindDisplay.Default__GA_GrindRail_KeybindDisplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_GrindRail_KeybindDisplay_C* UGA_GrindRail_KeybindDisplay_C::GetDefaultObj()
{
	static class UGA_GrindRail_KeybindDisplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_GrindRail_KeybindDisplay_C*>(UGA_GrindRail_KeybindDisplay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_GrindRail_KeybindDisplay.GA_GrindRail_KeybindDisplay_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_GrindRail_KeybindDisplay_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_GrindRail_KeybindDisplay_C", "K2_ActivateAbility");

	Params::UGA_GrindRail_KeybindDisplay_C_K2_ActivateAbility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_GrindRail_KeybindDisplay.GA_GrindRail_KeybindDisplay_C.ExecuteUbergraph_GA_GrindRail_KeybindDisplay
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_GrindRail_KeybindDisplay_C::ExecuteUbergraph_GA_GrindRail_KeybindDisplay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_GrindRail_KeybindDisplay_C", "ExecuteUbergraph_GA_GrindRail_KeybindDisplay");

	Params::UGA_GrindRail_KeybindDisplay_C_ExecuteUbergraph_GA_GrindRail_KeybindDisplay_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


