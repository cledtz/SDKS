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


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.ShowTutorial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_Menu_Tutorial_Show_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetPlayerCombinedInfo_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasField_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_GeneralMenuScreen_C::ShowTutorial(class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_Menu_Tutorial_Show_C* CallFunc_Create_ReturnValue, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue, bool CallFunc_HasField_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "ShowTutorial");

	Params::UUI_Menu_GeneralMenuScreen_C_ShowTutorial_Params Parms;

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetPlayerCombinedInfo_ReturnValue = CallFunc_GetPlayerCombinedInfo_ReturnValue;
	Parms.CallFunc_GetObjectField_ReturnValue = CallFunc_GetObjectField_ReturnValue;
	Parms.CallFunc_HasField_ReturnValue = CallFunc_HasField_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.RequestWriteReview
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_ReviewRequest_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetPlayerCombinedInfo_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasField_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_GeneralMenuScreen_C::RequestWriteReview(class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_ReviewRequest_C* CallFunc_Create_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue, bool CallFunc_HasField_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "RequestWriteReview");

	Params::UUI_Menu_GeneralMenuScreen_C_RequestWriteReview_Params Parms;

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerCombinedInfo_ReturnValue = CallFunc_GetPlayerCombinedInfo_ReturnValue;
	Parms.CallFunc_GetObjectField_ReturnValue = CallFunc_GetObjectField_ReturnValue;
	Parms.CallFunc_HasField_ReturnValue = CallFunc_HasField_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.ParsePlayerInventory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayFabJsonObject*          CallFunc_GetPlayerCombinedInfo_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNumberField_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNumberField_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            ()
// double                             CallFunc_Round_A_ImplicitCast                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Round_A_ImplicitCast_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_GeneralMenuScreen_C::ParsePlayerInventory(class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue, float CallFunc_GetNumberField_ReturnValue, float CallFunc_GetNumberField_ReturnValue_1, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, double CallFunc_Round_A_ImplicitCast, double CallFunc_Round_A_ImplicitCast_1)
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "ParsePlayerInventory");

	Params::UUI_Menu_GeneralMenuScreen_C_ParsePlayerInventory_Params Parms;

	Parms.CallFunc_GetPlayerCombinedInfo_ReturnValue = CallFunc_GetPlayerCombinedInfo_ReturnValue;
	Parms.CallFunc_GetObjectField_ReturnValue = CallFunc_GetObjectField_ReturnValue;
	Parms.CallFunc_GetNumberField_ReturnValue = CallFunc_GetNumberField_ReturnValue;
	Parms.CallFunc_GetNumberField_ReturnValue_1 = CallFunc_GetNumberField_ReturnValue_1;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Round_ReturnValue_1 = CallFunc_Round_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_Round_A_ImplicitCast = CallFunc_Round_A_ImplicitCast;
	Parms.CallFunc_Round_A_ImplicitCast_1 = CallFunc_Round_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.ParsePlayerProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLevelInfo                  L_NextLevel                                                      (Edit, BlueprintVisible)
