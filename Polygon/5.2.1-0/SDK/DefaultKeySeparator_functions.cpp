#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DefaultKeySeparator.DefaultKeySeparator_C
// (None)

class UClass* UDefaultKeySeparator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultKeySeparator_C");

	return Clss;
}


// DefaultKeySeparator_C DefaultKeySeparator.Default__DefaultKeySeparator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefaultKeySeparator_C* UDefaultKeySeparator_C::GetDefaultObj()
{
	static class UDefaultKeySeparator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultKeySeparator_C*>(UDefaultKeySeparator_C::StaticClass()->DefaultObject);

	return Default;
}

}


