#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C
// (None)

class UClass* UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C");

	return Clss;
}


// UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo.Default__UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C* UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C::GetDefaultObj()
{
	static class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C*>(UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C.OnPlayFabResponse_DF281D914773FAE75CBA5AB421B11AE5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel           Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C::OnPlayFabResponse_DF281D914773FAE75CBA5AB421B11AE5(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C", "OnPlayFabResponse_DF281D914773FAE75CBA5AB421B11AE5");

	Params::UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C_OnPlayFabResponse_DF281D914773FAE75CBA5AB421B11AE5_Params Parms{};

	Parms.Response = Response;
	Parms.CustomData = CustomData;
	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C.BndEvt__UI_WarningNoPC_Button_Yes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C::BndEvt__UI_WarningNoPC_Button_Yes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C", "BndEvt__UI_WarningNoPC_Button_Yes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C_BndEvt__UI_WarningNoPC_Button_Yes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C", "Construct");

	Params::UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C.BndEvt__UI_Shop_SteamOverlayIsDisabled_Button_Discord_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C::BndEvt__UI_Shop_SteamOverlayIsDisabled_Button_Discord_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C", "BndEvt__UI_Shop_SteamOverlayIsDisabled_Button_Discord_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	Params::UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C_BndEvt__UI_Shop_SteamOverlayIsDisabled_Button_Discord_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C.BndEvt__UI_Shop_SteamOverlayIsDisabled_Button_Discord_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C::BndEvt__UI_Shop_SteamOverlayIsDisabled_Button_Discord_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C", "BndEvt__UI_Shop_SteamOverlayIsDisabled_Button_Discord_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	Params::UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C_BndEvt__UI_Shop_SteamOverlayIsDisabled_Button_Discord_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C.BndEvt__UI_Shop_SteamOverlayIsDisabled_Button_Discord_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C::BndEvt__UI_Shop_SteamOverlayIsDisabled_Button_Discord_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C", "BndEvt__UI_Shop_SteamOverlayIsDisabled_Button_Discord_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C_BndEvt__UI_Shop_SteamOverlayIsDisabled_Button_Discord_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C.UpdateUserData_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientUpdateUserDataResult Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C::UpdateUserData_Success(const struct FClientUpdateUserDataResult& Result, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C", "UpdateUserData_Success");

	Params::UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C_UpdateUserData_Success_Params Parms{};

	Parms.Result = Result;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C.UpdateUserData_Failure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError               Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C::UpdateUserData_Failure(const struct FPlayFabError& Error, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C", "UpdateUserData_Failure");

	Params::UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C_UpdateUserData_Failure_Params Parms{};

	Parms.Error = Error;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C.ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_EncodeJson_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           Temp_struct_Variable                                             (None)
// float                              Temp_real_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_ConstructJsonObject_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerState*                CallFunc_GetPlayerState_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPG_PlayerState_Menu*        K2Node_DynamicCast_AsPG_Player_State_Menu                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           K2Node_CustomEvent_response                                      (None)
// class UObject*                     K2Node_CustomEvent_customData_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_successful                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetPlayerCombinedInfo_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasField_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_DecodeJson_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      CallFunc_GetNumberArrayField_ReturnValue                         (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// struct FClientUpdateUserDataResult K2Node_CustomEvent_result                                        (NoDestructor)
// class UObject*                     K2Node_CustomEvent_customData_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabError               K2Node_CustomEvent_error                                         (None)
// class UObject*                     K2Node_CustomEvent_customData                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_ConstructJsonObject_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          K2Node_LowEntry_LocalVariable_Value__Object                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FClientUpdateUserDataRequestK2Node_MakeStruct_ClientUpdateUserDataRequest                    (None)
// class UPlayFabClientAPI*           CallFunc_UpdateUserData_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C::ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo(int32 EntryPoint, bool Temp_bool_Variable, const class FString& CallFunc_EncodeJson_ReturnValue, class UObject* Temp_object_Variable, const struct FPlayFabBaseModel& Temp_struct_Variable, float Temp_real_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UPlayFabJsonObject* CallFunc_ConstructJsonObject_ReturnValue, class UPlayerState* CallFunc_GetPlayerState_ReturnValue, class UPG_PlayerState_Menu* K2Node_DynamicCast_AsPG_Player_State_Menu, bool K2Node_DynamicCast_bSuccess, const struct FPlayFabBaseModel& K2Node_CustomEvent_response, class UObject* K2Node_CustomEvent_customData_2, bool K2Node_CustomEvent_successful, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_1, bool CallFunc_HasField_ReturnValue, const class FString& CallFunc_GetStringField_ReturnValue, bool CallFunc_DecodeJson_ReturnValue, TArray<float>& CallFunc_GetNumberArrayField_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 CallFunc_Array_Add_ReturnValue, TArray<float>& K2Node_MakeArray_Array, const struct FClientUpdateUserDataResult& K2Node_CustomEvent_result, class UObject* K2Node_CustomEvent_customData_1, const struct FPlayFabError& K2Node_CustomEvent_error, class UObject* K2Node_CustomEvent_customData, class UPlayFabJsonObject* CallFunc_ConstructJsonObject_ReturnValue_1, class UPlayFabJsonObject* K2Node_LowEntry_LocalVariable_Value__Object, const struct FClientUpdateUserDataRequest& K2Node_MakeStruct_ClientUpdateUserDataRequest, class UPlayFabClientAPI* CallFunc_UpdateUserData_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C", "ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo");

	Params::UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C_ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EncodeJson_ReturnValue = CallFunc_EncodeJson_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_ConstructJsonObject_ReturnValue = CallFunc_ConstructJsonObject_ReturnValue;
	Parms.CallFunc_GetPlayerState_ReturnValue = CallFunc_GetPlayerState_ReturnValue;
	Parms.K2Node_DynamicCast_AsPG_Player_State_Menu = K2Node_DynamicCast_AsPG_Player_State_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_response = K2Node_CustomEvent_response;
	Parms.K2Node_CustomEvent_customData_2 = K2Node_CustomEvent_customData_2;
	Parms.K2Node_CustomEvent_successful = K2Node_CustomEvent_successful;
	Parms.CallFunc_GetPlayerCombinedInfo_ReturnValue = CallFunc_GetPlayerCombinedInfo_ReturnValue;
	Parms.CallFunc_GetObjectField_ReturnValue = CallFunc_GetObjectField_ReturnValue;
	Parms.CallFunc_GetObjectField_ReturnValue_1 = CallFunc_GetObjectField_ReturnValue_1;
	Parms.CallFunc_HasField_ReturnValue = CallFunc_HasField_ReturnValue;
	Parms.CallFunc_GetStringField_ReturnValue = CallFunc_GetStringField_ReturnValue;
	Parms.CallFunc_DecodeJson_ReturnValue = CallFunc_DecodeJson_ReturnValue;
	Parms.CallFunc_GetNumberArrayField_ReturnValue = CallFunc_GetNumberArrayField_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CustomEvent_result = K2Node_CustomEvent_result;
	Parms.K2Node_CustomEvent_customData_1 = K2Node_CustomEvent_customData_1;
	Parms.K2Node_CustomEvent_error = K2Node_CustomEvent_error;
	Parms.K2Node_CustomEvent_customData = K2Node_CustomEvent_customData;
	Parms.CallFunc_ConstructJsonObject_ReturnValue_1 = CallFunc_ConstructJsonObject_ReturnValue_1;
	Parms.K2Node_LowEntry_LocalVariable_Value__Object = K2Node_LowEntry_LocalVariable_Value__Object;
	Parms.K2Node_MakeStruct_ClientUpdateUserDataRequest = K2Node_MakeStruct_ClientUpdateUserDataRequest;
	Parms.CallFunc_UpdateUserData_ReturnValue = CallFunc_UpdateUserData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