// struct FLevelInfo                  L_CurrentLevel                                                   (Edit, BlueprintVisible)
// int32                              L_TotalProgress                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            ()
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_2                            ()
// struct FLevelInfo                  CallFunc_GetNextLevelByLevelID_ReturnValue                       ()
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLevelInfo                  CallFunc_GetLevelByProgress_ReturnValue                          ()
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetPlayerCombinedInfo_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UPlayFabJsonObject*>  CallFunc_GetObjectArrayField_ReturnValue                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNumberField_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Round_A_ImplicitCast                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_GeneralMenuScreen_C::ParsePlayerProgress(const struct FLevelInfo& L_NextLevel, const struct FLevelInfo& L_CurrentLevel, int32 L_TotalProgress, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_2, const struct FLevelInfo& CallFunc_GetNextLevelByLevelID_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FLevelInfo& CallFunc_GetLevelByProgress_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue, TArray<class UPlayFabJsonObject*>& CallFunc_GetObjectArrayField_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UPlayFabJsonObject* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetNumberField_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Round_ReturnValue, const class FString& CallFunc_GetStringField_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast, double CallFunc_Round_A_ImplicitCast)
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "ParsePlayerProgress");

	Params::UUI_Menu_GeneralMenuScreen_C_ParsePlayerProgress_Params Parms;

	Parms.L_NextLevel = L_NextLevel;
	Parms.L_CurrentLevel = L_CurrentLevel;
	Parms.L_TotalProgress = L_TotalProgress;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_1 = CallFunc_LoadAsset_Blocking_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsTexture_2D_1 = K2Node_DynamicCast_AsTexture_2D_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_2 = CallFunc_Conv_IntToText_ReturnValue_2;
	Parms.CallFunc_GetNextLevelByLevelID_ReturnValue = CallFunc_GetNextLevelByLevelID_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetLevelByProgress_ReturnValue = CallFunc_GetLevelByProgress_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerCombinedInfo_ReturnValue = CallFunc_GetPlayerCombinedInfo_ReturnValue;
	Parms.CallFunc_GetObjectArrayField_ReturnValue = CallFunc_GetObjectArrayField_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetNumberField_ReturnValue = CallFunc_GetNumberField_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_GetStringField_ReturnValue = CallFunc_GetStringField_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;
	Parms.CallFunc_Round_A_ImplicitCast = CallFunc_Round_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.OnPlayFabResponse_EEAC2C894C8FF45B97AF2E8BBAB9F58E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel           Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_GeneralMenuScreen_C::OnPlayFabResponse_EEAC2C894C8FF45B97AF2E8BBAB9F58E(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful)
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "OnPlayFabResponse_EEAC2C894C8FF45B97AF2E8BBAB9F58E");

	Params::UUI_Menu_GeneralMenuScreen_C_OnPlayFabResponse_EEAC2C894C8FF45B97AF2E8BBAB9F58E_Params Parms;

	Parms.Response = Response;
	Parms.CustomData = CustomData;
	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.OnSucceed_C68D4C074C7D58E2089838A390E6D5A6
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Menu_GeneralMenuScreen_C::OnSucceed_C68D4C074C7D58E2089838A390E6D5A6()
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "OnSucceed_C68D4C074C7D58E2089838A390E6D5A6");

	Params::UUI_Menu_GeneralMenuScreen_C_OnSucceed_C68D4C074C7D58E2089838A390E6D5A6_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.OnSucceed_00DA80004521B2E9443A3BB00FD71E8D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Menu_GeneralMenuScreen_C::OnSucceed_00DA80004521B2E9443A3BB00FD71E8D()
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "OnSucceed_00DA80004521B2E9443A3BB00FD71E8D");

	Params::UUI_Menu_GeneralMenuScreen_C_OnSucceed_00DA80004521B2E9443A3BB00FD71E8D_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.OnSucceed_0FCC1976414D74186E4E89BDC8765DCE
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Menu_GeneralMenuScreen_C::OnSucceed_0FCC1976414D74186E4E89BDC8765DCE()
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "OnSucceed_0FCC1976414D74186E4E89BDC8765DCE");

	Params::UUI_Menu_GeneralMenuScreen_C_OnSucceed_0FCC1976414D74186E4E89BDC8765DCE_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.OnSucceed_9F51216140A8CFB9D900AA890B100915
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Menu_GeneralMenuScreen_C::OnSucceed_9F51216140A8CFB9D900AA890B100915()
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "OnSucceed_9F51216140A8CFB9D900AA890B100915");

	Params::UUI_Menu_GeneralMenuScreen_C_OnSucceed_9F51216140A8CFB9D900AA890B100915_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.OnSucceed_0EF931404E41431044ED4280D2E40D0C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Menu_GeneralMenuScreen_C::OnSucceed_0EF931404E41431044ED4280D2E40D0C()
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "OnSucceed_0EF931404E41431044ED4280D2E40D0C");

	Params::UUI_Menu_GeneralMenuScreen_C_OnSucceed_0EF931404E41431044ED4280D2E40D0C_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.OnSucceed_537890494AA4404E9B27D19198E61A0D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Menu_GeneralMenuScreen_C::OnSucceed_537890494AA4404E9B27D19198E61A0D()
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "OnSucceed_537890494AA4404E9B27D19198E61A0D");

	Params::UUI_Menu_GeneralMenuScreen_C_OnSucceed_537890494AA4404E9B27D19198E61A0D_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.OnSucceed_D60BB62342CAE2C50B2B7F84D4EF71C1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Menu_GeneralMenuScreen_C::OnSucceed_D60BB62342CAE2C50B2B7F84D4EF71C1()
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "OnSucceed_D60BB62342CAE2C50B2B7F84D4EF71C1");

	Params::UUI_Menu_GeneralMenuScreen_C_OnSucceed_D60BB62342CAE2C50B2B7F84D4EF71C1_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.OnPlayFabResponse_CD96840840F6BDC429744386EADF9989
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel           Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_GeneralMenuScreen_C::OnPlayFabResponse_CD96840840F6BDC429744386EADF9989(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful)
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "OnPlayFabResponse_CD96840840F6BDC429744386EADF9989");

	Params::UUI_Menu_GeneralMenuScreen_C_OnPlayFabResponse_CD96840840F6BDC429744386EADF9989_Params Parms;

	Parms.Response = Response;
	Parms.CustomData = CustomData;
	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_GeneralMenuScreen_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "PreConstruct");

	Params::UUI_Menu_GeneralMenuScreen_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.BndEvt__UI_Button_ServerSearch_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_Line_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_GeneralMenuScreen_C::BndEvt__UI_Button_ServerSearch_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature(class UUI_Button_Line_C* Button)
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "BndEvt__UI_Button_ServerSearch_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature");

	Params::UUI_Menu_GeneralMenuScreen_C_BndEvt__UI_Button_ServerSearch_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.BndEvt__UI_Button_CreateServer_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_Line_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_GeneralMenuScreen_C::BndEvt__UI_Button_CreateServer_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature(class UUI_Button_Line_C* Button)
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "BndEvt__UI_Button_CreateServer_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature");

	Params::UUI_Menu_GeneralMenuScreen_C_BndEvt__UI_Button_CreateServer_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.BndEvt__UI_Button_Shop_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_Line_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_GeneralMenuScreen_C::BndEvt__UI_Button_Shop_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature(class UUI_Button_Line_C* Button)
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "BndEvt__UI_Button_Shop_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature");

	Params::UUI_Menu_GeneralMenuScreen_C_BndEvt__UI_Button_Shop_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.BndEvt__UI_Button_Soldier_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_Line_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_GeneralMenuScreen_C::BndEvt__UI_Button_Soldier_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature(class UUI_Button_Line_C* Button)
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "BndEvt__UI_Button_Soldier_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature");

	Params::UUI_Menu_GeneralMenuScreen_C_BndEvt__UI_Button_Soldier_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.BndEvt__Button_Progress_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_GeneralMenuScreen_C::BndEvt__Button_Progress_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "BndEvt__Button_Progress_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Menu_GeneralMenuScreen_C_BndEvt__Button_Progress_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.BndEvt__Button_Settings_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_GeneralMenuScreen_C::BndEvt__Button_Settings_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "BndEvt__Button_Settings_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Menu_GeneralMenuScreen_C_BndEvt__Button_Settings_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.BndEvt__UI_Options_K2Node_ComponentBoundEvent_7_ClickBackDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_GeneralMenuScreen_C::BndEvt__UI_Options_K2Node_ComponentBoundEvent_7_ClickBackDelegate__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "BndEvt__UI_Options_K2Node_ComponentBoundEvent_7_ClickBackDelegate__DelegateSignature");

	Params::UUI_Menu_GeneralMenuScreen_C_BndEvt__UI_Options_K2Node_ComponentBoundEvent_7_ClickBackDelegate__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.BndEvt__UI_Counter_PremiumCoin_K2Node_ComponentBoundEvent_9_OnClickDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Counter_C*               Counter                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_GeneralMenuScreen_C::BndEvt__UI_Counter_PremiumCoin_K2Node_ComponentBoundEvent_9_OnClickDelegate__DelegateSignature(class UUI_Counter_C* Counter)
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "BndEvt__UI_Counter_PremiumCoin_K2Node_ComponentBoundEvent_9_OnClickDelegate__DelegateSignature");

	Params::UUI_Menu_GeneralMenuScreen_C_BndEvt__UI_Counter_PremiumCoin_K2Node_ComponentBoundEvent_9_OnClickDelegate__DelegateSignature_Params Parms;

	Parms.Counter = Counter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.OnUpdatePlayerCombinedInfo_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EModifiedData>   ModifiedData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                      CustomString                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_Menu_GeneralMenuScreen_C::OnUpdatePlayerCombinedInfo_Event(TArray<enum class EModifiedData>& ModifiedData, const class FString& CustomString)
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "OnUpdatePlayerCombinedInfo_Event");

	Params::UUI_Menu_GeneralMenuScreen_C_OnUpdatePlayerCombinedInfo_Event_Params Parms;

	Parms.ModifiedData = ModifiedData;
	Parms.CustomString = CustomString;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.RequestRegionPing
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Menu_GeneralMenuScreen_C::RequestRegionPing()
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "RequestRegionPing");

	Params::UUI_Menu_GeneralMenuScreen_C_RequestRegionPing_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.OnSetPlayerId_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Menu_GeneralMenuScreen_C::OnSetPlayerId_Event()
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "OnSetPlayerId_Event");

	Params::UUI_Menu_GeneralMenuScreen_C_OnSetPlayerId_Event_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.BndEvt__UI_GeneralMenuScreen_UI_Counter_Coin_K2Node_ComponentBoundEvent_8_OnClickDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Counter_C*               Counter                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_GeneralMenuScreen_C::BndEvt__UI_GeneralMenuScreen_UI_Counter_Coin_K2Node_ComponentBoundEvent_8_OnClickDelegate__DelegateSignature(class UUI_Counter_C* Counter)
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "BndEvt__UI_GeneralMenuScreen_UI_Counter_Coin_K2Node_ComponentBoundEvent_8_OnClickDelegate__DelegateSignature");

	Params::UUI_Menu_GeneralMenuScreen_C_BndEvt__UI_GeneralMenuScreen_UI_Counter_Coin_K2Node_ComponentBoundEvent_8_OnClickDelegate__DelegateSignature_Params Parms;

	Parms.Counter = Counter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.ListQoSServers_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMultiplayerListQosServersForTitleResponseResult                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_GeneralMenuScreen_C::ListQoSServers_Success(const struct FMultiplayerListQosServersForTitleResponse& Result, class UObject* CustomData)
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "ListQoSServers_Success");

	Params::UUI_Menu_GeneralMenuScreen_C_ListQoSServers_Success_Params Parms;

	Parms.Result = Result;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.ListQoSServers_Failure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError               Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_GeneralMenuScreen_C::ListQoSServers_Failure(const struct FPlayFabError& Error, class UObject* CustomData)
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "ListQoSServers_Failure");

	Params::UUI_Menu_GeneralMenuScreen_C_ListQoSServers_Failure_Params Parms;

	Parms.Error = Error;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Menu_GeneralMenuScreen_C::Construct()
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "Construct");

	Params::UUI_Menu_GeneralMenuScreen_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.BndEvt__UI_Menu_GeneralMenuScreen_UI_Button_BattlePass_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_Line_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_GeneralMenuScreen_C::BndEvt__UI_Menu_GeneralMenuScreen_UI_Button_BattlePass_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature(class UUI_Button_Line_C* Button)
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "BndEvt__UI_Menu_GeneralMenuScreen_UI_Button_BattlePass_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");

	Params::UUI_Menu_GeneralMenuScreen_C_BndEvt__UI_Menu_GeneralMenuScreen_UI_Button_BattlePass_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.GetTime_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientGetTimeResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_GeneralMenuScreen_C::GetTime_Success(const struct FClientGetTimeResult& Result, class UObject* CustomData)
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "GetTime_Success");

	Params::UUI_Menu_GeneralMenuScreen_C_GetTime_Success_Params Parms;

	Parms.Result = Result;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.GetTime_Failure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError               Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_GeneralMenuScreen_C::GetTime_Failure(const struct FPlayFabError& Error, class UObject* CustomData)
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "GetTime_Failure");

	Params::UUI_Menu_GeneralMenuScreen_C_GetTime_Failure_Params Parms;

	Parms.Error = Error;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.ExecuteUbergraph_UI_Menu_GeneralMenuScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTask_Menu_GeneralMenuScreen_SetActivePage_C*CallFunc_CreateAction_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTask_Menu_GeneralMenuScreen_SetActivePage_C*CallFunc_CreateAction_ReturnValue_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTask_Menu_GeneralMenuScreen_SetActivePage_C*CallFunc_CreateAction_ReturnValue_2                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTask_Menu_GeneralMenuScreen_SetActivePage_C*CallFunc_CreateAction_ReturnValue_3                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTask_Menu_GeneralMenuScreen_SetActivePage_C*CallFunc_CreateAction_ReturnValue_4                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTask_Menu_GeneralMenuScreen_SetActivePage_C*CallFunc_CreateAction_ReturnValue_5                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabClientAPI*           CallFunc_GetTime_ReturnValue                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           K2Node_CustomEvent_response                                      ()
