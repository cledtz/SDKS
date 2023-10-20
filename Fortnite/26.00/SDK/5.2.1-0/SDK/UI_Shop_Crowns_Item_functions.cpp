#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C
// (None)

class UClass* UUI_Shop_Crowns_Item_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Shop_Crowns_Item_C");

	return Clss;
}


// UI_Shop_Crowns_Item_C UI_Shop_Crowns_Item.Default__UI_Shop_Crowns_Item_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Shop_Crowns_Item_C* UUI_Shop_Crowns_Item_C::GetDefaultObj()
{
	static class UUI_Shop_Crowns_Item_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Shop_Crowns_Item_C*>(UUI_Shop_Crowns_Item_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.SetDiscount
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               L_IsDiscount                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shop_Crowns_Item_C::SetDiscount(bool L_IsDiscount, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 K2Node_Select_Default_1, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_Crowns_Item_C", "SetDiscount");

	Params::UUI_Shop_Crowns_Item_C_SetDiscount_Params Parms{};

	Parms.L_IsDiscount = L_IsDiscount;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.SetBonus
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)

void UUI_Shop_Crowns_Item_C::SetBonus(bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_Crowns_Item_C", "SetBonus");

	Params::UUI_Shop_Crowns_Item_C_SetBonus_Params Parms{};

	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.OnPlayFabResponse_8FF17DFE47662354390851B40CE7A6A6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel           Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shop_Crowns_Item_C::OnPlayFabResponse_8FF17DFE47662354390851B40CE7A6A6(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_Crowns_Item_C", "OnPlayFabResponse_8FF17DFE47662354390851B40CE7A6A6");

	Params::UUI_Shop_Crowns_Item_C_OnPlayFabResponse_8FF17DFE47662354390851B40CE7A6A6_Params Parms{};

	Parms.Response = Response;
	Parms.CustomData = CustomData;
	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.OnPlayFabResponse_E7BE812F4BBB1C03839795A8891966FB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel           Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shop_Crowns_Item_C::OnPlayFabResponse_E7BE812F4BBB1C03839795A8891966FB(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_Crowns_Item_C", "OnPlayFabResponse_E7BE812F4BBB1C03839795A8891966FB");

	Params::UUI_Shop_Crowns_Item_C_OnPlayFabResponse_E7BE812F4BBB1C03839795A8891966FB_Params Parms{};

	Parms.Response = Response;
	Parms.CustomData = CustomData;
	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.OnPlayFabResponse_8E7A22C04F75F649687D6193EC60EAD0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel           Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shop_Crowns_Item_C::OnPlayFabResponse_8E7A22C04F75F649687D6193EC60EAD0(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_Crowns_Item_C", "OnPlayFabResponse_8E7A22C04F75F649687D6193EC60EAD0");

	Params::UUI_Shop_Crowns_Item_C_OnPlayFabResponse_8E7A22C04F75F649687D6193EC60EAD0_Params Parms{};

	Parms.Response = Response;
	Parms.CustomData = CustomData;
	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.OnPlayFabResponse_505E19444069D91671DEA5A093837AA7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel           Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shop_Crowns_Item_C::OnPlayFabResponse_505E19444069D91671DEA5A093837AA7(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_Crowns_Item_C", "OnPlayFabResponse_505E19444069D91671DEA5A093837AA7");

	Params::UUI_Shop_Crowns_Item_C_OnPlayFabResponse_505E19444069D91671DEA5A093837AA7_Params Parms{};

	Parms.Response = Response;
	Parms.CustomData = CustomData;
	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shop_Crowns_Item_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_Crowns_Item_C", "PreConstruct");

	Params::UUI_Shop_Crowns_Item_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.BndEvt__UI_Shop_Crowns_Item_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Shop_Crowns_Item_C::BndEvt__UI_Shop_Crowns_Item_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_Crowns_Item_C", "BndEvt__UI_Shop_Crowns_Item_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	Params::UUI_Shop_Crowns_Item_C_BndEvt__UI_Shop_Crowns_Item_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.BndEvt__UI_Shop_Crowns_Item_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Shop_Crowns_Item_C::BndEvt__UI_Shop_Crowns_Item_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_Crowns_Item_C", "BndEvt__UI_Shop_Crowns_Item_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	Params::UUI_Shop_Crowns_Item_C_BndEvt__UI_Shop_Crowns_Item_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.BndEvt__UI_Shop_Crowns_Item_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Shop_Crowns_Item_C::BndEvt__UI_Shop_Crowns_Item_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_Crowns_Item_C", "BndEvt__UI_Shop_Crowns_Item_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Shop_Crowns_Item_C_BndEvt__UI_Shop_Crowns_Item_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.StartPurchase_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientStartPurchaseResult  Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Shop_Crowns_Item_C::StartPurchase_Success(const struct FClientStartPurchaseResult& Result, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_Crowns_Item_C", "StartPurchase_Success");

	Params::UUI_Shop_Crowns_Item_C_StartPurchase_Success_Params Parms{};

	Parms.Result = Result;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.StartPurchase_Failure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError               Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Shop_Crowns_Item_C::StartPurchase_Failure(const struct FPlayFabError& Error, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_Crowns_Item_C", "StartPurchase_Failure");

	Params::UUI_Shop_Crowns_Item_C_StartPurchase_Failure_Params Parms{};

	Parms.Error = Error;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.PayForPurchase_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientPayForPurchaseResult Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Shop_Crowns_Item_C::PayForPurchase_Success(const struct FClientPayForPurchaseResult& Result, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_Crowns_Item_C", "PayForPurchase_Success");

	Params::UUI_Shop_Crowns_Item_C_PayForPurchase_Success_Params Parms{};

	Parms.Result = Result;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.PayForPurchase_Failure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError               Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Shop_Crowns_Item_C::PayForPurchase_Failure(const struct FPlayFabError& Error, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_Crowns_Item_C", "PayForPurchase_Failure");

	Params::UUI_Shop_Crowns_Item_C_PayForPurchase_Failure_Params Parms{};

	Parms.Error = Error;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.ConfirmPurchase_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientConfirmPurchaseResultResult                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Shop_Crowns_Item_C::ConfirmPurchase_Success(const struct FClientConfirmPurchaseResult& Result, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_Crowns_Item_C", "ConfirmPurchase_Success");

	Params::UUI_Shop_Crowns_Item_C_ConfirmPurchase_Success_Params Parms{};

	Parms.Result = Result;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.ConfirmPurchase_Failure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError               Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Shop_Crowns_Item_C::ConfirmPurchase_Failure(const struct FPlayFabError& Error, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_Crowns_Item_C", "ConfirmPurchase_Failure");

	Params::UUI_Shop_Crowns_Item_C_ConfirmPurchase_Failure_Params Parms{};

	Parms.Error = Error;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.WriteEvent_Error
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Stage                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabError               PlayFabError                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_Shop_Crowns_Item_C::WriteEvent_Error(int32 Stage, struct FPlayFabError& PlayFabError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_Crowns_Item_C", "WriteEvent_Error");

	Params::UUI_Shop_Crowns_Item_C_WriteEvent_Error_Params Parms{};

	Parms.Stage = Stage;
	Parms.PlayFabError = PlayFabError;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.WritePlayerEvent_Error_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientWriteEventResponse   Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Shop_Crowns_Item_C::WritePlayerEvent_Error_Success(const struct FClientWriteEventResponse& Result, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_Crowns_Item_C", "WritePlayerEvent_Error_Success");

	Params::UUI_Shop_Crowns_Item_C_WritePlayerEvent_Error_Success_Params Parms{};

	Parms.Result = Result;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.WritePlayerEvent_Error_Failure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError               Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Shop_Crowns_Item_C::WritePlayerEvent_Error_Failure(const struct FPlayFabError& Error, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_Crowns_Item_C", "WritePlayerEvent_Error_Failure");

	Params::UUI_Shop_Crowns_Item_C_WritePlayerEvent_Error_Failure_Params Parms{};

	Parms.Error = Error;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Shop_Crowns_Item_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_Crowns_Item_C", "Construct");

	Params::UUI_Shop_Crowns_Item_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.MicroTxnAuthorizationResponse_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMicroTxnAuthorizationResponseData                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_Shop_Crowns_Item_C::MicroTxnAuthorizationResponse_Event(struct FMicroTxnAuthorizationResponse& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_Crowns_Item_C", "MicroTxnAuthorizationResponse_Event");

	Params::UUI_Shop_Crowns_Item_C_MicroTxnAuthorizationResponse_Event_Params Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.ExecuteUbergraph_UI_Shop_Crowns_Item
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           Temp_struct_Variable                                             (None)
// struct FPlayFabBaseModel           K2Node_CustomEvent_response_1                                    (None)
// class UObject*                     K2Node_CustomEvent_customData_9                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_successful_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           Temp_struct_Variable_1                                           (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           K2Node_CustomEvent_response                                      (None)
// class UObject*                     K2Node_CustomEvent_customData_8                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_successful                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           Temp_struct_Variable_2                                           (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FClientPayForPurchaseRequestK2Node_MakeStruct_ClientPayForPurchaseRequest                    (None)
// class UUser*                       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_Shop_SteamOverlayIsDisabled_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_Shop_MicroTxnError_C*    CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_Shop_MicroTxnError_C*    CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_Shop_MicroTxnError_C*    CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// class UPlayFabJsonObject*          CallFunc_ConstructJsonObject_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          K2Node_LowEntry_LocalVariable_Value__Object                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPlayFabJsonObject*>  K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FClientStartPurchaseRequest K2Node_MakeStruct_ClientStartPurchaseRequest                     (None)
// struct FClientStartPurchaseResult  K2Node_CustomEvent_result_3                                      (None)
// class UObject*                     K2Node_CustomEvent_customData_7                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabError               K2Node_CustomEvent_error_3                                       (None)
// class UObject*                     K2Node_CustomEvent_customData_6                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FClientPayForPurchaseResult K2Node_CustomEvent_result_2                                      (None)
// class UObject*                     K2Node_CustomEvent_customData_5                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabError               K2Node_CustomEvent_error_2                                       (None)
// class UObject*                     K2Node_CustomEvent_customData_4                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FClientConfirmPurchaseResultK2Node_CustomEvent_result_1                                      (None)
// class UObject*                     K2Node_CustomEvent_customData_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabError               K2Node_CustomEvent_error_1                                       (None)
// class UObject*                     K2Node_CustomEvent_customData_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPG_PlayerState_Menu*        K2Node_DynamicCast_AsPG_Player_State_Menu                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetPlayerCombinedInfo_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           K2Node_CustomEvent_response_2                                    (None)
// class UObject*                     K2Node_CustomEvent_customData_10                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_successful_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNumberField_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_ConstructJsonObject_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Stage                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabError               K2Node_CustomEvent_PlayFabError                                  (ConstParm)
// class UPlayFabJsonObject*          K2Node_LowEntry_LocalVariable_Value__1_Object                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FClientWriteClientPlayerEventRequestK2Node_MakeStruct_ClientWriteClientPlayerEventRequest            (None)
// class UPlayFabClientAPI*           CallFunc_WritePlayerEvent_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClientWriteEventResponse   K2Node_CustomEvent_result                                        (None)
// class UObject*                     K2Node_CustomEvent_customData_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabError               K2Node_CustomEvent_error                                         (None)
// class UObject*                     K2Node_CustomEvent_customData                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Menu_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EModifiedData>   K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMicroTxnAuthorizationResponseK2Node_CustomEvent_Data                                          (ConstParm)
// bool                               CallFunc_IsOverlayEnabled_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabClientAPI*           CallFunc_StartPurchase_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClientConfirmPurchaseRequestK2Node_MakeStruct_ClientConfirmPurchaseRequest                   (None)
// class UPlayFabClientAPI*           CallFunc_ConfirmPurchase_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabError               K2Node_MakeStruct_PlayFabError                                   (None)
// struct FPlayFabError               K2Node_MakeStruct_PlayFabError_1                                 (None)
// struct FPlayFabBaseModel           Temp_struct_Variable_3                                           (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabClientAPI*           CallFunc_PayForPurchase_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           K2Node_CustomEvent_response_3                                    (None)
// class UObject*                     K2Node_CustomEvent_customData_11                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_successful_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetNumberField_Number_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetNumberField_Number_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetNumberField_Number_ImplicitCast_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shop_Crowns_Item_C::ExecuteUbergraph_UI_Shop_Crowns_Item(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPlayFabBaseModel& Temp_struct_Variable, const struct FPlayFabBaseModel& K2Node_CustomEvent_response_1, class UObject* K2Node_CustomEvent_customData_9, bool K2Node_CustomEvent_successful_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, class UObject* Temp_object_Variable, const struct FPlayFabBaseModel& Temp_struct_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FPlayFabBaseModel& K2Node_CustomEvent_response, class UObject* K2Node_CustomEvent_customData_8, bool K2Node_CustomEvent_successful, bool Temp_bool_Variable_1, class UObject* Temp_object_Variable_1, const struct FPlayFabBaseModel& Temp_struct_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FClientPayForPurchaseRequest& K2Node_MakeStruct_ClientPayForPurchaseRequest, class UUser* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UUI_Shop_SteamOverlayIsDisabled_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UUI_Shop_MicroTxnError_C* CallFunc_Create_ReturnValue_1, class UUI_Shop_MicroTxnError_C* CallFunc_Create_ReturnValue_2, class UUI_Shop_MicroTxnError_C* CallFunc_Create_ReturnValue_3, bool K2Node_Event_IsDesignTime, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, class UPlayFabJsonObject* CallFunc_ConstructJsonObject_ReturnValue, class UObject* Temp_object_Variable_2, class UPlayFabJsonObject* K2Node_LowEntry_LocalVariable_Value__Object, bool Temp_bool_Variable_2, TArray<class UPlayFabJsonObject*>& K2Node_MakeArray_Array, const struct FClientStartPurchaseRequest& K2Node_MakeStruct_ClientStartPurchaseRequest, const struct FClientStartPurchaseResult& K2Node_CustomEvent_result_3, class UObject* K2Node_CustomEvent_customData_7, const struct FPlayFabError& K2Node_CustomEvent_error_3, class UObject* K2Node_CustomEvent_customData_6, const struct FClientPayForPurchaseResult& K2Node_CustomEvent_result_2, class UObject* K2Node_CustomEvent_customData_5, const struct FPlayFabError& K2Node_CustomEvent_error_2, class UObject* K2Node_CustomEvent_customData_4, const struct FClientConfirmPurchaseResult& K2Node_CustomEvent_result_1, class UObject* K2Node_CustomEvent_customData_3, const struct FPlayFabError& K2Node_CustomEvent_error_1, class UObject* K2Node_CustomEvent_customData_2, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class UPG_PlayerState_Menu* K2Node_DynamicCast_AsPG_Player_State_Menu, bool K2Node_DynamicCast_bSuccess, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue, const struct FPlayFabBaseModel& K2Node_CustomEvent_response_2, class UObject* K2Node_CustomEvent_customData_10, bool K2Node_CustomEvent_successful_2, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue, float CallFunc_GetNumberField_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, double CallFunc_Conv_IntToDouble_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UPlayFabJsonObject* CallFunc_ConstructJsonObject_ReturnValue_1, int32 K2Node_CustomEvent_Stage, const struct FPlayFabError& K2Node_CustomEvent_PlayFabError, class UPlayFabJsonObject* K2Node_LowEntry_LocalVariable_Value__1_Object, const struct FClientWriteClientPlayerEventRequest& K2Node_MakeStruct_ClientWriteClientPlayerEventRequest, class UPlayFabClientAPI* CallFunc_WritePlayerEvent_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEmpty_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_2, const struct FClientWriteEventResponse& K2Node_CustomEvent_result, class UObject* K2Node_CustomEvent_customData_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const struct FPlayFabError& K2Node_CustomEvent_error, class UObject* K2Node_CustomEvent_customData, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess_1, TArray<enum class EModifiedData>& K2Node_MakeArray_Array_1, bool CallFunc_GetIsEnabled_ReturnValue, const struct FMicroTxnAuthorizationResponse& K2Node_CustomEvent_Data, bool CallFunc_IsOverlayEnabled_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class UPlayFabClientAPI* CallFunc_StartPurchase_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FClientConfirmPurchaseRequest& K2Node_MakeStruct_ClientConfirmPurchaseRequest, class UPlayFabClientAPI* CallFunc_ConfirmPurchase_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FPlayFabError& K2Node_MakeStruct_PlayFabError, const struct FPlayFabError& K2Node_MakeStruct_PlayFabError_1, const struct FPlayFabBaseModel& Temp_struct_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class UObject* Temp_object_Variable_3, class UPlayFabClientAPI* CallFunc_PayForPurchase_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool Temp_bool_Variable_3, const struct FPlayFabBaseModel& K2Node_CustomEvent_response_3, class UObject* K2Node_CustomEvent_customData_11, bool K2Node_CustomEvent_successful_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_SetNumberField_Number_ImplicitCast, float CallFunc_SetNumberField_Number_ImplicitCast_1, float CallFunc_SetNumberField_Number_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_Crowns_Item_C", "ExecuteUbergraph_UI_Shop_Crowns_Item");

	Params::UUI_Shop_Crowns_Item_C_ExecuteUbergraph_UI_Shop_Crowns_Item_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CustomEvent_response_1 = K2Node_CustomEvent_response_1;
	Parms.K2Node_CustomEvent_customData_9 = K2Node_CustomEvent_customData_9;
	Parms.K2Node_CustomEvent_successful_1 = K2Node_CustomEvent_successful_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_response = K2Node_CustomEvent_response;
	Parms.K2Node_CustomEvent_customData_8 = K2Node_CustomEvent_customData_8;
	Parms.K2Node_CustomEvent_successful = K2Node_CustomEvent_successful;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_MakeStruct_ClientPayForPurchaseRequest = K2Node_MakeStruct_ClientPayForPurchaseRequest;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.CallFunc_ConstructJsonObject_ReturnValue = CallFunc_ConstructJsonObject_ReturnValue;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.K2Node_LowEntry_LocalVariable_Value__Object = K2Node_LowEntry_LocalVariable_Value__Object;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_ClientStartPurchaseRequest = K2Node_MakeStruct_ClientStartPurchaseRequest;
	Parms.K2Node_CustomEvent_result_3 = K2Node_CustomEvent_result_3;
	Parms.K2Node_CustomEvent_customData_7 = K2Node_CustomEvent_customData_7;
	Parms.K2Node_CustomEvent_error_3 = K2Node_CustomEvent_error_3;
	Parms.K2Node_CustomEvent_customData_6 = K2Node_CustomEvent_customData_6;
	Parms.K2Node_CustomEvent_result_2 = K2Node_CustomEvent_result_2;
	Parms.K2Node_CustomEvent_customData_5 = K2Node_CustomEvent_customData_5;
	Parms.K2Node_CustomEvent_error_2 = K2Node_CustomEvent_error_2;
	Parms.K2Node_CustomEvent_customData_4 = K2Node_CustomEvent_customData_4;
	Parms.K2Node_CustomEvent_result_1 = K2Node_CustomEvent_result_1;
	Parms.K2Node_CustomEvent_customData_3 = K2Node_CustomEvent_customData_3;
	Parms.K2Node_CustomEvent_error_1 = K2Node_CustomEvent_error_1;
	Parms.K2Node_CustomEvent_customData_2 = K2Node_CustomEvent_customData_2;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsPG_Player_State_Menu = K2Node_DynamicCast_AsPG_Player_State_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerCombinedInfo_ReturnValue = CallFunc_GetPlayerCombinedInfo_ReturnValue;
	Parms.K2Node_CustomEvent_response_2 = K2Node_CustomEvent_response_2;
	Parms.K2Node_CustomEvent_customData_10 = K2Node_CustomEvent_customData_10;
	Parms.K2Node_CustomEvent_successful_2 = K2Node_CustomEvent_successful_2;
	Parms.CallFunc_GetObjectField_ReturnValue = CallFunc_GetObjectField_ReturnValue;
	Parms.CallFunc_GetNumberField_ReturnValue = CallFunc_GetNumberField_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_ConstructJsonObject_ReturnValue_1 = CallFunc_ConstructJsonObject_ReturnValue_1;
	Parms.K2Node_CustomEvent_Stage = K2Node_CustomEvent_Stage;
	Parms.K2Node_CustomEvent_PlayFabError = K2Node_CustomEvent_PlayFabError;
	Parms.K2Node_LowEntry_LocalVariable_Value__1_Object = K2Node_LowEntry_LocalVariable_Value__1_Object;
	Parms.K2Node_MakeStruct_ClientWriteClientPlayerEventRequest = K2Node_MakeStruct_ClientWriteClientPlayerEventRequest;
	Parms.CallFunc_WritePlayerEvent_ReturnValue = CallFunc_WritePlayerEvent_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue_1 = CallFunc_IsEmpty_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsEmpty_ReturnValue_2 = CallFunc_IsEmpty_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_2 = CallFunc_Conv_IntToDouble_ReturnValue_2;
	Parms.K2Node_CustomEvent_result = K2Node_CustomEvent_result;
	Parms.K2Node_CustomEvent_customData_1 = K2Node_CustomEvent_customData_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CustomEvent_error = K2Node_CustomEvent_error;
	Parms.K2Node_CustomEvent_customData = K2Node_CustomEvent_customData;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu = K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.K2Node_CustomEvent_Data = K2Node_CustomEvent_Data;
	Parms.CallFunc_IsOverlayEnabled_ReturnValue = CallFunc_IsOverlayEnabled_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_StartPurchase_ReturnValue = CallFunc_StartPurchase_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeStruct_ClientConfirmPurchaseRequest = K2Node_MakeStruct_ClientConfirmPurchaseRequest;
	Parms.CallFunc_ConfirmPurchase_ReturnValue = CallFunc_ConfirmPurchase_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_MakeStruct_PlayFabError = K2Node_MakeStruct_PlayFabError;
	Parms.K2Node_MakeStruct_PlayFabError_1 = K2Node_MakeStruct_PlayFabError_1;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.CallFunc_PayForPurchase_ReturnValue = CallFunc_PayForPurchase_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_CustomEvent_response_3 = K2Node_CustomEvent_response_3;
	Parms.K2Node_CustomEvent_customData_11 = K2Node_CustomEvent_customData_11;
	Parms.K2Node_CustomEvent_successful_3 = K2Node_CustomEvent_successful_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetNumberField_Number_ImplicitCast = CallFunc_SetNumberField_Number_ImplicitCast;
	Parms.CallFunc_SetNumberField_Number_ImplicitCast_1 = CallFunc_SetNumberField_Number_ImplicitCast_1;
	Parms.CallFunc_SetNumberField_Number_ImplicitCast_2 = CallFunc_SetNumberField_Number_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


