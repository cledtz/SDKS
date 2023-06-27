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


// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.UpdateCanOpenSelector
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InPlayerAbleToOpenSelector                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAugmentSelectionAvailable_IsEnabled                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Augment_SelectionTimer_C::UpdateCanOpenSelector(bool InPlayerAbleToOpenSelector, bool CallFunc_IsAugmentSelectionAvailable_IsEnabled)
{
	static auto Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "UpdateCanOpenSelector");

	Params::UWBP_Augment_SelectionTimer_C_UpdateCanOpenSelector_Params Parms;

	Parms.InPlayerAbleToOpenSelector = InPlayerAbleToOpenSelector;
	Parms.CallFunc_IsAugmentSelectionAvailable_IsEnabled = CallFunc_IsAugmentSelectionAvailable_IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnHideTimerEventFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Augment_SelectionTimer_C::OnHideTimerEventFinished()
{
	static auto Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "OnHideTimerEventFinished");

	Params::UWBP_Augment_SelectionTimer_C_OnHideTimerEventFinished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.StartHideTimerEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsUsingTouch_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetValueAsInteger_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Augment_SelectionTimer_C::StartHideTimerEvent(bool CallFunc_IsUsingTouch_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetValueAsInteger_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static auto Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "StartHideTimerEvent");

	Params::UWBP_Augment_SelectionTimer_C_StartHideTimerEvent_Params Parms;

	Parms.CallFunc_IsUsingTouch_ReturnValue = CallFunc_IsUsingTouch_ReturnValue;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetValueAsInteger_ReturnValue = CallFunc_GetValueAsInteger_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnNumPendingAugmentsToGrantUpdated
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumPendingAugmentsToGrant                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DidValueIncrease                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// bool                               CallFunc_InEditorOrPIE_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_IsAugmentSelectionAvailable_IsEnabled                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            ()

