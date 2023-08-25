#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class StormSicknessUI.StormSicknessWarningWidgetBase
// (None)

class UClass* UStormSicknessWarningWidgetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StormSicknessWarningWidgetBase");

	return Clss;
}


// StormSicknessWarningWidgetBase StormSicknessUI.Default__StormSicknessWarningWidgetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UStormSicknessWarningWidgetBase* UStormSicknessWarningWidgetBase::GetDefaultObj()
{
	static class UStormSicknessWarningWidgetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UStormSicknessWarningWidgetBase*>(UStormSicknessWarningWidgetBase::StaticClass()->DefaultObject);

	return Default;
}

}


