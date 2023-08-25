#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xB58 - 0xB28)
// BlueprintGeneratedClass GA_Riding_Creature_EatToRefuel.GA_Riding_Creature_EatToRefuel_C
class UGA_Riding_Creature_EatToRefuel_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                 Slap_Berry_Tags;                                   // 0xB30(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSubclassOf<class UGameplayEffect>           Slap_Berry_Gameplay_Effect;                        // 0xB50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Riding_Creature_EatToRefuel_C* GetDefaultObj();

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Riding_Creature_EatToRefuel(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, bool K2Node_SwitchEnum_CmpSuccess, const struct FGameplayEventData& K2Node_Event_EventData, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class UControllableRidableComponent* CallFunc_GetComponentByClass_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, class UCreatureBaseRidableComponent_C* K2Node_DynamicCast_AsCreature_Base_Ridable_Component, bool K2Node_DynamicCast_bSuccess, class UFortPawn* CallFunc_GetActivatingPawn_ReturnValue, bool CallFunc_HasAllTags_ReturnValue, class UNPC_Pawn_Wildlife_Parent_C* K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent, bool K2Node_DynamicCast_bSuccess_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
};

}


