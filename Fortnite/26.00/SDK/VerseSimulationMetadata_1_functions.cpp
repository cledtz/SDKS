#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// VerseClass VerseSimulationMetadata.Simulation
// (None)

class UClass* USimulation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Simulation");

	return Clss;
}


// Simulation VerseSimulationMetadata.Default__Simulation
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USimulation* USimulation::GetDefaultObj()
{
	static class USimulation* Default = nullptr;

	if (!Default)
		Default = static_cast<USimulation*>(USimulation::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseSimulationMetadata.Simulation.$InitCDO
// (None)
// Parameters:

void USimulation::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Simulation", "$InitCDO");

	Params::USimulation__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}


