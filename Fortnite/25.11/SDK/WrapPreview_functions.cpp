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


// Function WrapPreview.WrapPreview_C.UpdateFloorVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShowingVehicle_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWrapPreview_C::UpdateFloorVisibility(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsShowingVehicle_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("WrapPreview_C", "UpdateFloorVisibility");

	Params::AWrapPreview_C_UpdateFloorVisibility_Params Parms;

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsShowingVehicle_ReturnValue = CallFunc_IsShowingVehicle_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WrapPreview.WrapPreview_C.SwitchErebusLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWrapPreview_C::SwitchErebusLighting(bool Visibility)
{
	static auto Func = Class->GetFunction("WrapPreview_C", "SwitchErebusLighting");

	Params::AWrapPreview_C_SwitchErebusLighting_Params Parms;

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WrapPreview.WrapPreview_C.UpdateLightingScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             UpscaleForVehicle                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShowingVehicle_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWrapPreview_C::UpdateLightingScale(double UpscaleForVehicle, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, bool CallFunc_IsShowingVehicle_ReturnValue)
{
	static auto Func = Class->GetFunction("WrapPreview_C", "UpdateLightingScale");

	Params::AWrapPreview_C_UpdateLightingScale_Params Parms;

	Parms.UpscaleForVehicle = UpscaleForVehicle;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_IsShowingVehicle_ReturnValue = CallFunc_IsShowingVehicle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WrapPreview.WrapPreview_C.SetFloorEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Floor_Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWrapPreview_C::SetFloorEnabled(bool Floor_Enabled)
{
	static auto Func = Class->GetFunction("WrapPreview_C", "SetFloorEnabled");

	Params::AWrapPreview_C_SetFloorEnabled_Params Parms;

	Parms.Floor_Enabled = Floor_Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WrapPreview.WrapPreview_C.LightControl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsErebus_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameUserSettings*       CallFunc_GetFortGameUserSettings_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInPerformanceMode_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsErebus_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWrapPreview_C::LightControl(bool Active, bool CallFunc_IsErebus_ReturnValue, class UFortGameUserSettings* CallFunc_GetFortGameUserSettings_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_IsInPerformanceMode_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsErebus_ReturnValue_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3)
{
	static auto Func = Class->GetFunction("WrapPreview_C", "LightControl");

	Params::AWrapPreview_C_LightControl_Params Parms;

	Parms.Active = Active;
	Parms.CallFunc_IsErebus_ReturnValue = CallFunc_IsErebus_ReturnValue;
	Parms.CallFunc_GetFortGameUserSettings_ReturnValue = CallFunc_GetFortGameUserSettings_ReturnValue;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_IsInPerformanceMode_ReturnValue = CallFunc_IsInPerformanceMode_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_IsErebus_ReturnValue_1 = CallFunc_IsErebus_ReturnValue_1;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WrapPreview.WrapPreview_C.SwitchPCLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWrapPreview_C::SwitchPCLighting(bool Visibility)
{
	static auto Func = Class->GetFunction("WrapPreview_C", "SwitchPCLighting");

	Params::AWrapPreview_C_SwitchPCLighting_Params Parms;

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WrapPreview.WrapPreview_C.SwitchMobileLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWrapPreview_C::SwitchMobileLighting(bool NewParam)
{
	static auto Func = Class->GetFunction("WrapPreview_C", "SwitchMobileLighting");

	Params::AWrapPreview_C_SwitchMobileLighting_Params Parms;

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WrapPreview.WrapPreview_C.HandleLightingScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_4           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_5           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_6                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_6           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_7                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_7           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_8                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_8           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_9                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_9           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWrapPreview_C::HandleLightingScale(double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, double CallFunc_Multiply_DoubleDouble_ReturnValue_7, double CallFunc_Multiply_DoubleDouble_ReturnValue_8, double CallFunc_Multiply_DoubleDouble_ReturnValue_9, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2, float CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast, float CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_1, float CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_2, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3, float CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_3, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_4, float CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_4, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_5, float CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_5, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_6, float CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_6, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_7, float CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_7, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_8, float CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_8, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_9, float CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_9)
{
	static auto Func = Class->GetFunction("WrapPreview_C", "HandleLightingScale");

	Params::AWrapPreview_C_HandleLightingScale_Params Parms;

	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_5 = CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_6 = CallFunc_Multiply_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_7 = CallFunc_Multiply_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_8 = CallFunc_Multiply_DoubleDouble_ReturnValue_8;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_9 = CallFunc_Multiply_DoubleDouble_ReturnValue_9;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue = CallFunc_K2_GetComponentScale_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2;
	Parms.CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast = CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast;
	Parms.CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_1 = CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_1;
	Parms.CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_2 = CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_2;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3;
	Parms.CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_3 = CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_3;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_4 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_4;
	Parms.CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_4 = CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_4;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_5 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_5;
	Parms.CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_5 = CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_5;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_6 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_6;
	Parms.CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_6 = CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_6;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_7 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_7;
	Parms.CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_7 = CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_7;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_8 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_8;
	Parms.CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_8 = CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_8;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_9 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_9;
	Parms.CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_9 = CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_9;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WrapPreview.WrapPreview_C.UpdateSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWrapPreview_C::UpdateSettings()
{
	static auto Func = Class->GetFunction("WrapPreview_C", "UpdateSettings");

	Params::AWrapPreview_C_UpdateSettings_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WrapPreview.WrapPreview_C.OnSetFloorMaterial
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          InMaterialInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AWrapPreview_C::OnSetFloorMaterial(class UMaterialInterface* InMaterialInstance)
{
	static auto Func = Class->GetFunction("WrapPreview_C", "OnSetFloorMaterial");

	Params::AWrapPreview_C_OnSetFloorMaterial_Params Parms;

	Parms.InMaterialInstance = InMaterialInstance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WrapPreview.WrapPreview_C.OnPreviewVisualsSpawned
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUseSecondaryTransitionEffects                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShowFloor                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWrapPreview_C::OnPreviewVisualsSpawned(bool bUseSecondaryTransitionEffects, bool bShowFloor)
{
	static auto Func = Class->GetFunction("WrapPreview_C", "OnPreviewVisualsSpawned");

	Params::AWrapPreview_C_OnPreviewVisualsSpawned_Params Parms;

	Parms.bUseSecondaryTransitionEffects = bUseSecondaryTransitionEffects;
	Parms.bShowFloor = bShowFloor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WrapPreview.WrapPreview_C.OnUpdateFloorMaterial
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bEnableAutotestBackground                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWrapPreview_C::OnUpdateFloorMaterial(bool bEnableAutotestBackground)
{
	static auto Func = Class->GetFunction("WrapPreview_C", "OnUpdateFloorMaterial");

	Params::AWrapPreview_C_OnUpdateFloorMaterial_Params Parms;

	Parms.bEnableAutotestBackground = bEnableAutotestBackground;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WrapPreview.WrapPreview_C.ExecuteUbergraph_WrapPreview
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Event_InMaterialInstance                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bUseSecondaryTransitionEffects                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShowFloor                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameUserSettings*       CallFunc_GetFortGameUserSettings_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInPerformanceMode_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bEnableAutotestBackground                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsErebus_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWrapPreview_C::ExecuteUbergraph_WrapPreview(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UMaterialInterface* K2Node_Event_InMaterialInstance, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool K2Node_Event_bUseSecondaryTransitionEffects, bool K2Node_Event_bShowFloor, bool CallFunc_IsMobileGame_ReturnValue, class UFortGameUserSettings* CallFunc_GetFortGameUserSettings_ReturnValue, bool CallFunc_IsInPerformanceMode_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_Event_bEnableAutotestBackground, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_IsErebus_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2)
{
	static auto Func = Class->GetFunction("WrapPreview_C", "ExecuteUbergraph_WrapPreview");

	Params::AWrapPreview_C_ExecuteUbergraph_WrapPreview_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.K2Node_Event_InMaterialInstance = K2Node_Event_InMaterialInstance;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_Event_bUseSecondaryTransitionEffects = K2Node_Event_bUseSecondaryTransitionEffects;
	Parms.K2Node_Event_bShowFloor = K2Node_Event_bShowFloor;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_GetFortGameUserSettings_ReturnValue = CallFunc_GetFortGameUserSettings_ReturnValue;
	Parms.CallFunc_IsInPerformanceMode_ReturnValue = CallFunc_IsInPerformanceMode_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Event_bEnableAutotestBackground = K2Node_Event_bEnableAutotestBackground;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_IsErebus_ReturnValue = CallFunc_IsErebus_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
