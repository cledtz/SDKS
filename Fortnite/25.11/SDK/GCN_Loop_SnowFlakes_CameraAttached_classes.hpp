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

// 0x8 (0x968 - 0x960)
// BlueprintGeneratedClass GCN_Loop_SnowFlakes_CameraAttached.GCN_Loop_SnowFlakes_CameraAttached_C
class AGCN_Loop_SnowFlakes_CameraAttached_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x960(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_Loop_SnowFlakes_CameraAttached_C");
		return Clss;
	}

	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached(int32 EntryPoint, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
