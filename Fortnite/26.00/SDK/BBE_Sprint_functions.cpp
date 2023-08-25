#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BBE_Sprint.BBE_Sprint_C
// (None)

class UClass* UBBE_Sprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BBE_Sprint_C");

	return Clss;
}


// BBE_Sprint_C BBE_Sprint.Default__BBE_Sprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBBE_Sprint_C* UBBE_Sprint_C::GetDefaultObj()
{
	static class UBBE_Sprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBBE_Sprint_C*>(UBBE_Sprint_C::StaticClass()->DefaultObject);

	return Default;
}

}


