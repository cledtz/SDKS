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


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.UGC BindRimLightIntensityChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerState*            CallFunc_AttemptGetPlayerStateForPawn_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateAthena*        K2Node_DynamicCast_AsFort_Game_State_Athena                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSpatialGameplayExperience_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::UGC_BindRimLightIntensityChange(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortPlayerState* CallFunc_AttemptGetPlayerStateForPawn_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsSpatialGameplayExperience_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "UGC BindRimLightIntensityChange");

	Params::APlayerPawn_Athena_C_UGC_BindRimLightIntensityChange_Params Parms;

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AttemptGetPlayerStateForPawn_ReturnValue = CallFunc_AttemptGetPlayerStateForPawn_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Athena = K2Node_DynamicCast_AsFort_Game_State_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsSpatialGameplayExperience_ReturnValue = CallFunc_IsSpatialGameplayExperience_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.UGC InitRimlightIntensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevelWithContext_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateAthena*        K2Node_DynamicCast_AsFort_Game_State_Athena                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSpatialGameplayExperience_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Rim_Light_Intensity_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::UGC_InitRimlightIntensity(class AGameStateBase* CallFunc_GetGameState_ReturnValue, float CallFunc_GetValueAtLevelWithContext_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsSpatialGameplayExperience_ReturnValue, double K2Node_VariableSet_Rim_Light_Intensity_ImplicitCast)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "UGC InitRimlightIntensity");

	Params::APlayerPawn_Athena_C_UGC_InitRimlightIntensity_Params Parms;

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_GetValueAtLevelWithContext_ReturnValue = CallFunc_GetValueAtLevelWithContext_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Athena = K2Node_DynamicCast_AsFort_Game_State_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsSpatialGameplayExperience_ReturnValue = CallFunc_IsSpatialGameplayExperience_ReturnValue;
	Parms.K2Node_VariableSet_Rim_Light_Intensity_ImplicitCast = K2Node_VariableSet_Rim_Light_Intensity_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.UpdateRimlightIntensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetConsoleVariableBoolValue_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetConsoleVariableBoolValue_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetConsoleVariableBoolValue_ReturnValue_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::UpdateRimlightIntensity(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue_2)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "UpdateRimlightIntensity");

	Params::APlayerPawn_Athena_C_UpdateRimlightIntensity_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetConsoleVariableBoolValue_ReturnValue = CallFunc_GetConsoleVariableBoolValue_ReturnValue;
	Parms.CallFunc_GetConsoleVariableBoolValue_ReturnValue_1 = CallFunc_GetConsoleVariableBoolValue_ReturnValue_1;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_1 = CallFunc_IsLocallyControlled_ReturnValue_1;
	Parms.CallFunc_GetConsoleVariableBoolValue_ReturnValue_2 = CallFunc_GetConsoleVariableBoolValue_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetMaterialRimlightIntensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Multiplier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::SetMaterialRimlightIntensity(double Multiplier, int32 Temp_int_Array_Index_Variable, bool CallFunc_Greater_DoubleDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "SetMaterialRimlightIntensity");

	Params::APlayerPawn_Athena_C_SetMaterialRimlightIntensity_Params Parms;

	Parms.Multiplier = Multiplier;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_1 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetPhysicalRimlightIntensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::SetPhysicalRimlightIntensity(bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "SetPhysicalRimlightIntensity");

	Params::APlayerPawn_Athena_C_SetPhysicalRimlightIntensity_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Rimlight Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CVarName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetConsoleVariableFloatValue_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetConsoleVariableBoolValue_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetConsoleVariableBoolValue_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetConsoleVariableBoolValue_ReturnValue_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APhysicalRimlight_C*         CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_RimlightCVARBoost_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::Rimlight_Setup(const class FString& CVarName, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, float CallFunc_GetConsoleVariableFloatValue_ReturnValue, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue_1, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue_2, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APhysicalRimlight_C* CallFunc_FinishSpawningActor_ReturnValue, double K2Node_VariableSet_RimlightCVARBoost_ImplicitCast)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "Rimlight Setup");

	Params::APlayerPawn_Athena_C_Rimlight_Setup_Params Parms;

	Parms.CVarName = CVarName;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetConsoleVariableFloatValue_ReturnValue = CallFunc_GetConsoleVariableFloatValue_ReturnValue;
	Parms.CallFunc_GetConsoleVariableBoolValue_ReturnValue = CallFunc_GetConsoleVariableBoolValue_ReturnValue;
	Parms.CallFunc_GetConsoleVariableBoolValue_ReturnValue_1 = CallFunc_GetConsoleVariableBoolValue_ReturnValue_1;
	Parms.CallFunc_GetConsoleVariableBoolValue_ReturnValue_2 = CallFunc_GetConsoleVariableBoolValue_ReturnValue_2;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_1 = CallFunc_IsLocallyControlled_ReturnValue_1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_VariableSet_RimlightCVARBoost_ImplicitCast = K2Node_VariableSet_RimlightCVARBoost_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GoToHUBIslandIfOutOfBounds
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortMinigame*               CallFunc_GetMinigame_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::GoToHUBIslandIfOutOfBounds(class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, class AFortMinigame* CallFunc_GetMinigame_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "GoToHUBIslandIfOutOfBounds");

	Params::APlayerPawn_Athena_C_GoToHUBIslandIfOutOfBounds_Params Parms;

	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMinigame_ReturnValue = CallFunc_GetMinigame_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GetRightAxis
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputAxisValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputAxisValue_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::GetRightAxis(double* Return_Value, float CallFunc_GetInputAxisValue_ReturnValue, float CallFunc_GetInputAxisValue_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "GetRightAxis");

	Params::APlayerPawn_Athena_C_GetRightAxis_Params Parms;

	Parms.CallFunc_GetInputAxisValue_ReturnValue = CallFunc_GetInputAxisValue_ReturnValue;
	Parms.CallFunc_GetInputAxisValue_ReturnValue_1 = CallFunc_GetInputAxisValue_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GetForwardAxis
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputAxisValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputAxisValue_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::GetForwardAxis(double* Return_Value, float CallFunc_GetInputAxisValue_ReturnValue, float CallFunc_GetInputAxisValue_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "GetForwardAxis");

	Params::APlayerPawn_Athena_C_GetForwardAxis_Params Parms;

	Parms.CallFunc_GetInputAxisValue_ReturnValue = CallFunc_GetInputAxisValue_ReturnValue;
	Parms.CallFunc_GetInputAxisValue_ReturnValue_1 = CallFunc_GetInputAxisValue_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.AttemptToSetRimLight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataDrivenCVarEngineSubsystem*CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::AttemptToSetRimLight(class UDataDrivenCVarEngineSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "AttemptToSetRimLight");

	Params::APlayerPawn_Athena_C_AttemptToSetRimLight_Params Parms;

	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GetPawnIsInLocalSquad
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsInLocalSquad                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              ThisPawnSquadID                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerState*            CallFunc_AttemptGetPlayerStateForPawn_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerStateAthena*      K2Node_DynamicCast_AsFort_Player_State_Athena                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerState*            CallFunc_AttemptGetPlayerStateForPawn_ReturnValue_1              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetSquadId_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerStateAthena*      K2Node_DynamicCast_AsFort_Player_State_Athena_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetSquadId_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::GetPawnIsInLocalSquad(bool* IsInLocalSquad, uint8 ThisPawnSquadID, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class AFortPlayerState* CallFunc_AttemptGetPlayerStateForPawn_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortPlayerStateAthena* K2Node_DynamicCast_AsFort_Player_State_Athena, bool K2Node_DynamicCast_bSuccess_1, class AFortPlayerState* CallFunc_AttemptGetPlayerStateForPawn_ReturnValue_1, uint8 CallFunc_GetSquadId_ReturnValue, class AFortPlayerStateAthena* K2Node_DynamicCast_AsFort_Player_State_Athena_1, bool K2Node_DynamicCast_bSuccess_2, uint8 CallFunc_GetSquadId_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "GetPawnIsInLocalSquad");

	Params::APlayerPawn_Athena_C_GetPawnIsInLocalSquad_Params Parms;

	Parms.ThisPawnSquadID = ThisPawnSquadID;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_AttemptGetPlayerStateForPawn_ReturnValue = CallFunc_AttemptGetPlayerStateForPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Player_State_Athena = K2Node_DynamicCast_AsFort_Player_State_Athena;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_AttemptGetPlayerStateForPawn_ReturnValue_1 = CallFunc_AttemptGetPlayerStateForPawn_ReturnValue_1;
	Parms.CallFunc_GetSquadId_ReturnValue = CallFunc_GetSquadId_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_State_Athena_1 = K2Node_DynamicCast_AsFort_Player_State_Athena_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetSquadId_ReturnValue_1 = CallFunc_GetSquadId_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsInLocalSquad != nullptr)
		*IsInLocalSquad = Parms.IsInLocalSquad;

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Swinging_AttachLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AttachPointExists                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::Swinging_AttachLocation(struct FVector* Location, bool* AttachPointExists, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "Swinging_AttachLocation");

	Params::APlayerPawn_Athena_C_Swinging_AttachLocation_Params Parms;

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = Parms.Location;

	if (AttachPointExists != nullptr)
		*AttachPointExists = Parms.AttachPointExists;

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Swinging_ResetMeshTransform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::Swinging_ResetMeshTransform()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "Swinging_ResetMeshTransform");

	Params::APlayerPawn_Athena_C_Swinging_ResetMeshTransform_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Swinging_SetJumpHeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Jump_ZVelocity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMovementComp_Character* K2Node_DynamicCast_AsFort_Movement_Comp_Character                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::Swinging_SetJumpHeight(double Jump_ZVelocity, class UFortMovementComp_Character* K2Node_DynamicCast_AsFort_Movement_Comp_Character, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "Swinging_SetJumpHeight");

	Params::APlayerPawn_Athena_C_Swinging_SetJumpHeight_Params Parms;

	Parms.Jump_ZVelocity = Jump_ZVelocity;
	Parms.K2Node_DynamicCast_AsFort_Movement_Comp_Character = K2Node_DynamicCast_AsFort_Movement_Comp_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.IsSwingGrounded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsSwingingGrounded                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortControllerComponent_Swinging*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSwingingGrounded_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::IsSwingGrounded(bool* IsSwingingGrounded, class AController* CallFunc_GetController_ReturnValue, class UFortControllerComponent_Swinging* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsSwingingGrounded_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "IsSwingGrounded");

	Params::APlayerPawn_Athena_C_IsSwingGrounded_Params Parms;

	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsSwingingGrounded_ReturnValue = CallFunc_IsSwingingGrounded_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSwingingGrounded != nullptr)
		*IsSwingingGrounded = Parms.IsSwingingGrounded;

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingingVectorToAttachPoint
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Caller_ID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetComponentBounds_Origin                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetComponentBounds_BoxExtent                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetComponentBounds_SphereRadius                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector APlayerPawn_Athena_C::SwingingVectorToAttachPoint(const class FString& Caller_ID, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "SwingingVectorToAttachPoint");

	Params::APlayerPawn_Athena_C_SwingingVectorToAttachPoint_Params Parms;

	Parms.Caller_ID = Caller_ID;
	Parms.CallFunc_GetComponentBounds_Origin = CallFunc_GetComponentBounds_Origin;
	Parms.CallFunc_GetComponentBounds_BoxExtent = CallFunc_GetComponentBounds_BoxExtent;
	Parms.CallFunc_GetComponentBounds_SphereRadius = CallFunc_GetComponentBounds_SphereRadius;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Swinging_StopReelingIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMovementComp_Character* K2Node_DynamicCast_AsFort_Movement_Comp_Character                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::Swinging_StopReelingIn(class UFortMovementComp_Character* K2Node_DynamicCast_AsFort_Movement_Comp_Character, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "Swinging_StopReelingIn");

	Params::APlayerPawn_Athena_C_Swinging_StopReelingIn_Params Parms;

	Parms.K2Node_DynamicCast_AsFort_Movement_Comp_Character = K2Node_DynamicCast_AsFort_Movement_Comp_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Swinging_StartReelingIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMovementComp_Character* K2Node_DynamicCast_AsFort_Movement_Comp_Character                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::Swinging_StartReelingIn(class UFortMovementComp_Character* K2Node_DynamicCast_AsFort_Movement_Comp_Character, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "Swinging_StartReelingIn");

	Params::APlayerPawn_Athena_C_Swinging_StartReelingIn_Params Parms;

	Parms.K2Node_DynamicCast_AsFort_Movement_Comp_Character = K2Node_DynamicCast_AsFort_Movement_Comp_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Swing_GetStartPoint
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetComponentBounds_Origin                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetComponentBounds_BoxExtent                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetComponentBounds_SphereRadius                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector APlayerPawn_Athena_C::Swing_GetStartPoint(const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, const struct FVector& CallFunc_SelectVector_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "Swing_GetStartPoint");

	Params::APlayerPawn_Athena_C_Swing_GetStartPoint_Params Parms;

	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentBounds_Origin = CallFunc_GetComponentBounds_Origin;
	Parms.CallFunc_GetComponentBounds_BoxExtent = CallFunc_GetComponentBounds_BoxExtent;
	Parms.CallFunc_GetComponentBounds_SphereRadius = CallFunc_GetComponentBounds_SphereRadius;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.IsSwingAttached
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSwingAttached                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortControllerComponent_Swinging*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSwingAttached_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::IsSwingAttached(bool* IsSwingAttached, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFortControllerComponent_Swinging* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsSwingAttached_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "IsSwingAttached");

	Params::APlayerPawn_Athena_C_IsSwingAttached_Params Parms;

	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsSwingAttached_ReturnValue = CallFunc_IsSwingAttached_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSwingAttached != nullptr)
		*IsSwingAttached = Parms.IsSwingAttached;

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingDetached
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortControllerComponent_Swinging*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::SwingDetached(class AController* CallFunc_GetController_ReturnValue, class UFortControllerComponent_Swinging* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "SwingDetached");

	Params::APlayerPawn_Athena_C_SwingDetached_Params Parms;

	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingAttached
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     AttachLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      AttachedActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortControllerComponent_Swinging*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::SwingAttached(const struct FVector& AttachLocation, class AActor* AttachedActor, class AController* CallFunc_GetController_ReturnValue, class UFortControllerComponent_Swinging* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "SwingAttached");

	Params::APlayerPawn_Athena_C_SwingAttached_Params Parms;

	Parms.AttachLocation = AttachLocation;
	Parms.AttachedActor = AttachedActor;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.IsSwinging
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSwinging                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortControllerComponent_Swinging*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInSwingingMovement_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::IsSwinging(bool* IsSwinging, class AController* CallFunc_GetController_ReturnValue, class UFortControllerComponent_Swinging* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsInSwingingMovement_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "IsSwinging");

	Params::APlayerPawn_Athena_C_IsSwinging_Params Parms;

	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsInSwingingMovement_ReturnValue = CallFunc_IsInSwingingMovement_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSwinging != nullptr)
		*IsSwinging = Parms.IsSwinging;

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Swinging_CheckGrounded
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Grounded_                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitNormal                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Distance                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledCapsuleRadius_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_SphereTraceSingleByProfile_OutHit                       (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceSingleByProfile_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Distance_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::Swinging_CheckGrounded(bool* Grounded_, struct FVector* HitNormal, double* Distance, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_GetScaledCapsuleRadius_ReturnValue, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_SphereTraceSingleByProfile_OutHit, bool CallFunc_SphereTraceSingleByProfile_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_SelectVector_ReturnValue, double K2Node_FunctionResult_Distance_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "Swinging_CheckGrounded");

	Params::APlayerPawn_Athena_C_Swinging_CheckGrounded_Params Parms;

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_GetScaledCapsuleRadius_ReturnValue = CallFunc_GetScaledCapsuleRadius_ReturnValue;
	Parms.CallFunc_GetScaledCapsuleHalfHeight_ReturnValue = CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_SphereTraceSingleByProfile_OutHit = CallFunc_SphereTraceSingleByProfile_OutHit;
	Parms.CallFunc_SphereTraceSingleByProfile_ReturnValue = CallFunc_SphereTraceSingleByProfile_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;
	Parms.K2Node_FunctionResult_Distance_ImplicitCast = K2Node_FunctionResult_Distance_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Grounded_ != nullptr)
		*Grounded_ = Parms.Grounded_;

	if (HitNormal != nullptr)
		*HitNormal = Parms.HitNormal;

	if (Distance != nullptr)
		*Distance = Parms.Distance;

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.K2_UpdateCustomMovement
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterMovementComponent* MovementComponent                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             DT                                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::K2_UpdateCustomMovement(float DeltaTime, class UCharacterMovementComponent* MovementComponent, double DT)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "K2_UpdateCustomMovement");

	Params::APlayerPawn_Athena_C_K2_UpdateCustomMovement_Params Parms;

	Parms.DeltaTime = DeltaTime;
	Parms.MovementComponent = MovementComponent;
	Parms.DT = DT;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.handleCvarsUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CVarName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      L_cvarName                                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::HandleCvarsUpdated(const class FString& CVarName, const class FString& L_cvarName)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "handleCvarsUpdated");

	Params::APlayerPawn_Athena_C_HandleCvarsUpdated_Params Parms;

	Parms.CVarName = CVarName;
	Parms.L_cvarName = L_cvarName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnRep_PlayerAimRotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::OnRep_PlayerAimRotation()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnRep_PlayerAimRotation");

	Params::APlayerPawn_Athena_C_OnRep_PlayerAimRotation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GetAimPoint
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    ControlRotation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void APlayerPawn_Athena_C::GetAimPoint(struct FRotator* ControlRotation, const struct FRotator& CallFunc_GetControlRotation_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "GetAimPoint");

	Params::APlayerPawn_Athena_C_GetAimPoint_Params Parms;

	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ControlRotation != nullptr)
		*ControlRotation = Parms.ControlRotation;

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.PawnIsDecoy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool APlayerPawn_Athena_C::PawnIsDecoy(bool CallFunc_HasTag_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "PawnIsDecoy");

	Params::APlayerPawn_Athena_C_PawnIsDecoy_Params Parms;

	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.PawnIsNPC
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool APlayerPawn_Athena_C::PawnIsNPC(bool CallFunc_HasTag_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "PawnIsNPC");

	Params::APlayerPawn_Athena_C_PawnIsNPC_Params Parms;

	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveSkeletalMeshComponentsFromWeaponObject
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWeapon*                 WeaponObject                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              ComponentIndexOffset                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USkeletalMeshComponentBudgeted*>CallFunc_GetWeaponMeshes_WeaponMeshes                            (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_wildcard_Variable                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponentBudgeted*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumMaterials_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::RemoveSkeletalMeshComponentsFromWeaponObject(class AFortWeapon* WeaponObject, int32 ComponentIndexOffset, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class USkeletalMeshComponentBudgeted*>& CallFunc_GetWeaponMeshes_WeaponMeshes, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UMaterialInterface* Temp_wildcard_Variable, class USkeletalMeshComponentBudgeted* CallFunc_Array_Get_Item, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Conv_IntToBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, class UMaterialInterface* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "RemoveSkeletalMeshComponentsFromWeaponObject");

	Params::APlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject_Params Parms;

	Parms.WeaponObject = WeaponObject;
	Parms.ComponentIndexOffset = ComponentIndexOffset;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetWeaponMeshes_WeaponMeshes = CallFunc_GetWeaponMeshes_WeaponMeshes;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetNumMaterials_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.AddSkeletalMeshComponentsFromWeaponObject
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWeapon*                 WeaponObject                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USkeletalMeshComponentBudgeted*>CallFunc_GetWeaponMeshes_WeaponMeshes                            (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponentBudgeted*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue                                (ReferenceParm)
// bool                               CallFunc_PawnIsNPC_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetupDissolveFx_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::AddSkeletalMeshComponentsFromWeaponObject(class AFortWeapon* WeaponObject, class UMaterialInterface* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, TArray<class USkeletalMeshComponentBudgeted*>& CallFunc_GetWeaponMeshes_WeaponMeshes, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, class USkeletalMeshComponentBudgeted* CallFunc_Array_Get_Item, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, bool CallFunc_PawnIsNPC_ReturnValue, class UMaterialInterface* K2Node_Select_Default, bool CallFunc_SetupDissolveFx_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "AddSkeletalMeshComponentsFromWeaponObject");

	Params::APlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject_Params Parms;

	Parms.WeaponObject = WeaponObject;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetWeaponMeshes_WeaponMeshes = CallFunc_GetWeaponMeshes_WeaponMeshes;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetMaterials_ReturnValue = CallFunc_GetMaterials_ReturnValue;
	Parms.CallFunc_PawnIsNPC_ReturnValue = CallFunc_PawnIsNPC_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetupDissolveFx_ReturnValue = CallFunc_SetupDissolveFx_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GalileoMaterialSetup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::GalileoMaterialSetup(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "GalileoMaterialSetup");

	Params::APlayerPawn_Athena_C_GalileoMaterialSetup_Params Parms;

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Get Highest Priority Highlight
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     Source                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPawnHighlight              Top_Priority                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Best_Source                                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPawnHighlight              CallFunc_Map_Find_Value                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPawnHighlight              CallFunc_Map_Find_Value_1                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPawnHighlight              CallFunc_Map_Find_Value_2                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::Get_Highest_Priority_Highlight(class UObject** Source, struct FPawnHighlight* Top_Priority, class UObject* Best_Source, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FPawnHighlight& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class UObject*>& CallFunc_Map_Keys_Keys, class UObject* CallFunc_Array_Get_Item, const struct FPawnHighlight& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FPawnHighlight& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "Get Highest Priority Highlight");

	Params::APlayerPawn_Athena_C_Get_Highest_Priority_Highlight_Params Parms;

	Parms.Best_Source = Best_Source;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Source != nullptr)
		*Source = Parms.Source;

	if (Top_Priority != nullptr)
		*Top_Priority = Parms.Top_Priority;

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Highlight Pawn from Source
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPawnHighlight              Highlight                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Only_Update_If_Current                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPawnHighlight              CallFunc_Map_Find_Value                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::Highlight_Pawn_from_Source(class UObject* Source, const struct FPawnHighlight& Highlight, bool Only_Update_If_Current, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct FPawnHighlight& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "Highlight Pawn from Source");

	Params::APlayerPawn_Athena_C_Highlight_Pawn_from_Source_Params Parms;

	Parms.Source = Source;
	Parms.Highlight = Highlight;
	Parms.Only_Update_If_Current = Only_Update_If_Current;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Remove Pawn Highlight from Source
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Get_Highest_Priority_Highlight_Source                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPawnHighlight              CallFunc_Get_Highest_Priority_Highlight_Top_Priority             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::Remove_Pawn_Highlight_from_Source(class UObject* Source, class UObject* CallFunc_Get_Highest_Priority_Highlight_Source, const struct FPawnHighlight& CallFunc_Get_Highest_Priority_Highlight_Top_Priority, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Map_Remove_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "Remove Pawn Highlight from Source");

	Params::APlayerPawn_Athena_C_Remove_Pawn_Highlight_from_Source_Params Parms;

	Parms.Source = Source;
	Parms.CallFunc_Get_Highest_Priority_Highlight_Source = CallFunc_Get_Highest_Priority_Highlight_Source;
	Parms.CallFunc_Get_Highest_Priority_Highlight_Top_Priority = CallFunc_Get_Highest_Priority_Highlight_Top_Priority;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ApplyPawnHighlight
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPawnHighlight              HitGlow                                                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Current_Highlight_Priority_ImplicitCast       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::ApplyPawnHighlight(class UObject* Source, const struct FPawnHighlight& HitGlow, double CallFunc_Add_DoubleDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, double K2Node_VariableSet_Current_Highlight_Priority_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "ApplyPawnHighlight");

	Params::APlayerPawn_Athena_C_ApplyPawnHighlight_Params Parms;

	Parms.Source = Source;
	Parms.HitGlow = HitGlow;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_VariableSet_Current_Highlight_Priority_ImplicitCast = K2Node_VariableSet_Current_Highlight_Priority_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnRep_PlayRespawnFXOnSpawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::OnRep_PlayRespawnFXOnSpawn()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnRep_PlayRespawnFXOnSpawn");

	Params::APlayerPawn_Athena_C_OnRep_PlayRespawnFXOnSpawn_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.LockonSearchCompleteTimedOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::LockonSearchCompleteTimedOut()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "LockonSearchCompleteTimedOut");

	Params::APlayerPawn_Athena_C_LockonSearchCompleteTimedOut_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnLockOnSearchCompleted
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bConsumeEvent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::OnLockOnSearchCompleted(bool* bConsumeEvent, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnLockOnSearchCompleted");

	Params::APlayerPawn_Athena_C_OnLockOnSearchCompleted_Params Parms;

	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bConsumeEvent != nullptr)
		*bConsumeEvent = Parms.bConsumeEvent;

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetPartyInProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsPartyInProgress                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::SetPartyInProgress(bool bIsPartyInProgress)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "SetPartyInProgress");

	Params::APlayerPawn_Athena_C_SetPartyInProgress_Params Parms;

	Parms.bIsPartyInProgress = bIsPartyInProgress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.CleanUpTeleportationFXLight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::CleanUpTeleportationFXLight(bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "CleanUpTeleportationFXLight");

	Params::APlayerPawn_Athena_C_CleanUpTeleportationFXLight_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RestoreCharacterMats
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bFullyCompleted                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentReplacementIndex                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Itr                                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    Temp_wildcard_Variable                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue                                (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::RestoreCharacterMats(bool* bFullyCompleted, int32 CurrentReplacementIndex, int32 Itr, int32 Temp_int_Loop_Counter_Variable, class UMaterialInstanceDynamic* Temp_wildcard_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class USkeletalMeshComponent* CallFunc_Array_Get_Item_1, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "RestoreCharacterMats");

	Params::APlayerPawn_Athena_C_RestoreCharacterMats_Params Parms;

	Parms.CurrentReplacementIndex = CurrentReplacementIndex;
	Parms.Itr = Itr;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetMaterials_ReturnValue = CallFunc_GetMaterials_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (bFullyCompleted != nullptr)
		*bFullyCompleted = Parms.bFullyCompleted;

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetPetHidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewHidden                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::SetPetHidden(bool NewHidden, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "SetPetHidden");

	Params::APlayerPawn_Athena_C_SetPetHidden_Params Parms;

	Parms.NewHidden = NewHidden;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetupDissolveFx
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PawnIsNPC_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetupDissolveFx_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::SetupDissolveFx(bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, bool CallFunc_PawnIsNPC_ReturnValue, class UMaterialInterface* K2Node_Select_Default, bool CallFunc_SetupDissolveFx_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "SetupDissolveFx");

	Params::APlayerPawn_Athena_C_SetupDissolveFx_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_PawnIsNPC_ReturnValue = CallFunc_PawnIsNPC_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetupDissolveFx_ReturnValue = CallFunc_SetupDissolveFx_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.CleanupDissolveFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PawnIsNPC_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::CleanupDissolveFX(bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, bool CallFunc_PawnIsNPC_ReturnValue, class UMaterialInterface* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "CleanupDissolveFX");

	Params::APlayerPawn_Athena_C_CleanupDissolveFX_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_PawnIsNPC_ReturnValue = CallFunc_PawnIsNPC_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.UpdateDissolveFx
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Scalar_Transition                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Scalar_ZHeight                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Scalar_LightIntensity                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_UpdateDissolveFx_Transition_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_UpdateDissolveFx_Transition_ImplicitCast_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_UpdateDissolveFx_ZHeight_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_UpdateDissolveFx_ZHeight_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_UpdateDissolveFx_LightIntensity_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_UpdateDissolveFx_LightIntensity_ImplicitCast_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::UpdateDissolveFx(double Scalar_Transition, double Scalar_ZHeight, double Scalar_LightIntensity, float CallFunc_UpdateDissolveFx_Transition_ImplicitCast, float CallFunc_UpdateDissolveFx_Transition_ImplicitCast_1, float CallFunc_UpdateDissolveFx_ZHeight_ImplicitCast, float CallFunc_UpdateDissolveFx_ZHeight_ImplicitCast_1, float CallFunc_UpdateDissolveFx_LightIntensity_ImplicitCast, float CallFunc_UpdateDissolveFx_LightIntensity_ImplicitCast_1)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "UpdateDissolveFx");

	Params::APlayerPawn_Athena_C_UpdateDissolveFx_Params Parms;

	Parms.Scalar_Transition = Scalar_Transition;
	Parms.Scalar_ZHeight = Scalar_ZHeight;
	Parms.Scalar_LightIntensity = Scalar_LightIntensity;
	Parms.CallFunc_UpdateDissolveFx_Transition_ImplicitCast = CallFunc_UpdateDissolveFx_Transition_ImplicitCast;
	Parms.CallFunc_UpdateDissolveFx_Transition_ImplicitCast_1 = CallFunc_UpdateDissolveFx_Transition_ImplicitCast_1;
	Parms.CallFunc_UpdateDissolveFx_ZHeight_ImplicitCast = CallFunc_UpdateDissolveFx_ZHeight_ImplicitCast;
	Parms.CallFunc_UpdateDissolveFx_ZHeight_ImplicitCast_1 = CallFunc_UpdateDissolveFx_ZHeight_ImplicitCast_1;
	Parms.CallFunc_UpdateDissolveFx_LightIntensity_ImplicitCast = CallFunc_UpdateDissolveFx_LightIntensity_ImplicitCast;
	Parms.CallFunc_UpdateDissolveFx_LightIntensity_ImplicitCast_1 = CallFunc_UpdateDissolveFx_LightIntensity_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SpawnTeleportationLight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_PawnIsNPC_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPointLightComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::SpawnTeleportationLight(bool CallFunc_PawnIsNPC_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPointLightComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "SpawnTeleportationLight");

	Params::APlayerPawn_Athena_C_SpawnTeleportationLight_Params Parms;

	Parms.CallFunc_PawnIsNPC_ReturnValue = CallFunc_PawnIsNPC_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.FindBounds
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bGunTrue                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_Origin                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_BoxExtent                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::FindBounds(bool bGunTrue, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FTransform& CallFunc_MakeTransform_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, double CallFunc_VSize_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "FindBounds");

	Params::APlayerPawn_Athena_C_FindBounds_Params Parms;

	Parms.bGunTrue = bGunTrue;
	Parms.CallFunc_GetActorBounds_Origin = CallFunc_GetActorBounds_Origin;
	Parms.CallFunc_GetActorBounds_BoxExtent = CallFunc_GetActorBounds_BoxExtent;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.QueueTeleportOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::QueueTeleportOut()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "QueueTeleportOut");

	Params::APlayerPawn_Athena_C_QueueTeleportOut_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.QueueTeleportIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::QueueTeleportIn()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "QueueTeleportIn");

	Params::APlayerPawn_Athena_C_QueueTeleportIn_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnStartLongInteract
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ReceivingActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Out_bConsumeEvent                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Out_bSkipSetInteractDuration                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Out_bSkipStartAnimation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemInteractionType    Out_ItemInteractionType                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawnAthena*       K2Node_DynamicCast_AsFort_Player_Pawn_Athena                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::OnStartLongInteract(class AActor* ReceivingActor, bool* Out_bConsumeEvent, bool* Out_bSkipSetInteractDuration, bool* Out_bSkipStartAnimation, enum class EItemInteractionType* Out_ItemInteractionType, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, FInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnStartLongInteract");

	Params::APlayerPawn_Athena_C_OnStartLongInteract_Params Parms;

	Parms.ReceivingActor = ReceivingActor;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue_1 = CallFunc_ActorHasTag_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_Athena = K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Out_bConsumeEvent != nullptr)
		*Out_bConsumeEvent = Parms.Out_bConsumeEvent;

	if (Out_bSkipSetInteractDuration != nullptr)
		*Out_bSkipSetInteractDuration = Parms.Out_bSkipSetInteractDuration;

	if (Out_bSkipStartAnimation != nullptr)
		*Out_bSkipStartAnimation = Parms.Out_bSkipStartAnimation;

	if (Out_ItemInteractionType != nullptr)
		*Out_ItemInteractionType = Parms.Out_ItemInteractionType;

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.InWarmup
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInWarmup                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AAthena_GameState_C*         K2Node_DynamicCast_AsAthena_Game_State                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::InWarmup(bool* bInWarmup, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AAthena_GameState_C* K2Node_DynamicCast_AsAthena_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "InWarmup");

	Params::APlayerPawn_Athena_C_InWarmup_Params Parms;

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Game_State = K2Node_DynamicCast_AsAthena_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bInWarmup != nullptr)
		*bInWarmup = Parms.bInWarmup;

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.StopLoopingAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::StopLoopingAudio(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "StopLoopingAudio");

	Params::APlayerPawn_Athena_C_StopLoopingAudio_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.EnableWaterAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_Entering_Water                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                CallFunc_SetFloatParameter_self_CastInput                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_InFloat_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SpawnSoundAtLocation_VolumeMultiplier_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::EnableWaterAudio(bool Is_Entering_Water, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, bool Temp_bool_Variable, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, bool Temp_bool_Variable_1, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, class USoundBase* K2Node_Select_Default, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, FInterfaceProperty_ CallFunc_SetFloatParameter_self_CastInput, class USoundBase* K2Node_Select_Default_1, float CallFunc_SetFloatParameter_InFloat_ImplicitCast, float CallFunc_SpawnSoundAtLocation_VolumeMultiplier_ImplicitCast)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "EnableWaterAudio");

	Params::APlayerPawn_Athena_C_EnableWaterAudio_Params Parms;

	Parms.Is_Entering_Water = Is_Entering_Water;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_1 = CallFunc_IsLocallyControlled_ReturnValue_1;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue = CallFunc_SpawnSoundAtLocation_ReturnValue;
	Parms.CallFunc_SetFloatParameter_self_CastInput = CallFunc_SetFloatParameter_self_CastInput;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SetFloatParameter_InFloat_ImplicitCast = CallFunc_SetFloatParameter_InFloat_ImplicitCast;
	Parms.CallFunc_SpawnSoundAtLocation_VolumeMultiplier_ImplicitCast = CallFunc_SpawnSoundAtLocation_VolumeMultiplier_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GetLocationInCircle_XY
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     LocationLocalSpace                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetPI_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Cos_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Sin_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VLerp_Alpha_ImplicitCast                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::GetLocationInCircle_XY(struct FVector* LocationLocalSpace, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_RandomFloat_ReturnValue, double CallFunc_GetPI_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_Cos_ReturnValue, double CallFunc_Sin_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_VLerp_ReturnValue, float CallFunc_VLerp_Alpha_ImplicitCast)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "GetLocationInCircle_XY");

	Params::APlayerPawn_Athena_C_GetLocationInCircle_XY_Params Parms;

	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_GetPI_ReturnValue = CallFunc_GetPI_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Cos_ReturnValue = CallFunc_Cos_ReturnValue;
	Parms.CallFunc_Sin_ReturnValue = CallFunc_Sin_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_VLerp_Alpha_ImplicitCast = CallFunc_VLerp_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (LocationLocalSpace != nullptr)
		*LocationLocalSpace = Parms.LocationLocalSpace;

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerPawnStats        CallFunc_GetDataTableRowFromName_OutRow                          ()
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_PlayerAttributes_Speed_Walk_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_PlayerAttributes_Speed_Run_ImplicitCast       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_PlayerAttributes_Speed_Sprint_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::UserConstructionScript(const struct FFortPlayerPawnStats& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, double K2Node_VariableSet_PlayerAttributes_Speed_Walk_ImplicitCast, double K2Node_VariableSet_PlayerAttributes_Speed_Run_ImplicitCast, double K2Node_VariableSet_PlayerAttributes_Speed_Sprint_ImplicitCast)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "UserConstructionScript");

	Params::APlayerPawn_Athena_C_UserConstructionScript_Params Parms;

	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_VariableSet_PlayerAttributes_Speed_Walk_ImplicitCast = K2Node_VariableSet_PlayerAttributes_Speed_Walk_ImplicitCast;
	Parms.K2Node_VariableSet_PlayerAttributes_Speed_Run_ImplicitCast = K2Node_VariableSet_PlayerAttributes_Speed_Run_ImplicitCast;
	Parms.K2Node_VariableSet_PlayerAttributes_Speed_Sprint_ImplicitCast = K2Node_VariableSet_PlayerAttributes_Speed_Sprint_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::Timeline_0__FinishedFunc()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "Timeline_0__FinishedFunc");

	Params::APlayerPawn_Athena_C_Timeline_0__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::Timeline_0__UpdateFunc()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "Timeline_0__UpdateFunc");

	Params::APlayerPawn_Athena_C_Timeline_0__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnReady_978607004CDEB137CACF38831BECEF40
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortGameStateAthena*        GameState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlaylist*               Playlist                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void APlayerPawn_Athena_C::OnReady_978607004CDEB137CACF38831BECEF40(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnReady_978607004CDEB137CACF38831BECEF40");

	Params::APlayerPawn_Athena_C_OnReady_978607004CDEB137CACF38831BECEF40_Params Parms;

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = PlaylistContextTags;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "ReceiveBeginPlay");

	Params::APlayerPawn_Athena_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceivePossessed
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AController*                 NewController                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::ReceivePossessed(class AController* NewController)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "ReceivePossessed");

	Params::APlayerPawn_Athena_C_ReceivePossessed_Params Parms;

	Parms.NewController = NewController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::ReceiveDestroyed()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "ReceiveDestroyed");

	Params::APlayerPawn_Athena_C_ReceiveDestroyed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SafeZoneStatusChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::SafeZoneStatusChanged()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "SafeZoneStatusChanged");

	Params::APlayerPawn_Athena_C_SafeZoneStatusChanged_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Equipping
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void APlayerPawn_Athena_C::GameplayCue_Athena_Equipping(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "GameplayCue.Athena.Equipping");

	Params::APlayerPawn_Athena_C_GameplayCue_Athena_Equipping_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                   InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Athena_C::OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnDeathPlayEffects");

	Params::APlayerPawn_Athena_C_OnDeathPlayEffects_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Player.BeingRevivedFromDBNO
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void APlayerPawn_Athena_C::GameplayCue_Athena_Player_BeingRevivedFromDBNO(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "GameplayCue.Athena.Player.BeingRevivedFromDBNO");

	Params::APlayerPawn_Athena_C_GameplayCue_Athena_Player_BeingRevivedFromDBNO_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveStormFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::RemoveStormFX()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "RemoveStormFX");

	Params::APlayerPawn_Athena_C_RemoveStormFX_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.DBNOResurrect
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void APlayerPawn_Athena_C::GameplayCue_Abilities_Activation_DBNOResurrect(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "GameplayCue.Abilities.Activation.DBNOResurrect");

	Params::APlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOResurrect_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredWaterVolume
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector                     WaterSurfaceLocation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::OnEnteredWaterVolume(struct FVector& WaterSurfaceLocation)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnEnteredWaterVolume");

	Params::APlayerPawn_Athena_C_OnEnteredWaterVolume_Params Parms;

	Parms.WaterSurfaceLocation = WaterSurfaceLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnExitedWaterVolume
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector                     WaterSurfaceLocation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::OnExitedWaterVolume(struct FVector& WaterSurfaceLocation)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnExitedWaterVolume");

	Params::APlayerPawn_Athena_C_OnExitedWaterVolume_Params Parms;

	Parms.WaterSurfaceLocation = WaterSurfaceLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void APlayerPawn_Athena_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2");

	Params::APlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.NotifyTeammateSkydivedFromBus
