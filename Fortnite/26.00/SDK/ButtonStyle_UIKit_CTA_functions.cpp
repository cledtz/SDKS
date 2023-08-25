#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_UIKit_CTA.ButtonStyle_UIKit_CTA_C
// (None)

class UClass* UButtonStyle_UIKit_CTA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_UIKit_CTA_C");

	return Clss;
}


// ButtonStyle_UIKit_CTA_C ButtonStyle_UIKit_CTA.Default__ButtonStyle_UIKit_CTA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_UIKit_CTA_C* UButtonStyle_UIKit_CTA_C::GetDefaultObj()
{
	static class UButtonStyle_UIKit_CTA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_UIKit_CTA_C*>(UButtonStyle_UIKit_CTA_C::StaticClass()->DefaultObject);

	return Default;
}

}


