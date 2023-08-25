#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SqueegeeInjectionSlot.SqueegeeInjectionSlot_C
// (None)

class UClass* USqueegeeInjectionSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SqueegeeInjectionSlot_C");

	return Clss;
}


// SqueegeeInjectionSlot_C SqueegeeInjectionSlot.Default__SqueegeeInjectionSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USqueegeeInjectionSlot_C* USqueegeeInjectionSlot_C::GetDefaultObj()
{
	static class USqueegeeInjectionSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USqueegeeInjectionSlot_C*>(USqueegeeInjectionSlot_C::StaticClass()->DefaultObject);

	return Default;
}

}


