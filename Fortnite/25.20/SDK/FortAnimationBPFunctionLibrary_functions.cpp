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


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Vehicle Dynamics Scaler Function
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomCharacterPartAnimInstance*CharacterPartAnimInstance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Debug                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             InVehicleHeadScaleAlpha                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             InVehicleHeadSimAlpha                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             InVehicleSkirtScaleAlpha                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             InVehicleSkirtSimAlpha                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             InVehicleSkirtSimAlphaLocal                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             InVehicleSkirtScaleAlphaLocal                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             InVehicleHeadSimAlphaLocal                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             InVehicleHeadScaleAlphaLocal                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_13                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::Vehicle_Dynamics_Scaler_Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, bool Debug, class UObject* __WorldContext, double* InVehicleHeadScaleAlpha, double* InVehicleHeadSimAlpha, double* InVehicleSkirtScaleAlpha, double* InVehicleSkirtSimAlpha, double InVehicleSkirtSimAlphaLocal, double InVehicleSkirtScaleAlphaLocal, double InVehicleHeadSimAlphaLocal, double InVehicleHeadScaleAlphaLocal, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_13, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "Vehicle Dynamics Scaler Function");

	Params::UFortAnimationBPFunctionLibrary_C_Vehicle_Dynamics_Scaler_Function_Params Parms;

	Parms.CharacterPartAnimInstance = CharacterPartAnimInstance;
	Parms.Debug = Debug;
	Parms.__WorldContext = __WorldContext;
	Parms.InVehicleSkirtSimAlphaLocal = InVehicleSkirtSimAlphaLocal;
	Parms.InVehicleSkirtScaleAlphaLocal = InVehicleSkirtScaleAlphaLocal;
	Parms.InVehicleHeadSimAlphaLocal = InVehicleHeadSimAlphaLocal;
	Parms.InVehicleHeadScaleAlphaLocal = InVehicleHeadScaleAlphaLocal;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.CallFunc_BooleanOR_ReturnValue_7 = CallFunc_BooleanOR_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_8 = CallFunc_BooleanOR_ReturnValue_8;
	Parms.CallFunc_BooleanOR_ReturnValue_9 = CallFunc_BooleanOR_ReturnValue_9;
	Parms.CallFunc_BooleanOR_ReturnValue_10 = CallFunc_BooleanOR_ReturnValue_10;
	Parms.CallFunc_BooleanOR_ReturnValue_11 = CallFunc_BooleanOR_ReturnValue_11;
	Parms.CallFunc_BooleanOR_ReturnValue_12 = CallFunc_BooleanOR_ReturnValue_12;
	Parms.CallFunc_BooleanOR_ReturnValue_13 = CallFunc_BooleanOR_ReturnValue_13;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InVehicleHeadScaleAlpha != nullptr)
		*InVehicleHeadScaleAlpha = Parms.InVehicleHeadScaleAlpha;

	if (InVehicleHeadSimAlpha != nullptr)
		*InVehicleHeadSimAlpha = Parms.InVehicleHeadSimAlpha;

	if (InVehicleSkirtScaleAlpha != nullptr)
		*InVehicleSkirtScaleAlpha = Parms.InVehicleSkirtScaleAlpha;

	if (InVehicleSkirtSimAlpha != nullptr)
		*InVehicleSkirtSimAlpha = Parms.InVehicleSkirtSimAlpha;

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Cloth Controller Function Nativization Wrapper
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomCharacterPartAnimInstance*CharacterPartAnimInstance                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      ClothingAssetName                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
// struct FClothControllerClothParameterMapCloth_Paramaters                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FClothCoreSettings          Cloth_Core_Settings                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FVector                     ClothUpAxis                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OnGround_Moving_Speed_Limit                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OnGround_Moving_AngularVel_Max                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OnGround_Moving_FictitiousVel_Max                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LinVelScale_FwdBwd_Clamp                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LinVelScale_UpDwn_Clamp                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GameTimeInSeconds                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothControllerWindParameterMapWindGustsParams                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FWindGustSettings           WindGustLocalSettings                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CharacterStateOut                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothParameters            Cloth_Settings_Out                                               (Parm, OutParm, NoDestructor)
// struct FWindGustSettings           WindGustLocalSettings_Out                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     GustStrength___WindVelocityOut                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LinearVelVector_DELETE_LATER                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Character_State                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustParameters         Wind_Params                                                      (Edit, BlueprintVisible, NoDestructor)
// struct FClothParameters            Cloth_Params                                                     (Edit, BlueprintVisible, NoDestructor)
// struct FClothControllerPropertiesMapCallFunc_ClothControllerFindCharacterProperties_OutPropertiesMap ()
// class FName                        CallFunc_ClothControllerStaticFindCharacterState_OutCharacterStateName(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothParameters            CallFunc_ClothControllerFindParameters_OutClothSettings          (NoDestructor)
// struct FWindGustParameters         CallFunc_ClothControllerFindParameters_OutWindSettings           (NoDestructor)
// struct FVector                     CallFunc_ClothControllerDynamicParameterAdjustment_OutLinearVelocityScale(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothParameters            CallFunc_ClothControllerDynamicParameterAdjustment_OutClothSettings(NoDestructor)
// struct FVector                     CallFunc_ClothControllerWindGustControl_OutWindGustVector        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustSettings           CallFunc_ClothControllerWindGustControl_OutWindGustLocalSettings (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FClothParameters            CallFunc_ClothControllerWriteToSimulation_OutWorldSpaceClothSettings(NoDestructor)
// struct FVector                     CallFunc_ClothControllerWriteToSimulation_OutWorldSpaceWindVelocity(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClothControllerFindCharacterProperties_HighRotationRateThreshold_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClothControllerDynamicParameterAdjustment_OnGroundMovingAngularVelMax_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClothControllerDynamicParameterAdjustment_OnGroundMovingFictitiousVelMax_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClothControllerDynamicParameterAdjustment_LinVelScaleFwdBwdClamp_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClothControllerDynamicParameterAdjustment_LinVelScaleUpDwnClamp_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::Cloth_Controller_Function_Nativization_Wrapper(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, class FString& ClothingAssetName, struct FClothControllerClothParameterMap& Cloth_Paramaters, struct FClothCoreSettings& Cloth_Core_Settings, const struct FVector& ClothUpAxis, double OnGround_Moving_Speed_Limit, double OnGround_Moving_AngularVel_Max, double OnGround_Moving_FictitiousVel_Max, double LinVelScale_FwdBwd_Clamp, double LinVelScale_UpDwn_Clamp, float DeltaTime, float GameTimeInSeconds, struct FClothControllerWindParameterMap& WindGustsParams, struct FWindGustSettings& WindGustLocalSettings, class UObject* __WorldContext, class FName* CharacterStateOut, struct FClothParameters* Cloth_Settings_Out, struct FWindGustSettings* WindGustLocalSettings_Out, struct FVector* GustStrength___WindVelocityOut, struct FVector* LinearVelVector_DELETE_LATER, class FName Character_State, const struct FWindGustParameters& Wind_Params, const struct FClothParameters& Cloth_Params, const struct FClothControllerPropertiesMap& CallFunc_ClothControllerFindCharacterProperties_OutPropertiesMap, class FName CallFunc_ClothControllerStaticFindCharacterState_OutCharacterStateName, const struct FClothParameters& CallFunc_ClothControllerFindParameters_OutClothSettings, const struct FWindGustParameters& CallFunc_ClothControllerFindParameters_OutWindSettings, const struct FVector& CallFunc_ClothControllerDynamicParameterAdjustment_OutLinearVelocityScale, const struct FClothParameters& CallFunc_ClothControllerDynamicParameterAdjustment_OutClothSettings, const struct FVector& CallFunc_ClothControllerWindGustControl_OutWindGustVector, const struct FWindGustSettings& CallFunc_ClothControllerWindGustControl_OutWindGustLocalSettings, const struct FClothParameters& CallFunc_ClothControllerWriteToSimulation_OutWorldSpaceClothSettings, const struct FVector& CallFunc_ClothControllerWriteToSimulation_OutWorldSpaceWindVelocity, float CallFunc_ClothControllerFindCharacterProperties_HighRotationRateThreshold_ImplicitCast, float CallFunc_ClothControllerDynamicParameterAdjustment_OnGroundMovingAngularVelMax_ImplicitCast, float CallFunc_ClothControllerDynamicParameterAdjustment_OnGroundMovingFictitiousVelMax_ImplicitCast, float CallFunc_ClothControllerDynamicParameterAdjustment_LinVelScaleFwdBwdClamp_ImplicitCast, float CallFunc_ClothControllerDynamicParameterAdjustment_LinVelScaleUpDwnClamp_ImplicitCast)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "Cloth Controller Function Nativization Wrapper");

	Params::UFortAnimationBPFunctionLibrary_C_Cloth_Controller_Function_Nativization_Wrapper_Params Parms;

	Parms.CharacterPartAnimInstance = CharacterPartAnimInstance;
	Parms.ClothingAssetName = ClothingAssetName;
	Parms.Cloth_Paramaters = Cloth_Paramaters;
	Parms.Cloth_Core_Settings = Cloth_Core_Settings;
	Parms.ClothUpAxis = ClothUpAxis;
	Parms.OnGround_Moving_Speed_Limit = OnGround_Moving_Speed_Limit;
	Parms.OnGround_Moving_AngularVel_Max = OnGround_Moving_AngularVel_Max;
	Parms.OnGround_Moving_FictitiousVel_Max = OnGround_Moving_FictitiousVel_Max;
	Parms.LinVelScale_FwdBwd_Clamp = LinVelScale_FwdBwd_Clamp;
	Parms.LinVelScale_UpDwn_Clamp = LinVelScale_UpDwn_Clamp;
	Parms.DeltaTime = DeltaTime;
	Parms.GameTimeInSeconds = GameTimeInSeconds;
	Parms.WindGustsParams = WindGustsParams;
	Parms.WindGustLocalSettings = WindGustLocalSettings;
	Parms.__WorldContext = __WorldContext;
	Parms.Character_State = Character_State;
	Parms.Wind_Params = Wind_Params;
	Parms.Cloth_Params = Cloth_Params;
	Parms.CallFunc_ClothControllerFindCharacterProperties_OutPropertiesMap = CallFunc_ClothControllerFindCharacterProperties_OutPropertiesMap;
	Parms.CallFunc_ClothControllerStaticFindCharacterState_OutCharacterStateName = CallFunc_ClothControllerStaticFindCharacterState_OutCharacterStateName;
	Parms.CallFunc_ClothControllerFindParameters_OutClothSettings = CallFunc_ClothControllerFindParameters_OutClothSettings;
	Parms.CallFunc_ClothControllerFindParameters_OutWindSettings = CallFunc_ClothControllerFindParameters_OutWindSettings;
	Parms.CallFunc_ClothControllerDynamicParameterAdjustment_OutLinearVelocityScale = CallFunc_ClothControllerDynamicParameterAdjustment_OutLinearVelocityScale;
	Parms.CallFunc_ClothControllerDynamicParameterAdjustment_OutClothSettings = CallFunc_ClothControllerDynamicParameterAdjustment_OutClothSettings;
	Parms.CallFunc_ClothControllerWindGustControl_OutWindGustVector = CallFunc_ClothControllerWindGustControl_OutWindGustVector;
	Parms.CallFunc_ClothControllerWindGustControl_OutWindGustLocalSettings = CallFunc_ClothControllerWindGustControl_OutWindGustLocalSettings;
	Parms.CallFunc_ClothControllerWriteToSimulation_OutWorldSpaceClothSettings = CallFunc_ClothControllerWriteToSimulation_OutWorldSpaceClothSettings;
	Parms.CallFunc_ClothControllerWriteToSimulation_OutWorldSpaceWindVelocity = CallFunc_ClothControllerWriteToSimulation_OutWorldSpaceWindVelocity;
	Parms.CallFunc_ClothControllerFindCharacterProperties_HighRotationRateThreshold_ImplicitCast = CallFunc_ClothControllerFindCharacterProperties_HighRotationRateThreshold_ImplicitCast;
	Parms.CallFunc_ClothControllerDynamicParameterAdjustment_OnGroundMovingAngularVelMax_ImplicitCast = CallFunc_ClothControllerDynamicParameterAdjustment_OnGroundMovingAngularVelMax_ImplicitCast;
	Parms.CallFunc_ClothControllerDynamicParameterAdjustment_OnGroundMovingFictitiousVelMax_ImplicitCast = CallFunc_ClothControllerDynamicParameterAdjustment_OnGroundMovingFictitiousVelMax_ImplicitCast;
	Parms.CallFunc_ClothControllerDynamicParameterAdjustment_LinVelScaleFwdBwdClamp_ImplicitCast = CallFunc_ClothControllerDynamicParameterAdjustment_LinVelScaleFwdBwdClamp_ImplicitCast;
	Parms.CallFunc_ClothControllerDynamicParameterAdjustment_LinVelScaleUpDwnClamp_ImplicitCast = CallFunc_ClothControllerDynamicParameterAdjustment_LinVelScaleUpDwnClamp_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CharacterStateOut != nullptr)
		*CharacterStateOut = Parms.CharacterStateOut;

	if (Cloth_Settings_Out != nullptr)
		*Cloth_Settings_Out = Parms.Cloth_Settings_Out;

	if (WindGustLocalSettings_Out != nullptr)
		*WindGustLocalSettings_Out = Parms.WindGustLocalSettings_Out;

	if (GustStrength___WindVelocityOut != nullptr)
		*GustStrength___WindVelocityOut = Parms.GustStrength___WindVelocityOut;

	if (LinearVelVector_DELETE_LATER != nullptr)
		*LinearVelVector_DELETE_LATER = Parms.LinearVelVector_DELETE_LATER;

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Cloth Controller Convert To Nativized Parameters
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClothParamsStruct          ClothParametersStruct                                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustParamsStruct       WindParametersStruct                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothCoreSettingStruct     Cloth_Core_Settings                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct Wind_Gust_Settings                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Character_State_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FClothParameters            Cloth_Parameters_Nativized                                       (Parm, OutParm, NoDestructor)
// struct FWindGustParameters         Wind_Parameters_Nativized                                        (Parm, OutParm, NoDestructor)
// struct FClothCoreSettings          ClothCoreSettings                                                (Parm, OutParm, NoDestructor)
// struct FWindGustSettings           Wind_Settings_Nativized                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWindGustParameters         Nativized_Wind_Parameters                                        (Edit, BlueprintVisible, NoDestructor)
// struct FClothParameters            Nativized_Cloth_Parameters                                       (Edit, BlueprintVisible, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustSettings           K2Node_MakeStruct_WindGustSettings                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FClothCoreSettings          K2Node_MakeStruct_ClothCoreSettings                              (NoDestructor)
// struct FWindGustParameters         CallFunc_ConvertToNativizedWindParameters_WindGustParameters     (NoDestructor)
// struct FClothParameters            CallFunc_ConvertToNativizedClothParameters_ClothParameters       (NoDestructor)
// struct FClothParameters            CallFunc_ConvertToNativizedClothParameters_ClothParameters_1     (NoDestructor)
// struct FClothParameters            CallFunc_ConvertToNativizedClothParameters_ClothParameters_2     (NoDestructor)
// struct FClothParameters            CallFunc_ConvertToNativizedClothParameters_ClothParameters_3     (NoDestructor)
// struct FClothParameters            CallFunc_ConvertToNativizedClothParameters_ClothParameters_4     (NoDestructor)
// struct FClothParameters            CallFunc_ConvertToNativizedClothParameters_ClothParameters_5     (NoDestructor)
// struct FClothParameters            CallFunc_ConvertToNativizedClothParameters_ClothParameters_6     (NoDestructor)
// struct FClothParameters            CallFunc_ConvertToNativizedClothParameters_ClothParameters_7     (NoDestructor)
// struct FClothParameters            CallFunc_ConvertToNativizedClothParameters_ClothParameters_8     (NoDestructor)
// struct FClothParameters            CallFunc_ConvertToNativizedClothParameters_ClothParameters_9     (NoDestructor)
// struct FClothParameters            CallFunc_ConvertToNativizedClothParameters_ClothParameters_10    (NoDestructor)
// struct FClothParameters            CallFunc_ConvertToNativizedClothParameters_ClothParameters_11    (NoDestructor)
// struct FClothParameters            CallFunc_ConvertToNativizedClothParameters_ClothParameters_12    (NoDestructor)
// struct FClothParameters            CallFunc_ConvertToNativizedClothParameters_ClothParameters_13    (NoDestructor)
// struct FClothParameters            CallFunc_ConvertToNativizedClothParameters_ClothParameters_14    (NoDestructor)
// struct FClothParameters            CallFunc_ConvertToNativizedClothParameters_ClothParameters_15    (NoDestructor)
// struct FClothParameters            CallFunc_ConvertToNativizedClothParameters_ClothParameters_16    (NoDestructor)
// struct FClothParameters            CallFunc_ConvertToNativizedClothParameters_ClothParameters_17    (NoDestructor)
// struct FClothParameters            CallFunc_ConvertToNativizedClothParameters_ClothParameters_18    (NoDestructor)
// struct FClothParameters            CallFunc_ConvertToNativizedClothParameters_ClothParameters_19    (NoDestructor)
// struct FWindGustParameters         CallFunc_ConvertToNativizedWindParameters_WindGustParameters_1   (NoDestructor)
// struct FWindGustParameters         CallFunc_ConvertToNativizedWindParameters_WindGustParameters_2   (NoDestructor)
// struct FWindGustParameters         CallFunc_ConvertToNativizedWindParameters_WindGustParameters_3   (NoDestructor)
// struct FWindGustParameters         CallFunc_ConvertToNativizedWindParameters_WindGustParameters_4   (NoDestructor)
// struct FWindGustParameters         CallFunc_ConvertToNativizedWindParameters_WindGustParameters_5   (NoDestructor)
// struct FWindGustParameters         CallFunc_ConvertToNativizedWindParameters_WindGustParameters_6   (NoDestructor)
// struct FWindGustParameters         CallFunc_ConvertToNativizedWindParameters_WindGustParameters_7   (NoDestructor)
// struct FWindGustParameters         CallFunc_ConvertToNativizedWindParameters_WindGustParameters_8   (NoDestructor)
// struct FWindGustParameters         CallFunc_ConvertToNativizedWindParameters_WindGustParameters_9   (NoDestructor)
// struct FWindGustParameters         CallFunc_ConvertToNativizedWindParameters_WindGustParameters_10  (NoDestructor)
// struct FWindGustParameters         CallFunc_ConvertToNativizedWindParameters_WindGustParameters_11  (NoDestructor)
// struct FWindGustParameters         CallFunc_ConvertToNativizedWindParameters_WindGustParameters_12  (NoDestructor)
// struct FWindGustParameters         CallFunc_ConvertToNativizedWindParameters_WindGustParameters_13  (NoDestructor)
// struct FWindGustParameters         CallFunc_ConvertToNativizedWindParameters_WindGustParameters_14  (NoDestructor)
// struct FWindGustParameters         CallFunc_ConvertToNativizedWindParameters_WindGustParameters_15  (NoDestructor)
// struct FWindGustParameters         CallFunc_ConvertToNativizedWindParameters_WindGustParameters_16  (NoDestructor)
// struct FWindGustParameters         CallFunc_ConvertToNativizedWindParameters_WindGustParameters_17  (NoDestructor)
// struct FWindGustParameters         CallFunc_ConvertToNativizedWindParameters_WindGustParameters_18  (NoDestructor)
// struct FWindGustParameters         CallFunc_ConvertToNativizedWindParameters_WindGustParameters_19  (NoDestructor)

