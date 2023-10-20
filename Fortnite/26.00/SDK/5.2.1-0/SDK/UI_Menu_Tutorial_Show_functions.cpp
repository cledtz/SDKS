#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Menu_Tutorial_Show.UI_Menu_Tutorial_Show_C
// (None)

class UClass* UUI_Menu_Tutorial_Show_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Menu_Tutorial_Show_C");

	return Clss;
}


// UI_Menu_Tutorial_Show_C UI_Menu_Tutorial_Show.Default__UI_Menu_Tutorial_Show_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Menu_Tutorial_Show_C* UUI_Menu_Tutorial_Show_C::GetDefaultObj()
{
	static class UUI_Menu_Tutorial_Show_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Menu_Tutorial_Show_C*>(UUI_Menu_Tutorial_Show_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Menu_Tutorial_Show.UI_Menu_Tutorial_Show_C.DisableTutorialLocal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EModifiedData>   K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class UPG_PlayerState_Menu*        K2Node_DynamicCast_AsPG_Player_State_Menu                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetPlayerCombinedInfo_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Tutorial_Show_C::DisableTutorialLocal(class UPlayerController* CallFunc_GetPlayerController_ReturnValue, TArray<enum class EModifiedData>& K2Node_MakeArray_Array, class UPG_PlayerState_Menu* K2Node_DynamicCast_AsPG_Player_State_Menu, bool K2Node_DynamicCast_bSuccess, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Tutorial_Show_C", "DisableTutorialLocal");

	Params::UUI_Menu_Tutorial_Show_C_DisableTutorialLocal_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_DynamicCast_AsPG_Player_State_Menu = K2Node_DynamicCast_AsPG_Player_State_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerCombinedInfo_ReturnValue = CallFunc_GetPlayerCombinedInfo_ReturnValue;
	Parms.CallFunc_GetObjectField_ReturnValue = CallFunc_GetObjectField_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Tutorial_Show.UI_Menu_Tutorial_Show_C.OnPlayFabResponse_8E175A004BF299396E7FF1936175E0A8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel           Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Tutorial_Show_C::OnPlayFabResponse_8E175A004BF299396E7FF1936175E0A8(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Tutorial_Show_C", "OnPlayFabResponse_8E175A004BF299396E7FF1936175E0A8");

	Params::UUI_Menu_Tutorial_Show_C_OnPlayFabResponse_8E175A004BF299396E7FF1936175E0A8_Params Parms{};

	Parms.Response = Response;
	Parms.CustomData = CustomData;
	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Tutorial_Show.UI_Menu_Tutorial_Show_C.OnPlayFabResponse_2834E7BC44EE5C27AF494EACE2CE051F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel           Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Tutorial_Show_C::OnPlayFabResponse_2834E7BC44EE5C27AF494EACE2CE051F(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Tutorial_Show_C", "OnPlayFabResponse_2834E7BC44EE5C27AF494EACE2CE051F");

	Params::UUI_Menu_Tutorial_Show_C_OnPlayFabResponse_2834E7BC44EE5C27AF494EACE2CE051F_Params Parms{};

	Parms.Response = Response;
	Parms.CustomData = CustomData;
	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Tutorial_Show.UI_Menu_Tutorial_Show_C.BndEvt__UI_Menu_Tutorial_Show_Button_Ok_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Tutorial_Show_C::BndEvt__UI_Menu_Tutorial_Show_Button_Ok_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Tutorial_Show_C", "BndEvt__UI_Menu_Tutorial_Show_Button_Ok_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Menu_Tutorial_Show_C_BndEvt__UI_Menu_Tutorial_Show_Button_Ok_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Tutorial_Show.UI_Menu_Tutorial_Show_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Menu_Tutorial_Show_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Tutorial_Show_C", "Construct");

	Params::UUI_Menu_Tutorial_Show_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Tutorial_Show.UI_Menu_Tutorial_Show_C.WritePlayerEvent_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientWriteEventResponse   Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Tutorial_Show_C::WritePlayerEvent_Success(const struct FClientWriteEventResponse& Result, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Tutorial_Show_C", "WritePlayerEvent_Success");

	Params::UUI_Menu_Tutorial_Show_C_WritePlayerEvent_Success_Params Parms{};

	Parms.Result = Result;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Tutorial_Show.UI_Menu_Tutorial_Show_C.WritePlayerEvent_Failure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError               Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Tutorial_Show_C::WritePlayerEvent_Failure(const struct FPlayFabError& Error, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Tutorial_Show_C", "WritePlayerEvent_Failure");

	Params::UUI_Menu_Tutorial_Show_C_WritePlayerEvent_Failure_Params Parms{};

	Parms.Error = Error;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Tutorial_Show.UI_Menu_Tutorial_Show_C.BndEvt__UI_Menu_Tutorial_Show_Button_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Tutorial_Show_C::BndEvt__UI_Menu_Tutorial_Show_Button_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Tutorial_Show_C", "BndEvt__UI_Menu_Tutorial_Show_Button_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Menu_Tutorial_Show_C_BndEvt__UI_Menu_Tutorial_Show_Button_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Tutorial_Show.UI_Menu_Tutorial_Show_C.BndEvt__UI_Menu_Tutorial_Show_Button_Later_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Tutorial_Show_C::BndEvt__UI_Menu_Tutorial_Show_Button_Later_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Tutorial_Show_C", "BndEvt__UI_Menu_Tutorial_Show_Button_Later_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Menu_Tutorial_Show_C_BndEvt__UI_Menu_Tutorial_Show_Button_Later_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Tutorial_Show.UI_Menu_Tutorial_Show_C.ExecuteUbergraph_UI_Menu_Tutorial_Show
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           K2Node_CustomEvent_response_1                                    (None)
// class UObject*                     K2Node_CustomEvent_customData_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_successful_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           Temp_struct_Variable                                             (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_Menu_Tutorial_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           K2Node_CustomEvent_response                                      (None)
// class UObject*                     K2Node_CustomEvent_customData_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_successful                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           Temp_struct_Variable_1                                           (None)
// struct FClientWriteClientPlayerEventRequestK2Node_MakeStruct_ClientWriteClientPlayerEventRequest            (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabClientAPI*           CallFunc_WritePlayerEvent_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FClientWriteEventResponse   K2Node_CustomEvent_result                                        (None)
// class UObject*                     K2Node_CustomEvent_customData_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabError               K2Node_CustomEvent_error                                         (None)
// class UObject*                     K2Node_CustomEvent_customData                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FClientWriteClientPlayerEventRequestK2Node_MakeStruct_ClientWriteClientPlayerEventRequest_1          (None)
// class UPlayFabClientAPI*           CallFunc_WritePlayerEvent_ReturnValue_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Tutorial_Show_C::ExecuteUbergraph_UI_Menu_Tutorial_Show(int32 EntryPoint, const struct FPlayFabBaseModel& K2Node_CustomEvent_response_1, class UObject* K2Node_CustomEvent_customData_3, bool K2Node_CustomEvent_successful_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class UObject* Temp_object_Variable, const struct FPlayFabBaseModel& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUI_Menu_Tutorial_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FPlayFabBaseModel& K2Node_CustomEvent_response, class UObject* K2Node_CustomEvent_customData_2, bool K2Node_CustomEvent_successful, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_Variable_1, class UObject* Temp_object_Variable_1, const struct FPlayFabBaseModel& Temp_struct_Variable_1, const struct FClientWriteClientPlayerEventRequest& K2Node_MakeStruct_ClientWriteClientPlayerEventRequest, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UPlayFabClientAPI* CallFunc_WritePlayerEvent_ReturnValue, const struct FClientWriteEventResponse& K2Node_CustomEvent_result, class UObject* K2Node_CustomEvent_customData_1, bool CallFunc_IsValid_ReturnValue, const struct FPlayFabError& K2Node_CustomEvent_error, class UObject* K2Node_CustomEvent_customData, const struct FClientWriteClientPlayerEventRequest& K2Node_MakeStruct_ClientWriteClientPlayerEventRequest_1, class UPlayFabClientAPI* CallFunc_WritePlayerEvent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Tutorial_Show_C", "ExecuteUbergraph_UI_Menu_Tutorial_Show");

	Params::UUI_Menu_Tutorial_Show_C_ExecuteUbergraph_UI_Menu_Tutorial_Show_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_response_1 = K2Node_CustomEvent_response_1;
	Parms.K2Node_CustomEvent_customData_3 = K2Node_CustomEvent_customData_3;
	Parms.K2Node_CustomEvent_successful_1 = K2Node_CustomEvent_successful_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_response = K2Node_CustomEvent_response;
	Parms.K2Node_CustomEvent_customData_2 = K2Node_CustomEvent_customData_2;
	Parms.K2Node_CustomEvent_successful = K2Node_CustomEvent_successful;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_MakeStruct_ClientWriteClientPlayerEventRequest = K2Node_MakeStruct_ClientWriteClientPlayerEventRequest;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_WritePlayerEvent_ReturnValue = CallFunc_WritePlayerEvent_ReturnValue;
	Parms.K2Node_CustomEvent_result = K2Node_CustomEvent_result;
	Parms.K2Node_CustomEvent_customData_1 = K2Node_CustomEvent_customData_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_error = K2Node_CustomEvent_error;
	Parms.K2Node_CustomEvent_customData = K2Node_CustomEvent_customData;
	Parms.K2Node_MakeStruct_ClientWriteClientPlayerEventRequest_1 = K2Node_MakeStruct_ClientWriteClientPlayerEventRequest_1;
	Parms.CallFunc_WritePlayerEvent_ReturnValue_1 = CallFunc_WritePlayerEvent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


