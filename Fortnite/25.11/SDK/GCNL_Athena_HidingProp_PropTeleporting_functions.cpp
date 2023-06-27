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


// Function GCNL_Athena_HidingProp_PropTeleporting.GCNL_Athena_HidingProp_PropTeleporting_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGCNL_Athena_HidingProp_PropTeleporting_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("GCNL_Athena_HidingProp_PropTeleporting_C", "ReceiveBeginPlay");

	Params::AGCNL_Athena_HidingProp_PropTeleporting_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Athena_HidingProp_PropTeleporting.GCNL_Athena_HidingProp_PropTeleporting_C.ExecuteUbergraph_GCNL_Athena_HidingProp_PropTeleporting
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_HidingProp_PropTeleporting_C::ExecuteUbergraph_GCNL_Athena_HidingProp_PropTeleporting(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("GCNL_Athena_HidingProp_PropTeleporting_C", "ExecuteUbergraph_GCNL_Athena_HidingProp_PropTeleporting");

	Params::AGCNL_Athena_HidingProp_PropTeleporting_C_ExecuteUbergraph_GCNL_Athena_HidingProp_PropTeleporting_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
