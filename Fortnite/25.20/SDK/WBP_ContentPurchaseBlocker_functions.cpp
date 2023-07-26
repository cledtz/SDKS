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


// Function WBP_ContentPurchaseBlocker.WBP_ContentPurchaseBlocker_C.SetVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MaxWidth                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ContentPurchaseBlocker_C::SetVisuals(int32 MaxWidth)
{
	static auto Func = Class->GetFunction("WBP_ContentPurchaseBlocker_C", "SetVisuals");

	Params::UWBP_ContentPurchaseBlocker_C_SetVisuals_Params Parms;

	Parms.MaxWidth = MaxWidth;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ContentPurchaseBlocker.WBP_ContentPurchaseBlocker_C.Set Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ContentPurchaseBlocker_C::Set_Data(class FText InText)
{
	static auto Func = Class->GetFunction("WBP_ContentPurchaseBlocker_C", "Set Data");

	Params::UWBP_ContentPurchaseBlocker_C_Set_Data_Params Parms;

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ContentPurchaseBlocker.WBP_ContentPurchaseBlocker_C.OnComplete_EDE27478404080C54EDC0D863BB58408
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 UserWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ContentPurchaseBlocker_C::OnComplete_EDE27478404080C54EDC0D863BB58408(class UUserWidget* UserWidget)
{
	static auto Func = Class->GetFunction("WBP_ContentPurchaseBlocker_C", "OnComplete_EDE27478404080C54EDC0D863BB58408");

	Params::UWBP_ContentPurchaseBlocker_C_OnComplete_EDE27478404080C54EDC0D863BB58408_Params Parms;

	Parms.UserWidget = UserWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ContentPurchaseBlocker.WBP_ContentPurchaseBlocker_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ContentPurchaseBlocker_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("WBP_ContentPurchaseBlocker_C", "PreConstruct");

	Params::UWBP_ContentPurchaseBlocker_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ContentPurchaseBlocker.WBP_ContentPurchaseBlocker_C.BndEvt__WBP_ContentPurchaseBlocker_WBP_UIKit_Button_Loud_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ContentPurchaseBlocker_C::BndEvt__WBP_ContentPurchaseBlocker_WBP_UIKit_Button_Loud_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static auto Func = Class->GetFunction("WBP_ContentPurchaseBlocker_C", "BndEvt__WBP_ContentPurchaseBlocker_WBP_UIKit_Button_Loud_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_ContentPurchaseBlocker_C_BndEvt__WBP_ContentPurchaseBlocker_WBP_UIKit_Button_Loud_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ContentPurchaseBlocker.WBP_ContentPurchaseBlocker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ContentPurchaseBlocker_C::Construct()
{
	static auto Func = Class->GetFunction("WBP_ContentPurchaseBlocker_C", "Construct");

	Params::UWBP_ContentPurchaseBlocker_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ContentPurchaseBlocker.WBP_ContentPurchaseBlocker_C.OnInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ContentPurchaseBlocker_C::OnInputMethodChanged(enum class ECommonInputType bNewInputType)
{
	static auto Func = Class->GetFunction("WBP_ContentPurchaseBlocker_C", "OnInputMethodChanged");

	Params::UWBP_ContentPurchaseBlocker_C_OnInputMethodChanged_Params Parms;

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ContentPurchaseBlocker.WBP_ContentPurchaseBlocker_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ContentPurchaseBlocker_C::Destruct()
{
	static auto Func = Class->GetFunction("WBP_ContentPurchaseBlocker_C", "Destruct");

	Params::UWBP_ContentPurchaseBlocker_C_Destruct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ContentPurchaseBlocker.WBP_ContentPurchaseBlocker_C.ExecuteUbergraph_WBP_ContentPurchaseBlocker
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Temp_object_Variable                                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue_1                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue_2                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_CreateWidgetAsync*CallFunc_CreateWidgetAsync_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_CustomEvent_UserWidget                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ContentPurchaseBlocker_C::ExecuteUbergraph_WBP_ContentPurchaseBlocker(int32 EntryPoint, class UUserWidget* Temp_object_Variable, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_2, bool K2Node_Event_IsDesignTime, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortAsyncAction_CreateWidgetAsync* CallFunc_CreateWidgetAsync_ReturnValue, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_IsValid_ReturnValue, bool K2Node_Select_Default, class UUserWidget* K2Node_CustomEvent_UserWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static auto Func = Class->GetFunction("WBP_ContentPurchaseBlocker_C", "ExecuteUbergraph_WBP_ContentPurchaseBlocker");

	Params::UWBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue_1 = CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue_2 = CallFunc_GetLocalPlayerSubsystem_ReturnValue_2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_CreateWidgetAsync_ReturnValue = CallFunc_CreateWidgetAsync_ReturnValue;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_UserWidget = K2Node_CustomEvent_UserWidget;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
