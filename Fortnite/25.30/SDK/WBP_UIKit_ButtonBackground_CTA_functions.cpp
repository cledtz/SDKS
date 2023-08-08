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


// Function WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.SetDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_UIKit_ButtonBackground_CTA_C::SetDisabled()
{
	static auto Func = Class->GetFunction("WBP_UIKit_ButtonBackground_CTA_C", "SetDisabled");

	Params::UWBP_UIKit_ButtonBackground_CTA_C_SetDisabled_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.SetEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_UIKit_ButtonBackground_CTA_C::SetEnabled()
{
	static auto Func = Class->GetFunction("WBP_UIKit_ButtonBackground_CTA_C", "SetEnabled");

	Params::UWBP_UIKit_ButtonBackground_CTA_C_SetEnabled_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.SetBorderMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*           Border_Material                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsAdditive                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_ButtonBackground_CTA_C::SetBorderMaterial(class UMaterialInstance* Border_Material, bool IsAdditive)
{
	static auto Func = Class->GetFunction("WBP_UIKit_ButtonBackground_CTA_C", "SetBorderMaterial");

	Params::UWBP_UIKit_ButtonBackground_CTA_C_SetBorderMaterial_Params Parms;

	Parms.Border_Material = Border_Material;
	Parms.IsAdditive = IsAdditive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.SetBackgroundMaterial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*           Brush                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_ButtonBackground_CTA_C::SetBackgroundMaterial(class UMaterialInstance*& Brush, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("WBP_UIKit_ButtonBackground_CTA_C", "SetBackgroundMaterial");

	Params::UWBP_UIKit_ButtonBackground_CTA_C_SetBackgroundMaterial_Params Parms;

	Parms.Brush = Brush;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.TransitionEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            AnimTransition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_ButtonBackground_CTA_C::TransitionEnabled(class UWidgetAnimation* AnimTransition)
{
	static auto Func = Class->GetFunction("WBP_UIKit_ButtonBackground_CTA_C", "TransitionEnabled");

	Params::UWBP_UIKit_ButtonBackground_CTA_C_TransitionEnabled_Params Parms;

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.TransitionDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            AnimTransition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_ButtonBackground_CTA_C::TransitionDisabled(class UWidgetAnimation* AnimTransition)
{
	static auto Func = Class->GetFunction("WBP_UIKit_ButtonBackground_CTA_C", "TransitionDisabled");

	Params::UWBP_UIKit_ButtonBackground_CTA_C_TransitionDisabled_Params Parms;

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.TransitionReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            AnimTransition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_ButtonBackground_CTA_C::TransitionReleased(class UWidgetAnimation* AnimTransition)
{
	static auto Func = Class->GetFunction("WBP_UIKit_ButtonBackground_CTA_C", "TransitionReleased");

	Params::UWBP_UIKit_ButtonBackground_CTA_C_TransitionReleased_Params Parms;

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.TransitionPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            AnimTransition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_ButtonBackground_CTA_C::TransitionPressed(class UWidgetAnimation* AnimTransition)
{
	static auto Func = Class->GetFunction("WBP_UIKit_ButtonBackground_CTA_C", "TransitionPressed");

	Params::UWBP_UIKit_ButtonBackground_CTA_C_TransitionPressed_Params Parms;

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.TransitionUnfocused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            AnimTransition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_ButtonBackground_CTA_C::TransitionUnfocused(class UWidgetAnimation* AnimTransition)
{
	static auto Func = Class->GetFunction("WBP_UIKit_ButtonBackground_CTA_C", "TransitionUnfocused");

	Params::UWBP_UIKit_ButtonBackground_CTA_C_TransitionUnfocused_Params Parms;

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.TransitionFocused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            AnimTransition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_ButtonBackground_CTA_C::TransitionFocused(class UWidgetAnimation* AnimTransition, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static auto Func = Class->GetFunction("WBP_UIKit_ButtonBackground_CTA_C", "TransitionFocused");

	Params::UWBP_UIKit_ButtonBackground_CTA_C_TransitionFocused_Params Parms;

	Parms.AnimTransition = AnimTransition;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.TransitionUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            AnimTransition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_ButtonBackground_CTA_C::TransitionUnhovered(class UWidgetAnimation* AnimTransition)
{
	static auto Func = Class->GetFunction("WBP_UIKit_ButtonBackground_CTA_C", "TransitionUnhovered");

	Params::UWBP_UIKit_ButtonBackground_CTA_C_TransitionUnhovered_Params Parms;

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.TransitionHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            AnimTransition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_ButtonBackground_CTA_C::TransitionHovered(class UWidgetAnimation* AnimTransition)
{
	static auto Func = Class->GetFunction("WBP_UIKit_ButtonBackground_CTA_C", "TransitionHovered");

	Params::UWBP_UIKit_ButtonBackground_CTA_C_TransitionHovered_Params Parms;

	Parms.AnimTransition = AnimTransition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_ButtonBackground_CTA_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("WBP_UIKit_ButtonBackground_CTA_C", "PreConstruct");

	Params::UWBP_UIKit_ButtonBackground_CTA_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.ExecuteUbergraph_WBP_UIKit_ButtonBackground_CTA
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_ButtonBackground_CTA_C::ExecuteUbergraph_WBP_UIKit_ButtonBackground_CTA(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("WBP_UIKit_ButtonBackground_CTA_C", "ExecuteUbergraph_WBP_UIKit_ButtonBackground_CTA");

	Params::UWBP_UIKit_ButtonBackground_CTA_C_ExecuteUbergraph_WBP_UIKit_ButtonBackground_CTA_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
