#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Threat_RainAttachedToPlayer.Threat_RainAttachedToPlayer_C
// (Actor)

class UClass* UThreat_RainAttachedToPlayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Threat_RainAttachedToPlayer_C");

	return Clss;
}


// Threat_RainAttachedToPlayer_C Threat_RainAttachedToPlayer.Default__Threat_RainAttachedToPlayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UThreat_RainAttachedToPlayer_C* UThreat_RainAttachedToPlayer_C::GetDefaultObj()
{
	static class UThreat_RainAttachedToPlayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UThreat_RainAttachedToPlayer_C*>(UThreat_RainAttachedToPlayer_C::StaticClass()->DefaultObject);

	return Default;
}

}


