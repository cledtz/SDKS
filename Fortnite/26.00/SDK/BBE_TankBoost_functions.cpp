#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BBE_TankBoost.BBE_TankBoost_C
// (None)

class UClass* UBBE_TankBoost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BBE_TankBoost_C");

	return Clss;
}


// BBE_TankBoost_C BBE_TankBoost.Default__BBE_TankBoost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBBE_TankBoost_C* UBBE_TankBoost_C::GetDefaultObj()
{
	static class UBBE_TankBoost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBBE_TankBoost_C*>(UBBE_TankBoost_C::StaticClass()->DefaultObject);

	return Default;
}

}


