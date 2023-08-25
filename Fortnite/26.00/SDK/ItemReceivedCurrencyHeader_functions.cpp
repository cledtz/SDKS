#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemReceivedCurrencyHeader.ItemReceivedCurrencyHeader_C
// (None)

class UClass* UItemReceivedCurrencyHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemReceivedCurrencyHeader_C");

	return Clss;
}


// ItemReceivedCurrencyHeader_C ItemReceivedCurrencyHeader.Default__ItemReceivedCurrencyHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemReceivedCurrencyHeader_C* UItemReceivedCurrencyHeader_C::GetDefaultObj()
{
	static class UItemReceivedCurrencyHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemReceivedCurrencyHeader_C*>(UItemReceivedCurrencyHeader_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemReceivedCurrencyHeader.ItemReceivedCurrencyHeader_C.ActiveFromPresentation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCurrencyDataWithGiftBox    CurrencyDataArray                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UItemReceivedCurrencyHeader_C::ActiveFromPresentation(const struct FCurrencyDataWithGiftBox& CurrencyDataArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedCurrencyHeader_C", "ActiveFromPresentation");

	Params::UItemReceivedCurrencyHeader_C_ActiveFromPresentation_Params Parms{};

	Parms.CurrencyDataArray = CurrencyDataArray;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedCurrencyHeader.ItemReceivedCurrencyHeader_C.ExecuteUbergraph_ItemReceivedCurrencyHeader
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCurrencyDataWithGiftBox    K2Node_CustomEvent_CurrencyDataArray                             (None)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FCurrencyData               CallFunc_Array_Get_Item                                          (None)
// class UFortMcpProfileAthena*       CallFunc_GetAthenaProfile_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasPurchasedSeasonBook_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UItemReceivedCurrencyHeader_C::ExecuteUbergraph_ItemReceivedCurrencyHeader(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FCurrencyDataWithGiftBox& K2Node_CustomEvent_CurrencyDataArray, class UFortMcpContext* CallFunc_GetContext_ReturnValue, const struct FCurrencyData& CallFunc_Array_Get_Item, class UFortMcpProfileAthena* CallFunc_GetAthenaProfile_ReturnValue, bool CallFunc_HasPurchasedSeasonBook_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UImage* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedCurrencyHeader_C", "ExecuteUbergraph_ItemReceivedCurrencyHeader");

	Params::UItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_CurrencyDataArray = K2Node_CustomEvent_CurrencyDataArray;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetAthenaProfile_ReturnValue = CallFunc_GetAthenaProfile_ReturnValue;
	Parms.CallFunc_HasPurchasedSeasonBook_ReturnValue = CallFunc_HasPurchasedSeasonBook_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedCurrencyHeader.ItemReceivedCurrencyHeader_C.ActivateWidgetFromPresentationScreen__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGiftBoxItem*            GiftBox                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCurrencyData>       CurrencyArray                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UItemReceivedCurrencyHeader_C::ActivateWidgetFromPresentationScreen__DelegateSignature(class UFortGiftBoxItem* GiftBox, TArray<struct FCurrencyData>& CurrencyArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedCurrencyHeader_C", "ActivateWidgetFromPresentationScreen__DelegateSignature");

	Params::UItemReceivedCurrencyHeader_C_ActivateWidgetFromPresentationScreen__DelegateSignature_Params Parms{};

	Parms.GiftBox = GiftBox;
	Parms.CurrencyArray = CurrencyArray;

	UObject::ProcessEvent(Func, &Parms);

}

}


