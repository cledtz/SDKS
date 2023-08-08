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


// Function EditableTextUtilities.EditableTextUtilities_C.CheckIfNeedsTrimming
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Limit                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        TrimmedText                                                      (Parm, OutParm)
// bool                               WasTrimmed                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Left_ReturnValue                                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()

void UEditableTextUtilities_C::CheckIfNeedsTrimming(class FText Text, int32 Limit, class UObject* __WorldContext, class FText* TrimmedText, bool* WasTrimmed, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, const class FString& CallFunc_Left_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static auto Func = Class->GetFunction("EditableTextUtilities_C", "CheckIfNeedsTrimming");

	Params::UEditableTextUtilities_C_CheckIfNeedsTrimming_Params Parms;

	Parms.Text = Text;
	Parms.Limit = Limit;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Left_ReturnValue = CallFunc_Left_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TrimmedText != nullptr)
		*TrimmedText = Parms.TrimmedText;

	if (WasTrimmed != nullptr)
		*WasTrimmed = Parms.WasTrimmed;

}


// Function EditableTextUtilities.EditableTextUtilities_C.LimitTextLength
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     EditableTextWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Length                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               WasTrimmed                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEditableText*               K2Node_DynamicCast_AsEditable_Text                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEditableTextBox*            K2Node_DynamicCast_AsText_Box                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// class FText                        CallFunc_GetText_ReturnValue_1                                   ()
// class FText                        CallFunc_CheckIfNeedsTrimming_TrimmedText                        ()
// bool                               CallFunc_CheckIfNeedsTrimming_WasTrimmed                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_CheckIfNeedsTrimming_TrimmedText_1                      ()
// bool                               CallFunc_CheckIfNeedsTrimming_WasTrimmed_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEditableTextUtilities_C::LimitTextLength(class UWidget* EditableTextWidget, int32 Length, class UObject* __WorldContext, bool* WasTrimmed, class UEditableText* K2Node_DynamicCast_AsEditable_Text, bool K2Node_DynamicCast_bSuccess, class UEditableTextBox* K2Node_DynamicCast_AsText_Box, bool K2Node_DynamicCast_bSuccess_1, class FText CallFunc_GetText_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, class FText CallFunc_CheckIfNeedsTrimming_TrimmedText, bool CallFunc_CheckIfNeedsTrimming_WasTrimmed, class FText CallFunc_CheckIfNeedsTrimming_TrimmedText_1, bool CallFunc_CheckIfNeedsTrimming_WasTrimmed_1)
{
	static auto Func = Class->GetFunction("EditableTextUtilities_C", "LimitTextLength");

	Params::UEditableTextUtilities_C_LimitTextLength_Params Parms;

	Parms.EditableTextWidget = EditableTextWidget;
	Parms.Length = Length;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_DynamicCast_AsEditable_Text = K2Node_DynamicCast_AsEditable_Text;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsText_Box = K2Node_DynamicCast_AsText_Box;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue_1 = CallFunc_GetText_ReturnValue_1;
	Parms.CallFunc_CheckIfNeedsTrimming_TrimmedText = CallFunc_CheckIfNeedsTrimming_TrimmedText;
	Parms.CallFunc_CheckIfNeedsTrimming_WasTrimmed = CallFunc_CheckIfNeedsTrimming_WasTrimmed;
	Parms.CallFunc_CheckIfNeedsTrimming_TrimmedText_1 = CallFunc_CheckIfNeedsTrimming_TrimmedText_1;
	Parms.CallFunc_CheckIfNeedsTrimming_WasTrimmed_1 = CallFunc_CheckIfNeedsTrimming_WasTrimmed_1;

	UObject::ProcessEvent(Func, &Parms);

	if (WasTrimmed != nullptr)
		*WasTrimmed = Parms.WasTrimmed;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
