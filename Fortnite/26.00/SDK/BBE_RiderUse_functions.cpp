#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BBE_RiderUse.BBE_RiderUse_C
// (None)

class UClass* UBBE_RiderUse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BBE_RiderUse_C");

	return Clss;
}


// BBE_RiderUse_C BBE_RiderUse.Default__BBE_RiderUse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBBE_RiderUse_C* UBBE_RiderUse_C::GetDefaultObj()
{
	static class UBBE_RiderUse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBBE_RiderUse_C*>(UBBE_RiderUse_C::StaticClass()->DefaultObject);

	return Default;
}

}


