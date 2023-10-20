#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DefaultActionLabel.DefaultActionLabel_C
// (None)

class UClass* UDefaultActionLabel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultActionLabel_C");

	return Clss;
}


// DefaultActionLabel_C DefaultActionLabel.Default__DefaultActionLabel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefaultActionLabel_C* UDefaultActionLabel_C::GetDefaultObj()
{
	static class UDefaultActionLabel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultActionLabel_C*>(UDefaultActionLabel_C::StaticClass()->DefaultObject);

	return Default;
}

}


