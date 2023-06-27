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
// BlueprintGeneratedClass GCNL_RidingSprint_SpeedLines.GCNL_RidingSprint_SpeedLines_C
class AGCNL_RidingSprint_SpeedLines_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x960(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USoundBase*                            SpeedLinesAudio;                                   // 0x968(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       SpeedlinesAudioComp;                               // 0x970(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_RidingSprint_SpeedLines_C");
		return Clss;
	}

	void OnApplicationGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnRemovalGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ExecuteUbergraph_GCNL_RidingSprint_SpeedLines(int32 EntryPoint, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance_1, class ADecalActor* K2Node_Event_BurstDecalInstance_1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
