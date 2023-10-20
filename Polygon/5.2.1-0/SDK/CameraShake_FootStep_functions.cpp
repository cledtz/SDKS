#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_FootStep.CameraShake_FootStep_C
// (None)

class UClass* UCameraShake_FootStep_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_FootStep_C");

	return Clss;
}


// CameraShake_FootStep_C CameraShake_FootStep.Default__CameraShake_FootStep_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_FootStep_C* UCameraShake_FootStep_C::GetDefaultObj()
{
	static class UCameraShake_FootStep_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_FootStep_C*>(UCameraShake_FootStep_C::StaticClass()->DefaultObject);

	return Default;
}

}


