#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FrontEndSettingsBP.FrontEndSettingsBP_C
// (Actor)

class UClass* UFrontEndSettingsBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FrontEndSettingsBP_C");

	return Clss;
}


// FrontEndSettingsBP_C FrontEndSettingsBP.Default__FrontEndSettingsBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFrontEndSettingsBP_C* UFrontEndSettingsBP_C::GetDefaultObj()
{
	static class UFrontEndSettingsBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFrontEndSettingsBP_C*>(UFrontEndSettingsBP_C::StaticClass()->DefaultObject);

	return Default;
}

}


