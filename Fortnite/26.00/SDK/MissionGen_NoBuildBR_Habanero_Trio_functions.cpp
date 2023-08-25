#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_NoBuildBR_Habanero_Trio.MissionGen_NoBuildBR_Habanero_Trio_C
// (None)

class UClass* UMissionGen_NoBuildBR_Habanero_Trio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_NoBuildBR_Habanero_Trio_C");

	return Clss;
}


// MissionGen_NoBuildBR_Habanero_Trio_C MissionGen_NoBuildBR_Habanero_Trio.Default__MissionGen_NoBuildBR_Habanero_Trio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_NoBuildBR_Habanero_Trio_C* UMissionGen_NoBuildBR_Habanero_Trio_C::GetDefaultObj()
{
	static class UMissionGen_NoBuildBR_Habanero_Trio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_NoBuildBR_Habanero_Trio_C*>(UMissionGen_NoBuildBR_Habanero_Trio_C::StaticClass()->DefaultObject);

	return Default;
}

}


