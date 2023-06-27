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

// 0x20 (0xA60 - 0xA40)
// BlueprintGeneratedClass GCNL_Zipline_Travel.GCNL_Zipline_Travel_C
class AGCNL_Zipline_Travel_C : public AFortGameplayCueNotifyLoop_ZiplineTravel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA40(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       AttachSoundAudioComp;                              // 0xA48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                 NewVar_0;                                          // 0xA50(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_Zipline_Travel_C");
		return Clss;
	}

	void OnApplicationGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnRemovalGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ExecuteUbergraph_GCNL_Zipline_Travel(int32 EntryPoint, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance_1, class ADecalActor* K2Node_Event_BurstDecalInstance_1, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, class UAudioComponent* CallFunc_Array_Get_Item, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_AttachToComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
