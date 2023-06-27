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


// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnUpdatedProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadingSubGameContentModal_C::OnUpdatedProgress(float Percent)
{
	static auto Func = Class->GetFunction("LoadingSubGameContentModal_C", "OnUpdatedProgress");

	Params::ULoadingSubGameContentModal_C_OnUpdatedProgress_Params Parms;

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULoadingSubGameContentModal_C::OnInitialized()
{
	static auto Func = Class->GetFunction("LoadingSubGameContentModal_C", "OnInitialized");

	Params::ULoadingSubGameContentModal_C_OnInitialized_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.SetCancelButtonText
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ULoadingSubGameContentModal_C::SetCancelButtonText(class FText& InText)
{
	static auto Func = Class->GetFunction("LoadingSubGameContentModal_C", "SetCancelButtonText");

	Params::ULoadingSubGameContentModal_C_SetCancelButtonText_Params Parms;

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULoadingSubGameContentModal_C::BP_OnActivated()
{
	static auto Func = Class->GetFunction("LoadingSubGameContentModal_C", "BP_OnActivated");

	Params::ULoadingSubGameContentModal_C_BP_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULoadingSubGameContentModal_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto Func = Class->GetFunction("LoadingSubGameContentModal_C", "OnAnimationFinished");

	Params::ULoadingSubGameContentModal_C_OnAnimationFinished_Params Parms;

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.ExecuteUbergraph_LoadingSubGameContentModal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_InText                                              (ConstParm)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Percent                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Event_Animation                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_AsPercent_Float_ReturnValue                             ()
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadingSubGameContentModal_C::ExecuteUbergraph_LoadingSubGameContentModal(int32 EntryPoint, class FText K2Node_Event_InText, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float K2Node_Event_Percent, class UWidgetAnimation* K2Node_Event_Animation, class FText CallFunc_AsPercent_Float_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast)
{
	static auto Func = Class->GetFunction("LoadingSubGameContentModal_C", "ExecuteUbergraph_LoadingSubGameContentModal");

	Params::ULoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InText = K2Node_Event_InText;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_Percent = K2Node_Event_Percent;
	Parms.K2Node_Event_Animation = K2Node_Event_Animation;
	Parms.CallFunc_AsPercent_Float_ReturnValue = CallFunc_AsPercent_Float_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
