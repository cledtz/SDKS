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


// Function TextRotatorWhite.TextRotatorWhite_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTextRotatorWhite_C::Construct()
{
	static auto Func = Class->GetFunction("TextRotatorWhite_C", "Construct");

	Params::UTextRotatorWhite_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TextRotatorWhite.TextRotatorWhite_C.ExecuteUbergraph_TextRotatorWhite
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTextRotatorWhite_C::ExecuteUbergraph_TextRotatorWhite(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("TextRotatorWhite_C", "ExecuteUbergraph_TextRotatorWhite");

	Params::UTextRotatorWhite_C_ExecuteUbergraph_TextRotatorWhite_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
