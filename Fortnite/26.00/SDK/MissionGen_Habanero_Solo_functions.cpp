#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Habanero_Solo.MissionGen_Habanero_Solo_C
// (None)

class UClass* UMissionGen_Habanero_Solo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Habanero_Solo_C");

	return Clss;
}


// MissionGen_Habanero_Solo_C MissionGen_Habanero_Solo.Default__MissionGen_Habanero_Solo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Habanero_Solo_C* UMissionGen_Habanero_Solo_C::GetDefaultObj()
{
	static class UMissionGen_Habanero_Solo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Habanero_Solo_C*>(UMissionGen_Habanero_Solo_C::StaticClass()->DefaultObject);

	return Default;
}

}


