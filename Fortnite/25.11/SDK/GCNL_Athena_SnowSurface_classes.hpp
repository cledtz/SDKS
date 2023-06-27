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

// 0xF6 (0xA68 - 0x972)
// BlueprintGeneratedClass GCNL_Athena_SnowSurface.GCNL_Athena_SnowSurface_C
class AGCNL_Athena_SnowSurface_C : public AGCNL_Athena_Surface_Parent_C
{
public:
	uint8                                        Pad_8892[0x6];                                     // Fixing Size After Last Property..
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x978(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     FootStepFX;                                        // 0x980(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         bNotValid;                                         // 0x988(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bReplayMode;                                       // 0x989(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8893[0x6];                                     // Fixing Size After Last Property..
	class AFortReplaySpectatorAthena*            ReplayController;                                  // 0x990(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                GCParameters;                                      // 0x998(0xD0)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_Athena_SnowSurface_C");
		return Clss;
	}

	void OnPlayerFootstep(const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_BreakGameplayCueParameters_NormalizedMagnitude, float CallFunc_BreakGameplayCueParameters_RawMagnitude, const struct FGameplayEffectContextHandle& CallFunc_BreakGameplayCueParameters_EffectContext, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_MatchedTagName, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_OriginalTag, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedSourceTags, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedTargetTags, const struct FVector& CallFunc_BreakGameplayCueParameters_Location, const struct FVector& CallFunc_BreakGameplayCueParameters_Normal, class AActor* CallFunc_BreakGameplayCueParameters_Instigator, class AActor* CallFunc_BreakGameplayCueParameters_EffectCauser, class UObject* CallFunc_BreakGameplayCueParameters_SourceObject, class UPhysicalMaterial* CallFunc_BreakGameplayCueParameters_PhysicalMaterial, int32 CallFunc_BreakGameplayCueParameters_GameplayEffectLevel, int32 CallFunc_BreakGameplayCueParameters_AbilityLevel, class USceneComponent* CallFunc_BreakGameplayCueParameters_TargetAttachComponent, bool CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy, const struct FVector& CallFunc_GetCachedStepSurfaceNormal_ReturnValue, class FName CallFunc_GetTagName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetViewTarget_ReturnValue, bool CallFunc_OnSameTeam_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetCachedFootstepIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, const struct FTransform& CallFunc_SelectTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector4& CallFunc_MakeVector4_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, TArray<struct FVector4>& K2Node_MakeArray_Array, const struct FVector& CallFunc_SelectVector_ReturnValue);
	void OnLoopingStartNiagara(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UNiagaraComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters);
	void ExecuteUbergraph_GCNL_Athena_SnowSurface(int32 EntryPoint, class AActor* K2Node_Event_MyTarget, enum class EGameplayCueEvent K2Node_Event_EventType, const struct FGameplayCueParameters& K2Node_Event_Parameters, class AActor* K2Node_Event_MyTarget_3, const struct FGameplayCueParameters& K2Node_Event_Parameters_3, TArray<class UNiagaraComponent*>& K2Node_Event_ParticleComponents_2, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_2, class UNiagaraComponent* CallFunc_Array_Get_Item, bool CallFunc_OnLocalPlayersTeam_Return_Value, bool CallFunc_GetIsPlayingReplay_ReturnValue, class AFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, class AActor* K2Node_Event_MyTarget_2, const struct FGameplayCueParameters& K2Node_Event_Parameters_2, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class AFortReplaySpectatorAthena* K2Node_DynamicCast_AsFort_Replay_Spectator_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, bool CallFunc_IsMobilePlatform_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
