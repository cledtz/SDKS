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


// Function ToastSocialWidget.ToastSocialWidget_C.GetDisplayTime
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               bOutDisplayTimeOverridden                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIFriendNotification*   K2Node_DynamicCast_AsFort_UIFriend_Notification                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDisplayTime_bOutDisplayTimeOverridden                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDisplayTime_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UToastSocialWidget_C::GetDisplayTime(bool* bOutDisplayTimeOverridden, class UFortUIFriendNotification* K2Node_DynamicCast_AsFort_UIFriend_Notification, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetDisplayTime_bOutDisplayTimeOverridden, float CallFunc_GetDisplayTime_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("ToastSocialWidget_C", "GetDisplayTime");

	Params::UToastSocialWidget_C_GetDisplayTime_Params Parms;

	Parms.K2Node_DynamicCast_AsFort_UIFriend_Notification = K2Node_DynamicCast_AsFort_UIFriend_Notification;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDisplayTime_bOutDisplayTimeOverridden = CallFunc_GetDisplayTime_bOutDisplayTimeOverridden;
	Parms.CallFunc_GetDisplayTime_ReturnValue = CallFunc_GetDisplayTime_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bOutDisplayTimeOverridden != nullptr)
		*bOutDisplayTimeOverridden = Parms.bOutDisplayTimeOverridden;

	return Parms.ReturnValue;

}


// Function ToastSocialWidget.ToastSocialWidget_C.GetButtonHoldText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (Parm, OutParm)
// class UFortUIFriendNotification*   K2Node_DynamicCast_AsFort_UIFriend_Notification                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToastSocialWidget_C::GetButtonHoldText(class FText* Text, class UFortUIFriendNotification* K2Node_DynamicCast_AsFort_UIFriend_Notification, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("ToastSocialWidget_C", "GetButtonHoldText");

	Params::UToastSocialWidget_C_GetButtonHoldText_Params Parms;

	Parms.K2Node_DynamicCast_AsFort_UIFriend_Notification = K2Node_DynamicCast_AsFort_UIFriend_Notification;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function ToastSocialWidget.ToastSocialWidget_C.GetButtonCursorText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (Parm, OutParm)
