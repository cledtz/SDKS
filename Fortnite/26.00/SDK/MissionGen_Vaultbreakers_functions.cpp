#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Vaultbreakers.MissionGen_Vaultbreakers_C
// (None)

class UClass* UMissionGen_Vaultbreakers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Vaultbreakers_C");

	return Clss;
}


// MissionGen_Vaultbreakers_C MissionGen_Vaultbreakers.Default__MissionGen_Vaultbreakers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Vaultbreakers_C* UMissionGen_Vaultbreakers_C::GetDefaultObj()
{
	static class UMissionGen_Vaultbreakers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Vaultbreakers_C*>(UMissionGen_Vaultbreakers_C::StaticClass()->DefaultObject);

	return Default;
}

}


