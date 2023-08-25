#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RidingCameraMode.RidingCameraMode_C
// (None)

class UClass* URidingCameraMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RidingCameraMode_C");

	return Clss;
}


// RidingCameraMode_C RidingCameraMode.Default__RidingCameraMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URidingCameraMode_C* URidingCameraMode_C::GetDefaultObj()
{
	static class URidingCameraMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URidingCameraMode_C*>(URidingCameraMode_C::StaticClass()->DefaultObject);

	return Default;
}

}


