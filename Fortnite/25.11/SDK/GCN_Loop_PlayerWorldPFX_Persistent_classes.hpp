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

// 0x30 (0x990 - 0x960)
// BlueprintGeneratedClass GCN_Loop_PlayerWorldPFX_Persistent.GCN_Loop_PlayerWorldPFX_Persistent_C
class AGCN_Loop_PlayerWorldPFX_Persistent_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x960(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     NS_Loop_WorldFX_Persistent_Motes01;                // 0x968(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_Loop_WorldFX_Persistent;                        // 0x970(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                My_Target;                                         // 0x978(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer;                                             // 0x980(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       LoopingCheckTime;                                  // 0x988(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_Loop_PlayerWorldPFX_Persistent_C");
		return Clss;
	}

	void SpawnNiagara();
	void OnLoopingStartGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void OnApplicationGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnLoopingStartNiagara(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UNiagaraComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void OnRemovalGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent(int32 EntryPoint, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortPlayerCameraSpectator* K2Node_DynamicCast_AsFort_Player_Camera_Spectator, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class AActor* K2Node_Event_MyTarget_3, const struct FGameplayCueParameters& K2Node_Event_Parameters_3, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents_3, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_3, class AActor* K2Node_Event_MyTarget_2, const struct FGameplayCueParameters& K2Node_Event_Parameters_2, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents_2, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_2, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance_1, class ADecalActor* K2Node_Event_BurstDecalInstance_1, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UNiagaraComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, bool CallFunc_K2_AttachToComponent_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
