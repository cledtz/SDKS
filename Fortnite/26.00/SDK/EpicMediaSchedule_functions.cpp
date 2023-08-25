#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class EpicMediaSchedule.EpicMediaSchedule
// (None)

class UClass* UEpicMediaSchedule::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EpicMediaSchedule");

	return Clss;
}


// EpicMediaSchedule EpicMediaSchedule.Default__EpicMediaSchedule
// (Public, ClassDefaultObject, ArchetypeObject)

class UEpicMediaSchedule* UEpicMediaSchedule::GetDefaultObj()
{
	static class UEpicMediaSchedule* Default = nullptr;

	if (!Default)
		Default = static_cast<UEpicMediaSchedule*>(UEpicMediaSchedule::StaticClass()->DefaultObject);

	return Default;
}

}


