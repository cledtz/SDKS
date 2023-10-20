#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DefaultComboBoxSetting.DefaultComboBoxSetting_C
// (None)

class UClass* UDefaultComboBoxSetting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultComboBoxSetting_C");

	return Clss;
}


// DefaultComboBoxSetting_C DefaultComboBoxSetting.Default__DefaultComboBoxSetting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefaultComboBoxSetting_C* UDefaultComboBoxSetting_C::GetDefaultObj()
{
	static class UDefaultComboBoxSetting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultComboBoxSetting_C*>(UDefaultComboBoxSetting_C::StaticClass()->DefaultObject);

	return Default;
}

}


