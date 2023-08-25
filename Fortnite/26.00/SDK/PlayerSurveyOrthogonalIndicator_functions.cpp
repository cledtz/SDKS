#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PlayerSurveyOrthogonalIndicator.PlayerSurveyOrthogonalIndicator_C
// (None)

class UClass* UPlayerSurveyOrthogonalIndicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerSurveyOrthogonalIndicator_C");

	return Clss;
}


// PlayerSurveyOrthogonalIndicator_C PlayerSurveyOrthogonalIndicator.Default__PlayerSurveyOrthogonalIndicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerSurveyOrthogonalIndicator_C* UPlayerSurveyOrthogonalIndicator_C::GetDefaultObj()
{
	static class UPlayerSurveyOrthogonalIndicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerSurveyOrthogonalIndicator_C*>(UPlayerSurveyOrthogonalIndicator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerSurveyOrthogonalIndicator.PlayerSurveyOrthogonalIndicator_C.UpdateGamepadControlsVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyOrthogonalIndicator_C::UpdateGamepadControlsVisibility(enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyOrthogonalIndicator_C", "UpdateGamepadControlsVisibility");

	Params::UPlayerSurveyOrthogonalIndicator_C_UpdateGamepadControlsVisibility_Params Parms{};

	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyOrthogonalIndicator.PlayerSurveyOrthogonalIndicator_C.BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyOrthogonalIndicator_C::BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyOrthogonalIndicator_C", "BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	Params::UPlayerSurveyOrthogonalIndicator_C_BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyOrthogonalIndicator.PlayerSurveyOrthogonalIndicator_C.ExecuteUbergraph_PlayerSurveyOrthogonalIndicator
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bUsingGamepad                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyOrthogonalIndicator_C::ExecuteUbergraph_PlayerSurveyOrthogonalIndicator(int32 EntryPoint, bool K2Node_ComponentBoundEvent_bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyOrthogonalIndicator_C", "ExecuteUbergraph_PlayerSurveyOrthogonalIndicator");

	Params::UPlayerSurveyOrthogonalIndicator_C_ExecuteUbergraph_PlayerSurveyOrthogonalIndicator_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_bUsingGamepad = K2Node_ComponentBoundEvent_bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}

}


