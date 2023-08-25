#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BBE_GrindRail.BBE_GrindRail_C
// (None)

class UClass* UBBE_GrindRail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BBE_GrindRail_C");

	return Clss;
}


// BBE_GrindRail_C BBE_GrindRail.Default__BBE_GrindRail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBBE_GrindRail_C* UBBE_GrindRail_C::GetDefaultObj()
{
	static class UBBE_GrindRail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBBE_GrindRail_C*>(UBBE_GrindRail_C::StaticClass()->DefaultObject);

	return Default;
}

}


