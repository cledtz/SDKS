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


// Function EventModeUI.FocusButton.HandleEventModeFocusingChanged
// (Final, Native, Private)
// Parameters:
// bool                               bIsEventModeFocusing                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFocusButton::HandleEventModeFocusingChanged(bool bIsEventModeFocusing)
{
	static auto Func = Class->GetFunction("FocusButton", "HandleEventModeFocusingChanged");

	Params::UFocusButton_HandleEventModeFocusingChanged_Params Parms;

	Parms.bIsEventModeFocusing = bIsEventModeFocusing;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EventModeUI.FocusButton.HandleCanUseEventModeFocusChanged
// (Final, Native, Private)
// Parameters:
// bool                               bCanUseEventModeFocus                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFocusButton::HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus)
{
	static auto Func = Class->GetFunction("FocusButton", "HandleCanUseEventModeFocusChanged");

	Params::UFocusButton_HandleCanUseEventModeFocusChanged_Params Parms;

	Parms.bCanUseEventModeFocus = bCanUseEventModeFocus;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EventModeUI.FortEventModeEmotesWidget.OnFocusStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsFocusing                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventModeEmotesWidget::OnFocusStateChanged(bool bIsFocusing)
{
	static auto Func = Class->GetFunction("FortEventModeEmotesWidget", "OnFocusStateChanged");

	Params::UFortEventModeEmotesWidget_OnFocusStateChanged_Params Parms;

	Parms.bIsFocusing = bIsFocusing;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventModeUI.FortEventModeEmotesWidget.OnFocusAvailableChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsFocusAvailable                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventModeEmotesWidget::OnFocusAvailableChanged(bool bIsFocusAvailable)
{
	static auto Func = Class->GetFunction("FortEventModeEmotesWidget", "OnFocusAvailableChanged");

	Params::UFortEventModeEmotesWidget_OnFocusAvailableChanged_Params Parms;

	Parms.bIsFocusAvailable = bIsFocusAvailable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventModeUI.FortMobileActionButtonBehavior_Focus.HandleEventModeFocusingChanged
// (Final, Native, Private)
// Parameters:
// bool                               bIsEventModeFocusing                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMobileActionButtonBehavior_Focus::HandleEventModeFocusingChanged(bool bIsEventModeFocusing)
{
	static auto Func = Class->GetFunction("FortMobileActionButtonBehavior_Focus", "HandleEventModeFocusingChanged");

	Params::UFortMobileActionButtonBehavior_Focus_HandleEventModeFocusingChanged_Params Parms;

	Parms.bIsEventModeFocusing = bIsEventModeFocusing;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EventModeUI.FortMobileActionButtonBehavior_Focus.HandleCanUseEventModeFocusChanged
// (Final, Native, Private)
// Parameters:
// bool                               bCanUseEventModeFocus                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMobileActionButtonBehavior_Focus::HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus)
{
	static auto Func = Class->GetFunction("FortMobileActionButtonBehavior_Focus", "HandleCanUseEventModeFocusChanged");

	Params::UFortMobileActionButtonBehavior_Focus_HandleCanUseEventModeFocusChanged_Params Parms;

	Parms.bCanUseEventModeFocus = bCanUseEventModeFocus;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
