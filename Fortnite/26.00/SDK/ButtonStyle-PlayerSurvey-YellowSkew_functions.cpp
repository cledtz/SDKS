#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-PlayerSurvey-YellowSkew.ButtonStyle-PlayerSurvey-YellowSkew_C
// (None)

class UClass* UButtonStyleMinusPlayerSurveyMinusYellowSkew_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-PlayerSurvey-YellowSkew_C");

	return Clss;
}


// ButtonStyle-PlayerSurvey-YellowSkew_C ButtonStyle-PlayerSurvey-YellowSkew.Default__ButtonStyle-PlayerSurvey-YellowSkew_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusPlayerSurveyMinusYellowSkew_C* UButtonStyleMinusPlayerSurveyMinusYellowSkew_C::GetDefaultObj()
{
	static class UButtonStyleMinusPlayerSurveyMinusYellowSkew_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusPlayerSurveyMinusYellowSkew_C*>(UButtonStyleMinusPlayerSurveyMinusYellowSkew_C::StaticClass()->DefaultObject);

	return Default;
}

}


