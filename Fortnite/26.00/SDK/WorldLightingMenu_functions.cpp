#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WorldLightingMenu.WorldLightingMenu_C
// (Actor)

class UClass* UWorldLightingMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WorldLightingMenu_C");

	return Clss;
}


// WorldLightingMenu_C WorldLightingMenu.Default__WorldLightingMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWorldLightingMenu_C* UWorldLightingMenu_C::GetDefaultObj()
{
	static class UWorldLightingMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWorldLightingMenu_C*>(UWorldLightingMenu_C::StaticClass()->DefaultObject);

	return Default;
}

}


