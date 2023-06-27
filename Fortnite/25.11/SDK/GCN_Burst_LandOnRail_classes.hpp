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

// 0x8 (0x218 - 0x210)
// BlueprintGeneratedClass GCN_Burst_LandOnRail.GCN_Burst_LandOnRail_C
class UGCN_Burst_LandOnRail_C : public UFortGameplayCueNotify_Burst
{
public:
	struct FGameplayTag                          JumpLand;                                          // 0x210(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          StartLand;                                         // 0x214(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_Burst_LandOnRail_C");
		return Clss;
	}

	void OnBurstGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance, bool Temp_bool_Variable, class USoundLibrarySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class UBP_GrindingComponent_C* CallFunc_GetComponentByClass_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FGameplayTag& K2Node_Select_Default, const struct FSoundLibrarySimpleContextSettings& K2Node_MakeStruct_SoundLibrarySimpleContextSettings, const struct FSoundLibraryPlayResult& CallFunc_PlaySoundSimple_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
