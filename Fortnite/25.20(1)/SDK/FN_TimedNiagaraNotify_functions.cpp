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


// Function FN_TimedNiagaraNotify.FN_TimedNiagaraNotify_C.Received_NotifyTick
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              FrameDeltaTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnimCurveParameterPair     CuurveParameterPair                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     WaterSurfaceNormal                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     WaterSurfaceLocation                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             WaterImmersionDepth                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              WaveParamTextureOffset                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsInWater                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMovementComp_Character* FortMovementComp                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPlayerPawn_Athena_C*        Player_Pawn                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          CallFunc_GetSpawnedEffect_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           K2Node_DynamicCast_AsNiagara_Particle_System_Component           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetWaterSurfaceNormal_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerPawn_Athena_C*        K2Node_DynamicCast_AsPlayer_Pawn_Athena                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortWaterBodyActor*         CallFunc_GetCurrentWaterBody_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSurfaceSwimming_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWaterBodyActor*         CallFunc_GetCurrentWaterBody_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWaterImmersionDepth_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetWaterSurfaceLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMovementComp_Character* K2Node_DynamicCast_AsFort_Movement_Comp_Character                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnimCurveParameterPair     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_waterImmersionDepth_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UFN_TimedNiagaraNotify_C::Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, struct FAnimNotifyEventReference& EventReference, const struct FAnimCurveParameterPair& CuurveParameterPair, class UNiagaraComponent* NiagaraSystem, const struct FVector& WaterSurfaceNormal, const struct FVector& WaterSurfaceLocation, double WaterImmersionDepth, int32 WaveParamTextureOffset, bool bIsInWater, class UFortMovementComp_Character* FortMovementComp, class UPlayerPawn_Athena_C* Player_Pawn, class UFXSystemComponent* CallFunc_GetSpawnedEffect_ReturnValue, class UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System_Component, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetWaterSurfaceNormal_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, class UPlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UFortWaterBodyActor* CallFunc_GetCurrentWaterBody_ReturnValue, bool CallFunc_IsSurfaceSwimming_ReturnValue, class UFortWaterBodyActor* CallFunc_GetCurrentWaterBody_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_GetWaterImmersionDepth_ReturnValue, const struct FVector& CallFunc_GetWaterSurfaceLocation_ReturnValue, class UFortMovementComp_Character* K2Node_DynamicCast_AsFort_Movement_Comp_Character, bool K2Node_DynamicCast_bSuccess_2, int32 Temp_int_Array_Index_Variable, const struct FAnimCurveParameterPair& CallFunc_Array_Get_Item, float CallFunc_GetCurveValue_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_SetVariableFloat_InValue_ImplicitCast, double K2Node_VariableSet_waterImmersionDepth_ImplicitCast)
{
	static auto Func = Class->GetFunction("FN_TimedNiagaraNotify_C", "Received_NotifyTick");

	Params::UFN_TimedNiagaraNotify_C_Received_NotifyTick_Params Parms;

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.FrameDeltaTime = FrameDeltaTime;
	Parms.EventReference = EventReference;
	Parms.CuurveParameterPair = CuurveParameterPair;
	Parms.NiagaraSystem = NiagaraSystem;
	Parms.WaterSurfaceNormal = WaterSurfaceNormal;
	Parms.WaterSurfaceLocation = WaterSurfaceLocation;
	Parms.WaterImmersionDepth = WaterImmersionDepth;
	Parms.WaveParamTextureOffset = WaveParamTextureOffset;
	Parms.bIsInWater = bIsInWater;
	Parms.FortMovementComp = FortMovementComp;
	Parms.Player_Pawn = Player_Pawn;
	Parms.CallFunc_GetSpawnedEffect_ReturnValue = CallFunc_GetSpawnedEffect_ReturnValue;
	Parms.K2Node_DynamicCast_AsNiagara_Particle_System_Component = K2Node_DynamicCast_AsNiagara_Particle_System_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetWaterSurfaceNormal_ReturnValue = CallFunc_GetWaterSurfaceNormal_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Athena = K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_GetCurrentWaterBody_ReturnValue = CallFunc_GetCurrentWaterBody_ReturnValue;
	Parms.CallFunc_IsSurfaceSwimming_ReturnValue = CallFunc_IsSurfaceSwimming_ReturnValue;
	Parms.CallFunc_GetCurrentWaterBody_ReturnValue_1 = CallFunc_GetCurrentWaterBody_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetWaterImmersionDepth_ReturnValue = CallFunc_GetWaterImmersionDepth_ReturnValue;
	Parms.CallFunc_GetWaterSurfaceLocation_ReturnValue = CallFunc_GetWaterSurfaceLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Movement_Comp_Character = K2Node_DynamicCast_AsFort_Movement_Comp_Character;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast = CallFunc_SetVariableFloat_InValue_ImplicitCast;
	Parms.K2Node_VariableSet_waterImmersionDepth_ImplicitCast = K2Node_VariableSet_waterImmersionDepth_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FN_TimedNiagaraNotify.FN_TimedNiagaraNotify_C.Received_NotifyBegin
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              TotalDuration                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnimCurveParameterPair     CurveNameParameterPair                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam           ParticleParams                                                   (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               bisFrontEnd                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          CallFunc_GetSpawnedEffect_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           K2Node_DynamicCast_AsNiagara_Particle_System_Component           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCosmeticObjectDisplayedInFrontendContext_ReturnValue  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UFN_TimedNiagaraNotify_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, const struct FAnimCurveParameterPair& CurveNameParameterPair, const struct FParticleSysParam& ParticleParams, class UNiagaraComponent* NiagaraSystem, bool bisFrontEnd, class UFXSystemComponent* CallFunc_GetSpawnedEffect_ReturnValue, class UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System_Component, bool K2Node_DynamicCast_bSuccess, class FName Temp_name_Variable, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsCosmeticObjectDisplayedInFrontendContext_ReturnValue)
{
	static auto Func = Class->GetFunction("FN_TimedNiagaraNotify_C", "Received_NotifyBegin");

	Params::UFN_TimedNiagaraNotify_C_Received_NotifyBegin_Params Parms;

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.TotalDuration = TotalDuration;
	Parms.EventReference = EventReference;
	Parms.CurveNameParameterPair = CurveNameParameterPair;
	Parms.ParticleParams = ParticleParams;
	Parms.NiagaraSystem = NiagaraSystem;
	Parms.bisFrontEnd = bisFrontEnd;
	Parms.CallFunc_GetSpawnedEffect_ReturnValue = CallFunc_GetSpawnedEffect_ReturnValue;
	Parms.K2Node_DynamicCast_AsNiagara_Particle_System_Component = K2Node_DynamicCast_AsNiagara_Particle_System_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsCosmeticObjectDisplayedInFrontendContext_ReturnValue = CallFunc_IsCosmeticObjectDisplayedInFrontendContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
