#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BBE_GrindRailSquadComms.BBE_GrindRailSquadComms_C
// (None)

class UClass* UBBE_GrindRailSquadComms_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BBE_GrindRailSquadComms_C");

	return Clss;
}


// BBE_GrindRailSquadComms_C BBE_GrindRailSquadComms.Default__BBE_GrindRailSquadComms_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBBE_GrindRailSquadComms_C* UBBE_GrindRailSquadComms_C::GetDefaultObj()
{
	static class UBBE_GrindRailSquadComms_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBBE_GrindRailSquadComms_C*>(UBBE_GrindRailSquadComms_C::StaticClass()->DefaultObject);

	return Default;
}

}


