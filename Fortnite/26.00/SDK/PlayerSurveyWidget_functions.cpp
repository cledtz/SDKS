#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PlayerSurveyWidget.PlayerSurveyWidget_C
// (None)

class UClass* UPlayerSurveyWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerSurveyWidget_C");

	return Clss;
}


// PlayerSurveyWidget_C PlayerSurveyWidget.Default__PlayerSurveyWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerSurveyWidget_C* UPlayerSurveyWidget_C::GetDefaultObj()
{
	static class UPlayerSurveyWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerSurveyWidget_C*>(UPlayerSurveyWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


