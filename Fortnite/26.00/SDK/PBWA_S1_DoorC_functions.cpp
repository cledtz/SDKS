#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PBWA_S1_DoorC.PBWA_S1_DoorC_C
// (Actor)

class UClass* UPBWA_S1_DoorC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PBWA_S1_DoorC_C");

	return Clss;
}


// PBWA_S1_DoorC_C PBWA_S1_DoorC.Default__PBWA_S1_DoorC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPBWA_S1_DoorC_C* UPBWA_S1_DoorC_C::GetDefaultObj()
{
	static class UPBWA_S1_DoorC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPBWA_S1_DoorC_C*>(UPBWA_S1_DoorC_C::StaticClass()->DefaultObject);

	return Default;
}

}

