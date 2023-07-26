#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0xA1 - 0x88)
// BlueprintGeneratedClass FN_TimedNiagaraNotify.FN_TimedNiagaraNotify_C
class UFN_TimedNiagaraNotify_C : public UFortAnimNotifyState_TimedNiagaraEffectVariant
{
public:
	bool                                         Print_Debug;                                       // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Glider_Deploy_Notify;                           // 0x89(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Set_in_Water_Niagara_Variable;                     // 0x8A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E4D[0x5];                                     // Fixing Size After Last Property..
	TArray<struct FAnimCurveParameterPair>       AnimCurveParameterPair;                            // 0x90(0x10)(Edit, BlueprintVisible)
	bool                                         IsLargeBodyPawn;                                   // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FN_TimedNiagaraNotify_C");
		return Clss;
	}

	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, struct FAnimNotifyEventReference& EventReference, const struct FAnimCurveParameterPair& CuurveParameterPair, class UNiagaraComponent* NiagaraSystem, const struct FVector& WaterSurfaceNormal, const struct FVector& WaterSurfaceLocation, double WaterImmersionDepth, int32 WaveParamTextureOffset, bool bIsInWater, class UFortMovementComp_Character* FortMovementComp, class APlayerPawn_Athena_C* Player_Pawn, class UFXSystemComponent* CallFunc_GetSpawnedEffect_ReturnValue, class UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System_Component, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetWaterSurfaceNormal_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class AFortWaterBodyActor* CallFunc_GetCurrentWaterBody_ReturnValue, bool CallFunc_IsSurfaceSwimming_ReturnValue, class AFortWaterBodyActor* CallFunc_GetCurrentWaterBody_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_GetWaterImmersionDepth_ReturnValue, const struct FVector& CallFunc_GetWaterSurfaceLocation_ReturnValue, class UFortMovementComp_Character* K2Node_DynamicCast_AsFort_Movement_Comp_Character, bool K2Node_DynamicCast_bSuccess_2, int32 Temp_int_Array_Index_Variable, const struct FAnimCurveParameterPair& CallFunc_Array_Get_Item, float CallFunc_GetCurveValue_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_SetVariableFloat_InValue_ImplicitCast, double K2Node_VariableSet_waterImmersionDepth_ImplicitCast);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, const struct FAnimCurveParameterPair& CurveNameParameterPair, const struct FParticleSysParam& ParticleParams, class UNiagaraComponent* NiagaraSystem, bool bisFrontEnd, class UFXSystemComponent* CallFunc_GetSpawnedEffect_ReturnValue, class UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System_Component, bool K2Node_DynamicCast_bSuccess, class FName Temp_name_Variable, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsCosmeticObjectDisplayedInFrontendContext_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
