#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BBE_UseValetMods.BBE_UseValetMods_C
// (None)

class UClass* UBBE_UseValetMods_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BBE_UseValetMods_C");

	return Clss;
}


// BBE_UseValetMods_C BBE_UseValetMods.Default__BBE_UseValetMods_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBBE_UseValetMods_C* UBBE_UseValetMods_C::GetDefaultObj()
{
	static class UBBE_UseValetMods_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBBE_UseValetMods_C*>(UBBE_UseValetMods_C::StaticClass()->DefaultObject);

	return Default;
}

}


