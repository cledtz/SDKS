#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_BigBattle.MissionGen_BigBattle_C
// (None)

class UClass* UMissionGen_BigBattle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_BigBattle_C");

	return Clss;
}


// MissionGen_BigBattle_C MissionGen_BigBattle.Default__MissionGen_BigBattle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_BigBattle_C* UMissionGen_BigBattle_C::GetDefaultObj()
{
	static class UMissionGen_BigBattle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_BigBattle_C*>(UMissionGen_BigBattle_C::StaticClass()->DefaultObject);

	return Default;
}

}


