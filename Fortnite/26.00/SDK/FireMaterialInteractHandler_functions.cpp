#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FireMaterialInteractHandler.FireMaterialInteractHandler_C
// (None)

class UClass* UFireMaterialInteractHandler_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FireMaterialInteractHandler_C");

	return Clss;
}


// FireMaterialInteractHandler_C FireMaterialInteractHandler.Default__FireMaterialInteractHandler_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFireMaterialInteractHandler_C* UFireMaterialInteractHandler_C::GetDefaultObj()
{
	static class UFireMaterialInteractHandler_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFireMaterialInteractHandler_C*>(UFireMaterialInteractHandler_C::StaticClass()->DefaultObject);

	return Default;
}

}


