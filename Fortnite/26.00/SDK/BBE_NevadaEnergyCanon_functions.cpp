#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BBE_NevadaEnergyCanon.BBE_NevadaEnergyCanon_C
// (None)

class UClass* UBBE_NevadaEnergyCanon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BBE_NevadaEnergyCanon_C");

	return Clss;
}


// BBE_NevadaEnergyCanon_C BBE_NevadaEnergyCanon.Default__BBE_NevadaEnergyCanon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBBE_NevadaEnergyCanon_C* UBBE_NevadaEnergyCanon_C::GetDefaultObj()
{
	static class UBBE_NevadaEnergyCanon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBBE_NevadaEnergyCanon_C*>(UBBE_NevadaEnergyCanon_C::StaticClass()->DefaultObject);

	return Default;
}

}


