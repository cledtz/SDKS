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

// 0x18 (0x980 - 0x968)
// BlueprintGeneratedClass GCNL_Irwin_Slide.GCNL_Irwin_Slide_C
class AGCNL_Irwin_Slide_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x968(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USoundBase*                            SlideSound;                                        // 0x970(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       SlidingSoundComponent;                             // 0x978(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_Irwin_Slide_C");
		return Clss;
	}

	void OnLoopingStartGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void OnRemovalGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ExecuteUbergraph_GCNL_Irwin_Slide(int32 EntryPoint, enum class EFortTeamAffiliation Temp_byte_Variable, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_2, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue, double K2Node_Select_Default, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, float CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
