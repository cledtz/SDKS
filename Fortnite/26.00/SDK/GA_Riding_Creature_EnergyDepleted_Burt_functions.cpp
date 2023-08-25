#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Riding_Creature_EnergyDepleted_Burt.GA_Riding_Creature_EnergyDepleted_Burt_C
// (None)

class UClass* UGA_Riding_Creature_EnergyDepleted_Burt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Riding_Creature_EnergyDepleted_Burt_C");

	return Clss;
}


// GA_Riding_Creature_EnergyDepleted_Burt_C GA_Riding_Creature_EnergyDepleted_Burt.Default__GA_Riding_Creature_EnergyDepleted_Burt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Riding_Creature_EnergyDepleted_Burt_C* UGA_Riding_Creature_EnergyDepleted_Burt_C::GetDefaultObj()
{
	static class UGA_Riding_Creature_EnergyDepleted_Burt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Riding_Creature_EnergyDepleted_Burt_C*>(UGA_Riding_Creature_EnergyDepleted_Burt_C::StaticClass()->DefaultObject);

	return Default;
}

}


