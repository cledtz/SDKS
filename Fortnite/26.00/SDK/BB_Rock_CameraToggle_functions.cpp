#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BB_Rock_CameraToggle.BB_Rock_CameraToggle_C
// (None)

class UClass* UBB_Rock_CameraToggle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BB_Rock_CameraToggle_C");

	return Clss;
}


// BB_Rock_CameraToggle_C BB_Rock_CameraToggle.Default__BB_Rock_CameraToggle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBB_Rock_CameraToggle_C* UBB_Rock_CameraToggle_C::GetDefaultObj()
{
	static class UBB_Rock_CameraToggle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBB_Rock_CameraToggle_C*>(UBB_Rock_CameraToggle_C::StaticClass()->DefaultObject);

	return Default;
}

}


