#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PinGrantCodeInfoWidget.PinGrantCodeInfoWidget_C
// (None)

class UClass* UPinGrantCodeInfoWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PinGrantCodeInfoWidget_C");

	return Clss;
}


// PinGrantCodeInfoWidget_C PinGrantCodeInfoWidget.Default__PinGrantCodeInfoWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPinGrantCodeInfoWidget_C* UPinGrantCodeInfoWidget_C::GetDefaultObj()
{
	static class UPinGrantCodeInfoWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPinGrantCodeInfoWidget_C*>(UPinGrantCodeInfoWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


