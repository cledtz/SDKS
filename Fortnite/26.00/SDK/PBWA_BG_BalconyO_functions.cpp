#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PBWA_BG_BalconyO.PBWA_BG_BalconyO_C
// (Actor)

class UClass* UPBWA_BG_BalconyO_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PBWA_BG_BalconyO_C");

	return Clss;
}


// PBWA_BG_BalconyO_C PBWA_BG_BalconyO.Default__PBWA_BG_BalconyO_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPBWA_BG_BalconyO_C* UPBWA_BG_BalconyO_C::GetDefaultObj()
{
	static class UPBWA_BG_BalconyO_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPBWA_BG_BalconyO_C*>(UPBWA_BG_BalconyO_C::StaticClass()->DefaultObject);

	return Default;
}

}


