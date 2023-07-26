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

// 0x129 (0xC51 - 0xB28)
// BlueprintGeneratedClass GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C
class UGAB_GenericApplyKnockback_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                GE_TransferKnockback;                              // 0xB30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_KnockbackActive;                                // 0xB38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       KnockbackPropagationThreshold;                     // 0xB40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          KnockbackUpMontage;                                // 0xB48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  KnockbackUpMontageSection;                         // 0xB50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_958E[0x4];                                     // Fixing Size After Last Property..
	class UAnimMontage*                          KnockbackDownMontage;                              // 0xB58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  KnockbackDownMontageSection;                       // 0xB60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_958F[0x4];                                     // Fixing Size After Last Property..
	class UAnimMontage*                          KnockbackLandMontage;                              // 0xB68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  KnockbackLandMontageSection;                       // 0xB70(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9590[0x4];                                     // Fixing Size After Last Property..
	class UAnimMontage*                          KnockbackLandToIdleMontage;                        // 0xB78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  KnockbackLandToIdleMontageSection;                 // 0xB80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9591[0x4];                                     // Fixing Size After Last Property..
	class UAnimMontage*                          KnockbackLandToStunMontage;                        // 0xB88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  KnockbackLandToStunMontageSection;                 // 0xB90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugDraw;                                         // 0xB94(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugNumbers;                                      // 0xB95(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugForceKnockbackValues;                         // 0xB96(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOrientToImpulse;                                  // 0xB97(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           ActiveKnockback;                                   // 0xB98(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               OrientDirection;                                   // 0xBA0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitDirection;                                      // 0xBB8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ImpulseDirectionVelocityOrRotation;                // 0xBD0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DebugLastLocation;                                 // 0xBE8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          TC_NPCStatusLockedInPlace;                         // 0xC00(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9592[0x4];                                     // Fixing Size After Last Property..
	double                                       LockedInPlaceKnockbackAngle;                       // 0xC08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LockedInPlaceKnockbackMagnitude;                   // 0xC10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_RestoreControlResistance;                       // 0xC18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_ImpactImmunity;                                 // 0xC20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           ActiveImpactImmunity;                              // 0xC28(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasImpactImmunity;                                // 0xC30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9593[0x7];                                     // Fixing Size After Last Property..
	double                                       F_OneFrameDelay;                                   // 0xC38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Event_Triggered_Knockback;                         // 0xC40(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         KnockbackFromFloorTrap;                            // 0xC44(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         KnockbackFromFloorTrap_PlayUpMontage;              // 0xC45(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         KnockbackFromFloorTrap_PlayDownMontage;            // 0xC46(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         KnockbackFromFloorTrap_PlayLandMontage;            // 0xC47(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Event_Control_Ended;                               // 0xC48(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_TrapKnockback_Tag;                              // 0xC4C(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowKnockbackAnimation;                           // 0xC50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_GenericApplyKnockback_C");
		return Clss;
	}

	void CheckForPawnDeath(class AFortPawn* Pawn, bool* IsDead, float CallFunc_GetHealth_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	void DoesUseInstagorInsteadOfImpulseDirection(const struct FGameplayEffectContextHandle& EffectContext, class UObject* OptionalObject, bool* Value, const struct FGameplayTag& GT_IgnoreImpulseDirection, bool Temp_bool_Variable, class UGameplayEffect* K2Node_DynamicCast_AsGameplay_Effect, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_EffectContextGetSourceObject_ReturnValue, FInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue);
	void GetPawnFromInstigator(class AActor* InActor, class AFortPlayerPawn** OutPawn, class AFortPlayerStateZone* K2Node_DynamicCast_AsFort_Player_State_Zone, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* CallFunc_GetCurrentPawn_ReturnValue);
	struct FVector CalculateImpulseDirection(class AFortPlayerPawn* InPawn, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_1, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, double CallFunc_VSize_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue);
	void OnCancelled_D744890E4C485F1C80B3E7864AE506FF();
	void OnInterrupted_D744890E4C485F1C80B3E7864AE506FF();
	void OnBlendOut_D744890E4C485F1C80B3E7864AE506FF();
	void OnCompleted_D744890E4C485F1C80B3E7864AE506FF();
	void OnCancelled_1F181048470CEB2EB6CC648039C5913C();
	void OnInterrupted_1F181048470CEB2EB6CC648039C5913C();
	void OnBlendOut_1F181048470CEB2EB6CC648039C5913C();
	void OnCompleted_1F181048470CEB2EB6CC648039C5913C();
	void OnCancelled_BA9188C34C234A4C47306FA73AAF0583();
	void OnInterrupted_BA9188C34C234A4C47306FA73AAF0583();
	void OnBlendOut_BA9188C34C234A4C47306FA73AAF0583();
	void OnCompleted_BA9188C34C234A4C47306FA73AAF0583();
	void OnCancelled_8FC7071F40FA26EA05D9688FB3E623A0();
	void OnInterrupted_8FC7071F40FA26EA05D9688FB3E623A0();
	void OnBlendOut_8FC7071F40FA26EA05D9688FB3E623A0();
	void OnCompleted_8FC7071F40FA26EA05D9688FB3E623A0();
	void OnCancelled_07DF210D46EDFA929CDBFFB162E8E4CF();
	void OnInterrupted_07DF210D46EDFA929CDBFFB162E8E4CF();
	void OnBlendOut_07DF210D46EDFA929CDBFFB162E8E4CF();
	void OnCompleted_07DF210D46EDFA929CDBFFB162E8E4CF();
	void OnReachedJumpApex();
	void SetupMontageSectionsAndOrientDirection();
	void OnPawnLanded(struct FHitResult& Hit);
	void OnHitPawn(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void MovementModeChangedDelegate_Event(class ACharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void BindMovementModeChange();
	void UnbindMovementModeChange();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void DebugLine();
	void ExecuteUbergraph_GAB_GenericApplyKnockback(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_IsValid_ReturnValue_1, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_2, bool CallFunc_IsFalling_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_3, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_4, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_5, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& K2Node_CustomEvent_Hit_1, const struct FVector& CallFunc_Normal_ReturnValue, class AActor* K2Node_CustomEvent_SelfActor, class AActor* K2Node_CustomEvent_OtherActor, const struct FVector& K2Node_CustomEvent_NormalImpulse, const struct FHitResult& K2Node_CustomEvent_Hit, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromHitResult_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, double CallFunc_VSize_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_6, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_7, FInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_8, class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_3, class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_11, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_12, bool CallFunc_BooleanAND_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, const struct FVector& CallFunc_Normal_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_14, class ACharacter* K2Node_CustomEvent_Character, enum class EMovementMode K2Node_CustomEvent_PrevMovementMode, uint8 K2Node_CustomEvent_PreviousCustomMode, bool CallFunc_CheckForPawnDeath_IsDead, bool CallFunc_IsValid_ReturnValue_8, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_15, bool CallFunc_IsValid_ReturnValue_9, class UFortMovementComp_Character* K2Node_DynamicCast_AsFort_Movement_Comp_Character, bool K2Node_DynamicCast_bSuccess, uint8 CallFunc_GetValidValue_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_16, bool CallFunc_NotEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_4, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_11, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, const struct FGameplayEventData& K2Node_Event_EventData, const struct FVector& CallFunc_GetImpulseData_ImpulseDirection, float CallFunc_GetImpulseData_KnockbackMagnitude, float CallFunc_GetImpulseData_KnockbackZAngle, bool CallFunc_DoesUseInstagorInsteadOfImpulseDirection_Value, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, const struct FVector& K2Node_Select_Default, class AActor* CallFunc_EffectContextGetInstigatorActor_ReturnValue, class AFortPlayerPawn* CallFunc_GetPawnFromPlayerStateZone_OutPawn, bool CallFunc_GetPawnFromPlayerStateZone_PawnReturned, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_CalculateImpulseDirection_ReturnValue, class ABuildingTrapFloor* K2Node_DynamicCast_AsBuilding_Trap_Floor, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_Event_bWasCancelled, bool Temp_bool_Variable_1, class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue_2, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue_1, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_17, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, float CallFunc_Delay_Duration_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast_1, float CallFunc_ApplyKnockback_KnockbackZAngle_ImplicitCast, float CallFunc_ApplyKnockback_KnockbackMagnitude_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
