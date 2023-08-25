#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BBE_TankSwitchSeat.BBE_TankSwitchSeat_C
// (None)

class UClass* UBBE_TankSwitchSeat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BBE_TankSwitchSeat_C");

	return Clss;
}


// BBE_TankSwitchSeat_C BBE_TankSwitchSeat.Default__BBE_TankSwitchSeat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBBE_TankSwitchSeat_C* UBBE_TankSwitchSeat_C::GetDefaultObj()
{
	static class UBBE_TankSwitchSeat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBBE_TankSwitchSeat_C*>(UBBE_TankSwitchSeat_C::StaticClass()->DefaultObject);

	return Default;
}

}


