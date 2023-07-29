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


// Function DefaultBindCaptureButton.DefaultBindCaptureButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UDefaultBindCaptureButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("DefaultBindCaptureButton_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UDefaultBindCaptureButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DefaultBindCaptureButton.DefaultBindCaptureButton_C.ExecuteUbergraph_DefaultBindCaptureButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBindCapturePrompt*          CallFunc_StartCapture_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UDefaultBindCaptureButton_C::ExecuteUbergraph_DefaultBindCaptureButton(int32 EntryPoint, class UBindCapturePrompt* CallFunc_StartCapture_ReturnValue)
{
	static auto Func = Class->GetFunction("DefaultBindCaptureButton_C", "ExecuteUbergraph_DefaultBindCaptureButton");

	Params::UDefaultBindCaptureButton_C_ExecuteUbergraph_DefaultBindCaptureButton_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_StartCapture_ReturnValue = CallFunc_StartCapture_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
