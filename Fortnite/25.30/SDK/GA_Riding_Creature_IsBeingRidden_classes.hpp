#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xE68 - 0xE60)
// BlueprintGeneratedClass GA_Riding_Creature_IsBeingRidden.GA_Riding_Creature_IsBeingRidden_C
class UGA_Riding_Creature_IsBeingRidden_C : public UGA_NPC_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE60(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Riding_Creature_IsBeingRidden_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo);
	void ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden(int32 EntryPoint, bool K2Node_Event_bWasCancelled, const struct FGameplayAbilityActorInfo& K2Node_Event_ActorInfo);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
