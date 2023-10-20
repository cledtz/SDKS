#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_SoftLoadingScreen.UI_SoftLoadingScreen_C
// (None)

class UClass* UUI_SoftLoadingScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_SoftLoadingScreen_C");

	return Clss;
}


// UI_SoftLoadingScreen_C UI_SoftLoadingScreen.Default__UI_SoftLoadingScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_SoftLoadingScreen_C* UUI_SoftLoadingScreen_C::GetDefaultObj()
{
	static class UUI_SoftLoadingScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_SoftLoadingScreen_C*>(UUI_SoftLoadingScreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


