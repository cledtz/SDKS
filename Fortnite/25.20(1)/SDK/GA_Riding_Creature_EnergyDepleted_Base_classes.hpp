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

// 0x8 (0xE68 - 0xE60)
// BlueprintGeneratedClass GA_Riding_Creature_EnergyDepleted_Base.GA_Riding_Creature_EnergyDepleted_Base_C
class UGA_Riding_Creature_EnergyDepleted_Base_C : public UGA_NPC_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE60(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Riding_Creature_EnergyDepleted_Base_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo);
	void ExecuteUbergraph_GA_Riding_Creature_EnergyDepleted_Base(int32 EntryPoint, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_bWasCancelled, const struct FGameplayAbilityActorInfo& K2Node_Event_ActorInfo, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class UCreatureBaseRidableComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
