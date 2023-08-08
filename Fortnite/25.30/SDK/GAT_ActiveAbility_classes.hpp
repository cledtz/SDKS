#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xB50 - 0xB28)
// BlueprintGeneratedClass GAT_ActiveAbility.GAT_ActiveAbility_C
class UGAT_ActiveAbility_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          TC_AbilitiesGenericActiveAbilityActivate;          // 0xB30(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  N_SavedCollisionChannel;                           // 0xB34(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_KnockBackImmunity;                              // 0xB38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           GEH_KnockBackImmunity;                             // 0xB40(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bPlayerHolsterState;                               // 0xB48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8769[0x3];                                     // Fixing Size After Last Property
	struct FGameplayTag                          TC_AbilitiesGenericActiveAbilityEndAbility;        // 0xB4C(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAT_ActiveAbility_C");
		return Clss;
	}

	void EndAbilityWithReason(const class FString& Reason);
	void SendHeroAbilityActivationEvent(const struct FGameplayTag& T_Event_HeroAbilityActivate);
	void SetHolsterWeaponWithName(class UFortPawn* Target_Fort_Pawn, bool ShouldHolster, bool PlayEquipAnim, bool ShowDebugPrintName, bool* IsWeaponHolstered, bool* OperationSuccessful, bool bOperationSuccessful, bool CallFunc_BooleanXOR_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload);
	void ActiveAbilitySetup(class UAbilitySystemComponent* AbilitySystemIn, class UAbilitySystemComponent** AbilitySystemOut);
	void SetKnockbackImmunity(bool ImmunityOn, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue);
	void SetPawnCollision(class UFortPawn* FortPawn, bool CollisionOn, bool CallFunc_NotEqual_NameName_ReturnValue, class FName CallFunc_GetCollisionProfileName_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GAT_ActiveAbility(int32 EntryPoint, bool K2Node_Event_bWasCancelled);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
