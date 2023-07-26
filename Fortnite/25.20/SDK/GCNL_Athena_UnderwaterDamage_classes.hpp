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

// 0x28 (0x990 - 0x968)
// BlueprintGeneratedClass GCNL_Athena_UnderwaterDamage.GCNL_Athena_UnderwaterDamage_C
class AGCNL_Athena_UnderwaterDamage_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x968(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       Intensity;                                         // 0x970(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            DamageTickSound;                                   // 0x978(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundMix*                             DrownSoundMix;                                     // 0x980(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                LocalTargetPawn;                                   // 0x988(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_Athena_UnderwaterDamage_C");
		return Clss;
	}

	void OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnRecurring(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void ExecuteUbergraph_GCNL_Athena_UnderwaterDamage(int32 EntryPoint, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_FClamp_ReturnValue, class AActor* K2Node_Event_MyTarget_2, const struct FGameplayCueParameters& K2Node_Event_Parameters_2, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents_2, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_2, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance_1, class ADecalActor* K2Node_Event_BurstDecalInstance_1, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, FInterfaceProperty_ CallFunc_SpawnGenericCameraLensEffect_ReturnValue, class UFXSystemComponent* CallFunc_GetPrimaryParticleComponent_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, FInterfaceProperty_ CallFunc_SetFloatParameter_self_CastInput, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_InFloat_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1, float CallFunc_ClientStartCameraShake_Scale_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
