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

// 0x38 (0x998 - 0x960)
// BlueprintGeneratedClass GCN_Loop_Snow_Whiteout.GCN_Loop_Snow_Whiteout_C
class AGCN_Loop_Snow_Whiteout_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x960(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                 PostProcess;                                       // 0x968(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FadeinOut_Post_BDCA5FC943E3CD00D42B59A9A0D1C530;   // 0x970(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeinOut_Fade_BDCA5FC943E3CD00D42B59A9A0D1C530;   // 0x974(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FadeinOut__Direction_BDCA5FC943E3CD00D42B59A9A0D1C530; // 0x978(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C85[0x7];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    FadeInOut;                                         // 0x980(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundOnFadeIn;                                     // 0x988(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundOnFadeOut;                                    // 0x990(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_Loop_Snow_Whiteout_C");
		return Clss;
	}

	void FadeinOut__FinishedFunc();
	void FadeinOut__UpdateFunc();
	void ReceiveDestroyed();
	void OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void ExecuteUbergraph_GCN_Loop_Snow_Whiteout(int32 EntryPoint, bool Temp_bool_Variable, double Temp_real_Variable, double Temp_real_Variable_1, bool K2Node_SwitchEnum_CmpSuccess, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, float CallFunc_BreakGameplayCueParameters_NormalizedMagnitude, float CallFunc_BreakGameplayCueParameters_RawMagnitude, const struct FGameplayEffectContextHandle& CallFunc_BreakGameplayCueParameters_EffectContext, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_MatchedTagName, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_OriginalTag, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedSourceTags, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedTargetTags, const struct FVector& CallFunc_BreakGameplayCueParameters_Location, const struct FVector& CallFunc_BreakGameplayCueParameters_Normal, class AActor* CallFunc_BreakGameplayCueParameters_Instigator, class AActor* CallFunc_BreakGameplayCueParameters_EffectCauser, class UObject* CallFunc_BreakGameplayCueParameters_SourceObject, class UPhysicalMaterial* CallFunc_BreakGameplayCueParameters_PhysicalMaterial, int32 CallFunc_BreakGameplayCueParameters_GameplayEffectLevel, int32 CallFunc_BreakGameplayCueParameters_AbilityLevel, class USceneComponent* CallFunc_BreakGameplayCueParameters_TargetAttachComponent, bool CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue_1, class AFortPlayerController* CallFunc_Array_Get_Item_1, double K2Node_Select_Default, int32 CallFunc_Conv_BoolToInt_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, FInterfaceProperty_ CallFunc_SetIntParameter_self_CastInput, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, float CallFunc_SetPlayRate_NewRate_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
