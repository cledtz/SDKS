#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_NoBuildBR_Duo.MissionGen_NoBuildBR_Duo_C
// (None)

class UClass* UMissionGen_NoBuildBR_Duo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_NoBuildBR_Duo_C");

	return Clss;
}


// MissionGen_NoBuildBR_Duo_C MissionGen_NoBuildBR_Duo.Default__MissionGen_NoBuildBR_Duo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_NoBuildBR_Duo_C* UMissionGen_NoBuildBR_Duo_C::GetDefaultObj()
{
	static class UMissionGen_NoBuildBR_Duo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_NoBuildBR_Duo_C*>(UMissionGen_NoBuildBR_Duo_C::StaticClass()->DefaultObject);

	return Default;
}

}


