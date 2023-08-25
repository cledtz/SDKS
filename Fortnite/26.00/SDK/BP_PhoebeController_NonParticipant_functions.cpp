#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PhoebeController_NonParticipant.BP_PhoebeController_NonParticipant_C
// (Actor)

class UClass* UBP_PhoebeController_NonParticipant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PhoebeController_NonParticipant_C");

	return Clss;
}


// BP_PhoebeController_NonParticipant_C BP_PhoebeController_NonParticipant.Default__BP_PhoebeController_NonParticipant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PhoebeController_NonParticipant_C* UBP_PhoebeController_NonParticipant_C::GetDefaultObj()
{
	static class UBP_PhoebeController_NonParticipant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PhoebeController_NonParticipant_C*>(UBP_PhoebeController_NonParticipant_C::StaticClass()->DefaultObject);

	return Default;
}

}


