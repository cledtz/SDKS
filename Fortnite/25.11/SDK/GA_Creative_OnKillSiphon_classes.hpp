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

// 0x44 (0xBA4 - 0xB60)
// BlueprintGeneratedClass GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C
class UGA_Creative_OnKillSiphon_C : public UGAT_Creative_TriggeredAbility_Pawn_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB60(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortGameStateAthena*                  GameState;                                         // 0xB68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCreativeOrPlayground;                            // 0xB70(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E63[0x7];                                     // Fixing Size After Last Property..
	class UClass*                                GE_HealPlayer;                                     // 0xB78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bShouldConvertExcessHealthToShields;               // 0xB80(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E64[0x7];                                     // Fixing Size After Last Property..
	class UClass*                                ShieldGE;                                          // 0xB88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          ConsumedCue;                                       // 0xB90(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bDebugBypasLocalMapEnable;                         // 0xB94(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAttemptHealthRestore;                             // 0xB95(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAttemptMatsRestore;                               // 0xB96(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E65[0x1];                                     // Fixing Size After Last Property..
	class FName                                  NameGrantWood;                                     // 0xB98(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  NameGrantStone;                                    // 0xB9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  NameGrantMetal;                                    // 0xBA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Creative_OnKillSiphon_C");
		return Clss;
	}

	void GiveResourcesToPlayer(bool bShouldGrant, int32 GiveAmount, enum class EFortResourceType GiveType, bool* Success, FInterfaceProperty_ InventoryOwner, class UFortWorldItemDefinition* LocalItemToGive, bool K2Node_SwitchEnum_CmpSuccess, class AController* CallFunc_GetControllerFromActor_ReturnValue, class AFortAthenaAIBotController* K2Node_DynamicCast_AsFort_Athena_AIBot_Controller, bool K2Node_DynamicCast_bSuccess, class UFortWorldItem* CallFunc_GiveItemToInventoryOwner_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void CalculateResources(enum class EFortResourceType ResourceGrantType, bool* bSuccess, int32* ResourceToGive, enum class EFortResourceType* ResourceType, class FName LocalDataTableRowName, int32 ILocalResourceToGive, float CallFunc_GetOverridenSiphonGoldValue_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, float CallFunc_GetOverridenSiphonMetalValue_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, float CallFunc_GetOverridenSiphonWoodValue_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, float CallFunc_GetOverridenSiphonStoneValue_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_3, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, int32 CallFunc_FTrunc_ReturnValue_4, bool K2Node_SwitchEnum_CmpSuccess_2, double CallFunc_FTrunc_A_ImplicitCast, double CallFunc_FTrunc_A_ImplicitCast_1, double CallFunc_FTrunc_A_ImplicitCast_2, double CallFunc_FTrunc_A_ImplicitCast_3, double CallFunc_FTrunc_A_ImplicitCast_4);
	void AttemptMats(bool CallFunc_CalculateResources_bSuccess, int32 CallFunc_CalculateResources_ResourceToGive, enum class EFortResourceType CallFunc_CalculateResources_ResourceType, bool CallFunc_CalculateResources_bSuccess_1, int32 CallFunc_CalculateResources_ResourceToGive_1, enum class EFortResourceType CallFunc_CalculateResources_ResourceType_1, bool CallFunc_GiveResourcesToPlayer_Success, bool CallFunc_GiveResourcesToPlayer_Success_1, bool CallFunc_CalculateResources_bSuccess_2, int32 CallFunc_CalculateResources_ResourceToGive_2, enum class EFortResourceType CallFunc_CalculateResources_ResourceType_2, bool CallFunc_CalculateResources_bSuccess_3, int32 CallFunc_CalculateResources_ResourceToGive_3, enum class EFortResourceType CallFunc_CalculateResources_ResourceType_3, bool CallFunc_GiveResourcesToPlayer_Success_2, bool CallFunc_GiveResourcesToPlayer_Success_3);
	void AttemptHeal(bool CallFunc_RestoreHealth_Success, double CallFunc_RestoreHealth_InitialHealAmount, double CallFunc_RestoreHealth_ActualAppliedHeal, double CallFunc_RestoreHealth_ExcessHealing, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_AddShields_bAddedShields, double CallFunc_AddShields_ShieldAdded, bool CallFunc_BooleanOR_ReturnValue);
	void SetupRestoreModes(bool* ShouldContinue, bool CallFunc_IsSpatialGameplayExperience_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult_1, float CallFunc_EvaluateCurveTableRow_OutXY_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1);
	void DetermineHealthDelta(double HealingAmount, double* MaxHealth, double* CurrentHealth, double* HealthDelta, double* ExcessHealh, double Temp_real_Variable, bool Temp_bool_Variable, float CallFunc_GetHealth_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double K2Node_Select_Default, double K2Node_FunctionResult_MaxHealth_ImplicitCast, double K2Node_FunctionResult_CurrentHealth_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast);
	void AddShields(bool bShouldConvertExcessHealthToShields, double ShieldToAdd, bool* bAddedShields, double* ShieldAdded, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast);
	void RestoreHealth(bool* Success, double* InitialHealAmount, double* ActualAppliedHeal, double* ExcessHealing, double FShieldRestored, double FActualAmountHealed, double FInitialAmountToHeal, bool Temp_bool_Variable, double CallFunc_DetermineHealthDelta_MaxHealth, double CallFunc_DetermineHealthDelta_CurrentHealth, double CallFunc_DetermineHealthDelta_HealthDelta, double CallFunc_DetermineHealthDelta_ExcessHealh, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_FMin_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetOverridenSiphonHealthValue_ReturnValue, double K2Node_Select_Default, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast, double K2Node_Select_Option_0_ImplicitCast, double K2Node_Select_Option_1_ImplicitCast);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, bool bLocalMatsOnKill, bool bLocalHealthOnKill, bool bLocalShouldActivate, class AController* CallFunc_GetControllerFromActor_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsDBNO_ReturnValue, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult_1, float CallFunc_EvaluateCurveTableRow_OutXY_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Creative_OnKillSiphon(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_SetupRestoreModes_ShouldContinue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
