#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DefaultCheckBoxSetting.DefaultCheckBoxSetting_C
// (None)

class UClass* UDefaultCheckBoxSetting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultCheckBoxSetting_C");

	return Clss;
}


// DefaultCheckBoxSetting_C DefaultCheckBoxSetting.Default__DefaultCheckBoxSetting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefaultCheckBoxSetting_C* UDefaultCheckBoxSetting_C::GetDefaultObj()
{
	static class UDefaultCheckBoxSetting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultCheckBoxSetting_C*>(UDefaultCheckBoxSetting_C::StaticClass()->DefaultObject);

	return Default;
}

}


