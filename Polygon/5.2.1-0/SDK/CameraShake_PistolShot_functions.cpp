#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_PistolShot.CameraShake_PistolShot_C
// (None)

class UClass* UCameraShake_PistolShot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_PistolShot_C");

	return Clss;
}


// CameraShake_PistolShot_C CameraShake_PistolShot.Default__CameraShake_PistolShot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_PistolShot_C* UCameraShake_PistolShot_C::GetDefaultObj()
{
	static class UCameraShake_PistolShot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_PistolShot_C*>(UCameraShake_PistolShot_C::StaticClass()->DefaultObject);

	return Default;
}

}


