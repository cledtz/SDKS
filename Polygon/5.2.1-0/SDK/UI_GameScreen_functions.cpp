#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_GameScreen.UI_GameScreen_C
// (None)

class UClass* UUI_GameScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_GameScreen_C");

	return Clss;
}


// UI_GameScreen_C UI_GameScreen.Default__UI_GameScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_GameScreen_C* UUI_GameScreen_C::GetDefaultObj()
{
	static class UUI_GameScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_GameScreen_C*>(UUI_GameScreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


