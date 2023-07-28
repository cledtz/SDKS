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

// 0x30 (0xB58 - 0xB28)
// BlueprintGeneratedClass GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C
class UGAB_AthenaDBNORevive_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          EC_AppliedEffect;                                  // 0xB30(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98E9[0x4];                                     // Fixing Size After Last Property..
	class UFortPlayerPawn*                       PlayerPawn;                                        // 0xB38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          ResurrectCue;                                      // 0xB40(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          ResurrectAthenaCue;                                // 0xB44(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          DBNOMontageOutro;                                  // 0xB48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          DBNOMontageOutroSwimming;                          // 0xB50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_AthenaDBNORevive_C");
		return Clss;
	}

	void Get_DBNO_Outro_Montage(class UAnimMontage** DBNOMontageOutro, bool CallFunc_IsSurfaceSwimming_ReturnValue);
	void Completed_23712DBC45E68EA0C91A4895CBD8B3A6(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_23712DBC45E68EA0C91A4895CBD8B3A6(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_779E7BAA49FEAD286C5164B83CDFD609(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_779E7BAA49FEAD286C5164B83CDFD609(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Removed_620488CD4F8BFC035EC7328664732683();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GAB_AthenaDBNORevive(int32 EntryPoint, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_3, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_3, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_3, class UFortAbilityTask_WaitTargetSelection* CallFunc_WaitTargetSelection_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAbilityTask_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemove_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector_NetQuantize10& CallFunc_MakeVector_NetQuantize10_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector_NetQuantizeNormal& CallFunc_MakeVector_NetQuantizeNormal_ReturnValue, bool K2Node_Event_bWasCancelled, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_4, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UAnimMontage* CallFunc_Get_DBNO_Outro_Montage_DBNOMontageOutro, const struct FFortGameplayAbilityMontageInfo& K2Node_MakeStruct_FortGameplayAbilityMontageInfo, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
