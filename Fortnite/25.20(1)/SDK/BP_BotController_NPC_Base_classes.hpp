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

// 0x50 (0x1458 - 0x1408)
// BlueprintGeneratedClass BP_BotController_NPC_Base.BP_BotController_NPC_Base_C
class UBP_BotController_NPC_Base_C : public UBP_PhoebeController_NonParticipant_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortAthenaNpcPatrollingComponent*     FortAthenaNpcPatrolling;                           // 0x1410(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_Patrolling;                                     // 0x1418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           GE_PatrollingSpeedHandle;                          // 0x1420(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              SavedRotationRate;                                 // 0x1428(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              PatrollingRotationRate;                            // 0x1440(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_BotController_NPC_Base_C");
		return Clss;
	}

	void BndEvt__FortAthenaNpcPatrolling_K2Node_ComponentBoundEvent_0_PatrollingComponentOnStartPatrolling__DelegateSignature();
	void BndEvt__FortAthenaNpcPatrolling_K2Node_ComponentBoundEvent_1_PatrollingComponentOnStopPatrolling__DelegateSignature();
	void ExecuteUbergraph_BP_BotController_NPC_Base(int32 EntryPoint, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
