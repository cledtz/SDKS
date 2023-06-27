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


// Function PhysicalRimlight.PhysicalRimlight_C.Set Rimlight Color and Intensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDayPhase           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                CallFunc_GetContextualTimeOfDayManager_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UDirectionalLightComponent*  CallFunc_GetDirectionalLightComponent_ReturnValue                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLightColor_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDayPhase           CallFunc_GetCurrentDayPhase_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetIntensity_NewIntensity_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetIntensity_NewIntensity_ImplicitCast_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APhysicalRimlight_C::Set_Rimlight_Color_and_Intensity(enum class EFortDayPhase Temp_byte_Variable, FInterfaceProperty_ CallFunc_GetContextualTimeOfDayManager_ReturnValue, class UDirectionalLightComponent* CallFunc_GetDirectionalLightComponent_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, const struct FLinearColor& CallFunc_GetLightColor_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EFortDayPhase CallFunc_GetCurrentDayPhase_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double K2Node_Select_Default, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, float CallFunc_SetIntensity_NewIntensity_ImplicitCast, float CallFunc_SetIntensity_NewIntensity_ImplicitCast_1)
{
	static auto Func = Class->GetFunction("PhysicalRimlight_C", "Set Rimlight Color and Intensity");

	Params::APhysicalRimlight_C_Set_Rimlight_Color_and_Intensity_Params Parms;

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetContextualTimeOfDayManager_ReturnValue = CallFunc_GetContextualTimeOfDayManager_ReturnValue;
	Parms.CallFunc_GetDirectionalLightComponent_ReturnValue = CallFunc_GetDirectionalLightComponent_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_GetLightColor_ReturnValue = CallFunc_GetLightColor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentDayPhase_ReturnValue = CallFunc_GetCurrentDayPhase_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_SetIntensity_NewIntensity_ImplicitCast = CallFunc_SetIntensity_NewIntensity_ImplicitCast;
	Parms.CallFunc_SetIntensity_NewIntensity_ImplicitCast_1 = CallFunc_SetIntensity_NewIntensity_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhysicalRimlight.PhysicalRimlight_C.RimlightAttemptValidation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APhysicalRimlight_C::RimlightAttemptValidation(bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static auto Func = Class->GetFunction("PhysicalRimlight_C", "RimlightAttemptValidation");

	Params::APhysicalRimlight_C_RimlightAttemptValidation_Params Parms;

	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhysicalRimlight.PhysicalRimlight_C.PhysicalRimlight_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CVarName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_GetConsoleVariableFloatValue_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Rimlight_CVARBoost_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APhysicalRimlight_C::PhysicalRimlight_AutoGenFunc(const class FString& CVarName, float CallFunc_GetConsoleVariableFloatValue_ReturnValue, double K2Node_VariableSet_Rimlight_CVARBoost_ImplicitCast)
{
	static auto Func = Class->GetFunction("PhysicalRimlight_C", "PhysicalRimlight_AutoGenFunc");

	Params::APhysicalRimlight_C_PhysicalRimlight_AutoGenFunc_Params Parms;

	Parms.CVarName = CVarName;
	Parms.CallFunc_GetConsoleVariableFloatValue_ReturnValue = CallFunc_GetConsoleVariableFloatValue_ReturnValue;
	Parms.K2Node_VariableSet_Rimlight_CVARBoost_ImplicitCast = K2Node_VariableSet_Rimlight_CVARBoost_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhysicalRimlight.PhysicalRimlight_C.Update Rimlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APhysicalRimlight_C::Update_Rimlight()
{
	static auto Func = Class->GetFunction("PhysicalRimlight_C", "Update Rimlight");

	Params::APhysicalRimlight_C_Update_Rimlight_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PhysicalRimlight.PhysicalRimlight_C.ValidateRimlight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetCameraRotation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_TransformLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetConsoleVariableFloatValue_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APhysicalRimlight_C::ValidateRimlight(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, bool CallFunc_IsLocallyControlled_ReturnValue, float CallFunc_GetConsoleVariableFloatValue_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static auto Func = Class->GetFunction("PhysicalRimlight_C", "ValidateRimlight");

	Params::APhysicalRimlight_C_ValidateRimlight_Params Parms;

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_GetCameraRotation_ReturnValue = CallFunc_GetCameraRotation_ReturnValue;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_TransformLocation_ReturnValue = CallFunc_TransformLocation_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetConsoleVariableFloatValue_ReturnValue = CallFunc_GetConsoleVariableFloatValue_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhysicalRimlight.PhysicalRimlight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APhysicalRimlight_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("PhysicalRimlight_C", "ReceiveBeginPlay");

	Params::APhysicalRimlight_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PhysicalRimlight.PhysicalRimlight_C.InitRim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APhysicalRimlight_C::InitRim()
{
	static auto Func = Class->GetFunction("PhysicalRimlight_C", "InitRim");

	Params::APhysicalRimlight_C_InitRim_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PhysicalRimlight.PhysicalRimlight_C.Day Phase 
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDayPhase           CurrentDayPhase                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDayPhase           PreviousDayPhase                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bAtCreation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APhysicalRimlight_C::Day_Phase_(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation)
{
	static auto Func = Class->GetFunction("PhysicalRimlight_C", "Day Phase ");

	Params::APhysicalRimlight_C_Day_Phase__Params Parms;

	Parms.CurrentDayPhase = CurrentDayPhase;
	Parms.PreviousDayPhase = PreviousDayPhase;
	Parms.bAtCreation = bAtCreation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhysicalRimlight.PhysicalRimlight_C.ExecuteUbergraph_PhysicalRimlight
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDataDrivenCVarEngineSubsystem*CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                CallFunc_GetContextualTimeOfDayManager_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class APlayerPawn_Athena_C*        K2Node_DynamicCast_AsPlayer_Pawn_Athena                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDayPhase           K2Node_CustomEvent_CurrentDayPhase                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDayPhase           K2Node_CustomEvent_PreviousDayPhase                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bAtCreation                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APhysicalRimlight_C::ExecuteUbergraph_PhysicalRimlight(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UDataDrivenCVarEngineSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, FInterfaceProperty_ CallFunc_GetContextualTimeOfDayManager_ReturnValue, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, enum class EFortDayPhase K2Node_CustomEvent_CurrentDayPhase, enum class EFortDayPhase K2Node_CustomEvent_PreviousDayPhase, bool K2Node_CustomEvent_bAtCreation)
{
	static auto Func = Class->GetFunction("PhysicalRimlight_C", "ExecuteUbergraph_PhysicalRimlight");

	Params::APhysicalRimlight_C_ExecuteUbergraph_PhysicalRimlight_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_GetContextualTimeOfDayManager_ReturnValue = CallFunc_GetContextualTimeOfDayManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Athena = K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_CurrentDayPhase = K2Node_CustomEvent_CurrentDayPhase;
	Parms.K2Node_CustomEvent_PreviousDayPhase = K2Node_CustomEvent_PreviousDayPhase;
	Parms.K2Node_CustomEvent_bAtCreation = K2Node_CustomEvent_bAtCreation;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
