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

// 0x58 (0x9C0 - 0x968)
// BlueprintGeneratedClass GCNL_EnvCampFire_Stoke.GCNL_EnvCampFire_Stoke_C
class UGCNL_EnvCampFire_Stoke_C : public UFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x968(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FScalableFloat                        Row_TickInterval;                                  // 0x970(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_MaxHeals;                                      // 0x998(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_EnvCampFire_Stoke_C");
		return Clss;
	}

	void OnLoopingStart(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void ExecuteUbergraph_GCNL_EnvCampFire_Stoke(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, FInterfaceProperty_ K2Node_DynamicCast_AsCampfire_Interface, bool K2Node_DynamicCast_bSuccess, class UParticleSystemComponent* CallFunc_Array_Get_Item, const struct FVector& CallFunc_GetLocationToSpawnFireVFX_WorldLocation, int32 CallFunc_Array_Length_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, bool CallFunc_Less_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
