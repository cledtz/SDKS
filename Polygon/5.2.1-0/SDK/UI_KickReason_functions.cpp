#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_KickReason.UI_KickReason_C
// (None)

class UClass* UUI_KickReason_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_KickReason_C");

	return Clss;
}


// UI_KickReason_C UI_KickReason.Default__UI_KickReason_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_KickReason_C* UUI_KickReason_C::GetDefaultObj()
{
	static class UUI_KickReason_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_KickReason_C*>(UUI_KickReason_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_KickReason.UI_KickReason_C.OnPlayFabResponse_3A318FC54672A87852C380886C51DFAB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel           Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_KickReason_C::OnPlayFabResponse_3A318FC54672A87852C380886C51DFAB(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KickReason_C", "OnPlayFabResponse_3A318FC54672A87852C380886C51DFAB");

	Params::UUI_KickReason_C_OnPlayFabResponse_3A318FC54672A87852C380886C51DFAB_Params Parms{};

	Parms.Response = Response;
	Parms.CustomData = CustomData;
	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_KickReason.UI_KickReason_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_KickReason_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KickReason_C", "PreConstruct");

	Params::UUI_KickReason_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_KickReason.UI_KickReason_C.BndEvt__UI_KickReason_Button_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_KickReason_C::BndEvt__UI_KickReason_Button_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KickReason_C", "BndEvt__UI_KickReason_Button_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_KickReason_C_BndEvt__UI_KickReason_Button_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_KickReason.UI_KickReason_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_KickReason_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KickReason_C", "Construct");

	Params::UUI_KickReason_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_KickReason.UI_KickReason_C.OnUpdatePlayerCombinedInfo_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EModifiedData>   ModifiedData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                      CustomString                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_KickReason_C::OnUpdatePlayerCombinedInfo_Event(TArray<enum class EModifiedData>& ModifiedData, const class FString& CustomString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KickReason_C", "OnUpdatePlayerCombinedInfo_Event");

	Params::UUI_KickReason_C_OnUpdatePlayerCombinedInfo_Event_Params Parms{};

	Parms.ModifiedData = ModifiedData;
	Parms.CustomString = CustomString;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_KickReason.UI_KickReason_C.WriteEvent_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientWriteEventResponse   Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_KickReason_C::WriteEvent_Success(const struct FClientWriteEventResponse& Result, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KickReason_C", "WriteEvent_Success");

	Params::UUI_KickReason_C_WriteEvent_Success_Params Parms{};

	Parms.Result = Result;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_KickReason.UI_KickReason_C.WriteEvent_Failure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError               Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_KickReason_C::WriteEvent_Failure(const struct FPlayFabError& Error, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KickReason_C", "WriteEvent_Failure");

	Params::UUI_KickReason_C_WriteEvent_Failure_Params Parms{};

	Parms.Error = Error;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_KickReason.UI_KickReason_C.ExecuteUbergraph_UI_KickReason
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           K2Node_CustomEvent_response                                      (None)
// class UObject*                     K2Node_CustomEvent_customData_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_successful                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           Temp_struct_Variable                                             (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               CallFunc_NotEqual_TextText_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_GameInstance_C*       CallFunc_GetGameInstance_MyGameIntance                           (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClientGameInstance*         CallFunc_GetClientGameInstance_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EModifiedData>   K2Node_CustomEvent_ModifiedData                                  (ConstParm, ReferenceParm)
// class FString                      K2Node_CustomEvent_CustomString                                  (ZeroConstructor, HasGetValueTypeHash)
// class UPG_PlayerState_Menu*        K2Node_DynamicCast_AsPG_Player_State_Menu                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_ConstructJsonObject_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetPlayerCombinedInfo_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          K2Node_LowEntry_LocalVariable_Value__Object                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClientWriteClientPlayerEventRequestK2Node_MakeStruct_ClientWriteClientPlayerEventRequest            (None)
// class UPlayFabClientAPI*           CallFunc_WritePlayerEvent_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClientWriteEventResponse   K2Node_CustomEvent_result                                        (None)
// class UObject*                     K2Node_CustomEvent_customData_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabError               K2Node_CustomEvent_error                                         (None)
// class UObject*                     K2Node_CustomEvent_customData                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EModifiedData>   K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_KickReason_C::ExecuteUbergraph_UI_KickReason(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPlayFabBaseModel& K2Node_CustomEvent_response, class UObject* K2Node_CustomEvent_customData_2, bool K2Node_CustomEvent_successful, bool Temp_bool_Variable, class UObject* Temp_object_Variable, const struct FPlayFabBaseModel& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool K2Node_Event_IsDesignTime, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_NotEqual_TextText_ReturnValue, class UBP_PG_GameInstance_C* CallFunc_GetGameInstance_MyGameIntance, bool CallFunc_BooleanAND_ReturnValue, class UClientGameInstance* CallFunc_GetClientGameInstance_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, TArray<enum class EModifiedData>& K2Node_CustomEvent_ModifiedData, const class FString& K2Node_CustomEvent_CustomString, class UPG_PlayerState_Menu* K2Node_DynamicCast_AsPG_Player_State_Menu, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UPlayFabJsonObject* CallFunc_ConstructJsonObject_ReturnValue, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue, class UPlayFabJsonObject* K2Node_LowEntry_LocalVariable_Value__Object, bool CallFunc_IsValid_ReturnValue, const struct FClientWriteClientPlayerEventRequest& K2Node_MakeStruct_ClientWriteClientPlayerEventRequest, class UPlayFabClientAPI* CallFunc_WritePlayerEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FClientWriteEventResponse& K2Node_CustomEvent_result, class UObject* K2Node_CustomEvent_customData_1, const struct FPlayFabError& K2Node_CustomEvent_error, class UObject* K2Node_CustomEvent_customData, TArray<enum class EModifiedData>& K2Node_MakeArray_Array_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KickReason_C", "ExecuteUbergraph_UI_KickReason");

	Params::UUI_KickReason_C_ExecuteUbergraph_UI_KickReason_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_response = K2Node_CustomEvent_response;
	Parms.K2Node_CustomEvent_customData_2 = K2Node_CustomEvent_customData_2;
	Parms.K2Node_CustomEvent_successful = K2Node_CustomEvent_successful;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_NotEqual_TextText_ReturnValue = CallFunc_NotEqual_TextText_ReturnValue;
	Parms.CallFunc_GetGameInstance_MyGameIntance = CallFunc_GetGameInstance_MyGameIntance;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetClientGameInstance_ReturnValue = CallFunc_GetClientGameInstance_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CustomEvent_ModifiedData = K2Node_CustomEvent_ModifiedData;
	Parms.K2Node_CustomEvent_CustomString = K2Node_CustomEvent_CustomString;
	Parms.K2Node_DynamicCast_AsPG_Player_State_Menu = K2Node_DynamicCast_AsPG_Player_State_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_ConstructJsonObject_ReturnValue = CallFunc_ConstructJsonObject_ReturnValue;
	Parms.CallFunc_GetPlayerCombinedInfo_ReturnValue = CallFunc_GetPlayerCombinedInfo_ReturnValue;
	Parms.K2Node_LowEntry_LocalVariable_Value__Object = K2Node_LowEntry_LocalVariable_Value__Object;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_ClientWriteClientPlayerEventRequest = K2Node_MakeStruct_ClientWriteClientPlayerEventRequest;
	Parms.CallFunc_WritePlayerEvent_ReturnValue = CallFunc_WritePlayerEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_result = K2Node_CustomEvent_result;
	Parms.K2Node_CustomEvent_customData_1 = K2Node_CustomEvent_customData_1;
	Parms.K2Node_CustomEvent_error = K2Node_CustomEvent_error;
	Parms.K2Node_CustomEvent_customData = K2Node_CustomEvent_customData;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