// (Event, Public, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::NotifyTeammateSkydivedFromBus()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "NotifyTeammateSkydivedFromBus");

	Params::APlayerPawn_Athena_C_NotifyTeammateSkydivedFromBus_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void APlayerPawn_Athena_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1");

	Params::APlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "ReceiveEndPlay");

	Params::APlayerPawn_Athena_C_ReceiveEndPlay_Params Parms;

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnLeftReplayRelevancy
// (Event, Public, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::OnLeftReplayRelevancy()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnLeftReplayRelevancy");

	Params::APlayerPawn_Athena_C_OnLeftReplayRelevancy_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredReplayRelevancy
// (Event, Public, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::OnEnteredReplayRelevancy()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnEnteredReplayRelevancy");

	Params::APlayerPawn_Athena_C_OnEnteredReplayRelevancy_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCharacterCustomizationCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::OnCharacterCustomizationCompleted(class AFortPlayerPawn* Pawn)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnCharacterCustomizationCompleted");

	Params::APlayerPawn_Athena_C_OnCharacterCustomizationCompleted_Params Parms;

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnResInDuringWarmup
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::OnResInDuringWarmup()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnResInDuringWarmup");

	Params::APlayerPawn_Athena_C_OnResInDuringWarmup_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.AddStormFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::AddStormFX()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "AddStormFX");

	Params::APlayerPawn_Athena_C_AddStormFX_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetSafeZonePhaseAndGameplayCueTag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InSafeZonePhase                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSpawnGameplayCue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::SetSafeZonePhaseAndGameplayCueTag(int32 InSafeZonePhase, bool bSpawnGameplayCue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "SetSafeZonePhaseAndGameplayCueTag");

	Params::APlayerPawn_Athena_C_SetSafeZonePhaseAndGameplayCueTag_Params Parms;

	Parms.InSafeZonePhase = InSafeZonePhase;
	Parms.bSpawnGameplayCue = bSpawnGameplayCue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetSafeZoneTagWhenChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewWhichSafeZoneTag                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                GameplayTag                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               bSpawnGameplayCue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::SetSafeZoneTagWhenChanged(int32 NewWhichSafeZoneTag, const struct FGameplayTag& GameplayTag, bool bSpawnGameplayCue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "SetSafeZoneTagWhenChanged");

	Params::APlayerPawn_Athena_C_SetSafeZoneTagWhenChanged_Params Parms;

	Parms.NewWhichSafeZoneTag = NewWhichSafeZoneTag;
	Parms.GameplayTag = GameplayTag;
	Parms.bSpawnGameplayCue = bSpawnGameplayCue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnOutsideSafeZonePhaseChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              SafeZonePhase                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::OnOutsideSafeZonePhaseChanged(int32 SafeZonePhase)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnOutsideSafeZonePhaseChanged");

	Params::APlayerPawn_Athena_C_OnOutsideSafeZonePhaseChanged_Params Parms;

	Parms.SafeZonePhase = SafeZonePhase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveSafeZoneGameplayCue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::RemoveSafeZoneGameplayCue()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "RemoveSafeZoneGameplayCue");

	Params::APlayerPawn_Athena_C_RemoveSafeZoneGameplayCue_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnReceivedStormSurgeDamage
