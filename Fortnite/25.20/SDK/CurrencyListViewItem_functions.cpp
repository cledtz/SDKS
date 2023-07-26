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


// Function CurrencyListViewItem.CurrencyListViewItem_C.SetQuantityAndType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InInt                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        To                                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue_1                                   (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()

void UCurrencyListViewItem_C::SetQuantityAndType(int32 InInt, class FText To, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Replace_ReturnValue, const class FString& CallFunc_Replace_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static auto Func = Class->GetFunction("CurrencyListViewItem_C", "SetQuantityAndType");

	Params::UCurrencyListViewItem_C_SetQuantityAndType_Params Parms;

	Parms.InInt = InInt;
	Parms.To = To;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Replace_ReturnValue_1 = CallFunc_Replace_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CurrencyListViewItem.CurrencyListViewItem_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCurrencyListViewItem_C::BP_OnEntryReleased()
{
	static auto Func = Class->GetFunction("CurrencyListViewItem_C", "BP_OnEntryReleased");

	Params::UCurrencyListViewItem_C_BP_OnEntryReleased_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CurrencyListViewItem.CurrencyListViewItem_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCurrencyListViewItem_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto Func = Class->GetFunction("CurrencyListViewItem_C", "BP_OnItemExpansionChanged");

	Params::UCurrencyListViewItem_C_BP_OnItemExpansionChanged_Params Parms;

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CurrencyListViewItem.CurrencyListViewItem_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCurrencyListViewItem_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static auto Func = Class->GetFunction("CurrencyListViewItem_C", "BP_OnItemSelectionChanged");

	Params::UCurrencyListViewItem_C_BP_OnItemSelectionChanged_Params Parms;

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CurrencyListViewItem.CurrencyListViewItem_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UCurrencyListViewItem_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto Func = Class->GetFunction("CurrencyListViewItem_C", "OnListItemObjectSet");

	Params::UCurrencyListViewItem_C_OnListItemObjectSet_Params Parms;

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CurrencyListViewItem.CurrencyListViewItem_C.ExecuteUbergraph_CurrencyListViewItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurrencyListObject_C*       K2Node_DynamicCast_AsCurrency_List_Object                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue_1                                   (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         ()
// class FString                      CallFunc_Conv_TextToString_ReturnValue_4                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue_2                                   (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         ()

void UCurrencyListViewItem_C::ExecuteUbergraph_CurrencyListViewItem(int32 EntryPoint, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject, class UCurrencyListObject_C* K2Node_DynamicCast_AsCurrency_List_Object, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Replace_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, bool CallFunc_IsEmpty_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, const class FString& CallFunc_Replace_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_4, const class FString& CallFunc_Replace_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_2)
{
	static auto Func = Class->GetFunction("CurrencyListViewItem_C", "ExecuteUbergraph_CurrencyListViewItem");

	Params::UCurrencyListViewItem_C_ExecuteUbergraph_CurrencyListViewItem_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_DynamicCast_AsCurrency_List_Object = K2Node_DynamicCast_AsCurrency_List_Object;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_IsEmpty_ReturnValue_1 = CallFunc_IsEmpty_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.CallFunc_Replace_ReturnValue_1 = CallFunc_Replace_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_4 = CallFunc_Conv_TextToString_ReturnValue_4;
	Parms.CallFunc_Replace_ReturnValue_2 = CallFunc_Replace_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
