#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DefaultAxisMapping.DefaultAxisMapping_C
// (None)

class UClass* UDefaultAxisMapping_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultAxisMapping_C");

	return Clss;
}


// DefaultAxisMapping_C DefaultAxisMapping.Default__DefaultAxisMapping_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefaultAxisMapping_C* UDefaultAxisMapping_C::GetDefaultObj()
{
	static class UDefaultAxisMapping_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultAxisMapping_C*>(UDefaultAxisMapping_C::StaticClass()->DefaultObject);

	return Default;
}

}


