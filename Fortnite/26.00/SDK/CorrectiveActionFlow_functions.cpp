#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CorrectiveActionFlow.CorrectiveActionFlow_C
// (None)

class UClass* UCorrectiveActionFlow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CorrectiveActionFlow_C");

	return Clss;
}


// CorrectiveActionFlow_C CorrectiveActionFlow.Default__CorrectiveActionFlow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCorrectiveActionFlow_C* UCorrectiveActionFlow_C::GetDefaultObj()
{
	static class UCorrectiveActionFlow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCorrectiveActionFlow_C*>(UCorrectiveActionFlow_C::StaticClass()->DefaultObject);

	return Default;
}

}