void UFortAnimationBPFunctionLibrary_C::Cloth_Controller_Convert_To_Nativized_Parameters(const struct FClothParamsStruct& ClothParametersStruct, const struct FWindGustParamsStruct& WindParametersStruct, const struct FClothCoreSettingStruct& Cloth_Core_Settings, const struct FWindGustLocalSettingStruct& Wind_Gust_Settings, class FName Character_State_Name, class UObject* __WorldContext, struct FClothParameters* Cloth_Parameters_Nativized, struct FWindGustParameters* Wind_Parameters_Nativized, struct FClothCoreSettings* ClothCoreSettings, struct FWindGustSettings* Wind_Settings_Nativized, const struct FWindGustParameters& Nativized_Wind_Parameters, const struct FClothParameters& Nativized_Cloth_Parameters, bool K2Node_SwitchName_CmpSuccess, const struct FWindGustSettings& K2Node_MakeStruct_WindGustSettings, const struct FClothCoreSettings& K2Node_MakeStruct_ClothCoreSettings, const struct FWindGustParameters& CallFunc_ConvertToNativizedWindParameters_WindGustParameters, const struct FClothParameters& CallFunc_ConvertToNativizedClothParameters_ClothParameters, const struct FClothParameters& CallFunc_ConvertToNativizedClothParameters_ClothParameters_1, const struct FClothParameters& CallFunc_ConvertToNativizedClothParameters_ClothParameters_2, const struct FClothParameters& CallFunc_ConvertToNativizedClothParameters_ClothParameters_3, const struct FClothParameters& CallFunc_ConvertToNativizedClothParameters_ClothParameters_4, const struct FClothParameters& CallFunc_ConvertToNativizedClothParameters_ClothParameters_5, const struct FClothParameters& CallFunc_ConvertToNativizedClothParameters_ClothParameters_6, const struct FClothParameters& CallFunc_ConvertToNativizedClothParameters_ClothParameters_7, const struct FClothParameters& CallFunc_ConvertToNativizedClothParameters_ClothParameters_8, const struct FClothParameters& CallFunc_ConvertToNativizedClothParameters_ClothParameters_9, const struct FClothParameters& CallFunc_ConvertToNativizedClothParameters_ClothParameters_10, const struct FClothParameters& CallFunc_ConvertToNativizedClothParameters_ClothParameters_11, const struct FClothParameters& CallFunc_ConvertToNativizedClothParameters_ClothParameters_12, const struct FClothParameters& CallFunc_ConvertToNativizedClothParameters_ClothParameters_13, const struct FClothParameters& CallFunc_ConvertToNativizedClothParameters_ClothParameters_14, const struct FClothParameters& CallFunc_ConvertToNativizedClothParameters_ClothParameters_15, const struct FClothParameters& CallFunc_ConvertToNativizedClothParameters_ClothParameters_16, const struct FClothParameters& CallFunc_ConvertToNativizedClothParameters_ClothParameters_17, const struct FClothParameters& CallFunc_ConvertToNativizedClothParameters_ClothParameters_18, const struct FClothParameters& CallFunc_ConvertToNativizedClothParameters_ClothParameters_19, const struct FWindGustParameters& CallFunc_ConvertToNativizedWindParameters_WindGustParameters_1, const struct FWindGustParameters& CallFunc_ConvertToNativizedWindParameters_WindGustParameters_2, const struct FWindGustParameters& CallFunc_ConvertToNativizedWindParameters_WindGustParameters_3, const struct FWindGustParameters& CallFunc_ConvertToNativizedWindParameters_WindGustParameters_4, const struct FWindGustParameters& CallFunc_ConvertToNativizedWindParameters_WindGustParameters_5, const struct FWindGustParameters& CallFunc_ConvertToNativizedWindParameters_WindGustParameters_6, const struct FWindGustParameters& CallFunc_ConvertToNativizedWindParameters_WindGustParameters_7, const struct FWindGustParameters& CallFunc_ConvertToNativizedWindParameters_WindGustParameters_8, const struct FWindGustParameters& CallFunc_ConvertToNativizedWindParameters_WindGustParameters_9, const struct FWindGustParameters& CallFunc_ConvertToNativizedWindParameters_WindGustParameters_10, const struct FWindGustParameters& CallFunc_ConvertToNativizedWindParameters_WindGustParameters_11, const struct FWindGustParameters& CallFunc_ConvertToNativizedWindParameters_WindGustParameters_12, const struct FWindGustParameters& CallFunc_ConvertToNativizedWindParameters_WindGustParameters_13, const struct FWindGustParameters& CallFunc_ConvertToNativizedWindParameters_WindGustParameters_14, const struct FWindGustParameters& CallFunc_ConvertToNativizedWindParameters_WindGustParameters_15, const struct FWindGustParameters& CallFunc_ConvertToNativizedWindParameters_WindGustParameters_16, const struct FWindGustParameters& CallFunc_ConvertToNativizedWindParameters_WindGustParameters_17, const struct FWindGustParameters& CallFunc_ConvertToNativizedWindParameters_WindGustParameters_18, const struct FWindGustParameters& CallFunc_ConvertToNativizedWindParameters_WindGustParameters_19)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "Cloth Controller Convert To Nativized Parameters");

	Params::UFortAnimationBPFunctionLibrary_C_Cloth_Controller_Convert_To_Nativized_Parameters_Params Parms;

	Parms.ClothParametersStruct = ClothParametersStruct;
	Parms.WindParametersStruct = WindParametersStruct;
	Parms.Cloth_Core_Settings = Cloth_Core_Settings;
	Parms.Wind_Gust_Settings = Wind_Gust_Settings;
	Parms.Character_State_Name = Character_State_Name;
	Parms.__WorldContext = __WorldContext;
	Parms.Nativized_Wind_Parameters = Nativized_Wind_Parameters;
	Parms.Nativized_Cloth_Parameters = Nativized_Cloth_Parameters;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.K2Node_MakeStruct_WindGustSettings = K2Node_MakeStruct_WindGustSettings;
	Parms.K2Node_MakeStruct_ClothCoreSettings = K2Node_MakeStruct_ClothCoreSettings;
	Parms.CallFunc_ConvertToNativizedWindParameters_WindGustParameters = CallFunc_ConvertToNativizedWindParameters_WindGustParameters;
	Parms.CallFunc_ConvertToNativizedClothParameters_ClothParameters = CallFunc_ConvertToNativizedClothParameters_ClothParameters;
	Parms.CallFunc_ConvertToNativizedClothParameters_ClothParameters_1 = CallFunc_ConvertToNativizedClothParameters_ClothParameters_1;
	Parms.CallFunc_ConvertToNativizedClothParameters_ClothParameters_2 = CallFunc_ConvertToNativizedClothParameters_ClothParameters_2;
	Parms.CallFunc_ConvertToNativizedClothParameters_ClothParameters_3 = CallFunc_ConvertToNativizedClothParameters_ClothParameters_3;
	Parms.CallFunc_ConvertToNativizedClothParameters_ClothParameters_4 = CallFunc_ConvertToNativizedClothParameters_ClothParameters_4;
	Parms.CallFunc_ConvertToNativizedClothParameters_ClothParameters_5 = CallFunc_ConvertToNativizedClothParameters_ClothParameters_5;
	Parms.CallFunc_ConvertToNativizedClothParameters_ClothParameters_6 = CallFunc_ConvertToNativizedClothParameters_ClothParameters_6;
	Parms.CallFunc_ConvertToNativizedClothParameters_ClothParameters_7 = CallFunc_ConvertToNativizedClothParameters_ClothParameters_7;
	Parms.CallFunc_ConvertToNativizedClothParameters_ClothParameters_8 = CallFunc_ConvertToNativizedClothParameters_ClothParameters_8;
	Parms.CallFunc_ConvertToNativizedClothParameters_ClothParameters_9 = CallFunc_ConvertToNativizedClothParameters_ClothParameters_9;
	Parms.CallFunc_ConvertToNativizedClothParameters_ClothParameters_10 = CallFunc_ConvertToNativizedClothParameters_ClothParameters_10;
	Parms.CallFunc_ConvertToNativizedClothParameters_ClothParameters_11 = CallFunc_ConvertToNativizedClothParameters_ClothParameters_11;
	Parms.CallFunc_ConvertToNativizedClothParameters_ClothParameters_12 = CallFunc_ConvertToNativizedClothParameters_ClothParameters_12;
	Parms.CallFunc_ConvertToNativizedClothParameters_ClothParameters_13 = CallFunc_ConvertToNativizedClothParameters_ClothParameters_13;
	Parms.CallFunc_ConvertToNativizedClothParameters_ClothParameters_14 = CallFunc_ConvertToNativizedClothParameters_ClothParameters_14;
	Parms.CallFunc_ConvertToNativizedClothParameters_ClothParameters_15 = CallFunc_ConvertToNativizedClothParameters_ClothParameters_15;
	Parms.CallFunc_ConvertToNativizedClothParameters_ClothParameters_16 = CallFunc_ConvertToNativizedClothParameters_ClothParameters_16;
	Parms.CallFunc_ConvertToNativizedClothParameters_ClothParameters_17 = CallFunc_ConvertToNativizedClothParameters_ClothParameters_17;
	Parms.CallFunc_ConvertToNativizedClothParameters_ClothParameters_18 = CallFunc_ConvertToNativizedClothParameters_ClothParameters_18;
	Parms.CallFunc_ConvertToNativizedClothParameters_ClothParameters_19 = CallFunc_ConvertToNativizedClothParameters_ClothParameters_19;
	Parms.CallFunc_ConvertToNativizedWindParameters_WindGustParameters_1 = CallFunc_ConvertToNativizedWindParameters_WindGustParameters_1;
	Parms.CallFunc_ConvertToNativizedWindParameters_WindGustParameters_2 = CallFunc_ConvertToNativizedWindParameters_WindGustParameters_2;
	Parms.CallFunc_ConvertToNativizedWindParameters_WindGustParameters_3 = CallFunc_ConvertToNativizedWindParameters_WindGustParameters_3;
	Parms.CallFunc_ConvertToNativizedWindParameters_WindGustParameters_4 = CallFunc_ConvertToNativizedWindParameters_WindGustParameters_4;
	Parms.CallFunc_ConvertToNativizedWindParameters_WindGustParameters_5 = CallFunc_ConvertToNativizedWindParameters_WindGustParameters_5;
	Parms.CallFunc_ConvertToNativizedWindParameters_WindGustParameters_6 = CallFunc_ConvertToNativizedWindParameters_WindGustParameters_6;
	Parms.CallFunc_ConvertToNativizedWindParameters_WindGustParameters_7 = CallFunc_ConvertToNativizedWindParameters_WindGustParameters_7;
	Parms.CallFunc_ConvertToNativizedWindParameters_WindGustParameters_8 = CallFunc_ConvertToNativizedWindParameters_WindGustParameters_8;
	Parms.CallFunc_ConvertToNativizedWindParameters_WindGustParameters_9 = CallFunc_ConvertToNativizedWindParameters_WindGustParameters_9;
	Parms.CallFunc_ConvertToNativizedWindParameters_WindGustParameters_10 = CallFunc_ConvertToNativizedWindParameters_WindGustParameters_10;
	Parms.CallFunc_ConvertToNativizedWindParameters_WindGustParameters_11 = CallFunc_ConvertToNativizedWindParameters_WindGustParameters_11;
	Parms.CallFunc_ConvertToNativizedWindParameters_WindGustParameters_12 = CallFunc_ConvertToNativizedWindParameters_WindGustParameters_12;
	Parms.CallFunc_ConvertToNativizedWindParameters_WindGustParameters_13 = CallFunc_ConvertToNativizedWindParameters_WindGustParameters_13;
	Parms.CallFunc_ConvertToNativizedWindParameters_WindGustParameters_14 = CallFunc_ConvertToNativizedWindParameters_WindGustParameters_14;
	Parms.CallFunc_ConvertToNativizedWindParameters_WindGustParameters_15 = CallFunc_ConvertToNativizedWindParameters_WindGustParameters_15;
	Parms.CallFunc_ConvertToNativizedWindParameters_WindGustParameters_16 = CallFunc_ConvertToNativizedWindParameters_WindGustParameters_16;
	Parms.CallFunc_ConvertToNativizedWindParameters_WindGustParameters_17 = CallFunc_ConvertToNativizedWindParameters_WindGustParameters_17;
	Parms.CallFunc_ConvertToNativizedWindParameters_WindGustParameters_18 = CallFunc_ConvertToNativizedWindParameters_WindGustParameters_18;
	Parms.CallFunc_ConvertToNativizedWindParameters_WindGustParameters_19 = CallFunc_ConvertToNativizedWindParameters_WindGustParameters_19;

	UObject::ProcessEvent(Func, &Parms);

	if (Cloth_Parameters_Nativized != nullptr)
		*Cloth_Parameters_Nativized = Parms.Cloth_Parameters_Nativized;

	if (Wind_Parameters_Nativized != nullptr)
		*Wind_Parameters_Nativized = Parms.Wind_Parameters_Nativized;

	if (ClothCoreSettings != nullptr)
		*ClothCoreSettings = Parms.ClothCoreSettings;

	if (Wind_Settings_Nativized != nullptr)
		*Wind_Settings_Nativized = Parms.Wind_Settings_Nativized;

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.ConvertToNativizedWindParameters
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWindGustSettingStruct      WindGustSettingStruct                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FWindGustParameters         WindGustParameters                                               (Parm, OutParm, NoDestructor)
// struct FWindGustParameters         K2Node_MakeStruct_WindGustParameters                             (NoDestructor)

void UFortAnimationBPFunctionLibrary_C::ConvertToNativizedWindParameters(struct FWindGustSettingStruct& WindGustSettingStruct, class UObject* __WorldContext, struct FWindGustParameters* WindGustParameters, const struct FWindGustParameters& K2Node_MakeStruct_WindGustParameters)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "ConvertToNativizedWindParameters");

	Params::UFortAnimationBPFunctionLibrary_C_ConvertToNativizedWindParameters_Params Parms;

	Parms.WindGustSettingStruct = WindGustSettingStruct;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_WindGustParameters = K2Node_MakeStruct_WindGustParameters;

	UObject::ProcessEvent(Func, &Parms);

	if (WindGustParameters != nullptr)
		*WindGustParameters = Parms.WindGustParameters;

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.ConvertToNativizedClothParameters
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClothSettingStruct         ClothSettingStruct                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FClothParameters            ClothParameters                                                  (Parm, OutParm, NoDestructor)
// struct FClothParameters            K2Node_MakeStruct_ClothParameters                                (NoDestructor)

