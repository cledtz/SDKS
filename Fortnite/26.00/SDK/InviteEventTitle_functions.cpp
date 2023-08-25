#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass InviteEventTitle.InviteEventTitle_C
// (None)

class UClass* UInviteEventTitle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InviteEventTitle_C");

	return Clss;
}


// InviteEventTitle_C InviteEventTitle.Default__InviteEventTitle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInviteEventTitle_C* UInviteEventTitle_C::GetDefaultObj()
{
	static class UInviteEventTitle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInviteEventTitle_C*>(UInviteEventTitle_C::StaticClass()->DefaultObject);

	return Default;
}

}


