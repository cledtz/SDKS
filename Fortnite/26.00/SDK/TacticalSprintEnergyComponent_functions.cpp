#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TacticalSprintEnergyComponent.TacticalSprintEnergyComponent_C
// (None)

class UClass* UTacticalSprintEnergyComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TacticalSprintEnergyComponent_C");

	return Clss;
}


// TacticalSprintEnergyComponent_C TacticalSprintEnergyComponent.Default__TacticalSprintEnergyComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTacticalSprintEnergyComponent_C* UTacticalSprintEnergyComponent_C::GetDefaultObj()
{
	static class UTacticalSprintEnergyComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTacticalSprintEnergyComponent_C*>(UTacticalSprintEnergyComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