void UFortAnimationBPFunctionLibrary_C::ConvertToNativizedClothParameters(struct FClothSettingStruct& ClothSettingStruct, class UObject* __WorldContext, struct FClothParameters* ClothParameters, const struct FClothParameters& K2Node_MakeStruct_ClothParameters)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "ConvertToNativizedClothParameters");

	Params::UFortAnimationBPFunctionLibrary_C_ConvertToNativizedClothParameters_Params Parms;

	Parms.ClothSettingStruct = ClothSettingStruct;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_ClothParameters = K2Node_MakeStruct_ClothParameters;

	UObject::ProcessEvent(Func, &Parms);

	if (ClothParameters != nullptr)
		*ClothParameters = Parms.ClothParameters;

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Get Joint Location Relative to Bone
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Target_Joint                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Relative_Joint                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Offset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              SkelMeshComponent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Debug_Draw                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Joint_Location_Vector                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_AlignVectorWithJoint_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::Get_Joint_Location_Relative_to_Bone(class FName Target_Joint, class FName Relative_Joint, const struct FVector& Offset, class UMeshComponent* SkelMeshComponent, bool Debug_Draw, class UObject* __WorldContext, struct FVector* Joint_Location_Vector, TArray<class FName>& K2Node_MakeArray_Array, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_AlignVectorWithJoint_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "Get Joint Location Relative to Bone");

	Params::UFortAnimationBPFunctionLibrary_C_Get_Joint_Location_Relative_to_Bone_Params Parms;

	Parms.Target_Joint = Target_Joint;
	Parms.Relative_Joint = Relative_Joint;
	Parms.Offset = Offset;
	Parms.SkelMeshComponent = SkelMeshComponent;
	Parms.Debug_Draw = Debug_Draw;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_AlignVectorWithJoint_ReturnValue = CallFunc_AlignVectorWithJoint_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Joint_Location_Vector != nullptr)
		*Joint_Location_Vector = Parms.Joint_Location_Vector;

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Cape Spine05 Pelvis Rotation Function
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkinnedMeshComponent*       SkeletalMeshComponent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotate_Z_Output                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    RotateZ_output                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetDeltaTransformFromRefPose_ReturnValue                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAlphaFromReferenceTransformDelta_AlphaOutput         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAlphaFromReferenceTransformDelta_RawOutput           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Roll_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::Cape_Spine05_Pelvis_Rotation_Function(class USkinnedMeshComponent* SkeletalMeshComponent, class UObject* __WorldContext, struct FRotator* Rotate_Z_Output, const struct FRotator& RotateZ_output, const struct FTransform& CallFunc_GetDeltaTransformFromRefPose_ReturnValue, float CallFunc_GetAlphaFromReferenceTransformDelta_AlphaOutput, float CallFunc_GetAlphaFromReferenceTransformDelta_RawOutput, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_MapRangeClamped_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "Cape Spine05 Pelvis Rotation Function");

	Params::UFortAnimationBPFunctionLibrary_C_Cape_Spine05_Pelvis_Rotation_Function_Params Parms;

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;
	Parms.__WorldContext = __WorldContext;
	Parms.RotateZ_output = RotateZ_output;
	Parms.CallFunc_GetDeltaTransformFromRefPose_ReturnValue = CallFunc_GetDeltaTransformFromRefPose_ReturnValue;
	Parms.CallFunc_GetAlphaFromReferenceTransformDelta_AlphaOutput = CallFunc_GetAlphaFromReferenceTransformDelta_AlphaOutput;
	Parms.CallFunc_GetAlphaFromReferenceTransformDelta_RawOutput = CallFunc_GetAlphaFromReferenceTransformDelta_RawOutput;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;
	Parms.CallFunc_MakeRotator_Roll_ImplicitCast = CallFunc_MakeRotator_Roll_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Rotate_Z_Output != nullptr)
		*Rotate_Z_Output = Parms.Rotate_Z_Output;

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Separated Cloth Control Function
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomCharacterPartAnimInstance*CharacterPartAnimInstance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      ClothingAssetName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FClothParamsStruct          Cloth_Paramaters                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothCoreSettingStruct     Cloth_Core_Settings                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ClothUpAxis                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OnGround_Moving_SpeedLimit                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OnGround_Moving_AngularVel_Max                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OnGround_Moving_FictitiousVel_Max                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LinVelScale_FwdBwd_Clamp                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LinVelScale_UpDwn_Clamp                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             GameTimeInSeconds                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustParamsStruct       WindGustsParams                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct WindGustLocalSettings                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CurrentStateOut                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// struct FClothCoreSettingStruct     Cloth_Core_Settings_Out                                          (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothSettingStruct         Cloth_Settings_Out                                               (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustSettingStruct      WindGustSettings_Out                                             (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct WindGustLocalSettings_Out                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     GustStrength___WindVelocityOut                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LinearVelVector_DELETE_LATER                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   OnGroundMoving_LiftCoefficientLocal                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   OnGroundMoving_DragCoefficientLocal                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CurrentState                                                     (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// struct FWindGustSettingStruct      WindGustSettingsLocal                                            (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustParamsStruct       WindGustsParamsLocal                                             (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     MovementLinearVelVector_Local                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ClothUpAxis_Local                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     GustStrength___WindVelocityLocal                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct WindGustLocalSettings_Local                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             GameTimeInSecondsLocal                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DeltaTimeLocal                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OnGround_Moving_FictitiousVel                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OnGround_Moving_AngularVel                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothCoreSettingStruct     Cloth_Core_Settings_Local                                        (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothSettingStruct         Cloth_Settings_Local                                             (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothParamsStruct          Cloth_Params_Local                                               (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ClothingAssetName_Local                                          (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// double                             Player_Forward_Vector_scaled_for_jump_Local                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Player_Forward_Vector_Local                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChaosClothingInteractor*    ChaosClothingInteractor                                          (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UCustomCharacterPartAnimInstance*CharacterPartAnimInstanceLocal                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Separated_Cloth_Control_Calculate_Parameters_OutCurrentState(ZeroConstructor, HasGetValueTypeHash)
// struct FClothCoreSettingStruct     CallFunc_Separated_Cloth_Control_Calculate_Parameters_OutClothCoreSettings(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothSettingStruct         CallFunc_Separated_Cloth_Control_Calculate_Parameters_OutClothSettings(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustSettingStruct      CallFunc_Separated_Cloth_Control_Calculate_Parameters_OutWindGustSettings(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Separated_Cloth_Control_Calculate_Parameters_OutWindGustLocalSettings(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Separated_Cloth_Control_Calculate_Parameters_OutGustStrength(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Separated_Cloth_Control_Calculate_Parameters_LinearVelVector_DELETE_LATER(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::Separated_Cloth_Control_Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, const class FString& ClothingAssetName, const struct FClothParamsStruct& Cloth_Paramaters, const struct FClothCoreSettingStruct& Cloth_Core_Settings, const struct FVector& ClothUpAxis, double OnGround_Moving_SpeedLimit, double OnGround_Moving_AngularVel_Max, double OnGround_Moving_FictitiousVel_Max, double LinVelScale_FwdBwd_Clamp, double LinVelScale_UpDwn_Clamp, double DeltaTime, double GameTimeInSeconds, const struct FWindGustParamsStruct& WindGustsParams, const struct FWindGustLocalSettingStruct& WindGustLocalSettings, class UObject* __WorldContext, class FString* CurrentStateOut, struct FClothCoreSettingStruct* Cloth_Core_Settings_Out, struct FClothSettingStruct* Cloth_Settings_Out, struct FWindGustSettingStruct* WindGustSettings_Out, struct FWindGustLocalSettingStruct* WindGustLocalSettings_Out, struct FVector* GustStrength___WindVelocityOut, struct FVector* LinearVelVector_DELETE_LATER, const struct FVector2D& OnGroundMoving_LiftCoefficientLocal, const struct FVector2D& OnGroundMoving_DragCoefficientLocal, const class FString& CurrentState, const struct FWindGustSettingStruct& WindGustSettingsLocal, const struct FWindGustParamsStruct& WindGustsParamsLocal, const struct FVector& MovementLinearVelVector_Local, const struct FVector& ClothUpAxis_Local, const struct FVector& GustStrength___WindVelocityLocal, const struct FWindGustLocalSettingStruct& WindGustLocalSettings_Local, double GameTimeInSecondsLocal, double DeltaTimeLocal, double OnGround_Moving_FictitiousVel, double OnGround_Moving_AngularVel, const struct FClothCoreSettingStruct& Cloth_Core_Settings_Local, const struct FClothSettingStruct& Cloth_Settings_Local, const struct FClothParamsStruct& Cloth_Params_Local, const class FString& ClothingAssetName_Local, double Player_Forward_Vector_scaled_for_jump_Local, double Player_Forward_Vector_Local, class UChaosClothingInteractor* ChaosClothingInteractor, class UCustomCharacterPartAnimInstance* CharacterPartAnimInstanceLocal, const class FString& CallFunc_Separated_Cloth_Control_Calculate_Parameters_OutCurrentState, const struct FClothCoreSettingStruct& CallFunc_Separated_Cloth_Control_Calculate_Parameters_OutClothCoreSettings, const struct FClothSettingStruct& CallFunc_Separated_Cloth_Control_Calculate_Parameters_OutClothSettings, const struct FWindGustSettingStruct& CallFunc_Separated_Cloth_Control_Calculate_Parameters_OutWindGustSettings, const struct FWindGustLocalSettingStruct& CallFunc_Separated_Cloth_Control_Calculate_Parameters_OutWindGustLocalSettings, const struct FVector& CallFunc_Separated_Cloth_Control_Calculate_Parameters_OutGustStrength, const struct FVector& CallFunc_Separated_Cloth_Control_Calculate_Parameters_LinearVelVector_DELETE_LATER)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "Separated Cloth Control Function");

	Params::UFortAnimationBPFunctionLibrary_C_Separated_Cloth_Control_Function_Params Parms;

	Parms.CharacterPartAnimInstance = CharacterPartAnimInstance;
	Parms.ClothingAssetName = ClothingAssetName;
	Parms.Cloth_Paramaters = Cloth_Paramaters;
	Parms.Cloth_Core_Settings = Cloth_Core_Settings;
	Parms.ClothUpAxis = ClothUpAxis;
	Parms.OnGround_Moving_SpeedLimit = OnGround_Moving_SpeedLimit;
	Parms.OnGround_Moving_AngularVel_Max = OnGround_Moving_AngularVel_Max;
	Parms.OnGround_Moving_FictitiousVel_Max = OnGround_Moving_FictitiousVel_Max;
	Parms.LinVelScale_FwdBwd_Clamp = LinVelScale_FwdBwd_Clamp;
	Parms.LinVelScale_UpDwn_Clamp = LinVelScale_UpDwn_Clamp;
	Parms.DeltaTime = DeltaTime;
	Parms.GameTimeInSeconds = GameTimeInSeconds;
	Parms.WindGustsParams = WindGustsParams;
	Parms.WindGustLocalSettings = WindGustLocalSettings;
	Parms.__WorldContext = __WorldContext;
	Parms.OnGroundMoving_LiftCoefficientLocal = OnGroundMoving_LiftCoefficientLocal;
	Parms.OnGroundMoving_DragCoefficientLocal = OnGroundMoving_DragCoefficientLocal;
	Parms.CurrentState = CurrentState;
	Parms.WindGustSettingsLocal = WindGustSettingsLocal;
	Parms.WindGustsParamsLocal = WindGustsParamsLocal;
	Parms.MovementLinearVelVector_Local = MovementLinearVelVector_Local;
	Parms.ClothUpAxis_Local = ClothUpAxis_Local;
	Parms.GustStrength___WindVelocityLocal = GustStrength___WindVelocityLocal;
	Parms.WindGustLocalSettings_Local = WindGustLocalSettings_Local;
	Parms.GameTimeInSecondsLocal = GameTimeInSecondsLocal;
	Parms.DeltaTimeLocal = DeltaTimeLocal;
	Parms.OnGround_Moving_FictitiousVel = OnGround_Moving_FictitiousVel;
	Parms.OnGround_Moving_AngularVel = OnGround_Moving_AngularVel;
	Parms.Cloth_Core_Settings_Local = Cloth_Core_Settings_Local;
	Parms.Cloth_Settings_Local = Cloth_Settings_Local;
	Parms.Cloth_Params_Local = Cloth_Params_Local;
	Parms.ClothingAssetName_Local = ClothingAssetName_Local;
	Parms.Player_Forward_Vector_scaled_for_jump_Local = Player_Forward_Vector_scaled_for_jump_Local;
	Parms.Player_Forward_Vector_Local = Player_Forward_Vector_Local;
	Parms.ChaosClothingInteractor = ChaosClothingInteractor;
	Parms.CharacterPartAnimInstanceLocal = CharacterPartAnimInstanceLocal;
	Parms.CallFunc_Separated_Cloth_Control_Calculate_Parameters_OutCurrentState = CallFunc_Separated_Cloth_Control_Calculate_Parameters_OutCurrentState;
	Parms.CallFunc_Separated_Cloth_Control_Calculate_Parameters_OutClothCoreSettings = CallFunc_Separated_Cloth_Control_Calculate_Parameters_OutClothCoreSettings;
	Parms.CallFunc_Separated_Cloth_Control_Calculate_Parameters_OutClothSettings = CallFunc_Separated_Cloth_Control_Calculate_Parameters_OutClothSettings;
	Parms.CallFunc_Separated_Cloth_Control_Calculate_Parameters_OutWindGustSettings = CallFunc_Separated_Cloth_Control_Calculate_Parameters_OutWindGustSettings;
	Parms.CallFunc_Separated_Cloth_Control_Calculate_Parameters_OutWindGustLocalSettings = CallFunc_Separated_Cloth_Control_Calculate_Parameters_OutWindGustLocalSettings;
	Parms.CallFunc_Separated_Cloth_Control_Calculate_Parameters_OutGustStrength = CallFunc_Separated_Cloth_Control_Calculate_Parameters_OutGustStrength;
	Parms.CallFunc_Separated_Cloth_Control_Calculate_Parameters_LinearVelVector_DELETE_LATER = CallFunc_Separated_Cloth_Control_Calculate_Parameters_LinearVelVector_DELETE_LATER;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentStateOut != nullptr)
		*CurrentStateOut = Parms.CurrentStateOut;

	if (Cloth_Core_Settings_Out != nullptr)
		*Cloth_Core_Settings_Out = Parms.Cloth_Core_Settings_Out;

	if (Cloth_Settings_Out != nullptr)
		*Cloth_Settings_Out = Parms.Cloth_Settings_Out;

	if (WindGustSettings_Out != nullptr)
		*WindGustSettings_Out = Parms.WindGustSettings_Out;

	if (WindGustLocalSettings_Out != nullptr)
		*WindGustLocalSettings_Out = Parms.WindGustLocalSettings_Out;

	if (GustStrength___WindVelocityOut != nullptr)
		*GustStrength___WindVelocityOut = Parms.GustStrength___WindVelocityOut;

	if (LinearVelVector_DELETE_LATER != nullptr)
		*LinearVelVector_DELETE_LATER = Parms.LinearVelVector_DELETE_LATER;

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Separated Cloth Control Write To Instance
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomCharacterPartAnimInstance*Character_Part_Anim_Instance                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      Clothing_Asset_Name                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FClothCoreSettingStruct     Cloth_Core_Settings                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothSettingStruct         Cloth_Settings                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Gust_Strength___Wind_Velocity                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Joint_Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FClothSettingStruct         Cloth_Settings_Local                                             (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothCoreSettingStruct     Cloth_Core_Settings_Local                                        (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_AlignVectorWithJoint_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwningComponent_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UClothingSimulationInteractor*CallFunc_GetClothingSimulationInteractor_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_AlignVectorWithJoint_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClothingInteractor*         CallFunc_GetClothingInteractor_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UChaosClothingInteractor*    K2Node_DynamicCast_AsChaos_Clothing_Interactor                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::Separated_Cloth_Control_Write_To_Instance(class UCustomCharacterPartAnimInstance* Character_Part_Anim_Instance, const class FString& Clothing_Asset_Name, const struct FClothCoreSettingStruct& Cloth_Core_Settings, const struct FClothSettingStruct& Cloth_Settings, const struct FVector& Gust_Strength___Wind_Velocity, class FName Joint_Name, class UObject* __WorldContext, const struct FClothSettingStruct& Cloth_Settings_Local, const struct FClothCoreSettingStruct& Cloth_Core_Settings_Local, const struct FVector& CallFunc_AlignVectorWithJoint_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, class UClothingSimulationInteractor* CallFunc_GetClothingSimulationInteractor_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_AlignVectorWithJoint_ReturnValue_1, class UClothingInteractor* CallFunc_GetClothingInteractor_ReturnValue, class UChaosClothingInteractor* K2Node_DynamicCast_AsChaos_Clothing_Interactor, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "Separated Cloth Control Write To Instance");

	Params::UFortAnimationBPFunctionLibrary_C_Separated_Cloth_Control_Write_To_Instance_Params Parms;

	Parms.Character_Part_Anim_Instance = Character_Part_Anim_Instance;
	Parms.Clothing_Asset_Name = Clothing_Asset_Name;
	Parms.Cloth_Core_Settings = Cloth_Core_Settings;
	Parms.Cloth_Settings = Cloth_Settings;
	Parms.Gust_Strength___Wind_Velocity = Gust_Strength___Wind_Velocity;
	Parms.Joint_Name = Joint_Name;
	Parms.__WorldContext = __WorldContext;
	Parms.Cloth_Settings_Local = Cloth_Settings_Local;
	Parms.Cloth_Core_Settings_Local = Cloth_Core_Settings_Local;
	Parms.CallFunc_AlignVectorWithJoint_ReturnValue = CallFunc_AlignVectorWithJoint_ReturnValue;
	Parms.CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue = CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue;
	Parms.CallFunc_GetOwningComponent_ReturnValue = CallFunc_GetOwningComponent_ReturnValue;
	Parms.CallFunc_GetClothingSimulationInteractor_ReturnValue = CallFunc_GetClothingSimulationInteractor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AlignVectorWithJoint_ReturnValue_1 = CallFunc_AlignVectorWithJoint_ReturnValue_1;
	Parms.CallFunc_GetClothingInteractor_ReturnValue = CallFunc_GetClothingInteractor_ReturnValue;
	Parms.K2Node_DynamicCast_AsChaos_Clothing_Interactor = K2Node_DynamicCast_AsChaos_Clothing_Interactor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Separated Cloth Control Calculate Parameters
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomCharacterPartAnimInstance*InCharacterPartAnimInstance                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FClothParamsStruct          Cloth_Paramaters                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothCoreSettingStruct     Cloth_Core_Settings                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ClothUpAxis                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OnGround_Moving_SpeedLimit                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OnGround_Moving_AngularVel_Max                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OnGround_Moving_FictitiousVel_Max                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LinVelScale_FwdBwd_Clamp                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LinVelScale_UpDwn_Clamp                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             GameTimeInSeconds                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustParamsStruct       InWindGustParams                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct InWindGustLocalSettings                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      OutCurrentState                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// struct FClothCoreSettingStruct     OutClothCoreSettings                                             (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothSettingStruct         OutClothSettings                                                 (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustSettingStruct      OutWindGustSettings                                              (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct OutWindGustLocalSettings                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OutGustStrength                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LinearVelVector_DELETE_LATER                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   OnGroundMoving_LiftCoefficientLocal                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   OnGroundMoving_DragCoefficientLocal                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CurrentState                                                     (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// struct FWindGustSettingStruct      WindGustSettingsLocal                                            (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustParamsStruct       WindGustsParamsLocal                                             (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     MovementLinearVelVector_Local                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ClothUpAxis_Local                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     GustStrength___WindVelocityLocal                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct WindGustLocalSettings_Local                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             GameTimeInSeconds                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DeltaTimeLocal                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OnGround_Moving_FictitiousVel                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OnGround_Moving_AngularVel                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothCoreSettingStruct     Cloth_Core_Settings_Local                                        (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothSettingStruct         Cloth_Settings_Local                                             (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothParamsStruct          Cloth_Params_Local                                               (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ClothingAssetName_Local                                          (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// double                             Player_Forward_Vector_scaled_for_jump_Local                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Player_Forward_Vector_Local                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCustomCharacterPartAnimInstance*CharacterPartAnimInstance                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerAnimInstance*     CallFunc_GetOwnerFortPlayerAnimInstance_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerAnimInstance*     CallFunc_GetOwnerFortPlayerAnimInstance_ReturnValue_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerAnimationInterface*CallFunc_GetOwnerAnimationInterface_ReturnValue                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FFortAnimInput_Zipline      CallFunc_GetZiplineInput_ReturnValue                             (ConstParm, NoDestructor)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayerMovement_XMovement                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayerMovement_YMovement                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayerMovement_ZMovement                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Cloth_Controller_Helper_Scale_For_Player_Movement_LinearVelVectorOut(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_4(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_4(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_5(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_5(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_6(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_6(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_7(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_7(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_8(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_8(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_9(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_9(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_10(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_10(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_11(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_11(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_12(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_12(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_13(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_13(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_14(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_14(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_15(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_15(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_16(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_16(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_17(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_17(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothSettingStruct         K2Node_MakeStruct_ClothSettingStruct                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_A_ImplicitCast                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_OnGround_Moving_AngularVel_ImplicitCast       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_OnGround_Moving_FictitiousVel_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_FictitiousAngularScale_10_C5F4D16F48D0BEDC3F0FA38B2648511B_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_AngularVelocityScale_6_6A3DFE4A481AD4D7CB18D79F95CC88E8_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::Separated_Cloth_Control_Calculate_Parameters(class UCustomCharacterPartAnimInstance* InCharacterPartAnimInstance, const struct FClothParamsStruct& Cloth_Paramaters, const struct FClothCoreSettingStruct& Cloth_Core_Settings, const struct FVector& ClothUpAxis, double OnGround_Moving_SpeedLimit, double OnGround_Moving_AngularVel_Max, double OnGround_Moving_FictitiousVel_Max, double LinVelScale_FwdBwd_Clamp, double LinVelScale_UpDwn_Clamp, double DeltaTime, double GameTimeInSeconds, const struct FWindGustParamsStruct& InWindGustParams, const struct FWindGustLocalSettingStruct& InWindGustLocalSettings, class UObject* __WorldContext, class FString* OutCurrentState, struct FClothCoreSettingStruct* OutClothCoreSettings, struct FClothSettingStruct* OutClothSettings, struct FWindGustSettingStruct* OutWindGustSettings, struct FWindGustLocalSettingStruct* OutWindGustLocalSettings, struct FVector* OutGustStrength, struct FVector* LinearVelVector_DELETE_LATER, const struct FVector2D& OnGroundMoving_LiftCoefficientLocal, const struct FVector2D& OnGroundMoving_DragCoefficientLocal, const class FString& CurrentState, const struct FWindGustSettingStruct& WindGustSettingsLocal, const struct FWindGustParamsStruct& WindGustsParamsLocal, const struct FVector& MovementLinearVelVector_Local, const struct FVector& ClothUpAxis_Local, const struct FVector& GustStrength___WindVelocityLocal, const struct FWindGustLocalSettingStruct& WindGustLocalSettings_Local, double GameTimeInSeconds, double DeltaTimeLocal, double OnGround_Moving_FictitiousVel, double OnGround_Moving_AngularVel, const struct FClothCoreSettingStruct& Cloth_Core_Settings_Local, const struct FClothSettingStruct& Cloth_Settings_Local, const struct FClothParamsStruct& Cloth_Params_Local, const class FString& ClothingAssetName_Local, double Player_Forward_Vector_scaled_for_jump_Local, double Player_Forward_Vector_Local, class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, const struct FVector& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out, const struct FWindGustLocalSettingStruct& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut, const struct FVector& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_1, const struct FWindGustLocalSettingStruct& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_1, class UFortPlayerAnimInstance* CallFunc_GetOwnerFortPlayerAnimInstance_ReturnValue, class UFortPlayerAnimInstance* CallFunc_GetOwnerFortPlayerAnimInstance_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, class UFortPlayerAnimationInterface* CallFunc_GetOwnerAnimationInterface_ReturnValue, const struct FFortAnimInput_Zipline& CallFunc_GetZiplineInput_ReturnValue, double CallFunc_VSize_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Abs_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, float CallFunc_PlayerMovement_XMovement, float CallFunc_PlayerMovement_YMovement, float CallFunc_PlayerMovement_ZMovement, const struct FVector& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_2, const struct FWindGustLocalSettingStruct& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, const struct FVector& CallFunc_Cloth_Controller_Helper_Scale_For_Player_Movement_LinearVelVectorOut, const struct FVector& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_3, const struct FWindGustLocalSettingStruct& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_3, const struct FVector& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_4, const struct FWindGustLocalSettingStruct& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_4, const struct FVector& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_5, const struct FWindGustLocalSettingStruct& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_5, const struct FVector& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_6, const struct FWindGustLocalSettingStruct& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_6, bool CallFunc_Greater_DoubleDouble_ReturnValue_4, const struct FVector& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_7, const struct FWindGustLocalSettingStruct& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_7, const struct FVector& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_8, const struct FWindGustLocalSettingStruct& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_8, const struct FVector& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_9, const struct FWindGustLocalSettingStruct& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_9, const struct FVector& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_10, const struct FWindGustLocalSettingStruct& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_10, const struct FVector& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_11, const struct FWindGustLocalSettingStruct& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_11, const struct FVector& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_12, const struct FWindGustLocalSettingStruct& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_12, const struct FVector& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_13, const struct FWindGustLocalSettingStruct& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_13, const struct FVector& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_14, const struct FWindGustLocalSettingStruct& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_14, const struct FVector& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_15, const struct FWindGustLocalSettingStruct& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_15, const struct FVector& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_16, const struct FWindGustLocalSettingStruct& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_16, const struct FVector& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_17, const struct FWindGustLocalSettingStruct& CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_17, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, const struct FClothSettingStruct& K2Node_MakeStruct_ClothSettingStruct, bool CallFunc_IsValid_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Abs_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_2, double K2Node_VariableSet_OnGround_Moving_AngularVel_ImplicitCast, double K2Node_VariableSet_OnGround_Moving_FictitiousVel_ImplicitCast, float K2Node_MakeStruct_FictitiousAngularScale_10_C5F4D16F48D0BEDC3F0FA38B2648511B_ImplicitCast, float K2Node_MakeStruct_AngularVelocityScale_6_6A3DFE4A481AD4D7CB18D79F95CC88E8_ImplicitCast)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "Separated Cloth Control Calculate Parameters");

	Params::UFortAnimationBPFunctionLibrary_C_Separated_Cloth_Control_Calculate_Parameters_Params Parms;

	Parms.InCharacterPartAnimInstance = InCharacterPartAnimInstance;
	Parms.Cloth_Paramaters = Cloth_Paramaters;
	Parms.Cloth_Core_Settings = Cloth_Core_Settings;
	Parms.ClothUpAxis = ClothUpAxis;
	Parms.OnGround_Moving_SpeedLimit = OnGround_Moving_SpeedLimit;
	Parms.OnGround_Moving_AngularVel_Max = OnGround_Moving_AngularVel_Max;
	Parms.OnGround_Moving_FictitiousVel_Max = OnGround_Moving_FictitiousVel_Max;
	Parms.LinVelScale_FwdBwd_Clamp = LinVelScale_FwdBwd_Clamp;
	Parms.LinVelScale_UpDwn_Clamp = LinVelScale_UpDwn_Clamp;
	Parms.DeltaTime = DeltaTime;
	Parms.GameTimeInSeconds = GameTimeInSeconds;
	Parms.InWindGustParams = InWindGustParams;
	Parms.InWindGustLocalSettings = InWindGustLocalSettings;
	Parms.__WorldContext = __WorldContext;
	Parms.OnGroundMoving_LiftCoefficientLocal = OnGroundMoving_LiftCoefficientLocal;
	Parms.OnGroundMoving_DragCoefficientLocal = OnGroundMoving_DragCoefficientLocal;
	Parms.CurrentState = CurrentState;
	Parms.WindGustSettingsLocal = WindGustSettingsLocal;
	Parms.WindGustsParamsLocal = WindGustsParamsLocal;
	Parms.MovementLinearVelVector_Local = MovementLinearVelVector_Local;
	Parms.ClothUpAxis_Local = ClothUpAxis_Local;
	Parms.GustStrength___WindVelocityLocal = GustStrength___WindVelocityLocal;
	Parms.WindGustLocalSettings_Local = WindGustLocalSettings_Local;
	Parms.GameTimeInSeconds = GameTimeInSeconds;
	Parms.DeltaTimeLocal = DeltaTimeLocal;
	Parms.OnGround_Moving_FictitiousVel = OnGround_Moving_FictitiousVel;
	Parms.OnGround_Moving_AngularVel = OnGround_Moving_AngularVel;
	Parms.Cloth_Core_Settings_Local = Cloth_Core_Settings_Local;
	Parms.Cloth_Settings_Local = Cloth_Settings_Local;
	Parms.Cloth_Params_Local = Cloth_Params_Local;
	Parms.ClothingAssetName_Local = ClothingAssetName_Local;
	Parms.Player_Forward_Vector_scaled_for_jump_Local = Player_Forward_Vector_scaled_for_jump_Local;
	Parms.Player_Forward_Vector_Local = Player_Forward_Vector_Local;
	Parms.CharacterPartAnimInstance = CharacterPartAnimInstance;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_1 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_1;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_1 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_1;
	Parms.CallFunc_GetOwnerFortPlayerAnimInstance_ReturnValue = CallFunc_GetOwnerFortPlayerAnimInstance_ReturnValue;
	Parms.CallFunc_GetOwnerFortPlayerAnimInstance_ReturnValue_1 = CallFunc_GetOwnerFortPlayerAnimInstance_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_GetOwnerAnimationInterface_ReturnValue = CallFunc_GetOwnerAnimationInterface_ReturnValue;
	Parms.CallFunc_GetZiplineInput_ReturnValue = CallFunc_GetZiplineInput_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_PlayerMovement_XMovement = CallFunc_PlayerMovement_XMovement;
	Parms.CallFunc_PlayerMovement_YMovement = CallFunc_PlayerMovement_YMovement;
	Parms.CallFunc_PlayerMovement_ZMovement = CallFunc_PlayerMovement_ZMovement;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_2 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_2;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_2 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_2;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_3 = CallFunc_Greater_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Cloth_Controller_Helper_Scale_For_Player_Movement_LinearVelVectorOut = CallFunc_Cloth_Controller_Helper_Scale_For_Player_Movement_LinearVelVectorOut;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_3 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_3;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_3 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_3;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_4 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_4;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_4 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_4;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_5 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_5;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_5 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_5;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_6 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_6;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_6 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_6;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_4 = CallFunc_Greater_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_7 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_7;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_7 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_7;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_8 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_8;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_8 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_8;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_9 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_9;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_9 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_9;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_10 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_10;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_10 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_10;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_11 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_11;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_11 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_11;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_12 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_12;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_12 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_12;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_13 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_13;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_13 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_13;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_14 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_14;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_14 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_14;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_15 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_15;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_15 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_15;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_16 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_16;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_16 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_16;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_17 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_GustStrengthWindVelocity_Out_17;
	Parms.CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_17 = CallFunc_Separated_Cloth_Control_Wind_Gust_Function_WindGustLocalSettingsOut_17;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.K2Node_MakeStruct_ClothSettingStruct = K2Node_MakeStruct_ClothSettingStruct;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Abs_A_ImplicitCast = CallFunc_Abs_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast_1 = CallFunc_MapRangeClamped_Value_ImplicitCast_1;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_2 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_2;
	Parms.K2Node_VariableSet_OnGround_Moving_AngularVel_ImplicitCast = K2Node_VariableSet_OnGround_Moving_AngularVel_ImplicitCast;
	Parms.K2Node_VariableSet_OnGround_Moving_FictitiousVel_ImplicitCast = K2Node_VariableSet_OnGround_Moving_FictitiousVel_ImplicitCast;
	Parms.K2Node_MakeStruct_FictitiousAngularScale_10_C5F4D16F48D0BEDC3F0FA38B2648511B_ImplicitCast = K2Node_MakeStruct_FictitiousAngularScale_10_C5F4D16F48D0BEDC3F0FA38B2648511B_ImplicitCast;
	Parms.K2Node_MakeStruct_AngularVelocityScale_6_6A3DFE4A481AD4D7CB18D79F95CC88E8_ImplicitCast = K2Node_MakeStruct_AngularVelocityScale_6_6A3DFE4A481AD4D7CB18D79F95CC88E8_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (OutCurrentState != nullptr)
		*OutCurrentState = Parms.OutCurrentState;

	if (OutClothCoreSettings != nullptr)
		*OutClothCoreSettings = Parms.OutClothCoreSettings;

	if (OutClothSettings != nullptr)
		*OutClothSettings = Parms.OutClothSettings;

	if (OutWindGustSettings != nullptr)
		*OutWindGustSettings = Parms.OutWindGustSettings;

	if (OutWindGustLocalSettings != nullptr)
		*OutWindGustLocalSettings = Parms.OutWindGustLocalSettings;

	if (OutGustStrength != nullptr)
		*OutGustStrength = Parms.OutGustStrength;

	if (LinearVelVector_DELETE_LATER != nullptr)
		*LinearVelVector_DELETE_LATER = Parms.LinearVelVector_DELETE_LATER;

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Separated Cloth Control Wind Gust Function
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             GameTimeInSeconds                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        JointName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustSettingStruct      WindGustSettings                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct WindGustLocalSettings                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     GustStrengthWindVelocity_Out                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct WindGustLocalSettingsOut                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     GustStrength___WindVelocityLocal                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustSettingStruct      K2Node_MakeStruct_WindGustSettingStruct                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetRandomWindVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_WindGustGeneratorFunction_GustStrength___WindVelocity   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_WindGustGeneratorFunction_ClothGustLocalSettingsOut     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRandomWindVector_GameTime_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::Separated_Cloth_Control_Wind_Gust_Function(double DeltaTime, double GameTimeInSeconds, class FName JointName, const struct FWindGustSettingStruct& WindGustSettings, const struct FWindGustLocalSettingStruct& WindGustLocalSettings, class UObject* __WorldContext, struct FVector* GustStrengthWindVelocity_Out, struct FWindGustLocalSettingStruct* WindGustLocalSettingsOut, const struct FVector& GustStrength___WindVelocityLocal, const struct FWindGustSettingStruct& K2Node_MakeStruct_WindGustSettingStruct, const struct FVector& CallFunc_GetRandomWindVector_ReturnValue, double CallFunc_WindGustGeneratorFunction_GustStrength___WindVelocity, const struct FWindGustLocalSettingStruct& CallFunc_WindGustGeneratorFunction_ClothGustLocalSettingsOut, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_GetRandomWindVector_GameTime_ImplicitCast)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "Separated Cloth Control Wind Gust Function");

	Params::UFortAnimationBPFunctionLibrary_C_Separated_Cloth_Control_Wind_Gust_Function_Params Parms;

	Parms.DeltaTime = DeltaTime;
	Parms.GameTimeInSeconds = GameTimeInSeconds;
	Parms.JointName = JointName;
	Parms.WindGustSettings = WindGustSettings;
	Parms.WindGustLocalSettings = WindGustLocalSettings;
	Parms.__WorldContext = __WorldContext;
	Parms.GustStrength___WindVelocityLocal = GustStrength___WindVelocityLocal;
	Parms.K2Node_MakeStruct_WindGustSettingStruct = K2Node_MakeStruct_WindGustSettingStruct;
	Parms.CallFunc_GetRandomWindVector_ReturnValue = CallFunc_GetRandomWindVector_ReturnValue;
	Parms.CallFunc_WindGustGeneratorFunction_GustStrength___WindVelocity = CallFunc_WindGustGeneratorFunction_GustStrength___WindVelocity;
	Parms.CallFunc_WindGustGeneratorFunction_ClothGustLocalSettingsOut = CallFunc_WindGustGeneratorFunction_ClothGustLocalSettingsOut;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetRandomWindVector_GameTime_ImplicitCast = CallFunc_GetRandomWindVector_GameTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (GustStrengthWindVelocity_Out != nullptr)
		*GustStrengthWindVelocity_Out = Parms.GustStrengthWindVelocity_Out;

	if (WindGustLocalSettingsOut != nullptr)
		*WindGustLocalSettingsOut = Parms.WindGustLocalSettingsOut;

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Set WPO Regional Function
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    Material                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    Overlay_Material                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Skeletal_Mesh                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        Velocity_Transform                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Velocity_Interp_Speed                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Collision_Transform                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAxis                   Collision_Transform_Axis                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Invert_Collision_Transform_Axis                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Delta_Time_X                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Previous_Velocity_Transform_Location                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Previous_Velocity_Transform_Velocity                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Region                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EAxis                   CollisionTransformAxisToUse                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    LoverlayMID                                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    LMID                                                             (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      LSkelMesh                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        LMatBoneVectorParamName                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LMatBonePositionParamName                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LMatVelocityParamName                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_WPO_Regional_Param_Names_Function_Velocity          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_WPO_Regional_Param_Names_Function_Bone_Position     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_WPO_Regional_Param_Names_Function_Bone_Vector       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAxis                   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAxis                   K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMatrix                     CallFunc_Conv_TransformToMatrix_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Matrix_GetUnitAxis_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Get__Motion_Vector_For_Transform_Function_Transform_Motion_Vector(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Get__Motion_Vector_For_Transform_Function_Transform_Location(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Get__Motion_Vector_For_Transform_Function_Transform     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Divide_VectorVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VInterpTo_DeltaTime_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VInterpTo_InterpSpeed_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::Set_WPO_Regional_Function(class UMaterialInstanceDynamic* Material, class UMaterialInstanceDynamic* Overlay_Material, class USkeletalMeshComponent* Skeletal_Mesh, class FName Velocity_Transform, double Velocity_Interp_Speed, class FName Collision_Transform, enum class EAxis Collision_Transform_Axis, bool Invert_Collision_Transform_Axis, double Delta_Time_X, struct FVector& Previous_Velocity_Transform_Location, struct FVector& Previous_Velocity_Transform_Velocity, int32 Region, class UObject* __WorldContext, enum class EAxis CollisionTransformAxisToUse, class UMaterialInstanceDynamic* LoverlayMID, class UMaterialInstanceDynamic* LMID, class USkeletalMeshComponent* LSkelMesh, class FName LMatBoneVectorParamName, class FName LMatBonePositionParamName, class FName LMatVelocityParamName, class FName CallFunc_Get_WPO_Regional_Param_Names_Function_Velocity, class FName CallFunc_Get_WPO_Regional_Param_Names_Function_Bone_Position, class FName CallFunc_Get_WPO_Regional_Param_Names_Function_Bone_Vector, double CallFunc_FMax_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, double CallFunc_FMax_ReturnValue_1, double Temp_real_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable, enum class EAxis Temp_byte_Variable, double K2Node_Select_Default, bool Temp_bool_Variable_1, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_1, enum class EAxis K2Node_Select_Default_1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FMatrix& CallFunc_Conv_TransformToMatrix_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FVector& CallFunc_Matrix_GetUnitAxis_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Get__Motion_Vector_For_Transform_Function_Transform_Motion_Vector, const struct FVector& CallFunc_Get__Motion_Vector_For_Transform_Function_Transform_Location, const struct FTransform& CallFunc_Get__Motion_Vector_For_Transform_Function_Transform, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1, const struct FVector& CallFunc_Divide_VectorVector_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_2, float CallFunc_VInterpTo_DeltaTime_ImplicitCast, float CallFunc_VInterpTo_InterpSpeed_ImplicitCast)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "Set WPO Regional Function");

	Params::UFortAnimationBPFunctionLibrary_C_Set_WPO_Regional_Function_Params Parms;

	Parms.Material = Material;
	Parms.Overlay_Material = Overlay_Material;
	Parms.Skeletal_Mesh = Skeletal_Mesh;
	Parms.Velocity_Transform = Velocity_Transform;
	Parms.Velocity_Interp_Speed = Velocity_Interp_Speed;
	Parms.Collision_Transform = Collision_Transform;
	Parms.Collision_Transform_Axis = Collision_Transform_Axis;
	Parms.Invert_Collision_Transform_Axis = Invert_Collision_Transform_Axis;
	Parms.Delta_Time_X = Delta_Time_X;
	Parms.Previous_Velocity_Transform_Location = Previous_Velocity_Transform_Location;
	Parms.Previous_Velocity_Transform_Velocity = Previous_Velocity_Transform_Velocity;
	Parms.Region = Region;
	Parms.__WorldContext = __WorldContext;
	Parms.CollisionTransformAxisToUse = CollisionTransformAxisToUse;
	Parms.LoverlayMID = LoverlayMID;
	Parms.LMID = LMID;
	Parms.LSkelMesh = LSkelMesh;
	Parms.LMatBoneVectorParamName = LMatBoneVectorParamName;
	Parms.LMatBonePositionParamName = LMatBonePositionParamName;
	Parms.LMatVelocityParamName = LMatVelocityParamName;
	Parms.CallFunc_Get_WPO_Regional_Param_Names_Function_Velocity = CallFunc_Get_WPO_Regional_Param_Names_Function_Velocity;
	Parms.CallFunc_Get_WPO_Regional_Param_Names_Function_Bone_Position = CallFunc_Get_WPO_Regional_Param_Names_Function_Bone_Position;
	Parms.CallFunc_Get_WPO_Regional_Param_Names_Function_Bone_Vector = CallFunc_Get_WPO_Regional_Param_Names_Function_Bone_Vector;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Conv_DoubleToVector_ReturnValue = CallFunc_Conv_DoubleToVector_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue_1 = CallFunc_FMax_ReturnValue_1;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Conv_DoubleToVector_ReturnValue_1 = CallFunc_Conv_DoubleToVector_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Conv_TransformToMatrix_ReturnValue = CallFunc_Conv_TransformToMatrix_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_Matrix_GetUnitAxis_ReturnValue = CallFunc_Matrix_GetUnitAxis_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Get__Motion_Vector_For_Transform_Function_Transform_Motion_Vector = CallFunc_Get__Motion_Vector_For_Transform_Function_Transform_Motion_Vector;
	Parms.CallFunc_Get__Motion_Vector_For_Transform_Function_Transform_Location = CallFunc_Get__Motion_Vector_For_Transform_Function_Transform_Location;
	Parms.CallFunc_Get__Motion_Vector_For_Transform_Function_Transform = CallFunc_Get__Motion_Vector_For_Transform_Function_Transform;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_1 = CallFunc_Conv_VectorToLinearColor_ReturnValue_1;
	Parms.CallFunc_Divide_VectorVector_ReturnValue = CallFunc_Divide_VectorVector_ReturnValue;
	Parms.CallFunc_VInterpTo_ReturnValue = CallFunc_VInterpTo_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_2 = CallFunc_Conv_VectorToLinearColor_ReturnValue_2;
	Parms.CallFunc_VInterpTo_DeltaTime_ImplicitCast = CallFunc_VInterpTo_DeltaTime_ImplicitCast;
	Parms.CallFunc_VInterpTo_InterpSpeed_ImplicitCast = CallFunc_VInterpTo_InterpSpeed_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Get WPO Regional Param Names Function
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Region                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Velocity                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Bone_Position                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Bone_Vector                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::Get_WPO_Regional_Param_Names_Function(int32& Region, class UObject* __WorldContext, class FName* Velocity, class FName* Bone_Position, class FName* Bone_Vector, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FName CallFunc_Conv_StringToName_ReturnValue_2)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "Get WPO Regional Param Names Function");

	Params::UFortAnimationBPFunctionLibrary_C_Get_WPO_Regional_Param_Names_Function_Params Parms;

	Parms.Region = Region;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Conv_StringToName_ReturnValue_2 = CallFunc_Conv_StringToName_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Velocity != nullptr)
		*Velocity = Parms.Velocity;

	if (Bone_Position != nullptr)
		*Bone_Position = Parms.Bone_Position;

	if (Bone_Vector != nullptr)
		*Bone_Vector = Parms.Bone_Vector;

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Set WPO Globals Function
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    Material                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    Overlay_Material                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Skeletal_Mesh                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_Noise_Reference_Transform                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Local_Noise_Offset_Multiplier                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Local_Noise_Transform__Location                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Local_Noise_Offset                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_Turbulence_Vector_Transform                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAxis                   Local_Turbulence_Vector_Transform_Axis                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EAxis                   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Get__Motion_Vector_For_Transform_Function_Transform_Motion_Vector(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Get__Motion_Vector_For_Transform_Function_Transform_Location(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Get__Motion_Vector_For_Transform_Function_Transform     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMatrix                     CallFunc_Conv_TransformToMatrix_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAxis                   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Matrix_GetUnitAxis_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::Set_WPO_Globals_Function(class UMaterialInstanceDynamic* Material, class UMaterialInstanceDynamic* Overlay_Material, class USkeletalMeshComponent* Skeletal_Mesh, class FName Local_Noise_Reference_Transform, double Local_Noise_Offset_Multiplier, struct FVector& Local_Noise_Transform__Location, struct FVector& Local_Noise_Offset, class FName Local_Turbulence_Vector_Transform, enum class EAxis Local_Turbulence_Vector_Transform_Axis, class UObject* __WorldContext, enum class EAxis Temp_byte_Variable, const struct FVector& CallFunc_Get__Motion_Vector_For_Transform_Function_Transform_Motion_Vector, const struct FVector& CallFunc_Get__Motion_Vector_For_Transform_Function_Transform_Location, const struct FTransform& CallFunc_Get__Motion_Vector_For_Transform_Function_Transform, bool CallFunc_NotEqual_ByteByte_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FMatrix& CallFunc_Conv_TransformToMatrix_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool Temp_bool_Variable, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, enum class EAxis K2Node_Select_Default, const struct FVector& CallFunc_Matrix_GetUnitAxis_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "Set WPO Globals Function");

	Params::UFortAnimationBPFunctionLibrary_C_Set_WPO_Globals_Function_Params Parms;

	Parms.Material = Material;
	Parms.Overlay_Material = Overlay_Material;
	Parms.Skeletal_Mesh = Skeletal_Mesh;
	Parms.Local_Noise_Reference_Transform = Local_Noise_Reference_Transform;
	Parms.Local_Noise_Offset_Multiplier = Local_Noise_Offset_Multiplier;
	Parms.Local_Noise_Transform__Location = Local_Noise_Transform__Location;
	Parms.Local_Noise_Offset = Local_Noise_Offset;
	Parms.Local_Turbulence_Vector_Transform = Local_Turbulence_Vector_Transform;
	Parms.Local_Turbulence_Vector_Transform_Axis = Local_Turbulence_Vector_Transform_Axis;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Get__Motion_Vector_For_Transform_Function_Transform_Motion_Vector = CallFunc_Get__Motion_Vector_For_Transform_Function_Transform_Motion_Vector;
	Parms.CallFunc_Get__Motion_Vector_For_Transform_Function_Transform_Location = CallFunc_Get__Motion_Vector_For_Transform_Function_Transform_Location;
	Parms.CallFunc_Get__Motion_Vector_For_Transform_Function_Transform = CallFunc_Get__Motion_Vector_For_Transform_Function_Transform;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_Conv_DoubleToVector_ReturnValue = CallFunc_Conv_DoubleToVector_ReturnValue;
	Parms.CallFunc_Conv_TransformToMatrix_ReturnValue = CallFunc_Conv_TransformToMatrix_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Matrix_GetUnitAxis_ReturnValue = CallFunc_Matrix_GetUnitAxis_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_1 = CallFunc_Conv_VectorToLinearColor_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Get  Motion Vector For Transform Function
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             Skeletal_Mesh                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        Transform_Name                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Previous_Transform_Location                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Transform_Motion_Vector                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Transform_Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Transform                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::Get__Motion_Vector_For_Transform_Function(class USceneComponent* Skeletal_Mesh, class FName Transform_Name, struct FVector& Previous_Transform_Location, class UObject* __WorldContext, struct FVector* Transform_Motion_Vector, struct FVector* Transform_Location, struct FTransform* Transform, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "Get  Motion Vector For Transform Function");

	Params::UFortAnimationBPFunctionLibrary_C_Get__Motion_Vector_For_Transform_Function_Params Parms;

	Parms.Skeletal_Mesh = Skeletal_Mesh;
	Parms.Transform_Name = Transform_Name;
	Parms.Previous_Transform_Location = Previous_Transform_Location;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Transform_Motion_Vector != nullptr)
		*Transform_Motion_Vector = Parms.Transform_Motion_Vector;

	if (Transform_Location != nullptr)
		*Transform_Location = Parms.Transform_Location;

	if (Transform != nullptr)
		*Transform = Parms.Transform;

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Debug Cloth Teleport Threshold Function
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             MinDistance                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MinRotation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             SkelMeshComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               PrintToScreen                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        BoneName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     InVector                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    PawnDeltaRotation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             PrintToScreenDuration                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Distance                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Rotation                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             RotationLocal                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DistanceLocal                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_A_ImplicitCast                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::Debug_Cloth_Teleport_Threshold_Function(double MinDistance, double MinRotation, class USceneComponent* SkelMeshComponent, bool PrintToScreen, class FName BoneName, struct FVector& InVector, const struct FRotator& PawnDeltaRotation, double PrintToScreenDuration, class UObject* __WorldContext, double* Distance, double* Rotation, double RotationLocal, double DistanceLocal, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Vector_Distance_ReturnValue, double CallFunc_Abs_ReturnValue, double CallFunc_Abs_A_ImplicitCast)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "Debug Cloth Teleport Threshold Function");

	Params::UFortAnimationBPFunctionLibrary_C_Debug_Cloth_Teleport_Threshold_Function_Params Parms;

	Parms.MinDistance = MinDistance;
	Parms.MinRotation = MinRotation;
	Parms.SkelMeshComponent = SkelMeshComponent;
	Parms.PrintToScreen = PrintToScreen;
	Parms.BoneName = BoneName;
	Parms.InVector = InVector;
	Parms.PawnDeltaRotation = PawnDeltaRotation;
	Parms.PrintToScreenDuration = PrintToScreenDuration;
	Parms.__WorldContext = __WorldContext;
	Parms.RotationLocal = RotationLocal;
	Parms.DistanceLocal = DistanceLocal;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Abs_A_ImplicitCast = CallFunc_Abs_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Distance != nullptr)
		*Distance = Parms.Distance;

	if (Rotation != nullptr)
		*Rotation = Parms.Rotation;

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Cloth Controller Helper Scale For Player Movement
// (Static, Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     LinearVelScale                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             PlayerFwdVector                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             PlayerFwdVectorJump                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ClothUpX                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ClothUpZ                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LinearVelVectorOut                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::Cloth_Controller_Helper_Scale_For_Player_Movement(const struct FVector& LinearVelScale, double PlayerFwdVector, double PlayerFwdVectorJump, double ClothUpX, double ClothUpZ, class UObject* __WorldContext, struct FVector* LinearVelVectorOut, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, const struct FVector& CallFunc_MakeVector_ReturnValue_1)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "Cloth Controller Helper Scale For Player Movement");

	Params::UFortAnimationBPFunctionLibrary_C_Cloth_Controller_Helper_Scale_For_Player_Movement_Params Parms;

	Parms.LinearVelScale = LinearVelScale;
	Parms.PlayerFwdVector = PlayerFwdVector;
	Parms.PlayerFwdVectorJump = PlayerFwdVectorJump;
	Parms.ClothUpX = ClothUpX;
	Parms.ClothUpZ = ClothUpZ;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (LinearVelVectorOut != nullptr)
		*LinearVelVectorOut = Parms.LinearVelVectorOut;

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Scale Joint Rotation Function
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        TargetBone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ReferenceBone                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkinnedMeshComponent*       SkelMeshComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    FinalRotation                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    OriginalRotation                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetDeltaTransformFromRefPose_ReturnValue                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Roll_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Pitch_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::Scale_Joint_Rotation_Function(const struct FRotator& Scale, class FName TargetBone, class FName ReferenceBone, class USkinnedMeshComponent* SkelMeshComponent, class UObject* __WorldContext, struct FRotator* FinalRotation, struct FRotator* OriginalRotation, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FTransform& CallFunc_GetDeltaTransformFromRefPose_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_2, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2, float CallFunc_MakeRotator_Roll_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "Scale Joint Rotation Function");

	Params::UFortAnimationBPFunctionLibrary_C_Scale_Joint_Rotation_Function_Params Parms;

	Parms.Scale = Scale;
	Parms.TargetBone = TargetBone;
	Parms.ReferenceBone = ReferenceBone;
	Parms.SkelMeshComponent = SkelMeshComponent;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_GetDeltaTransformFromRefPose_ReturnValue = CallFunc_GetDeltaTransformFromRefPose_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast_2 = CallFunc_Multiply_DoubleDouble_B_ImplicitCast_2;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2;
	Parms.CallFunc_MakeRotator_Roll_ImplicitCast = CallFunc_MakeRotator_Roll_ImplicitCast;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;
	Parms.CallFunc_MakeRotator_Pitch_ImplicitCast = CallFunc_MakeRotator_Pitch_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (FinalRotation != nullptr)
		*FinalRotation = Parms.FinalRotation;

	if (OriginalRotation != nullptr)
		*OriginalRotation = Parms.OriginalRotation;

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Adjust Emote Vehicle Wheel Rotation
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Owning_Actor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CurrentWheelRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CurrentActorRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             NewActorRotation                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewWheelRotation                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_NewActorRotation_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::Adjust_Emote_Vehicle_Wheel_Rotation(class AActor* Owning_Actor, double CurrentWheelRotation, double DeltaTime, double CurrentActorRotation, class UObject* __WorldContext, double* NewActorRotation, double* NewWheelRotation, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_FInterpTo_ReturnValue, double K2Node_FunctionResult_NewActorRotation_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "Adjust Emote Vehicle Wheel Rotation");

	Params::UFortAnimationBPFunctionLibrary_C_Adjust_Emote_Vehicle_Wheel_Rotation_Params Parms;

	Parms.Owning_Actor = Owning_Actor;
	Parms.CurrentWheelRotation = CurrentWheelRotation;
	Parms.DeltaTime = DeltaTime;
	Parms.CurrentActorRotation = CurrentActorRotation;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.K2Node_FunctionResult_NewActorRotation_ImplicitCast = K2Node_FunctionResult_NewActorRotation_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (NewActorRotation != nullptr)
		*NewActorRotation = Parms.NewActorRotation;

	if (NewWheelRotation != nullptr)
		*NewWheelRotation = Parms.NewWheelRotation;

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Gravity Override Setter Function
// (Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomCharacterPartAnimInstance*CharacterPartAnimInstance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              SkelMeshComponent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGravityOverrideSettingStructGravityOverride_Settings                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             GameTimeInSeconds                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGravityOverrideSettingStructGravityOverride_Settings_Out                                     (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     GravityOverride_Out                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGravityOverrideSettingStructGravityOverrideSettings_Local                                    (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Gravity_Override_Local                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_AlignVectorWithJoint_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Random_Vector_Function_VectorOut                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::Gravity_Override_Setter_Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, class UMeshComponent* SkelMeshComponent, const struct FGravityOverrideSettingStruct& GravityOverride_Settings, double GameTimeInSeconds, class UObject* __WorldContext, struct FGravityOverrideSettingStruct* GravityOverride_Settings_Out, struct FVector* GravityOverride_Out, const struct FGravityOverrideSettingStruct& GravityOverrideSettings_Local, const struct FVector& Gravity_Override_Local, const struct FVector& CallFunc_AlignVectorWithJoint_ReturnValue, const struct FVector& CallFunc_Random_Vector_Function_VectorOut, const struct FVector& CallFunc_Add_VectorVector_ReturnValue)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "Gravity Override Setter Function");

	Params::UFortAnimationBPFunctionLibrary_C_Gravity_Override_Setter_Function_Params Parms;

	Parms.CharacterPartAnimInstance = CharacterPartAnimInstance;
	Parms.SkelMeshComponent = SkelMeshComponent;
	Parms.GravityOverride_Settings = GravityOverride_Settings;
	Parms.GameTimeInSeconds = GameTimeInSeconds;
	Parms.__WorldContext = __WorldContext;
	Parms.GravityOverrideSettings_Local = GravityOverrideSettings_Local;
	Parms.Gravity_Override_Local = Gravity_Override_Local;
	Parms.CallFunc_AlignVectorWithJoint_ReturnValue = CallFunc_AlignVectorWithJoint_ReturnValue;
	Parms.CallFunc_Random_Vector_Function_VectorOut = CallFunc_Random_Vector_Function_VectorOut;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (GravityOverride_Settings_Out != nullptr)
		*GravityOverride_Settings_Out = Parms.GravityOverride_Settings_Out;

	if (GravityOverride_Out != nullptr)
		*GravityOverride_Out = Parms.GravityOverride_Out;

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Gravity Override State Function
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomCharacterPartAnimInstance*CharacterPartAnimInstance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             GameTimeInSeconds                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGravityOverrideParamsStructGravityOverrideParams                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRBANParamsStruct           RBAN_Params                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DebugDraw                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        DebugJointName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     GravityOverride                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CurrentStateOut                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// struct FGravityOverrideSettingStructGravityOverrideSettingsOut                                       (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRBANSettingStruct          RBAN_SettingsOut                                                 (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      OwnerSkelMeshComp                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FRBANSettingStruct          RBAN_SettingsLocal                                               (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     GravityOverrideLocal                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGravityOverrideSettingStructGravityOverrideSettingsLocal                                     (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CurrentState                                                     (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerAnimInstance*     CallFunc_GetOwnerFortPlayerAnimInstance_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerAnimationInterface*CallFunc_GetOwnerAnimationInterface_ReturnValue                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortAnimInput_Zipline      CallFunc_GetZiplineInput_ReturnValue                             (ConstParm, NoDestructor)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_AlignVectorWithJoint_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Random_Vector_Function_VectorOut                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetPartSkeletalMeshComponent_ReturnValue                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::Gravity_Override_State_Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, double GameTimeInSeconds, struct FGravityOverrideParamsStruct& GravityOverrideParams, struct FRBANParamsStruct& RBAN_Params, bool DebugDraw, class FName DebugJointName, class UObject* __WorldContext, struct FVector* GravityOverride, class FString* CurrentStateOut, struct FGravityOverrideSettingStruct* GravityOverrideSettingsOut, struct FRBANSettingStruct* RBAN_SettingsOut, class USkeletalMeshComponent* OwnerSkelMeshComp, const struct FRBANSettingStruct& RBAN_SettingsLocal, const struct FVector& GravityOverrideLocal, const struct FGravityOverrideSettingStruct& GravityOverrideSettingsLocal, const class FString& CurrentState, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UFortPlayerAnimInstance* CallFunc_GetOwnerFortPlayerAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue, class UFortPlayerAnimationInterface* CallFunc_GetOwnerAnimationInterface_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FFortAnimInput_Zipline& CallFunc_GetZiplineInput_ReturnValue, double CallFunc_VSize_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, const struct FVector& CallFunc_AlignVectorWithJoint_ReturnValue, const struct FVector& CallFunc_Random_Vector_Function_VectorOut, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class USkeletalMeshComponent* CallFunc_GetPartSkeletalMeshComponent_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, TArray<class FName>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_2)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "Gravity Override State Function");

	Params::UFortAnimationBPFunctionLibrary_C_Gravity_Override_State_Function_Params Parms;

	Parms.CharacterPartAnimInstance = CharacterPartAnimInstance;
	Parms.GameTimeInSeconds = GameTimeInSeconds;
	Parms.GravityOverrideParams = GravityOverrideParams;
	Parms.RBAN_Params = RBAN_Params;
	Parms.DebugDraw = DebugDraw;
	Parms.DebugJointName = DebugJointName;
	Parms.__WorldContext = __WorldContext;
	Parms.OwnerSkelMeshComp = OwnerSkelMeshComp;
	Parms.RBAN_SettingsLocal = RBAN_SettingsLocal;
	Parms.GravityOverrideLocal = GravityOverrideLocal;
	Parms.GravityOverrideSettingsLocal = GravityOverrideSettingsLocal;
	Parms.CurrentState = CurrentState;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetOwnerFortPlayerAnimInstance_ReturnValue = CallFunc_GetOwnerFortPlayerAnimInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue = CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue;
	Parms.CallFunc_GetOwnerAnimationInterface_ReturnValue = CallFunc_GetOwnerAnimationInterface_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetZiplineInput_ReturnValue = CallFunc_GetZiplineInput_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_AlignVectorWithJoint_ReturnValue = CallFunc_AlignVectorWithJoint_ReturnValue;
	Parms.CallFunc_Random_Vector_Function_VectorOut = CallFunc_Random_Vector_Function_VectorOut;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetPartSkeletalMeshComponent_ReturnValue = CallFunc_GetPartSkeletalMeshComponent_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_3 = CallFunc_Greater_DoubleDouble_ReturnValue_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_2 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

	if (GravityOverride != nullptr)
		*GravityOverride = Parms.GravityOverride;

	if (CurrentStateOut != nullptr)
		*CurrentStateOut = Parms.CurrentStateOut;

	if (GravityOverrideSettingsOut != nullptr)
		*GravityOverrideSettingsOut = Parms.GravityOverrideSettingsOut;

	if (RBAN_SettingsOut != nullptr)
		*RBAN_SettingsOut = Parms.RBAN_SettingsOut;

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.FN_PSDPoseReaderFNC
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      StartJnt                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      EndJnt                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      PoseJnt                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// double                             Angle                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Debug                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Pose_output                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Psd_alpha                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_DirectionBetweenSockets_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_DirectionBetweenSockets_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetAngleBetweenTwoVectors_Angle__Degrees_               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::FN_PSDPoseReaderFNC(const class FString& StartJnt, const class FString& EndJnt, const class FString& PoseJnt, double Angle, bool Debug, class USkeletalMeshComponent* SkeletalMeshComponent, class UObject* __WorldContext, double* Pose_output, double Psd_alpha, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue_2, class FName CallFunc_Conv_StringToName_ReturnValue_3, const struct FVector& CallFunc_K2_DirectionBetweenSockets_ReturnValue, const struct FVector& CallFunc_K2_DirectionBetweenSockets_ReturnValue_1, double CallFunc_GetAngleBetweenTwoVectors_Angle__Degrees_, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "FN_PSDPoseReaderFNC");

	Params::UFortAnimationBPFunctionLibrary_C_FN_PSDPoseReaderFNC_Params Parms;

	Parms.StartJnt = StartJnt;
	Parms.EndJnt = EndJnt;
	Parms.PoseJnt = PoseJnt;
	Parms.Angle = Angle;
	Parms.Debug = Debug;
	Parms.SkeletalMeshComponent = SkeletalMeshComponent;
	Parms.__WorldContext = __WorldContext;
	Parms.Psd_alpha = Psd_alpha;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue_2 = CallFunc_Conv_StringToName_ReturnValue_2;
	Parms.CallFunc_Conv_StringToName_ReturnValue_3 = CallFunc_Conv_StringToName_ReturnValue_3;
	Parms.CallFunc_K2_DirectionBetweenSockets_ReturnValue = CallFunc_K2_DirectionBetweenSockets_ReturnValue;
	Parms.CallFunc_K2_DirectionBetweenSockets_ReturnValue_1 = CallFunc_K2_DirectionBetweenSockets_ReturnValue_1;
	Parms.CallFunc_GetAngleBetweenTwoVectors_Angle__Degrees_ = CallFunc_GetAngleBetweenTwoVectors_Angle__Degrees_;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Pose_output != nullptr)
		*Pose_output = Parms.Pose_output;

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Wind Gust Control Function
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomCharacterPartAnimInstance*CharacterPartAnimInstance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             GameTimeInSeconds                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        JointName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustSettingStruct      WindGustSettings                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct WindGustLocalSettings                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     GustStrengthWindVelocity_Out                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct WindGustLocalSettingsOut                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     GustStrength___WindVelocityLocal                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FWindGustSettingStruct      K2Node_MakeStruct_WindGustSettingStruct                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_WindGustGeneratorFunction_GustStrength___WindVelocity   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_WindGustGeneratorFunction_ClothGustLocalSettingsOut     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Random_Vector_Function_VectorOut                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::Wind_Gust_Control_Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, double DeltaTime, double GameTimeInSeconds, class FName JointName, const struct FWindGustSettingStruct& WindGustSettings, const struct FWindGustLocalSettingStruct& WindGustLocalSettings, class UObject* __WorldContext, struct FVector* GustStrengthWindVelocity_Out, struct FWindGustLocalSettingStruct* WindGustLocalSettingsOut, const struct FVector& GustStrength___WindVelocityLocal, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue, const struct FWindGustSettingStruct& K2Node_MakeStruct_WindGustSettingStruct, bool CallFunc_IsValid_ReturnValue, double CallFunc_WindGustGeneratorFunction_GustStrength___WindVelocity, const struct FWindGustLocalSettingStruct& CallFunc_WindGustGeneratorFunction_ClothGustLocalSettingsOut, const struct FVector& CallFunc_Random_Vector_Function_VectorOut, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "Wind Gust Control Function");

	Params::UFortAnimationBPFunctionLibrary_C_Wind_Gust_Control_Function_Params Parms;

	Parms.CharacterPartAnimInstance = CharacterPartAnimInstance;
	Parms.DeltaTime = DeltaTime;
	Parms.GameTimeInSeconds = GameTimeInSeconds;
	Parms.JointName = JointName;
	Parms.WindGustSettings = WindGustSettings;
	Parms.WindGustLocalSettings = WindGustLocalSettings;
	Parms.__WorldContext = __WorldContext;
	Parms.GustStrength___WindVelocityLocal = GustStrength___WindVelocityLocal;
	Parms.CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue = CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue;
	Parms.K2Node_MakeStruct_WindGustSettingStruct = K2Node_MakeStruct_WindGustSettingStruct;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_WindGustGeneratorFunction_GustStrength___WindVelocity = CallFunc_WindGustGeneratorFunction_GustStrength___WindVelocity;
	Parms.CallFunc_WindGustGeneratorFunction_ClothGustLocalSettingsOut = CallFunc_WindGustGeneratorFunction_ClothGustLocalSettingsOut;
	Parms.CallFunc_Random_Vector_Function_VectorOut = CallFunc_Random_Vector_Function_VectorOut;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (GustStrengthWindVelocity_Out != nullptr)
		*GustStrengthWindVelocity_Out = Parms.GustStrengthWindVelocity_Out;

	if (WindGustLocalSettingsOut != nullptr)
		*WindGustLocalSettingsOut = Parms.WindGustLocalSettingsOut;

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.WindGustGeneratorFunction
// (Static, Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustSettingStruct      GustSettings                                                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct ClothGustLocalSettings                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             GustStrength___WindVelocity                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct ClothGustLocalSettingsOut                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ActualTime                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     GustDirectionWeightLocal                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ElapsedTimeLocal                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             FinalGustStrengthLocal                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             GustDurationLocal                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             GustStrengthLocal                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             TimeBetweenGustsLocal                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DeltaTimeLocal                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PerlinNoise1D_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PerlinNoise1D_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct K2Node_MakeStruct_WindGustLocalSettingStruct                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UnclampedLerp_Return_Value                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UnclampedLerp_Return_Value_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UnclampedLerp_Return_Value_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PerlinNoise1D_Value_ImplicitCast                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PerlinNoise1D_Value_ImplicitCast_1                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_ElapsedTimeLocal_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_TimeBetweenGustsLocal_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_GustStrengthLocal_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_GustDurationLocal_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_FinalGustStrengthLocal_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UnclampedLerp_A_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UnclampedLerp_B_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UnclampedLerp_A_ImplicitCast_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UnclampedLerp_B_ImplicitCast_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UnclampedLerp_A_ImplicitCast_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UnclampedLerp_B_ImplicitCast_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_Min_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_Max_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_Min_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_Max_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_ElapsedTime_48_9A24DA0842E21D5736699499F1DE1171_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_TimeBetweenGusts_54_E1D59EA94088FB83508636942434066D_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_GustStrength_55_7788D1D04920E9BC2F96FCBDDCA7C33A_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_GustDuration_56_E42A0C8341E10ACAC2016FA7F726B406_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_FinalGustStrengthLocal_57_BD76FBFF47687A7C38D40EAD653D5618_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::WindGustGeneratorFunction(double DeltaTime, const struct FWindGustSettingStruct& GustSettings, const struct FWindGustLocalSettingStruct& ClothGustLocalSettings, class UObject* __WorldContext, double* GustStrength___WindVelocity, struct FWindGustLocalSettingStruct* ClothGustLocalSettingsOut, double ActualTime, const struct FVector& GustDirectionWeightLocal, double ElapsedTimeLocal, double FinalGustStrengthLocal, double GustDurationLocal, double GustStrengthLocal, double TimeBetweenGustsLocal, double DeltaTimeLocal, double CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_PerlinNoise1D_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_PerlinNoise1D_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FWindGustLocalSettingStruct& K2Node_MakeStruct_WindGustLocalSettingStruct, double CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_RandomFloat_ReturnValue, double CallFunc_UnclampedLerp_Return_Value, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_FInterpTo_ReturnValue, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_RandomFloat_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue_2, double CallFunc_UnclampedLerp_Return_Value_1, double CallFunc_FInterpTo_ReturnValue_3, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, double CallFunc_RandomFloat_ReturnValue_2, double CallFunc_UnclampedLerp_Return_Value_2, float CallFunc_PerlinNoise1D_Value_ImplicitCast, float CallFunc_PerlinNoise1D_Value_ImplicitCast_1, double K2Node_VariableSet_ElapsedTimeLocal_ImplicitCast, double K2Node_VariableSet_TimeBetweenGustsLocal_ImplicitCast, double K2Node_VariableSet_GustStrengthLocal_ImplicitCast, double K2Node_VariableSet_GustDurationLocal_ImplicitCast, double K2Node_VariableSet_FinalGustStrengthLocal_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double CallFunc_UnclampedLerp_A_ImplicitCast, double CallFunc_UnclampedLerp_B_ImplicitCast, double CallFunc_UnclampedLerp_A_ImplicitCast_1, double CallFunc_UnclampedLerp_B_ImplicitCast_1, double CallFunc_UnclampedLerp_A_ImplicitCast_2, double CallFunc_UnclampedLerp_B_ImplicitCast_2, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1, double CallFunc_RandomFloatInRange_Min_ImplicitCast, double CallFunc_RandomFloatInRange_Max_ImplicitCast, double CallFunc_RandomFloatInRange_Min_ImplicitCast_1, double CallFunc_RandomFloatInRange_Max_ImplicitCast_1, float K2Node_MakeStruct_ElapsedTime_48_9A24DA0842E21D5736699499F1DE1171_ImplicitCast, float K2Node_MakeStruct_TimeBetweenGusts_54_E1D59EA94088FB83508636942434066D_ImplicitCast, float K2Node_MakeStruct_GustStrength_55_7788D1D04920E9BC2F96FCBDDCA7C33A_ImplicitCast, float K2Node_MakeStruct_GustDuration_56_E42A0C8341E10ACAC2016FA7F726B406_ImplicitCast, float K2Node_MakeStruct_FinalGustStrengthLocal_57_BD76FBFF47687A7C38D40EAD653D5618_ImplicitCast)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "WindGustGeneratorFunction");

	Params::UFortAnimationBPFunctionLibrary_C_WindGustGeneratorFunction_Params Parms;

	Parms.DeltaTime = DeltaTime;
	Parms.GustSettings = GustSettings;
	Parms.ClothGustLocalSettings = ClothGustLocalSettings;
	Parms.__WorldContext = __WorldContext;
	Parms.ActualTime = ActualTime;
	Parms.GustDirectionWeightLocal = GustDirectionWeightLocal;
	Parms.ElapsedTimeLocal = ElapsedTimeLocal;
	Parms.FinalGustStrengthLocal = FinalGustStrengthLocal;
	Parms.GustDurationLocal = GustDurationLocal;
	Parms.GustStrengthLocal = GustStrengthLocal;
	Parms.TimeBetweenGustsLocal = TimeBetweenGustsLocal;
	Parms.DeltaTimeLocal = DeltaTimeLocal;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_PerlinNoise1D_ReturnValue = CallFunc_PerlinNoise1D_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_PerlinNoise1D_ReturnValue_1 = CallFunc_PerlinNoise1D_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.K2Node_MakeStruct_WindGustLocalSettingStruct = K2Node_MakeStruct_WindGustLocalSettingStruct;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_2 = CallFunc_Add_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_3 = CallFunc_Add_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_UnclampedLerp_Return_Value = CallFunc_UnclampedLerp_Return_Value;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;
	Parms.CallFunc_RandomFloat_ReturnValue_1 = CallFunc_RandomFloat_ReturnValue_1;
	Parms.CallFunc_FInterpTo_ReturnValue_2 = CallFunc_FInterpTo_ReturnValue_2;
	Parms.CallFunc_UnclampedLerp_Return_Value_1 = CallFunc_UnclampedLerp_Return_Value_1;
	Parms.CallFunc_FInterpTo_ReturnValue_3 = CallFunc_FInterpTo_ReturnValue_3;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_RandomFloat_ReturnValue_2 = CallFunc_RandomFloat_ReturnValue_2;
	Parms.CallFunc_UnclampedLerp_Return_Value_2 = CallFunc_UnclampedLerp_Return_Value_2;
	Parms.CallFunc_PerlinNoise1D_Value_ImplicitCast = CallFunc_PerlinNoise1D_Value_ImplicitCast;
	Parms.CallFunc_PerlinNoise1D_Value_ImplicitCast_1 = CallFunc_PerlinNoise1D_Value_ImplicitCast_1;
	Parms.K2Node_VariableSet_ElapsedTimeLocal_ImplicitCast = K2Node_VariableSet_ElapsedTimeLocal_ImplicitCast;
	Parms.K2Node_VariableSet_TimeBetweenGustsLocal_ImplicitCast = K2Node_VariableSet_TimeBetweenGustsLocal_ImplicitCast;
	Parms.K2Node_VariableSet_GustStrengthLocal_ImplicitCast = K2Node_VariableSet_GustStrengthLocal_ImplicitCast;
	Parms.K2Node_VariableSet_GustDurationLocal_ImplicitCast = K2Node_VariableSet_GustDurationLocal_ImplicitCast;
	Parms.K2Node_VariableSet_FinalGustStrengthLocal_ImplicitCast = K2Node_VariableSet_FinalGustStrengthLocal_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_1 = CallFunc_Add_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_UnclampedLerp_A_ImplicitCast = CallFunc_UnclampedLerp_A_ImplicitCast;
	Parms.CallFunc_UnclampedLerp_B_ImplicitCast = CallFunc_UnclampedLerp_B_ImplicitCast;
	Parms.CallFunc_UnclampedLerp_A_ImplicitCast_1 = CallFunc_UnclampedLerp_A_ImplicitCast_1;
	Parms.CallFunc_UnclampedLerp_B_ImplicitCast_1 = CallFunc_UnclampedLerp_B_ImplicitCast_1;
	Parms.CallFunc_UnclampedLerp_A_ImplicitCast_2 = CallFunc_UnclampedLerp_A_ImplicitCast_2;
	Parms.CallFunc_UnclampedLerp_B_ImplicitCast_2 = CallFunc_UnclampedLerp_B_ImplicitCast_2;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1;
	Parms.CallFunc_RandomFloatInRange_Min_ImplicitCast = CallFunc_RandomFloatInRange_Min_ImplicitCast;
	Parms.CallFunc_RandomFloatInRange_Max_ImplicitCast = CallFunc_RandomFloatInRange_Max_ImplicitCast;
	Parms.CallFunc_RandomFloatInRange_Min_ImplicitCast_1 = CallFunc_RandomFloatInRange_Min_ImplicitCast_1;
	Parms.CallFunc_RandomFloatInRange_Max_ImplicitCast_1 = CallFunc_RandomFloatInRange_Max_ImplicitCast_1;
	Parms.K2Node_MakeStruct_ElapsedTime_48_9A24DA0842E21D5736699499F1DE1171_ImplicitCast = K2Node_MakeStruct_ElapsedTime_48_9A24DA0842E21D5736699499F1DE1171_ImplicitCast;
	Parms.K2Node_MakeStruct_TimeBetweenGusts_54_E1D59EA94088FB83508636942434066D_ImplicitCast = K2Node_MakeStruct_TimeBetweenGusts_54_E1D59EA94088FB83508636942434066D_ImplicitCast;
	Parms.K2Node_MakeStruct_GustStrength_55_7788D1D04920E9BC2F96FCBDDCA7C33A_ImplicitCast = K2Node_MakeStruct_GustStrength_55_7788D1D04920E9BC2F96FCBDDCA7C33A_ImplicitCast;
	Parms.K2Node_MakeStruct_GustDuration_56_E42A0C8341E10ACAC2016FA7F726B406_ImplicitCast = K2Node_MakeStruct_GustDuration_56_E42A0C8341E10ACAC2016FA7F726B406_ImplicitCast;
	Parms.K2Node_MakeStruct_FinalGustStrengthLocal_57_BD76FBFF47687A7C38D40EAD653D5618_ImplicitCast = K2Node_MakeStruct_FinalGustStrengthLocal_57_BD76FBFF47687A7C38D40EAD653D5618_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (GustStrength___WindVelocity != nullptr)
		*GustStrength___WindVelocity = Parms.GustStrength___WindVelocity;

	if (ClothGustLocalSettingsOut != nullptr)
		*ClothGustLocalSettingsOut = Parms.ClothGustLocalSettingsOut;

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Play Transformation Montage
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             FortPlayerPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_Play_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::Play_Transformation_Montage(class AFortPlayerPawn* FortPlayerPawn, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "Play Transformation Montage");

	Params::UFortAnimationBPFunctionLibrary_C_Play_Transformation_Montage_Params Parms;

	Parms.FortPlayerPawn = FortPlayerPawn;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_Montage_Play_ReturnValue = CallFunc_Montage_Play_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Clear Transformation Montage
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             FortPlayerPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::Clear_Transformation_Montage(class AFortPlayerPawn* FortPlayerPawn, class UObject* __WorldContext)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "Clear Transformation Montage");

	Params::UFortAnimationBPFunctionLibrary_C_Clear_Transformation_Montage_Params Parms;

	Parms.FortPlayerPawn = FortPlayerPawn;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Set Transformation Montage
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             FortPlayerPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             StartTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_TransformationMontageStartTime_ImplicitCast   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::Set_Transformation_Montage(class AFortPlayerPawn* FortPlayerPawn, class UAnimMontage* Montage, double StartTime, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, float K2Node_VariableSet_TransformationMontageStartTime_ImplicitCast)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "Set Transformation Montage");

	Params::UFortAnimationBPFunctionLibrary_C_Set_Transformation_Montage_Params Parms;

	Parms.FortPlayerPawn = FortPlayerPawn;
	Parms.Montage = Montage;
	Parms.StartTime = StartTime;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_VariableSet_TransformationMontageStartTime_ImplicitCast = K2Node_VariableSet_TransformationMontageStartTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Cloth Controller Setter Function
