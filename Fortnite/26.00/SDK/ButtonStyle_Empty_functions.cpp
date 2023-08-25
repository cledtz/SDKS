#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_Empty.ButtonStyle_Empty_C
// (None)

class UClass* UButtonStyle_Empty_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_Empty_C");

	return Clss;
}


// ButtonStyle_Empty_C ButtonStyle_Empty.Default__ButtonStyle_Empty_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_Empty_C* UButtonStyle_Empty_C::GetDefaultObj()
{
	static class UButtonStyle_Empty_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_Empty_C*>(UButtonStyle_Empty_C::StaticClass()->DefaultObject);

	return Default;
}

}