// (Event, Public, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::OnReceivedStormSurgeDamage()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnReceivedStormSurgeDamage");

	Params::APlayerPawn_Athena_C_OnReceivedStormSurgeDamage_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               First_Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::MeleeSwingLeft(bool First_Left)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "MeleeSwingLeft");

	Params::APlayerPawn_Athena_C_MeleeSwingLeft_Params Parms;

	Parms.First_Left = First_Left;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               First_Right                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::MeleeSwingRight(bool First_Right)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "MeleeSwingRight");

	Params::APlayerPawn_Athena_C_MeleeSwingRight_Params Parms;

	Parms.First_Right = First_Right;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.DBNOEnter
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void APlayerPawn_Athena_C::GameplayCue_Abilities_Activation_DBNOEnter(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "GameplayCue.Abilities.Activation.DBNOEnter");

	Params::APlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOEnter_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ActivateInvincibleVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::ActivateInvincibleVisuals(double Duration)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "ActivateInvincibleVisuals");

	Params::APlayerPawn_Athena_C_ActivateInvincibleVisuals_Params Parms;

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Reloading
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void APlayerPawn_Athena_C::GameplayCue_Athena_Reloading(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "GameplayCue.Athena.Reloading");

	Params::APlayerPawn_Athena_C_GameplayCue_Athena_Reloading_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.TeleportInNSeconds
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             SecondsTillTeleport                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     DestLocation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    DestRotation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APlayerPawn_Athena_C::TeleportInNSeconds(double SecondsTillTeleport, const struct FVector& DestLocation, const struct FRotator& DestRotation)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "TeleportInNSeconds");

	Params::APlayerPawn_Athena_C_TeleportInNSeconds_Params Parms;

	Parms.SecondsTillTeleport = SecondsTillTeleport;
	Parms.DestLocation = DestLocation;
	Parms.DestRotation = DestRotation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ClientRunSnowGC
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Instant                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::ClientRunSnowGC(bool Instant)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "ClientRunSnowGC");

	Params::APlayerPawn_Athena_C_ClientRunSnowGC_Params Parms;

	Parms.Instant = Instant;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.WhiteoutAndTeleport
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     DestLocation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    DestRotation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Instant                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Gravity                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::WhiteoutAndTeleport(const struct FVector& DestLocation, const struct FRotator& DestRotation, bool Instant, double Gravity)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "WhiteoutAndTeleport");

	Params::APlayerPawn_Athena_C_WhiteoutAndTeleport_Params Parms;

	Parms.DestLocation = DestLocation;
	Parms.DestRotation = DestRotation;
	Parms.Instant = Instant;
	Parms.Gravity = Gravity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Boost
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void APlayerPawn_Athena_C::GameplayCue_Athena_Boost(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "GameplayCue.Athena.Boost");

	Params::APlayerPawn_Athena_C_GameplayCue_Athena_Boost_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeStopGhost
