#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BBE_VehicleExit.BBE_VehicleExit_C
// (None)

class UClass* UBBE_VehicleExit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BBE_VehicleExit_C");

	return Clss;
}


// BBE_VehicleExit_C BBE_VehicleExit.Default__BBE_VehicleExit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBBE_VehicleExit_C* UBBE_VehicleExit_C::GetDefaultObj()
{
	static class UBBE_VehicleExit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBBE_VehicleExit_C*>(UBBE_VehicleExit_C::StaticClass()->DefaultObject);

	return Default;
}

}


