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

// 0x40 (0xB68 - 0xB28)
// BlueprintGeneratedClass GA_BoostJumpPack_JumpHover.GA_BoostJumpPack_JumpHover_C
class UGA_BoostJumpPack_JumpHover_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                 RequiredTags;                                      // 0xB30(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FActiveGameplayEffectHandle           GE_Hover_Instance;                                 // 0xB50(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       RequiredFuelToActivate;                            // 0xB58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_Hover;                                          // 0xB60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_BoostJumpPack_JumpHover_C");
		return Clss;
	}

	void K2_CommitExecute();
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags, bool Temp_bool_Variable, const struct FGameplayTagContainer& CallFunc_K2_CanActivateAbility_RelevantTags, bool CallFunc_K2_CanActivateAbility_ReturnValue, double Temp_real_Variable, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, double K2Node_Select_Default, FInterfaceProperty_ CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double K2Node_Select_Option_1_ImplicitCast);
	void K2_OnEndAbility(bool bWasCancelled);
	void OnAbilityInputReleased();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_BoostJumpPack_JumpHover(int32 EntryPoint, bool K2Node_Event_bWasCancelled, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
