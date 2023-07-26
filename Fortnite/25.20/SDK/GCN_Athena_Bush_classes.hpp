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

// 0x90 (0x9F8 - 0x968)
// BlueprintGeneratedClass GCN_Athena_Bush.GCN_Athena_Bush_C
class AGCN_Athena_Bush_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x968(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  OwningPlayer_BushMesh;                             // 0x970(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Arrow2;                                            // 0x978(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Arrow1;                                            // 0x980(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  BushMesh;                                          // 0x988(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Arrow;                                             // 0x990(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Trail_Leaves;                                      // 0x998(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        OpacityFade_OpacityFadeOut_B989988545DAA0B2E69D77AE069A4437; // 0x9A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                OpacityFade__Direction_B989988545DAA0B2E69D77AE069A4437; // 0x9A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89A0[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    OpacityFade;                                       // 0x9A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                PlayerPawn;                                        // 0x9B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Bush;                                          // 0x9B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsActive;                                          // 0x9C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89A1[0x7];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              MID_OwningClientBush;                              // 0x9C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FCurveTableRowHandle                  ClientBushOpacity;                                 // 0x9D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       TargetOpacity;                                     // 0x9E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       BushDestructionVFX;                                // 0x9E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            BushDestructionSFX;                                // 0x9F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_Athena_Bush_C");
		return Clss;
	}

	void OpacityFade__FinishedFunc();
	void OpacityFade__UpdateFunc();
	void On_Player_Step();
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_GCN_Athena_Bush(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_VSize_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocallyControlled_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena_2, bool K2Node_DynamicCast_bSuccess_2, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_K2_AttachToComponent_ReturnValue, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_EvaluateCurveTableRow_OutXY, bool CallFunc_EvaluateCurveTableRow_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class USoundBase* Temp_object_Variable, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, float K2Node_Event_DeltaSeconds, class USoundBase* Temp_object_Variable_1, bool Temp_bool_Variable, class USoundBase* K2Node_Select_Default, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double K2Node_VariableSet_TargetOpacity_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
