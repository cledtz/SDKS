#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xB60 - 0xB28)
// BlueprintGeneratedClass GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper.GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C
class UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UControllableRidableComponent*         ControllableRidableComponent_Cached;               // 0xB30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFortAIPawn*                           FortAIPawnCached;                                  // 0xB38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       InitialMaxAcceleration;                            // 0xB40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxRotationRateYaw;                                // 0xB48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GCN_BoostTag;                                      // 0xB50(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_921A[0x4];                                     // Fixing Size After Last Property 
	class UFortGameplayAbility*                  TargetAbilityCached;                               // 0xB58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C* GetDefaultObj();

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void FireBoostEffectsOnPlayerMulti(class UActor* PlayerTarget);
	void ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_IsValid_ReturnValue_1, class UFortGameplayAbility* K2Node_DynamicCast_AsFort_Gameplay_Ability, bool K2Node_DynamicCast_bSuccess, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class UFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, class UControllableRidableComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class UActor* K2Node_CustomEvent_PlayerTarget, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, class UActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_K2_HasAuthority_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, double K2Node_VariableSet_InitialMaxAcceleration_ImplicitCast, float K2Node_VariableSet_MaxAcceleration_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast);
};

}


