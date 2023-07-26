#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function PlayerSurveyVerticalIndicator.PlayerSurveyVerticalIndicator_C.UpdateGamepadControlsVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyVerticalIndicator_C::UpdateGamepadControlsVisibility(enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerSurveyVerticalIndicator_C", "UpdateGamepadControlsVisibility");

	Params::UPlayerSurveyVerticalIndicator_C_UpdateGamepadControlsVisibility_Params Parms;

	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyVerticalIndicator.PlayerSurveyVerticalIndicator_C.BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyVerticalIndicator_C::BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("PlayerSurveyVerticalIndicator_C", "BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	Params::UPlayerSurveyVerticalIndicator_C_BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params Parms;

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyVerticalIndicator.PlayerSurveyVerticalIndicator_C.ExecuteUbergraph_PlayerSurveyVerticalIndicator
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bUsingGamepad                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyVerticalIndicator_C::ExecuteUbergraph_PlayerSurveyVerticalIndicator(int32 EntryPoint, bool K2Node_ComponentBoundEvent_bUsingGamepad)
{
	static auto Func = Class->GetFunction("PlayerSurveyVerticalIndicator_C", "ExecuteUbergraph_PlayerSurveyVerticalIndicator");

	Params::UPlayerSurveyVerticalIndicator_C_ExecuteUbergraph_PlayerSurveyVerticalIndicator_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_bUsingGamepad = K2Node_ComponentBoundEvent_bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
