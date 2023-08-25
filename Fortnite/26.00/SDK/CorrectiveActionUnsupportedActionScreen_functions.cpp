#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CorrectiveActionUnsupportedActionScreen.CorrectiveActionUnsupportedActionScreen_C
// (None)

class UClass* UCorrectiveActionUnsupportedActionScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CorrectiveActionUnsupportedActionScreen_C");

	return Clss;
}


// CorrectiveActionUnsupportedActionScreen_C CorrectiveActionUnsupportedActionScreen.Default__CorrectiveActionUnsupportedActionScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCorrectiveActionUnsupportedActionScreen_C* UCorrectiveActionUnsupportedActionScreen_C::GetDefaultObj()
{
	static class UCorrectiveActionUnsupportedActionScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCorrectiveActionUnsupportedActionScreen_C*>(UCorrectiveActionUnsupportedActionScreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


