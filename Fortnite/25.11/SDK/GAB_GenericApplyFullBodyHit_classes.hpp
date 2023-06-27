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

// 0x70 (0xB98 - 0xB28)
// BlueprintGeneratedClass GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C
class UGAB_GenericApplyFullBodyHit_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                GE_FullBodyHitActiveEffect;                        // 0xB30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitImpulse;                                        // 0xB38(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_RestoreControlResistance;                       // 0xB50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           ActiveImpactImmunity;                              // 0xB58(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_ImpactImmunity;                                 // 0xB60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           ActiveFullBodyHit;                                 // 0xB68(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Event_Triggered_FullBodyHit;                       // 0xB70(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Event_Control_Ended;                               // 0xB74(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_TransferFullBodyHit;                            // 0xB78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          FullBodyHitMontage;                                // 0xB80(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  FullBodyHitMontageSection;                         // 0xB88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EndAbilityOnBlendOut;                              // 0xB8C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8E6A[0x3];                                     // Fixing Size After Last Property..
	double                                       Duration_NoAnim;                                   // 0xB90(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_GenericApplyFullBodyHit_C");
		return Clss;
	}

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags);
	void OnCancelled_25E5E66442E815EB40A6DB8205FE0D98();
	void OnInterrupted_25E5E66442E815EB40A6DB8205FE0D98();
	void OnBlendOut_25E5E66442E815EB40A6DB8205FE0D98();
	void OnCompleted_25E5E66442E815EB40A6DB8205FE0D98();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnHitPawn(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void PickFullBodyHitMontageSection();
	void ExecuteUbergraph_GAB_GenericApplyFullBodyHit(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, bool K2Node_Event_bWasCancelled, class AActor* K2Node_CustomEvent_SelfActor, class AActor* K2Node_CustomEvent_OtherActor, const struct FVector& K2Node_CustomEvent_NormalImpulse, const struct FHitResult& K2Node_CustomEvent_Hit, const struct FGameplayEventData& K2Node_Event_EventData, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromHitResult_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FVector& CallFunc_GetImpulseData_ImpulseDirection, float CallFunc_GetImpulseData_KnockbackMagnitude, float CallFunc_GetImpulseData_KnockbackZAngle, bool CallFunc_IsValid_ReturnValue, class AFortPlayerPawn* CallFunc_GetPawnFromPlayerStateZone_OutPawn, bool CallFunc_GetPawnFromPlayerStateZone_PawnReturned, bool CallFunc_NotEqual_ClassClass_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue_1, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class FName CallFunc_SetFNameBasedOnHitDirection_NameResult, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_3, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue_1, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_4, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
