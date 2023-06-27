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


// Function WBP_UIKit_Dialog.WBP_UIKit_Dialog_C.SetUIKitDialogViewModel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUIKitDialogViewModel*       ViewModel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMVVMView*                   CallFunc_GetExtension_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                CallFunc_SetViewModel_ViewModel_CastInput                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_SetViewModel_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Dialog_C::SetUIKitDialogViewModel(class UUIKitDialogViewModel* ViewModel, class UMVVMView* CallFunc_GetExtension_ReturnValue, FInterfaceProperty_ CallFunc_SetViewModel_ViewModel_CastInput, bool CallFunc_SetViewModel_ReturnValue)
{
	static auto Func = Class->GetFunction("WBP_UIKit_Dialog_C", "SetUIKitDialogViewModel");

	Params::UWBP_UIKit_Dialog_C_SetUIKitDialogViewModel_Params Parms;

	Parms.ViewModel = ViewModel;
	Parms.CallFunc_GetExtension_ReturnValue = CallFunc_GetExtension_ReturnValue;
	Parms.CallFunc_SetViewModel_ViewModel_CastInput = CallFunc_SetViewModel_ViewModel_CastInput;
	Parms.CallFunc_SetViewModel_ReturnValue = CallFunc_SetViewModel_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Dialog.WBP_UIKit_Dialog_C.FNameToNumText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             ()
// class FText                        Temp_text_Variable                                               ()
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             ()
// class FText                        K2Node_Select_Default                                            ()

void UWBP_UIKit_Dialog_C::FNameToNumText(class FName Name, class FText* Text, bool Temp_bool_Variable, class FText CallFunc_Conv_NameToText_ReturnValue, class FText Temp_text_Variable, bool CallFunc_TextIsEmpty_ReturnValue, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("WBP_UIKit_Dialog_C", "FNameToNumText");

	Params::UWBP_UIKit_Dialog_C_FNameToNumText_Params Parms;

	Parms.Name = Name;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function WBP_UIKit_Dialog.WBP_UIKit_Dialog_C.ArrayLengthToText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FConfirmationDialogAction>Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        Text                                                             (Parm, OutParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()

void UWBP_UIKit_Dialog_C::ArrayLengthToText(TArray<struct FConfirmationDialogAction>& Array, class FText* Text, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static auto Func = Class->GetFunction("WBP_UIKit_Dialog_C", "ArrayLengthToText");

	Params::UWBP_UIKit_Dialog_C_ArrayLengthToText_Params Parms;

	Parms.Array = Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function WBP_UIKit_Dialog.WBP_UIKit_Dialog_C.BndEvt__WBP_UIKit_Dialog_Button_Confirm_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_UIKit_Dialog_C::BndEvt__WBP_UIKit_Dialog_Button_Confirm_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("WBP_UIKit_Dialog_C", "BndEvt__WBP_UIKit_Dialog_Button_Confirm_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UWBP_UIKit_Dialog_C_BndEvt__WBP_UIKit_Dialog_Button_Confirm_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Dialog.WBP_UIKit_Dialog_C.BndEvt__WBP_UIKit_Dialog_Button_Decline_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_UIKit_Dialog_C::BndEvt__WBP_UIKit_Dialog_Button_Decline_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("WBP_UIKit_Dialog_C", "BndEvt__WBP_UIKit_Dialog_Button_Decline_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	Params::UWBP_UIKit_Dialog_C_BndEvt__WBP_UIKit_Dialog_Button_Decline_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Dialog.WBP_UIKit_Dialog_C.ExecuteUbergraph_WBP_UIKit_Dialog
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Dialog_C::ExecuteUbergraph_WBP_UIKit_Dialog(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("WBP_UIKit_Dialog_C", "ExecuteUbergraph_WBP_UIKit_Dialog");

	Params::UWBP_UIKit_Dialog_C_ExecuteUbergraph_WBP_UIKit_Dialog_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
