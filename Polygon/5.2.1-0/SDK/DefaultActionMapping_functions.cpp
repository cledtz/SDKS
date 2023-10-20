#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DefaultActionMapping.DefaultActionMapping_C
// (None)

class UClass* UDefaultActionMapping_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultActionMapping_C");

	return Clss;
}


// DefaultActionMapping_C DefaultActionMapping.Default__DefaultActionMapping_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefaultActionMapping_C* UDefaultActionMapping_C::GetDefaultObj()
{
	static class UDefaultActionMapping_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultActionMapping_C*>(UDefaultActionMapping_C::StaticClass()->DefaultObject);

	return Default;
}

}


