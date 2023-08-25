#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ColorCalibration.ColorCalibration_C
// (None)

class UClass* UColorCalibration_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ColorCalibration_C");

	return Clss;
}


// ColorCalibration_C ColorCalibration.Default__ColorCalibration_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UColorCalibration_C* UColorCalibration_C::GetDefaultObj()
{
	static class UColorCalibration_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UColorCalibration_C*>(UColorCalibration_C::StaticClass()->DefaultObject);

	return Default;
}

}


