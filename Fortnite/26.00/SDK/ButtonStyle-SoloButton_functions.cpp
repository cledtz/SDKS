#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-SoloButton.ButtonStyle-SoloButton_C
// (None)

class UClass* UButtonStyleMinusSoloButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-SoloButton_C");

	return Clss;
}


// ButtonStyle-SoloButton_C ButtonStyle-SoloButton.Default__ButtonStyle-SoloButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusSoloButton_C* UButtonStyleMinusSoloButton_C::GetDefaultObj()
{
	static class UButtonStyleMinusSoloButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusSoloButton_C*>(UButtonStyleMinusSoloButton_C::StaticClass()->DefaultObject);

	return Default;
}

}


