#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_LoginScreen.UI_LoginScreen_C
// (None)

class UClass* UUI_LoginScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_LoginScreen_C");

	return Clss;
}


// UI_LoginScreen_C UI_LoginScreen.Default__UI_LoginScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_LoginScreen_C* UUI_LoginScreen_C::GetDefaultObj()
{
	static class UUI_LoginScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_LoginScreen_C*>(UUI_LoginScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_LoginScreen.UI_LoginScreen_C.ConstructRequestPlayerCombinedInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPlayFabJsonObject*          Request                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          L_Request                                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_ConstructJsonObject_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          K2Node_LowEntry_LocalVariable_Value__Object                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_ConstructJsonObject_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_LoginScreen_C::ConstructRequestPlayerCombinedInfo(class UPlayFabJsonObject** Request, class UPlayFabJsonObject* L_Request, class UPlayFabJsonObject* CallFunc_ConstructJsonObject_ReturnValue, class UPlayFabJsonObject* K2Node_LowEntry_LocalVariable_Value__Object, class UPlayFabJsonObject* CallFunc_ConstructJsonObject_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LoginScreen_C", "ConstructRequestPlayerCombinedInfo");

	Params::UUI_LoginScreen_C_ConstructRequestPlayerCombinedInfo_Params Parms{};

	Parms.L_Request = L_Request;
	Parms.CallFunc_ConstructJsonObject_ReturnValue = CallFunc_ConstructJsonObject_ReturnValue;
	Parms.K2Node_LowEntry_LocalVariable_Value__Object = K2Node_LowEntry_LocalVariable_Value__Object;
	Parms.CallFunc_ConstructJsonObject_ReturnValue_1 = CallFunc_ConstructJsonObject_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Request != nullptr)
		*Request = Parms.Request;

}


// Function UI_LoginScreen.UI_LoginScreen_C.ShowErrorMessage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError               PlayFabError                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)

void UUI_LoginScreen_C::ShowErrorMessage(struct FPlayFabError& PlayFabError, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LoginScreen_C", "ShowErrorMessage");

	Params::UUI_LoginScreen_C_ShowErrorMessage_Params Parms{};

	Parms.PlayFabError = PlayFabError;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LoginScreen.UI_LoginScreen_C.OnPlayFabResponse_C212664541185E46F64DD1B5C3B4F97F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel           Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LoginScreen_C::OnPlayFabResponse_C212664541185E46F64DD1B5C3B4F97F(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LoginScreen_C", "OnPlayFabResponse_C212664541185E46F64DD1B5C3B4F97F");

	Params::UUI_LoginScreen_C_OnPlayFabResponse_C212664541185E46F64DD1B5C3B4F97F_Params Parms{};

	Parms.Response = Response;
	Parms.CustomData = CustomData;
	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LoginScreen.UI_LoginScreen_C.OnPlayFabResponse_9D53D0BB48321AF2818524814BD8FB06
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel           Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LoginScreen_C::OnPlayFabResponse_9D53D0BB48321AF2818524814BD8FB06(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LoginScreen_C", "OnPlayFabResponse_9D53D0BB48321AF2818524814BD8FB06");

	Params::UUI_LoginScreen_C_OnPlayFabResponse_9D53D0BB48321AF2818524814BD8FB06_Params Parms{};

	Parms.Response = Response;
	Parms.CustomData = CustomData;
	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LoginScreen.UI_LoginScreen_C.OnPlayFabResponse_DA74F5AB45E383FF5D542A96BD744E9E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel           Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LoginScreen_C::OnPlayFabResponse_DA74F5AB45E383FF5D542A96BD744E9E(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LoginScreen_C", "OnPlayFabResponse_DA74F5AB45E383FF5D542A96BD744E9E");

	Params::UUI_LoginScreen_C_OnPlayFabResponse_DA74F5AB45E383FF5D542A96BD744E9E_Params Parms{};

	Parms.Response = Response;
	Parms.CustomData = CustomData;
	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LoginScreen.UI_LoginScreen_C.OnLoginComplete_AE47C52642B7D27765F4D3B14A92D63C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            UserId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FString                      Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_LoginScreen_C::OnLoginComplete_AE47C52642B7D27765F4D3B14A92D63C(bool bWasSuccessful, const struct FUniqueNetIdRepl& UserId, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LoginScreen_C", "OnLoginComplete_AE47C52642B7D27765F4D3B14A92D63C");

	Params::UUI_LoginScreen_C_OnLoginComplete_AE47C52642B7D27765F4D3B14A92D63C_Params Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.UserId = UserId;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LoginScreen.UI_LoginScreen_C.OnCallFailed_AE47C52642B7D27765F4D3B14A92D63C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            UserId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FString                      Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_LoginScreen_C::OnCallFailed_AE47C52642B7D27765F4D3B14A92D63C(bool bWasSuccessful, const struct FUniqueNetIdRepl& UserId, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LoginScreen_C", "OnCallFailed_AE47C52642B7D27765F4D3B14A92D63C");

	Params::UUI_LoginScreen_C_OnCallFailed_AE47C52642B7D27765F4D3B14A92D63C_Params Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.UserId = UserId;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LoginScreen.UI_LoginScreen_C.OnSuccess_20F411B94BC59186A71DF7BFB60DE6BC
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_LoginScreen_C::OnSuccess_20F411B94BC59186A71DF7BFB60DE6BC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LoginScreen_C", "OnSuccess_20F411B94BC59186A71DF7BFB60DE6BC");

	Params::UUI_LoginScreen_C_OnSuccess_20F411B94BC59186A71DF7BFB60DE6BC_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LoginScreen.UI_LoginScreen_C.OnPlayFabResponse_77B2D5324B52ABCD7EAADE81E626F006
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel           Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LoginScreen_C::OnPlayFabResponse_77B2D5324B52ABCD7EAADE81E626F006(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LoginScreen_C", "OnPlayFabResponse_77B2D5324B52ABCD7EAADE81E626F006");

	Params::UUI_LoginScreen_C_OnPlayFabResponse_77B2D5324B52ABCD7EAADE81E626F006_Params Parms{};

	Parms.Response = Response;
	Parms.CustomData = CustomData;
	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LoginScreen.UI_LoginScreen_C.LoginViaOnlineService
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_LoginScreen_C::LoginViaOnlineService()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LoginScreen_C", "LoginViaOnlineService");

	Params::UUI_LoginScreen_C_LoginViaOnlineService_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LoginScreen.UI_LoginScreen_C.LoginViaCustomID
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_LoginScreen_C::LoginViaCustomID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LoginScreen_C", "LoginViaCustomID");

	Params::UUI_LoginScreen_C_LoginViaCustomID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LoginScreen.UI_LoginScreen_C.LoginWithSteam_Failure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError               Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_LoginScreen_C::LoginWithSteam_Failure(const struct FPlayFabError& Error, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LoginScreen_C", "LoginWithSteam_Failure");

	Params::UUI_LoginScreen_C_LoginWithSteam_Failure_Params Parms{};

	Parms.Error = Error;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LoginScreen.UI_LoginScreen_C.RequestPlayerCombinedInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_LoginScreen_C::RequestPlayerCombinedInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LoginScreen_C", "RequestPlayerCombinedInfo");

	Params::UUI_LoginScreen_C_RequestPlayerCombinedInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LoginScreen.UI_LoginScreen_C.Login
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_LoginScreen_C::Login()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LoginScreen_C", "Login");

	Params::UUI_LoginScreen_C_Login_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LoginScreen.UI_LoginScreen_C.GetPlayerCombinedInfo_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientGetPlayerCombinedInfoResultResult                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_LoginScreen_C::GetPlayerCombinedInfo_Success(const struct FClientGetPlayerCombinedInfoResult& Result, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LoginScreen_C", "GetPlayerCombinedInfo_Success");

	Params::UUI_LoginScreen_C_GetPlayerCombinedInfo_Success_Params Parms{};

	Parms.Result = Result;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LoginScreen.UI_LoginScreen_C.GetPlayerCombinedInfo_Failure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError               Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_LoginScreen_C::GetPlayerCombinedInfo_Failure(const struct FPlayFabError& Error, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LoginScreen_C", "GetPlayerCombinedInfo_Failure");

	Params::UUI_LoginScreen_C_GetPlayerCombinedInfo_Failure_Params Parms{};

	Parms.Error = Error;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LoginScreen.UI_LoginScreen_C.LoginWithSteam_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientLoginResult          Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_LoginScreen_C::LoginWithSteam_Success(const struct FClientLoginResult& Result, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LoginScreen_C", "LoginWithSteam_Success");

	Params::UUI_LoginScreen_C_LoginWithSteam_Success_Params Parms{};

	Parms.Result = Result;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LoginScreen.UI_LoginScreen_C.UpdateUserTitleDisplayName_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientUpdateUserTitleDisplayNameResultResult                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_LoginScreen_C::UpdateUserTitleDisplayName_Success(const struct FClientUpdateUserTitleDisplayNameResult& Result, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LoginScreen_C", "UpdateUserTitleDisplayName_Success");

	Params::UUI_LoginScreen_C_UpdateUserTitleDisplayName_Success_Params Parms{};

	Parms.Result = Result;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LoginScreen.UI_LoginScreen_C.UpdateUserTitleDisplayName_Failure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError               Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_LoginScreen_C::UpdateUserTitleDisplayName_Failure(const struct FPlayFabError& Error, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LoginScreen_C", "UpdateUserTitleDisplayName_Failure");

	Params::UUI_LoginScreen_C_UpdateUserTitleDisplayName_Failure_Params Parms{};

	Parms.Error = Error;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LoginScreen.UI_LoginScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_LoginScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LoginScreen_C", "Construct");

	Params::UUI_LoginScreen_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LoginScreen.UI_LoginScreen_C.DeveloperLogin_Failure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError               Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_LoginScreen_C::DeveloperLogin_Failure(const struct FPlayFabError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LoginScreen_C", "DeveloperLogin_Failure");

	Params::UUI_LoginScreen_C_DeveloperLogin_Failure_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LoginScreen.UI_LoginScreen_C.GetAuthSessionTicketResponse_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGetAuthSessionTicketResponseData                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UUI_LoginScreen_C::GetAuthSessionTicketResponse_Event(struct FGetAuthSessionTicketResponse& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LoginScreen_C", "GetAuthSessionTicketResponse_Event");

	Params::UUI_LoginScreen_C_GetAuthSessionTicketResponse_Event_Params Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LoginScreen.UI_LoginScreen_C.UpdateUsedData_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientUpdateUserDataResult Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_LoginScreen_C::UpdateUsedData_Success(const struct FClientUpdateUserDataResult& Result, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LoginScreen_C", "UpdateUsedData_Success");

	Params::UUI_LoginScreen_C_UpdateUsedData_Success_Params Parms{};

	Parms.Result = Result;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LoginScreen.UI_LoginScreen_C.UpdateUsedData_Failure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError               Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_LoginScreen_C::UpdateUsedData_Failure(const struct FPlayFabError& Error, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LoginScreen_C", "UpdateUsedData_Failure");

	Params::UUI_LoginScreen_C_UpdateUsedData_Failure_Params Parms{};

	Parms.Error = Error;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LoginScreen.UI_LoginScreen_C.WriteEvent_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientWriteEventResponse   Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_LoginScreen_C::WriteEvent_Success(const struct FClientWriteEventResponse& Result, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LoginScreen_C", "WriteEvent_Success");

	Params::UUI_LoginScreen_C_WriteEvent_Success_Params Parms{};

	Parms.Result = Result;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LoginScreen.UI_LoginScreen_C.WriteEvent_Failure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError               Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_LoginScreen_C::WriteEvent_Failure(const struct FPlayFabError& Error, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LoginScreen_C", "WriteEvent_Failure");

	Params::UUI_LoginScreen_C_WriteEvent_Failure_Params Parms{};

	Parms.Error = Error;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LoginScreen.UI_LoginScreen_C.UpdateRequiredDataInDatabase
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_LoginScreen_C::UpdateRequiredDataInDatabase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LoginScreen_C", "UpdateRequiredDataInDatabase");

	Params::UUI_LoginScreen_C_UpdateRequiredDataInDatabase_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LoginScreen.UI_LoginScreen_C.ExecuteUbergraph_UI_LoginScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           K2Node_CustomEvent_response_3                                    (None)
// class UObject*                     K2Node_CustomEvent_customData_13                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_successful_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           K2Node_CustomEvent_response_1                                    (None)
// class UObject*                     K2Node_CustomEvent_customData_11                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_successful_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           Temp_struct_Variable                                             (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UOnlineIdentitySubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UOnlineIdentitySubsystemAutoLogin*CallFunc_AutoLogin_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EOnlineLoginStatus      CallFunc_GetLoginStatus_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_UserId_1                                      (HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_error_7                                       (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_UserId                                        (HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_error_6                                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            Temp_struct_Variable_1                                           (HasGetValueTypeHash)
// struct FPlayFabError               K2Node_MakeStruct_PlayFabError                                   (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUser*                       CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUser*                       CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           K2Node_CustomEvent_response                                      (None)
// class UObject*                     K2Node_CustomEvent_customData_10                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_successful                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           Temp_struct_Variable_2                                           (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WithEditor_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabError               K2Node_CustomEvent_error_5                                       (None)
// class UObject*                     K2Node_CustomEvent_customData_9                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsClientLoggedIn_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Menu_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_ConstructRequestPlayerCombinedInfo_Request              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_ConstructRequestPlayerCombinedInfo_Request_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FClientGetPlayerCombinedInfoRequestK2Node_MakeStruct_ClientGetPlayerCombinedInfoRequest             (None)
// struct FClientGetPlayerCombinedInfoResultK2Node_CustomEvent_result_4                                      (None)
// class UObject*                     K2Node_CustomEvent_customData_8                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabClientAPI*           CallFunc_GetPlayerCombinedInfo_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPlayFabJsonObject*>  CallFunc_GetObjectArrayField_ReturnValue                         (ReferenceParm)
// struct FPlayFabError               K2Node_CustomEvent_error_4                                       (None)
// class UObject*                     K2Node_CustomEvent_customData_7                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClientLoginResult          K2Node_CustomEvent_result_3                                      (None)
// class UObject*                     K2Node_CustomEvent_customData_6                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClientUpdateUserTitleDisplayNameResultK2Node_CustomEvent_result_2                                      (None)
// class UObject*                     K2Node_CustomEvent_customData_5                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabError               K2Node_CustomEvent_error_3                                       (None)
// class UObject*                     K2Node_CustomEvent_customData_4                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           Temp_struct_Variable_3                                           (None)
// TArray<enum class EModifiedData>   K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// TArray<enum class EModifiedData>   K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTask_DevepolerLogin_C*      CallFunc_CreateAction_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabError               K2Node_CustomEvent_error_2                                       (None)
// TArray<uint8>                      CallFunc_GetAuthSessionTicket_Ticket                             (ReferenceParm)
// struct FSteamTicketHandle          CallFunc_GetAuthSessionTicket_ReturnValue                        (NoDestructor)
// bool                               CallFunc_IsSteamTicketHandleValid_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGetAuthSessionTicketResponseK2Node_CustomEvent_Data                                          (ConstParm, NoDestructor)
// class UObject*                     Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSteamTicketHandleValid_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<uint8>                      CallFunc_GetAuthSessionTicket_Ticket_1                           (ReferenceParm)
// struct FSteamTicketHandle          CallFunc_GetAuthSessionTicket_ReturnValue_1                      (NoDestructor)
// struct FPlayFabBaseModel           K2Node_CustomEvent_response_2                                    (None)
// class UObject*                     K2Node_CustomEvent_customData_12                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_successful_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BytesToHex_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// struct FClientLoginWithSteamRequestK2Node_MakeStruct_ClientLoginWithSteamRequest                    (None)
// class UPlayFabJsonObject*          CallFunc_ConstructJsonObject_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          K2Node_LowEntry_LocalVariable_Value__Object                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetFieldNames_ReturnValue                               (ReferenceParm)
// class FString                      CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClientUpdateUserDataRequestK2Node_MakeStruct_ClientUpdateUserDataRequest                    (None)
// class UPlayFabClientAPI*           CallFunc_UpdateUserData_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FClientUpdateUserDataResult K2Node_CustomEvent_result_1                                      (NoDestructor)
// class UObject*                     K2Node_CustomEvent_customData_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabError               K2Node_CustomEvent_error_1                                       (None)
// class UObject*                     K2Node_CustomEvent_customData_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAppBuildId_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetPlayerCombinedInfo_ReturnValue_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasField_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerState_Menu_C*   K2Node_DynamicCast_AsBP_PG_Player_State_Menu                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabClientAPI*           CallFunc_LoginWithSteam_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetPlayerCombinedInfo_ReturnValue_2                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNumberField_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasField_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClientWriteEventResponse   K2Node_CustomEvent_result                                        (None)
// class UObject*                     K2Node_CustomEvent_customData_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabError               K2Node_CustomEvent_error                                         (None)
// class UObject*                     K2Node_CustomEvent_customData                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           Temp_struct_Variable_4                                           (None)
// class UObject*                     Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetPlayerCombinedInfo_ReturnValue_3                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetPlayerCombinedInfo_ReturnValue_4                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue_2                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue_3                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasField_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue_4                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue_5                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_HasField_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClientUpdateUserTitleDisplayNameRequestK2Node_MakeStruct_ClientUpdateUserTitleDisplayNameRequest        (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayFabClientAPI*           CallFunc_UpdateUserTitleDisplayName_ReturnValue                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetNumberField_Number_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NotEqual_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LoginScreen_C::ExecuteUbergraph_UI_LoginScreen(int32 EntryPoint, const struct FPlayFabBaseModel& K2Node_CustomEvent_response_3, class UObject* K2Node_CustomEvent_customData_13, bool K2Node_CustomEvent_successful_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FPlayFabBaseModel& K2Node_CustomEvent_response_1, class UObject* K2Node_CustomEvent_customData_11, bool K2Node_CustomEvent_successful_1, bool Temp_bool_Variable, class UObject* Temp_object_Variable, const struct FPlayFabBaseModel& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UOnlineIdentitySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UOnlineIdentitySubsystemAutoLogin* CallFunc_AutoLogin_ReturnValue, enum class EOnlineLoginStatus CallFunc_GetLoginStatus_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_CustomEvent_bWasSuccessful_1, const struct FUniqueNetIdRepl& K2Node_CustomEvent_UserId_1, const class FString& K2Node_CustomEvent_error_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool K2Node_CustomEvent_bWasSuccessful, const struct FUniqueNetIdRepl& K2Node_CustomEvent_UserId, const class FString& K2Node_CustomEvent_error_6, const class FString& Temp_string_Variable, const struct FUniqueNetIdRepl& Temp_struct_Variable_1, const struct FPlayFabError& K2Node_MakeStruct_PlayFabError, bool Temp_bool_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class UUser* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UUser* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, const struct FPlayFabBaseModel& K2Node_CustomEvent_response, class UObject* K2Node_CustomEvent_customData_10, bool K2Node_CustomEvent_successful, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, bool Temp_bool_Variable_2, class UObject* Temp_object_Variable_1, const struct FPlayFabBaseModel& Temp_struct_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, bool CallFunc_WithEditor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FPlayFabError& K2Node_CustomEvent_error_5, class UObject* K2Node_CustomEvent_customData_9, bool CallFunc_IsClientLoggedIn_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, class UPlayFabJsonObject* CallFunc_ConstructRequestPlayerCombinedInfo_Request, class UPlayFabJsonObject* CallFunc_ConstructRequestPlayerCombinedInfo_Request_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, const struct FClientGetPlayerCombinedInfoRequest& K2Node_MakeStruct_ClientGetPlayerCombinedInfoRequest, const struct FClientGetPlayerCombinedInfoResult& K2Node_CustomEvent_result_4, class UObject* K2Node_CustomEvent_customData_8, class UPlayFabClientAPI* CallFunc_GetPlayerCombinedInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class UPlayFabJsonObject*>& CallFunc_GetObjectArrayField_ReturnValue, const struct FPlayFabError& K2Node_CustomEvent_error_4, class UObject* K2Node_CustomEvent_customData_7, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FClientLoginResult& K2Node_CustomEvent_result_3, class UObject* K2Node_CustomEvent_customData_6, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FClientUpdateUserTitleDisplayNameResult& K2Node_CustomEvent_result_2, class UObject* K2Node_CustomEvent_customData_5, const struct FPlayFabError& K2Node_CustomEvent_error_3, class UObject* K2Node_CustomEvent_customData_4, const struct FPlayFabBaseModel& Temp_struct_Variable_3, TArray<enum class EModifiedData>& K2Node_MakeArray_Array, TArray<enum class EModifiedData>& K2Node_MakeArray_Array_1, bool Temp_bool_IsClosed_Variable, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UTask_DevepolerLogin_C* CallFunc_CreateAction_ReturnValue, const struct FPlayFabError& K2Node_CustomEvent_error_2, TArray<uint8>& CallFunc_GetAuthSessionTicket_Ticket, const struct FSteamTicketHandle& CallFunc_GetAuthSessionTicket_ReturnValue, bool CallFunc_IsSteamTicketHandleValid_ReturnValue, const struct FGetAuthSessionTicketResponse& K2Node_CustomEvent_Data, class UObject* Temp_object_Variable_2, bool CallFunc_IsSteamTicketHandleValid_ReturnValue_1, bool Temp_bool_Variable_3, TArray<uint8>& CallFunc_GetAuthSessionTicket_Ticket_1, const struct FSteamTicketHandle& CallFunc_GetAuthSessionTicket_ReturnValue_1, const struct FPlayFabBaseModel& K2Node_CustomEvent_response_2, class UObject* K2Node_CustomEvent_customData_12, bool K2Node_CustomEvent_successful_2, const class FString& CallFunc_BytesToHex_ReturnValue, const struct FClientLoginWithSteamRequest& K2Node_MakeStruct_ClientLoginWithSteamRequest, class UPlayFabJsonObject* CallFunc_ConstructJsonObject_ReturnValue, class UPlayFabJsonObject* K2Node_LowEntry_LocalVariable_Value__Object, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, TArray<class FString>& CallFunc_GetFieldNames_ReturnValue, const class FString& CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, const struct FClientUpdateUserDataRequest& K2Node_MakeStruct_ClientUpdateUserDataRequest, class UPlayFabClientAPI* CallFunc_UpdateUserData_ReturnValue, const struct FClientUpdateUserDataResult& K2Node_CustomEvent_result_1, class UObject* K2Node_CustomEvent_customData_3, bool CallFunc_IsValid_ReturnValue_2, const struct FPlayFabError& K2Node_CustomEvent_error_1, class UObject* K2Node_CustomEvent_customData_2, int32 CallFunc_GetAppBuildId_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_1, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue, bool CallFunc_HasField_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class UBP_PG_PlayerState_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_State_Menu, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class UPlayFabClientAPI* CallFunc_LoginWithSteam_ReturnValue, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_1, float CallFunc_GetNumberField_ReturnValue, bool CallFunc_HasField_ReturnValue_1, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, const struct FClientWriteEventResponse& K2Node_CustomEvent_result, class UObject* K2Node_CustomEvent_customData_1, const struct FPlayFabError& K2Node_CustomEvent_error, class UObject* K2Node_CustomEvent_customData, const struct FPlayFabBaseModel& Temp_struct_Variable_4, class UObject* Temp_object_Variable_3, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue_3, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue_4, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_2, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_3, bool CallFunc_HasField_ReturnValue_2, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_4, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_5, const class FString& CallFunc_GetStringField_ReturnValue, bool CallFunc_HasField_ReturnValue_3, const struct FClientUpdateUserTitleDisplayNameRequest& K2Node_MakeStruct_ClientUpdateUserTitleDisplayNameRequest, bool CallFunc_Not_PreBool_ReturnValue_4, class UPlayFabClientAPI* CallFunc_UpdateUserTitleDisplayName_ReturnValue, const class FString& CallFunc_GetStringField_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Variable_4, float CallFunc_SetNumberField_Number_ImplicitCast, double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LoginScreen_C", "ExecuteUbergraph_UI_LoginScreen");

	Params::UUI_LoginScreen_C_ExecuteUbergraph_UI_LoginScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_response_3 = K2Node_CustomEvent_response_3;
	Parms.K2Node_CustomEvent_customData_13 = K2Node_CustomEvent_customData_13;
	Parms.K2Node_CustomEvent_successful_3 = K2Node_CustomEvent_successful_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_response_1 = K2Node_CustomEvent_response_1;
	Parms.K2Node_CustomEvent_customData_11 = K2Node_CustomEvent_customData_11;
	Parms.K2Node_CustomEvent_successful_1 = K2Node_CustomEvent_successful_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_AutoLogin_ReturnValue = CallFunc_AutoLogin_ReturnValue;
	Parms.CallFunc_GetLoginStatus_ReturnValue = CallFunc_GetLoginStatus_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_bWasSuccessful_1 = K2Node_CustomEvent_bWasSuccessful_1;
	Parms.K2Node_CustomEvent_UserId_1 = K2Node_CustomEvent_UserId_1;
	Parms.K2Node_CustomEvent_error_7 = K2Node_CustomEvent_error_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CustomEvent_bWasSuccessful = K2Node_CustomEvent_bWasSuccessful;
	Parms.K2Node_CustomEvent_UserId = K2Node_CustomEvent_UserId;
	Parms.K2Node_CustomEvent_error_6 = K2Node_CustomEvent_error_6;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_MakeStruct_PlayFabError = K2Node_MakeStruct_PlayFabError;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.K2Node_CustomEvent_response = K2Node_CustomEvent_response;
	Parms.K2Node_CustomEvent_customData_10 = K2Node_CustomEvent_customData_10;
	Parms.K2Node_CustomEvent_successful = K2Node_CustomEvent_successful;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.CallFunc_WithEditor_ReturnValue = CallFunc_WithEditor_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_error_5 = K2Node_CustomEvent_error_5;
	Parms.K2Node_CustomEvent_customData_9 = K2Node_CustomEvent_customData_9;
	Parms.CallFunc_IsClientLoggedIn_ReturnValue = CallFunc_IsClientLoggedIn_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu = K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ConstructRequestPlayerCombinedInfo_Request = CallFunc_ConstructRequestPlayerCombinedInfo_Request;
	Parms.CallFunc_ConstructRequestPlayerCombinedInfo_Request_1 = CallFunc_ConstructRequestPlayerCombinedInfo_Request_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.K2Node_MakeStruct_ClientGetPlayerCombinedInfoRequest = K2Node_MakeStruct_ClientGetPlayerCombinedInfoRequest;
	Parms.K2Node_CustomEvent_result_4 = K2Node_CustomEvent_result_4;
	Parms.K2Node_CustomEvent_customData_8 = K2Node_CustomEvent_customData_8;
	Parms.CallFunc_GetPlayerCombinedInfo_ReturnValue = CallFunc_GetPlayerCombinedInfo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetObjectArrayField_ReturnValue = CallFunc_GetObjectArrayField_ReturnValue;
	Parms.K2Node_CustomEvent_error_4 = K2Node_CustomEvent_error_4;
	Parms.K2Node_CustomEvent_customData_7 = K2Node_CustomEvent_customData_7;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_result_3 = K2Node_CustomEvent_result_3;
	Parms.K2Node_CustomEvent_customData_6 = K2Node_CustomEvent_customData_6;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_CustomEvent_result_2 = K2Node_CustomEvent_result_2;
	Parms.K2Node_CustomEvent_customData_5 = K2Node_CustomEvent_customData_5;
	Parms.K2Node_CustomEvent_error_3 = K2Node_CustomEvent_error_3;
	Parms.K2Node_CustomEvent_customData_4 = K2Node_CustomEvent_customData_4;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_CreateAction_ReturnValue = CallFunc_CreateAction_ReturnValue;
	Parms.K2Node_CustomEvent_error_2 = K2Node_CustomEvent_error_2;
	Parms.CallFunc_GetAuthSessionTicket_Ticket = CallFunc_GetAuthSessionTicket_Ticket;
	Parms.CallFunc_GetAuthSessionTicket_ReturnValue = CallFunc_GetAuthSessionTicket_ReturnValue;
	Parms.CallFunc_IsSteamTicketHandleValid_ReturnValue = CallFunc_IsSteamTicketHandleValid_ReturnValue;
	Parms.K2Node_CustomEvent_Data = K2Node_CustomEvent_Data;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.CallFunc_IsSteamTicketHandleValid_ReturnValue_1 = CallFunc_IsSteamTicketHandleValid_ReturnValue_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_GetAuthSessionTicket_Ticket_1 = CallFunc_GetAuthSessionTicket_Ticket_1;
	Parms.CallFunc_GetAuthSessionTicket_ReturnValue_1 = CallFunc_GetAuthSessionTicket_ReturnValue_1;
	Parms.K2Node_CustomEvent_response_2 = K2Node_CustomEvent_response_2;
	Parms.K2Node_CustomEvent_customData_12 = K2Node_CustomEvent_customData_12;
	Parms.K2Node_CustomEvent_successful_2 = K2Node_CustomEvent_successful_2;
	Parms.CallFunc_BytesToHex_ReturnValue = CallFunc_BytesToHex_ReturnValue;
	Parms.K2Node_MakeStruct_ClientLoginWithSteamRequest = K2Node_MakeStruct_ClientLoginWithSteamRequest;
	Parms.CallFunc_ConstructJsonObject_ReturnValue = CallFunc_ConstructJsonObject_ReturnValue;
	Parms.K2Node_LowEntry_LocalVariable_Value__Object = K2Node_LowEntry_LocalVariable_Value__Object;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_GetFieldNames_ReturnValue = CallFunc_GetFieldNames_ReturnValue;
	Parms.CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue = CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_ClientUpdateUserDataRequest = K2Node_MakeStruct_ClientUpdateUserDataRequest;
	Parms.CallFunc_UpdateUserData_ReturnValue = CallFunc_UpdateUserData_ReturnValue;
	Parms.K2Node_CustomEvent_result_1 = K2Node_CustomEvent_result_1;
	Parms.K2Node_CustomEvent_customData_3 = K2Node_CustomEvent_customData_3;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CustomEvent_error_1 = K2Node_CustomEvent_error_1;
	Parms.K2Node_CustomEvent_customData_2 = K2Node_CustomEvent_customData_2;
	Parms.CallFunc_GetAppBuildId_ReturnValue = CallFunc_GetAppBuildId_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_GetPlayerCombinedInfo_ReturnValue_1 = CallFunc_GetPlayerCombinedInfo_ReturnValue_1;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_GetObjectField_ReturnValue = CallFunc_GetObjectField_ReturnValue;
	Parms.CallFunc_HasField_ReturnValue = CallFunc_HasField_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_State_Menu = K2Node_DynamicCast_AsBP_PG_Player_State_Menu;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.CallFunc_LoginWithSteam_ReturnValue = CallFunc_LoginWithSteam_ReturnValue;
	Parms.CallFunc_GetPlayerCombinedInfo_ReturnValue_2 = CallFunc_GetPlayerCombinedInfo_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetObjectField_ReturnValue_1 = CallFunc_GetObjectField_ReturnValue_1;
	Parms.CallFunc_GetNumberField_ReturnValue = CallFunc_GetNumberField_ReturnValue;
	Parms.CallFunc_HasField_ReturnValue_1 = CallFunc_HasField_ReturnValue_1;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CustomEvent_result = K2Node_CustomEvent_result;
	Parms.K2Node_CustomEvent_customData_1 = K2Node_CustomEvent_customData_1;
	Parms.K2Node_CustomEvent_error = K2Node_CustomEvent_error;
	Parms.K2Node_CustomEvent_customData = K2Node_CustomEvent_customData;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.CallFunc_GetPlayerCombinedInfo_ReturnValue_3 = CallFunc_GetPlayerCombinedInfo_ReturnValue_3;
	Parms.CallFunc_GetPlayerCombinedInfo_ReturnValue_4 = CallFunc_GetPlayerCombinedInfo_ReturnValue_4;
	Parms.CallFunc_GetObjectField_ReturnValue_2 = CallFunc_GetObjectField_ReturnValue_2;
	Parms.CallFunc_GetObjectField_ReturnValue_3 = CallFunc_GetObjectField_ReturnValue_3;
	Parms.CallFunc_HasField_ReturnValue_2 = CallFunc_HasField_ReturnValue_2;
	Parms.CallFunc_GetObjectField_ReturnValue_4 = CallFunc_GetObjectField_ReturnValue_4;
	Parms.CallFunc_GetObjectField_ReturnValue_5 = CallFunc_GetObjectField_ReturnValue_5;
	Parms.CallFunc_GetStringField_ReturnValue = CallFunc_GetStringField_ReturnValue;
	Parms.CallFunc_HasField_ReturnValue_3 = CallFunc_HasField_ReturnValue_3;
	Parms.K2Node_MakeStruct_ClientUpdateUserTitleDisplayNameRequest = K2Node_MakeStruct_ClientUpdateUserTitleDisplayNameRequest;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_UpdateUserTitleDisplayName_ReturnValue = CallFunc_UpdateUserTitleDisplayName_ReturnValue;
	Parms.CallFunc_GetStringField_ReturnValue_1 = CallFunc_GetStringField_ReturnValue_1;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_SetNumberField_Number_ImplicitCast = CallFunc_SetNumberField_Number_ImplicitCast;
	Parms.CallFunc_NotEqual_DoubleDouble_A_ImplicitCast = CallFunc_NotEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


