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

// 0x70 (0x9D0 - 0x960)
// BlueprintGeneratedClass GCN_Loop_GhostMode.GCN_Loop_GhostMode_C
class AGCN_Loop_GhostMode_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x960(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        FadeMaterialsTL_Lerp_D7B0BAAD47F48403BE23B98F38D8CA3E; // 0x968(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FadeMaterialsTL__Direction_D7B0BAAD47F48403BE23B98F38D8CA3E; // 0x96C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C5B[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    FadeMaterialsTL;                                   // 0x970(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          HitGlowColor;                                      // 0x978(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          HotGlowOuterColor;                                 // 0x988(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       HitGlowFresnelBrightness;                          // 0x998(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       HitGlowFresnelExponent;                            // 0x9A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Glow_Priority;                                     // 0x9A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            StopSoundCue;                                      // 0x9B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            StartSoundCue;                                     // 0x9B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FInterfaceProperty_                          TargetPawn;                                        // 0x9C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_Loop_GhostMode_C");
		return Clss;
	}

	void Highlight_Lerp(double Alpha, struct FPawnHighlight* Highlight, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_1, const struct FPawnHighlight& K2Node_MakeStruct_PawnHighlight, float CallFunc_LinearColorLerp_Alpha_ImplicitCast, float CallFunc_LinearColorLerp_Alpha_ImplicitCast_1, float K2Node_MakeStruct_Priority_28_E2E1B5344846E187B9C11B863A7F0698_ImplicitCast, float K2Node_MakeStruct_FresnelExponent_24_B427CF0C441AA37ED49833BF7579DE6D_ImplicitCast, float K2Node_MakeStruct_FresnelBrightness_23_52B0F96447FF640F47DF2895B0602E92_ImplicitCast);
	void FadeMaterialsTL__FinishedFunc();
	void FadeMaterialsTL__UpdateFunc();
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void FadeMaterialsIn();
	void FadeMaterialsOut();
	void ExecuteUbergraph_GCN_Loop_GhostMode(int32 EntryPoint, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, float CallFunc_BreakGameplayCueParameters_NormalizedMagnitude, float CallFunc_BreakGameplayCueParameters_RawMagnitude, const struct FGameplayEffectContextHandle& CallFunc_BreakGameplayCueParameters_EffectContext, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_MatchedTagName, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_OriginalTag, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedSourceTags, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedTargetTags, const struct FVector& CallFunc_BreakGameplayCueParameters_Location, const struct FVector& CallFunc_BreakGameplayCueParameters_Normal, class AActor* CallFunc_BreakGameplayCueParameters_Instigator, class AActor* CallFunc_BreakGameplayCueParameters_EffectCauser, class UObject* CallFunc_BreakGameplayCueParameters_SourceObject, class UPhysicalMaterial* CallFunc_BreakGameplayCueParameters_PhysicalMaterial, int32 CallFunc_BreakGameplayCueParameters_GameplayEffectLevel, int32 CallFunc_BreakGameplayCueParameters_AbilityLevel, class USceneComponent* CallFunc_BreakGameplayCueParameters_TargetAttachComponent, bool CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FInterfaceProperty_ K2Node_DynamicCast_AsPawn_Highlight_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, const struct FPawnHighlight& CallFunc_Highlight_Lerp_Highlight, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FPawnHighlight& CallFunc_Highlight_Lerp_Highlight_1, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, double CallFunc_Highlight_Lerp_Alpha_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
