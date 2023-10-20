#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DefaultBindCapturePrompt.DefaultBindCapturePrompt_C
// (None)

class UClass* UDefaultBindCapturePrompt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultBindCapturePrompt_C");

	return Clss;
}


// DefaultBindCapturePrompt_C DefaultBindCapturePrompt.Default__DefaultBindCapturePrompt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefaultBindCapturePrompt_C* UDefaultBindCapturePrompt_C::GetDefaultObj()
{
	static class UDefaultBindCapturePrompt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultBindCapturePrompt_C*>(UDefaultBindCapturePrompt_C::StaticClass()->DefaultObject);

	return Default;
}

}


