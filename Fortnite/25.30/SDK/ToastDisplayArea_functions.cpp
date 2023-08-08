#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function ToastDisplayArea.ToastDisplayArea_C.TestFrontendToast
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UToastDisplayArea_C::TestFrontendToast()
{
	static auto Func = Class->GetFunction("ToastDisplayArea_C", "TestFrontendToast");

	Params::UToastDisplayArea_C_TestFrontendToast_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastDisplayArea.ToastDisplayArea_C.ExecuteUbergraph_ToastDisplayArea
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToastDisplayArea_C::ExecuteUbergraph_ToastDisplayArea(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("ToastDisplayArea_C", "ExecuteUbergraph_ToastDisplayArea");

	Params::UToastDisplayArea_C_ExecuteUbergraph_ToastDisplayArea_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
