#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AirJellyfishRuntime.FortAirJellyfishAnimInstance
// (None)

class UClass* UFortAirJellyfishAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAirJellyfishAnimInstance");

	return Clss;
}


// FortAirJellyfishAnimInstance AirJellyfishRuntime.Default__FortAirJellyfishAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAirJellyfishAnimInstance* UFortAirJellyfishAnimInstance::GetDefaultObj()
{
	static class UFortAirJellyfishAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAirJellyfishAnimInstance*>(UFortAirJellyfishAnimInstance::StaticClass()->DefaultObject);

	return Default;
}

}


