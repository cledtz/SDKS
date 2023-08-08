#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x210 - 0x210)
// BlueprintGeneratedClass GCN_Physics_Tree_Destruction_Burst.GCN_Physics_Tree_Destruction_Burst_C
class UGCN_Physics_Tree_Destruction_Burst_C : public UFortGameplayCueNotify_Burst
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_Physics_Tree_Destruction_Burst_C");
		return Clss;
	}

	void OnBurstGeneric(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class UDecalActor* BurstDecalInstance, int32 CallFunc_Array_Length_ReturnValue, class UBGA_PhysicsTreeLog_C* K2Node_DynamicCast_AsBGA_Physics_Tree_Log, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, class UFXSystemComponent* CallFunc_Array_Get_Item, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
