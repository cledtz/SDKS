#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PBWA_BG_StairR.PBWA_BG_StairR_C
// (Actor)

class UClass* UPBWA_BG_StairR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PBWA_BG_StairR_C");

	return Clss;
}


// PBWA_BG_StairR_C PBWA_BG_StairR.Default__PBWA_BG_StairR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPBWA_BG_StairR_C* UPBWA_BG_StairR_C::GetDefaultObj()
{
	static class UPBWA_BG_StairR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPBWA_BG_StairR_C*>(UPBWA_BG_StairR_C::StaticClass()->DefaultObject);

	return Default;
}

}


