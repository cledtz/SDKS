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


// Function UEFN_Button_Regular.UEFN_Button_Regular_C.SetTextFromCppCode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUEFN_Button_Regular_C::SetTextFromCppCode(class FText InText)
{
	static auto Func = Class->GetFunction("UEFN_Button_Regular_C", "SetTextFromCppCode");

	Params::UUEFN_Button_Regular_C_SetTextFromCppCode_Params Parms;

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
