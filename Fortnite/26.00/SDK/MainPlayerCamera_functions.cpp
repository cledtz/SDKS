#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MainPlayerCamera.MainPlayerCamera_C
// (Actor)

class UClass* UMainPlayerCamera_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainPlayerCamera_C");

	return Clss;
}


// MainPlayerCamera_C MainPlayerCamera.Default__MainPlayerCamera_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainPlayerCamera_C* UMainPlayerCamera_C::GetDefaultObj()
{
	static class UMainPlayerCamera_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainPlayerCamera_C*>(UMainPlayerCamera_C::StaticClass()->DefaultObject);

	return Default;
}

}


