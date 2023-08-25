#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PlayerSurveyRatingResponse.PlayerSurveyRatingResponse_C
// (None)

class UClass* UPlayerSurveyRatingResponse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerSurveyRatingResponse_C");

	return Clss;
}


// PlayerSurveyRatingResponse_C PlayerSurveyRatingResponse.Default__PlayerSurveyRatingResponse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerSurveyRatingResponse_C* UPlayerSurveyRatingResponse_C::GetDefaultObj()
{
	static class UPlayerSurveyRatingResponse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerSurveyRatingResponse_C*>(UPlayerSurveyRatingResponse_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerSurveyRatingResponse.PlayerSurveyRatingResponse_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UPlayerSurveyRatingResponse_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyRatingResponse_C", "OnAddedToFocusPath");

	Params::UPlayerSurveyRatingResponse_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyRatingResponse.PlayerSurveyRatingResponse_C.OnResponsesSet_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerSurveyRatingResponse_C::OnResponsesSet_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyRatingResponse_C", "OnResponsesSet_BP");

	Params::UPlayerSurveyRatingResponse_C_OnResponsesSet_BP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyRatingResponse.PlayerSurveyRatingResponse_C.ExecuteUbergraph_PlayerSurveyRatingResponse
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// int32                              CallFunc_GetNumEntries_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyRatingResponse_C::ExecuteUbergraph_PlayerSurveyRatingResponse(int32 EntryPoint, const struct FFocusEvent& K2Node_Event_InFocusEvent, int32 CallFunc_GetNumEntries_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, double CallFunc_SelectFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyRatingResponse_C", "ExecuteUbergraph_PlayerSurveyRatingResponse");

	Params::UPlayerSurveyRatingResponse_C_ExecuteUbergraph_PlayerSurveyRatingResponse_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_GetNumEntries_ReturnValue = CallFunc_GetNumEntries_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


