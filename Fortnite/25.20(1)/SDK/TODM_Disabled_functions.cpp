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


// Function TODM_Disabled.TODM_Disabled_C.SetReflectionQualityMPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetReflectionQuality_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTODM_Disabled_C::SetReflectionQualityMPC(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetReflectionQuality_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast)
{
	static auto Func = Class->GetFunction("TODM_Disabled_C", "SetReflectionQualityMPC");

	Params::UTODM_Disabled_C_SetReflectionQualityMPC_Params Parms;

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetReflectionQuality_ReturnValue = CallFunc_GetReflectionQuality_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TODM_Disabled.TODM_Disabled_C.SetGlobalIlluminationMPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetGlobalIlluminationQuality_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTODM_Disabled_C::SetGlobalIlluminationMPC(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetGlobalIlluminationQuality_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Clamp_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1)
{
	static auto Func = Class->GetFunction("TODM_Disabled_C", "SetGlobalIlluminationMPC");

	Params::UTODM_Disabled_C_SetGlobalIlluminationMPC_Params Parms;

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetGlobalIlluminationQuality_ReturnValue = CallFunc_GetGlobalIlluminationQuality_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue_1 = CallFunc_Clamp_ReturnValue_1;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TODM_Disabled.TODM_Disabled_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTODM_Disabled_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("TODM_Disabled_C", "UserConstructionScript");

	Params::UTODM_Disabled_C_UserConstructionScript_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TODM_Disabled.TODM_Disabled_C.DisableLightAndFog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTODM_Disabled_C::DisableLightAndFog(bool Enable)
{
	static auto Func = Class->GetFunction("TODM_Disabled_C", "DisableLightAndFog");

	Params::UTODM_Disabled_C_DisableLightAndFog_Params Parms;

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TODM_Disabled.TODM_Disabled_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTODM_Disabled_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("TODM_Disabled_C", "ReceiveBeginPlay");

	Params::UTODM_Disabled_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TODM_Disabled.TODM_Disabled_C.Update Scalabilty Settings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTODM_Disabled_C::Update_Scalabilty_Settings()
{
	static auto Func = Class->GetFunction("TODM_Disabled_C", "Update Scalabilty Settings");

	Params::UTODM_Disabled_C_Update_Scalabilty_Settings_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TODM_Disabled.TODM_Disabled_C.ExecuteUbergraph_TODM_Disabled
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Enable                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_BoolToDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTODM_Disabled_C::ExecuteUbergraph_TODM_Disabled(int32 EntryPoint, bool K2Node_CustomEvent_Enable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, double CallFunc_Conv_BoolToDouble_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast)
{
	static auto Func = Class->GetFunction("TODM_Disabled_C", "ExecuteUbergraph_TODM_Disabled");

	Params::UTODM_Disabled_C_ExecuteUbergraph_TODM_Disabled_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Enable = K2Node_CustomEvent_Enable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Conv_BoolToDouble_ReturnValue = CallFunc_Conv_BoolToDouble_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_1 = CallFunc_GetGameUserSettings_ReturnValue_1;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
