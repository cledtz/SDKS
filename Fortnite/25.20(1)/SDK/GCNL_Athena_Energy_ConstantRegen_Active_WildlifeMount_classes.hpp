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
// BlueprintGeneratedClass GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C
class UGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C : public UFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x968(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          TacticalSprintTag;                                 // 0x970(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1F2[0x4];                                     // Fixing Size After Last Property..
	class UFXSystemComponent*                    MainNS;                                            // 0x978(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C");
		return Clss;
	}

	void Added_7482F31A49360978B87F339D76FC2BB7();
	void Removed_AD34CCD44592FD2F05DB47BDF9413ACC();
	void OnApplicationGeneric(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class UDecalActor* BurstDecalInstance);
	void ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class UDecalActor* K2Node_Event_BurstDecalInstance, class UAbilityAsync_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAddToActor_ReturnValue, class UFXSystemComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class UAbilityAsync_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
