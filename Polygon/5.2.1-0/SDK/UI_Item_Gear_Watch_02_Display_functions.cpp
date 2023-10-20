#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Item_Gear_Watch_02_Display.UI_Item_Gear_Watch_02_Display_C
// (None)

class UClass* UUI_Item_Gear_Watch_02_Display_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Item_Gear_Watch_02_Display_C");

	return Clss;
}


// UI_Item_Gear_Watch_02_Display_C UI_Item_Gear_Watch_02_Display.Default__UI_Item_Gear_Watch_02_Display_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Item_Gear_Watch_02_Display_C* UUI_Item_Gear_Watch_02_Display_C::GetDefaultObj()
{
	static class UUI_Item_Gear_Watch_02_Display_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Item_Gear_Watch_02_Display_C*>(UUI_Item_Gear_Watch_02_Display_C::StaticClass()->DefaultObject);

	return Default;
}

}


