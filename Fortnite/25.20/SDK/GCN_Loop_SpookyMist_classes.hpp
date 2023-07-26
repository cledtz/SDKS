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

// 0x20 (0xB28 - 0xB08)
// BlueprintGeneratedClass GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C
class AGCN_Loop_SpookyMist_C : public AFortGameplayCueNotifyLoop_SpookyMist
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB08(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                 PostProcess;                                       // 0xB10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Interaction_Fade_In_Out_Visbility_5529D6B24898E091AFB4668B43CFAB50; // 0xB18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_Interaction_Fade_In_Out__Direction_5529D6B24898E091AFB4668B43CFAB50; // 0xB1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E73[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    Timeline_Interaction_Fade_In_Out;                  // 0xB20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_Loop_SpookyMist_C");
		return Clss;
	}

	void Timeline_Interaction_Fade_In_Out__FinishedFunc();
	void Timeline_Interaction_Fade_In_Out__UpdateFunc();
	void OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void StartedInteract();
	void EndedInteract();
	void ExecuteUbergraph_GCN_Loop_SpookyMist(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
