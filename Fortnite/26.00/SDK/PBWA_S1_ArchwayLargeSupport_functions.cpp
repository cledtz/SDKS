#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PBWA_S1_ArchwayLargeSupport.PBWA_S1_ArchwayLargeSupport_C
// (Actor)

class UClass* UPBWA_S1_ArchwayLargeSupport_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PBWA_S1_ArchwayLargeSupport_C");

	return Clss;
}


// PBWA_S1_ArchwayLargeSupport_C PBWA_S1_ArchwayLargeSupport.Default__PBWA_S1_ArchwayLargeSupport_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPBWA_S1_ArchwayLargeSupport_C* UPBWA_S1_ArchwayLargeSupport_C::GetDefaultObj()
{
	static class UPBWA_S1_ArchwayLargeSupport_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPBWA_S1_ArchwayLargeSupport_C*>(UPBWA_S1_ArchwayLargeSupport_C::StaticClass()->DefaultObject);

	return Default;
}

}


