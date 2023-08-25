#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_Grenade_Base_WhipTracker.Athena_Grenade_Base_WhipTracker_C
// (None)

class UClass* UAthena_Grenade_Base_WhipTracker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_Grenade_Base_WhipTracker_C");

	return Clss;
}


// Athena_Grenade_Base_WhipTracker_C Athena_Grenade_Base_WhipTracker.Default__Athena_Grenade_Base_WhipTracker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_Grenade_Base_WhipTracker_C* UAthena_Grenade_Base_WhipTracker_C::GetDefaultObj()
{
	static class UAthena_Grenade_Base_WhipTracker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_Grenade_Base_WhipTracker_C*>(UAthena_Grenade_Base_WhipTracker_C::StaticClass()->DefaultObject);

	return Default;
}

}


