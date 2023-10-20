#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DefaultAxisLabel.DefaultAxisLabel_C
// (None)

class UClass* UDefaultAxisLabel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultAxisLabel_C");

	return Clss;
}


// DefaultAxisLabel_C DefaultAxisLabel.Default__DefaultAxisLabel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefaultAxisLabel_C* UDefaultAxisLabel_C::GetDefaultObj()
{
	static class UDefaultAxisLabel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultAxisLabel_C*>(UDefaultAxisLabel_C::StaticClass()->DefaultObject);

	return Default;
}

}


