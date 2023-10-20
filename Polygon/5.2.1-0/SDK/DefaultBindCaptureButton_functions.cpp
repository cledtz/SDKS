#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DefaultBindCaptureButton.DefaultBindCaptureButton_C
// (None)

class UClass* UDefaultBindCaptureButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultBindCaptureButton_C");

	return Clss;
}


// DefaultBindCaptureButton_C DefaultBindCaptureButton.Default__DefaultBindCaptureButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefaultBindCaptureButton_C* UDefaultBindCaptureButton_C::GetDefaultObj()
{
	static class UDefaultBindCaptureButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultBindCaptureButton_C*>(UDefaultBindCaptureButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DefaultBindCaptureButton.DefaultBindCaptureButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UDefaultBindCaptureButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DefaultBindCaptureButton_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UDefaultBindCaptureButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DefaultBindCaptureButton.DefaultBindCaptureButton_C.ExecuteUbergraph_DefaultBindCaptureButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBindCapturePrompt*          CallFunc_StartCapture_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UDefaultBindCaptureButton_C::ExecuteUbergraph_DefaultBindCaptureButton(int32 EntryPoint, class UBindCapturePrompt* CallFunc_StartCapture_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DefaultBindCaptureButton_C", "ExecuteUbergraph_DefaultBindCaptureButton");

	Params::UDefaultBindCaptureButton_C_ExecuteUbergraph_DefaultBindCaptureButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_StartCapture_ReturnValue = CallFunc_StartCapture_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


