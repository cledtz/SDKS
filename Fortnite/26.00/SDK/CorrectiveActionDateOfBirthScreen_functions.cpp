#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CorrectiveActionDateOfBirthScreen.CorrectiveActionDateOfBirthScreen_C
// (None)

class UClass* UCorrectiveActionDateOfBirthScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CorrectiveActionDateOfBirthScreen_C");

	return Clss;
}


// CorrectiveActionDateOfBirthScreen_C CorrectiveActionDateOfBirthScreen.Default__CorrectiveActionDateOfBirthScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCorrectiveActionDateOfBirthScreen_C* UCorrectiveActionDateOfBirthScreen_C::GetDefaultObj()
{
	static class UCorrectiveActionDateOfBirthScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCorrectiveActionDateOfBirthScreen_C*>(UCorrectiveActionDateOfBirthScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CorrectiveActionDateOfBirthScreen.CorrectiveActionDateOfBirthScreen_C.OnShowFailureReason
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        FailureReason                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCorrectiveActionDateOfBirthScreen_C::OnShowFailureReason(class FText& FailureReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CorrectiveActionDateOfBirthScreen_C", "OnShowFailureReason");

	Params::UCorrectiveActionDateOfBirthScreen_C_OnShowFailureReason_Params Parms{};

	Parms.FailureReason = FailureReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CorrectiveActionDateOfBirthScreen.CorrectiveActionDateOfBirthScreen_C.OnShowCorrectiveActionProcessing
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShowProcessing                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCorrectiveActionDateOfBirthScreen_C::OnShowCorrectiveActionProcessing(bool bShowProcessing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CorrectiveActionDateOfBirthScreen_C", "OnShowCorrectiveActionProcessing");

	Params::UCorrectiveActionDateOfBirthScreen_C_OnShowCorrectiveActionProcessing_Params Parms{};

	Parms.bShowProcessing = bShowProcessing;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CorrectiveActionDateOfBirthScreen.CorrectiveActionDateOfBirthScreen_C.ExecuteUbergraph_CorrectiveActionDateOfBirthScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_InputField_C*           K2Node_DynamicCast_AsWBP_Input_Field                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShowProcessing                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_FailureReason                                       (ConstParm)

void UCorrectiveActionDateOfBirthScreen_C::ExecuteUbergraph_CorrectiveActionDateOfBirthScreen(int32 EntryPoint, class UWBP_InputField_C* K2Node_DynamicCast_AsWBP_Input_Field, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bShowProcessing, class FText K2Node_Event_FailureReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CorrectiveActionDateOfBirthScreen_C", "ExecuteUbergraph_CorrectiveActionDateOfBirthScreen");

	Params::UCorrectiveActionDateOfBirthScreen_C_ExecuteUbergraph_CorrectiveActionDateOfBirthScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsWBP_Input_Field = K2Node_DynamicCast_AsWBP_Input_Field;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_bShowProcessing = K2Node_Event_bShowProcessing;
	Parms.K2Node_Event_FailureReason = K2Node_Event_FailureReason;

	UObject::ProcessEvent(Func, &Parms);

}

}


