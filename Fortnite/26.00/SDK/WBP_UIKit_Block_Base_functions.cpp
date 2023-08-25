#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C
// (None)

class UClass* UWBP_UIKit_Block_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_UIKit_Block_Base_C");

	return Clss;
}


// WBP_UIKit_Block_Base_C WBP_UIKit_Block_Base.Default__WBP_UIKit_Block_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_UIKit_Block_Base_C* UWBP_UIKit_Block_Base_C::GetDefaultObj()
{
	static class UWBP_UIKit_Block_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_UIKit_Block_Base_C*>(UWBP_UIKit_Block_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.SetIsSelectable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_Selectable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Block_Base_C::SetIsSelectable(bool Is_Selectable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "SetIsSelectable");

	Params::UWBP_UIKit_Block_Base_C_SetIsSelectable_Params Parms{};

	Parms.Is_Selectable = Is_Selectable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.GetIsSelectable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsSelectable                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Block_Base_C::GetIsSelectable(bool* IsSelectable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "GetIsSelectable");

	Params::UWBP_UIKit_Block_Base_C_GetIsSelectable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsSelectable != nullptr)
		*IsSelectable = Parms.IsSelectable;

}


// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.SetIsLocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_Locked                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Block_Base_C::SetIsLocked(bool Is_Locked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "SetIsLocked");

	Params::UWBP_UIKit_Block_Base_C_SetIsLocked_Params Parms{};

	Parms.Is_Locked = Is_Locked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.GetIsLocked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsLocked                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Block_Base_C::GetIsLocked(bool* IsLocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "GetIsLocked");

	Params::UWBP_UIKit_Block_Base_C_GetIsLocked_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsLocked != nullptr)
		*IsLocked = Parms.IsLocked;

}


// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSelected                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Block_Base_C::SetIsSelected(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "SetIsSelected");

	Params::UWBP_UIKit_Block_Base_C_SetIsSelected_Params Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.GetIsSelected
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsSelected                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Block_Base_C::GetIsSelected(bool* IsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "GetIsSelected");

	Params::UWBP_UIKit_Block_Base_C_GetIsSelected_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsSelected != nullptr)
		*IsSelected = Parms.IsSelected;

}


// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.SetLocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_UIKit_Block_Base_C::SetLocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "SetLocked");

	Params::UWBP_UIKit_Block_Base_C_SetLocked_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_UIKit_Block_Base_C::SetSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "SetSelected");

	Params::UWBP_UIKit_Block_Base_C_SetSelected_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.SetDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_UIKit_Block_Base_C::SetDisabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "SetDisabled");

	Params::UWBP_UIKit_Block_Base_C_SetDisabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.SetEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_UIKit_Block_Base_C::SetEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "SetEnabled");

	Params::UWBP_UIKit_Block_Base_C_SetEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionDeselectedFocused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            AnimTransition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Block_Base_C::TransitionDeselectedFocused(class UWidgetAnimation* AnimTransition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "TransitionDeselectedFocused");

	Params::UWBP_UIKit_Block_Base_C_TransitionDeselectedFocused_Params Parms{};

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionDeselectedIdle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            AnimTransition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Block_Base_C::TransitionDeselectedIdle(class UWidgetAnimation* AnimTransition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "TransitionDeselectedIdle");

	Params::UWBP_UIKit_Block_Base_C_TransitionDeselectedIdle_Params Parms{};

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            AnimTransition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Block_Base_C::TransitionSelected(class UWidgetAnimation* AnimTransition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "TransitionSelected");

	Params::UWBP_UIKit_Block_Base_C_TransitionSelected_Params Parms{};

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            AnimTransition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Block_Base_C::TransitionEnabled(class UWidgetAnimation* AnimTransition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "TransitionEnabled");

	Params::UWBP_UIKit_Block_Base_C_TransitionEnabled_Params Parms{};

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            AnimTransition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Block_Base_C::TransitionDisabled(class UWidgetAnimation* AnimTransition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "TransitionDisabled");

	Params::UWBP_UIKit_Block_Base_C_TransitionDisabled_Params Parms{};

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            AnimTransition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Block_Base_C::TransitionReleased(class UWidgetAnimation* AnimTransition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "TransitionReleased");

	Params::UWBP_UIKit_Block_Base_C_TransitionReleased_Params Parms{};

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            AnimTransition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Block_Base_C::TransitionPressed(class UWidgetAnimation* AnimTransition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "TransitionPressed");

	Params::UWBP_UIKit_Block_Base_C_TransitionPressed_Params Parms{};

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionUnfocused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            AnimTransition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Block_Base_C::TransitionUnfocused(class UWidgetAnimation* AnimTransition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "TransitionUnfocused");

	Params::UWBP_UIKit_Block_Base_C_TransitionUnfocused_Params Parms{};

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionFocused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            AnimTransition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Block_Base_C::TransitionFocused(class UWidgetAnimation* AnimTransition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "TransitionFocused");

	Params::UWBP_UIKit_Block_Base_C_TransitionFocused_Params Parms{};

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            AnimTransition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Block_Base_C::TransitionUnhovered(class UWidgetAnimation* AnimTransition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "TransitionUnhovered");

	Params::UWBP_UIKit_Block_Base_C_TransitionUnhovered_Params Parms{};

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            AnimTransition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Block_Base_C::TransitionHovered(class UWidgetAnimation* AnimTransition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "TransitionHovered");

	Params::UWBP_UIKit_Block_Base_C_TransitionHovered_Params Parms{};

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            TransitionAnimation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             TransitionTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PlayForward                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAnimationForward_PlaybackSpeed_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAnimationReverse_PlaybackSpeed_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Block_Base_C::TransitionState(class UWidgetAnimation* TransitionAnimation, double TransitionTime, bool PlayForward, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, double CallFunc_SafeDivide_ReturnValue, double CallFunc_SelectFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, float CallFunc_PlayAnimationForward_PlaybackSpeed_ImplicitCast, float CallFunc_PlayAnimationReverse_PlaybackSpeed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Block_Base_C", "TransitionState");

	Params::UWBP_UIKit_Block_Base_C_TransitionState_Params Parms{};

	Parms.TransitionAnimation = TransitionAnimation;
	Parms.TransitionTime = TransitionTime;
	Parms.PlayForward = PlayForward;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_PlaybackSpeed_ImplicitCast = CallFunc_PlayAnimationForward_PlaybackSpeed_ImplicitCast;
	Parms.CallFunc_PlayAnimationReverse_PlaybackSpeed_ImplicitCast = CallFunc_PlayAnimationReverse_PlaybackSpeed_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


