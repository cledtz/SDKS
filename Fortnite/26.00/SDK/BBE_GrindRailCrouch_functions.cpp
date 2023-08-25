#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BBE_GrindRailCrouch.BBE_GrindRailCrouch_C
// (None)

class UClass* UBBE_GrindRailCrouch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BBE_GrindRailCrouch_C");

	return Clss;
}


// BBE_GrindRailCrouch_C BBE_GrindRailCrouch.Default__BBE_GrindRailCrouch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBBE_GrindRailCrouch_C* UBBE_GrindRailCrouch_C::GetDefaultObj()
{
	static class UBBE_GrindRailCrouch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBBE_GrindRailCrouch_C*>(UBBE_GrindRailCrouch_C::StaticClass()->DefaultObject);

	return Default;
}

}


