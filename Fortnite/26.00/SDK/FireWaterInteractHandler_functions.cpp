#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FireWaterInteractHandler.FireWaterInteractHandler_C
// (None)

class UClass* UFireWaterInteractHandler_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FireWaterInteractHandler_C");

	return Clss;
}


// FireWaterInteractHandler_C FireWaterInteractHandler.Default__FireWaterInteractHandler_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFireWaterInteractHandler_C* UFireWaterInteractHandler_C::GetDefaultObj()
{
	static class UFireWaterInteractHandler_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFireWaterInteractHandler_C*>(UFireWaterInteractHandler_C::StaticClass()->DefaultObject);

	return Default;
}

}