// class UFortUIFriendNotification*   K2Node_DynamicCast_AsFort_UIFriend_Notification                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToastSocialWidget_C::GetButtonCursorText(class FText* Text, class UFortUIFriendNotification* K2Node_DynamicCast_AsFort_UIFriend_Notification, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("ToastSocialWidget_C", "GetButtonCursorText");

	Params::UToastSocialWidget_C_GetButtonCursorText_Params Parms;

	Parms.K2Node_DynamicCast_AsFort_UIFriend_Notification = K2Node_DynamicCast_AsFort_UIFriend_Notification;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function ToastSocialWidget.ToastSocialWidget_C.SetVisibilityForOptionalElements
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        CallFunc_GetInputSwitcherVisibility_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToastSocialWidget_C::SetVisibilityForOptionalElements(enum class ESlateVisibility CallFunc_GetInputSwitcherVisibility_ReturnValue)
{
	static auto Func = Class->GetFunction("ToastSocialWidget_C", "SetVisibilityForOptionalElements");

	Params::UToastSocialWidget_C_SetVisibilityForOptionalElements_Params Parms;

	Parms.CallFunc_GetInputSwitcherVisibility_ReturnValue = CallFunc_GetInputSwitcherVisibility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastSocialWidget.ToastSocialWidget_C.TakeAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAction_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToastSocialWidget_C::TakeAction(bool CallFunc_HasAction_ReturnValue)
{
	static auto Func = Class->GetFunction("ToastSocialWidget_C", "TakeAction");

	Params::UToastSocialWidget_C_TakeAction_Params Parms;

	Parms.CallFunc_HasAction_ReturnValue = CallFunc_HasAction_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastSocialWidget.ToastSocialWidget_C.CleanupBeforeClosing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UToastSocialWidget_C::CleanupBeforeClosing()
{
	static auto Func = Class->GetFunction("ToastSocialWidget_C", "CleanupBeforeClosing");

	Params::UToastSocialWidget_C_CleanupBeforeClosing_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastSocialWidget.ToastSocialWidget_C.GetActiveWidgetIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingTouch_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UToastSocialWidget_C::GetActiveWidgetIndex(bool CallFunc_IsUsingTouch_ReturnValue, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_SelectInt_ReturnValue)
{
	static auto Func = Class->GetFunction("ToastSocialWidget_C", "GetActiveWidgetIndex");

	Params::UToastSocialWidget_C_GetActiveWidgetIndex_Params Parms;

	Parms.CallFunc_IsUsingTouch_ReturnValue = CallFunc_IsUsingTouch_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ToastSocialWidget.ToastSocialWidget_C.GetInputSwitcherVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAction_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UToastSocialWidget_C::GetInputSwitcherVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_HasAction_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ToastSocialWidget_C", "GetInputSwitcherVisibility");

	Params::UToastSocialWidget_C_GetInputSwitcherVisibility_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_HasAction_ReturnValue = CallFunc_HasAction_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ToastSocialWidget.ToastSocialWidget_C.SetupAnimBindings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Unbind                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UToastSocialWidget_C::SetupAnimBindings(bool Unbind, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static auto Func = Class->GetFunction("ToastSocialWidget_C", "SetupAnimBindings");

	Params::UToastSocialWidget_C_SetupAnimBindings_Params Parms;

	Parms.Unbind = Unbind;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastSocialWidget.ToastSocialWidget_C.SetImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UObject>      CallFunc_GetDisplayAsset_ReturnValue                             (ConstParm, UObjectWrapper, HasGetValueTypeHash)
// class UTwitchNotification_C*       K2Node_DynamicCast_AsTwitch_Notification                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToastSocialWidget_C::SetImage(TSoftObjectPtr<class UObject> CallFunc_GetDisplayAsset_ReturnValue, class UTwitchNotification_C* K2Node_DynamicCast_AsTwitch_Notification, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static auto Func = Class->GetFunction("ToastSocialWidget_C", "SetImage");

	Params::UToastSocialWidget_C_SetImage_Params Parms;

	Parms.CallFunc_GetDisplayAsset_ReturnValue = CallFunc_GetDisplayAsset_ReturnValue;
	Parms.K2Node_DynamicCast_AsTwitch_Notification = K2Node_DynamicCast_AsTwitch_Notification;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastSocialWidget.ToastSocialWidget_C.StartIntro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UToastSocialWidget_C::StartIntro(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("ToastSocialWidget_C", "StartIntro");

	Params::UToastSocialWidget_C_StartIntro_Params Parms;

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastSocialWidget.ToastSocialWidget_C.UpdateToast
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINotification*         Notification                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonWidgetSwitcherLegacy* NewLocalVar_3                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDescription_ReturnValue                              (ConstParm)
// class FText                        CallFunc_GetTitle_ReturnValue                                    (ConstParm)
// class FText                        CallFunc_GetButtonHoldText_Text                                  ()
// class FText                        CallFunc_GetButtonCursorText_Text                                ()
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToastSocialWidget_C::UpdateToast(class UFortUINotification* Notification, class UCommonWidgetSwitcherLegacy* NewLocalVar_3, class FText CallFunc_GetDescription_ReturnValue, class FText CallFunc_GetTitle_ReturnValue, class FText CallFunc_GetButtonHoldText_Text, class FText CallFunc_GetButtonCursorText_Text, int32 CallFunc_GetActiveWidgetIndex_ReturnValue)
{
	static auto Func = Class->GetFunction("ToastSocialWidget_C", "UpdateToast");

	Params::UToastSocialWidget_C_UpdateToast_Params Parms;

	Parms.Notification = Notification;
	Parms.NewLocalVar_3 = NewLocalVar_3;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;
	Parms.CallFunc_GetTitle_ReturnValue = CallFunc_GetTitle_ReturnValue;
	Parms.CallFunc_GetButtonHoldText_Text = CallFunc_GetButtonHoldText_Text;
	Parms.CallFunc_GetButtonCursorText_Text = CallFunc_GetButtonCursorText_Text;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastSocialWidget.ToastSocialWidget_C.PlayOutro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UToastSocialWidget_C::PlayOutro()
{
	static auto Func = Class->GetFunction("ToastSocialWidget_C", "PlayOutro");

	Params::UToastSocialWidget_C_PlayOutro_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastSocialWidget.ToastSocialWidget_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UToastSocialWidget_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("ToastSocialWidget_C", "OnMouseEnter");

	Params::UToastSocialWidget_C_OnMouseEnter_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastSocialWidget.ToastSocialWidget_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UToastSocialWidget_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("ToastSocialWidget_C", "OnMouseLeave");

	Params::UToastSocialWidget_C_OnMouseLeave_Params Parms;

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastSocialWidget.ToastSocialWidget_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonLegacy*         Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UToastSocialWidget_C::BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static auto Func = Class->GetFunction("ToastSocialWidget_C", "BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	Params::UToastSocialWidget_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastSocialWidget.ToastSocialWidget_C.HandleOutroFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UToastSocialWidget_C::HandleOutroFinished()
{
	static auto Func = Class->GetFunction("ToastSocialWidget_C", "HandleOutroFinished");

	Params::UToastSocialWidget_C_HandleOutroFinished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastSocialWidget.ToastSocialWidget_C.HandleIntroFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UToastSocialWidget_C::HandleIntroFinished()
{
	static auto Func = Class->GetFunction("ToastSocialWidget_C", "HandleIntroFinished");

	Params::UToastSocialWidget_C_HandleIntroFinished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastSocialWidget.ToastSocialWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UToastSocialWidget_C::Construct()
{
	static auto Func = Class->GetFunction("ToastSocialWidget_C", "Construct");

	Params::UToastSocialWidget_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastSocialWidget.ToastSocialWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UToastSocialWidget_C::Destruct()
{
	static auto Func = Class->GetFunction("ToastSocialWidget_C", "Destruct");

	Params::UToastSocialWidget_C_Destruct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastSocialWidget.ToastSocialWidget_C.OnPlayOpenAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:

void UToastSocialWidget_C::OnPlayOpenAnimation()
{
	static auto Func = Class->GetFunction("ToastSocialWidget_C", "OnPlayOpenAnimation");

	Params::UToastSocialWidget_C_OnPlayOpenAnimation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastSocialWidget.ToastSocialWidget_C.OnCursorModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCursorModeEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToastSocialWidget_C::OnCursorModeChanged(bool bCursorModeEnabled)
{
	static auto Func = Class->GetFunction("ToastSocialWidget_C", "OnCursorModeChanged");

	Params::UToastSocialWidget_C_OnCursorModeChanged_Params Parms;

	Parms.bCursorModeEnabled = bCursorModeEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastSocialWidget.ToastSocialWidget_C.BndEvt__Button_Hold_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonLegacy*         Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UToastSocialWidget_C::BndEvt__Button_Hold_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static auto Func = Class->GetFunction("ToastSocialWidget_C", "BndEvt__Button_Hold_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UToastSocialWidget_C_BndEvt__Button_Hold_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastSocialWidget.ToastSocialWidget_C.OnCancelNotification
// (Event, Protected, BlueprintEvent)
// Parameters:

void UToastSocialWidget_C::OnCancelNotification()
{
	static auto Func = Class->GetFunction("ToastSocialWidget_C", "OnCancelNotification");

	Params::UToastSocialWidget_C_OnCancelNotification_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastSocialWidget.ToastSocialWidget_C.OnTakeActionNotification
// (Event, Protected, BlueprintEvent)
// Parameters:

void UToastSocialWidget_C::OnTakeActionNotification()
{
	static auto Func = Class->GetFunction("ToastSocialWidget_C", "OnTakeActionNotification");

	Params::UToastSocialWidget_C_OnTakeActionNotification_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastSocialWidget.ToastSocialWidget_C.OnUserStartedHoldActionNotification
// (Event, Protected, BlueprintEvent)
// Parameters:

void UToastSocialWidget_C::OnUserStartedHoldActionNotification()
{
	static auto Func = Class->GetFunction("ToastSocialWidget_C", "OnUserStartedHoldActionNotification");

	Params::UToastSocialWidget_C_OnUserStartedHoldActionNotification_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastSocialWidget.ToastSocialWidget_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        NewInputType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToastSocialWidget_C::OnInputModeChanged(enum class ECommonInputType NewInputType)
{
	static auto Func = Class->GetFunction("ToastSocialWidget_C", "OnInputModeChanged");

	Params::UToastSocialWidget_C_OnInputModeChanged_Params Parms;

	Parms.NewInputType = NewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastSocialWidget.ToastSocialWidget_C.OnNotificationSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortUINotification*         Notification                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UToastSocialWidget_C::OnNotificationSet(class UFortUINotification* Notification)
{
	static auto Func = Class->GetFunction("ToastSocialWidget_C", "OnNotificationSet");

	Params::UToastSocialWidget_C_OnNotificationSet_Params Parms;

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastSocialWidget.ToastSocialWidget_C.OnNotificationUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortUINotification*         Notification                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UToastSocialWidget_C::OnNotificationUpdated(class UFortUINotification* Notification)
{
	static auto Func = Class->GetFunction("ToastSocialWidget_C", "OnNotificationUpdated");

	Params::UToastSocialWidget_C_OnNotificationUpdated_Params Parms;

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastSocialWidget.ToastSocialWidget_C.ExecuteUbergraph_ToastSocialWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingTouch_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// class UCommonButtonLegacy*         K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bCursorModeEnabled                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonLegacy*         K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_Event_NewInputType                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINotification*         K2Node_Event_Notification_1                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortUINotification*         K2Node_Event_Notification                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDisplayTime_bOutDisplayTimeOverridden                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDisplayTime_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UToastSocialWidget_C::ExecuteUbergraph_ToastSocialWidget(int32 EntryPoint, bool CallFunc_IsUsingTouch_ReturnValue, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, class UCommonButtonLegacy* K2Node_ComponentBoundEvent_Button_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_bCursorModeEnabled, class UCommonButtonLegacy* K2Node_ComponentBoundEvent_Button, bool CallFunc_BooleanOR_ReturnValue, class UIconTextButton_C* K2Node_Select_Default, enum class ECommonInputType K2Node_Event_NewInputType, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UFortUINotification* K2Node_Event_Notification_1, class UFortUINotification* K2Node_Event_Notification, bool CallFunc_GetDisplayTime_bOutDisplayTimeOverridden, float CallFunc_GetDisplayTime_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("ToastSocialWidget_C", "ExecuteUbergraph_ToastSocialWidget");

	Params::UToastSocialWidget_C_ExecuteUbergraph_ToastSocialWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsUsingTouch_ReturnValue = CallFunc_IsUsingTouch_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_bCursorModeEnabled = K2Node_Event_bCursorModeEnabled;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_NewInputType = K2Node_Event_NewInputType;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_Event_Notification_1 = K2Node_Event_Notification_1;
	Parms.K2Node_Event_Notification = K2Node_Event_Notification;
	Parms.CallFunc_GetDisplayTime_bOutDisplayTimeOverridden = CallFunc_GetDisplayTime_bOutDisplayTimeOverridden;
	Parms.CallFunc_GetDisplayTime_ReturnValue = CallFunc_GetDisplayTime_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
