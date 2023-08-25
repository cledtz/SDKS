#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BBE_TankHonk.BBE_TankHonk_C
// (None)

class UClass* UBBE_TankHonk_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BBE_TankHonk_C");

	return Clss;
}


// BBE_TankHonk_C BBE_TankHonk.Default__BBE_TankHonk_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBBE_TankHonk_C* UBBE_TankHonk_C::GetDefaultObj()
{
	static class UBBE_TankHonk_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBBE_TankHonk_C*>(UBBE_TankHonk_C::StaticClass()->DefaultObject);

	return Default;
}

}


