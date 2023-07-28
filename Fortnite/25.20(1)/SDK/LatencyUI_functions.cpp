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


// Function LatencyUI.LatencyWidget.StopTimer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void ULatencyWidget::StopTimer()
{
	static auto Func = Class->GetFunction("LatencyWidget", "StopTimer");

	Params::ULatencyWidget_StopTimer_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LatencyUI.LatencyWidget.StartTimer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void ULatencyWidget::StartTimer()
{
	static auto Func = Class->GetFunction("LatencyWidget", "StartTimer");

	Params::ULatencyWidget_StartTimer_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
