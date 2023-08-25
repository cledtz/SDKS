#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterMaterialInteractHandler.WaterMaterialInteractHandler_C
// (None)

class UClass* UWaterMaterialInteractHandler_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterMaterialInteractHandler_C");

	return Clss;
}


// WaterMaterialInteractHandler_C WaterMaterialInteractHandler.Default__WaterMaterialInteractHandler_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterMaterialInteractHandler_C* UWaterMaterialInteractHandler_C::GetDefaultObj()
{
	static class UWaterMaterialInteractHandler_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterMaterialInteractHandler_C*>(UWaterMaterialInteractHandler_C::StaticClass()->DefaultObject);

	return Default;
}

}


