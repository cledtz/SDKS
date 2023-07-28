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


// Function PowerToastWidget.PowerToastWidget_C.HandleAnimationDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPowerToastWidget_C::HandleAnimationDelay()
{
	static auto Func = Class->GetFunction("PowerToastWidget_C", "HandleAnimationDelay");

	Params::UPowerToastWidget_C_HandleAnimationDelay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerToastWidget.PowerToastWidget_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPowerToastWidget_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("PowerToastWidget_C", "OnMouseEnter");

	Params::UPowerToastWidget_C_OnMouseEnter_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerToastWidget.PowerToastWidget_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPowerToastWidget_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("PowerToastWidget_C", "OnMouseLeave");

	Params::UPowerToastWidget_C_OnMouseLeave_Params Parms;

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerToastWidget.PowerToastWidget_C.WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)
// Parameters:

void UPowerToastWidget_C::WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_0()
{
	static auto Func = Class->GetFunction("PowerToastWidget_C", "WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_0");

	Params::UPowerToastWidget_C_WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_0_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerToastWidget.PowerToastWidget_C.WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)
// Parameters:

void UPowerToastWidget_C::WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_1()
{
	static auto Func = Class->GetFunction("PowerToastWidget_C", "WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_1");

	Params::UPowerToastWidget_C_WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_1_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerToastWidget.PowerToastWidget_C.WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_2
// (BlueprintEvent)
// Parameters:

void UPowerToastWidget_C::WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_2()
{
	static auto Func = Class->GetFunction("PowerToastWidget_C", "WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_2");

	Params::UPowerToastWidget_C_WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_2_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerToastWidget.PowerToastWidget_C.ShowToast
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPowerToastWidget_C::ShowToast()
{
	static auto Func = Class->GetFunction("PowerToastWidget_C", "ShowToast");

	Params::UPowerToastWidget_C_ShowToast_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerToastWidget.PowerToastWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPowerToastWidget_C::Construct()
{
	static auto Func = Class->GetFunction("PowerToastWidget_C", "Construct");

	Params::UPowerToastWidget_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerToastWidget.PowerToastWidget_C.ExecuteUbergraph_PowerToastWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDisplayTime_bOutDisplayTimeOverridden                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDisplayTime_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPowerToastWidget_C::ExecuteUbergraph_PowerToastWidget(int32 EntryPoint, bool CallFunc_GetDisplayTime_bOutDisplayTimeOverridden, float CallFunc_GetDisplayTime_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_IsAnimationPlaying_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue)
{
	static auto Func = Class->GetFunction("PowerToastWidget_C", "ExecuteUbergraph_PowerToastWidget");

	Params::UPowerToastWidget_C_ExecuteUbergraph_PowerToastWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDisplayTime_bOutDisplayTimeOverridden = CallFunc_GetDisplayTime_bOutDisplayTimeOverridden;
	Parms.CallFunc_GetDisplayTime_ReturnValue = CallFunc_GetDisplayTime_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
