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

// 0x31 (0x991 - 0x960)
// BlueprintGeneratedClass GCNL_Vent_Enter.GCNL_Vent_Enter_C
class AGCNL_Vent_Enter_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x960(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                 PostProcess;                                       // 0x968(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FadePPVol_LERP_6D28D8B64202D10F474B48B80194DA6D;   // 0x970(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FadePPVol__Direction_6D28D8B64202D10F474B48B80194DA6D; // 0x974(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8780[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    FadePPVol;                                         // 0x978(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CameraShakeClass;                                  // 0x980(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ULegacyCameraShake*                    CameraShake;                                       // 0x988(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         UsePP;                                             // 0x990(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_Vent_Enter_C");
		return Clss;
	}

	void FadePPVol__FinishedFunc();
	void FadePPVol__UpdateFunc();
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ExecuteUbergraph_GCNL_Vent_Enter(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, float CallFunc_BreakGameplayCueParameters_NormalizedMagnitude, float CallFunc_BreakGameplayCueParameters_RawMagnitude, const struct FGameplayEffectContextHandle& CallFunc_BreakGameplayCueParameters_EffectContext, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_MatchedTagName, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_OriginalTag, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedSourceTags, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedTargetTags, const struct FVector& CallFunc_BreakGameplayCueParameters_Location, const struct FVector& CallFunc_BreakGameplayCueParameters_Normal, class AActor* CallFunc_BreakGameplayCueParameters_Instigator, class AActor* CallFunc_BreakGameplayCueParameters_EffectCauser, class UObject* CallFunc_BreakGameplayCueParameters_SourceObject, class UPhysicalMaterial* CallFunc_BreakGameplayCueParameters_PhysicalMaterial, int32 CallFunc_BreakGameplayCueParameters_GameplayEffectLevel, int32 CallFunc_BreakGameplayCueParameters_AbilityLevel, class USceneComponent* CallFunc_BreakGameplayCueParameters_TargetAttachComponent, bool CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess_1, class UCameraShakeBase* CallFunc_StartCameraShake_ReturnValue, class UCameraShakeBase* CallFunc_StartCameraShake_ReturnValue_1, class ULegacyCameraShake* CallFunc_Conv_LegacyCameraShake_ReturnValue, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
