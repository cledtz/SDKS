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

// 0x88 (0x9F0 - 0x968)
// BlueprintGeneratedClass GCNL_Athena_Tether.GCNL_Athena_Tether_C
class UGCNL_Athena_Tether_C : public UFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x968(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortLayeredAudioComponent*            FortLayeredAudio;                                  // 0x970(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     LandFX;                                            // 0x978(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     WaterFX;                                           // 0x980(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  RightSki;                                          // 0x988(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  LeftSki;                                           // 0x990(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ScaleInSkis_SkiScalar_93783D4A4F91BF9F887B16977978DDB4; // 0x998(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ScaleInSkis__Direction_93783D4A4F91BF9F887B16977978DDB4; // 0x99C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9500[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    ScaleInSkis;                                       // 0x9A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerPawn*                       OwningFPP;                                         // 0x9A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInWater;                                         // 0x9B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9501[0x7];                                     // Fixing Size After Last Property..
	double                                       NormalizedSpeed;                                   // 0x9B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TurnSpeed;                                         // 0x9C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ForceFeedbackIntensity;                            // 0x9C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ScaleInSkisTimerHandle;                            // 0x9D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       SkiScaleInDelay;                                   // 0x9D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FInterfaceProperty_                          CameraLensEffectInterface;                         // 0x9E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_Athena_Tether_C");
		return Clss;
	}

	bool OnRemove(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_K2_IsValidTimerHandle_ReturnValue);
	bool WhileActive(class UActor* MyTarget, struct FGameplayCueParameters& Parameters);
	void UpdateAudio(int32 Surface, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue, float CallFunc_SetFloatParameterExt_Value_ImplicitCast, float CallFunc_SetFloatParameterExt_Value_ImplicitCast_1, float CallFunc_SetFloatParameterExt_Value_ImplicitCast_2);
	void ScaleInSkis__FinishedFunc();
	void ScaleInSkis__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);
	void OnApplication(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class UDecalActor* BurstDecalInstance);
	void OnRemoval(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class UDecalActor* BurstDecalInstance);
	void BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature(class UAudioComponent* AudioComponent, class FName ParameterName, int32 OneshotIndex);
	void StartFF();
	void UpdateFF();
	void StopFF();
	void InitializeTetherGCNL(class UObject* Object);
	void ReceiveBeginPlay();
	void ScaleInSkisForPlayer();
	void ExecuteUbergraph_GCNL_Athena_Tether(int32 EntryPoint, class UFXSystemComponent* CallFunc_GetPrimaryParticleComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, enum class EInterfaceValidResult CallFunc_IsInterfaceValid_Result, enum class EDynamicForceFeedbackAction Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, float K2Node_Event_DeltaSeconds, class UActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance_1, class UDecalActor* K2Node_Event_BurstDecalInstance_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, class UActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class UDecalActor* K2Node_Event_BurstDecalInstance, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, bool CallFunc_K2_AttachToComponent_ReturnValue_1, class UAudioComponent* K2Node_ComponentBoundEvent_AudioComponent, class FName K2Node_ComponentBoundEvent_ParameterName, int32 K2Node_ComponentBoundEvent_OneshotIndex, int32 CallFunc_Conv_BoolToInt_ReturnValue, FInterfaceProperty_ CallFunc_SetIntParameter_self_CastInput, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, class UFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1, class UActor* CallFunc_GetViewTarget_ReturnValue, class UNPC_Pawn_Wildlife_Parent_C* K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent, bool K2Node_DynamicCast_bSuccess, FInterfaceProperty_ CallFunc_AddGenericCameraLensEffect_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, double CallFunc_Abs_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FVector& CallFunc_GetVelocity_ReturnValue_1, class UFortWaterBodyActor* CallFunc_GetCurrentWaterBody_ReturnValue, double CallFunc_VSize_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, class UObject* K2Node_CustomEvent_Object, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_SetCommonWaterFXParams_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_FClamp_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, class UActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, class UFXSystemComponent* CallFunc_GetPrimaryParticleComponent_ReturnValue_1, enum class EInterfaceValidResult CallFunc_IsInterfaceValid_Result_1, bool K2Node_SwitchEnum_CmpSuccess_1, class UActor* K2Node_DynamicCast_AsActor_1, bool K2Node_DynamicCast_bSuccess_3, enum class EInterfaceValidResult CallFunc_IsInterfaceValid_Result_2, bool K2Node_SwitchEnum_CmpSuccess_2, class UFXSystemComponent* CallFunc_GetPrimaryParticleComponent_ReturnValue_2, class UActor* K2Node_DynamicCast_AsActor_2, bool K2Node_DynamicCast_bSuccess_4, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, double CallFunc_Dot_VectorVector_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_1, double CallFunc_Conv_BoolToDouble_ReturnValue, double CallFunc_Multiply_VectorFloat_B_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1, float CallFunc_SetFloatParameter_Param_ImplicitCast_2, float CallFunc_SetFloatParameter_Param_ImplicitCast_3, float CallFunc_PlayDynamicForceFeedback_Intensity_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_4);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
