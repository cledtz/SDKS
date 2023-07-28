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


// Function NPCStatusWidget.NPCStatusWidget_C.EventUpdateStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Health                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Shield                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowShield                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCStatusWidget_C::EventUpdateStatus(double Health, double Shield, bool ShowShield)
{
	static auto Func = Class->GetFunction("NPCStatusWidget_C", "EventUpdateStatus");

	Params::UNPCStatusWidget_C_EventUpdateStatus_Params Parms;

	Parms.Health = Health;
	Parms.Shield = Shield;
	Parms.ShowShield = ShowShield;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusWidget.NPCStatusWidget_C.EventHideStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPCStatusWidget_C::EventHideStatus()
{
	static auto Func = Class->GetFunction("NPCStatusWidget_C", "EventHideStatus");

	Params::UNPCStatusWidget_C_EventHideStatus_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusWidget.NPCStatusWidget_C.ChangeWidgetVisibleDuration
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             StatusWidgetVisibleDuration                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCStatusWidget_C::ChangeWidgetVisibleDuration(double StatusWidgetVisibleDuration)
{
	static auto Func = Class->GetFunction("NPCStatusWidget_C", "ChangeWidgetVisibleDuration");

	Params::UNPCStatusWidget_C_ChangeWidgetVisibleDuration_Params Parms;

	Parms.StatusWidgetVisibleDuration = StatusWidgetVisibleDuration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusWidget.NPCStatusWidget_C.SetKeepVisibilityOn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KeepVisibilityOn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCStatusWidget_C::SetKeepVisibilityOn(bool KeepVisibilityOn)
{
	static auto Func = Class->GetFunction("NPCStatusWidget_C", "SetKeepVisibilityOn");

	Params::UNPCStatusWidget_C_SetKeepVisibilityOn_Params Parms;

	Parms.KeepVisibilityOn = KeepVisibilityOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusWidget.NPCStatusWidget_C.TryCallEventHideByTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPCStatusWidget_C::TryCallEventHideByTimer()
{
	static auto Func = Class->GetFunction("NPCStatusWidget_C", "TryCallEventHideByTimer");

	Params::UNPCStatusWidget_C_TryCallEventHideByTimer_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusWidget.NPCStatusWidget_C.BP_HandlePlaylistExtensionWidgetCreated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EUIExtensionSlot        SlotType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCStatusWidget_C::BP_HandlePlaylistExtensionWidgetCreated(class UUserWidget* Widget, enum class EUIExtensionSlot SlotType)
{
	static auto Func = Class->GetFunction("NPCStatusWidget_C", "BP_HandlePlaylistExtensionWidgetCreated");

	Params::UNPCStatusWidget_C_BP_HandlePlaylistExtensionWidgetCreated_Params Parms;

	Parms.Widget = Widget;
	Parms.SlotType = SlotType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusWidget.NPCStatusWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UNPCStatusWidget_C::Construct()
{
	static auto Func = Class->GetFunction("NPCStatusWidget_C", "Construct");

	Params::UNPCStatusWidget_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusWidget.NPCStatusWidget_C.OnPawnFocused
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPCStatusWidget_C::OnPawnFocused()
{
	static auto Func = Class->GetFunction("NPCStatusWidget_C", "OnPawnFocused");

	Params::UNPCStatusWidget_C_OnPawnFocused_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusWidget.NPCStatusWidget_C.ExecuteUbergraph_NPCStatusWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_StatusWidgetVisibleDuration                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_KeepVisibilityOn                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_Event_Widget                                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EUIExtensionSlot        K2Node_Event_SlotType                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNPCStatusWidgetExtensionBase*K2Node_DynamicCast_AsNPCStatus_Widget_Extension_Base             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_health                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_shield                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ShowShield                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanNAND_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCStatusWidget_C::ExecuteUbergraph_NPCStatusWidget(int32 EntryPoint, double K2Node_CustomEvent_StatusWidgetVisibleDuration, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_CustomEvent_KeepVisibilityOn, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_1, class UUserWidget* K2Node_Event_Widget, enum class EUIExtensionSlot K2Node_Event_SlotType, bool K2Node_SwitchEnum_CmpSuccess, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UNPCStatusWidgetExtensionBase* K2Node_DynamicCast_AsNPCStatus_Widget_Extension_Base, bool K2Node_DynamicCast_bSuccess, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, double K2Node_CustomEvent_health, double K2Node_CustomEvent_shield, bool K2Node_CustomEvent_ShowShield, bool CallFunc_BooleanNAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1)
{
	static auto Func = Class->GetFunction("NPCStatusWidget_C", "ExecuteUbergraph_NPCStatusWidget");

	Params::UNPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_StatusWidgetVisibleDuration = K2Node_CustomEvent_StatusWidgetVisibleDuration;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CustomEvent_KeepVisibilityOn = K2Node_CustomEvent_KeepVisibilityOn;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue_1 = CallFunc_K2_IsValidTimerHandle_ReturnValue_1;
	Parms.K2Node_Event_Widget = K2Node_Event_Widget;
	Parms.K2Node_Event_SlotType = K2Node_Event_SlotType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.K2Node_DynamicCast_AsNPCStatus_Widget_Extension_Base = K2Node_DynamicCast_AsNPCStatus_Widget_Extension_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AddChildToOverlay_ReturnValue = CallFunc_AddChildToOverlay_ReturnValue;
	Parms.K2Node_CustomEvent_health = K2Node_CustomEvent_health;
	Parms.K2Node_CustomEvent_shield = K2Node_CustomEvent_shield;
	Parms.K2Node_CustomEvent_ShowShield = K2Node_CustomEvent_ShowShield;
	Parms.CallFunc_BooleanNAND_ReturnValue = CallFunc_BooleanNAND_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_1 = CallFunc_NotEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1 = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPCStatusWidget.NPCStatusWidget_C.VisibilityChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCStatusWidget_C::VisibilityChanged__DelegateSignature(bool bVisible)
{
	static auto Func = Class->GetFunction("NPCStatusWidget_C", "VisibilityChanged__DelegateSignature");

	Params::UNPCStatusWidget_C_VisibilityChanged__DelegateSignature_Params Parms;

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
