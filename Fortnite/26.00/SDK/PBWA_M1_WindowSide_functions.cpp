#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PBWA_M1_WindowSide.PBWA_M1_WindowSide_C
// (Actor)

class UClass* UPBWA_M1_WindowSide_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PBWA_M1_WindowSide_C");

	return Clss;
}


// PBWA_M1_WindowSide_C PBWA_M1_WindowSide.Default__PBWA_M1_WindowSide_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPBWA_M1_WindowSide_C* UPBWA_M1_WindowSide_C::GetDefaultObj()
{
	static class UPBWA_M1_WindowSide_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPBWA_M1_WindowSide_C*>(UPBWA_M1_WindowSide_C::StaticClass()->DefaultObject);

	return Default;
}

}


