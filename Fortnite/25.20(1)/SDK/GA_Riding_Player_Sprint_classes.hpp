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

// 0x19 (0xB41 - 0xB28)
// BlueprintGeneratedClass GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C
class UGA_Riding_Player_Sprint_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FGameplayTag>                  Tags_to_cancel_sprinting;                          // 0xB30(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ShouldCancelSprint;                                // 0xB40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Riding_Player_Sprint_C");
		return Clss;
	}

	void OnRep_CancelSprintDispatcher();
	void Added_BA9D24D64958BB04345A3D89BD7617CA();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo);
	void ExecuteUbergraph_GA_Riding_Player_Sprint(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool K2Node_Event_bWasCancelled, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class UControllingRiderComponent* CallFunc_GetComponentByClass_ReturnValue, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, class UControllingRiderComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, class UCreatureBaseRidableComponent_C* K2Node_DynamicCast_AsCreature_Base_Ridable_Component, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_7, class UCreatureBaseRidableComponent_C* K2Node_DynamicCast_AsCreature_Base_Ridable_Component_1, bool K2Node_DynamicCast_bSuccess_3, class UActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, class UCreatureBaseRidableComponent_C* K2Node_DynamicCast_AsCreature_Base_Ridable_Component_2, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_9, class UActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_10, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FGameplayAbilityActorInfo& K2Node_Event_ActorInfo, bool CallFunc_IsValid_ReturnValue_11, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, bool CallFunc_IsValid_ReturnValue_12);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
