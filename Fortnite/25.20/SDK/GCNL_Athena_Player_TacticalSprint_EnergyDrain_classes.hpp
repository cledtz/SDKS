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

// 0x38 (0x9A0 - 0x968)
// BlueprintGeneratedClass GCNL_Athena_Player_TacticalSprint_EnergyDrain.GCNL_Athena_Player_TacticalSprint_EnergyDrain_C
class AGCNL_Athena_Player_TacticalSprint_EnergyDrain_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x968(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       FrequencyToCheckEnergy;                            // 0x970(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAudioComponent*>               Audio_Components;                                  // 0x978(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UTacticalSprintEnergyComponent_C*      TacSprintComp;                                     // 0x988(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Pawn;                                              // 0x990(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentEnergyPercentage;                           // 0x998(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_Athena_Player_TacticalSprint_EnergyDrain_C");
		return Clss;
	}

	void OnLoopingStartGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void UpdateFX();
	void OnRemovalGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ExecuteUbergraph_GCNL_Athena_Player_TacticalSprint_EnergyDrain(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, class UTacticalSprintEnergyComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsLocallyViewed_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_GetCurrentEnergyPercentage_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Array_Index_Variable, class UAudioComponent* CallFunc_Array_Get_Item, FInterfaceProperty_ CallFunc_SetFloatParameter_self_CastInput, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, double K2Node_VariableSet_CurrentEnergyPercentage_ImplicitCast, float CallFunc_SetFloatParameter_InFloat_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
