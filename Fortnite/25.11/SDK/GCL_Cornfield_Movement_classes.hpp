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
// BlueprintGeneratedClass GCL_Cornfield_Movement.GCL_Cornfield_Movement_C
class AGCL_Cornfield_Movement_C : public AFortGameplayCueNotify_Loop
{
public:
	class AFortPlayerPawn*                       TargetPawn;                                        // 0x960(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCL_Cornfield_Movement_C");
		return Clss;
	}

	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class USoundLibrarySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class USoundLibrarySubsystem* CallFunc_GetWorldSubsystem_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
