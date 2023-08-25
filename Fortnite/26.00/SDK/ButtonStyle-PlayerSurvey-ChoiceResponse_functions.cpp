#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-PlayerSurvey-ChoiceResponse.ButtonStyle-PlayerSurvey-ChoiceResponse_C
// (None)

class UClass* UButtonStyleMinusPlayerSurveyMinusChoiceResponse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-PlayerSurvey-ChoiceResponse_C");

	return Clss;
}


// ButtonStyle-PlayerSurvey-ChoiceResponse_C ButtonStyle-PlayerSurvey-ChoiceResponse.Default__ButtonStyle-PlayerSurvey-ChoiceResponse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusPlayerSurveyMinusChoiceResponse_C* UButtonStyleMinusPlayerSurveyMinusChoiceResponse_C::GetDefaultObj()
{
	static class UButtonStyleMinusPlayerSurveyMinusChoiceResponse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusPlayerSurveyMinusChoiceResponse_C*>(UButtonStyleMinusPlayerSurveyMinusChoiceResponse_C::StaticClass()->DefaultObject);

	return Default;
}

}


