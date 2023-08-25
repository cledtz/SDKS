#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BBE_RiderEmote.BBE_RiderEmote_C
// (None)

class UClass* UBBE_RiderEmote_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BBE_RiderEmote_C");

	return Clss;
}


// BBE_RiderEmote_C BBE_RiderEmote.Default__BBE_RiderEmote_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBBE_RiderEmote_C* UBBE_RiderEmote_C::GetDefaultObj()
{
	static class UBBE_RiderEmote_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBBE_RiderEmote_C*>(UBBE_RiderEmote_C::StaticClass()->DefaultObject);

	return Default;
}

}


