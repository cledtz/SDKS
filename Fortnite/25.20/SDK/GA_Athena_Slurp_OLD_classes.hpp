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
// BlueprintGeneratedClass GA_Athena_Slurp_OLD.GA_Athena_Slurp_OLD_C
class UGA_Athena_Slurp_OLD_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xB30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        IncreCheck;                                        // 0xB38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EB6[0x4];                                     // Fixing Size After Last Property..
	double                                       MaxTicks;                                          // 0xB40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TimerHandle;                                       // 0xB48(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       TickRate;                                          // 0xB50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_Slurp_OLD_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ApplyHealthOrShield();
	void ExecuteUbergraph_GA_Athena_Slurp_OLD(int32 EntryPoint, bool K2Node_Event_bWasCancelled, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1, bool CallFunc_K2_CommitAbility_ReturnValue, bool CallFunc_IsDBNO_ReturnValue, float CallFunc_GetHealth_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult_1, float CallFunc_EvaluateCurveTableRow_OutXY_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, int32 Temp_int_Variable, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_B_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, double K2Node_VariableSet_TickRate_ImplicitCast, double K2Node_VariableSet_MaxTicks_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