// (Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomCharacterPartAnimInstance*CharacterPartAnimInstance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FClothSettingStruct         Cloth_Settings                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FClothSettingStruct         Cloth_Settings_Out                                               (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Lift_Coefficient_Local                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Drag_Coefficient_Local                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Gravity_Override_Local                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Fictitious_Angular_Scale_Local                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Angular_Velocity_Scale_Local                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Linear_Velocity_Scale_Local                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_AlignVectorWithJoint_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothSettingStruct         K2Node_MakeStruct_ClothSettingStruct                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Angular_Velocity_Scale_Local_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Fictitious_Angular_Scale_Local_ImplicitCast   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_FictitiousAngularScale_10_C5F4D16F48D0BEDC3F0FA38B2648511B_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_AngularVelocityScale_6_6A3DFE4A481AD4D7CB18D79F95CC88E8_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::Cloth_Controller_Setter_Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, const struct FClothSettingStruct& Cloth_Settings, class UObject* __WorldContext, struct FClothSettingStruct* Cloth_Settings_Out, const struct FVector2D& Lift_Coefficient_Local, const struct FVector2D& Drag_Coefficient_Local, const struct FVector& Gravity_Override_Local, double Fictitious_Angular_Scale_Local, double Angular_Velocity_Scale_Local, const struct FVector& Linear_Velocity_Scale_Local, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_AlignVectorWithJoint_ReturnValue, const struct FClothSettingStruct& K2Node_MakeStruct_ClothSettingStruct, double K2Node_VariableSet_Angular_Velocity_Scale_Local_ImplicitCast, double K2Node_VariableSet_Fictitious_Angular_Scale_Local_ImplicitCast, float K2Node_MakeStruct_FictitiousAngularScale_10_C5F4D16F48D0BEDC3F0FA38B2648511B_ImplicitCast, float K2Node_MakeStruct_AngularVelocityScale_6_6A3DFE4A481AD4D7CB18D79F95CC88E8_ImplicitCast)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "Cloth Controller Setter Function");

	Params::UFortAnimationBPFunctionLibrary_C_Cloth_Controller_Setter_Function_Params Parms;

	Parms.CharacterPartAnimInstance = CharacterPartAnimInstance;
	Parms.Cloth_Settings = Cloth_Settings;
	Parms.__WorldContext = __WorldContext;
	Parms.Lift_Coefficient_Local = Lift_Coefficient_Local;
	Parms.Drag_Coefficient_Local = Drag_Coefficient_Local;
	Parms.Gravity_Override_Local = Gravity_Override_Local;
	Parms.Fictitious_Angular_Scale_Local = Fictitious_Angular_Scale_Local;
	Parms.Angular_Velocity_Scale_Local = Angular_Velocity_Scale_Local;
	Parms.Linear_Velocity_Scale_Local = Linear_Velocity_Scale_Local;
	Parms.CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue = CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AlignVectorWithJoint_ReturnValue = CallFunc_AlignVectorWithJoint_ReturnValue;
	Parms.K2Node_MakeStruct_ClothSettingStruct = K2Node_MakeStruct_ClothSettingStruct;
	Parms.K2Node_VariableSet_Angular_Velocity_Scale_Local_ImplicitCast = K2Node_VariableSet_Angular_Velocity_Scale_Local_ImplicitCast;
	Parms.K2Node_VariableSet_Fictitious_Angular_Scale_Local_ImplicitCast = K2Node_VariableSet_Fictitious_Angular_Scale_Local_ImplicitCast;
	Parms.K2Node_MakeStruct_FictitiousAngularScale_10_C5F4D16F48D0BEDC3F0FA38B2648511B_ImplicitCast = K2Node_MakeStruct_FictitiousAngularScale_10_C5F4D16F48D0BEDC3F0FA38B2648511B_ImplicitCast;
	Parms.K2Node_MakeStruct_AngularVelocityScale_6_6A3DFE4A481AD4D7CB18D79F95CC88E8_ImplicitCast = K2Node_MakeStruct_AngularVelocityScale_6_6A3DFE4A481AD4D7CB18D79F95CC88E8_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Cloth_Settings_Out != nullptr)
		*Cloth_Settings_Out = Parms.Cloth_Settings_Out;

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Cloth Controller Function
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomCharacterPartAnimInstance*CharacterPartAnimInstance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      ClothingAssetName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FClothParamsStruct          Cloth_Paramaters                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothCoreSettingStruct     Cloth_Core_Settings                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ClothUpAxis                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OnGround_Moving_SpeedLimit                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OnGround_Moving_AngularVel_Max                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OnGround_Moving_FictitiousVel_Max                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LinVelScale_FwdBwd_Clamp                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LinVelScale_UpDwn_Clamp                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             GameTimeInSeconds                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustParamsStruct       WindGustsParams                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct WindGustLocalSettings                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CurrentStateOut                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// struct FClothSettingStruct         Cloth_Settings_Out                                               (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothCoreSettingStruct     Cloth_Core_Settings_Out                                          (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustSettingStruct      WindGustSettings_Out                                             (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct WindGustLocalSettings_Out                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     GustStrength___WindVelocityOut                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LinearVelVector_DELETE_LATER                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   OnGroundMoving_LiftCoefficientLocal                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   OnGroundMoving_DragCoefficientLocal                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CurrentState                                                     (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// struct FWindGustSettingStruct      WindGustSettingsLocal                                            (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustParamsStruct       WindGustsParamsLocal                                             (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     MovementLinearVelVector_Local                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ClothUpAxis_Local                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     GustStrength___WindVelocityLocal                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct WindGustLocalSettings_Local                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             GameTimeInSecondsLocal                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DeltaTimeLocal                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OnGround_Moving_FictitiousVel                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OnGround_Moving_AngularVel                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothCoreSettingStruct     Cloth_Core_Settings_Local                                        (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothSettingStruct         Cloth_Settings_Local                                             (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothParamsStruct          Cloth_Params_Local                                               (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ClothingAssetName_Local                                          (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// double                             Player_Forward_Vector_scaled_for_jump_Local                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Player_Forward_Vector_Local                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChaosClothingInteractor*    ChaosClothingInteractor                                          (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UCustomCharacterPartAnimInstance*CharacterPartAnimInstanceLocal                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothSettingStruct         CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothSettingStruct         CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_1   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_2   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothSettingStruct         CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_2   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerAnimInstance*     CallFunc_GetOwnerFortPlayerAnimInstance_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerAnimInstance*     CallFunc_GetOwnerFortPlayerAnimInstance_ReturnValue_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerAnimationInterface*CallFunc_GetOwnerAnimationInterface_ReturnValue                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortAnimInput_Zipline      CallFunc_GetZiplineInput_ReturnValue                             (ConstParm, NoDestructor)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Player_Movement_Function_X_Movement                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Player_Movement_Function_Y_Movement                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Player_Movement_Function_Z_Movement                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwningComponent_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UClothingSimulationInteractor*CallFunc_GetClothingSimulationInteractor_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClothingInteractor*         CallFunc_GetClothingInteractor_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UChaosClothingInteractor*    K2Node_DynamicCast_AsChaos_Clothing_Interactor                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Cloth_Controller_Helper_Scale_For_Player_Movement_LinearVelVectorOut(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothSettingStruct         CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_3   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothSettingStruct         CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_4   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothSettingStruct         CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_5   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothSettingStruct         CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_6   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothSettingStruct         CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_7   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_3   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_4(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_4   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_5(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_5   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothSettingStruct         CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_8   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothSettingStruct         CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_9   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_6(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_6   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_7(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_7   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_8(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_8   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_9(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_9   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothControllerPropertiesMapCallFunc_ClothControllerFindCharacterProperties_OutPropertiesMap ()
// class FName                        CallFunc_ClothControllerStaticFindCharacterState_OutCharacterStateName(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FClothParameters            CallFunc_Cloth_Controller_Convert_To_Nativized_Parameters_Cloth_Parameters_Nativized(NoDestructor)
// struct FWindGustParameters         CallFunc_Cloth_Controller_Convert_To_Nativized_Parameters_Wind_Parameters_Nativized(NoDestructor)
// struct FClothCoreSettings          CallFunc_Cloth_Controller_Convert_To_Nativized_Parameters_ClothCoreSettings(NoDestructor)
// struct FWindGustSettings           CallFunc_Cloth_Controller_Convert_To_Nativized_Parameters_Wind_Settings_Nativized(ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_ClothControllerDynamicParameterAdjustment_OutLinearVelocityScale(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothParameters            CallFunc_ClothControllerDynamicParameterAdjustment_OutClothSettings(NoDestructor)
// struct FClothSettingStruct         CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_10  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothSettingStruct         CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_11  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_10(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_10  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_11(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_11  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothSettingStruct         CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_12  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_12(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_12  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothSettingStruct         CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_13  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothSettingStruct         CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_14  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_13(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_13  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothSettingStruct         CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_15  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_14(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_14  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_15(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_15  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothSettingStruct         K2Node_MakeStruct_ClothSettingStruct                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothSettingStruct         CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_16  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_16(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_16  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_17(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_17  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothSettingStruct         CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_17  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothSettingStruct         CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_18  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_18(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustLocalSettingStruct CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_18  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_ClothControllerWindGustControl_OutWindGustVector        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWindGustSettings           CallFunc_ClothControllerWindGustControl_OutWindGustLocalSettings (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWindGustLocalSettingStruct K2Node_MakeStruct_WindGustLocalSettingStruct                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothParameters            CallFunc_ClothControllerWriteToSimulation_OutWorldSpaceClothSettings(NoDestructor)
// struct FVector                     CallFunc_ClothControllerWriteToSimulation_OutWorldSpaceWindVelocity(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FClothSettingStruct         K2Node_MakeStruct_ClothSettingStruct_1                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_A_ImplicitCast                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_OnGround_Moving_AngularVel_ImplicitCast       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_OnGround_Moving_FictitiousVel_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClothControllerFindCharacterProperties_HighRotationRateThreshold_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_FictitiousAngularScale_10_C5F4D16F48D0BEDC3F0FA38B2648511B_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_AngularVelocityScale_6_6A3DFE4A481AD4D7CB18D79F95CC88E8_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClothControllerWindGustControl_DeltaTime_ImplicitCast   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClothControllerWindGustControl_GameTime_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::Cloth_Controller_Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, const class FString& ClothingAssetName, const struct FClothParamsStruct& Cloth_Paramaters, const struct FClothCoreSettingStruct& Cloth_Core_Settings, const struct FVector& ClothUpAxis, double OnGround_Moving_SpeedLimit, double OnGround_Moving_AngularVel_Max, double OnGround_Moving_FictitiousVel_Max, double LinVelScale_FwdBwd_Clamp, double LinVelScale_UpDwn_Clamp, double DeltaTime, double GameTimeInSeconds, const struct FWindGustParamsStruct& WindGustsParams, const struct FWindGustLocalSettingStruct& WindGustLocalSettings, class UObject* __WorldContext, class FString* CurrentStateOut, struct FClothSettingStruct* Cloth_Settings_Out, struct FClothCoreSettingStruct* Cloth_Core_Settings_Out, struct FWindGustSettingStruct* WindGustSettings_Out, struct FWindGustLocalSettingStruct* WindGustLocalSettings_Out, struct FVector* GustStrength___WindVelocityOut, struct FVector* LinearVelVector_DELETE_LATER, const struct FVector2D& OnGroundMoving_LiftCoefficientLocal, const struct FVector2D& OnGroundMoving_DragCoefficientLocal, const class FString& CurrentState, const struct FWindGustSettingStruct& WindGustSettingsLocal, const struct FWindGustParamsStruct& WindGustsParamsLocal, const struct FVector& MovementLinearVelVector_Local, const struct FVector& ClothUpAxis_Local, const struct FVector& GustStrength___WindVelocityLocal, const struct FWindGustLocalSettingStruct& WindGustLocalSettings_Local, double GameTimeInSecondsLocal, double DeltaTimeLocal, double OnGround_Moving_FictitiousVel, double OnGround_Moving_AngularVel, const struct FClothCoreSettingStruct& Cloth_Core_Settings_Local, const struct FClothSettingStruct& Cloth_Settings_Local, const struct FClothParamsStruct& Cloth_Params_Local, const class FString& ClothingAssetName_Local, double Player_Forward_Vector_scaled_for_jump_Local, double Player_Forward_Vector_Local, class UChaosClothingInteractor* ChaosClothingInteractor, class UCustomCharacterPartAnimInstance* CharacterPartAnimInstanceLocal, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FClothSettingStruct& CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out, const struct FVector& CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out, const struct FWindGustLocalSettingStruct& CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut, const struct FClothSettingStruct& CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_1, const struct FVector& CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_1, const struct FWindGustLocalSettingStruct& CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_1, const struct FVector& CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_2, const struct FWindGustLocalSettingStruct& CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_2, const struct FClothSettingStruct& CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_2, class UFortPlayerAnimInstance* CallFunc_GetOwnerFortPlayerAnimInstance_ReturnValue, class UFortPlayerAnimInstance* CallFunc_GetOwnerFortPlayerAnimInstance_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, class UFortPlayerAnimationInterface* CallFunc_GetOwnerAnimationInterface_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_VSize_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, const struct FFortAnimInput_Zipline& CallFunc_GetZiplineInput_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Abs_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, double CallFunc_Player_Movement_Function_X_Movement, double CallFunc_Player_Movement_Function_Y_Movement, double CallFunc_Player_Movement_Function_Z_Movement, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, class UClothingSimulationInteractor* CallFunc_GetClothingSimulationInteractor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UClothingInteractor* CallFunc_GetClothingInteractor_ReturnValue, class UChaosClothingInteractor* K2Node_DynamicCast_AsChaos_Clothing_Interactor, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Cloth_Controller_Helper_Scale_For_Player_Movement_LinearVelVectorOut, const struct FClothSettingStruct& CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_3, const struct FClothSettingStruct& CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_4, const struct FClothSettingStruct& CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_5, const struct FClothSettingStruct& CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_6, const struct FClothSettingStruct& CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_7, const struct FVector& CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_3, const struct FWindGustLocalSettingStruct& CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_3, const struct FVector& CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_4, const struct FWindGustLocalSettingStruct& CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_4, const struct FVector& CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_5, const struct FWindGustLocalSettingStruct& CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_5, const struct FClothSettingStruct& CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_8, const struct FClothSettingStruct& CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_9, bool CallFunc_Greater_DoubleDouble_ReturnValue_4, const struct FVector& CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_6, const struct FWindGustLocalSettingStruct& CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_6, const struct FVector& CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_7, const struct FWindGustLocalSettingStruct& CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_7, const struct FVector& CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_8, const struct FWindGustLocalSettingStruct& CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_8, const struct FVector& CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_9, const struct FWindGustLocalSettingStruct& CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_9, const struct FClothControllerPropertiesMap& CallFunc_ClothControllerFindCharacterProperties_OutPropertiesMap, class FName CallFunc_ClothControllerStaticFindCharacterState_OutCharacterStateName, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct FClothParameters& CallFunc_Cloth_Controller_Convert_To_Nativized_Parameters_Cloth_Parameters_Nativized, const struct FWindGustParameters& CallFunc_Cloth_Controller_Convert_To_Nativized_Parameters_Wind_Parameters_Nativized, const struct FClothCoreSettings& CallFunc_Cloth_Controller_Convert_To_Nativized_Parameters_ClothCoreSettings, const struct FWindGustSettings& CallFunc_Cloth_Controller_Convert_To_Nativized_Parameters_Wind_Settings_Nativized, const struct FVector& CallFunc_ClothControllerDynamicParameterAdjustment_OutLinearVelocityScale, const struct FClothParameters& CallFunc_ClothControllerDynamicParameterAdjustment_OutClothSettings, const struct FClothSettingStruct& CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_10, const struct FClothSettingStruct& CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_11, const struct FVector& CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_10, const struct FWindGustLocalSettingStruct& CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_10, const struct FVector& CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_11, const struct FWindGustLocalSettingStruct& CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_11, const struct FClothSettingStruct& CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_12, const struct FVector& CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_12, const struct FWindGustLocalSettingStruct& CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_12, const struct FClothSettingStruct& CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_13, const struct FClothSettingStruct& CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_14, const struct FVector& CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_13, const struct FWindGustLocalSettingStruct& CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_13, const struct FClothSettingStruct& CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_15, const struct FVector& CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_14, const struct FWindGustLocalSettingStruct& CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_14, const struct FVector& CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_15, const struct FWindGustLocalSettingStruct& CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_15, const struct FClothSettingStruct& K2Node_MakeStruct_ClothSettingStruct, const struct FClothSettingStruct& CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_16, const struct FVector& CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_16, const struct FWindGustLocalSettingStruct& CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_16, const struct FVector& CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_17, const struct FWindGustLocalSettingStruct& CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_17, const struct FClothSettingStruct& CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_17, const struct FClothSettingStruct& CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_18, const struct FVector& CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_18, const struct FWindGustLocalSettingStruct& CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_18, const struct FVector& CallFunc_ClothControllerWindGustControl_OutWindGustVector, const struct FWindGustSettings& CallFunc_ClothControllerWindGustControl_OutWindGustLocalSettings, const struct FWindGustLocalSettingStruct& K2Node_MakeStruct_WindGustLocalSettingStruct, const struct FClothParameters& CallFunc_ClothControllerWriteToSimulation_OutWorldSpaceClothSettings, const struct FVector& CallFunc_ClothControllerWriteToSimulation_OutWorldSpaceWindVelocity, const struct FClothSettingStruct& K2Node_MakeStruct_ClothSettingStruct_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, double CallFunc_Abs_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_2, double K2Node_VariableSet_OnGround_Moving_AngularVel_ImplicitCast, double K2Node_VariableSet_OnGround_Moving_FictitiousVel_ImplicitCast, float CallFunc_ClothControllerFindCharacterProperties_HighRotationRateThreshold_ImplicitCast, float K2Node_MakeStruct_FictitiousAngularScale_10_C5F4D16F48D0BEDC3F0FA38B2648511B_ImplicitCast, float K2Node_MakeStruct_AngularVelocityScale_6_6A3DFE4A481AD4D7CB18D79F95CC88E8_ImplicitCast, float CallFunc_ClothControllerWindGustControl_DeltaTime_ImplicitCast, float CallFunc_ClothControllerWindGustControl_GameTime_ImplicitCast)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "Cloth Controller Function");

	Params::UFortAnimationBPFunctionLibrary_C_Cloth_Controller_Function_Params Parms;

	Parms.CharacterPartAnimInstance = CharacterPartAnimInstance;
	Parms.ClothingAssetName = ClothingAssetName;
	Parms.Cloth_Paramaters = Cloth_Paramaters;
	Parms.Cloth_Core_Settings = Cloth_Core_Settings;
	Parms.ClothUpAxis = ClothUpAxis;
	Parms.OnGround_Moving_SpeedLimit = OnGround_Moving_SpeedLimit;
	Parms.OnGround_Moving_AngularVel_Max = OnGround_Moving_AngularVel_Max;
	Parms.OnGround_Moving_FictitiousVel_Max = OnGround_Moving_FictitiousVel_Max;
	Parms.LinVelScale_FwdBwd_Clamp = LinVelScale_FwdBwd_Clamp;
	Parms.LinVelScale_UpDwn_Clamp = LinVelScale_UpDwn_Clamp;
	Parms.DeltaTime = DeltaTime;
	Parms.GameTimeInSeconds = GameTimeInSeconds;
	Parms.WindGustsParams = WindGustsParams;
	Parms.WindGustLocalSettings = WindGustLocalSettings;
	Parms.__WorldContext = __WorldContext;
	Parms.OnGroundMoving_LiftCoefficientLocal = OnGroundMoving_LiftCoefficientLocal;
	Parms.OnGroundMoving_DragCoefficientLocal = OnGroundMoving_DragCoefficientLocal;
	Parms.CurrentState = CurrentState;
	Parms.WindGustSettingsLocal = WindGustSettingsLocal;
	Parms.WindGustsParamsLocal = WindGustsParamsLocal;
	Parms.MovementLinearVelVector_Local = MovementLinearVelVector_Local;
	Parms.ClothUpAxis_Local = ClothUpAxis_Local;
	Parms.GustStrength___WindVelocityLocal = GustStrength___WindVelocityLocal;
	Parms.WindGustLocalSettings_Local = WindGustLocalSettings_Local;
	Parms.GameTimeInSecondsLocal = GameTimeInSecondsLocal;
	Parms.DeltaTimeLocal = DeltaTimeLocal;
	Parms.OnGround_Moving_FictitiousVel = OnGround_Moving_FictitiousVel;
	Parms.OnGround_Moving_AngularVel = OnGround_Moving_AngularVel;
	Parms.Cloth_Core_Settings_Local = Cloth_Core_Settings_Local;
	Parms.Cloth_Settings_Local = Cloth_Settings_Local;
	Parms.Cloth_Params_Local = Cloth_Params_Local;
	Parms.ClothingAssetName_Local = ClothingAssetName_Local;
	Parms.Player_Forward_Vector_scaled_for_jump_Local = Player_Forward_Vector_scaled_for_jump_Local;
	Parms.Player_Forward_Vector_Local = Player_Forward_Vector_Local;
	Parms.ChaosClothingInteractor = ChaosClothingInteractor;
	Parms.CharacterPartAnimInstanceLocal = CharacterPartAnimInstanceLocal;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out = CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out;
	Parms.CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out = CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out;
	Parms.CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut = CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut;
	Parms.CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_1 = CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_1;
	Parms.CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_1 = CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_1;
	Parms.CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_1 = CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_1;
	Parms.CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_2 = CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_2;
	Parms.CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_2 = CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_2;
	Parms.CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_2 = CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_2;
	Parms.CallFunc_GetOwnerFortPlayerAnimInstance_ReturnValue = CallFunc_GetOwnerFortPlayerAnimInstance_ReturnValue;
	Parms.CallFunc_GetOwnerFortPlayerAnimInstance_ReturnValue_1 = CallFunc_GetOwnerFortPlayerAnimInstance_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_GetOwnerAnimationInterface_ReturnValue = CallFunc_GetOwnerAnimationInterface_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetZiplineInput_ReturnValue = CallFunc_GetZiplineInput_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_3 = CallFunc_Greater_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Player_Movement_Function_X_Movement = CallFunc_Player_Movement_Function_X_Movement;
	Parms.CallFunc_Player_Movement_Function_Y_Movement = CallFunc_Player_Movement_Function_Y_Movement;
	Parms.CallFunc_Player_Movement_Function_Z_Movement = CallFunc_Player_Movement_Function_Z_Movement;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_GetOwningComponent_ReturnValue = CallFunc_GetOwningComponent_ReturnValue;
	Parms.CallFunc_GetClothingSimulationInteractor_ReturnValue = CallFunc_GetClothingSimulationInteractor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetClothingInteractor_ReturnValue = CallFunc_GetClothingInteractor_ReturnValue;
	Parms.K2Node_DynamicCast_AsChaos_Clothing_Interactor = K2Node_DynamicCast_AsChaos_Clothing_Interactor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Cloth_Controller_Helper_Scale_For_Player_Movement_LinearVelVectorOut = CallFunc_Cloth_Controller_Helper_Scale_For_Player_Movement_LinearVelVectorOut;
	Parms.CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_3 = CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_3;
	Parms.CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_4 = CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_4;
	Parms.CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_5 = CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_5;
	Parms.CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_6 = CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_6;
	Parms.CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_7 = CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_7;
	Parms.CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_3 = CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_3;
	Parms.CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_3 = CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_3;
	Parms.CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_4 = CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_4;
	Parms.CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_4 = CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_4;
	Parms.CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_5 = CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_5;
	Parms.CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_5 = CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_5;
	Parms.CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_8 = CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_8;
	Parms.CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_9 = CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_9;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_4 = CallFunc_Greater_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_6 = CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_6;
	Parms.CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_6 = CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_6;
	Parms.CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_7 = CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_7;
	Parms.CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_7 = CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_7;
	Parms.CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_8 = CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_8;
	Parms.CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_8 = CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_8;
	Parms.CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_9 = CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_9;
	Parms.CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_9 = CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_9;
	Parms.CallFunc_ClothControllerFindCharacterProperties_OutPropertiesMap = CallFunc_ClothControllerFindCharacterProperties_OutPropertiesMap;
	Parms.CallFunc_ClothControllerStaticFindCharacterState_OutCharacterStateName = CallFunc_ClothControllerStaticFindCharacterState_OutCharacterStateName;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Cloth_Controller_Convert_To_Nativized_Parameters_Cloth_Parameters_Nativized = CallFunc_Cloth_Controller_Convert_To_Nativized_Parameters_Cloth_Parameters_Nativized;
	Parms.CallFunc_Cloth_Controller_Convert_To_Nativized_Parameters_Wind_Parameters_Nativized = CallFunc_Cloth_Controller_Convert_To_Nativized_Parameters_Wind_Parameters_Nativized;
	Parms.CallFunc_Cloth_Controller_Convert_To_Nativized_Parameters_ClothCoreSettings = CallFunc_Cloth_Controller_Convert_To_Nativized_Parameters_ClothCoreSettings;
	Parms.CallFunc_Cloth_Controller_Convert_To_Nativized_Parameters_Wind_Settings_Nativized = CallFunc_Cloth_Controller_Convert_To_Nativized_Parameters_Wind_Settings_Nativized;
	Parms.CallFunc_ClothControllerDynamicParameterAdjustment_OutLinearVelocityScale = CallFunc_ClothControllerDynamicParameterAdjustment_OutLinearVelocityScale;
	Parms.CallFunc_ClothControllerDynamicParameterAdjustment_OutClothSettings = CallFunc_ClothControllerDynamicParameterAdjustment_OutClothSettings;
	Parms.CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_10 = CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_10;
	Parms.CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_11 = CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_11;
	Parms.CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_10 = CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_10;
	Parms.CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_10 = CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_10;
	Parms.CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_11 = CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_11;
	Parms.CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_11 = CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_11;
	Parms.CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_12 = CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_12;
	Parms.CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_12 = CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_12;
	Parms.CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_12 = CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_12;
	Parms.CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_13 = CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_13;
	Parms.CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_14 = CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_14;
	Parms.CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_13 = CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_13;
	Parms.CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_13 = CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_13;
	Parms.CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_15 = CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_15;
	Parms.CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_14 = CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_14;
	Parms.CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_14 = CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_14;
	Parms.CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_15 = CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_15;
	Parms.CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_15 = CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_15;
	Parms.K2Node_MakeStruct_ClothSettingStruct = K2Node_MakeStruct_ClothSettingStruct;
	Parms.CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_16 = CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_16;
	Parms.CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_16 = CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_16;
	Parms.CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_16 = CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_16;
	Parms.CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_17 = CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_17;
	Parms.CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_17 = CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_17;
	Parms.CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_17 = CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_17;
	Parms.CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_18 = CallFunc_Cloth_Controller_Setter_Function_Cloth_Settings_Out_18;
	Parms.CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_18 = CallFunc_Wind_Gust_Control_Function_GustStrengthWindVelocity_Out_18;
	Parms.CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_18 = CallFunc_Wind_Gust_Control_Function_WindGustLocalSettingsOut_18;
	Parms.CallFunc_ClothControllerWindGustControl_OutWindGustVector = CallFunc_ClothControllerWindGustControl_OutWindGustVector;
	Parms.CallFunc_ClothControllerWindGustControl_OutWindGustLocalSettings = CallFunc_ClothControllerWindGustControl_OutWindGustLocalSettings;
	Parms.K2Node_MakeStruct_WindGustLocalSettingStruct = K2Node_MakeStruct_WindGustLocalSettingStruct;
	Parms.CallFunc_ClothControllerWriteToSimulation_OutWorldSpaceClothSettings = CallFunc_ClothControllerWriteToSimulation_OutWorldSpaceClothSettings;
	Parms.CallFunc_ClothControllerWriteToSimulation_OutWorldSpaceWindVelocity = CallFunc_ClothControllerWriteToSimulation_OutWorldSpaceWindVelocity;
	Parms.K2Node_MakeStruct_ClothSettingStruct_1 = K2Node_MakeStruct_ClothSettingStruct_1;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Abs_A_ImplicitCast = CallFunc_Abs_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_2 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_2;
	Parms.K2Node_VariableSet_OnGround_Moving_AngularVel_ImplicitCast = K2Node_VariableSet_OnGround_Moving_AngularVel_ImplicitCast;
	Parms.K2Node_VariableSet_OnGround_Moving_FictitiousVel_ImplicitCast = K2Node_VariableSet_OnGround_Moving_FictitiousVel_ImplicitCast;
	Parms.CallFunc_ClothControllerFindCharacterProperties_HighRotationRateThreshold_ImplicitCast = CallFunc_ClothControllerFindCharacterProperties_HighRotationRateThreshold_ImplicitCast;
	Parms.K2Node_MakeStruct_FictitiousAngularScale_10_C5F4D16F48D0BEDC3F0FA38B2648511B_ImplicitCast = K2Node_MakeStruct_FictitiousAngularScale_10_C5F4D16F48D0BEDC3F0FA38B2648511B_ImplicitCast;
	Parms.K2Node_MakeStruct_AngularVelocityScale_6_6A3DFE4A481AD4D7CB18D79F95CC88E8_ImplicitCast = K2Node_MakeStruct_AngularVelocityScale_6_6A3DFE4A481AD4D7CB18D79F95CC88E8_ImplicitCast;
	Parms.CallFunc_ClothControllerWindGustControl_DeltaTime_ImplicitCast = CallFunc_ClothControllerWindGustControl_DeltaTime_ImplicitCast;
	Parms.CallFunc_ClothControllerWindGustControl_GameTime_ImplicitCast = CallFunc_ClothControllerWindGustControl_GameTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentStateOut != nullptr)
		*CurrentStateOut = Parms.CurrentStateOut;

	if (Cloth_Settings_Out != nullptr)
		*Cloth_Settings_Out = Parms.Cloth_Settings_Out;

	if (Cloth_Core_Settings_Out != nullptr)
		*Cloth_Core_Settings_Out = Parms.Cloth_Core_Settings_Out;

	if (WindGustSettings_Out != nullptr)
		*WindGustSettings_Out = Parms.WindGustSettings_Out;

	if (WindGustLocalSettings_Out != nullptr)
		*WindGustLocalSettings_Out = Parms.WindGustLocalSettings_Out;

	if (GustStrength___WindVelocityOut != nullptr)
		*GustStrength___WindVelocityOut = Parms.GustStrength___WindVelocityOut;

	if (LinearVelVector_DELETE_LATER != nullptr)
		*LinearVelVector_DELETE_LATER = Parms.LinearVelVector_DELETE_LATER;

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.RandomRotatorFunction
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             GameTimeInSeconds                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             PerlinScale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Frequency                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    Amplitude                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    Offset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             TimeOffset                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    RandomRotator                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             PerlinScaleLocal                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    HairRotator_01                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_GetRandomWindRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRandomWindRotator_GameTime_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRandomWindRotator_PerlinScale_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRandomWindRotator_TimeOffset_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::RandomRotatorFunction(double GameTimeInSeconds, double PerlinScale, const struct FRotator& Frequency, const struct FRotator& Amplitude, const struct FRotator& Offset, double TimeOffset, class UObject* __WorldContext, struct FRotator* RandomRotator, double PerlinScaleLocal, const struct FRotator& HairRotator_01, const struct FRotator& CallFunc_GetRandomWindRotator_ReturnValue, float CallFunc_GetRandomWindRotator_GameTime_ImplicitCast, float CallFunc_GetRandomWindRotator_PerlinScale_ImplicitCast, float CallFunc_GetRandomWindRotator_TimeOffset_ImplicitCast)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "RandomRotatorFunction");

	Params::UFortAnimationBPFunctionLibrary_C_RandomRotatorFunction_Params Parms;

	Parms.GameTimeInSeconds = GameTimeInSeconds;
	Parms.PerlinScale = PerlinScale;
	Parms.Frequency = Frequency;
	Parms.Amplitude = Amplitude;
	Parms.Offset = Offset;
	Parms.TimeOffset = TimeOffset;
	Parms.__WorldContext = __WorldContext;
	Parms.PerlinScaleLocal = PerlinScaleLocal;
	Parms.HairRotator_01 = HairRotator_01;
	Parms.CallFunc_GetRandomWindRotator_ReturnValue = CallFunc_GetRandomWindRotator_ReturnValue;
	Parms.CallFunc_GetRandomWindRotator_GameTime_ImplicitCast = CallFunc_GetRandomWindRotator_GameTime_ImplicitCast;
	Parms.CallFunc_GetRandomWindRotator_PerlinScale_ImplicitCast = CallFunc_GetRandomWindRotator_PerlinScale_ImplicitCast;
	Parms.CallFunc_GetRandomWindRotator_TimeOffset_ImplicitCast = CallFunc_GetRandomWindRotator_TimeOffset_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (RandomRotator != nullptr)
		*RandomRotator = Parms.RandomRotator;

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Player Movement Function
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomCharacterPartAnimInstance*CharacterPartAnimInstance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             X_Dot_Product                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Y_Dot_Product                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Z_Dot_Product                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DrawDebug                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Debug_Scalar                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             X_Movement                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Y_Movement                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Z_Movement                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DebugDrawLocal                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             Pawn                                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayerMovement_XMovement                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayerMovement_YMovement                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayerMovement_ZMovement                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayerMovement_XDotProductCoefficient_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayerMovement_YDotProductCoefficient_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayerMovement_ZDotProductCoefficient_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayerMovement_DebugScalar_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_X_Movement_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Y_Movement_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Z_Movement_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::Player_Movement_Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, double X_Dot_Product, double Y_Dot_Product, double Z_Dot_Product, bool DrawDebug, double Debug_Scalar, class UObject* __WorldContext, double* X_Movement, double* Y_Movement, double* Z_Movement, bool DebugDrawLocal, class AFortPlayerPawn* Pawn, float CallFunc_PlayerMovement_XMovement, float CallFunc_PlayerMovement_YMovement, float CallFunc_PlayerMovement_ZMovement, float CallFunc_PlayerMovement_XDotProductCoefficient_ImplicitCast, float CallFunc_PlayerMovement_YDotProductCoefficient_ImplicitCast, float CallFunc_PlayerMovement_ZDotProductCoefficient_ImplicitCast, float CallFunc_PlayerMovement_DebugScalar_ImplicitCast, double K2Node_FunctionResult_X_Movement_ImplicitCast, double K2Node_FunctionResult_Y_Movement_ImplicitCast, double K2Node_FunctionResult_Z_Movement_ImplicitCast)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "Player Movement Function");

	Params::UFortAnimationBPFunctionLibrary_C_Player_Movement_Function_Params Parms;

	Parms.CharacterPartAnimInstance = CharacterPartAnimInstance;
	Parms.X_Dot_Product = X_Dot_Product;
	Parms.Y_Dot_Product = Y_Dot_Product;
	Parms.Z_Dot_Product = Z_Dot_Product;
	Parms.DrawDebug = DrawDebug;
	Parms.Debug_Scalar = Debug_Scalar;
	Parms.__WorldContext = __WorldContext;
	Parms.DebugDrawLocal = DebugDrawLocal;
	Parms.Pawn = Pawn;
	Parms.CallFunc_PlayerMovement_XMovement = CallFunc_PlayerMovement_XMovement;
	Parms.CallFunc_PlayerMovement_YMovement = CallFunc_PlayerMovement_YMovement;
	Parms.CallFunc_PlayerMovement_ZMovement = CallFunc_PlayerMovement_ZMovement;
	Parms.CallFunc_PlayerMovement_XDotProductCoefficient_ImplicitCast = CallFunc_PlayerMovement_XDotProductCoefficient_ImplicitCast;
	Parms.CallFunc_PlayerMovement_YDotProductCoefficient_ImplicitCast = CallFunc_PlayerMovement_YDotProductCoefficient_ImplicitCast;
	Parms.CallFunc_PlayerMovement_ZDotProductCoefficient_ImplicitCast = CallFunc_PlayerMovement_ZDotProductCoefficient_ImplicitCast;
	Parms.CallFunc_PlayerMovement_DebugScalar_ImplicitCast = CallFunc_PlayerMovement_DebugScalar_ImplicitCast;
	Parms.K2Node_FunctionResult_X_Movement_ImplicitCast = K2Node_FunctionResult_X_Movement_ImplicitCast;
	Parms.K2Node_FunctionResult_Y_Movement_ImplicitCast = K2Node_FunctionResult_Y_Movement_ImplicitCast;
	Parms.K2Node_FunctionResult_Z_Movement_ImplicitCast = K2Node_FunctionResult_Z_Movement_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (X_Movement != nullptr)
		*X_Movement = Parms.X_Movement;

	if (Y_Movement != nullptr)
		*Y_Movement = Parms.Y_Movement;

	if (Z_Movement != nullptr)
		*Z_Movement = Parms.Z_Movement;

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Random Vector Function
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomCharacterPartAnimInstance*CharacterPartAnimInstance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              SkelMeshComponent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        JointName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             GameTimeInSeconds                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             TimeOffset                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             PerlinScale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Frequency                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Amplitude                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Offset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     VectorOut                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     VectorOut_Code                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             PerlinScaleLocal                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     UpVectorLocal                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     RightVectorLocal                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ForwardVectorLocal                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        JointNameLocal                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetRandomWindVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_AlignVectorWithJoint_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRandomWindVector_GameTime_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRandomWindVector_TimeOffset_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRandomWindVector_PerlinScale_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::Random_Vector_Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, class UMeshComponent* SkelMeshComponent, class FName JointName, double GameTimeInSeconds, double TimeOffset, double PerlinScale, const struct FVector& Frequency, const struct FVector& Amplitude, const struct FVector& Offset, class UObject* __WorldContext, struct FVector* VectorOut, const struct FVector& VectorOut_Code, double PerlinScaleLocal, const struct FVector& UpVectorLocal, const struct FVector& RightVectorLocal, const struct FVector& ForwardVectorLocal, class FName JointNameLocal, const struct FVector& CallFunc_GetRandomWindVector_ReturnValue, const struct FVector& CallFunc_AlignVectorWithJoint_ReturnValue, float CallFunc_GetRandomWindVector_GameTime_ImplicitCast, float CallFunc_GetRandomWindVector_TimeOffset_ImplicitCast, float CallFunc_GetRandomWindVector_PerlinScale_ImplicitCast)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "Random Vector Function");

	Params::UFortAnimationBPFunctionLibrary_C_Random_Vector_Function_Params Parms;

	Parms.CharacterPartAnimInstance = CharacterPartAnimInstance;
	Parms.SkelMeshComponent = SkelMeshComponent;
	Parms.JointName = JointName;
	Parms.GameTimeInSeconds = GameTimeInSeconds;
	Parms.TimeOffset = TimeOffset;
	Parms.PerlinScale = PerlinScale;
	Parms.Frequency = Frequency;
	Parms.Amplitude = Amplitude;
	Parms.Offset = Offset;
	Parms.__WorldContext = __WorldContext;
	Parms.VectorOut_Code = VectorOut_Code;
	Parms.PerlinScaleLocal = PerlinScaleLocal;
	Parms.UpVectorLocal = UpVectorLocal;
	Parms.RightVectorLocal = RightVectorLocal;
	Parms.ForwardVectorLocal = ForwardVectorLocal;
	Parms.JointNameLocal = JointNameLocal;
	Parms.CallFunc_GetRandomWindVector_ReturnValue = CallFunc_GetRandomWindVector_ReturnValue;
	Parms.CallFunc_AlignVectorWithJoint_ReturnValue = CallFunc_AlignVectorWithJoint_ReturnValue;
	Parms.CallFunc_GetRandomWindVector_GameTime_ImplicitCast = CallFunc_GetRandomWindVector_GameTime_ImplicitCast;
	Parms.CallFunc_GetRandomWindVector_TimeOffset_ImplicitCast = CallFunc_GetRandomWindVector_TimeOffset_ImplicitCast;
	Parms.CallFunc_GetRandomWindVector_PerlinScale_ImplicitCast = CallFunc_GetRandomWindVector_PerlinScale_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (VectorOut != nullptr)
		*VectorOut = Parms.VectorOut;

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.DrawVectorFromJointFunction
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             SkelMeshComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        JointName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LineEnd                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     JointOffset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                LineColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Thickness                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::DrawVectorFromJointFunction(class USceneComponent* SkelMeshComponent, class FName JointName, const struct FVector& LineEnd, const struct FVector& JointOffset, const struct FLinearColor& LineColor, double Thickness, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "DrawVectorFromJointFunction");

	Params::UFortAnimationBPFunctionLibrary_C_DrawVectorFromJointFunction_Params Parms;

	Parms.SkelMeshComponent = SkelMeshComponent;
	Parms.JointName = JointName;
	Parms.LineEnd = LineEnd;
	Parms.JointOffset = JointOffset;
	Parms.LineColor = LineColor;
	Parms.Thickness = Thickness;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.DrawJointDebugFunction
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             SkelMeshComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     JointOffset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                JointName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// double                             Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Thickness                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DebugDraw                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCustomCharacterPartAnimInstance*CharacterPartAnimInstanceLocal                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::DrawJointDebugFunction(class USceneComponent* SkelMeshComponent, const struct FVector& JointOffset, TArray<class FName>& JointName, double Scale, double Duration, double Thickness, bool DebugDraw, class UObject* __WorldContext, class UCustomCharacterPartAnimInstance* CharacterPartAnimInstanceLocal, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "DrawJointDebugFunction");

	Params::UFortAnimationBPFunctionLibrary_C_DrawJointDebugFunction_Params Parms;

	Parms.SkelMeshComponent = SkelMeshComponent;
	Parms.JointOffset = JointOffset;
	Parms.JointName = JointName;
	Parms.Scale = Scale;
	Parms.Duration = Duration;
	Parms.Thickness = Thickness;
	Parms.DebugDraw = DebugDraw;
	Parms.__WorldContext = __WorldContext;
	Parms.CharacterPartAnimInstanceLocal = CharacterPartAnimInstanceLocal;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.ComplexSimSpaceFunction
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomCharacterPartAnimInstance*CharacterPartAnimInstance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             InterpSpeedMax                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             PawnSpeedMax                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             RInterpErrorTolerance                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DebugDraw                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Sim_space_rotation_in                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               InComponentSpaceIn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InComponentSpaceLastFrameIn                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LockedOnSimSpaceIn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             InterpSpeedIn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Sim_space_rotation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               InComponentSpaceOut                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InComponentSpaceLastFrameOut                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LockedOnSimSpaceOut                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             InterpSpeedOut                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     RootLocation                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Interpolating_Out                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UsingComponentSpace_Out                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    SimSpaceRotation_Out                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectSimSpaceRotation_InterpTolerance_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectSimSpaceRotation_InterpSpeed_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectSimSpaceRotation_DeltaTime_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectSimSpaceRotation_PawnSpeedMax_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::ComplexSimSpaceFunction(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, double InterpSpeedMax, double PawnSpeedMax, double RInterpErrorTolerance, double DeltaTime, bool DebugDraw, const struct FRotator& Sim_space_rotation_in, bool InComponentSpaceIn, bool InComponentSpaceLastFrameIn, bool LockedOnSimSpaceIn, double InterpSpeedIn, class UObject* __WorldContext, struct FRotator* Sim_space_rotation, bool* InComponentSpaceOut, bool* InComponentSpaceLastFrameOut, bool* LockedOnSimSpaceOut, double* InterpSpeedOut, const struct FVector& RootLocation, bool Interpolating_Out, bool UsingComponentSpace_Out, const struct FRotator& SimSpaceRotation_Out, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_SelectSimSpaceRotation_InterpTolerance_ImplicitCast, float CallFunc_SelectSimSpaceRotation_InterpSpeed_ImplicitCast, float CallFunc_SelectSimSpaceRotation_DeltaTime_ImplicitCast, float CallFunc_SelectSimSpaceRotation_PawnSpeedMax_ImplicitCast)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "ComplexSimSpaceFunction");

	Params::UFortAnimationBPFunctionLibrary_C_ComplexSimSpaceFunction_Params Parms;

	Parms.CharacterPartAnimInstance = CharacterPartAnimInstance;
	Parms.InterpSpeedMax = InterpSpeedMax;
	Parms.PawnSpeedMax = PawnSpeedMax;
	Parms.RInterpErrorTolerance = RInterpErrorTolerance;
	Parms.DeltaTime = DeltaTime;
	Parms.DebugDraw = DebugDraw;
	Parms.Sim_space_rotation_in = Sim_space_rotation_in;
	Parms.InComponentSpaceIn = InComponentSpaceIn;
	Parms.InComponentSpaceLastFrameIn = InComponentSpaceLastFrameIn;
	Parms.LockedOnSimSpaceIn = LockedOnSimSpaceIn;
	Parms.InterpSpeedIn = InterpSpeedIn;
	Parms.__WorldContext = __WorldContext;
	Parms.RootLocation = RootLocation;
	Parms.Interpolating_Out = Interpolating_Out;
	Parms.UsingComponentSpace_Out = UsingComponentSpace_Out;
	Parms.SimSpaceRotation_Out = SimSpaceRotation_Out;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue = CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_SelectSimSpaceRotation_InterpTolerance_ImplicitCast = CallFunc_SelectSimSpaceRotation_InterpTolerance_ImplicitCast;
	Parms.CallFunc_SelectSimSpaceRotation_InterpSpeed_ImplicitCast = CallFunc_SelectSimSpaceRotation_InterpSpeed_ImplicitCast;
	Parms.CallFunc_SelectSimSpaceRotation_DeltaTime_ImplicitCast = CallFunc_SelectSimSpaceRotation_DeltaTime_ImplicitCast;
	Parms.CallFunc_SelectSimSpaceRotation_PawnSpeedMax_ImplicitCast = CallFunc_SelectSimSpaceRotation_PawnSpeedMax_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Sim_space_rotation != nullptr)
		*Sim_space_rotation = Parms.Sim_space_rotation;

	if (InComponentSpaceOut != nullptr)
		*InComponentSpaceOut = Parms.InComponentSpaceOut;

	if (InComponentSpaceLastFrameOut != nullptr)
		*InComponentSpaceLastFrameOut = Parms.InComponentSpaceLastFrameOut;

	if (LockedOnSimSpaceOut != nullptr)
		*LockedOnSimSpaceOut = Parms.LockedOnSimSpaceOut;

	if (InterpSpeedOut != nullptr)
		*InterpSpeedOut = Parms.InterpSpeedOut;

}


