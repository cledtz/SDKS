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


// Function Task_DevepolerLogin.Task_DevepolerLogin_C.ConstructRequestPlayerCombinedInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPlayFabJsonObject*          Request                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          L_Request                                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_ConstructJsonObject_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          K2Node_LowEntry_LocalVariable_Value__Object                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_ConstructJsonObject_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UTask_DevepolerLogin_C::ConstructRequestPlayerCombinedInfo(class UPlayFabJsonObject** Request, class UPlayFabJsonObject* L_Request, class UPlayFabJsonObject* CallFunc_ConstructJsonObject_ReturnValue, class UPlayFabJsonObject* K2Node_LowEntry_LocalVariable_Value__Object, class UPlayFabJsonObject* CallFunc_ConstructJsonObject_ReturnValue_1)
{
	static auto Func = Class->GetFunction("Task_DevepolerLogin_C", "ConstructRequestPlayerCombinedInfo");

	Params::UTask_DevepolerLogin_C_ConstructRequestPlayerCombinedInfo_Params Parms;

	Parms.L_Request = L_Request;
	Parms.CallFunc_ConstructJsonObject_ReturnValue = CallFunc_ConstructJsonObject_ReturnValue;
	Parms.K2Node_LowEntry_LocalVariable_Value__Object = K2Node_LowEntry_LocalVariable_Value__Object;
	Parms.CallFunc_ConstructJsonObject_ReturnValue_1 = CallFunc_ConstructJsonObject_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Request != nullptr)
		*Request = Parms.Request;

}


