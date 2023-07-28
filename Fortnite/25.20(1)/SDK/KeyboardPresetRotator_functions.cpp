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


// Function KeyboardPresetRotator.KeyboardPresetRotator_C.Show Param Name
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyboardPresetRotator_C::Show_Param_Name(bool Show, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("KeyboardPresetRotator_C", "Show Param Name");

	Params::UKeyboardPresetRotator_C_Show_Param_Name_Params Parms;

	Parms.Show = Show;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KeyboardPresetRotator.KeyboardPresetRotator_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   ()

struct FEventReply UKeyboardPresetRotator_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue)
{
	static auto Func = Class->GetFunction("KeyboardPresetRotator_C", "OnFocusReceived");

	Params::UKeyboardPresetRotator_C_OnFocusReceived_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KeyboardPresetRotator.KeyboardPresetRotator_C.Update Options
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UKeyboardPresetRotator_C::Update_Options(TArray<class FText>& NewParam)
{
	static auto Func = Class->GetFunction("KeyboardPresetRotator_C", "Update Options");

	Params::UKeyboardPresetRotator_C_Update_Options_Params Parms;

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KeyboardPresetRotator.KeyboardPresetRotator_C.Center On Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UKeyboardPresetRotator_C::Center_On_Widget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("KeyboardPresetRotator_C", "Center On Widget");

	Params::UKeyboardPresetRotator_C_Center_On_Widget_Params Parms;

	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KeyboardPresetRotator.KeyboardPresetRotator_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetDescription()
// class FText                        CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetSubDescription()
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetKBMPlayerInputPresetNamesForSubGame_InputPresetNames (ReferenceParm)
// TArray<class FText>                CallFunc_GetKBMPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames(ReferenceParm)

void UKeyboardPresetRotator_C::Initialize(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetDescription, class FText CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetSubDescription, enum class ESubGame CallFunc_GetSubGame_ReturnValue, TArray<class FString>& CallFunc_GetKBMPlayerInputPresetNamesForSubGame_InputPresetNames, TArray<class FText>& CallFunc_GetKBMPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames)
{
	static auto Func = Class->GetFunction("KeyboardPresetRotator_C", "Initialize");

	Params::UKeyboardPresetRotator_C_Initialize_Params Parms;

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetDescription = CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetDescription;
	Parms.CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetSubDescription = CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetSubDescription;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_GetKBMPlayerInputPresetNamesForSubGame_InputPresetNames = CallFunc_GetKBMPlayerInputPresetNamesForSubGame_InputPresetNames;
	Parms.CallFunc_GetKBMPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames = CallFunc_GetKBMPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KeyboardPresetRotator.KeyboardPresetRotator_C.Update Row Selector
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Currently_Selected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyboardPresetRotator_C::Update_Row_Selector(int32 Currently_Selected)
{
	static auto Func = Class->GetFunction("KeyboardPresetRotator_C", "Update Row Selector");

	Params::UKeyboardPresetRotator_C_Update_Row_Selector_Params Parms;

	Parms.Currently_Selected = Currently_Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KeyboardPresetRotator.KeyboardPresetRotator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UKeyboardPresetRotator_C::Construct()
{
	static auto Func = Class->GetFunction("KeyboardPresetRotator_C", "Construct");

	Params::UKeyboardPresetRotator_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function KeyboardPresetRotator.KeyboardPresetRotator_C.BndEvt__KeyboardPresetRotator_ButtonRight_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonLegacy*         Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UKeyboardPresetRotator_C::BndEvt__KeyboardPresetRotator_ButtonRight_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static auto Func = Class->GetFunction("KeyboardPresetRotator_C", "BndEvt__KeyboardPresetRotator_ButtonRight_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UKeyboardPresetRotator_C_BndEvt__KeyboardPresetRotator_ButtonRight_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KeyboardPresetRotator.KeyboardPresetRotator_C.BndEvt__KeyboardPresetRotator_ButtonLeft_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonLegacy*         Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UKeyboardPresetRotator_C::BndEvt__KeyboardPresetRotator_ButtonLeft_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static auto Func = Class->GetFunction("KeyboardPresetRotator_C", "BndEvt__KeyboardPresetRotator_ButtonLeft_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::UKeyboardPresetRotator_C_BndEvt__KeyboardPresetRotator_ButtonLeft_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KeyboardPresetRotator.KeyboardPresetRotator_C.BndEvt__KeyboardPresetRotator_TextRotator_K2Node_ComponentBoundEvent_3_OnRotated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyboardPresetRotator_C::BndEvt__KeyboardPresetRotator_TextRotator_K2Node_ComponentBoundEvent_3_OnRotated__DelegateSignature(int32 Value)
{
	static auto Func = Class->GetFunction("KeyboardPresetRotator_C", "BndEvt__KeyboardPresetRotator_TextRotator_K2Node_ComponentBoundEvent_3_OnRotated__DelegateSignature");

	Params::UKeyboardPresetRotator_C_BndEvt__KeyboardPresetRotator_TextRotator_K2Node_ComponentBoundEvent_3_OnRotated__DelegateSignature_Params Parms;

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KeyboardPresetRotator.KeyboardPresetRotator_C.ExecuteUbergraph_KeyboardPresetRotator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonLegacy*         K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetDescription()
// class FText                        CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetSubDescription()
// class UCommonButtonLegacy*         K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UKeyboardPresetRotator_C::ExecuteUbergraph_KeyboardPresetRotator(int32 EntryPoint, int32 K2Node_ComponentBoundEvent_Value, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UCommonButtonLegacy* K2Node_ComponentBoundEvent_Button_1, class FText CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetDescription, class FText CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetSubDescription, class UCommonButtonLegacy* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("KeyboardPresetRotator_C", "ExecuteUbergraph_KeyboardPresetRotator");

	Params::UKeyboardPresetRotator_C_ExecuteUbergraph_KeyboardPresetRotator_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetDescription = CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetDescription;
	Parms.CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetSubDescription = CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetSubDescription;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
