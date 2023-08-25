#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterFireInteractHandler.WaterFireInteractHandler_C
// (None)

class UClass* UWaterFireInteractHandler_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterFireInteractHandler_C");

	return Clss;
}


// WaterFireInteractHandler_C WaterFireInteractHandler.Default__WaterFireInteractHandler_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterFireInteractHandler_C* UWaterFireInteractHandler_C::GetDefaultObj()
{
	static class UWaterFireInteractHandler_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterFireInteractHandler_C*>(UWaterFireInteractHandler_C::StaticClass()->DefaultObject);

	return Default;
}

}


