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


// Function GCN_RezIn.GCN_RezIn_C.Spawn Drone VFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UGCN_RezIn_C::Spawn_Drone_VFX(class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue)
{
	static auto Func = Class->GetFunction("GCN_RezIn_C", "Spawn Drone VFX");

	Params::UGCN_RezIn_C_Spawn_Drone_VFX_Params Parms;

	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezIn.GCN_RezIn_C.Set Timelines' Playrates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_SetPlayRate_NewRate_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPlayRate_NewRate_ImplicitCast_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGCN_RezIn_C::Set_Timelines__Playrates(float CallFunc_SetPlayRate_NewRate_ImplicitCast, float CallFunc_SetPlayRate_NewRate_ImplicitCast_1)
{
	static auto Func = Class->GetFunction("GCN_RezIn_C", "Set Timelines' Playrates");

	Params::UGCN_RezIn_C_Set_Timelines__Playrates_Params Parms;

	Parms.CallFunc_SetPlayRate_NewRate_ImplicitCast = CallFunc_SetPlayRate_NewRate_ImplicitCast;
	Parms.CallFunc_SetPlayRate_NewRate_ImplicitCast_1 = CallFunc_SetPlayRate_NewRate_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezIn.GCN_RezIn_C.Spawn Teleport In VFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UGCN_RezIn_C::Spawn_Teleport_In_VFX(const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue)
{
	static auto Func = Class->GetFunction("GCN_RezIn_C", "Spawn Teleport In VFX");

	Params::UGCN_RezIn_C_Spawn_Teleport_In_VFX_Params Parms;

	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezIn.GCN_RezIn_C.Restore Character Materials
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Fully_Completed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentReplacementIndex                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Itr                                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue                                (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGCN_RezIn_C::Restore_Character_Materials(bool* Fully_Completed, int32 CurrentReplacementIndex, int32 Itr, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UMaterialInstanceDynamic* Temp_object_Variable, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UMaterialInstanceDynamic* K2Node_Select_Default, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static auto Func = Class->GetFunction("GCN_RezIn_C", "Restore Character Materials");

	Params::UGCN_RezIn_C_Restore_Character_Materials_Params Parms;

	Parms.CurrentReplacementIndex = CurrentReplacementIndex;
	Parms.Itr = Itr;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetMaterials_ReturnValue = CallFunc_GetMaterials_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Fully_Completed != nullptr)
		*Fully_Completed = Parms.Fully_Completed;

}


// Function GCN_RezIn.GCN_RezIn_C.Clean-Up Teleportation Light
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGCN_RezIn_C::Clean_Up_Teleportation_Light(bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("GCN_RezIn_C", "Clean-Up Teleportation Light");

	Params::UGCN_RezIn_C_Clean_Up_Teleportation_Light_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezIn.GCN_RezIn_C.Spawn Teleportation Light
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPointLightComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UGCN_RezIn_C::Spawn_Teleportation_Light(const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, class UPointLightComponent* CallFunc_AddComponent_ReturnValue)
{
	static auto Func = Class->GetFunction("GCN_RezIn_C", "Spawn Teleportation Light");

	Params::UGCN_RezIn_C_Spawn_Teleportation_Light_Params Parms;

	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezIn.GCN_RezIn_C.Spawn Teleportation Drone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_TeleportationDrone_C*    CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetLifeSpan_InLifespan_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGCN_RezIn_C::Spawn_Teleportation_Drone(const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UBP_TeleportationDrone_C* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_SetLifeSpan_InLifespan_ImplicitCast)
{
	static auto Func = Class->GetFunction("GCN_RezIn_C", "Spawn Teleportation Drone");

	Params::UGCN_RezIn_C_Spawn_Teleportation_Drone_Params Parms;

	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_SetLifeSpan_InLifespan_ImplicitCast = CallFunc_SetLifeSpan_InLifespan_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezIn.GCN_RezIn_C.Stop Looping Audio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGCN_RezIn_C::Stop_Looping_Audio(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static auto Func = Class->GetFunction("GCN_RezIn_C", "Stop Looping Audio");

	Params::UGCN_RezIn_C_Stop_Looping_Audio_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezIn.GCN_RezIn_C.TFX_GlowCharacterMesh__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UGCN_RezIn_C::TFX_GlowCharacterMesh__FinishedFunc()
{
	static auto Func = Class->GetFunction("GCN_RezIn_C", "TFX_GlowCharacterMesh__FinishedFunc");

	Params::UGCN_RezIn_C_TFX_GlowCharacterMesh__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezIn.GCN_RezIn_C.TFX_GlowCharacterMesh__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UGCN_RezIn_C::TFX_GlowCharacterMesh__UpdateFunc()
{
	static auto Func = Class->GetFunction("GCN_RezIn_C", "TFX_GlowCharacterMesh__UpdateFunc");

	Params::UGCN_RezIn_C_TFX_GlowCharacterMesh__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezIn.GCN_RezIn_C.TFX_ResOutCharacterMesh__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UGCN_RezIn_C::TFX_ResOutCharacterMesh__FinishedFunc()
{
	static auto Func = Class->GetFunction("GCN_RezIn_C", "TFX_ResOutCharacterMesh__FinishedFunc");

	Params::UGCN_RezIn_C_TFX_ResOutCharacterMesh__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezIn.GCN_RezIn_C.TFX_ResOutCharacterMesh__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UGCN_RezIn_C::TFX_ResOutCharacterMesh__UpdateFunc()
{
	static auto Func = Class->GetFunction("GCN_RezIn_C", "TFX_ResOutCharacterMesh__UpdateFunc");

	Params::UGCN_RezIn_C_TFX_ResOutCharacterMesh__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezIn.GCN_RezIn_C.OnBurstGeneric
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// class UActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UFXSystemComponent*>  ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class ULegacyCameraShake*          BurstCameraShakeInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDecalActor*                 BurstDecalInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGCN_RezIn_C::OnBurstGeneric(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class UDecalActor* BurstDecalInstance)
{
	static auto Func = Class->GetFunction("GCN_RezIn_C", "OnBurstGeneric");

	Params::UGCN_RezIn_C_OnBurstGeneric_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezIn.GCN_RezIn_C.Pre-Sequence Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGCN_RezIn_C::Pre_Sequence_Change()
{
	static auto Func = Class->GetFunction("GCN_RezIn_C", "Pre-Sequence Change");

	Params::UGCN_RezIn_C_Pre_Sequence_Change_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezIn.GCN_RezIn_C.Set Additional Niagara Parameters on Spawned FX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*           Spawned_Teleport_In_FX                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UGCN_RezIn_C::Set_Additional_Niagara_Parameters_on_Spawned_FX(class UNiagaraComponent* Spawned_Teleport_In_FX)
{
	static auto Func = Class->GetFunction("GCN_RezIn_C", "Set Additional Niagara Parameters on Spawned FX");

	Params::UGCN_RezIn_C_Set_Additional_Niagara_Parameters_on_Spawned_FX_Params Parms;

	Parms.Spawned_Teleport_In_FX = Spawned_Teleport_In_FX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezIn.GCN_RezIn_C.EndVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGCN_RezIn_C::EndVFX()
{
	static auto Func = Class->GetFunction("GCN_RezIn_C", "EndVFX");

	Params::UGCN_RezIn_C_EndVFX_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezIn.GCN_RezIn_C.Set Additional Niagara Parameter on Drone FX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*           Drone_FX                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UGCN_RezIn_C::Set_Additional_Niagara_Parameter_on_Drone_FX(class UNiagaraComponent* Drone_FX)
{
	static auto Func = Class->GetFunction("GCN_RezIn_C", "Set Additional Niagara Parameter on Drone FX");

	Params::UGCN_RezIn_C_Set_Additional_Niagara_Parameter_on_Drone_FX_Params Parms;

	Parms.Drone_FX = Drone_FX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezIn.GCN_RezIn_C.OnCosmeticPart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerPawn*             Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCustomCharacterPart*        Part                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      MeshPart                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EFortCustomPartType     PartType                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGCN_RezIn_C::OnCosmeticPart(class UFortPlayerPawn* Pawn, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, enum class EFortCustomPartType PartType)
{
	static auto Func = Class->GetFunction("GCN_RezIn_C", "OnCosmeticPart");

	Params::UGCN_RezIn_C_OnCosmeticPart_Params Parms;

	Parms.Pawn = Pawn;
	Parms.Part = Part;
	Parms.MeshPart = MeshPart;
	Parms.PartType = PartType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezIn.GCN_RezIn_C.TriggerVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGCN_RezIn_C::TriggerVFX()
{
	static auto Func = Class->GetFunction("GCN_RezIn_C", "TriggerVFX");

	Params::UGCN_RezIn_C_TriggerVFX_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RezIn.GCN_RezIn_C.ExecuteUbergraph_GCN_RezIn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDelegateHandleController   CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out    ()
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_Event_MyTarget                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters                                          (ConstParm, ContainsInstancedReference)
// TArray<class UFXSystemComponent*>  K2Node_Event_ParticleComponents                                  (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     K2Node_Event_AudioComponents                                     (ConstParm, ReferenceParm, ContainsInstancedReference)
// class ULegacyCameraShake*          K2Node_Event_BurstCameraShakeInstance                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDecalActor*                 K2Node_Event_BurstDecalInstance                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerPawn_Athena_C*        K2Node_DynamicCast_AsPlayer_Pawn_Athena                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           K2Node_CustomEvent_Spawned_Teleport_In_FX                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           K2Node_CustomEvent_Drone_FX                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UMaterialInterface>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// struct FGuid                       CallFunc_BP_ApplyMaterialOverrideLocalWithFlags_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveMaterialOverrideLocal_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstanceDynamic*>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class UFortPlayerPawn*             K2Node_CustomEvent_Pawn                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCustomCharacterPart*        K2Node_CustomEvent_Part                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      K2Node_CustomEvent_MeshPart                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EFortCustomPartType     K2Node_CustomEvent_PartType                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_UpdateDissolveFx_MaxLightIntensity_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGCN_RezIn_C::ExecuteUbergraph_GCN_RezIn(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDelegateHandleController& CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out, bool CallFunc_IsValid_ReturnValue, class UActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class UDecalActor* K2Node_Event_BurstDecalInstance, class UPlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class UNiagaraComponent* K2Node_CustomEvent_Spawned_Teleport_In_FX, class UNiagaraComponent* K2Node_CustomEvent_Drone_FX, TSoftObjectPtr<class UMaterialInterface> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, const struct FGuid& CallFunc_BP_ApplyMaterialOverrideLocalWithFlags_ReturnValue, bool CallFunc_RemoveMaterialOverrideLocal_ReturnValue, TArray<class UMaterialInstanceDynamic*>& K2Node_MakeArray_Array, class UFortPlayerPawn* K2Node_CustomEvent_Pawn, class UCustomCharacterPart* K2Node_CustomEvent_Part, class USkeletalMeshComponent* K2Node_CustomEvent_MeshPart, enum class EFortCustomPartType K2Node_CustomEvent_PartType, float CallFunc_UpdateDissolveFx_MaxLightIntensity_ImplicitCast)
{
	static auto Func = Class->GetFunction("GCN_RezIn_C", "ExecuteUbergraph_GCN_RezIn");

	Params::UGCN_RezIn_C_ExecuteUbergraph_GCN_RezIn_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out = CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_MyTarget = K2Node_Event_MyTarget;
	Parms.K2Node_Event_Parameters = K2Node_Event_Parameters;
	Parms.K2Node_Event_ParticleComponents = K2Node_Event_ParticleComponents;
	Parms.K2Node_Event_AudioComponents = K2Node_Event_AudioComponents;
	Parms.K2Node_Event_BurstCameraShakeInstance = K2Node_Event_BurstCameraShakeInstance;
	Parms.K2Node_Event_BurstDecalInstance = K2Node_Event_BurstDecalInstance;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Athena = K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Spawned_Teleport_In_FX = K2Node_CustomEvent_Spawned_Teleport_In_FX;
	Parms.K2Node_CustomEvent_Drone_FX = K2Node_CustomEvent_Drone_FX;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_BP_ApplyMaterialOverrideLocalWithFlags_ReturnValue = CallFunc_BP_ApplyMaterialOverrideLocalWithFlags_ReturnValue;
	Parms.CallFunc_RemoveMaterialOverrideLocal_ReturnValue = CallFunc_RemoveMaterialOverrideLocal_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CustomEvent_Pawn = K2Node_CustomEvent_Pawn;
	Parms.K2Node_CustomEvent_Part = K2Node_CustomEvent_Part;
	Parms.K2Node_CustomEvent_MeshPart = K2Node_CustomEvent_MeshPart;
	Parms.K2Node_CustomEvent_PartType = K2Node_CustomEvent_PartType;
	Parms.CallFunc_UpdateDissolveFx_MaxLightIntensity_ImplicitCast = CallFunc_UpdateDissolveFx_MaxLightIntensity_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
