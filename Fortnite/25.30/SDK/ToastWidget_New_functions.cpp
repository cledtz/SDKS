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


// Function ToastWidget_New.ToastWidget_New_C.GetDisplayTime
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               bOutDisplayTimeOverridden                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDisplayTime_bOutDisplayTimeOverridden                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDisplayTime_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIFriendNotification*   K2Node_DynamicCast_AsFort_UIFriend_Notification                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UToastWidget_New_C::GetDisplayTime(bool* bOutDisplayTimeOverridden, bool CallFunc_GetDisplayTime_bOutDisplayTimeOverridden, float CallFunc_GetDisplayTime_ReturnValue, class UFortUIFriendNotification* K2Node_DynamicCast_AsFort_UIFriend_Notification, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("ToastWidget_New_C", "GetDisplayTime");

	Params::UToastWidget_New_C_GetDisplayTime_Params Parms;

	Parms.CallFunc_GetDisplayTime_bOutDisplayTimeOverridden = CallFunc_GetDisplayTime_bOutDisplayTimeOverridden;
	Parms.CallFunc_GetDisplayTime_ReturnValue = CallFunc_GetDisplayTime_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_UIFriend_Notification = K2Node_DynamicCast_AsFort_UIFriend_Notification;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bOutDisplayTimeOverridden != nullptr)
		*bOutDisplayTimeOverridden = Parms.bOutDisplayTimeOverridden;

	return Parms.ReturnValue;

}


// Function ToastWidget_New.ToastWidget_New_C.SetupAnimBindings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Unbind                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UToastWidget_New_C::SetupAnimBindings(bool Unbind, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static auto Func = Class->GetFunction("ToastWidget_New_C", "SetupAnimBindings");

	Params::UToastWidget_New_C_SetupAnimBindings_Params Parms;

	Parms.Unbind = Unbind;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidget_New.ToastWidget_New_C.SetImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UObject>      CallFunc_GetDisplayAsset_ReturnValue                             (ConstParm, UObjectWrapper, HasGetValueTypeHash)
