#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0xB78 - 0xB28)
// BlueprintGeneratedClass GA_Athena_HidingProp_HidingInProp.GA_Athena_HidingProp_HidingInProp_C
class UGA_Athena_HidingProp_HidingInProp_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                 ChangeEquipmentTag;                                // 0xB30(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_bDisablePlayerCollision;                       // 0xB50(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_Athena_HidingProp_HidingInProp_C* GetDefaultObj();

	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void GrapplerFailSafe();
	void ExecuteUbergraph_GA_Athena_HidingProp_HidingInProp(int32 EntryPoint, bool CallFunc_GetValueAsBool_ReturnValue, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_bWasCancelled, bool CallFunc_GetValueAsBool_ReturnValue_1, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_PlayAnimMontage_ReturnValue);
};

}


