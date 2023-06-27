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


// Function SimpleMTXDisplay.SimpleMTXDisplay_C.OnUpdateAvailableMTX
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              AvailableBalance                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USimpleMTXDisplay_C::OnUpdateAvailableMTX(int32 AvailableBalance)
{
	static auto Func = Class->GetFunction("SimpleMTXDisplay_C", "OnUpdateAvailableMTX");

	Params::USimpleMTXDisplay_C_OnUpdateAvailableMTX_Params Parms;

	Parms.AvailableBalance = AvailableBalance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleMTXDisplay.SimpleMTXDisplay_C.ExecuteUbergraph_SimpleMTXDisplay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_AvailableBalance                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void USimpleMTXDisplay_C::ExecuteUbergraph_SimpleMTXDisplay(int32 EntryPoint, int32 K2Node_Event_AvailableBalance, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("SimpleMTXDisplay_C", "ExecuteUbergraph_SimpleMTXDisplay");

	Params::USimpleMTXDisplay_C_ExecuteUbergraph_SimpleMTXDisplay_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_AvailableBalance = K2Node_Event_AvailableBalance;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
