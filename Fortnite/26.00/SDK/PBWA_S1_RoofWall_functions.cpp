#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PBWA_S1_RoofWall.PBWA_S1_RoofWall_C
// (Actor)

class UClass* UPBWA_S1_RoofWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PBWA_S1_RoofWall_C");

	return Clss;
}


// PBWA_S1_RoofWall_C PBWA_S1_RoofWall.Default__PBWA_S1_RoofWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPBWA_S1_RoofWall_C* UPBWA_S1_RoofWall_C::GetDefaultObj()
{
	static class UPBWA_S1_RoofWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPBWA_S1_RoofWall_C*>(UPBWA_S1_RoofWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


