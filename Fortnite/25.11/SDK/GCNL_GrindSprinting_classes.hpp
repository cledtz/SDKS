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

// 0x18 (0x978 - 0x960)
// BlueprintGeneratedClass GCNL_GrindSprinting.GCNL_GrindSprinting_C
class AGCNL_GrindSprinting_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x960(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       BoostAudio;                                        // 0x968(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       BoostEndAudio;                                     // 0x970(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_GrindSprinting_C");
		return Clss;
	}

	void OnLoopingStartGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void OnRemovalGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ExecuteUbergraph_GCNL_GrindSprinting(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, bool CallFunc_IsValid_ReturnValue_3, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
