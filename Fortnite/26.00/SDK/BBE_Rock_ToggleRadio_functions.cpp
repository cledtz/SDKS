#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BBE_Rock_ToggleRadio.BBE_Rock_ToggleRadio_C
// (None)

class UClass* UBBE_Rock_ToggleRadio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BBE_Rock_ToggleRadio_C");

	return Clss;
}


// BBE_Rock_ToggleRadio_C BBE_Rock_ToggleRadio.Default__BBE_Rock_ToggleRadio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBBE_Rock_ToggleRadio_C* UBBE_Rock_ToggleRadio_C::GetDefaultObj()
{
	static class UBBE_Rock_ToggleRadio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBBE_Rock_ToggleRadio_C*>(UBBE_Rock_ToggleRadio_C::StaticClass()->DefaultObject);

	return Default;
}

}


