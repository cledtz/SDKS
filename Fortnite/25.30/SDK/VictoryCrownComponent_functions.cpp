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


// Function VictoryCrownComponent.VictoryCrownComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UVictoryCrownComponent_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("VictoryCrownComponent_C", "ReceiveBeginPlay");

	Params::UVictoryCrownComponent_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VictoryCrownComponent.VictoryCrownComponent_C.ExecuteUbergraph_VictoryCrownComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVictoryCrownComponent_C::ExecuteUbergraph_VictoryCrownComponent(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("VictoryCrownComponent_C", "ExecuteUbergraph_VictoryCrownComponent");

	Params::UVictoryCrownComponent_C_ExecuteUbergraph_VictoryCrownComponent_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
