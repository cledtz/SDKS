#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PBWA_M1_ArchwayLargeSupport.PBWA_M1_ArchwayLargeSupport_C
// (Actor)

class UClass* UPBWA_M1_ArchwayLargeSupport_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PBWA_M1_ArchwayLargeSupport_C");

	return Clss;
}


// PBWA_M1_ArchwayLargeSupport_C PBWA_M1_ArchwayLargeSupport.Default__PBWA_M1_ArchwayLargeSupport_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPBWA_M1_ArchwayLargeSupport_C* UPBWA_M1_ArchwayLargeSupport_C::GetDefaultObj()
{
	static class UPBWA_M1_ArchwayLargeSupport_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPBWA_M1_ArchwayLargeSupport_C*>(UPBWA_M1_ArchwayLargeSupport_C::StaticClass()->DefaultObject);

	return Default;
}

}


