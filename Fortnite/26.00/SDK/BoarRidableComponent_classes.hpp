#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x44 (0xDC4 - 0xD80)
// BlueprintGeneratedClass BoarRidableComponent.BoarRidableComponent_C
class UBoarRidableComponent_C : public UCreatureBaseRidableComponent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USoundBase*                            BurtChargeStartSound;                              // 0xD88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       ChargeSoundComp;                                   // 0xD90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       SprintCooldDownTime;                               // 0xD98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GESprintImpactPawn;                                // 0xDA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          SprintImpactGameplayCueTag;                        // 0xDA8(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93AB[0x4];                                     // Fixing Size After Last Property 
	class UClass*                                GESprintImpactVehicle;                             // 0xDB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          SprintChargeImpact_Default_CueTag;                 // 0xDB8(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          SprintChargeImpact_Pawn_CueTag;                    // 0xDBC(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          SprintChargeImpact_DestroyBuild_CueTag;            // 0xDC0(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBoarRidableComponent_C* GetDefaultObj();

	void OnReaction(class UObject* Object, const struct FHitResult& HitResult, class UActor* RiderActor, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParametersFromHitResult_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, class UFortAthenaVehicle* K2Node_DynamicCast_AsFort_Athena_Vehicle, bool K2Node_DynamicCast_bSuccess, class UPawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_1, class UBuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetHealth_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UActor* CallFunc_GetOwner_ReturnValue_1, class UActor* CallFunc_GetOwner_ReturnValue_2, class UActor* CallFunc_GetOwner_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TArray<TSubclassOf<class UGameplayEffect>>& K2Node_MakeArray_Array, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_1, TArray<TSubclassOf<class UGameplayEffect>>& K2Node_MakeArray_Array_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void HandleRiderStoppedRiding(class URiderComponent* Rider);
	void HandleRiderStartedRiding(class URiderComponent* Rider);
	void HandleAbilityStarted();
	void ReceiveBeginPlay();
	void OnReactionEvent(class UActor* HitActor, bool bFromAsyncSweepBox, enum class EFCollisionReactionType CollisionReactionType, bool bIsFirstContinuousReactionOnDelayableActor, struct FHitResult& HitResult);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_BoarRidableComponent(int32 EntryPoint, class UActor* CallFunc_GetOwner_ReturnValue, class UFortAthenaCollisionReactionComponent* CallFunc_GetComponentByClass_ReturnValue, class URiderComponent* K2Node_Event_Rider_1, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class UActor* CallFunc_GetOwner_ReturnValue_1, class URiderComponent* K2Node_Event_Rider, class UActor* CallFunc_GetOwner_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue_3, class UActor* K2Node_CustomEvent_HitActor, bool K2Node_CustomEvent_bFromAsyncSweepBox, enum class EFCollisionReactionType K2Node_CustomEvent_CollisionReactionType, bool K2Node_CustomEvent_bIsFirstContinuousReactionOnDelayableActor, const struct FHitResult& K2Node_CustomEvent_HitResult, class UFortAthenaCollisionReactionComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, enum class EEndPlayReason K2Node_Event_EndPlayReason);
};

}


