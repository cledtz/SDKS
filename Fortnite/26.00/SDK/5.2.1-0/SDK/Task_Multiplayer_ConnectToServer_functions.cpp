#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Task_Multiplayer_ConnectToServer.Task_Multiplayer_ConnectToServer_C
// (None)

class UClass* UTask_Multiplayer_ConnectToServer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Task_Multiplayer_ConnectToServer_C");

	return Clss;
}


// Task_Multiplayer_ConnectToServer_C Task_Multiplayer_ConnectToServer.Default__Task_Multiplayer_ConnectToServer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_Multiplayer_ConnectToServer_C* UTask_Multiplayer_ConnectToServer_C::GetDefaultObj()
{
	static class UTask_Multiplayer_ConnectToServer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_Multiplayer_ConnectToServer_C*>(UTask_Multiplayer_ConnectToServer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Task_Multiplayer_ConnectToServer.Task_Multiplayer_ConnectToServer_C.OnPlayFabResponse_3F9ED0AB4BF39E9BF514A8BC8A2291FA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel           Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_Multiplayer_ConnectToServer_C::OnPlayFabResponse_3F9ED0AB4BF39E9BF514A8BC8A2291FA(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_Multiplayer_ConnectToServer_C", "OnPlayFabResponse_3F9ED0AB4BF39E9BF514A8BC8A2291FA");

	Params::UTask_Multiplayer_ConnectToServer_C_OnPlayFabResponse_3F9ED0AB4BF39E9BF514A8BC8A2291FA_Params Parms{};

	Parms.Response = Response;
	Parms.CustomData = CustomData;
	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_Multiplayer_ConnectToServer.Task_Multiplayer_ConnectToServer_C.ReceiveActivate
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTask_Multiplayer_ConnectToServer_C::ReceiveActivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_Multiplayer_ConnectToServer_C", "ReceiveActivate");

	Params::UTask_Multiplayer_ConnectToServer_C_ReceiveActivate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_Multiplayer_ConnectToServer.Task_Multiplayer_ConnectToServer_C.OnPasswordEntered_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTask_Multiplayer_ConnectToServer_C::OnPasswordEntered_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_Multiplayer_ConnectToServer_C", "OnPasswordEntered_Event");

	Params::UTask_Multiplayer_ConnectToServer_C_OnPasswordEntered_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_Multiplayer_ConnectToServer.Task_Multiplayer_ConnectToServer_C.OnCanceled_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTask_Multiplayer_ConnectToServer_C::OnCanceled_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_Multiplayer_ConnectToServer_C", "OnCanceled_Event");

	Params::UTask_Multiplayer_ConnectToServer_C_OnCanceled_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_Multiplayer_ConnectToServer.Task_Multiplayer_ConnectToServer_C.ReceiveFinished
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EActionState            Reason                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_Multiplayer_ConnectToServer_C::ReceiveFinished(enum class EActionState Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_Multiplayer_ConnectToServer_C", "ReceiveFinished");

	Params::UTask_Multiplayer_ConnectToServer_C_ReceiveFinished_Params Parms{};

	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_Multiplayer_ConnectToServer.Task_Multiplayer_ConnectToServer_C.WritePlayerEvent_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientWriteEventResponse   Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UTask_Multiplayer_ConnectToServer_C::WritePlayerEvent_Success(const struct FClientWriteEventResponse& Result, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_Multiplayer_ConnectToServer_C", "WritePlayerEvent_Success");

	Params::UTask_Multiplayer_ConnectToServer_C_WritePlayerEvent_Success_Params Parms{};

	Parms.Result = Result;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_Multiplayer_ConnectToServer.Task_Multiplayer_ConnectToServer_C.WritePlayerEvent_Failure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError               Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UTask_Multiplayer_ConnectToServer_C::WritePlayerEvent_Failure(const struct FPlayFabError& Error, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_Multiplayer_ConnectToServer_C", "WritePlayerEvent_Failure");

	Params::UTask_Multiplayer_ConnectToServer_C_WritePlayerEvent_Failure_Params Parms{};

	Parms.Error = Error;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_Multiplayer_ConnectToServer.Task_Multiplayer_ConnectToServer_C.OnReserveSlotFinished_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSuccessful                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              ErrorCode                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_Multiplayer_ConnectToServer_C::OnReserveSlotFinished_Event(bool IsSuccessful, uint8 ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_Multiplayer_ConnectToServer_C", "OnReserveSlotFinished_Event");

	Params::UTask_Multiplayer_ConnectToServer_C_OnReserveSlotFinished_Event_Params Parms{};

	Parms.IsSuccessful = IsSuccessful;
	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_Multiplayer_ConnectToServer.Task_Multiplayer_ConnectToServer_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientWriteEventResponse   Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UTask_Multiplayer_ConnectToServer_C::CustomEvent_0(const struct FClientWriteEventResponse& Result, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_Multiplayer_ConnectToServer_C", "CustomEvent_0");

	Params::UTask_Multiplayer_ConnectToServer_C_CustomEvent_0_Params Parms{};

	Parms.Result = Result;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_Multiplayer_ConnectToServer.Task_Multiplayer_ConnectToServer_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError               Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UTask_Multiplayer_ConnectToServer_C::CustomEvent_1(const struct FPlayFabError& Error, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_Multiplayer_ConnectToServer_C", "CustomEvent_1");

	Params::UTask_Multiplayer_ConnectToServer_C_CustomEvent_1_Params Parms{};

	Parms.Error = Error;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_Multiplayer_ConnectToServer.Task_Multiplayer_ConnectToServer_C.ExecuteUbergraph_Task_Multiplayer_ConnectToServer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           K2Node_CustomEvent_response                                      (None)
// class UObject*                     K2Node_CustomEvent_customData_4                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_successful                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           Temp_struct_Variable                                             (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Menu_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ServerPassword_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EActionState            K2Node_Event_Reason                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// enum class EActionState            Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class UPlayFabJsonObject*          CallFunc_ConstructJsonObject_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_ConstructJsonObject_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          K2Node_LowEntry_LocalVariable_Value__Object                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          K2Node_LowEntry_LocalVariable_Value__1_Object                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UOnlinePartySubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMemberLeader_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClientWriteEventResponse   K2Node_CustomEvent_result_1                                      (None)
// class UObject*                     K2Node_CustomEvent_customData_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabError               K2Node_CustomEvent_error_1                                       (None)
// class UObject*                     K2Node_CustomEvent_customData_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_ConstructJsonObject_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTask_Multiplayer_RequestReserveSlots_C*CallFunc_CreateAction_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          K2Node_LowEntry_LocalVariable_Value__2_Object                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FClientWriteClientPlayerEventRequestK2Node_MakeStruct_ClientWriteClientPlayerEventRequest            (None)
// class UPlayFabClientAPI*           CallFunc_WritePlayerEvent_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAppBuildId_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsSuccessful                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              K2Node_CustomEvent_ErrorCode                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_ByteToInt64_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// double                             CallFunc_Conv_ByteToDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClientWriteEventResponse   K2Node_CustomEvent_result                                        (None)
// class UObject*                     K2Node_CustomEvent_customData_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabError               K2Node_CustomEvent_error                                         (None)
// class UObject*                     K2Node_CustomEvent_customData                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetNumberField_Number_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetNumberField_Number_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_Multiplayer_ConnectToServer_C::ExecuteUbergraph_Task_Multiplayer_ConnectToServer(int32 EntryPoint, const struct FPlayFabBaseModel& K2Node_CustomEvent_response, class UObject* K2Node_CustomEvent_customData_4, bool K2Node_CustomEvent_successful, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class UObject* Temp_object_Variable, const struct FPlayFabBaseModel& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FText CallFunc_MakeLiteralText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, class UUI_ServerPassword_C* CallFunc_Create_ReturnValue, enum class EActionState K2Node_Event_Reason, bool Temp_bool_Variable_3, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, enum class EActionState Temp_byte_Variable, class FText CallFunc_MakeLiteralText_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool K2Node_Select_Default, class FText CallFunc_Format_ReturnValue, class UPlayFabJsonObject* CallFunc_ConstructJsonObject_ReturnValue, class UPlayFabJsonObject* CallFunc_ConstructJsonObject_ReturnValue_1, class UPlayFabJsonObject* K2Node_LowEntry_LocalVariable_Value__Object, class UPlayFabJsonObject* K2Node_LowEntry_LocalVariable_Value__1_Object, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsMemberLeader_ReturnValue, const struct FClientWriteEventResponse& K2Node_CustomEvent_result_1, class UObject* K2Node_CustomEvent_customData_3, const struct FPlayFabError& K2Node_CustomEvent_error_1, class UObject* K2Node_CustomEvent_customData_2, class UPlayFabJsonObject* CallFunc_ConstructJsonObject_ReturnValue_2, class UTask_Multiplayer_RequestReserveSlots_C* CallFunc_CreateAction_ReturnValue, class UPlayFabJsonObject* K2Node_LowEntry_LocalVariable_Value__2_Object, const struct FClientWriteClientPlayerEventRequest& K2Node_MakeStruct_ClientWriteClientPlayerEventRequest, class UPlayFabClientAPI* CallFunc_WritePlayerEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_GetAppBuildId_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool K2Node_CustomEvent_IsSuccessful, uint8 K2Node_CustomEvent_ErrorCode, int64 CallFunc_Conv_ByteToInt64_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, double CallFunc_Conv_ByteToDouble_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FClientWriteEventResponse& K2Node_CustomEvent_result, class UObject* K2Node_CustomEvent_customData_1, const struct FPlayFabError& K2Node_CustomEvent_error, class UObject* K2Node_CustomEvent_customData, float CallFunc_SetNumberField_Number_ImplicitCast, float CallFunc_SetNumberField_Number_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_Multiplayer_ConnectToServer_C", "ExecuteUbergraph_Task_Multiplayer_ConnectToServer");

	Params::UTask_Multiplayer_ConnectToServer_C_ExecuteUbergraph_Task_Multiplayer_ConnectToServer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_response = K2Node_CustomEvent_response;
	Parms.K2Node_CustomEvent_customData_4 = K2Node_CustomEvent_customData_4;
	Parms.K2Node_CustomEvent_successful = K2Node_CustomEvent_successful;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu = K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_Event_Reason = K2Node_Event_Reason;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_ConstructJsonObject_ReturnValue = CallFunc_ConstructJsonObject_ReturnValue;
	Parms.CallFunc_ConstructJsonObject_ReturnValue_1 = CallFunc_ConstructJsonObject_ReturnValue_1;
	Parms.K2Node_LowEntry_LocalVariable_Value__Object = K2Node_LowEntry_LocalVariable_Value__Object;
	Parms.K2Node_LowEntry_LocalVariable_Value__1_Object = K2Node_LowEntry_LocalVariable_Value__1_Object;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsMemberLeader_ReturnValue = CallFunc_IsMemberLeader_ReturnValue;
	Parms.K2Node_CustomEvent_result_1 = K2Node_CustomEvent_result_1;
	Parms.K2Node_CustomEvent_customData_3 = K2Node_CustomEvent_customData_3;
	Parms.K2Node_CustomEvent_error_1 = K2Node_CustomEvent_error_1;
	Parms.K2Node_CustomEvent_customData_2 = K2Node_CustomEvent_customData_2;
	Parms.CallFunc_ConstructJsonObject_ReturnValue_2 = CallFunc_ConstructJsonObject_ReturnValue_2;
	Parms.CallFunc_CreateAction_ReturnValue = CallFunc_CreateAction_ReturnValue;
	Parms.K2Node_LowEntry_LocalVariable_Value__2_Object = K2Node_LowEntry_LocalVariable_Value__2_Object;
	Parms.K2Node_MakeStruct_ClientWriteClientPlayerEventRequest = K2Node_MakeStruct_ClientWriteClientPlayerEventRequest;
	Parms.CallFunc_WritePlayerEvent_ReturnValue = CallFunc_WritePlayerEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetAppBuildId_ReturnValue = CallFunc_GetAppBuildId_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.K2Node_CustomEvent_IsSuccessful = K2Node_CustomEvent_IsSuccessful;
	Parms.K2Node_CustomEvent_ErrorCode = K2Node_CustomEvent_ErrorCode;
	Parms.CallFunc_Conv_ByteToInt64_ReturnValue = CallFunc_Conv_ByteToInt64_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_ByteToDouble_ReturnValue = CallFunc_Conv_ByteToDouble_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_CustomEvent_result = K2Node_CustomEvent_result;
	Parms.K2Node_CustomEvent_customData_1 = K2Node_CustomEvent_customData_1;
	Parms.K2Node_CustomEvent_error = K2Node_CustomEvent_error;
	Parms.K2Node_CustomEvent_customData = K2Node_CustomEvent_customData;
	Parms.CallFunc_SetNumberField_Number_ImplicitCast = CallFunc_SetNumberField_Number_ImplicitCast;
	Parms.CallFunc_SetNumberField_Number_ImplicitCast_1 = CallFunc_SetNumberField_Number_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_Multiplayer_ConnectToServer.Task_Multiplayer_ConnectToServer_C.OnFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSuccessful                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_Multiplayer_ConnectToServer_C::OnFinished__DelegateSignature(bool IsSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_Multiplayer_ConnectToServer_C", "OnFinished__DelegateSignature");

	Params::UTask_Multiplayer_ConnectToServer_C_OnFinished__DelegateSignature_Params Parms{};

	Parms.IsSuccessful = IsSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}

}


