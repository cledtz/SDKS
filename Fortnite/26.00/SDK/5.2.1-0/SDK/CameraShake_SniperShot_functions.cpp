#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_SniperShot.CameraShake_SniperShot_C
// (None)

class UClass* UCameraShake_SniperShot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_SniperShot_C");

	return Clss;
}


// CameraShake_SniperShot_C CameraShake_SniperShot.Default__CameraShake_SniperShot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_SniperShot_C* UCameraShake_SniperShot_C::GetDefaultObj()
{
	static class UCameraShake_SniperShot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_SniperShot_C*>(UCameraShake_SniperShot_C::StaticClass()->DefaultObject);

	return Default;
}

}


