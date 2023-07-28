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

// 0x1B1 (0xCD9 - 0xB28)
// BlueprintGeneratedClass GAB_AthenaDBNO.GAB_AthenaDBNO_C
class UGAB_AthenaDBNO_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                          DeathMontage;                                      // 0xB30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DeathHitDirection;                                 // 0xB38(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            DeathHitResult;                                    // 0xB50(0xE0)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FGameplayTagContainer                 DamageTags;                                        // 0xC30(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 GameplayStatusAfflicted;                           // 0xC50(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                          DeathMontageSkydive;                               // 0xC70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           DBNOBleedGEHandle;                                 // 0xC78(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  HolsterId;                                         // 0xC80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99E5[0x4];                                     // Fixing Size After Last Property..
	class UAnimMontage*                          DeathMontageSwimming;                              // 0xC88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerPawnAthena*                 FortPlayerPawn;                                    // 0xC90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                DBNOStart_GE_Class;                                // 0xC98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         ImprovedDBNO;                                      // 0xCA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99E6[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 Old_DBNO_Block_Tags;                               // 0xCA8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FActiveGameplayEffectHandle           GE_Handle__Health_Bonus;                           // 0xCC8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       TenacityAmount;                                    // 0xCD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETenacityType                     TenacityType;                                      // 0xCD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_AthenaDBNO_C");
		return Clss;
	}

	void Get_Custom_Tenacity(double* Tenacity);
	void Get_Max_Health_Tenacity(double* Tenacity, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, double K2Node_FunctionResult_Tenacity_ImplicitCast);
	void Apply_Health_Bonus(struct FActiveGameplayEffectHandle* EffectHandle, double LocalTenacityAmount, double CallFunc_Get_Custom_Tenacity_Tenacity, double CallFunc_Get_Max_Health_Tenacity_Tenacity, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast);
	void ApplyBleeding(struct FActiveGameplayEffectHandle* EffectHandle, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);
	class UAnimMontage* Get_DBNO_Montage(bool CallFunc_IsSurfaceSwimming_ReturnValue, bool CallFunc_IsSkydiving_ReturnValue);
	void Get_Initial_Heal_Amount(double* Health, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, double CallFunc_Get_Max_Health_Tenacity_Tenacity, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast);
	void InitializeDeathHitDirection(const struct FGameplayEventData& EventHitData, const struct FVector& CallFunc_GetImpulseData_ImpulseDirection, float CallFunc_GetImpulseData_KnockbackMagnitude, float CallFunc_GetImpulseData_KnockbackZAngle, const struct FHitResult& CallFunc_EffectContextGetHitResult_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
	void OnCancelled_F0F6785443BD2E74F5591884CB19F35F();
	void OnInterrupted_F0F6785443BD2E74F5591884CB19F35F();
	void OnBlendOut_F0F6785443BD2E74F5591884CB19F35F();
	void OnCompleted_F0F6785443BD2E74F5591884CB19F35F();
	void OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6();
	void OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void DropHeldObjects();
	void ExecuteUbergraph_GAB_AthenaDBNO(int32 EntryPoint, const struct FActiveGameplayEffectHandle& CallFunc_Apply_Health_Bonus_EffectHandle, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAbilityTask_StartAbilityState* CallFunc_StartAbilityState_ReturnValue, bool CallFunc_IsImprovedDBNOEnabled_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FGameplayEventData& K2Node_Event_EventData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, double CallFunc_Get_Initial_Heal_Amount_Health, bool K2Node_Event_bWasCancelled, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UAnimMontage* CallFunc_Get_DBNO_Montage_ReturnValue, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, const struct FActiveGameplayEffectHandle& CallFunc_ApplyBleeding_EffectHandle, class UFortHeldObjectComponent* CallFunc_GetHeldObjectComponentAttachedToPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignSetByCallerMagnitude_ReturnValue, class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component, bool K2Node_DynamicCast_bSuccess_2, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component_1, bool K2Node_DynamicCast_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_2, bool K2Node_DynamicCast_bSuccess_4, class UFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_5, float CallFunc_AssignSetByCallerMagnitude_Magnitude_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
