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


// Function StatusWidget.StatusWidget_C.SetContinueButtonText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        ContinueText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UStatusWidget_C::SetContinueButtonText(class FText& ContinueText)
{
	static auto Func = Class->GetFunction("StatusWidget_C", "SetContinueButtonText");

	Params::UStatusWidget_C_SetContinueButtonText_Params Parms;

	Parms.ContinueText = ContinueText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusWidget.StatusWidget_C.SetQuitButtonText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        QuitText                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UStatusWidget_C::SetQuitButtonText(class FText& QuitText)
{
	static auto Func = Class->GetFunction("StatusWidget_C", "SetQuitButtonText");

	Params::UStatusWidget_C_SetQuitButtonText_Params Parms;

	Parms.QuitText = QuitText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusWidget.StatusWidget_C.ExecuteUbergraph_StatusWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button_1                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_QuitText                                            (ConstParm)
// class FText                        K2Node_Event_ContinueText                                        (ConstParm)

void UStatusWidget_C::ExecuteUbergraph_StatusWidget(int32 EntryPoint, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button_1, bool K2Node_DynamicCast_bSuccess_1, class FText K2Node_Event_QuitText, class FText K2Node_Event_ContinueText)
{
	static auto Func = Class->GetFunction("StatusWidget_C", "ExecuteUbergraph_StatusWidget");

	Params::UStatusWidget_C_ExecuteUbergraph_StatusWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button_1 = K2Node_DynamicCast_AsIcon_Text_Button_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_QuitText = K2Node_Event_QuitText;
	Parms.K2Node_Event_ContinueText = K2Node_Event_ContinueText;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
