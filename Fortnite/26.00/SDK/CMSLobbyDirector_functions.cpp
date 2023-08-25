#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CMSLobbyDirector.CMSLobbyDirector_C
// (Actor)

class UClass* UCMSLobbyDirector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CMSLobbyDirector_C");

	return Clss;
}


// CMSLobbyDirector_C CMSLobbyDirector.Default__CMSLobbyDirector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCMSLobbyDirector_C* UCMSLobbyDirector_C::GetDefaultObj()
{
	static class UCMSLobbyDirector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCMSLobbyDirector_C*>(UCMSLobbyDirector_C::StaticClass()->DefaultObject);

	return Default;
}

}


