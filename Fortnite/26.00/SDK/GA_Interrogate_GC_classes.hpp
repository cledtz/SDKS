#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xB34 - 0xB28)
// BlueprintGeneratedClass GA_Interrogate_GC.GA_Interrogate_GC_C
class UGA_Interrogate_GC_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          Cue;                                               // 0xB30(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Interrogate_GC_C* GetDefaultObj();

	void K2_ActivateAbility();
	void FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo);
	void ExecuteUbergraph_GA_Interrogate_GC(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_GetGrantedByEffectContext_ReturnValue, class UObject* CallFunc_EffectContextGetSourceObject_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, const struct FGameplayAbilityActorInfo& K2Node_Event_ActorInfo);
};

}


