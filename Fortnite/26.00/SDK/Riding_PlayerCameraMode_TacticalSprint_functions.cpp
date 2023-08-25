#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Riding_PlayerCameraMode_TacticalSprint.Riding_PlayerCameraMode_TacticalSprint_C
// (None)

class UClass* URiding_PlayerCameraMode_TacticalSprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Riding_PlayerCameraMode_TacticalSprint_C");

	return Clss;
}


// Riding_PlayerCameraMode_TacticalSprint_C Riding_PlayerCameraMode_TacticalSprint.Default__Riding_PlayerCameraMode_TacticalSprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URiding_PlayerCameraMode_TacticalSprint_C* URiding_PlayerCameraMode_TacticalSprint_C::GetDefaultObj()
{
	static class URiding_PlayerCameraMode_TacticalSprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URiding_PlayerCameraMode_TacticalSprint_C*>(URiding_PlayerCameraMode_TacticalSprint_C::StaticClass()->DefaultObject);

	return Default;
}

}


