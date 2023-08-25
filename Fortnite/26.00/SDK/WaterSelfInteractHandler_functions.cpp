#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterSelfInteractHandler.WaterSelfInteractHandler_C
// (None)

class UClass* UWaterSelfInteractHandler_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterSelfInteractHandler_C");

	return Clss;
}


// WaterSelfInteractHandler_C WaterSelfInteractHandler.Default__WaterSelfInteractHandler_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterSelfInteractHandler_C* UWaterSelfInteractHandler_C::GetDefaultObj()
{
	static class UWaterSelfInteractHandler_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterSelfInteractHandler_C*>(UWaterSelfInteractHandler_C::StaticClass()->DefaultObject);

	return Default;
}

}


