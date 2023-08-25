#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Habanero_Squad.MissionGen_Habanero_Squad_C
// (None)

class UClass* UMissionGen_Habanero_Squad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Habanero_Squad_C");

	return Clss;
}


// MissionGen_Habanero_Squad_C MissionGen_Habanero_Squad.Default__MissionGen_Habanero_Squad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Habanero_Squad_C* UMissionGen_Habanero_Squad_C::GetDefaultObj()
{
	static class UMissionGen_Habanero_Squad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Habanero_Squad_C*>(UMissionGen_Habanero_Squad_C::StaticClass()->DefaultObject);

	return Default;
}

}


