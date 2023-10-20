#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_SupportBox_Ammo.UI_SupportBox_Ammo_C
// (None)

class UClass* UUI_SupportBox_Ammo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_SupportBox_Ammo_C");

	return Clss;
}


// UI_SupportBox_Ammo_C UI_SupportBox_Ammo.Default__UI_SupportBox_Ammo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_SupportBox_Ammo_C* UUI_SupportBox_Ammo_C::GetDefaultObj()
{
	static class UUI_SupportBox_Ammo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_SupportBox_Ammo_C*>(UUI_SupportBox_Ammo_C::StaticClass()->DefaultObject);

	return Default;
}

}


