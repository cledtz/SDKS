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


// Function PinDot.PinDot_C.OnSetFilled
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bFilled                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPinDot_C::OnSetFilled(bool bFilled)
{
	static auto Func = Class->GetFunction("PinDot_C", "OnSetFilled");

	Params::UPinDot_C_OnSetFilled_Params Parms;

	Parms.bFilled = bFilled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PinDot.PinDot_C.ExecuteUbergraph_PinDot
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bFilled                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPinDot_C::ExecuteUbergraph_PinDot(int32 EntryPoint, bool K2Node_Event_bFilled, const struct FLinearColor& CallFunc_SelectColor_ReturnValue)
{
	static auto Func = Class->GetFunction("PinDot_C", "ExecuteUbergraph_PinDot");

	Params::UPinDot_C_ExecuteUbergraph_PinDot_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bFilled = K2Node_Event_bFilled;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
