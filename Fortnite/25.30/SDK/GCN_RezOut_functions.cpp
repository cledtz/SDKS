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


// Function GCN_RezOut.GCN_RezOut_C.Spawn Drone VFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UGCN_RezOut_C::Spawn_Drone_VFX(class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue)
{
	static auto Func = Class->GetFunction("GCN_RezOut_C", "Spawn Drone VFX");

	Params::UGCN_RezOut_C_Spawn_Drone_VFX_Params Parms;

	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezOut.GCN_RezOut_C.Set Timeline Playrates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_SetPlayRate_NewRate_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPlayRate_NewRate_ImplicitCast_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGCN_RezOut_C::Set_Timeline_Playrates(float CallFunc_SetPlayRate_NewRate_ImplicitCast, float CallFunc_SetPlayRate_NewRate_ImplicitCast_1)
{
	static auto Func = Class->GetFunction("GCN_RezOut_C", "Set Timeline Playrates");

	Params::UGCN_RezOut_C_Set_Timeline_Playrates_Params Parms;

	Parms.CallFunc_SetPlayRate_NewRate_ImplicitCast = CallFunc_SetPlayRate_NewRate_ImplicitCast;
	Parms.CallFunc_SetPlayRate_NewRate_ImplicitCast_1 = CallFunc_SetPlayRate_NewRate_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezOut.GCN_RezOut_C.Dissolve Material Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumMaterials_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGCN_RezOut_C::Dissolve_Material_Setup(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, class USkeletalMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("GCN_RezOut_C", "Dissolve Material Setup");

	Params::UGCN_RezOut_C_Dissolve_Material_Setup_Params Parms;

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetNumMaterials_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezOut.GCN_RezOut_C.Spawn Dissolve VFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UGCN_RezOut_C::Spawn_Dissolve_VFX(const struct FVector& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool Temp_bool_Variable, const struct FVector& K2Node_Select_Default, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("GCN_RezOut_C", "Spawn Dissolve VFX");

	Params::UGCN_RezOut_C_Spawn_Dissolve_VFX_Params Parms;

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetSocketLocation_ReturnValue_1 = CallFunc_GetSocketLocation_ReturnValue_1;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezOut.GCN_RezOut_C.Clean-Up Teleportation Light
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGCN_RezOut_C::Clean_Up_Teleportation_Light(bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("GCN_RezOut_C", "Clean-Up Teleportation Light");

	Params::UGCN_RezOut_C_Clean_Up_Teleportation_Light_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezOut.GCN_RezOut_C.Spawn Teleportation Light
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPointLightComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UGCN_RezOut_C::Spawn_Teleportation_Light(const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, class UPointLightComponent* CallFunc_AddComponent_ReturnValue)
{
	static auto Func = Class->GetFunction("GCN_RezOut_C", "Spawn Teleportation Light");

	Params::UGCN_RezOut_C_Spawn_Teleportation_Light_Params Parms;

	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezOut.GCN_RezOut_C.Spawn Teleportation Drone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_TeleportationDrone_C*    CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetLifeSpan_InLifespan_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGCN_RezOut_C::Spawn_Teleportation_Drone(const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UBP_TeleportationDrone_C* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_SetLifeSpan_InLifespan_ImplicitCast)
{
	static auto Func = Class->GetFunction("GCN_RezOut_C", "Spawn Teleportation Drone");

	Params::UGCN_RezOut_C_Spawn_Teleportation_Drone_Params Parms;

	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_SetLifeSpan_InLifespan_ImplicitCast = CallFunc_SetLifeSpan_InLifespan_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezOut.GCN_RezOut_C.Stop Looping Audio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGCN_RezOut_C::Stop_Looping_Audio(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static auto Func = Class->GetFunction("GCN_RezOut_C", "Stop Looping Audio");

	Params::UGCN_RezOut_C_Stop_Looping_Audio_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezOut.GCN_RezOut_C.Play Elmination AnimMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSurfaceSwimming_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSkydiving_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WasDBNOOnDeath_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Select_Default_2                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Select_Default_3                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayLocalAnimMontage_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGCN_RezOut_C::Play_Elmination_AnimMontage(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool CallFunc_IsSurfaceSwimming_ReturnValue, bool CallFunc_IsSkydiving_ReturnValue, bool CallFunc_WasDBNOOnDeath_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UAnimMontage* K2Node_Select_Default, class UAnimMontage* K2Node_Select_Default_1, class UAnimMontage* K2Node_Select_Default_2, class UAnimMontage* K2Node_Select_Default_3, float CallFunc_PlayLocalAnimMontage_ReturnValue)
{
	static auto Func = Class->GetFunction("GCN_RezOut_C", "Play Elmination AnimMontage");

	Params::UGCN_RezOut_C_Play_Elmination_AnimMontage_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_IsSurfaceSwimming_ReturnValue = CallFunc_IsSurfaceSwimming_ReturnValue;
	Parms.CallFunc_IsSkydiving_ReturnValue = CallFunc_IsSkydiving_ReturnValue;
	Parms.CallFunc_WasDBNOOnDeath_ReturnValue = CallFunc_WasDBNOOnDeath_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_PlayLocalAnimMontage_ReturnValue = CallFunc_PlayLocalAnimMontage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezOut.GCN_RezOut_C.TFX_GlowCharacterMesh__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UGCN_RezOut_C::TFX_GlowCharacterMesh__FinishedFunc()
{
	static auto Func = Class->GetFunction("GCN_RezOut_C", "TFX_GlowCharacterMesh__FinishedFunc");

	Params::UGCN_RezOut_C_TFX_GlowCharacterMesh__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezOut.GCN_RezOut_C.TFX_GlowCharacterMesh__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UGCN_RezOut_C::TFX_GlowCharacterMesh__UpdateFunc()
{
	static auto Func = Class->GetFunction("GCN_RezOut_C", "TFX_GlowCharacterMesh__UpdateFunc");

	Params::UGCN_RezOut_C_TFX_GlowCharacterMesh__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezOut.GCN_RezOut_C.TFX_ResOutCharacterMesh__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UGCN_RezOut_C::TFX_ResOutCharacterMesh__FinishedFunc()
{
	static auto Func = Class->GetFunction("GCN_RezOut_C", "TFX_ResOutCharacterMesh__FinishedFunc");

	Params::UGCN_RezOut_C_TFX_ResOutCharacterMesh__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezOut.GCN_RezOut_C.TFX_ResOutCharacterMesh__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UGCN_RezOut_C::TFX_ResOutCharacterMesh__UpdateFunc()
{
	static auto Func = Class->GetFunction("GCN_RezOut_C", "TFX_ResOutCharacterMesh__UpdateFunc");

	Params::UGCN_RezOut_C_TFX_ResOutCharacterMesh__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezOut.GCN_RezOut_C.EndVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGCN_RezOut_C::EndVFX()
{
	static auto Func = Class->GetFunction("GCN_RezOut_C", "EndVFX");

	Params::UGCN_RezOut_C_EndVFX_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezOut.GCN_RezOut_C.OnBurstGeneric
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// class UActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UFXSystemComponent*>  ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class ULegacyCameraShake*          BurstCameraShakeInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDecalActor*                 BurstDecalInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGCN_RezOut_C::OnBurstGeneric(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class UDecalActor* BurstDecalInstance)
{
	static auto Func = Class->GetFunction("GCN_RezOut_C", "OnBurstGeneric");

	Params::UGCN_RezOut_C_OnBurstGeneric_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezOut.GCN_RezOut_C.Pre-Sequence Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGCN_RezOut_C::Pre_Sequence_Change()
{
	static auto Func = Class->GetFunction("GCN_RezOut_C", "Pre-Sequence Change");

	Params::UGCN_RezOut_C_Pre_Sequence_Change_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezOut.GCN_RezOut_C.Set Additional Niagara Parameters on Spawned FX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*           Spawned_Death_FX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UGCN_RezOut_C::Set_Additional_Niagara_Parameters_on_Spawned_FX(class UNiagaraComponent* Spawned_Death_FX)
{
	static auto Func = Class->GetFunction("GCN_RezOut_C", "Set Additional Niagara Parameters on Spawned FX");

	Params::UGCN_RezOut_C_Set_Additional_Niagara_Parameters_on_Spawned_FX_Params Parms;

	Parms.Spawned_Death_FX = Spawned_Death_FX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezOut.GCN_RezOut_C.Set Additional Niagara Parameters on Drone FX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*           Drone_FX                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UGCN_RezOut_C::Set_Additional_Niagara_Parameters_on_Drone_FX(class UNiagaraComponent* Drone_FX)
{
	static auto Func = Class->GetFunction("GCN_RezOut_C", "Set Additional Niagara Parameters on Drone FX");

	Params::UGCN_RezOut_C_Set_Additional_Niagara_Parameters_on_Drone_FX_Params Parms;

	Parms.Drone_FX = Drone_FX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezOut.GCN_RezOut_C.TriggerVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGCN_RezOut_C::TriggerVFX()
{
	static auto Func = Class->GetFunction("GCN_RezOut_C", "TriggerVFX");

	Params::UGCN_RezOut_C_TriggerVFX_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezOut.GCN_RezOut_C.ExecuteUbergraph_GCN_RezOut
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UMaterialInterface>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// TArray<class USkeletalMeshComponent*>CallFunc_Set_ToArray_Result                                      (ReferenceParm, ContainsInstancedReference)
// class UActor*                      K2Node_Event_MyTarget                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters                                          (ConstParm, ContainsInstancedReference)
// TArray<class UFXSystemComponent*>  K2Node_Event_ParticleComponents                                  (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     K2Node_Event_AudioComponents                                     (ConstParm, ReferenceParm, ContainsInstancedReference)
// class ULegacyCameraShake*          K2Node_Event_BurstCameraShakeInstance                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDecalActor*                 K2Node_Event_BurstDecalInstance                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerPawn_Athena_C*        K2Node_DynamicCast_AsPlayer_Pawn_Athena                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           K2Node_CustomEvent_Spawned_Death_FX                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           K2Node_CustomEvent_Drone_FX                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class USceneComponent*>     CallFunc_GetChildrenComponents_Children                          (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          K2Node_DynamicCast_AsFXSystem_Component                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstanceDynamic*>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// struct FGuid                       CallFunc_BP_ApplyMaterialOverrideLocalWithFlags_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstanceDynamic*>K2Node_MakeArray_Array_1                                         (ReferenceParm)
// float                              CallFunc_UpdateDissolveFx_MaxLightIntensity_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGCN_RezOut_C::ExecuteUbergraph_GCN_RezOut(int32 EntryPoint, TSoftObjectPtr<class UMaterialInterface> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, TArray<class USkeletalMeshComponent*>& CallFunc_Set_ToArray_Result, class UActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class UDecalActor* K2Node_Event_BurstDecalInstance, class UPlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class UNiagaraComponent* K2Node_CustomEvent_Spawned_Death_FX, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UNiagaraComponent* K2Node_CustomEvent_Drone_FX, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class USceneComponent* CallFunc_Array_Get_Item, class UFXSystemComponent* K2Node_DynamicCast_AsFXSystem_Component, bool K2Node_DynamicCast_bSuccess_1, TArray<class UMaterialInstanceDynamic*>& K2Node_MakeArray_Array, const struct FGuid& CallFunc_BP_ApplyMaterialOverrideLocalWithFlags_ReturnValue, TArray<class UMaterialInstanceDynamic*>& K2Node_MakeArray_Array_1, float CallFunc_UpdateDissolveFx_MaxLightIntensity_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast)
{
	static auto Func = Class->GetFunction("GCN_RezOut_C", "ExecuteUbergraph_GCN_RezOut");

	Params::UGCN_RezOut_C_ExecuteUbergraph_GCN_RezOut_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_Set_ToArray_Result = CallFunc_Set_ToArray_Result;
	Parms.K2Node_Event_MyTarget = K2Node_Event_MyTarget;
	Parms.K2Node_Event_Parameters = K2Node_Event_Parameters;
	Parms.K2Node_Event_ParticleComponents = K2Node_Event_ParticleComponents;
	Parms.K2Node_Event_AudioComponents = K2Node_Event_AudioComponents;
	Parms.K2Node_Event_BurstCameraShakeInstance = K2Node_Event_BurstCameraShakeInstance;
	Parms.K2Node_Event_BurstDecalInstance = K2Node_Event_BurstDecalInstance;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Athena = K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Spawned_Death_FX = K2Node_CustomEvent_Spawned_Death_FX;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Drone_FX = K2Node_CustomEvent_Drone_FX;
	Parms.CallFunc_GetChildrenComponents_Children = CallFunc_GetChildrenComponents_Children;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsFXSystem_Component = K2Node_DynamicCast_AsFXSystem_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_BP_ApplyMaterialOverrideLocalWithFlags_ReturnValue = CallFunc_BP_ApplyMaterialOverrideLocalWithFlags_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_UpdateDissolveFx_MaxLightIntensity_ImplicitCast = CallFunc_UpdateDissolveFx_MaxLightIntensity_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
