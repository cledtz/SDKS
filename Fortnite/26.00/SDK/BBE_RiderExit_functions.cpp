#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BBE_RiderExit.BBE_RiderExit_C
// (None)

class UClass* UBBE_RiderExit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BBE_RiderExit_C");

	return Clss;
}


// BBE_RiderExit_C BBE_RiderExit.Default__BBE_RiderExit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBBE_RiderExit_C* UBBE_RiderExit_C::GetDefaultObj()
{
	static class UBBE_RiderExit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBBE_RiderExit_C*>(UBBE_RiderExit_C::StaticClass()->DefaultObject);

	return Default;
}

}


