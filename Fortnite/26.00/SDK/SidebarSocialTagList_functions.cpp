#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SidebarSocialTagList.SidebarSocialTagList_C
// (None)

class UClass* USidebarSocialTagList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SidebarSocialTagList_C");

	return Clss;
}


// SidebarSocialTagList_C SidebarSocialTagList.Default__SidebarSocialTagList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USidebarSocialTagList_C* USidebarSocialTagList_C::GetDefaultObj()
{
	static class USidebarSocialTagList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USidebarSocialTagList_C*>(USidebarSocialTagList_C::StaticClass()->DefaultObject);

	return Default;
}

}


