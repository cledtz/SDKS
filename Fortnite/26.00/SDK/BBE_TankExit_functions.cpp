#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BBE_TankExit.BBE_TankExit_C
// (None)

class UClass* UBBE_TankExit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BBE_TankExit_C");

	return Clss;
}


// BBE_TankExit_C BBE_TankExit.Default__BBE_TankExit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBBE_TankExit_C* UBBE_TankExit_C::GetDefaultObj()
{
	static class UBBE_TankExit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBBE_TankExit_C*>(UBBE_TankExit_C::StaticClass()->DefaultObject);

	return Default;
}

}


