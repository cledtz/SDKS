#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function PlayerSurveyHorizontalIndicator.PlayerSurveyHorizontalIndicator_C.UpdateGamepadControlsVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyHorizontalIndicator_C::UpdateGamepadControlsVisibility(enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerSurveyHorizontalIndicator_C", "UpdateGamepadControlsVisibility");

	Params::UPlayerSurveyHorizontalIndicator_C_UpdateGamepadControlsVisibility_Params Parms;

	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyHorizontalIndicator.PlayerSurveyHorizontalIndicator_C.BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyHorizontalIndicator_C::BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("PlayerSurveyHorizontalIndicator_C", "BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	Params::UPlayerSurveyHorizontalIndicator_C_BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params Parms;

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyHorizontalIndicator.PlayerSurveyHorizontalIndicator_C.ExecuteUbergraph_PlayerSurveyHorizontalIndicator
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bUsingGamepad                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyHorizontalIndicator_C::ExecuteUbergraph_PlayerSurveyHorizontalIndicator(int32 EntryPoint, bool K2Node_ComponentBoundEvent_bUsingGamepad)
{
	static auto Func = Class->GetFunction("PlayerSurveyHorizontalIndicator_C", "ExecuteUbergraph_PlayerSurveyHorizontalIndicator");

	Params::UPlayerSurveyHorizontalIndicator_C_ExecuteUbergraph_PlayerSurveyHorizontalIndicator_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_bUsingGamepad = K2Node_ComponentBoundEvent_bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
