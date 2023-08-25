#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BBE_AugmentShoot.BBE_AugmentShoot_C
// (None)

class UClass* UBBE_AugmentShoot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BBE_AugmentShoot_C");

	return Clss;
}


// BBE_AugmentShoot_C BBE_AugmentShoot.Default__BBE_AugmentShoot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBBE_AugmentShoot_C* UBBE_AugmentShoot_C::GetDefaultObj()
{
	static class UBBE_AugmentShoot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBBE_AugmentShoot_C*>(UBBE_AugmentShoot_C::StaticClass()->DefaultObject);

	return Default;
}

}


