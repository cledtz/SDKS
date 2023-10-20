#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_RifleShot.CameraShake_RifleShot_C
// (None)

class UClass* UCameraShake_RifleShot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_RifleShot_C");

	return Clss;
}


// CameraShake_RifleShot_C CameraShake_RifleShot.Default__CameraShake_RifleShot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_RifleShot_C* UCameraShake_RifleShot_C::GetDefaultObj()
{
	static class UCameraShake_RifleShot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_RifleShot_C*>(UCameraShake_RifleShot_C::StaticClass()->DefaultObject);

	return Default;
}

}


