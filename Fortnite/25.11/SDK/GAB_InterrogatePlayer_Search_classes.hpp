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

// 0x118 (0xC70 - 0xB58)
// BlueprintGeneratedClass GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C
class UGAB_InterrogatePlayer_Search_C : public UFortGameplayAbility_CarryPlayer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xB60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerAthena*           PlayerController;                                  // 0xB68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       InterrogatedPlayer;                                // 0xB70(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Anim_Search;                                       // 0xB78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  InterrogateHolster;                                // 0xB80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LootTierGroupName;                                 // 0xB84(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*              ItemDefinition;                                    // 0xB88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        NumberToSpawn;                                     // 0xB90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_876A[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               LootSpawnOffset;                                   // 0xB98(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        MaxDropsInstance;                                  // 0xBB0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        NumDropsInstance;                                  // 0xBD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_876B[0x4];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        KeycardDropBias;                                   // 0xBE0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UFortWorldItemDefinition*>      KeycardItemDefinitions;                            // 0xC08(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          T_Keycard_Yacht;                                   // 0xC18(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          T_Keycard_OilRig;                                  // 0xC1C(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          T_Keycard_SharkIsland;                             // 0xC20(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          T_Keycard_HQ;                                      // 0xC24(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          T_Keycard_MountainBase;                            // 0xC28(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_876C[0x4];                                     // Fixing Size After Last Property..
	struct FTimerHandle                          Timer_Interrogation;                               // 0xC30(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 T_ReticleHUD;                                      // 0xC38(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          T_NPC;                                             // 0xC58(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_876D[0x4];                                     // Fixing Size After Last Property..
	class UClass*                                GE_Cooldown;                                       // 0xC60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_PickedUp;                                       // 0xC68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_InterrogatePlayer_Search_C");
		return Clss;
	}

	void ApplyGameplayEffectToNPC(class UClass* GameplayEffect, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPlayerPawn* CallFunc_GetDBNOHoistee_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, FInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue);
	void DropKeycard(bool CallFunc_IsDedicatedServer_ReturnValue, int32 Temp_int_Variable, bool CallFunc_GetKeycardToDrop_HasKeycard, class UFortWorldItemDefinition* CallFunc_GetKeycardToDrop_Output, float CallFunc_GetValueAtLevel_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, bool CallFunc_RandomBoolWithWeight_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AFortPickup* CallFunc_K2_SpawnPickupInWorld_ReturnValue, double CallFunc_FTrunc_A_ImplicitCast);
	void GetKeycardToDrop(bool* HasKeycard, class UFortWorldItemDefinition** Output, int32 KeycardIndex, class UFortWorldItemDefinition* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, FInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1, FInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput_2, bool CallFunc_HasMatchingGameplayTag_ReturnValue_2, FInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput_3, bool CallFunc_HasMatchingGameplayTag_ReturnValue_3, FInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput_4, bool CallFunc_HasMatchingGameplayTag_ReturnValue_4, FInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput_5, bool CallFunc_HasMatchingGameplayTag_ReturnValue_5);
	void DropLoot(int32 Temp_int_Array_Index_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<struct FFortItemEntry>& CallFunc_PickLootDrops_OutLootToDrop, bool CallFunc_PickLootDrops_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FFortItemEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UFortWorldItemDefinition* K2Node_DynamicCast_AsFort_World_Item_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AFortPickup* CallFunc_K2_SpawnPickupInWorld_ReturnValue, double CallFunc_FTrunc_A_ImplicitCast);
	void ToggleReticleVisibility(bool Hide, class FName Temp_name_Variable, class UFortHUDContext* CallFunc_GetContext_ReturnValue);
	void EndAbilityCleanup(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void InitAbility(bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* CallFunc_GetDBNOHoistee_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess_1, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue);
	void Completed_6BBDC9B445D4280492A25E8E5EA7A53D(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_6BBDC9B445D4280492A25E8E5EA7A53D(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_6BBDC9B445D4280492A25E8E5EA7A53D(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Added_9291D75D4A0949E1C5B7E49C1FD11F8B();
	void OnPress_2000C5AE43E9D757FF188B85CF911E39(float TimeWaited);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnDied_Event_0(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnDied_Event_1(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void ExecuteUbergraph_GAB_InterrogatePlayer_Search(int32 EntryPoint, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_1, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, float K2Node_CustomEvent_TimeWaited, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, float Temp_real_Variable, class UAbilityTask_WaitInputPress* CallFunc_WaitInputPress_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_bWasCancelled, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class AActor* K2Node_CustomEvent_DamagedActor_1, float K2Node_CustomEvent_Damage_1, class AController* K2Node_CustomEvent_InstigatedBy_1, class AActor* K2Node_CustomEvent_DamageCauser_1, const struct FVector& K2Node_CustomEvent_HitLocation_1, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent_1, class FName K2Node_CustomEvent_BoneName_1, const struct FVector& K2Node_CustomEvent_Momentum_1, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsValid_ReturnValue_5, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class AFortPlayerPawn* CallFunc_GetDBNOHoistee_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_2, int32 CallFunc_IncrementAnalyticMatchCount_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
