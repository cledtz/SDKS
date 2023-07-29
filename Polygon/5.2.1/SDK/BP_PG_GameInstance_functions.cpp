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


// Function BP_PG_GameInstance.BP_PG_GameInstance_C.ReceiveInit
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_PG_GameInstance_C::ReceiveInit()
{
	static auto Func = Class->GetFunction("BP_PG_GameInstance_C", "ReceiveInit");

	Params::UBP_PG_GameInstance_C_ReceiveInit_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_GameInstance.BP_PG_GameInstance_C.ExecuteUbergraph_BP_PG_GameInstance
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PG_GameInstance_C::ExecuteUbergraph_BP_PG_GameInstance(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("BP_PG_GameInstance_C", "ExecuteUbergraph_BP_PG_GameInstance");

	Params::UBP_PG_GameInstance_C_ExecuteUbergraph_BP_PG_GameInstance_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