// (Event, Public, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::OnCreativeStopGhost()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnCreativeStopGhost");

	Params::APlayerPawn_Athena_C_OnCreativeStopGhost_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeStartGhost
// (Event, Public, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::OnCreativeStartGhost()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnCreativeStartGhost");

	Params::APlayerPawn_Athena_C_OnCreativeStartGhost_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingLeft_End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::MeleeSwingLeft_End()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "MeleeSwingLeft_End");

	Params::APlayerPawn_Athena_C_MeleeSwingLeft_End_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingRight_End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::MeleeSwingRight_End()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "MeleeSwingRight_End");

	Params::APlayerPawn_Athena_C_MeleeSwingRight_End_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.AddSafeZoneGameplayCue
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::AddSafeZoneGameplayCue()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "AddSafeZoneGameplayCue");

	Params::APlayerPawn_Athena_C_AddSafeZoneGameplayCue_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveSafeZoneGameplayCueServerToClient
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::RemoveSafeZoneGameplayCueServerToClient()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "RemoveSafeZoneGameplayCueServerToClient");

	Params::APlayerPawn_Athena_C_RemoveSafeZoneGameplayCueServerToClient_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnSuccessfulBuildingEdit
// (Event, Public, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::OnSuccessfulBuildingEdit()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnSuccessfulBuildingEdit");

	Params::APlayerPawn_Athena_C_OnSuccessfulBuildingEdit_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Play Respawn FX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::Play_Respawn_FX()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "Play Respawn FX");

	Params::APlayerPawn_Athena_C_Play_Respawn_FX_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnSpawnImmunityTimeReset
// (Event, Public, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::OnSpawnImmunityTimeReset()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnSpawnImmunityTimeReset");

	Params::APlayerPawn_Athena_C_OnSpawnImmunityTimeReset_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredWaterBody
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortWaterBodyActor*         WaterBody                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsFirstBody                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::OnEnteredWaterBody(class AFortWaterBodyActor* WaterBody, bool bIsFirstBody)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnEnteredWaterBody");

	Params::APlayerPawn_Athena_C_OnEnteredWaterBody_Params Parms;

	Parms.WaterBody = WaterBody;
	Parms.bIsFirstBody = bIsFirstBody;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnExitedWaterBody
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortWaterBodyActor*         WaterBody                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsLastBody                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::OnExitedWaterBody(class AFortWaterBodyActor* WaterBody, bool bIsLastBody)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnExitedWaterBody");

	Params::APlayerPawn_Athena_C_OnExitedWaterBody_Params Parms;

	Parms.WaterBody = WaterBody;
	Parms.bIsLastBody = bIsLastBody;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.K2_OnMovementModeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EMovementMode           PrevMovementMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMovementMode           NewMovementMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              PrevCustomMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              NewCustomMode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::K2_OnMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "K2_OnMovementModeChanged");

	Params::APlayerPawn_Athena_C_K2_OnMovementModeChanged_Params Parms;

	Parms.PrevMovementMode = PrevMovementMode;
	Parms.NewMovementMode = NewMovementMode;
	Parms.PrevCustomMode = PrevCustomMode;
	Parms.NewCustomMode = NewCustomMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnBeginWaterSprintBoost
// (Event, Public, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::OnBeginWaterSprintBoost()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnBeginWaterSprintBoost");

	Params::APlayerPawn_Athena_C_OnBeginWaterSprintBoost_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.isHiddingInProp
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHidden                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::IsHiddingInProp(bool IsHidden)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "isHiddingInProp");

	Params::APlayerPawn_Athena_C_IsHiddingInProp_Params Parms;

	Parms.IsHidden = IsHidden;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnLandscapeCheckFailedAndTeleported
