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


// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.SetupAnimBindings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Unbind                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBattlePassPageUnlockedToast_C::SetupAnimBindings(bool Unbind, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static auto Func = Class->GetFunction("BattlePassPageUnlockedToast_C", "SetupAnimBindings");

	Params::UBattlePassPageUnlockedToast_C_SetupAnimBindings_Params Parms;

	Parms.Unbind = Unbind;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.ApplyAdditionalStyling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      NewLocalVar_2                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      NewLocalVar_1                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EFortNotificationType   CallFunc_GetNotificationType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassPageUnlockedToast_C::ApplyAdditionalStyling(class UClass* NewLocalVar_2, class UClass* NewLocalVar_1, class UClass* NewLocalVar_0, enum class EFortNotificationType CallFunc_GetNotificationType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("BattlePassPageUnlockedToast_C", "ApplyAdditionalStyling");

	Params::UBattlePassPageUnlockedToast_C_ApplyAdditionalStyling_Params Parms;

	Parms.NewLocalVar_2 = NewLocalVar_2;
	Parms.NewLocalVar_1 = NewLocalVar_1;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_GetNotificationType_ReturnValue = CallFunc_GetNotificationType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.SetImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UObject>      CallFunc_GetDisplayAsset_ReturnValue                             (ConstParm, UObjectWrapper, HasGetValueTypeHash)
// class UTwitchNotification_C*       K2Node_DynamicCast_AsTwitch_Notification                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassPageUnlockedToast_C::SetImage(TSoftObjectPtr<class UObject> CallFunc_GetDisplayAsset_ReturnValue, class UTwitchNotification_C* K2Node_DynamicCast_AsTwitch_Notification, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static auto Func = Class->GetFunction("BattlePassPageUnlockedToast_C", "SetImage");

	Params::UBattlePassPageUnlockedToast_C_SetImage_Params Parms;

	Parms.CallFunc_GetDisplayAsset_ReturnValue = CallFunc_GetDisplayAsset_ReturnValue;
	Parms.K2Node_DynamicCast_AsTwitch_Notification = K2Node_DynamicCast_AsTwitch_Notification;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.GetOpenButtonVisibility
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

enum class ESlateVisibility UBattlePassPageUnlockedToast_C::GetOpenButtonVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_HasAction_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BattlePassPageUnlockedToast_C", "GetOpenButtonVisibility");

	Params::UBattlePassPageUnlockedToast_C_GetOpenButtonVisibility_Params Parms;

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


// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.StartIntro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBattlePassPageUnlockedToast_C::StartIntro(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("BattlePassPageUnlockedToast_C", "StartIntro");

	Params::UBattlePassPageUnlockedToast_C_StartIntro_Params Parms;

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.UpdateToast
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINotification*         Notification                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDescription_ReturnValue                              (ConstParm)
// class FText                        CallFunc_GetTitle_ReturnValue                                    (ConstParm)
// enum class ESlateVisibility        CallFunc_GetOpenButtonVisibility_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassPageUnlockedToast_C::UpdateToast(class UFortUINotification* Notification, class FText CallFunc_GetDescription_ReturnValue, class FText CallFunc_GetTitle_ReturnValue, enum class ESlateVisibility CallFunc_GetOpenButtonVisibility_ReturnValue)
{
	static auto Func = Class->GetFunction("BattlePassPageUnlockedToast_C", "UpdateToast");

	Params::UBattlePassPageUnlockedToast_C_UpdateToast_Params Parms;

	Parms.Notification = Notification;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;
	Parms.CallFunc_GetTitle_ReturnValue = CallFunc_GetTitle_ReturnValue;
	Parms.CallFunc_GetOpenButtonVisibility_ReturnValue = CallFunc_GetOpenButtonVisibility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.HandleOutroFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattlePassPageUnlockedToast_C::HandleOutroFinished()
{
	static auto Func = Class->GetFunction("BattlePassPageUnlockedToast_C", "HandleOutroFinished");

	Params::UBattlePassPageUnlockedToast_C_HandleOutroFinished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.PlayOutro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattlePassPageUnlockedToast_C::PlayOutro()
{
	static auto Func = Class->GetFunction("BattlePassPageUnlockedToast_C", "PlayOutro");

	Params::UBattlePassPageUnlockedToast_C_PlayOutro_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBattlePassPageUnlockedToast_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("BattlePassPageUnlockedToast_C", "OnMouseEnter");

	Params::UBattlePassPageUnlockedToast_C_OnMouseEnter_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBattlePassPageUnlockedToast_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("BattlePassPageUnlockedToast_C", "OnMouseLeave");

	Params::UBattlePassPageUnlockedToast_C_OnMouseLeave_Params Parms;

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.HandleIntroFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattlePassPageUnlockedToast_C::HandleIntroFinished()
{
	static auto Func = Class->GetFunction("BattlePassPageUnlockedToast_C", "HandleIntroFinished");

	Params::UBattlePassPageUnlockedToast_C_HandleIntroFinished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBattlePassPageUnlockedToast_C::Construct()
{
	static auto Func = Class->GetFunction("BattlePassPageUnlockedToast_C", "Construct");

	Params::UBattlePassPageUnlockedToast_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBattlePassPageUnlockedToast_C::Destruct()
{
	static auto Func = Class->GetFunction("BattlePassPageUnlockedToast_C", "Destruct");

	Params::UBattlePassPageUnlockedToast_C_Destruct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnPlayOpenAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassPageUnlockedToast_C::OnPlayOpenAnimation()
{
	static auto Func = Class->GetFunction("BattlePassPageUnlockedToast_C", "OnPlayOpenAnimation");

	Params::UBattlePassPageUnlockedToast_C_OnPlayOpenAnimation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnNotificationSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortUINotification*         Notification                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBattlePassPageUnlockedToast_C::OnNotificationSet(class UFortUINotification* Notification)
{
	static auto Func = Class->GetFunction("BattlePassPageUnlockedToast_C", "OnNotificationSet");

	Params::UBattlePassPageUnlockedToast_C_OnNotificationSet_Params Parms;

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnNotificationUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortUINotification*         Notification                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBattlePassPageUnlockedToast_C::OnNotificationUpdated(class UFortUINotification* Notification)
{
	static auto Func = Class->GetFunction("BattlePassPageUnlockedToast_C", "OnNotificationUpdated");

	Params::UBattlePassPageUnlockedToast_C_OnNotificationUpdated_Params Parms;

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.ExecuteUbergraph_BattlePassPageUnlockedToast
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
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortUINotification*         K2Node_Event_Notification_1                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortUINotification*         K2Node_Event_Notification                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBattlePassPageUnlockedToast_C::ExecuteUbergraph_BattlePassPageUnlockedToast(int32 EntryPoint, bool CallFunc_GetDisplayTime_bOutDisplayTimeOverridden, float CallFunc_GetDisplayTime_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UFortUINotification* K2Node_Event_Notification_1, class UFortUINotification* K2Node_Event_Notification)
{
	static auto Func = Class->GetFunction("BattlePassPageUnlockedToast_C", "ExecuteUbergraph_BattlePassPageUnlockedToast");

	Params::UBattlePassPageUnlockedToast_C_ExecuteUbergraph_BattlePassPageUnlockedToast_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDisplayTime_bOutDisplayTimeOverridden = CallFunc_GetDisplayTime_bOutDisplayTimeOverridden;
	Parms.CallFunc_GetDisplayTime_ReturnValue = CallFunc_GetDisplayTime_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_Notification_1 = K2Node_Event_Notification_1;
	Parms.K2Node_Event_Notification = K2Node_Event_Notification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnFinishedToast__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattlePassPageUnlockedToast_C::OnFinishedToast__DelegateSignature()
{
	static auto Func = Class->GetFunction("BattlePassPageUnlockedToast_C", "OnFinishedToast__DelegateSignature");

	Params::UBattlePassPageUnlockedToast_C_OnFinishedToast__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
