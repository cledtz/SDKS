#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_NoBuildBR_Habanero_Squad.MissionGen_NoBuildBR_Habanero_Squad_C
// (None)

class UClass* UMissionGen_NoBuildBR_Habanero_Squad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_NoBuildBR_Habanero_Squad_C");

	return Clss;
}


// MissionGen_NoBuildBR_Habanero_Squad_C MissionGen_NoBuildBR_Habanero_Squad.Default__MissionGen_NoBuildBR_Habanero_Squad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_NoBuildBR_Habanero_Squad_C* UMissionGen_NoBuildBR_Habanero_Squad_C::GetDefaultObj()
{
	static class UMissionGen_NoBuildBR_Habanero_Squad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_NoBuildBR_Habanero_Squad_C*>(UMissionGen_NoBuildBR_Habanero_Squad_C::StaticClass()->DefaultObject);

	return Default;
}

}


