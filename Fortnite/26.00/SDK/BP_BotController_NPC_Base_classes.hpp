#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x1790 - 0x1740)
// BlueprintGeneratedClass BP_BotController_NPC_Base.BP_BotController_NPC_Base_C
class UBP_BotController_NPC_Base_C : public UBP_PhoebeController_NonParticipant_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1740(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortAthenaNpcPatrollingComponent*     FortAthenaNpcPatrolling;                           // 0x1748(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_Patrolling;                                     // 0x1750(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           GE_PatrollingSpeedHandle;                          // 0x1758(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              SavedRotationRate;                                 // 0x1760(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              PatrollingRotationRate;                            // 0x1778(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_BotController_NPC_Base_C* GetDefaultObj();

	void BndEvt__FortAthenaNpcPatrolling_K2Node_ComponentBoundEvent_0_PatrollingComponentOnStartPatrolling__DelegateSignature();
	void BndEvt__FortAthenaNpcPatrolling_K2Node_ComponentBoundEvent_1_PatrollingComponentOnStopPatrolling__DelegateSignature();
	void ExecuteUbergraph_BP_BotController_NPC_Base(int32 EntryPoint, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue);
};

}


