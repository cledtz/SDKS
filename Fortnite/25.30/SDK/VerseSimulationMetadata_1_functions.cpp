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


// Function VerseSimulationMetadata.Simulation.$InitCDO
// ()
// Parameters:

void USimulation::_InitCDO()
{
	static auto Func = Class->GetFunction("Simulation", "$InitCDO");

	Params::USimulation__InitCDO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
