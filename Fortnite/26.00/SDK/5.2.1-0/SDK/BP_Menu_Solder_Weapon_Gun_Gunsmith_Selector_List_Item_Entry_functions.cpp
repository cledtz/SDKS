#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Menu_Solder_Weapon_Gun_Gunsmith_Selector_List_Item_Entry.BP_Menu_Solder_Weapon_Gun_Gunsmith_Selector_List_Item_Entry_C
// (None)

class UClass* UBP_Menu_Solder_Weapon_Gun_Gunsmith_Selector_List_Item_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Menu_Solder_Weapon_Gun_Gunsmith_Selector_List_Item_Entry_C");

	return Clss;
}


// BP_Menu_Solder_Weapon_Gun_Gunsmith_Selector_List_Item_Entry_C BP_Menu_Solder_Weapon_Gun_Gunsmith_Selector_List_Item_Entry.Default__BP_Menu_Solder_Weapon_Gun_Gunsmith_Selector_List_Item_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Menu_Solder_Weapon_Gun_Gunsmith_Selector_List_Item_Entry_C* UBP_Menu_Solder_Weapon_Gun_Gunsmith_Selector_List_Item_Entry_C::GetDefaultObj()
{
	static class UBP_Menu_Solder_Weapon_Gun_Gunsmith_Selector_List_Item_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Menu_Solder_Weapon_Gun_Gunsmith_Selector_List_Item_Entry_C*>(UBP_Menu_Solder_Weapon_Gun_Gunsmith_Selector_List_Item_Entry_C::StaticClass()->DefaultObject);

	return Default;
}

}


