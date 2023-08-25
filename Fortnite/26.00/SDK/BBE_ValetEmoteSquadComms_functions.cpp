#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BBE_ValetEmoteSquadComms.BBE_ValetEmoteSquadComms_C
// (None)

class UClass* UBBE_ValetEmoteSquadComms_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BBE_ValetEmoteSquadComms_C");

	return Clss;
}


// BBE_ValetEmoteSquadComms_C BBE_ValetEmoteSquadComms.Default__BBE_ValetEmoteSquadComms_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBBE_ValetEmoteSquadComms_C* UBBE_ValetEmoteSquadComms_C::GetDefaultObj()
{
	static class UBBE_ValetEmoteSquadComms_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBBE_ValetEmoteSquadComms_C*>(UBBE_ValetEmoteSquadComms_C::StaticClass()->DefaultObject);

	return Default;
}

}


