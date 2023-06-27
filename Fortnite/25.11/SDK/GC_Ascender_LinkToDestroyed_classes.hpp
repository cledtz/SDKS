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

// 0x0 (0x210 - 0x210)
// BlueprintGeneratedClass GC_Ascender_LinkToDestroyed.GC_Ascender_LinkToDestroyed_C
class UGC_Ascender_LinkToDestroyed_C : public UFortGameplayCueNotify_Burst
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GC_Ascender_LinkToDestroyed_C");
		return Clss;
	}

	void OnBurstGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance, class UFXSystemComponent* CallFunc_Array_Get_Item, class AB_Athena_Zipline_Ascender_C* K2Node_DynamicCast_AsB_Athena_Zipline_Ascender, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_GetUpVector_ReturnValue, const struct FRotator& CallFunc_RotatorFromAxisAndAngle_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
