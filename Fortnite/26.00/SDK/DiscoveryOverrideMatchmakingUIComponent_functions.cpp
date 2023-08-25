#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DiscoveryOverrideMatchmakingUIComponent.DiscoveryOverrideMatchmakingUIComponent_C
// (None)

class UClass* UDiscoveryOverrideMatchmakingUIComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DiscoveryOverrideMatchmakingUIComponent_C");

	return Clss;
}


// DiscoveryOverrideMatchmakingUIComponent_C DiscoveryOverrideMatchmakingUIComponent.Default__DiscoveryOverrideMatchmakingUIComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDiscoveryOverrideMatchmakingUIComponent_C* UDiscoveryOverrideMatchmakingUIComponent_C::GetDefaultObj()
{
	static class UDiscoveryOverrideMatchmakingUIComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDiscoveryOverrideMatchmakingUIComponent_C*>(UDiscoveryOverrideMatchmakingUIComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


