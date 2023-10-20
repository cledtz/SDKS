#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Menu_Squad_Help.UI_Menu_Squad_Help_C
// (None)

class UClass* UUI_Menu_Squad_Help_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Menu_Squad_Help_C");

	return Clss;
}


// UI_Menu_Squad_Help_C UI_Menu_Squad_Help.Default__UI_Menu_Squad_Help_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Menu_Squad_Help_C* UUI_Menu_Squad_Help_C::GetDefaultObj()
{
	static class UUI_Menu_Squad_Help_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Menu_Squad_Help_C*>(UUI_Menu_Squad_Help_C::StaticClass()->DefaultObject);

	return Default;
}

}