// class UTwitchNotification_C*       K2Node_DynamicCast_AsTwitch_Notification                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToastWidget_New_C::SetImage(TSoftObjectPtr<class UObject> CallFunc_GetDisplayAsset_ReturnValue, class UTwitchNotification_C* K2Node_DynamicCast_AsTwitch_Notification, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static auto Func = Class->GetFunction("ToastWidget_New_C", "SetImage");

	Params::UToastWidget_New_C_SetImage_Params Parms;

	Parms.CallFunc_GetDisplayAsset_ReturnValue = CallFunc_GetDisplayAsset_ReturnValue;
	Parms.K2Node_DynamicCast_AsTwitch_Notification = K2Node_DynamicCast_AsTwitch_Notification;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidget_New.ToastWidget_New_C.GetOpenButtonVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAction_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UToastWidget_New_C::GetOpenButtonVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_HasAction_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ToastWidget_New_C", "GetOpenButtonVisibility");

	Params::UToastWidget_New_C_GetOpenButtonVisibility_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_HasAction_ReturnValue = CallFunc_HasAction_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ToastWidget_New.ToastWidget_New_C.StartIntro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UToastWidget_New_C::StartIntro(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("ToastWidget_New_C", "StartIntro");

	Params::UToastWidget_New_C_StartIntro_Params Parms;

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidget_New.ToastWidget_New_C.UpdateToast
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINotification*         Notification                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDescription_ReturnValue                              (ConstParm)
// class UFortUIFriendNotification*   K2Node_DynamicCast_AsFort_UIFriend_Notification                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAction_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDescription_ReturnValue_1                            (ConstParm)
// class FText                        CallFunc_GetTitle_ReturnValue                                    (ConstParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class UFortGlobalUIContext*        CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// enum class ESlateVisibility        CallFunc_GetOpenButtonVisibility_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToastWidget_New_C::UpdateToast(class UFortUINotification* Notification, class FText CallFunc_GetDescription_ReturnValue, class UFortUIFriendNotification* K2Node_DynamicCast_AsFort_UIFriend_Notification, bool K2Node_DynamicCast_bSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_HasAction_ReturnValue, class FText CallFunc_GetDescription_ReturnValue_1, class FText CallFunc_GetTitle_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_IsInZone_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, enum class ESlateVisibility CallFunc_GetOpenButtonVisibility_ReturnValue)
{
	static auto Func = Class->GetFunction("ToastWidget_New_C", "UpdateToast");

	Params::UToastWidget_New_C_UpdateToast_Params Parms;

	Parms.Notification = Notification;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_UIFriend_Notification = K2Node_DynamicCast_AsFort_UIFriend_Notification;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_HasAction_ReturnValue = CallFunc_HasAction_ReturnValue;
	Parms.CallFunc_GetDescription_ReturnValue_1 = CallFunc_GetDescription_ReturnValue_1;
	Parms.CallFunc_GetTitle_ReturnValue = CallFunc_GetTitle_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetOpenButtonVisibility_ReturnValue = CallFunc_GetOpenButtonVisibility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidget_New.ToastWidget_New_C.PlayOutro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UToastWidget_New_C::PlayOutro()
{
	static auto Func = Class->GetFunction("ToastWidget_New_C", "PlayOutro");

	Params::UToastWidget_New_C_PlayOutro_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidget_New.ToastWidget_New_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UToastWidget_New_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("ToastWidget_New_C", "OnMouseEnter");

	Params::UToastWidget_New_C_OnMouseEnter_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidget_New.ToastWidget_New_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UToastWidget_New_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("ToastWidget_New_C", "OnMouseLeave");

	Params::UToastWidget_New_C_OnMouseLeave_Params Parms;

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidget_New.ToastWidget_New_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonLegacy*         Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UToastWidget_New_C::BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static auto Func = Class->GetFunction("ToastWidget_New_C", "BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	Params::UToastWidget_New_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidget_New.ToastWidget_New_C.HandleOutroFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UToastWidget_New_C::HandleOutroFinished()
{
	static auto Func = Class->GetFunction("ToastWidget_New_C", "HandleOutroFinished");

	Params::UToastWidget_New_C_HandleOutroFinished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidget_New.ToastWidget_New_C.HandleIntroFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UToastWidget_New_C::HandleIntroFinished()
{
	static auto Func = Class->GetFunction("ToastWidget_New_C", "HandleIntroFinished");

	Params::UToastWidget_New_C_HandleIntroFinished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidget_New.ToastWidget_New_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UToastWidget_New_C::Construct()
{
	static auto Func = Class->GetFunction("ToastWidget_New_C", "Construct");

	Params::UToastWidget_New_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidget_New.ToastWidget_New_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UToastWidget_New_C::Destruct()
{
	static auto Func = Class->GetFunction("ToastWidget_New_C", "Destruct");

	Params::UToastWidget_New_C_Destruct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidget_New.ToastWidget_New_C.OnPlayOpenAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:

void UToastWidget_New_C::OnPlayOpenAnimation()
{
	static auto Func = Class->GetFunction("ToastWidget_New_C", "OnPlayOpenAnimation");

	Params::UToastWidget_New_C_OnPlayOpenAnimation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidget_New.ToastWidget_New_C.OnNotificationSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortUINotification*         Notification                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UToastWidget_New_C::OnNotificationSet(class UFortUINotification* Notification)
{
	static auto Func = Class->GetFunction("ToastWidget_New_C", "OnNotificationSet");

	Params::UToastWidget_New_C_OnNotificationSet_Params Parms;

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidget_New.ToastWidget_New_C.OnNotificationUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortUINotification*         Notification                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UToastWidget_New_C::OnNotificationUpdated(class UFortUINotification* Notification)
{
	static auto Func = Class->GetFunction("ToastWidget_New_C", "OnNotificationUpdated");

	Params::UToastWidget_New_C_OnNotificationUpdated_Params Parms;

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidget_New.ToastWidget_New_C.ExecuteUbergraph_ToastWidget_New
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDisplayTime_bOutDisplayTimeOverridden                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDisplayTime_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// class UCommonButtonLegacy*         K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortUINotification*         K2Node_Event_Notification_1                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortUINotification*         K2Node_Event_Notification                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAction_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToastWidget_New_C::ExecuteUbergraph_ToastWidget_New(int32 EntryPoint, bool CallFunc_GetDisplayTime_bOutDisplayTimeOverridden, float CallFunc_GetDisplayTime_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, class UCommonButtonLegacy* K2Node_ComponentBoundEvent_Button, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UFortUINotification* K2Node_Event_Notification_1, class UFortUINotification* K2Node_Event_Notification, bool CallFunc_HasAction_ReturnValue)
{
	static auto Func = Class->GetFunction("ToastWidget_New_C", "ExecuteUbergraph_ToastWidget_New");

	Params::UToastWidget_New_C_ExecuteUbergraph_ToastWidget_New_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDisplayTime_bOutDisplayTimeOverridden = CallFunc_GetDisplayTime_bOutDisplayTimeOverridden;
	Parms.CallFunc_GetDisplayTime_ReturnValue = CallFunc_GetDisplayTime_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_Notification_1 = K2Node_Event_Notification_1;
	Parms.K2Node_Event_Notification = K2Node_Event_Notification;
	Parms.CallFunc_HasAction_ReturnValue = CallFunc_HasAction_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidget_New.ToastWidget_New_C.OnFinishedToast__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UToastWidget_New_C::OnFinishedToast__DelegateSignature()
{
	static auto Func = Class->GetFunction("ToastWidget_New_C", "OnFinishedToast__DelegateSignature");

	Params::UToastWidget_New_C_OnFinishedToast__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
