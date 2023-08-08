#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB30 - 0xB28)
// BlueprintGeneratedClass GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C
class UGA_Riding_Creature_Burt_SprintCharge_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Riding_Creature_Burt_SprintCharge_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo);
	void ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge(int32 EntryPoint, const struct FGameplayAbilityActorInfo& K2Node_Event_ActorInfo, bool K2Node_Event_bWasCancelled, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortAthenaCollisionReactionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Run_ReturnValue, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class UFortAthenaCollisionReactionComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
