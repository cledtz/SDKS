#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BBE_GrindRailJump.BBE_GrindRailJump_C
// (None)

class UClass* UBBE_GrindRailJump_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BBE_GrindRailJump_C");

	return Clss;
}


// BBE_GrindRailJump_C BBE_GrindRailJump.Default__BBE_GrindRailJump_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBBE_GrindRailJump_C* UBBE_GrindRailJump_C::GetDefaultObj()
{
	static class UBBE_GrindRailJump_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBBE_GrindRailJump_C*>(UBBE_GrindRailJump_C::StaticClass()->DefaultObject);

	return Default;
}

}


