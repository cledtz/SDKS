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

// 0x8 (0xAF8 - 0xAF0)
// BlueprintGeneratedClass GCNL_RollingEffects_PhysicsTree.GCNL_RollingEffects_PhysicsTree_C
class AGCNL_RollingEffects_PhysicsTree_C : public AGCNL_RollingEffects_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_RollingEffects_PhysicsTree_C");
		return Clss;
	}

	void OnLoopingStartGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void OnRemovalGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree(int32 EntryPoint, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, class ABGA_PhysicsTreeLog_C* K2Node_DynamicCast_AsBGA_Physics_Tree_Log, bool K2Node_DynamicCast_bSuccess, class ABGA_PhysicsTreeLog_C* K2Node_DynamicCast_AsBGA_Physics_Tree_Log_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