// Function FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C.Gravity Override Function
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomCharacterPartAnimInstance*CharacterPartAnimInstance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             GameTimeInSeconds                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     WindFreq                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     WindAmp                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     WindOffset                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     GoingUpGravityOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ComingDownGravityOverride                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     DivingDownGravityOverride                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ParachuteOpenedGravityOverride                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     GroundWindFreq                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     GroundWindAmp                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     GroundWindOffset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OnGroundGravityOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     SwimmingGravityOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        JointName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     GravityOverride                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     DivingDownGravityOverrideLocal                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     SwimmingGravityOverrideLocal                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OnGroundGravityOverrideLocal                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ParachuteOpenedGravityOverrideLocal                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ComingDownGravityOverrideLocal                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     GoingUpGravOverrideLocal                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCustomCharacterPartAnimInstance*CharacterPartAnimInstanceLocal                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetSocketRotation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetUpVector_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetRightVector_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_6                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_7                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_8                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_9                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_10                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_11                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_12                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_13                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_14                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_15                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_16                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_7                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_8                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_9                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_17                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Random_Vector_Function_VectorOut                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_10                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Random_Vector_Function_VectorOut_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_11                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_12                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_13                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_14                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_15                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_16                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_17                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortAnimationBPFunctionLibrary_C::Gravity_Override_Function(class UCustomCharacterPartAnimInstance* CharacterPartAnimInstance, double GameTimeInSeconds, const struct FVector& WindFreq, const struct FVector& WindAmp, const struct FVector& WindOffset, const struct FVector& GoingUpGravityOverride, const struct FVector& ComingDownGravityOverride, const struct FVector& DivingDownGravityOverride, const struct FVector& ParachuteOpenedGravityOverride, const struct FVector& GroundWindFreq, const struct FVector& GroundWindAmp, const struct FVector& GroundWindOffset, const struct FVector& OnGroundGravityOverride, const struct FVector& SwimmingGravityOverride, class FName JointName, class UObject* __WorldContext, struct FVector* GravityOverride, const struct FVector& DivingDownGravityOverrideLocal, const struct FVector& SwimmingGravityOverrideLocal, const struct FVector& OnGroundGravityOverrideLocal, const struct FVector& ParachuteOpenedGravityOverrideLocal, const struct FVector& ComingDownGravityOverrideLocal, const struct FVector& GoingUpGravOverrideLocal, class UCustomCharacterPartAnimInstance* CharacterPartAnimInstanceLocal, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, double CallFunc_BreakVector_X_3, double CallFunc_BreakVector_Y_3, double CallFunc_BreakVector_Z_3, double CallFunc_BreakVector_X_4, double CallFunc_BreakVector_Y_4, double CallFunc_BreakVector_Z_4, double CallFunc_BreakVector_X_5, double CallFunc_BreakVector_Y_5, double CallFunc_BreakVector_Z_5, bool CallFunc_Greater_DoubleDouble_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetUpVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_4, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_5, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_6, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_7, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_8, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_9, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_10, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_11, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_12, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_13, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_14, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_4, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_5, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_15, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_16, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_6, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_7, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_8, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_9, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_17, const struct FVector& CallFunc_Random_Vector_Function_VectorOut, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_10, const struct FVector& CallFunc_Random_Vector_Function_VectorOut_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_11, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_12, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_13, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_14, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_15, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_16, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_17, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static auto Func = Class->GetFunction("FortAnimationBPFunctionLibrary_C", "Gravity Override Function");

	Params::UFortAnimationBPFunctionLibrary_C_Gravity_Override_Function_Params Parms;

	Parms.CharacterPartAnimInstance = CharacterPartAnimInstance;
	Parms.GameTimeInSeconds = GameTimeInSeconds;
	Parms.WindFreq = WindFreq;
	Parms.WindAmp = WindAmp;
	Parms.WindOffset = WindOffset;
	Parms.GoingUpGravityOverride = GoingUpGravityOverride;
	Parms.ComingDownGravityOverride = ComingDownGravityOverride;
	Parms.DivingDownGravityOverride = DivingDownGravityOverride;
	Parms.ParachuteOpenedGravityOverride = ParachuteOpenedGravityOverride;
	Parms.GroundWindFreq = GroundWindFreq;
	Parms.GroundWindAmp = GroundWindAmp;
	Parms.GroundWindOffset = GroundWindOffset;
	Parms.OnGroundGravityOverride = OnGroundGravityOverride;
	Parms.SwimmingGravityOverride = SwimmingGravityOverride;
	Parms.JointName = JointName;
	Parms.__WorldContext = __WorldContext;
	Parms.DivingDownGravityOverrideLocal = DivingDownGravityOverrideLocal;
	Parms.SwimmingGravityOverrideLocal = SwimmingGravityOverrideLocal;
	Parms.OnGroundGravityOverrideLocal = OnGroundGravityOverrideLocal;
	Parms.ParachuteOpenedGravityOverrideLocal = ParachuteOpenedGravityOverrideLocal;
	Parms.ComingDownGravityOverrideLocal = ComingDownGravityOverrideLocal;
	Parms.GoingUpGravOverrideLocal = GoingUpGravOverrideLocal;
	Parms.CharacterPartAnimInstanceLocal = CharacterPartAnimInstanceLocal;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_BreakVector_X_3 = CallFunc_BreakVector_X_3;
	Parms.CallFunc_BreakVector_Y_3 = CallFunc_BreakVector_Y_3;
	Parms.CallFunc_BreakVector_Z_3 = CallFunc_BreakVector_Z_3;
	Parms.CallFunc_BreakVector_X_4 = CallFunc_BreakVector_X_4;
	Parms.CallFunc_BreakVector_Y_4 = CallFunc_BreakVector_Y_4;
	Parms.CallFunc_BreakVector_Z_4 = CallFunc_BreakVector_Z_4;
	Parms.CallFunc_BreakVector_X_5 = CallFunc_BreakVector_X_5;
	Parms.CallFunc_BreakVector_Y_5 = CallFunc_BreakVector_Y_5;
	Parms.CallFunc_BreakVector_Z_5 = CallFunc_BreakVector_Z_5;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue = CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue;
	Parms.CallFunc_GetSocketRotation_ReturnValue = CallFunc_GetSocketRotation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetUpVector_ReturnValue = CallFunc_GetUpVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_2 = CallFunc_Multiply_VectorFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_3 = CallFunc_Multiply_VectorFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_4 = CallFunc_Multiply_VectorFloat_ReturnValue_4;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_5 = CallFunc_Multiply_VectorFloat_ReturnValue_5;
	Parms.CallFunc_GetRightVector_ReturnValue = CallFunc_GetRightVector_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_6 = CallFunc_Multiply_VectorFloat_ReturnValue_6;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_7 = CallFunc_Multiply_VectorFloat_ReturnValue_7;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_8 = CallFunc_Multiply_VectorFloat_ReturnValue_8;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_9 = CallFunc_Multiply_VectorFloat_ReturnValue_9;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_10 = CallFunc_Multiply_VectorFloat_ReturnValue_10;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_11 = CallFunc_Multiply_VectorFloat_ReturnValue_11;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_12 = CallFunc_Multiply_VectorFloat_ReturnValue_12;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_13 = CallFunc_Multiply_VectorFloat_ReturnValue_13;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_14 = CallFunc_Multiply_VectorFloat_ReturnValue_14;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_3 = CallFunc_Add_VectorVector_ReturnValue_3;
	Parms.CallFunc_Add_VectorVector_ReturnValue_4 = CallFunc_Add_VectorVector_ReturnValue_4;
	Parms.CallFunc_Add_VectorVector_ReturnValue_5 = CallFunc_Add_VectorVector_ReturnValue_5;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_15 = CallFunc_Multiply_VectorFloat_ReturnValue_15;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_16 = CallFunc_Multiply_VectorFloat_ReturnValue_16;
	Parms.CallFunc_Add_VectorVector_ReturnValue_6 = CallFunc_Add_VectorVector_ReturnValue_6;
	Parms.CallFunc_Add_VectorVector_ReturnValue_7 = CallFunc_Add_VectorVector_ReturnValue_7;
	Parms.CallFunc_Add_VectorVector_ReturnValue_8 = CallFunc_Add_VectorVector_ReturnValue_8;
	Parms.CallFunc_Add_VectorVector_ReturnValue_9 = CallFunc_Add_VectorVector_ReturnValue_9;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_17 = CallFunc_Multiply_VectorFloat_ReturnValue_17;
	Parms.CallFunc_Random_Vector_Function_VectorOut = CallFunc_Random_Vector_Function_VectorOut;
	Parms.CallFunc_Add_VectorVector_ReturnValue_10 = CallFunc_Add_VectorVector_ReturnValue_10;
	Parms.CallFunc_Random_Vector_Function_VectorOut_1 = CallFunc_Random_Vector_Function_VectorOut_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_11 = CallFunc_Add_VectorVector_ReturnValue_11;
	Parms.CallFunc_Add_VectorVector_ReturnValue_12 = CallFunc_Add_VectorVector_ReturnValue_12;
	Parms.CallFunc_Add_VectorVector_ReturnValue_13 = CallFunc_Add_VectorVector_ReturnValue_13;
	Parms.CallFunc_Add_VectorVector_ReturnValue_14 = CallFunc_Add_VectorVector_ReturnValue_14;
	Parms.CallFunc_Add_VectorVector_ReturnValue_15 = CallFunc_Add_VectorVector_ReturnValue_15;
	Parms.CallFunc_Add_VectorVector_ReturnValue_16 = CallFunc_Add_VectorVector_ReturnValue_16;
	Parms.CallFunc_Add_VectorVector_ReturnValue_17 = CallFunc_Add_VectorVector_ReturnValue_17;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (GravityOverride != nullptr)
		*GravityOverride = Parms.GravityOverride;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
