#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DirtbikeRuntime.FortDirtbikeVehicle
// (Actor, Pawn)

class UClass* UFortDirtbikeVehicle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortDirtbikeVehicle");

	return Clss;
}


// FortDirtbikeVehicle DirtbikeRuntime.Default__FortDirtbikeVehicle
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortDirtbikeVehicle* UFortDirtbikeVehicle::GetDefaultObj()
{
	static class UFortDirtbikeVehicle* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortDirtbikeVehicle*>(UFortDirtbikeVehicle::StaticClass()->DefaultObject);

	return Default;
}


// Class DirtbikeRuntime.FortDirtbikeVehicleConfigs
// (None)

class UClass* UFortDirtbikeVehicleConfigs::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortDirtbikeVehicleConfigs");

	return Clss;
}


// FortDirtbikeVehicleConfigs DirtbikeRuntime.Default__FortDirtbikeVehicleConfigs
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortDirtbikeVehicleConfigs* UFortDirtbikeVehicleConfigs::GetDefaultObj()
{
	static class UFortDirtbikeVehicleConfigs* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortDirtbikeVehicleConfigs*>(UFortDirtbikeVehicleConfigs::StaticClass()->DefaultObject);

	return Default;
}

}


