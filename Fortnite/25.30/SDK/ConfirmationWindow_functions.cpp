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


// Function ConfirmationWindow.ConfirmationWindow_C.Handle Configure Decline Button
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           New_Button                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_UIKit_ButtonCTA_Base_C* CTAButton                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_UIKit_ButtonCTA_Base_C* K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortDialogDescription_NUI  CallFunc_GetConfirmationDescription_ReturnValue                  (ConstParm, ContainsInstancedReference)
// int32                              CallFunc_GetInputPriority_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)

void UConfirmationWindow_C::Handle_Configure_Decline_Button(class UCommonButtonBase* New_Button, class UWBP_UIKit_ButtonCTA_Base_C* CTAButton, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UWBP_UIKit_ButtonCTA_Base_C* K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base, bool K2Node_DynamicCast_bSuccess, const struct FFortDialogDescription_NUI& CallFunc_GetConfirmationDescription_ReturnValue, int32 CallFunc_GetInputPriority_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle)
{
	static auto Func = Class->GetFunction("ConfirmationWindow_C", "Handle Configure Decline Button");

	Params::UConfirmationWindow_C_Handle_Configure_Decline_Button_Params Parms;

	Parms.New_Button = New_Button;
	Parms.CTAButton = CTAButton;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base = K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetConfirmationDescription_ReturnValue = CallFunc_GetConfirmationDescription_ReturnValue;
	Parms.CallFunc_GetInputPriority_ReturnValue = CallFunc_GetInputPriority_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ConfirmationWindow.ConfirmationWindow_C.ConfigureConfirmationButton
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FConfirmationDialogAction   Action                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bSimpleConfirm                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_UIKit_ButtonCTA_Base_C* CTAButton                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_UIKit_ButtonCTA_Base_C* K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetInputAction_ReturnValue                              (NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetInputPriority_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfirmationWindow_C::ConfigureConfirmationButton(class UCommonButtonBase* Button, struct FConfirmationDialogAction& Action, bool bSimpleConfirm, class UWBP_UIKit_ButtonCTA_Base_C* CTAButton, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UWBP_UIKit_ButtonCTA_Base_C* K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base, bool K2Node_DynamicCast_bSuccess, const struct FDataTableRowHandle& CallFunc_GetInputAction_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, int32 CallFunc_GetInputPriority_ReturnValue)
{
	static auto Func = Class->GetFunction("ConfirmationWindow_C", "ConfigureConfirmationButton");

	Params::UConfirmationWindow_C_ConfigureConfirmationButton_Params Parms;

	Parms.Button = Button;
	Parms.Action = Action;
	Parms.bSimpleConfirm = bSimpleConfirm;
	Parms.CTAButton = CTAButton;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base = K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetInputAction_ReturnValue = CallFunc_GetInputAction_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_GetInputPriority_ReturnValue = CallFunc_GetInputPriority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ConfirmationWindow.ConfirmationWindow_C.PlayShowSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortDialogDescription_NUI  CallFunc_GetConfirmationDescription_ReturnValue                  (ConstParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfirmationWindow_C::PlayShowSound(const struct FFortDialogDescription_NUI& CallFunc_GetConfirmationDescription_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("ConfirmationWindow_C", "PlayShowSound");

	Params::UConfirmationWindow_C_PlayShowSound_Params Parms;

	Parms.CallFunc_GetConfirmationDescription_ReturnValue = CallFunc_GetConfirmationDescription_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ConfirmationWindow.ConfirmationWindow_C.TapToClose
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_PointerEvent_GetEffectingButton_ReturnValue             (HasGetValueTypeHash)
// bool                               CallFunc_PointerEvent_IsTouchEvent_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   ()
// struct FEventReply                 K2Node_Select_Default                                            ()

struct FEventReply UConfirmationWindow_C::TapToClose(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_PointerEvent_IsTouchEvent_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool Temp_bool_Variable, bool CallFunc_BooleanOR_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ConfirmationWindow_C", "TapToClose");

	Params::UConfirmationWindow_C_TapToClose_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	Parms.CallFunc_PointerEvent_IsTouchEvent_ReturnValue = CallFunc_PointerEvent_IsTouchEvent_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ConfirmationWindow.ConfirmationWindow_C.SetupNonInteractiveContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UConfirmationWindow_C::SetupNonInteractiveContent()
{
	static auto Func = Class->GetFunction("ConfirmationWindow_C", "SetupNonInteractiveContent");

	Params::UConfirmationWindow_C_SetupNonInteractiveContent_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ConfirmationWindow.ConfirmationWindow_C.GetInputAction
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseInputAction                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// struct FDataTableRowHandle         Temp_struct_Variable                                             (NoDestructor)
// struct FDataTableRowHandle         K2Node_Select_Default                                            (NoDestructor)

struct FDataTableRowHandle UConfirmationWindow_C::GetInputAction(class FName RowName, bool UseInputAction, bool Temp_bool_Variable, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, const struct FDataTableRowHandle& Temp_struct_Variable, const struct FDataTableRowHandle& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ConfirmationWindow_C", "GetInputAction");

	Params::UConfirmationWindow_C_GetInputAction_Params Parms;

	Parms.RowName = RowName;
	Parms.UseInputAction = UseInputAction;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ConfirmationWindow.ConfirmationWindow_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UConfirmationWindow_C::Initialize()
{
	static auto Func = Class->GetFunction("ConfirmationWindow_C", "Initialize");

	Params::UConfirmationWindow_C_Initialize_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ConfirmationWindow.ConfirmationWindow_C.OnBeginOutro
// (Event, Protected, BlueprintEvent)
// Parameters:

void UConfirmationWindow_C::OnBeginOutro()
{
	static auto Func = Class->GetFunction("ConfirmationWindow_C", "OnBeginOutro");

	Params::UConfirmationWindow_C_OnBeginOutro_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ConfirmationWindow.ConfirmationWindow_C.ConfigureDeclineButton
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UConfirmationWindow_C::ConfigureDeclineButton(class UCommonButtonBase* Button)
{
	static auto Func = Class->GetFunction("ConfirmationWindow_C", "ConfigureDeclineButton");

	Params::UConfirmationWindow_C_ConfigureDeclineButton_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ConfirmationWindow.ConfirmationWindow_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UConfirmationWindow_C::BP_OnActivated()
{
	static auto Func = Class->GetFunction("ConfirmationWindow_C", "BP_OnActivated");

	Params::UConfirmationWindow_C_BP_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ConfirmationWindow.ConfirmationWindow_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonLegacy*         Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UConfirmationWindow_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static auto Func = Class->GetFunction("ConfirmationWindow_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UConfirmationWindow_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ConfirmationWindow.ConfirmationWindow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfirmationWindow_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("ConfirmationWindow_C", "PreConstruct");

	Params::UConfirmationWindow_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ConfirmationWindow.ConfirmationWindow_C.ExecuteUbergraph_ConfirmationWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortDialogDescription_NUI  CallFunc_GetConfirmationDescription_ReturnValue                  (ConstParm, ContainsInstancedReference)
// class UCommonButtonBase*           K2Node_Event_Button                                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonLegacy*         K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetAllEntries_ReturnValue                               (ConstParm, ReferenceParm, ContainsInstancedReference)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_UIKit_ButtonCTA_Base_C* K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfirmationWindow_C::ExecuteUbergraph_ConfirmationWindow(int32 EntryPoint, bool CallFunc_IsMobileGame_ReturnValue, bool Temp_bool_Variable, double Temp_real_Variable, double Temp_real_Variable_1, int32 Temp_int_Array_Index_Variable, double K2Node_Select_Default, const struct FFortDialogDescription_NUI& CallFunc_GetConfirmationDescription_ReturnValue, class UCommonButtonBase* K2Node_Event_Button, class UCommonButtonLegacy* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_IsDesignTime, int32 Temp_int_Loop_Counter_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetAllEntries_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWBP_UIKit_ButtonCTA_Base_C* K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast)
{
	static auto Func = Class->GetFunction("ConfirmationWindow_C", "ExecuteUbergraph_ConfirmationWindow");

	Params::UConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetConfirmationDescription_ReturnValue = CallFunc_GetConfirmationDescription_ReturnValue;
	Parms.K2Node_Event_Button = K2Node_Event_Button;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllEntries_ReturnValue = CallFunc_GetAllEntries_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base = K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast = CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
