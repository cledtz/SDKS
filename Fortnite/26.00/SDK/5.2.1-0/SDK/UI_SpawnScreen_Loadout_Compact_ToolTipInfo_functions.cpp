#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_SpawnScreen_Loadout_Compact_ToolTipInfo.UI_SpawnScreen_Loadout_Compact_ToolTipInfo_C
// (None)

class UClass* UUI_SpawnScreen_Loadout_Compact_ToolTipInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_SpawnScreen_Loadout_Compact_ToolTipInfo_C");

	return Clss;
}


// UI_SpawnScreen_Loadout_Compact_ToolTipInfo_C UI_SpawnScreen_Loadout_Compact_ToolTipInfo.Default__UI_SpawnScreen_Loadout_Compact_ToolTipInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_SpawnScreen_Loadout_Compact_ToolTipInfo_C* UUI_SpawnScreen_Loadout_Compact_ToolTipInfo_C::GetDefaultObj()
{
	static class UUI_SpawnScreen_Loadout_Compact_ToolTipInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_SpawnScreen_Loadout_Compact_ToolTipInfo_C*>(UUI_SpawnScreen_Loadout_Compact_ToolTipInfo_C::StaticClass()->DefaultObject);

	return Default;
}

}