// class UObject*                     K2Node_CustomEvent_customData_4                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_successful                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           Temp_struct_Variable                                             ()
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTask_Menu_GeneralMenuScreen_SetActivePage_C*CallFunc_CreateAction_ReturnValue_6                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           K2Node_CustomEvent_response_1                                    ()
// class UObject*                     K2Node_CustomEvent_customData_5                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_successful_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_Line_C*           K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_Line_C*           K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_Line_C*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerState_Menu_C*   K2Node_DynamicCast_AsBP_PG_Player_State_Menu                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_Line_C*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_DynamicCast_AsUI_Button                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_1                            (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_Line_C*           K2Node_DynamicCast_AsUI_Button_Line                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Counter_C*               K2Node_ComponentBoundEvent_Counter_1                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EModifiedData>   K2Node_CustomEvent_ModifiedData                                  (ConstParm, ReferenceParm)
// class FString                      K2Node_CustomEvent_CustomString                                  (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_GameInstance_C*       CallFunc_GetGameInstance_MyGameIntance                           (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_KickReason_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_Counter_C*               K2Node_ComponentBoundEvent_Counter                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_CurrencyConversion_C*    CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FMultiplayerListQosServersForTitleResponseK2Node_CustomEvent_result_1                                      ()
// class UObject*                     K2Node_CustomEvent_customData_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FMultiplayerListQosServersForTitleRequestK2Node_MakeStruct_MultiplayerListQosServersForTitleRequest       (NoDestructor)
// struct FPlayFabError               K2Node_CustomEvent_error_1                                       ()
// class UObject*                     K2Node_CustomEvent_customData_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         ()
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Menu_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPingQoSInfo>        K2Node_MakeArray_Array                                           (ReferenceParm)
// class UPingQoSSubsystem*           CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPingQoSInfo>        K2Node_LowEntry_LocalVariable_Value__Object                      (ReferenceParm)
// bool                               CallFunc_Update_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPingQoSSubsystem*           CallFunc_GetEngineSubsystem_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabMultiplayerAPI*      CallFunc_ListQosServersForTitle_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           Temp_struct_Variable_1                                           ()
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_Line_C*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FClientGetTimeResult        K2Node_CustomEvent_result                                        ()
// class UObject*                     K2Node_CustomEvent_customData_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabError               K2Node_CustomEvent_error                                         ()
// class UObject*                     K2Node_CustomEvent_customData                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_DateTimeFromIsoString_Result                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DateTimeFromIsoString_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_GameInstance_C*       CallFunc_GetGameInstance_MyGameIntance_1                         (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClientGameInstance*         CallFunc_GetClientGameInstance_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetPlayerCombinedInfo_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_Array_Get_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// struct FPingQoSInfo                K2Node_MakeStruct_PingQoSInfo                                    ()
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_GeneralMenuScreen_C::ExecuteUbergraph_UI_Menu_GeneralMenuScreen(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UTask_Menu_GeneralMenuScreen_SetActivePage_C* CallFunc_CreateAction_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UTask_Menu_GeneralMenuScreen_SetActivePage_C* CallFunc_CreateAction_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UTask_Menu_GeneralMenuScreen_SetActivePage_C* CallFunc_CreateAction_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UTask_Menu_GeneralMenuScreen_SetActivePage_C* CallFunc_CreateAction_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UTask_Menu_GeneralMenuScreen_SetActivePage_C* CallFunc_CreateAction_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UTask_Menu_GeneralMenuScreen_SetActivePage_C* CallFunc_CreateAction_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UPlayFabClientAPI* CallFunc_GetTime_ReturnValue, const struct FPlayFabBaseModel& K2Node_CustomEvent_response, class UObject* K2Node_CustomEvent_customData_4, bool K2Node_CustomEvent_successful, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, class UObject* Temp_object_Variable, const struct FPlayFabBaseModel& Temp_struct_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UTask_Menu_GeneralMenuScreen_SetActivePage_C* CallFunc_CreateAction_ReturnValue_6, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_IsClosed_Variable, const struct FPlayFabBaseModel& K2Node_CustomEvent_response_1, class UObject* K2Node_CustomEvent_customData_5, bool K2Node_CustomEvent_successful_1, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool K2Node_Event_IsDesignTime, class UUI_Button_Line_C* K2Node_ComponentBoundEvent_Button_4, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UUI_Button_Line_C* K2Node_ComponentBoundEvent_Button_3, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UUI_Button_Line_C* K2Node_ComponentBoundEvent_Button_2, class UBP_PG_PlayerState_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_State_Menu, bool K2Node_DynamicCast_bSuccess, class UUI_Button_Line_C* K2Node_ComponentBoundEvent_Button_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UUI_Button_C* K2Node_DynamicCast_AsUI_Button, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UUI_Button_Line_C* K2Node_DynamicCast_AsUI_Button_Line, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue_1, class UUI_Counter_C* K2Node_ComponentBoundEvent_Counter_1, TArray<enum class EModifiedData>& K2Node_CustomEvent_ModifiedData, const class FString& K2Node_CustomEvent_CustomString, int32 Temp_int_Loop_Counter_Variable_2, class UBP_PG_GameInstance_C* CallFunc_GetGameInstance_MyGameIntance, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_KickReason_C* CallFunc_Create_ReturnValue, class UUI_Counter_C* K2Node_ComponentBoundEvent_Counter, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class UUI_CurrencyConversion_C* CallFunc_Create_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FMultiplayerListQosServersForTitleResponse& K2Node_CustomEvent_result_1, class UObject* K2Node_CustomEvent_customData_3, const struct FMultiplayerListQosServersForTitleRequest& K2Node_MakeStruct_MultiplayerListQosServersForTitleRequest, const struct FPlayFabError& K2Node_CustomEvent_error_1, class UObject* K2Node_CustomEvent_customData_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess_3, TArray<struct FPingQoSInfo>& K2Node_MakeArray_Array, class UPingQoSSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, TArray<struct FPingQoSInfo>& K2Node_LowEntry_LocalVariable_Value__Object, bool CallFunc_Update_ReturnValue, class UPingQoSSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class UPlayFabMultiplayerAPI* CallFunc_ListQosServersForTitle_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FPlayFabBaseModel& Temp_struct_Variable_1, class UObject* Temp_object_Variable_1, bool Temp_bool_Variable_1, class UUI_Button_Line_C* K2Node_ComponentBoundEvent_Button, const struct FClientGetTimeResult& K2Node_CustomEvent_result, class UObject* K2Node_CustomEvent_customData_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, const struct FPlayFabError& K2Node_CustomEvent_error, class UObject* K2Node_CustomEvent_customData, const struct FDateTime& CallFunc_DateTimeFromIsoString_Result, bool CallFunc_DateTimeFromIsoString_ReturnValue, class UBP_PG_GameInstance_C* CallFunc_GetGameInstance_MyGameIntance_1, class UClientGameInstance* CallFunc_GetClientGameInstance_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, class UPlayFabJsonObject* CallFunc_Array_Get_Item_2, const class FString& CallFunc_GetStringField_ReturnValue, const class FString& CallFunc_GetStringField_ReturnValue_1, const struct FPingQoSInfo& K2Node_MakeStruct_PingQoSInfo, int32 CallFunc_Array_Add_ReturnValue)
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "ExecuteUbergraph_UI_Menu_GeneralMenuScreen");

	Params::UUI_Menu_GeneralMenuScreen_C_ExecuteUbergraph_UI_Menu_GeneralMenuScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_CreateAction_ReturnValue = CallFunc_CreateAction_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_CreateAction_ReturnValue_1 = CallFunc_CreateAction_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_CreateAction_ReturnValue_2 = CallFunc_CreateAction_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_CreateAction_ReturnValue_3 = CallFunc_CreateAction_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_CreateAction_ReturnValue_4 = CallFunc_CreateAction_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_CreateAction_ReturnValue_5 = CallFunc_CreateAction_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_GetTime_ReturnValue = CallFunc_GetTime_ReturnValue;
	Parms.K2Node_CustomEvent_response = K2Node_CustomEvent_response;
	Parms.K2Node_CustomEvent_customData_4 = K2Node_CustomEvent_customData_4;
	Parms.K2Node_CustomEvent_successful = K2Node_CustomEvent_successful;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_CreateAction_ReturnValue_6 = CallFunc_CreateAction_ReturnValue_6;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CustomEvent_response_1 = K2Node_CustomEvent_response_1;
	Parms.K2Node_CustomEvent_customData_5 = K2Node_CustomEvent_customData_5;
	Parms.K2Node_CustomEvent_successful_1 = K2Node_CustomEvent_successful_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_State_Menu = K2Node_DynamicCast_AsBP_PG_Player_State_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsUI_Button = K2Node_DynamicCast_AsUI_Button;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue_1 = CallFunc_GetAllChildren_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsUI_Button_Line = K2Node_DynamicCast_AsUI_Button_Line;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Counter_1 = K2Node_ComponentBoundEvent_Counter_1;
	Parms.K2Node_CustomEvent_ModifiedData = K2Node_CustomEvent_ModifiedData;
	Parms.K2Node_CustomEvent_CustomString = K2Node_CustomEvent_CustomString;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_GetGameInstance_MyGameIntance = CallFunc_GetGameInstance_MyGameIntance;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Counter = K2Node_ComponentBoundEvent_Counter;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_CustomEvent_result_1 = K2Node_CustomEvent_result_1;
	Parms.K2Node_CustomEvent_customData_3 = K2Node_CustomEvent_customData_3;
	Parms.K2Node_MakeStruct_MultiplayerListQosServersForTitleRequest = K2Node_MakeStruct_MultiplayerListQosServersForTitleRequest;
	Parms.K2Node_CustomEvent_error_1 = K2Node_CustomEvent_error_1;
	Parms.K2Node_CustomEvent_customData_2 = K2Node_CustomEvent_customData_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu = K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.K2Node_LowEntry_LocalVariable_Value__Object = K2Node_LowEntry_LocalVariable_Value__Object;
	Parms.CallFunc_Update_ReturnValue = CallFunc_Update_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_1 = CallFunc_GetEngineSubsystem_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.CallFunc_ListQosServersForTitle_ReturnValue = CallFunc_ListQosServersForTitle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_CustomEvent_result = K2Node_CustomEvent_result;
	Parms.K2Node_CustomEvent_customData_1 = K2Node_CustomEvent_customData_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CustomEvent_error = K2Node_CustomEvent_error;
	Parms.K2Node_CustomEvent_customData = K2Node_CustomEvent_customData;
	Parms.CallFunc_DateTimeFromIsoString_Result = CallFunc_DateTimeFromIsoString_Result;
	Parms.CallFunc_DateTimeFromIsoString_ReturnValue = CallFunc_DateTimeFromIsoString_ReturnValue;
	Parms.CallFunc_GetGameInstance_MyGameIntance_1 = CallFunc_GetGameInstance_MyGameIntance_1;
	Parms.CallFunc_GetClientGameInstance_ReturnValue = CallFunc_GetClientGameInstance_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetPlayerCombinedInfo_ReturnValue = CallFunc_GetPlayerCombinedInfo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetStringField_ReturnValue = CallFunc_GetStringField_ReturnValue;
	Parms.CallFunc_GetStringField_ReturnValue_1 = CallFunc_GetStringField_ReturnValue_1;
	Parms.K2Node_MakeStruct_PingQoSInfo = K2Node_MakeStruct_PingQoSInfo;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.OnUpdatePingOfRegions__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Menu_GeneralMenuScreen_C::OnUpdatePingOfRegions__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_Menu_GeneralMenuScreen_C", "OnUpdatePingOfRegions__DelegateSignature");

	Params::UUI_Menu_GeneralMenuScreen_C_OnUpdatePingOfRegions__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
