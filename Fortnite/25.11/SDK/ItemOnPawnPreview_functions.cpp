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


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.Get LOD Streaming Safety Duration
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:

void AItemOnPawnPreview_C::Get_LOD_Streaming_Safety_Duration()
{
	static auto Func = Class->GetFunction("ItemOnPawnPreview_C", "Get LOD Streaming Safety Duration");

	Params::AItemOnPawnPreview_C_Get_LOD_Streaming_Safety_Duration_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchErebusLighting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USpotLightComponent*> L_lights                                                         (Edit, BlueprintVisible, ContainsInstancedReference)

void AItemOnPawnPreview_C::SwitchErebusLighting(bool Visibility, const TArray<class USpotLightComponent*>& L_lights)
{
	static auto Func = Class->GetFunction("ItemOnPawnPreview_C", "SwitchErebusLighting");

	Params::AItemOnPawnPreview_C_SwitchErebusLighting_Params Parms;

	Parms.Visibility = Visibility;
	Parms.L_lights = L_lights;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.SetFloorEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show_Floor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AItemOnPawnPreview_C::SetFloorEnabled(bool Show_Floor, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemOnPawnPreview_C", "SetFloorEnabled");

	Params::AItemOnPawnPreview_C_SetFloorEnabled_Params Parms;

	Parms.Show_Floor = Show_Floor;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.LightControl
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

void AItemOnPawnPreview_C::LightControl(bool Active, bool CallFunc_IsErebus_ReturnValue, class UFortGameUserSettings* CallFunc_GetFortGameUserSettings_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_IsInPerformanceMode_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsErebus_ReturnValue_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3)
{
	static auto Func = Class->GetFunction("ItemOnPawnPreview_C", "LightControl");

	Params::AItemOnPawnPreview_C_LightControl_Params Parms;

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


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchPCLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AItemOnPawnPreview_C::SwitchPCLighting(bool Visibility)
{
	static auto Func = Class->GetFunction("ItemOnPawnPreview_C", "SwitchPCLighting");

	Params::AItemOnPawnPreview_C_SwitchPCLighting_Params Parms;

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchMobileLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AItemOnPawnPreview_C::SwitchMobileLighting(bool NewParam)
{
	static auto Func = Class->GetFunction("ItemOnPawnPreview_C", "SwitchMobileLighting");

	Params::AItemOnPawnPreview_C_SwitchMobileLighting_Params Parms;

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.UpdateSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AItemOnPawnPreview_C::UpdateSettings()
{
	static auto Func = Class->GetFunction("ItemOnPawnPreview_C", "UpdateSettings");

	Params::AItemOnPawnPreview_C_UpdateSettings_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.OnSetFloorMaterial
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          InMaterialInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AItemOnPawnPreview_C::OnSetFloorMaterial(class UMaterialInterface* InMaterialInstance)
{
	static auto Func = Class->GetFunction("ItemOnPawnPreview_C", "OnSetFloorMaterial");

	Params::AItemOnPawnPreview_C_OnSetFloorMaterial_Params Parms;

	Parms.InMaterialInstance = InMaterialInstance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.OnAllLODStreamingComplete
// (Event, Public, BlueprintEvent)
// Parameters:

void AItemOnPawnPreview_C::OnAllLODStreamingComplete()
{
	static auto Func = Class->GetFunction("ItemOnPawnPreview_C", "OnAllLODStreamingComplete");

	Params::AItemOnPawnPreview_C_OnAllLODStreamingComplete_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.OnCurrentVisualsCleanedUp
// (Event, Public, BlueprintEvent)
// Parameters:

void AItemOnPawnPreview_C::OnCurrentVisualsCleanedUp()
{
	static auto Func = Class->GetFunction("ItemOnPawnPreview_C", "OnCurrentVisualsCleanedUp");

	Params::AItemOnPawnPreview_C_OnCurrentVisualsCleanedUp_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.OnPreviewVisualsSpawned
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUseSecondaryTransitionEffects                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShowFloor                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AItemOnPawnPreview_C::OnPreviewVisualsSpawned(bool bUseSecondaryTransitionEffects, bool bShowFloor)
{
	static auto Func = Class->GetFunction("ItemOnPawnPreview_C", "OnPreviewVisualsSpawned");

	Params::AItemOnPawnPreview_C_OnPreviewVisualsSpawned_Params Parms;

	Parms.bUseSecondaryTransitionEffects = bUseSecondaryTransitionEffects;
	Parms.bShowFloor = bShowFloor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.OnUpdateFloorMaterial
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bEnableAutotestBackground                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AItemOnPawnPreview_C::OnUpdateFloorMaterial(bool bEnableAutotestBackground)
{
	static auto Func = Class->GetFunction("ItemOnPawnPreview_C", "OnUpdateFloorMaterial");

	Params::AItemOnPawnPreview_C_OnUpdateFloorMaterial_Params Parms;

	Parms.bEnableAutotestBackground = bEnableAutotestBackground;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.Backup_LODStreamingFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AItemOnPawnPreview_C::Backup_LODStreamingFailed()
{
	static auto Func = Class->GetFunction("ItemOnPawnPreview_C", "Backup_LODStreamingFailed");

	Params::AItemOnPawnPreview_C_Backup_LODStreamingFailed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AItemOnPawnPreview_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("ItemOnPawnPreview_C", "ReceiveBeginPlay");

	Params::AItemOnPawnPreview_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.ExecuteUbergraph_ItemOnPawnPreview
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStreamingSafetyDuration_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Event_InMaterialInstance                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetPawnLocation_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_1                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_2                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaSkyDiveContrailItemDefinition*K2Node_DynamicCast_AsAthena_Sky_Dive_Contrail_Item_Definition    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bUseSecondaryTransitionEffects                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShowFloor                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameUserSettings*       CallFunc_GetFortGameUserSettings_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bEnableAutotestBackground                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInPerformanceMode_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsErebus_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_B_Execution_Happened_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_A_Execution_Happened_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AItemOnPawnPreview_C::ExecuteUbergraph_ItemOnPawnPreview(int32 EntryPoint, float CallFunc_GetStreamingSafetyDuration_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_Variable, class UMaterialInterface* K2Node_Event_InMaterialInstance, const struct FVector& CallFunc_GetPawnLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_2, bool Temp_bool_Variable_1, class UAthenaSkyDiveContrailItemDefinition* K2Node_DynamicCast_AsAthena_Sky_Dive_Contrail_Item_Definition, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, bool K2Node_Event_bUseSecondaryTransitionEffects, bool K2Node_Event_bShowFloor, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, class UFortGameUserSettings* CallFunc_GetFortGameUserSettings_ReturnValue, bool K2Node_Event_bEnableAutotestBackground, bool CallFunc_IsInPerformanceMode_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsErebus_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, class UMaterialInterface* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, class UMaterialInterface* K2Node_Select_Default_1, bool Temp_bool_B_Execution_Happened_Variable, bool Temp_bool_A_Execution_Happened_Variable, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static auto Func = Class->GetFunction("ItemOnPawnPreview_C", "ExecuteUbergraph_ItemOnPawnPreview");

	Params::AItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetStreamingSafetyDuration_ReturnValue = CallFunc_GetStreamingSafetyDuration_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_InMaterialInstance = K2Node_Event_InMaterialInstance;
	Parms.CallFunc_GetPawnLocation_ReturnValue = CallFunc_GetPawnLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_1 = CallFunc_SpawnEmitterAtLocation_ReturnValue_1;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_2 = CallFunc_SpawnEmitterAtLocation_ReturnValue_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_DynamicCast_AsAthena_Sky_Dive_Contrail_Item_Definition = K2Node_DynamicCast_AsAthena_Sky_Dive_Contrail_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.K2Node_Event_bUseSecondaryTransitionEffects = K2Node_Event_bUseSecondaryTransitionEffects;
	Parms.K2Node_Event_bShowFloor = K2Node_Event_bShowFloor;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue = CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_GetFortGameUserSettings_ReturnValue = CallFunc_GetFortGameUserSettings_ReturnValue;
	Parms.K2Node_Event_bEnableAutotestBackground = K2Node_Event_bEnableAutotestBackground;
	Parms.CallFunc_IsInPerformanceMode_ReturnValue = CallFunc_IsInPerformanceMode_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_IsErebus_ReturnValue = CallFunc_IsErebus_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_bool_B_Execution_Happened_Variable = Temp_bool_B_Execution_Happened_Variable;
	Parms.Temp_bool_A_Execution_Happened_Variable = Temp_bool_A_Execution_Happened_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
