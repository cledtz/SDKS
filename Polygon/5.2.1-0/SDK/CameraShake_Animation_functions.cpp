#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_Animation.CameraShake_Animation_C
// (None)

class UClass* UCameraShake_Animation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_Animation_C");

	return Clss;
}


// CameraShake_Animation_C CameraShake_Animation.Default__CameraShake_Animation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_Animation_C* UCameraShake_Animation_C::GetDefaultObj()
{
	static class UCameraShake_Animation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_Animation_C*>(UCameraShake_Animation_C::StaticClass()->DefaultObject);

	return Default;
}

}


