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

// 0x8 (0xAF0 - 0xAE8)
// BlueprintGeneratedClass GCNL_RollingEffects_Stone.GCNL_RollingEffects_Stone_C
class AGCNL_RollingEffects_Stone_C : public AGCNL_RollingEffects_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAE8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_RollingEffects_Stone_C");
		return Clss;
	}

	void OnRemovalGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnLoopingStartGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void ExecuteUbergraph_GCNL_RollingEffects_Stone(int32 EntryPoint, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class AProp_PhysicsBoulder_Parent_C* K2Node_DynamicCast_AsProp_Physics_Boulder_Parent, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AProp_PhysicsBoulder_Parent_C* K2Node_DynamicCast_AsProp_Physics_Boulder_Parent_1, bool K2Node_DynamicCast_bSuccess_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
