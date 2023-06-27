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

// 0xA1 (0x5C9 - 0x528)
// BlueprintGeneratedClass GCN_Athena_Interrogation_Reveal_Latent.GCN_Athena_Interrogation_Reveal_Latent_C
class AGCN_Athena_Interrogation_Reveal_Latent_C : public AFortGameplayCueNotify_BurstLatent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x528(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                 PostProcess;                                       // 0x530(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       SweepDuration;                                     // 0x538(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          SweepDelayHandle;                                  // 0x540(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       SweepRadius;                                       // 0x548(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SourceObjectLocation;                              // 0x550(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                  PlayerPawnAthena;                                  // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       DelayBeforeSweep;                                  // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          DelayBeforeSweepHandle;                            // 0x578(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ParticleRelativeLocation;                          // 0x580(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundMix*                             RevealSoundMix;                                    // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        StencilDuration;                                   // 0x5A0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bShouldPlayParticleEffectOnHand;                   // 0x5C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_Athena_Interrogation_Reveal_Latent_C");
		return Clss;
	}

	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, float CallFunc_BreakGameplayCueParameters_NormalizedMagnitude, float CallFunc_BreakGameplayCueParameters_RawMagnitude, const struct FGameplayEffectContextHandle& CallFunc_BreakGameplayCueParameters_EffectContext, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_MatchedTagName, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_OriginalTag, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedSourceTags, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedTargetTags, const struct FVector& CallFunc_BreakGameplayCueParameters_Location, const struct FVector& CallFunc_BreakGameplayCueParameters_Normal, class AActor* CallFunc_BreakGameplayCueParameters_Instigator, class AActor* CallFunc_BreakGameplayCueParameters_EffectCauser, class UObject* CallFunc_BreakGameplayCueParameters_SourceObject, class UPhysicalMaterial* CallFunc_BreakGameplayCueParameters_PhysicalMaterial, int32 CallFunc_BreakGameplayCueParameters_GameplayEffectLevel, int32 CallFunc_BreakGameplayCueParameters_AbilityLevel, class USceneComponent* CallFunc_BreakGameplayCueParameters_TargetAttachComponent, bool CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_OnExecute_ReturnValue, bool Temp_bool_Variable, class UObject* K2Node_Select_Default, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocallyControlled_ReturnValue);
	void BeginSweepFX();
	void EndSweepFX();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void PlayWorldSweep();
	void ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EEndPlayReason K2Node_Event_EndPlayReason, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
