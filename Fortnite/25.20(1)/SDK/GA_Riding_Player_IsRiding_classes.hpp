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

// 0x18 (0xB40 - 0xB28)
// BlueprintGeneratedClass GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C
class UGA_Riding_Player_IsRiding_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                          SettleMontageRef;                                  // 0xB30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFortAbilityTask_PlayMontageWaitTarget* SettleMontageTask;                                 // 0xB38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Riding_Player_IsRiding_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo);
	void ExecuteUbergraph_GA_Riding_Player_IsRiding(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_bWasCancelled, const struct FGameplayAbilityActorInfo& K2Node_Event_ActorInfo);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
