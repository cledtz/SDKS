#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FuelIndicator.FuelIndicator_C
// (Actor)

class UClass* UFuelIndicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FuelIndicator_C");

	return Clss;
}


// FuelIndicator_C FuelIndicator.Default__FuelIndicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFuelIndicator_C* UFuelIndicator_C::GetDefaultObj()
{
	static class UFuelIndicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFuelIndicator_C*>(UFuelIndicator_C::StaticClass()->DefaultObject);

	return Default;
}

}


