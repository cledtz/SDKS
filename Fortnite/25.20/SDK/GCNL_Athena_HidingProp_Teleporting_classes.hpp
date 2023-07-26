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

// 0x48 (0x9B0 - 0x968)
// BlueprintGeneratedClass GCNL_Athena_HidingProp_Teleporting.GCNL_Athena_HidingProp_Teleporting_C
class AGCNL_Athena_HidingProp_Teleporting_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x968(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Timeline_0_LerpWhiteWash_3C12694840EC8C9B33E562A2C6B279BA; // 0x970(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_3C12694840EC8C9B33E562A2C6B279BA; // 0x974(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9F8E[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    Timeline_0;                                        // 0x978(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       _1PTravelAudio;                                    // 0x980(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FInterfaceProperty_                          LensEffectInterface;                               // 0x988(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AActor*                                LensEffectActor;                                   // 0x998(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USoundMix*                             _1pMixMod;                                         // 0x9A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       OwningActor;                                       // 0x9A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_Athena_HidingProp_Teleporting_C");
		return Clss;
	}

	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__DoFlash__EventFunc();
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ExecuteUbergraph_GCNL_Athena_HidingProp_Teleporting(int32 EntryPoint, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, FInterfaceProperty_ CallFunc_SpawnGenericCameraLensEffect_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UParticleSystemComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
