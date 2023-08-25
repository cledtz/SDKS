#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class STW_MapPickupDisplayRuntime.STW_PlayerControllerComponent_MapPickupDisplay
// (None)

class UClass* USTW_PlayerControllerComponent_MapPickupDisplay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("STW_PlayerControllerComponent_MapPickupDisplay");

	return Clss;
}


// STW_PlayerControllerComponent_MapPickupDisplay STW_MapPickupDisplayRuntime.Default__STW_PlayerControllerComponent_MapPickupDisplay
// (Public, ClassDefaultObject, ArchetypeObject)

class USTW_PlayerControllerComponent_MapPickupDisplay* USTW_PlayerControllerComponent_MapPickupDisplay::GetDefaultObj()
{
	static class USTW_PlayerControllerComponent_MapPickupDisplay* Default = nullptr;

	if (!Default)
		Default = static_cast<USTW_PlayerControllerComponent_MapPickupDisplay*>(USTW_PlayerControllerComponent_MapPickupDisplay::StaticClass()->DefaultObject);

	return Default;
}

}


