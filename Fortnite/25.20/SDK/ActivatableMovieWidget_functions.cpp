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


// Function ActivatableMovieWidget.ActivatableMovieWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UActivatableMovieWidget_C::Construct()
{
	static auto Func = Class->GetFunction("ActivatableMovieWidget_C", "Construct");

	Params::UActivatableMovieWidget_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ActivatableMovieWidget.ActivatableMovieWidget_C.ExecuteUbergraph_ActivatableMovieWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActivatableMovieWidget_C::ExecuteUbergraph_ActivatableMovieWidget(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("ActivatableMovieWidget_C", "ExecuteUbergraph_ActivatableMovieWidget");

	Params::UActivatableMovieWidget_C_ExecuteUbergraph_ActivatableMovieWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
