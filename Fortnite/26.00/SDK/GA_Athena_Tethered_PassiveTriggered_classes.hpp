#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0xB3C - 0xB28)
// BlueprintGeneratedClass GA_Athena_Tethered_PassiveTriggered.GA_Athena_Tethered_PassiveTriggered_C
class UGA_Athena_Tethered_PassiveTriggered_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          GCN_BoostTag;                                      // 0xB30(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GCN_JumpTag;                                       // 0xB34(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          ZiplineExit;                                       // 0xB38(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Athena_Tethered_PassiveTriggered_C* GetDefaultObj();

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered(int32 EntryPoint, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class UActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue);
};

}


