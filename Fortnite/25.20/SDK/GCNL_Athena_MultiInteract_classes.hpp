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
// BlueprintGeneratedClass GCNL_Athena_MultiInteract.GCNL_Athena_MultiInteract_C
class AGCNL_Athena_MultiInteract_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x968(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Audio;                                             // 0x970(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentPitch;                                      // 0x978(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TargetPitch;                                       // 0x980(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<int32, double>                          Pitch_Map;                                         // 0x988(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       PreviousPitch;                                     // 0x9D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TargetProgressHandle;                              // 0x9E0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                  Effect_Causer_Pawn;                                // 0x9E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_Athena_MultiInteract_C");
		return Clss;
	}

	void OnApplicationGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnRemovalGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void CheckTargetProgress();
	void OnActorCountChanged(int32 InteractingActorCount, float MultiInteractMultiplier, float InteractingDuration);
	void ExecuteUbergraph_GCNL_Athena_MultiInteract(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance_1, class ADecalActor* K2Node_Event_BurstDecalInstance_1, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, float CallFunc_BreakGameplayCueParameters_NormalizedMagnitude, float CallFunc_BreakGameplayCueParameters_RawMagnitude, const struct FGameplayEffectContextHandle& CallFunc_BreakGameplayCueParameters_EffectContext, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_MatchedTagName, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_OriginalTag, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedSourceTags, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedTargetTags, const struct FVector& CallFunc_BreakGameplayCueParameters_Location, const struct FVector& CallFunc_BreakGameplayCueParameters_Normal, class AActor* CallFunc_BreakGameplayCueParameters_Instigator, class AActor* CallFunc_BreakGameplayCueParameters_EffectCauser, class UObject* CallFunc_BreakGameplayCueParameters_SourceObject, class UPhysicalMaterial* CallFunc_BreakGameplayCueParameters_PhysicalMaterial, int32 CallFunc_BreakGameplayCueParameters_GameplayEffectLevel, int32 CallFunc_BreakGameplayCueParameters_AbilityLevel, class USceneComponent* CallFunc_BreakGameplayCueParameters_TargetAttachComponent, bool CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_4, double CallFunc_RandomFloatInRange_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, int32 K2Node_CustomEvent_InteractingActorCount, float K2Node_CustomEvent_MultiInteractMultiplier, float K2Node_CustomEvent_InteractingDuration, double CallFunc_Conv_IntToDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double CallFunc_MapRangeClamped_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_FInterpTo_ReturnValue, float CallFunc_FadeIn_StartTime_ImplicitCast, float CallFunc_SetPitchMultiplier_NewPitchMultiplier_ImplicitCast, double K2Node_VariableSet_CurrentPitch_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
