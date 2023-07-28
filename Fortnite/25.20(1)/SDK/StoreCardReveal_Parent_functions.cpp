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


// Function StoreCardReveal_Parent.StoreCardReveal_Parent_C.InitiatePinata
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStoreCardReveal_Parent_C::InitiatePinata()
{
	static auto Func = Class->GetFunction("StoreCardReveal_Parent_C", "InitiatePinata");

	Params::UStoreCardReveal_Parent_C_InitiatePinata_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_Parent.StoreCardReveal_Parent_C.ExecuteUbergraph_StoreCardReveal_Parent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreCardReveal_Parent_C::ExecuteUbergraph_StoreCardReveal_Parent(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("StoreCardReveal_Parent_C", "ExecuteUbergraph_StoreCardReveal_Parent");

	Params::UStoreCardReveal_Parent_C_ExecuteUbergraph_StoreCardReveal_Parent_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
