#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VictoryCrownGameStateComponent.VictoryCrownGameStateComponent_C
// (None)

class UClass* UVictoryCrownGameStateComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VictoryCrownGameStateComponent_C");

	return Clss;
}


// VictoryCrownGameStateComponent_C VictoryCrownGameStateComponent.Default__VictoryCrownGameStateComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVictoryCrownGameStateComponent_C* UVictoryCrownGameStateComponent_C::GetDefaultObj()
{
	static class UVictoryCrownGameStateComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVictoryCrownGameStateComponent_C*>(UVictoryCrownGameStateComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


