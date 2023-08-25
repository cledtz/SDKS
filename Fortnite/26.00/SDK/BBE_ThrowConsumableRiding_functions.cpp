#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BBE_ThrowConsumableRiding.BBE_ThrowConsumableRiding_C
// (None)

class UClass* UBBE_ThrowConsumableRiding_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BBE_ThrowConsumableRiding_C");

	return Clss;
}


// BBE_ThrowConsumableRiding_C BBE_ThrowConsumableRiding.Default__BBE_ThrowConsumableRiding_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBBE_ThrowConsumableRiding_C* UBBE_ThrowConsumableRiding_C::GetDefaultObj()
{
	static class UBBE_ThrowConsumableRiding_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBBE_ThrowConsumableRiding_C*>(UBBE_ThrowConsumableRiding_C::StaticClass()->DefaultObject);

	return Default;
}

}


