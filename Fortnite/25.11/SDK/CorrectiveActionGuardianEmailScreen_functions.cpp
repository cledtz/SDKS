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


// Function CorrectiveActionGuardianEmailScreen.CorrectiveActionGuardianEmailScreen_C.OnShowFailureReason
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        FailureReason                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCorrectiveActionGuardianEmailScreen_C::OnShowFailureReason(class FText& FailureReason)
{
	static auto Func = Class->GetFunction("CorrectiveActionGuardianEmailScreen_C", "OnShowFailureReason");

	Params::UCorrectiveActionGuardianEmailScreen_C_OnShowFailureReason_Params Parms;

	Parms.FailureReason = FailureReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CorrectiveActionGuardianEmailScreen.CorrectiveActionGuardianEmailScreen_C.OnShowCorrectiveActionProcessing
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShowProcessing                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCorrectiveActionGuardianEmailScreen_C::OnShowCorrectiveActionProcessing(bool bShowProcessing)
{
	static auto Func = Class->GetFunction("CorrectiveActionGuardianEmailScreen_C", "OnShowCorrectiveActionProcessing");

	Params::UCorrectiveActionGuardianEmailScreen_C_OnShowCorrectiveActionProcessing_Params Parms;

	Parms.bShowProcessing = bShowProcessing;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CorrectiveActionGuardianEmailScreen.CorrectiveActionGuardianEmailScreen_C.ExecuteUbergraph_CorrectiveActionGuardianEmailScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_FailureReason                                       (ConstParm)
// bool                               K2Node_Event_bShowProcessing                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_InputField_C*           K2Node_DynamicCast_AsWBP_Input_Field                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCorrectiveActionGuardianEmailScreen_C::ExecuteUbergraph_CorrectiveActionGuardianEmailScreen(int32 EntryPoint, class FText K2Node_Event_FailureReason, bool K2Node_Event_bShowProcessing, class UWBP_InputField_C* K2Node_DynamicCast_AsWBP_Input_Field, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("CorrectiveActionGuardianEmailScreen_C", "ExecuteUbergraph_CorrectiveActionGuardianEmailScreen");

	Params::UCorrectiveActionGuardianEmailScreen_C_ExecuteUbergraph_CorrectiveActionGuardianEmailScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_FailureReason = K2Node_Event_FailureReason;
	Parms.K2Node_Event_bShowProcessing = K2Node_Event_bShowProcessing;
	Parms.K2Node_DynamicCast_AsWBP_Input_Field = K2Node_DynamicCast_AsWBP_Input_Field;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
