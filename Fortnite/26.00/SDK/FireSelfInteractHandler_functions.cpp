#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FireSelfInteractHandler.FireSelfInteractHandler_C
// (None)

class UClass* UFireSelfInteractHandler_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FireSelfInteractHandler_C");

	return Clss;
}


// FireSelfInteractHandler_C FireSelfInteractHandler.Default__FireSelfInteractHandler_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFireSelfInteractHandler_C* UFireSelfInteractHandler_C::GetDefaultObj()
{
	static class UFireSelfInteractHandler_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFireSelfInteractHandler_C*>(UFireSelfInteractHandler_C::StaticClass()->DefaultObject);

	return Default;
}

}