// (Event, Public, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::OnLandscapeCheckFailedAndTeleported()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnLandscapeCheckFailedAndTeleported");

	Params::APlayerPawn_Athena_C_OnLandscapeCheckFailedAndTeleported_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ScalePlayerUp
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::ScalePlayerUp()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "ScalePlayerUp");

	Params::APlayerPawn_Athena_C_ScalePlayerUp_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ScalePlayerDown
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::ScalePlayerDown()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "ScalePlayerDown");

	Params::APlayerPawn_Athena_C_ScalePlayerDown_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnTetheredExitPressed
// (Event, Public, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::OnTetheredExitPressed()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnTetheredExitPressed");

	Params::APlayerPawn_Athena_C_OnTetheredExitPressed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnTetheredExitReleased
// (Event, Public, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::OnTetheredExitReleased()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnTetheredExitReleased");

	Params::APlayerPawn_Athena_C_OnTetheredExitReleased_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnTetherStarted
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       LastTetherPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::OnTetherStarted(class APawn* LastTetherPawn)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnTetherStarted");

	Params::APlayerPawn_Athena_C_OnTetherStarted_Params Parms;

	Parms.LastTetherPawn = LastTetherPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnTetherEnded
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       LastTetherPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::OnTetherEnded(class APawn* LastTetherPawn)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnTetherEnded");

	Params::APlayerPawn_Athena_C_OnTetherEnded_Params Parms;

	Parms.LastTetherPawn = LastTetherPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.StartAImRotationTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::StartAImRotationTick()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "StartAImRotationTick");

	Params::APlayerPawn_Athena_C_StartAImRotationTick_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.EndRotationTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::EndRotationTick()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "EndRotationTick");

	Params::APlayerPawn_Athena_C_EndRotationTick_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReplicateAimRotation
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    PlayerAimRotation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APlayerPawn_Athena_C::ReplicateAimRotation(const struct FRotator& PlayerAimRotation)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "ReplicateAimRotation");

	Params::APlayerPawn_Athena_C_ReplicateAimRotation_Params Parms;

	Parms.PlayerAimRotation = PlayerAimRotation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.AimTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::AimTick()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "AimTick");

	Params::APlayerPawn_Athena_C_AimTick_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Damage
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void APlayerPawn_Athena_C::GameplayCue_Damage(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "GameplayCue.Damage");

	Params::APlayerPawn_Athena_C_GameplayCue_Damage_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Healing
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void APlayerPawn_Athena_C::GameplayCue_Healing(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "GameplayCue.Healing");

	Params::APlayerPawn_Athena_C_GameplayCue_Healing_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Damage.Shielded
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void APlayerPawn_Athena_C::GameplayCue_Damage_Shielded(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "GameplayCue.Damage.Shielded");

	Params::APlayerPawn_Athena_C_GameplayCue_Damage_Shielded_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Shield.PotionConsumed
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void APlayerPawn_Athena_C::GameplayCue_Shield_PotionConsumed(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "GameplayCue.Shield.PotionConsumed");

	Params::APlayerPawn_Athena_C_GameplayCue_Shield_PotionConsumed_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetupColdTag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::SetupColdTag()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "SetupColdTag");

	Params::APlayerPawn_Athena_C_SetupColdTag_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ApplyColdTag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::ApplyColdTag()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "ApplyColdTag");

	Params::APlayerPawn_Athena_C_ApplyColdTag_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ApplyColdTag_Retry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAbilitySystemComponent* AbilitySystemComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             AffectedPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::ApplyColdTag_Retry(class UFortAbilitySystemComponent* AbilitySystemComponent, class AFortPlayerPawn* AffectedPawn)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "ApplyColdTag_Retry");

	Params::APlayerPawn_Athena_C_ApplyColdTag_Retry_Params Parms;

	Parms.AbilitySystemComponent = AbilitySystemComponent;
	Parms.AffectedPawn = AffectedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeModeratorModeActivate
// (Event, Public, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::OnCreativeModeratorModeActivate()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnCreativeModeratorModeActivate");

	Params::APlayerPawn_Athena_C_OnCreativeModeratorModeActivate_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeModeratorModeDeactivate
// (Event, Public, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::OnCreativeModeratorModeDeactivate()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnCreativeModeratorModeDeactivate");

	Params::APlayerPawn_Athena_C_OnCreativeModeratorModeDeactivate_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeStartInvulnerable
// (Event, Public, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::OnCreativeStartInvulnerable()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnCreativeStartInvulnerable");

	Params::APlayerPawn_Athena_C_OnCreativeStartInvulnerable_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeStopInvulnerable
