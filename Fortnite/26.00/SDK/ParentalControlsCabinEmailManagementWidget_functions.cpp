#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ParentalControlsCabinEmailManagementWidget.ParentalControlsCabinEmailManagementWidget_C
// (None)

class UClass* UParentalControlsCabinEmailManagementWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParentalControlsCabinEmailManagementWidget_C");

	return Clss;
}


// ParentalControlsCabinEmailManagementWidget_C ParentalControlsCabinEmailManagementWidget.Default__ParentalControlsCabinEmailManagementWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParentalControlsCabinEmailManagementWidget_C* UParentalControlsCabinEmailManagementWidget_C::GetDefaultObj()
{
	static class UParentalControlsCabinEmailManagementWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParentalControlsCabinEmailManagementWidget_C*>(UParentalControlsCabinEmailManagementWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ParentalControlsCabinEmailManagementWidget.ParentalControlsCabinEmailManagementWidget_C.OnChangeEmailEditMode
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsInEditMode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UParentalControlsCabinEmailManagementWidget_C::OnChangeEmailEditMode(bool bIsInEditMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParentalControlsCabinEmailManagementWidget_C", "OnChangeEmailEditMode");

	Params::UParentalControlsCabinEmailManagementWidget_C_OnChangeEmailEditMode_Params Parms{};

	Parms.bIsInEditMode = bIsInEditMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ParentalControlsCabinEmailManagementWidget.ParentalControlsCabinEmailManagementWidget_C.OnScreenStateChange
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ECabinEmailViewState    NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UParentalControlsCabinEmailManagementWidget_C::OnScreenStateChange(enum class ECabinEmailViewState NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParentalControlsCabinEmailManagementWidget_C", "OnScreenStateChange");

	Params::UParentalControlsCabinEmailManagementWidget_C_OnScreenStateChange_Params Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ParentalControlsCabinEmailManagementWidget.ParentalControlsCabinEmailManagementWidget_C.OnShowFailureReason
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        ErrorText                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UParentalControlsCabinEmailManagementWidget_C::OnShowFailureReason(class FText& ErrorText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParentalControlsCabinEmailManagementWidget_C", "OnShowFailureReason");

	Params::UParentalControlsCabinEmailManagementWidget_C_OnShowFailureReason_Params Parms{};

	Parms.ErrorText = ErrorText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ParentalControlsCabinEmailManagementWidget.ParentalControlsCabinEmailManagementWidget_C.ExecuteUbergraph_ParentalControlsCabinEmailManagementWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_ErrorText                                           (ConstParm)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsInEditMode                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECabinEmailViewState    K2Node_Event_NewState                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UParentalControlsCabinEmailManagementWidget_C::ExecuteUbergraph_ParentalControlsCabinEmailManagementWidget(int32 EntryPoint, class FText K2Node_Event_ErrorText, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, bool K2Node_Event_bIsInEditMode, enum class ECabinEmailViewState K2Node_Event_NewState, bool K2Node_SwitchEnum_CmpSuccess, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParentalControlsCabinEmailManagementWidget_C", "ExecuteUbergraph_ParentalControlsCabinEmailManagementWidget");

	Params::UParentalControlsCabinEmailManagementWidget_C_ExecuteUbergraph_ParentalControlsCabinEmailManagementWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ErrorText = K2Node_Event_ErrorText;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Event_bIsInEditMode = K2Node_Event_bIsInEditMode;
	Parms.K2Node_Event_NewState = K2Node_Event_NewState;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


