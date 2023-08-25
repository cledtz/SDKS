#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterAttachConditionHandler.WaterAttachConditionHandler_C
// (None)

class UClass* UWaterAttachConditionHandler_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterAttachConditionHandler_C");

	return Clss;
}


// WaterAttachConditionHandler_C WaterAttachConditionHandler.Default__WaterAttachConditionHandler_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterAttachConditionHandler_C* UWaterAttachConditionHandler_C::GetDefaultObj()
{
	static class UWaterAttachConditionHandler_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterAttachConditionHandler_C*>(UWaterAttachConditionHandler_C::StaticClass()->DefaultObject);

	return Default;
}

}


