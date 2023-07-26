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


// Function HealthWarningScreen.HealthWarningScreen_C.HandleShowTimerComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHealthWarningScreen_C::HandleShowTimerComplete()
{
	static auto Func = Class->GetFunction("HealthWarningScreen_C", "HandleShowTimerComplete");

	Params::UHealthWarningScreen_C_HandleShowTimerComplete_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HealthWarningScreen.HealthWarningScreen_C.ExecuteUbergraph_HealthWarningScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHealthWarningScreen_C::ExecuteUbergraph_HealthWarningScreen(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("HealthWarningScreen_C", "ExecuteUbergraph_HealthWarningScreen");

	Params::UHealthWarningScreen_C_ExecuteUbergraph_HealthWarningScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HealthWarningScreen.HealthWarningScreen_C.HealthWarningCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHealthWarningScreen_C::HealthWarningCompleted__DelegateSignature()
{
	static auto Func = Class->GetFunction("HealthWarningScreen_C", "HealthWarningCompleted__DelegateSignature");

	Params::UHealthWarningScreen_C_HealthWarningCompleted__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
