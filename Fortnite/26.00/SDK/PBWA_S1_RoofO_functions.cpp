#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PBWA_S1_RoofO.PBWA_S1_RoofO_C
// (Actor)

class UClass* UPBWA_S1_RoofO_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PBWA_S1_RoofO_C");

	return Clss;
}


// PBWA_S1_RoofO_C PBWA_S1_RoofO.Default__PBWA_S1_RoofO_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPBWA_S1_RoofO_C* UPBWA_S1_RoofO_C::GetDefaultObj()
{
	static class UPBWA_S1_RoofO_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPBWA_S1_RoofO_C*>(UPBWA_S1_RoofO_C::StaticClass()->DefaultObject);

	return Default;
}

}


