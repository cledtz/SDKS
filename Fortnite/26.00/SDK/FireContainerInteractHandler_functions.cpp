#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FireContainerInteractHandler.FireContainerInteractHandler_C
// (None)

class UClass* UFireContainerInteractHandler_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FireContainerInteractHandler_C");

	return Clss;
}


// FireContainerInteractHandler_C FireContainerInteractHandler.Default__FireContainerInteractHandler_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFireContainerInteractHandler_C* UFireContainerInteractHandler_C::GetDefaultObj()
{
	static class UFireContainerInteractHandler_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFireContainerInteractHandler_C*>(UFireContainerInteractHandler_C::StaticClass()->DefaultObject);

	return Default;
}

}


