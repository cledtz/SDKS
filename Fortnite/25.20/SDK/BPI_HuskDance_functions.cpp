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


// Function BPI_HuskDance.BPI_HuskDance_C.OnEndDance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPI_HuskDance_C::OnEndDance()
{
	static auto Func = Class->GetFunction("BPI_HuskDance_C", "OnEndDance");

	Params::UBPI_HuskDance_C_OnEndDance_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HuskDance.BPI_HuskDance_C.OnBeginDance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPI_HuskDance_C::OnBeginDance()
{
	static auto Func = Class->GetFunction("BPI_HuskDance_C", "OnBeginDance");

	Params::UBPI_HuskDance_C_OnBeginDance_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
