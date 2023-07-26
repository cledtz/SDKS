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


// Function ToastWidgetDonut.ToastWidgetDonut_C.SetupAnimBindings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Unbind                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UToastWidgetDonut_C::SetupAnimBindings(bool Unbind, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static auto Func = Class->GetFunction("ToastWidgetDonut_C", "SetupAnimBindings");

	Params::UToastWidgetDonut_C_SetupAnimBindings_Params Parms;

	Parms.Unbind = Unbind;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidgetDonut.ToastWidgetDonut_C.ApplyAdditionalStyling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_1                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_2                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_3                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_4                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EFortNotificationType   CallFunc_GetNotificationType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_5                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select_Default_2                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UToastWidgetDonut_C::ApplyAdditionalStyling(class UClass* Temp_class_Variable, bool Temp_bool_Variable, class UClass* Temp_class_Variable_1, class UClass* Temp_class_Variable_2, bool Temp_bool_Variable_1, class UClass* Temp_class_Variable_3, class UClass* Temp_class_Variable_4, enum class EFortNotificationType CallFunc_GetNotificationType_ReturnValue, class UClass* Temp_class_Variable_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UClass* K2Node_Select_Default, class UClass* K2Node_Select_Default_1, bool Temp_bool_Variable_2, class UClass* K2Node_Select_Default_2)
{
	static auto Func = Class->GetFunction("ToastWidgetDonut_C", "ApplyAdditionalStyling");

	Params::UToastWidgetDonut_C_ApplyAdditionalStyling_Params Parms;

	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.Temp_class_Variable_2 = Temp_class_Variable_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_class_Variable_3 = Temp_class_Variable_3;
	Parms.Temp_class_Variable_4 = Temp_class_Variable_4;
	Parms.CallFunc_GetNotificationType_ReturnValue = CallFunc_GetNotificationType_ReturnValue;
	Parms.Temp_class_Variable_5 = Temp_class_Variable_5;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidgetDonut.ToastWidgetDonut_C.SetImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UToastWidgetDonut_C::SetImage()
{
	static auto Func = Class->GetFunction("ToastWidgetDonut_C", "SetImage");

	Params::UToastWidgetDonut_C_SetImage_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidgetDonut.ToastWidgetDonut_C.GetOpenButtonVisibility
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

enum class ESlateVisibility UToastWidgetDonut_C::GetOpenButtonVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_HasAction_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ToastWidgetDonut_C", "GetOpenButtonVisibility");

	Params::UToastWidgetDonut_C_GetOpenButtonVisibility_Params Parms;

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


// Function ToastWidgetDonut.ToastWidgetDonut_C.StartIntro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UToastWidgetDonut_C::StartIntro(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("ToastWidgetDonut_C", "StartIntro");

	Params::UToastWidgetDonut_C_StartIntro_Params Parms;

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidgetDonut.ToastWidgetDonut_C.UpdateToast
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINotification*         Notification                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDescription_ReturnValue                              (ConstParm)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDescription_ReturnValue_1                            (ConstParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class UFortUIFriendNotification*   K2Node_DynamicCast_AsFort_UIFriend_Notification                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAction_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UToastWidgetDonut_C::UpdateToast(class UFortUINotification* Notification, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class FText CallFunc_GetDescription_ReturnValue, bool CallFunc_IsInZone_ReturnValue, class FText CallFunc_GetDescription_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UFortUIFriendNotification* K2Node_DynamicCast_AsFort_UIFriend_Notification, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAction_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("ToastWidgetDonut_C", "UpdateToast");

	Params::UToastWidgetDonut_C_UpdateToast_Params Parms;

	Parms.Notification = Notification;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_GetDescription_ReturnValue_1 = CallFunc_GetDescription_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_DynamicCast_AsFort_UIFriend_Notification = K2Node_DynamicCast_AsFort_UIFriend_Notification;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasAction_ReturnValue = CallFunc_HasAction_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidgetDonut.ToastWidgetDonut_C.HandleOutroFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UToastWidgetDonut_C::HandleOutroFinished()
{
	static auto Func = Class->GetFunction("ToastWidgetDonut_C", "HandleOutroFinished");

	Params::UToastWidgetDonut_C_HandleOutroFinished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidgetDonut.ToastWidgetDonut_C.PlayOutro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UToastWidgetDonut_C::PlayOutro()
{
	static auto Func = Class->GetFunction("ToastWidgetDonut_C", "PlayOutro");

	Params::UToastWidgetDonut_C_PlayOutro_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidgetDonut.ToastWidgetDonut_C.HandleIntroFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UToastWidgetDonut_C::HandleIntroFinished()
{
	static auto Func = Class->GetFunction("ToastWidgetDonut_C", "HandleIntroFinished");

	Params::UToastWidgetDonut_C_HandleIntroFinished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidgetDonut.ToastWidgetDonut_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UToastWidgetDonut_C::Construct()
{
	static auto Func = Class->GetFunction("ToastWidgetDonut_C", "Construct");

	Params::UToastWidgetDonut_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidgetDonut.ToastWidgetDonut_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UToastWidgetDonut_C::Destruct()
{
	static auto Func = Class->GetFunction("ToastWidgetDonut_C", "Destruct");

	Params::UToastWidgetDonut_C_Destruct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidgetDonut.ToastWidgetDonut_C.OnPlayOpenAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:

void UToastWidgetDonut_C::OnPlayOpenAnimation()
{
	static auto Func = Class->GetFunction("ToastWidgetDonut_C", "OnPlayOpenAnimation");

	Params::UToastWidgetDonut_C_OnPlayOpenAnimation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidgetDonut.ToastWidgetDonut_C.OnNotificationSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortUINotification*         Notification                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UToastWidgetDonut_C::OnNotificationSet(class UFortUINotification* Notification)
{
	static auto Func = Class->GetFunction("ToastWidgetDonut_C", "OnNotificationSet");

	Params::UToastWidgetDonut_C_OnNotificationSet_Params Parms;

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidgetDonut.ToastWidgetDonut_C.OnNotificationUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortUINotification*         Notification                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UToastWidgetDonut_C::OnNotificationUpdated(class UFortUINotification* Notification)
{
	static auto Func = Class->GetFunction("ToastWidgetDonut_C", "OnNotificationUpdated");

	Params::UToastWidgetDonut_C_OnNotificationUpdated_Params Parms;

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidgetDonut.ToastWidgetDonut_C.ExecuteUbergraph_ToastWidgetDonut
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDisplayTime_bOutDisplayTimeOverridden                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDisplayTime_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortUINotification*         K2Node_Event_Notification_1                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortUINotification*         K2Node_Event_Notification                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UToastWidgetDonut_C::ExecuteUbergraph_ToastWidgetDonut(int32 EntryPoint, bool CallFunc_GetDisplayTime_bOutDisplayTimeOverridden, float CallFunc_GetDisplayTime_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UFortUINotification* K2Node_Event_Notification_1, class UFortUINotification* K2Node_Event_Notification)
{
	static auto Func = Class->GetFunction("ToastWidgetDonut_C", "ExecuteUbergraph_ToastWidgetDonut");

	Params::UToastWidgetDonut_C_ExecuteUbergraph_ToastWidgetDonut_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDisplayTime_bOutDisplayTimeOverridden = CallFunc_GetDisplayTime_bOutDisplayTimeOverridden;
	Parms.CallFunc_GetDisplayTime_ReturnValue = CallFunc_GetDisplayTime_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_Notification_1 = K2Node_Event_Notification_1;
	Parms.K2Node_Event_Notification = K2Node_Event_Notification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastWidgetDonut.ToastWidgetDonut_C.OnFinishedToast__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UToastWidgetDonut_C::OnFinishedToast__DelegateSignature()
{
	static auto Func = Class->GetFunction("ToastWidgetDonut_C", "OnFinishedToast__DelegateSignature");

	Params::UToastWidgetDonut_C_OnFinishedToast__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