void UWBP_Augment_SelectionTimer_C::OnNumPendingAugmentsToGrantUpdated(int32 NumPendingAugmentsToGrant, bool DidValueIncrease, bool Temp_bool_Variable, class FText Temp_text_Variable, bool CallFunc_InEditorOrPIE_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_IsAugmentSelectionAvailable_IsEnabled, class FText CallFunc_Format_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_2, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "OnNumPendingAugmentsToGrantUpdated");

	Params::UWBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated_Params Parms;

	Parms.NumPendingAugmentsToGrant = NumPendingAugmentsToGrant;
	Parms.DidValueIncrease = DidValueIncrease;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_InEditorOrPIE_ReturnValue = CallFunc_InEditorOrPIE_ReturnValue;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsAugmentSelectionAvailable_IsEnabled = CallFunc_IsAugmentSelectionAvailable_IsEnabled;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.SetMobileVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue_1                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue_2                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasChild_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_1                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerticalAlignment      Temp_byte_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerticalAlignment      Temp_byte_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue_1                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingTouch_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerticalAlignment      K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_8                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default_9                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_Select_Default_10                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default_11                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Augment_SelectionTimer_C::SetMobileVisuals(float Temp_real_Variable, bool Temp_bool_Variable, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, bool Temp_bool_Variable_1, const struct FVector2D& Temp_struct_Variable_2, const struct FVector2D& Temp_struct_Variable_3, bool Temp_bool_Variable_2, const struct FVector2D& Temp_struct_Variable_4, const struct FVector2D& Temp_struct_Variable_5, float Temp_real_Variable_1, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, bool Temp_bool_Variable_4, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_5, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_2, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_4, bool CallFunc_HasChild_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_5, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, bool Temp_bool_Variable_6, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, bool Temp_bool_Variable_7, const struct FVector2D& Temp_struct_Variable_6, bool CallFunc_HasChild_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, const struct FVector2D& Temp_struct_Variable_7, bool Temp_bool_Variable_8, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, bool Temp_bool_Variable_9, enum class EVerticalAlignment Temp_byte_Variable_10, bool CallFunc_IsMobileGame_ReturnValue, enum class EVerticalAlignment Temp_byte_Variable_11, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, bool Temp_bool_Variable_10, float Temp_real_Variable_2, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue_1, float Temp_real_Variable_3, bool Temp_bool_Variable_11, bool CallFunc_IsUsingTouch_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, float K2Node_Select_Default, enum class EVerticalAlignment K2Node_Select_Default_1, const struct FMargin& K2Node_MakeStruct_Margin, enum class ESlateVisibility K2Node_Select_Default_2, const struct FVector2D& K2Node_Select_Default_3, enum class ESlateVisibility K2Node_Select_Default_4, enum class ESlateVisibility K2Node_Select_Default_5, enum class ESlateVisibility K2Node_Select_Default_6, enum class ESlateVisibility K2Node_Select_Default_7, float K2Node_Select_Default_8, const struct FVector2D& K2Node_Select_Default_9, const struct FMargin& K2Node_MakeStruct_Margin_1, const struct FVector2D& K2Node_Select_Default_10, const struct FVector2D& K2Node_Select_Default_11)
{
	static auto Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "SetMobileVisuals");

	Params::UWBP_Augment_SelectionTimer_C_SetMobileVisuals_Params Parms;

	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue_1 = CallFunc_SlotAsOverlaySlot_ReturnValue_1;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue_2 = CallFunc_SlotAsOverlaySlot_ReturnValue_2;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.CallFunc_HasChild_ReturnValue = CallFunc_HasChild_ReturnValue;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.CallFunc_AddChildToOverlay_ReturnValue = CallFunc_AddChildToOverlay_ReturnValue;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.CallFunc_HasChild_ReturnValue_1 = CallFunc_HasChild_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_1 = CallFunc_AddChildToHorizontalBox_ReturnValue_1;
	Parms.Temp_struct_Variable_7 = Temp_struct_Variable_7;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.Temp_byte_Variable_10 = Temp_byte_Variable_10;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.Temp_byte_Variable_11 = Temp_byte_Variable_11;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	Parms.Temp_bool_Variable_10 = Temp_bool_Variable_10;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.CallFunc_AddChildToOverlay_ReturnValue_1 = CallFunc_AddChildToOverlay_ReturnValue_1;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.Temp_bool_Variable_11 = Temp_bool_Variable_11;
	Parms.CallFunc_IsUsingTouch_ReturnValue = CallFunc_IsUsingTouch_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.K2Node_Select_Default_10 = K2Node_Select_Default_10;
	Parms.K2Node_Select_Default_11 = K2Node_Select_Default_11;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.PlayReminderAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_InEditorOrPIE_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Augment_SelectionTimer_C::PlayReminderAnimation(bool CallFunc_InEditorOrPIE_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "PlayReminderAnimation");

	Params::UWBP_Augment_SelectionTimer_C_PlayReminderAnimation_Params Parms;

	Parms.CallFunc_InEditorOrPIE_ReturnValue = CallFunc_InEditorOrPIE_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCountdownVisible_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingTouch_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Augment_SelectionTimer_C::UpdateVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsCountdownVisible_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsUsingTouch_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "UpdateVisibility");

	Params::UWBP_Augment_SelectionTimer_C_UpdateVisibility_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsCountdownVisible_ReturnValue = CallFunc_IsCountdownVisible_ReturnValue;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsUsingTouch_ReturnValue = CallFunc_IsUsingTouch_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnAugmentReadyFadeInFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Augment_SelectionTimer_C::OnAugmentReadyFadeInFinished(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "OnAugmentReadyFadeInFinished");

	Params::UWBP_Augment_SelectionTimer_C_OnAugmentReadyFadeInFinished_Params Parms;

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.ResetAugmentReadyStateAnims
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Augment_SelectionTimer_C::ResetAugmentReadyStateAnims(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "ResetAugmentReadyStateAnims");

	Params::UWBP_Augment_SelectionTimer_C_ResetAugmentReadyStateAnims_Params Parms;

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.ForceAugmentReadyState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AugmentSelectionAvailable                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InEditorOrPIE_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Augment_SelectionTimer_C::ForceAugmentReadyState(bool AugmentSelectionAvailable, bool CallFunc_InEditorOrPIE_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "ForceAugmentReadyState");

	Params::UWBP_Augment_SelectionTimer_C_ForceAugmentReadyState_Params Parms;

	Parms.AugmentSelectionAvailable = AugmentSelectionAvailable;
	Parms.CallFunc_InEditorOrPIE_ReturnValue = CallFunc_InEditorOrPIE_ReturnValue;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.SetAugmentReadyState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AugmentSelectionAvailable                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingTouch_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Augment_SelectionTimer_C::SetAugmentReadyState(bool AugmentSelectionAvailable, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_IsUsingTouch_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static auto Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "SetAugmentReadyState");

	Params::UWBP_Augment_SelectionTimer_C_SetAugmentReadyState_Params Parms;

	Parms.AugmentSelectionAvailable = AugmentSelectionAvailable;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_IsUsingTouch_ReturnValue = CallFunc_IsUsingTouch_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.IsAugmentSelectionAvailable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsEnabled                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Augment_SelectionTimer_C::IsAugmentSelectionAvailable(bool* IsEnabled, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "IsAugmentSelectionAvailable");

	Params::UWBP_Augment_SelectionTimer_C_IsAugmentSelectionAvailable_Params Parms;

	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEnabled != nullptr)
		*IsEnabled = Parms.IsEnabled;

}


// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnLoaded_7B3490DB452F1589FC28169C2C321233
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Augment_SelectionTimer_C::OnLoaded_7B3490DB452F1589FC28169C2C321233(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "OnLoaded_7B3490DB452F1589FC28169C2C321233");

	Params::UWBP_Augment_SelectionTimer_C_OnLoaded_7B3490DB452F1589FC28169C2C321233_Params Parms;

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Augment_SelectionTimer_C::OnInitialized()
{
	static auto Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "OnInitialized");

	Params::UWBP_Augment_SelectionTimer_C_OnInitialized_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnAugmentGrantingTimersFinishedForMatch
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_Augment_SelectionTimer_C::OnAugmentGrantingTimersFinishedForMatch()
{
	static auto Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "OnAugmentGrantingTimersFinishedForMatch");

	Params::UWBP_Augment_SelectionTimer_C_OnAugmentGrantingTimersFinishedForMatch_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Augment_SelectionTimer_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "PreConstruct");

	Params::UWBP_Augment_SelectionTimer_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnHUDElementVisibilityChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       HiddenElementTagContainer                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Augment_SelectionTimer_C::OnHUDElementVisibilityChanged(struct FGameplayTagContainer& HiddenElementTagContainer)
{
	static auto Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "OnHUDElementVisibilityChanged");

	Params::UWBP_Augment_SelectionTimer_C_OnHUDElementVisibilityChanged_Params Parms;

	Parms.HiddenElementTagContainer = HiddenElementTagContainer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnPlayerChangedBuildMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnteredBuildMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Augment_SelectionTimer_C::OnPlayerChangedBuildMode(bool bEnteredBuildMode)
{
	static auto Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "OnPlayerChangedBuildMode");

	Params::UWBP_Augment_SelectionTimer_C_OnPlayerChangedBuildMode_Params Parms;

	Parms.bEnteredBuildMode = bEnteredBuildMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Augment_SelectionTimer_C::Construct()
{
	static auto Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "Construct");

	Params::UWBP_Augment_SelectionTimer_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnCountdownActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_Augment_SelectionTimer_C::OnCountdownActivated()
{
	static auto Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "OnCountdownActivated");

	Params::UWBP_Augment_SelectionTimer_C_OnCountdownActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnCanSelectAugmentChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCanSelectAugment                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Augment_SelectionTimer_C::OnCanSelectAugmentChanged(bool bCanSelectAugment)
{
	static auto Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "OnCanSelectAugmentChanged");

	Params::UWBP_Augment_SelectionTimer_C_OnCanSelectAugmentChanged_Params Parms;

	Parms.bCanSelectAugment = bCanSelectAugment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.ExecuteUbergraph_WBP_Augment_SelectionTimer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPaperSprite*                K2Node_DynamicCast_AsPaper_Sprite                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAugmentSelectionAvailable_IsEnabled                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanSelectAugment_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_HiddenElementTagContainer                           (ConstParm)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bEnteredBuildMode                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSkydiving_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDBNO_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bCanSelectAugment                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Augment_SelectionTimer_C::ExecuteUbergraph_WBP_Augment_SelectionTimer(int32 EntryPoint, class UObject* Temp_object_Variable, class UPaperSprite* K2Node_DynamicCast_AsPaper_Sprite, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsAugmentSelectionAvailable_IsEnabled, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_CanSelectAugment_ReturnValue, const struct FGameplayTagContainer& K2Node_Event_HiddenElementTagContainer, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, bool Temp_bool_Variable, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_CustomEvent_bEnteredBuildMode, bool CallFunc_IsSkydiving_ReturnValue, bool CallFunc_IsDBNO_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class UWidget* K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsMobileGame_ReturnValue, FInterfaceProperty_ CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_Event_bCanSelectAugment, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "ExecuteUbergraph_WBP_Augment_SelectionTimer");

	Params::UWBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsPaper_Sprite = K2Node_DynamicCast_AsPaper_Sprite;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsAugmentSelectionAvailable_IsEnabled = CallFunc_IsAugmentSelectionAvailable_IsEnabled;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_CanSelectAugment_ReturnValue = CallFunc_CanSelectAugment_ReturnValue;
	Parms.K2Node_Event_HiddenElementTagContainer = K2Node_Event_HiddenElementTagContainer;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue_1 = CallFunc_HasTag_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_bEnteredBuildMode = K2Node_CustomEvent_bEnteredBuildMode;
	Parms.CallFunc_IsSkydiving_ReturnValue = CallFunc_IsSkydiving_ReturnValue;
	Parms.CallFunc_IsDBNO_ReturnValue = CallFunc_IsDBNO_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput = CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Event_bCanSelectAugment = K2Node_Event_bCanSelectAugment;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
