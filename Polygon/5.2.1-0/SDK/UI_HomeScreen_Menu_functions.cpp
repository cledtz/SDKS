#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_HomeScreen_Menu.UI_HomeScreen_Menu_C
// (None)

class UClass* UUI_HomeScreen_Menu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_HomeScreen_Menu_C");

	return Clss;
}


// UI_HomeScreen_Menu_C UI_HomeScreen_Menu.Default__UI_HomeScreen_Menu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_HomeScreen_Menu_C* UUI_HomeScreen_Menu_C::GetDefaultObj()
{
	static class UUI_HomeScreen_Menu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_HomeScreen_Menu_C*>(UUI_HomeScreen_Menu_C::StaticClass()->DefaultObject);

	return Default;
}

}


