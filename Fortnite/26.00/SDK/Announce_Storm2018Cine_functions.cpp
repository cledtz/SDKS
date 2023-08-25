#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Announce_Storm2018Cine.Announce_Storm2018Cine_C
// (Actor)

class UClass* UAnnounce_Storm2018Cine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Announce_Storm2018Cine_C");

	return Clss;
}


// Announce_Storm2018Cine_C Announce_Storm2018Cine.Default__Announce_Storm2018Cine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnnounce_Storm2018Cine_C* UAnnounce_Storm2018Cine_C::GetDefaultObj()
{
	static class UAnnounce_Storm2018Cine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnnounce_Storm2018Cine_C*>(UAnnounce_Storm2018Cine_C::StaticClass()->DefaultObject);

	return Default;
}

}


