#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PBWA_W1_BalconyO.PBWA_W1_BalconyO_C
// (Actor)

class UClass* UPBWA_W1_BalconyO_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PBWA_W1_BalconyO_C");

	return Clss;
}


// PBWA_W1_BalconyO_C PBWA_W1_BalconyO.Default__PBWA_W1_BalconyO_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPBWA_W1_BalconyO_C* UPBWA_W1_BalconyO_C::GetDefaultObj()
{
	static class UPBWA_W1_BalconyO_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPBWA_W1_BalconyO_C*>(UPBWA_W1_BalconyO_C::StaticClass()->DefaultObject);

	return Default;
}

}