// (Event, Public, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::OnCreativeStopInvulnerable()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnCreativeStopInvulnerable");

	Params::APlayerPawn_Athena_C_OnCreativeStopInvulnerable_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.AddHighlightFromSource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPawnHighlight              Highlight                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OnlyUpdateIfCurrent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::AddHighlightFromSource(class UObject* Source, const struct FPawnHighlight& Highlight, bool OnlyUpdateIfCurrent)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "AddHighlightFromSource");

	Params::APlayerPawn_Athena_C_AddHighlightFromSource_Params Parms;

	Parms.Source = Source;
	Parms.Highlight = Highlight;
	Parms.OnlyUpdateIfCurrent = OnlyUpdateIfCurrent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveHighlightFromSource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::RemoveHighlightFromSource(class UObject* Source)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "RemoveHighlightFromSource");

	Params::APlayerPawn_Athena_C_RemoveHighlightFromSource_Params Parms;

	Parms.Source = Source;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveHit
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         MyComp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Other                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               bSelfMoved                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitNormal                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NormalImpulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void APlayerPawn_Athena_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "ReceiveHit");

	Params::APlayerPawn_Athena_C_ReceiveHit_Params Parms;

	Parms.MyComp = MyComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.bSelfMoved = bSelfMoved;
	Parms.HitLocation = HitLocation;
	Parms.HitNormal = HitNormal;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnDisplayHitNotify
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DamageDealt                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bCriticalHit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFatalHit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShieldHit                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      HitActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       HitTags                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::OnDisplayHitNotify(float DamageDealt, bool bCriticalHit, bool bFatalHit, bool bShieldHit, class AActor* HitActor, const struct FGameplayTagContainer& HitTags, const struct FVector& HitLocation)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnDisplayHitNotify");

	Params::APlayerPawn_Athena_C_OnDisplayHitNotify_Params Parms;

	Parms.DamageDealt = DamageDealt;
	Parms.bCriticalHit = bCriticalHit;
	Parms.bFatalHit = bFatalHit;
	Parms.bShieldHit = bShieldHit;
	Parms.HitActor = HitActor;
	Parms.HitTags = HitTags;
	Parms.HitLocation = HitLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Hide Character Parts
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHidden                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::Hide_Character_Parts(bool IsHidden)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "Hide Character Parts");

	Params::APlayerPawn_Athena_C_Hide_Character_Parts_Params Parms;

	Parms.IsHidden = IsHidden;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnPart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCustomCharacterPart*        Part                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      MeshPart                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EFortCustomPartType     PartType                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::OnPart(class AFortPlayerPawn* Pawn, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, enum class EFortCustomPartType PartType)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnPart");

	Params::APlayerPawn_Athena_C_OnPart_Params Parms;

	Parms.Pawn = Pawn;
	Parms.Part = Part;
	Parms.MeshPart = MeshPart;
	Parms.PartType = PartType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Athena_C::OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnDeathServer");

	Params::APlayerPawn_Athena_C_OnDeathServer_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnDBNOStateChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                   FortPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bInIsDBNO                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::OnDBNOStateChanged_Event(class AFortPawn* FortPawn, bool bInIsDBNO)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnDBNOStateChanged_Event");

	Params::APlayerPawn_Athena_C_OnDBNOStateChanged_Event_Params Parms;

	Parms.FortPawn = FortPawn;
	Parms.bInIsDBNO = bInIsDBNO;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredOrExitedWaterVolume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEntered                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     WaterSurfaceLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::OnEnteredOrExitedWaterVolume(bool bEntered, const struct FVector& WaterSurfaceLocation)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "OnEnteredOrExitedWaterVolume");

	Params::APlayerPawn_Athena_C_OnEnteredOrExitedWaterVolume_Params Parms;

	Parms.bEntered = bEntered;
	Parms.WaterSurfaceLocation = WaterSurfaceLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.PlayWaterEnterExitAudioAndFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     WaterSurfaceLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::PlayWaterEnterExitAudioAndFX(const struct FVector& WaterSurfaceLocation)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "PlayWaterEnterExitAudioAndFX");

	Params::APlayerPawn_Athena_C_PlayWaterEnterExitAudioAndFX_Params Parms;

	Parms.WaterSurfaceLocation = WaterSurfaceLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ExecuteUbergraph_PlayerPawn_Athena
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters_8                             (ConstParm, ContainsInstancedReference)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters_7                             (ConstParm, ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobilePlatform_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_CustomEvent_Pawn_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateAthena*        K2Node_DynamicCast_AsFort_Game_State_Athena                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSafeZonePhase_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_InSafeZonePhase                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSpawnGameplayCue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewWhichSafeZoneTag                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_GameplayTag                                   (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSpawnGameplayCue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_SafeZonePhase                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_WaterSurfaceLocation                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_First_Left                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_1                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_1                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_First_Right                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters_6                             (ConstParm, ContainsInstancedReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_WaterSurfaceLocation_1                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Duration                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue_1                 (ContainsInstancedReference)
// class APlayerController*           CallFunc_GetLocalViewingPlayerController_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType_9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters_9                             (ConstParm, ContainsInstancedReference)
// class AFortPlayerControllerSpectating*K2Node_DynamicCast_AsFort_Player_Controller_Spectating           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakGameplayCueParameters_NormalizedMagnitude          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakGameplayCueParameters_RawMagnitude                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleCallFunc_BreakGameplayCueParameters_EffectContext                ()
// struct FGameplayTag                CallFunc_BreakGameplayCueParameters_MatchedTagName               (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_BreakGameplayCueParameters_OriginalTag                  (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_BreakGameplayCueParameters_AggregatedSourceTags         ()
// struct FGameplayTagContainer       CallFunc_BreakGameplayCueParameters_AggregatedTargetTags         ()
// struct FVector                     CallFunc_BreakGameplayCueParameters_Location                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakGameplayCueParameters_Normal                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakGameplayCueParameters_Instigator                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakGameplayCueParameters_EffectCauser                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_BreakGameplayCueParameters_SourceObject                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakGameplayCueParameters_PhysicalMaterial             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakGameplayCueParameters_GameplayEffectLevel          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakGameplayCueParameters_AbilityLevel                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_BreakGameplayCueParameters_TargetAttachComponent        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalViewingPlayerController_ReturnValue_1           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerSpectating*K2Node_DynamicCast_AsFort_Player_Controller_Spectating_1         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType_10                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters_10                            (ConstParm, ContainsInstancedReference)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters_5                             (ConstParm, ContainsInstancedReference)
// double                             K2Node_CustomEvent_SecondsTillTeleport                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_DestLocation_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_CustomEvent_DestRotation_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Instant_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_DestLocation                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_CustomEvent_DestRotation                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Instant                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Gravity                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_TeleportTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_BoolToDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue_2                 (ContainsInstancedReference)
// FInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalViewingPlayerController_ReturnValue_2           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerSpectating*K2Node_DynamicCast_AsFort_Player_Controller_Spectating_2         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags_1                                        (ConstParm)
// struct FVector                     K2Node_Event_Momentum_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo_1                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                   K2Node_Event_InstigatedBy_1                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser_1                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext_1                                     ()
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters_4                             (ConstParm, ContainsInstancedReference)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType_11                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters_11                            (ConstParm, ContainsInstancedReference)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue_3                 (ContainsInstancedReference)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalViewingPlayerController_ReturnValue_3           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerSpectating*K2Node_DynamicCast_AsFort_Player_Controller_Spectating_3         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                CallFunc_GetVehicleUInterface_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetDriver_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetVehicleActorPtrConst_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortCharacterVehicle*       K2Node_DynamicCast_AsFort_Character_Vehicle                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWaterBodyActor*         K2Node_Event_WaterBody_1                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsFirstBody                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWaterBodyActor*         K2Node_Event_WaterBody                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsLastBody                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMovementMode           K2Node_Event_PrevMovementMode                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMovementMode           K2Node_Event_NewMovementMode                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              K2Node_Event_PrevCustomMode                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              K2Node_Event_NewCustomMode                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSurfaceSwimming_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNumericCVar_OutValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetNumericCVar_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInVehicle_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInAthena_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLastWaterSurfaceInfo_OutWaterSurfacePosition         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLastWaterSurfaceInfo_OutWaterSurfaceNormal           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateAthena*        K2Node_DynamicCast_AsFort_Game_State_Athena_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStormCN_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              ()
// float                              CallFunc_GetWaterImmersionDepth_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMovementComp_Character* K2Node_DynamicCast_AsFort_Movement_Comp_Character                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWaterBodyActor*         CallFunc_GetCurrentWaterBody_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMovingOnGround_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetWaterSurfaceLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue_4                 (ContainsInstancedReference)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isHidden_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_1                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1              (NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Divide_VectorFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_LastTetherPawn_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_LastTetherPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_2                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetTetherPawn_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetOwnedGameplayTags_TagContainer                       ()
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData_1                            ()
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    K2Node_CustomEvent_PlayerAimRotation                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_NewController                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue_5                 (ContainsInstancedReference)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_1                               (NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue_6                 (ContainsInstancedReference)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue_7                 (ContainsInstancedReference)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue_8                 (ContainsInstancedReference)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters_3                             (ConstParm, ContainsInstancedReference)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters_2                             (ConstParm, ContainsInstancedReference)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters_1                             (ConstParm, ContainsInstancedReference)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters                               (ConstParm, ContainsInstancedReference)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_2                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2              (NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_3              (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* K2Node_CustomEvent_AbilitySystemComponent                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_CustomEvent_AffectedPawn                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPostProcessComponent*       CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue_9                 (ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDelegateHandleController   CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out    ()
// class UFortAsyncAction_CurrentPlaylistReady*CallFunc_PlaylistDataReadyAsync_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateAthena*        Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue_10                (ContainsInstancedReference)
// class UFortPlaylist*               Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Temp_struct_Variable_1                                           ()
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAnimInputEvent*         CallFunc_CreateAnimInputEvent_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortAnimInputEvent*         CallFunc_CreateAnimInputEvent_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortAnimInputEvent*         CallFunc_CreateAnimInputEvent_ReturnValue_2                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortAnimInputEvent*         CallFunc_CreateAnimInputEvent_ReturnValue_3                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_Source_1                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPawnHighlight              K2Node_Event_Highlight                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_OnlyUpdateIfCurrent                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_Source                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_Event_MyComp                                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Other                                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_Event_OtherComp                                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSelfMoved                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_HitLocation_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_HitNormal                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_NormalImpulse                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_Hit                                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPawnIsInLocalSquad_IsInLocalSquad                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DamageDealt                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bCriticalHit                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bFatalHit                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShieldHit                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_HitActor                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_HitTags                                             ()
// struct FVector                     K2Node_Event_HitLocation                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isHidden                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateAthena*        K2Node_CustomEvent_GameState                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlaylist*               K2Node_CustomEvent_Playlist                                      (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_CustomEvent_PlaylistContextTags                           (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_CustomEvent_Pawn                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCustomCharacterPart*        K2Node_CustomEvent_Part                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      K2Node_CustomEvent_MeshPart                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EFortCustomPartType     K2Node_CustomEvent_PartType                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USceneComponent*>     CallFunc_GetChildrenComponents_Children                          (ReferenceParm, ContainsInstancedReference)
// class USceneComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ComponentHasTag_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_2                               (NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags                                          (ConstParm)
// struct FVector                     K2Node_Event_Momentum                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext                                       ()
// class AFortPawn*                   K2Node_CustomEvent_FortPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bInIsDBNO                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetActorTeam_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Temp_struct_Variable_2                                           ()
// enum class EFortTeamAffiliation    CallFunc_GetTeamAffiliationToLocalPlayer_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bEntered                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_WaterSurfaceLocation_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInVehicle_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_WaterSurfaceLocation                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_1                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RetriggerableDelay_Duration_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ActivateInvincibleVisuals_Duration_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RetriggerableDelay_Duration_ImplicitCast_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ActivateInvincibleVisuals_Duration_ImplicitCast_1       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_Level_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_InvokeWaterJumpSplash_SplashScale_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CallDelegate_Damage_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::ExecuteUbergraph_PlayerPawn_Athena(int32 EntryPoint, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType_8, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters_8, bool CallFunc_IsMobilePlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType_7, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters_7, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class AFortPlayerPawn* K2Node_CustomEvent_Pawn_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double Temp_real_Variable, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetSafeZonePhase_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, int32 K2Node_CustomEvent_InSafeZonePhase, bool K2Node_CustomEvent_bSpawnGameplayCue_1, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, bool Temp_bool_Variable, int32 K2Node_CustomEvent_NewWhichSafeZoneTag, const struct FGameplayTag& K2Node_CustomEvent_GameplayTag, bool K2Node_CustomEvent_bSpawnGameplayCue, int32 K2Node_Event_SafeZonePhase, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FVector& K2Node_Event_WaterSurfaceLocation, bool K2Node_Event_First_Left, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, bool K2Node_Event_First_Right, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType_6, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters_6, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FVector& K2Node_Event_WaterSurfaceLocation_1, double K2Node_CustomEvent_Duration, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_1, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType_9, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters_9, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_BreakGameplayCueParameters_NormalizedMagnitude, float CallFunc_BreakGameplayCueParameters_RawMagnitude, const struct FGameplayEffectContextHandle& CallFunc_BreakGameplayCueParameters_EffectContext, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_MatchedTagName, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_OriginalTag, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedSourceTags, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedTargetTags, const struct FVector& CallFunc_BreakGameplayCueParameters_Location, const struct FVector& CallFunc_BreakGameplayCueParameters_Normal, class AActor* CallFunc_BreakGameplayCueParameters_Instigator, class AActor* CallFunc_BreakGameplayCueParameters_EffectCauser, class UObject* CallFunc_BreakGameplayCueParameters_SourceObject, class UPhysicalMaterial* CallFunc_BreakGameplayCueParameters_PhysicalMaterial, int32 CallFunc_BreakGameplayCueParameters_GameplayEffectLevel, int32 CallFunc_BreakGameplayCueParameters_AbilityLevel, class USceneComponent* CallFunc_BreakGameplayCueParameters_TargetAttachComponent, bool CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy, double Temp_real_Variable_1, bool CallFunc_IsLocallyControlled_ReturnValue_2, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue_1, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating_1, bool K2Node_DynamicCast_bSuccess_2, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType_10, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters_10, bool CallFunc_IsLocallyControlled_ReturnValue_3, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType_5, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters_5, double K2Node_CustomEvent_SecondsTillTeleport, const struct FVector& K2Node_CustomEvent_DestLocation_1, const struct FRotator& K2Node_CustomEvent_DestRotation_1, bool K2Node_CustomEvent_Instant_1, const struct FVector& K2Node_CustomEvent_DestLocation, const struct FRotator& K2Node_CustomEvent_DestRotation, bool K2Node_CustomEvent_Instant, double K2Node_CustomEvent_Gravity, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double K2Node_Select_Default, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, bool CallFunc_K2_TeleportTo_ReturnValue, double CallFunc_Conv_BoolToDouble_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_2, FInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsLocallyControlled_ReturnValue_4, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue_2, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating_2, bool K2Node_DynamicCast_bSuccess_3, float K2Node_Event_Damage_1, const struct FGameplayTagContainer& K2Node_Event_DamageTags_1, const struct FVector& K2Node_Event_Momentum_1, const struct FHitResult& K2Node_Event_HitInfo_1, class AFortPawn* K2Node_Event_InstigatedBy_1, class AActor* K2Node_Event_DamageCauser_1, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext_1, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType_4, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters_4, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType_11, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters_11, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating_3, bool K2Node_DynamicCast_bSuccess_4, FInterfaceProperty_ CallFunc_GetVehicleUInterface_ReturnValue, class AFortPlayerPawn* CallFunc_GetDriver_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class AActor* CallFunc_GetVehicleActorPtrConst_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortCharacterVehicle* K2Node_DynamicCast_AsFort_Character_Vehicle, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsLocallyControlled_ReturnValue_5, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AFortWaterBodyActor* K2Node_Event_WaterBody_1, bool K2Node_Event_bIsFirstBody, int32 CallFunc_Add_IntInt_ReturnValue, class AFortWaterBodyActor* K2Node_Event_WaterBody, bool K2Node_Event_bIsLastBody, enum class EMovementMode K2Node_Event_PrevMovementMode, enum class EMovementMode K2Node_Event_NewMovementMode, uint8 K2Node_Event_PrevCustomMode, uint8 K2Node_Event_NewCustomMode, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsSurfaceSwimming_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, float CallFunc_GetNumericCVar_OutValue, bool CallFunc_GetNumericCVar_ReturnValue, bool CallFunc_IsInVehicle_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_2, bool CallFunc_IsInAthena_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool Temp_bool_IsClosed_Variable, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_OutWaterSurfacePosition, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_OutWaterSurfaceNormal, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena_1, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsStormCN_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, float CallFunc_GetWaterImmersionDepth_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, class UFortMovementComp_Character* K2Node_DynamicCast_AsFort_Movement_Comp_Character, bool K2Node_DynamicCast_bSuccess_7, class AFortWaterBodyActor* CallFunc_GetCurrentWaterBody_ReturnValue, bool CallFunc_IsMovingOnGround_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, const struct FVector& CallFunc_GetWaterSurfaceLocation_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_4, bool CallFunc_IsLocallyControlled_ReturnValue_6, bool K2Node_CustomEvent_isHidden_1, bool CallFunc_IsValid_ReturnValue_3, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class APawn* K2Node_Event_LastTetherPawn_1, class APawn* K2Node_Event_LastTetherPawn, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class APawn* CallFunc_GetTetherPawn_ReturnValue, FInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess_8, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData_1, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FRotator& K2Node_CustomEvent_PlayerAimRotation, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class AController* K2Node_Event_NewController, float CallFunc_GetValueAtLevel_ReturnValue_1, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_5, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_6, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_7, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_8, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType_3, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters_3, bool Temp_bool_Has_Been_Initd_Variable_1, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType_2, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters_2, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType_1, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters_1, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, bool Temp_bool_IsClosed_Variable_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, const struct FTransform& Temp_struct_Variable, class UFortAbilitySystemComponent* K2Node_CustomEvent_AbilitySystemComponent, class AFortPlayerPawn* K2Node_CustomEvent_AffectedPawn, class UPostProcessComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue_2, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FDelegateHandleController& CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out, class UFortAsyncAction_CurrentPlaylistReady* CallFunc_PlaylistDataReadyAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, class AFortGameStateAthena* Temp_object_Variable, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_10, class UFortPlaylist* Temp_object_Variable_1, const struct FGameplayTagContainer& Temp_struct_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, class UFortAnimInputEvent* CallFunc_CreateAnimInputEvent_ReturnValue, class UFortAnimInputEvent* CallFunc_CreateAnimInputEvent_ReturnValue_1, class UFortAnimInputEvent* CallFunc_CreateAnimInputEvent_ReturnValue_2, class UFortAnimInputEvent* CallFunc_CreateAnimInputEvent_ReturnValue_3, class UObject* K2Node_Event_Source_1, const struct FPawnHighlight& K2Node_Event_Highlight, bool K2Node_Event_OnlyUpdateIfCurrent, class UObject* K2Node_Event_Source, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation_1, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool CallFunc_IsDedicatedServer_ReturnValue_3, bool Temp_bool_IsClosed_Variable_2, bool CallFunc_GetPawnIsInLocalSquad_IsInLocalSquad, float K2Node_Event_DamageDealt, bool K2Node_Event_bCriticalHit, bool K2Node_Event_bFatalHit, bool K2Node_Event_bShieldHit, class AActor* K2Node_Event_HitActor, const struct FGameplayTagContainer& K2Node_Event_HitTags, const struct FVector& K2Node_Event_HitLocation, bool K2Node_CustomEvent_isHidden, class AFortGameStateAthena* K2Node_CustomEvent_GameState, class UFortPlaylist* K2Node_CustomEvent_Playlist, const struct FGameplayTagContainer& K2Node_CustomEvent_PlaylistContextTags, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AFortPlayerPawn* K2Node_CustomEvent_Pawn, class UCustomCharacterPart* K2Node_CustomEvent_Part, class USkeletalMeshComponent* K2Node_CustomEvent_MeshPart, enum class EFortCustomPartType K2Node_CustomEvent_PartType, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_6, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_ComponentHasTag_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_2, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, class AFortPawn* K2Node_CustomEvent_FortPawn, bool K2Node_CustomEvent_bInIsDBNO, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, uint8 CallFunc_GetActorTeam_ReturnValue, const struct FGameplayTagContainer& Temp_struct_Variable_2, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliationToLocalPlayer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, bool K2Node_CustomEvent_bEntered, const struct FVector& K2Node_CustomEvent_WaterSurfaceLocation_1, bool CallFunc_IsInVehicle_ReturnValue_1, const struct FVector& K2Node_CustomEvent_WaterSurfaceLocation, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_RetriggerableDelay_Duration_ImplicitCast, double CallFunc_ActivateInvincibleVisuals_Duration_ImplicitCast, float CallFunc_RetriggerableDelay_Duration_ImplicitCast_1, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast, double CallFunc_ActivateInvincibleVisuals_Duration_ImplicitCast_1, float CallFunc_GetValueAtLevel_Level_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast, float CallFunc_InvokeWaterJumpSplash_SplashScale_ImplicitCast, double K2Node_CallDelegate_Damage_ImplicitCast)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "ExecuteUbergraph_PlayerPawn_Athena");

	Params::APlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_GameplayCueEvent_EventType_8 = K2Node_GameplayCueEvent_EventType_8;
	Parms.K2Node_GameplayCueEvent_Parameters_8 = K2Node_GameplayCueEvent_Parameters_8;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_1 = CallFunc_IsLocallyControlled_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_GameplayCueEvent_EventType_7 = K2Node_GameplayCueEvent_EventType_7;
	Parms.K2Node_GameplayCueEvent_Parameters_7 = K2Node_GameplayCueEvent_Parameters_7;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_IsMobilePlatform_ReturnValue_1 = CallFunc_IsMobilePlatform_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_CustomEvent_Pawn_1 = K2Node_CustomEvent_Pawn_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Athena = K2Node_DynamicCast_AsFort_Game_State_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSafeZonePhase_ReturnValue = CallFunc_GetSafeZonePhase_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.K2Node_CustomEvent_InSafeZonePhase = K2Node_CustomEvent_InSafeZonePhase;
	Parms.K2Node_CustomEvent_bSpawnGameplayCue_1 = K2Node_CustomEvent_bSpawnGameplayCue_1;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CustomEvent_NewWhichSafeZoneTag = K2Node_CustomEvent_NewWhichSafeZoneTag;
	Parms.K2Node_CustomEvent_GameplayTag = K2Node_CustomEvent_GameplayTag;
	Parms.K2Node_CustomEvent_bSpawnGameplayCue = K2Node_CustomEvent_bSpawnGameplayCue;
	Parms.K2Node_Event_SafeZonePhase = K2Node_Event_SafeZonePhase;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_Event_WaterSurfaceLocation = K2Node_Event_WaterSurfaceLocation;
	Parms.K2Node_Event_First_Left = K2Node_Event_First_Left;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_1 = CallFunc_SpawnSoundAttached_ReturnValue_1;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_1 = CallFunc_SpawnEmitterAttached_ReturnValue_1;
	Parms.K2Node_Event_First_Right = K2Node_Event_First_Right;
	Parms.K2Node_GameplayCueEvent_EventType_6 = K2Node_GameplayCueEvent_EventType_6;
	Parms.K2Node_GameplayCueEvent_Parameters_6 = K2Node_GameplayCueEvent_Parameters_6;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_Event_WaterSurfaceLocation_1 = K2Node_Event_WaterSurfaceLocation_1;
	Parms.K2Node_CustomEvent_Duration = K2Node_CustomEvent_Duration;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue_1 = CallFunc_MakeGameplayCueParameters_ReturnValue_1;
	Parms.CallFunc_GetLocalViewingPlayerController_ReturnValue = CallFunc_GetLocalViewingPlayerController_ReturnValue;
	Parms.K2Node_GameplayCueEvent_EventType_9 = K2Node_GameplayCueEvent_EventType_9;
	Parms.K2Node_GameplayCueEvent_Parameters_9 = K2Node_GameplayCueEvent_Parameters_9;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Spectating = K2Node_DynamicCast_AsFort_Player_Controller_Spectating;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BreakGameplayCueParameters_NormalizedMagnitude = CallFunc_BreakGameplayCueParameters_NormalizedMagnitude;
	Parms.CallFunc_BreakGameplayCueParameters_RawMagnitude = CallFunc_BreakGameplayCueParameters_RawMagnitude;
	Parms.CallFunc_BreakGameplayCueParameters_EffectContext = CallFunc_BreakGameplayCueParameters_EffectContext;
	Parms.CallFunc_BreakGameplayCueParameters_MatchedTagName = CallFunc_BreakGameplayCueParameters_MatchedTagName;
	Parms.CallFunc_BreakGameplayCueParameters_OriginalTag = CallFunc_BreakGameplayCueParameters_OriginalTag;
	Parms.CallFunc_BreakGameplayCueParameters_AggregatedSourceTags = CallFunc_BreakGameplayCueParameters_AggregatedSourceTags;
	Parms.CallFunc_BreakGameplayCueParameters_AggregatedTargetTags = CallFunc_BreakGameplayCueParameters_AggregatedTargetTags;
	Parms.CallFunc_BreakGameplayCueParameters_Location = CallFunc_BreakGameplayCueParameters_Location;
	Parms.CallFunc_BreakGameplayCueParameters_Normal = CallFunc_BreakGameplayCueParameters_Normal;
	Parms.CallFunc_BreakGameplayCueParameters_Instigator = CallFunc_BreakGameplayCueParameters_Instigator;
	Parms.CallFunc_BreakGameplayCueParameters_EffectCauser = CallFunc_BreakGameplayCueParameters_EffectCauser;
	Parms.CallFunc_BreakGameplayCueParameters_SourceObject = CallFunc_BreakGameplayCueParameters_SourceObject;
	Parms.CallFunc_BreakGameplayCueParameters_PhysicalMaterial = CallFunc_BreakGameplayCueParameters_PhysicalMaterial;
	Parms.CallFunc_BreakGameplayCueParameters_GameplayEffectLevel = CallFunc_BreakGameplayCueParameters_GameplayEffectLevel;
	Parms.CallFunc_BreakGameplayCueParameters_AbilityLevel = CallFunc_BreakGameplayCueParameters_AbilityLevel;
	Parms.CallFunc_BreakGameplayCueParameters_TargetAttachComponent = CallFunc_BreakGameplayCueParameters_TargetAttachComponent;
	Parms.CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy = CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_2 = CallFunc_IsLocallyControlled_ReturnValue_2;
	Parms.CallFunc_GetLocalViewingPlayerController_ReturnValue_1 = CallFunc_GetLocalViewingPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Spectating_1 = K2Node_DynamicCast_AsFort_Player_Controller_Spectating_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_GameplayCueEvent_EventType_10 = K2Node_GameplayCueEvent_EventType_10;
	Parms.K2Node_GameplayCueEvent_Parameters_10 = K2Node_GameplayCueEvent_Parameters_10;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_3 = CallFunc_IsLocallyControlled_ReturnValue_3;
	Parms.K2Node_GameplayCueEvent_EventType_5 = K2Node_GameplayCueEvent_EventType_5;
	Parms.K2Node_GameplayCueEvent_Parameters_5 = K2Node_GameplayCueEvent_Parameters_5;
	Parms.K2Node_CustomEvent_SecondsTillTeleport = K2Node_CustomEvent_SecondsTillTeleport;
	Parms.K2Node_CustomEvent_DestLocation_1 = K2Node_CustomEvent_DestLocation_1;
	Parms.K2Node_CustomEvent_DestRotation_1 = K2Node_CustomEvent_DestRotation_1;
	Parms.K2Node_CustomEvent_Instant_1 = K2Node_CustomEvent_Instant_1;
	Parms.K2Node_CustomEvent_DestLocation = K2Node_CustomEvent_DestLocation;
	Parms.K2Node_CustomEvent_DestRotation = K2Node_CustomEvent_DestRotation;
	Parms.K2Node_CustomEvent_Instant = K2Node_CustomEvent_Instant;
	Parms.K2Node_CustomEvent_Gravity = K2Node_CustomEvent_Gravity;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_1 = CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_K2_TeleportTo_ReturnValue = CallFunc_K2_TeleportTo_ReturnValue;
	Parms.CallFunc_Conv_BoolToDouble_ReturnValue = CallFunc_Conv_BoolToDouble_ReturnValue;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue_2 = CallFunc_MakeGameplayCueParameters_ReturnValue_2;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue = CallFunc_HasAllMatchingGameplayTags_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_4 = CallFunc_IsLocallyControlled_ReturnValue_4;
	Parms.CallFunc_GetLocalViewingPlayerController_ReturnValue_2 = CallFunc_GetLocalViewingPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Spectating_2 = K2Node_DynamicCast_AsFort_Player_Controller_Spectating_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_Event_Damage_1 = K2Node_Event_Damage_1;
	Parms.K2Node_Event_DamageTags_1 = K2Node_Event_DamageTags_1;
	Parms.K2Node_Event_Momentum_1 = K2Node_Event_Momentum_1;
	Parms.K2Node_Event_HitInfo_1 = K2Node_Event_HitInfo_1;
	Parms.K2Node_Event_InstigatedBy_1 = K2Node_Event_InstigatedBy_1;
	Parms.K2Node_Event_DamageCauser_1 = K2Node_Event_DamageCauser_1;
	Parms.K2Node_Event_EffectContext_1 = K2Node_Event_EffectContext_1;
	Parms.K2Node_GameplayCueEvent_EventType_4 = K2Node_GameplayCueEvent_EventType_4;
	Parms.K2Node_GameplayCueEvent_Parameters_4 = K2Node_GameplayCueEvent_Parameters_4;
	Parms.K2Node_GameplayCueEvent_EventType_11 = K2Node_GameplayCueEvent_EventType_11;
	Parms.K2Node_GameplayCueEvent_Parameters_11 = K2Node_GameplayCueEvent_Parameters_11;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue_3 = CallFunc_MakeGameplayCueParameters_ReturnValue_3;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_2 = CallFunc_K2_GetComponentLocation_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetLocalViewingPlayerController_ReturnValue_3 = CallFunc_GetLocalViewingPlayerController_ReturnValue_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Spectating_3 = K2Node_DynamicCast_AsFort_Player_Controller_Spectating_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetVehicleUInterface_ReturnValue = CallFunc_GetVehicleUInterface_ReturnValue;
	Parms.CallFunc_GetDriver_ReturnValue = CallFunc_GetDriver_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_GetVehicleActorPtrConst_ReturnValue = CallFunc_GetVehicleActorPtrConst_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Character_Vehicle = K2Node_DynamicCast_AsFort_Character_Vehicle;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_5 = CallFunc_IsLocallyControlled_ReturnValue_5;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_Event_WaterBody_1 = K2Node_Event_WaterBody_1;
	Parms.K2Node_Event_bIsFirstBody = K2Node_Event_bIsFirstBody;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_WaterBody = K2Node_Event_WaterBody;
	Parms.K2Node_Event_bIsLastBody = K2Node_Event_bIsLastBody;
	Parms.K2Node_Event_PrevMovementMode = K2Node_Event_PrevMovementMode;
	Parms.K2Node_Event_NewMovementMode = K2Node_Event_NewMovementMode;
	Parms.K2Node_Event_PrevCustomMode = K2Node_Event_PrevCustomMode;
	Parms.K2Node_Event_NewCustomMode = K2Node_Event_NewCustomMode;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsSurfaceSwimming_ReturnValue = CallFunc_IsSurfaceSwimming_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetNumericCVar_OutValue = CallFunc_GetNumericCVar_OutValue;
	Parms.CallFunc_GetNumericCVar_ReturnValue = CallFunc_GetNumericCVar_ReturnValue;
	Parms.CallFunc_IsInVehicle_ReturnValue = CallFunc_IsInVehicle_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_2 = CallFunc_EqualEqual_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_IsInAthena_ReturnValue = CallFunc_IsInAthena_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetGameState_ReturnValue_1 = CallFunc_GetGameState_ReturnValue_1;
	Parms.CallFunc_GetLastWaterSurfaceInfo_OutWaterSurfacePosition = CallFunc_GetLastWaterSurfaceInfo_OutWaterSurfacePosition;
	Parms.CallFunc_GetLastWaterSurfaceInfo_OutWaterSurfaceNormal = CallFunc_GetLastWaterSurfaceInfo_OutWaterSurfaceNormal;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Athena_1 = K2Node_DynamicCast_AsFort_Game_State_Athena_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_IsStormCN_ReturnValue = CallFunc_IsStormCN_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_GetWaterImmersionDepth_ReturnValue = CallFunc_GetWaterImmersionDepth_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Movement_Comp_Character = K2Node_DynamicCast_AsFort_Movement_Comp_Character;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_GetCurrentWaterBody_ReturnValue = CallFunc_GetCurrentWaterBody_ReturnValue;
	Parms.CallFunc_IsMovingOnGround_ReturnValue = CallFunc_IsMovingOnGround_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_GetWaterSurfaceLocation_ReturnValue = CallFunc_GetWaterSurfaceLocation_ReturnValue;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue_4 = CallFunc_MakeGameplayCueParameters_ReturnValue_4;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_6 = CallFunc_IsLocallyControlled_ReturnValue_6;
	Parms.K2Node_CustomEvent_isHidden_1 = K2Node_CustomEvent_isHidden_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_1 = CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1 = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Divide_VectorFloat_ReturnValue = CallFunc_Divide_VectorFloat_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_Event_LastTetherPawn_1 = K2Node_Event_LastTetherPawn_1;
	Parms.K2Node_Event_LastTetherPawn = K2Node_Event_LastTetherPawn;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue = CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_2 = CallFunc_SpawnSoundAttached_ReturnValue_2;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetTetherPawn_ReturnValue = CallFunc_GetTetherPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_GetOwnedGameplayTags_TagContainer = CallFunc_GetOwnedGameplayTags_TagContainer;
	Parms.K2Node_MakeStruct_GameplayEventData_1 = K2Node_MakeStruct_GameplayEventData_1;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.K2Node_CustomEvent_PlayerAimRotation = K2Node_CustomEvent_PlayerAimRotation;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.K2Node_Event_NewController = K2Node_Event_NewController;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_1 = CallFunc_GetValueAtLevel_ReturnValue_1;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue_5 = CallFunc_MakeGameplayCueParameters_ReturnValue_5;
	Parms.CallFunc_K2_SetTimer_ReturnValue_1 = CallFunc_K2_SetTimer_ReturnValue_1;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue_6 = CallFunc_MakeGameplayCueParameters_ReturnValue_6;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue_7 = CallFunc_MakeGameplayCueParameters_ReturnValue_7;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue_8 = CallFunc_MakeGameplayCueParameters_ReturnValue_8;
	Parms.K2Node_GameplayCueEvent_EventType_3 = K2Node_GameplayCueEvent_EventType_3;
	Parms.K2Node_GameplayCueEvent_Parameters_3 = K2Node_GameplayCueEvent_Parameters_3;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.K2Node_GameplayCueEvent_EventType_2 = K2Node_GameplayCueEvent_EventType_2;
	Parms.K2Node_GameplayCueEvent_Parameters_2 = K2Node_GameplayCueEvent_Parameters_2;
	Parms.K2Node_GameplayCueEvent_EventType_1 = K2Node_GameplayCueEvent_EventType_1;
	Parms.K2Node_GameplayCueEvent_Parameters_1 = K2Node_GameplayCueEvent_Parameters_1;
	Parms.K2Node_GameplayCueEvent_EventType = K2Node_GameplayCueEvent_EventType;
	Parms.K2Node_GameplayCueEvent_Parameters = K2Node_GameplayCueEvent_Parameters;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_2 = CallFunc_GetAbilitySystemComponent_ReturnValue_2;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2 = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_3 = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CustomEvent_AbilitySystemComponent = K2Node_CustomEvent_AbilitySystemComponent;
	Parms.K2Node_CustomEvent_AffectedPawn = K2Node_CustomEvent_AffectedPawn;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_2 = CallFunc_IsDedicatedServer_ReturnValue_2;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue_9 = CallFunc_MakeGameplayCueParameters_ReturnValue_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out = CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out;
	Parms.CallFunc_PlaylistDataReadyAsync_ReturnValue = CallFunc_PlaylistDataReadyAsync_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue_10 = CallFunc_MakeGameplayCueParameters_ReturnValue_10;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.CallFunc_CreateAnimInputEvent_ReturnValue = CallFunc_CreateAnimInputEvent_ReturnValue;
	Parms.CallFunc_CreateAnimInputEvent_ReturnValue_1 = CallFunc_CreateAnimInputEvent_ReturnValue_1;
	Parms.CallFunc_CreateAnimInputEvent_ReturnValue_2 = CallFunc_CreateAnimInputEvent_ReturnValue_2;
	Parms.CallFunc_CreateAnimInputEvent_ReturnValue_3 = CallFunc_CreateAnimInputEvent_ReturnValue_3;
	Parms.K2Node_Event_Source_1 = K2Node_Event_Source_1;
	Parms.K2Node_Event_Highlight = K2Node_Event_Highlight;
	Parms.K2Node_Event_OnlyUpdateIfCurrent = K2Node_Event_OnlyUpdateIfCurrent;
	Parms.K2Node_Event_Source = K2Node_Event_Source;
	Parms.K2Node_Event_MyComp = K2Node_Event_MyComp;
	Parms.K2Node_Event_Other = K2Node_Event_Other;
	Parms.K2Node_Event_OtherComp = K2Node_Event_OtherComp;
	Parms.K2Node_Event_bSelfMoved = K2Node_Event_bSelfMoved;
	Parms.K2Node_Event_HitLocation_1 = K2Node_Event_HitLocation_1;
	Parms.K2Node_Event_HitNormal = K2Node_Event_HitNormal;
	Parms.K2Node_Event_NormalImpulse = K2Node_Event_NormalImpulse;
	Parms.K2Node_Event_Hit = K2Node_Event_Hit;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_3 = CallFunc_IsDedicatedServer_ReturnValue_3;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.CallFunc_GetPawnIsInLocalSquad_IsInLocalSquad = CallFunc_GetPawnIsInLocalSquad_IsInLocalSquad;
	Parms.K2Node_Event_DamageDealt = K2Node_Event_DamageDealt;
	Parms.K2Node_Event_bCriticalHit = K2Node_Event_bCriticalHit;
	Parms.K2Node_Event_bFatalHit = K2Node_Event_bFatalHit;
	Parms.K2Node_Event_bShieldHit = K2Node_Event_bShieldHit;
	Parms.K2Node_Event_HitActor = K2Node_Event_HitActor;
	Parms.K2Node_Event_HitTags = K2Node_Event_HitTags;
	Parms.K2Node_Event_HitLocation = K2Node_Event_HitLocation;
	Parms.K2Node_CustomEvent_isHidden = K2Node_CustomEvent_isHidden;
	Parms.K2Node_CustomEvent_GameState = K2Node_CustomEvent_GameState;
	Parms.K2Node_CustomEvent_Playlist = K2Node_CustomEvent_Playlist;
	Parms.K2Node_CustomEvent_PlaylistContextTags = K2Node_CustomEvent_PlaylistContextTags;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_Pawn = K2Node_CustomEvent_Pawn;
	Parms.K2Node_CustomEvent_Part = K2Node_CustomEvent_Part;
	Parms.K2Node_CustomEvent_MeshPart = K2Node_CustomEvent_MeshPart;
	Parms.K2Node_CustomEvent_PartType = K2Node_CustomEvent_PartType;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetChildrenComponents_Children = CallFunc_GetChildrenComponents_Children;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_ComponentHasTag_ReturnValue = CallFunc_ComponentHasTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue_2 = CallFunc_K2_SetTimer_ReturnValue_2;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageTags = K2Node_Event_DamageTags;
	Parms.K2Node_Event_Momentum = K2Node_Event_Momentum;
	Parms.K2Node_Event_HitInfo = K2Node_Event_HitInfo;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_Event_EffectContext = K2Node_Event_EffectContext;
	Parms.K2Node_CustomEvent_FortPawn = K2Node_CustomEvent_FortPawn;
	Parms.K2Node_CustomEvent_bInIsDBNO = K2Node_CustomEvent_bInIsDBNO;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetActorTeam_ReturnValue = CallFunc_GetActorTeam_ReturnValue;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_GetTeamAffiliationToLocalPlayer_ReturnValue = CallFunc_GetTeamAffiliationToLocalPlayer_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.K2Node_CustomEvent_bEntered = K2Node_CustomEvent_bEntered;
	Parms.K2Node_CustomEvent_WaterSurfaceLocation_1 = K2Node_CustomEvent_WaterSurfaceLocation_1;
	Parms.CallFunc_IsInVehicle_ReturnValue_1 = CallFunc_IsInVehicle_ReturnValue_1;
	Parms.K2Node_CustomEvent_WaterSurfaceLocation = K2Node_CustomEvent_WaterSurfaceLocation;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_1 = CallFunc_SpawnEmitterAtLocation_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_RetriggerableDelay_Duration_ImplicitCast = CallFunc_RetriggerableDelay_Duration_ImplicitCast;
	Parms.CallFunc_ActivateInvincibleVisuals_Duration_ImplicitCast = CallFunc_ActivateInvincibleVisuals_Duration_ImplicitCast;
	Parms.CallFunc_RetriggerableDelay_Duration_ImplicitCast_1 = CallFunc_RetriggerableDelay_Duration_ImplicitCast_1;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;
	Parms.CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast = CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast;
	Parms.CallFunc_ActivateInvincibleVisuals_Duration_ImplicitCast_1 = CallFunc_ActivateInvincibleVisuals_Duration_ImplicitCast_1;
	Parms.CallFunc_GetValueAtLevel_Level_ImplicitCast = CallFunc_GetValueAtLevel_Level_ImplicitCast;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;
	Parms.CallFunc_InvokeWaterJumpSplash_SplashScale_ImplicitCast = CallFunc_InvokeWaterJumpSplash_SplashScale_ImplicitCast;
	Parms.K2Node_CallDelegate_Damage_ImplicitCast = K2Node_CallDelegate_Damage_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.CCPM_isHiddenInProp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHidden                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_C::CCPM_isHiddenInProp__DelegateSignature(bool IsHidden)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "CCPM_isHiddenInProp__DelegateSignature");

	Params::APlayerPawn_Athena_C_CCPM_isHiddenInProp__DelegateSignature_Params Parms;

	Parms.IsHidden = IsHidden;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeft2__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::SwingLeft2__DelegateSignature()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "SwingLeft2__DelegateSignature");

	Params::APlayerPawn_Athena_C_SwingLeft2__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRight2__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::SwingRight2__DelegateSignature()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "SwingRight2__DelegateSignature");

	Params::APlayerPawn_Athena_C_SwingRight2__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeftEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::SwingLeftEnd__DelegateSignature()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "SwingLeftEnd__DelegateSignature");

	Params::APlayerPawn_Athena_C_SwingLeftEnd__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRightEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::SwingRightEnd__DelegateSignature()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "SwingRightEnd__DelegateSignature");

	Params::APlayerPawn_Athena_C_SwingRightEnd__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.onFadeToWhiteTeleported__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::OnFadeToWhiteTeleported__DelegateSignature()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "onFadeToWhiteTeleported__DelegateSignature");

	Params::APlayerPawn_Athena_C_OnFadeToWhiteTeleported__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeft__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::SwingLeft__DelegateSignature()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "SwingLeft__DelegateSignature");

	Params::APlayerPawn_Athena_C_SwingLeft__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::SwingRight__DelegateSignature()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "SwingRight__DelegateSignature");

	Params::APlayerPawn_Athena_C_SwingRight__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ResOut__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::ResOut__DelegateSignature()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "ResOut__DelegateSignature");

	Params::APlayerPawn_Athena_C_ResOut__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ResIn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_C::ResIn__DelegateSignature()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_C", "ResIn__DelegateSignature");

	Params::APlayerPawn_Athena_C_ResIn__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