// Function Task_DevepolerLogin.Task_DevepolerLogin_C.OnPlayFabResponse_763BB15148AF2429F3E103B2AA4E64DC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel           Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_DevepolerLogin_C::OnPlayFabResponse_763BB15148AF2429F3E103B2AA4E64DC(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful)
{
	static auto Func = Class->GetFunction("Task_DevepolerLogin_C", "OnPlayFabResponse_763BB15148AF2429F3E103B2AA4E64DC");

	Params::UTask_DevepolerLogin_C_OnPlayFabResponse_763BB15148AF2429F3E103B2AA4E64DC_Params Parms;

	Parms.Response = Response;
	Parms.CustomData = CustomData;
	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_DevepolerLogin.Task_DevepolerLogin_C.OnPlayFabResponse_57D036694E81E3042DF61EA9CBCE87C6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel           Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_DevepolerLogin_C::OnPlayFabResponse_57D036694E81E3042DF61EA9CBCE87C6(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful)
{
	static auto Func = Class->GetFunction("Task_DevepolerLogin_C", "OnPlayFabResponse_57D036694E81E3042DF61EA9CBCE87C6");

	Params::UTask_DevepolerLogin_C_OnPlayFabResponse_57D036694E81E3042DF61EA9CBCE87C6_Params Parms;

	Parms.Response = Response;
	Parms.CustomData = CustomData;
	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_DevepolerLogin.Task_DevepolerLogin_C.ReceiveActivate
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTask_DevepolerLogin_C::ReceiveActivate()
{
	static auto Func = Class->GetFunction("Task_DevepolerLogin_C", "ReceiveActivate");

	Params::UTask_DevepolerLogin_C_ReceiveActivate_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_DevepolerLogin.Task_DevepolerLogin_C.Login_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientLoginResult          Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UTask_DevepolerLogin_C::Login_Success(const struct FClientLoginResult& Result, class UObject* CustomData)
{
	static auto Func = Class->GetFunction("Task_DevepolerLogin_C", "Login_Success");

	Params::UTask_DevepolerLogin_C_Login_Success_Params Parms;

	Parms.Result = Result;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_DevepolerLogin.Task_DevepolerLogin_C.Login_Failure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError               Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UTask_DevepolerLogin_C::Login_Failure(const struct FPlayFabError& Error, class UObject* CustomData)
{
	static auto Func = Class->GetFunction("Task_DevepolerLogin_C", "Login_Failure");

	Params::UTask_DevepolerLogin_C_Login_Failure_Params Parms;

	Parms.Error = Error;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_DevepolerLogin.Task_DevepolerLogin_C.GetPlayerCombinedInfo_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientGetPlayerCombinedInfoResultResult                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UTask_DevepolerLogin_C::GetPlayerCombinedInfo_Success(const struct FClientGetPlayerCombinedInfoResult& Result, class UObject* CustomData)
{
	static auto Func = Class->GetFunction("Task_DevepolerLogin_C", "GetPlayerCombinedInfo_Success");

	Params::UTask_DevepolerLogin_C_GetPlayerCombinedInfo_Success_Params Parms;

	Parms.Result = Result;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_DevepolerLogin.Task_DevepolerLogin_C.ExecuteUbergraph_Task_DevepolerLogin
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           Temp_struct_Variable                                             ()
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           K2Node_CustomEvent_response                                      ()
// class UObject*                     K2Node_CustomEvent_customData_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_successful                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           Temp_struct_Variable_1                                           ()
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WithEditor_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_ConstructRequestPlayerCombinedInfo_Request              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FClientLoginWithCustomIDRequestK2Node_MakeStruct_ClientLoginWithCustomIDRequest                 ()
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabClientAPI*           CallFunc_LoginWithCustomID_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPG_PlayerState_Base*        K2Node_DynamicCast_AsPG_Player_State_Base                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EModifiedData>   K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// struct FClientLoginResult          K2Node_CustomEvent_result_1                                      ()
// class UObject*                     K2Node_CustomEvent_customData_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasField_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabError               K2Node_CustomEvent_error                                         ()
// class UObject*                     K2Node_CustomEvent_customData_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_ConstructRequestPlayerCombinedInfo_Request_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           K2Node_CustomEvent_response_1                                    ()
// class UObject*                     K2Node_CustomEvent_customData_4                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_successful_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClientGetPlayerCombinedInfoRequestK2Node_MakeStruct_ClientGetPlayerCombinedInfoRequest             ()
// struct FClientGetPlayerCombinedInfoResultK2Node_CustomEvent_result                                        ()
// class UObject*                     K2Node_CustomEvent_customData                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabClientAPI*           CallFunc_GetPlayerCombinedInfo_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EModifiedData>   K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_DevepolerLogin_C::ExecuteUbergraph_Task_DevepolerLogin(int32 EntryPoint, bool Temp_bool_Variable, class UObject* Temp_object_Variable, const struct FPlayFabBaseModel& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FPlayFabBaseModel& K2Node_CustomEvent_response, class UObject* K2Node_CustomEvent_customData_3, bool K2Node_CustomEvent_successful, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable_1, class UObject* Temp_object_Variable_1, const struct FPlayFabBaseModel& Temp_struct_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_WithEditor_ReturnValue, class UPlayFabJsonObject* CallFunc_ConstructRequestPlayerCombinedInfo_Request, const struct FClientLoginWithCustomIDRequest& K2Node_MakeStruct_ClientLoginWithCustomIDRequest, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UPlayFabClientAPI* CallFunc_LoginWithCustomID_ReturnValue, class UPG_PlayerState_Base* K2Node_DynamicCast_AsPG_Player_State_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TArray<enum class EModifiedData>& K2Node_MakeArray_Array, const struct FClientLoginResult& K2Node_CustomEvent_result_1, class UObject* K2Node_CustomEvent_customData_2, bool CallFunc_HasField_ReturnValue, const struct FPlayFabError& K2Node_CustomEvent_error, class UObject* K2Node_CustomEvent_customData_1, class UPlayFabJsonObject* CallFunc_ConstructRequestPlayerCombinedInfo_Request_1, const struct FPlayFabBaseModel& K2Node_CustomEvent_response_1, class UObject* K2Node_CustomEvent_customData_4, bool K2Node_CustomEvent_successful_1, const struct FClientGetPlayerCombinedInfoRequest& K2Node_MakeStruct_ClientGetPlayerCombinedInfoRequest, const struct FClientGetPlayerCombinedInfoResult& K2Node_CustomEvent_result, class UObject* K2Node_CustomEvent_customData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UPlayFabClientAPI* CallFunc_GetPlayerCombinedInfo_ReturnValue, TArray<enum class EModifiedData>& K2Node_MakeArray_Array_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static auto Func = Class->GetFunction("Task_DevepolerLogin_C", "ExecuteUbergraph_Task_DevepolerLogin");

	Params::UTask_DevepolerLogin_C_ExecuteUbergraph_Task_DevepolerLogin_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_response = K2Node_CustomEvent_response;
	Parms.K2Node_CustomEvent_customData_3 = K2Node_CustomEvent_customData_3;
	Parms.K2Node_CustomEvent_successful = K2Node_CustomEvent_successful;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_WithEditor_ReturnValue = CallFunc_WithEditor_ReturnValue;
	Parms.CallFunc_ConstructRequestPlayerCombinedInfo_Request = CallFunc_ConstructRequestPlayerCombinedInfo_Request;
	Parms.K2Node_MakeStruct_ClientLoginWithCustomIDRequest = K2Node_MakeStruct_ClientLoginWithCustomIDRequest;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_LoginWithCustomID_ReturnValue = CallFunc_LoginWithCustomID_ReturnValue;
	Parms.K2Node_DynamicCast_AsPG_Player_State_Base = K2Node_DynamicCast_AsPG_Player_State_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CustomEvent_result_1 = K2Node_CustomEvent_result_1;
	Parms.K2Node_CustomEvent_customData_2 = K2Node_CustomEvent_customData_2;
	Parms.CallFunc_HasField_ReturnValue = CallFunc_HasField_ReturnValue;
	Parms.K2Node_CustomEvent_error = K2Node_CustomEvent_error;
	Parms.K2Node_CustomEvent_customData_1 = K2Node_CustomEvent_customData_1;
	Parms.CallFunc_ConstructRequestPlayerCombinedInfo_Request_1 = CallFunc_ConstructRequestPlayerCombinedInfo_Request_1;
	Parms.K2Node_CustomEvent_response_1 = K2Node_CustomEvent_response_1;
	Parms.K2Node_CustomEvent_customData_4 = K2Node_CustomEvent_customData_4;
	Parms.K2Node_CustomEvent_successful_1 = K2Node_CustomEvent_successful_1;
	Parms.K2Node_MakeStruct_ClientGetPlayerCombinedInfoRequest = K2Node_MakeStruct_ClientGetPlayerCombinedInfoRequest;
	Parms.K2Node_CustomEvent_result = K2Node_CustomEvent_result;
	Parms.K2Node_CustomEvent_customData = K2Node_CustomEvent_customData;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetPlayerCombinedInfo_ReturnValue = CallFunc_GetPlayerCombinedInfo_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_DevepolerLogin.Task_DevepolerLogin_C.OnSuccess__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTask_DevepolerLogin_C::OnSuccess__DelegateSignature()
{
	static auto Func = Class->GetFunction("Task_DevepolerLogin_C", "OnSuccess__DelegateSignature");

	Params::UTask_DevepolerLogin_C_OnSuccess__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_DevepolerLogin.Task_DevepolerLogin_C.OnFailure__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError               Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UTask_DevepolerLogin_C::OnFailure__DelegateSignature(const struct FPlayFabError& Error)
{
	static auto Func = Class->GetFunction("Task_DevepolerLogin_C", "OnFailure__DelegateSignature");

	Params::UTask_DevepolerLogin_C_OnFailure__DelegateSignature_Params Parms;

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
